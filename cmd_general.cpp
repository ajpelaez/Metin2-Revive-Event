//search on ACMD(do_restart):
//4-5 times

ch->ReviveInvisible(5);

//add after:
quest::CQuestManager::instance().Revive(ch->GetPlayerID());

