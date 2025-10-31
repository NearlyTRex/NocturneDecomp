#pragma once

// Function prototypes for core/netgame.cpp
// Generated from Ghidra function signatures

// Original: core_netgame.cpp_staticInit_FUN_0053f310
// Address: 0053f310
undefined staticInit();

// Original: core_netgame.cpp_FUN_0053f360
// Address: 0053f360
undefined FUN_0053f360();

// Original: core_netgame.cpp_FUN_0053f390
// Address: 0053f390
undefined FUN_0053f390();

// Original: core_netgame.cpp_FUN_0053f3e0
// Address: 0053f3e0
undefined FUN_0053f3e0();

// Original: core_netgame.cpp_FUN_0053f440
// Address: 0053f440
undefined FUN_0053f440();

// Original: core_netgame.cpp_FUN_0053f4a2
// Address: 0053f4a2
undefined FUN_0053f4a2();

// Original: core_netgame.cpp_removeChatOut_FUN_0053f4b0
// Address: 0053f4b0
undefined removeChatOut();

// Original: core_netgame.cpp_FUN_0053f550
// Address: 0053f550
undefined FUN_0053f550();

// Original: core_netgame.cpp_allocSimFrame_FUN_0053f5a0
// Address: 0053f5a0
undefined allocSimFrame();

// Original: core_netgame.cpp_FUN_0053f650
// Address: 0053f650
undefined FUN_0053f650();

// Original: core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
// Address: 0053f6d0
CNetGame * CNetGame::ctor(CNetGame * this_ptr);

// Original: core_netgame.cpp_CNetGame_dtor_FUN_0053f760
// Address: 0053f760
CNetGame * CNetGame::dtor(CNetGame * this_ptr);

// Original: core_netgame.cpp_CNetGame_FUN_0053f780
// Address: 0053f780
undefined CNetGame();

// Original: core_netgame.cpp_CNetGame_FUN_0053f830
// Address: 0053f830
undefined CNetGame();

// Original: core_netgame.cpp_initializeNetworkToHost_FUN_0053f860
// Address: 0053f860
undefined initializeNetworkToHost();

// Original: core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900
// Address: 0053f900
undefined initializeNetworkToJoin();

// Original: core_netgame.cpp_initializeNetwork_FUN_0053fbc0
// Address: 0053fbc0
undefined initializeNetwork();

// Original: core_netgame.cpp_CNetGame_FUN_0053fd00
// Address: 0053fd00
void CNetGame(CNetGame * this_ptr);

// Original: core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
// Address: 005401e0
int CNetGame::syncPlayers(CNetGame * this_ptr, int sync_stage);

// Original: core_netgame.cpp_FUN_00540550
// Address: 00540550
undefined FUN_00540550();

// Original: core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
// Address: 005405b0
void CNetGame::receivePackets(CNetGame * this_ptr);

// Original: core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0
// Address: 005406a0
void CNetGame::allocSimFrame(CNetGame * this_ptr, SNetworkAddr * source_addr, char * packet_data);

// Original: core_netgame.cpp_CNetGame_send_FUN_005411c0
// Address: 005411c0
undefined CNetGame::send();

// Original: core_netgame.cpp_CNetGame_FUN_00541230
// Address: 00541230
undefined CNetGame();

// Original: core_netgame.cpp_CNetGame_FUN_00541260
// Address: 00541260
undefined CNetGame();

// Original: core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
// Address: 005412b0
undefined CNetGame::addPlayer();

// Original: core_netgame.cpp_FUN_00541390
// Address: 00541390
undefined FUN_00541390();

// Original: core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
// Address: 00541c80
void CNetGame::updatePing(CNetGame * this_ptr, int player_index, float max_ping);

// Original: core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40
// Address: 00541e40
undefined CNetGame::processChatOut();

// Original: core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
// Address: 00541ff0
undefined CNetGame::removeChatOut();

// Original: core_netgame.cpp_CNetGame_FUN_00542370
// Address: 00542370
undefined CNetGame();

