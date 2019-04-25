//search:
m_mapEventName.insert(TEventNameMap::value_type("kill", QUEST_KILL_EVENT));

//add after:
m_mapEventName.insert(TEventNameMap::value_type("revive", QUEST_REVIVE_EVENT));


//search: 
bool CQuestManager::ServerTimer(unsigned int npc, unsigned int arg)

//add before:

	void CQuestManager::Revive(unsigned int pc)
	{
		PC * pPC;

		if ((pPC = GetPC(pc)))
		{
			if (!CheckQuestLoaded(pPC))
				return;

			m_mapNPC[QUEST_NO_NPC].OnRevive(*pPC);
		}
		else
		{
			sys_err("QUEST REVIVE_EVENT no such pc id : %d", pc);
		}
	}