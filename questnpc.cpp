//search:
bool NPC::OnLevelUp(PC& pc)

//add before:

	bool NPC::OnRevive(PC& pc)
	{
		return HandleReceiveAllEvent(pc, QUEST_REVIVE_EVENT);
	}