// Original: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
// Address: 00542470
undefined CNetGame::applyNewGameSettings();

// Original: core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
// Address: 00542b00
undefined CNetGame::removePlayer();

// Original: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
// Address: 00542cf0
undefined CNetGame::gameSettingsChanged();

// Original: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
// Address: 00542dd0
undefined CNetGame::sendGameSetting();

// Original: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
// Address: 00542ff0
undefined CNetGame::sendMyStateChanged();

// Original: core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
// Address: 00543150
void CNetGame::processServerFrame(CNetGame * this_ptr);

// Original: core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0
// Address: 005435a0
void CNetGame::processClientFrame(CNetGame * this_ptr);

// Original: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
// Address: 00543800
undefined CNetGame::applySimFrameHistory();

// Original: core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0
// Address: 005438c0
void * * CNetGame::getMyControls(CNetGame * this_ptr);

// Original: core_netgame.cpp_CNetGame_FUN_00543930
// Address: 00543930
undefined CNetGame();

// Original: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
// Address: 00543970
undefined CNetGame::sendSimFrameAck();

// Original: core_netgame.cpp_FUN_00543ab0
// Address: 00543ab0
undefined FUN_00543ab0();

// Original: core_netgame.cpp_FUN_00543ad0
// Address: 00543ad0
undefined FUN_00543ad0();

// Original: core_netgame.cpp_FUN_00543b00
// Address: 00543b00
undefined FUN_00543b00();

// Original: core_netgame.cpp_FUN_00543b20
// Address: 00543b20
undefined FUN_00543b20();

// Original: core_netgame.cpp_FUN_00543b30
// Address: 00543b30
undefined FUN_00543b30();

// Original: core_netgame.cpp_FUN_00543b40
// Address: 00543b40
undefined FUN_00543b40();

// Original: core_netgame.cpp_FUN_00543b50
// Address: 00543b50
undefined FUN_00543b50();

// Original: core_netgame.cpp_FUN_00543b60
// Address: 00543b60
undefined FUN_00543b60();

// Original: core_netgame.cpp_FUN_00543b70
// Address: 00543b70
undefined FUN_00543b70();

// Original: core_netgame.cpp_FUN_00543b80
// Address: 00543b80
undefined FUN_00543b80();

// Original: core_netgame.cpp_FUN_00543b90
// Address: 00543b90
undefined FUN_00543b90();

// Original: core_netgame.cpp_FUN_00543ba0
// Address: 00543ba0
undefined FUN_00543ba0();

// Original: core_netgame.cpp_FUN_00543bb0
// Address: 00543bb0
undefined FUN_00543bb0();

// Original: core_netgame.cpp_SPlayer_ctor_FUN_00543cb0
// Address: 00543cb0
SPlayer * SPlayer::ctor(SPlayer * this_ptr);

// Original: core_netgame.cpp_SChatHistory_ctor_FUN_00543cc0
// Address: 00543cc0
SChatHistory * SChatHistory::ctor(SChatHistory * this_ptr);

// Original: core_netgame.cpp_SChatHistory_dtor_FUN_00543cd0
// Address: 00543cd0
SChatHistory * SChatHistory::dtor(SChatHistory * this_ptr);

// Original: core_netgame.cpp_SNetPlayer_ctor_FUN_00543ce0
// Address: 00543ce0
SNetPlayer * SNetPlayer::ctor(SNetPlayer * this_ptr);

// Original: core_netgame.cpp_SNetPlayer_copy_FUN_00543cf0
// Address: 00543cf0
void SNetPlayer::copy(SNetPlayer * this_ptr, SNetPlayer * other);

// Original: core_netgame.cpp_FUN_00543db0
// Address: 00543db0
undefined FUN_00543db0();

// Original: core_netgame.cpp_FUN_00543e00
// Address: 00543e00
undefined FUN_00543e00();

// Original: core_netgame.cpp_CNetGame_FUN_00543e20
// Address: 00543e20
undefined CNetGame();

// Original: core_netgame.cpp_FUN_00543e30
// Address: 00543e30
undefined FUN_00543e30();
