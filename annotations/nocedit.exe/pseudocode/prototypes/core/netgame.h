#pragma once

// Function prototypes for core/netgame.cpp
// Generated from Ghidra function signatures

// Original: core_netgame.cpp_staticInit_FUN_0053f310
// Address: 0053f310
void __cdecl staticInit(void);

// Original: core_netgame.cpp_resetGameTime_FUN_0053f360
// Address: 0053f360
void __cdecl resetGameTime(void);

// Original: core_netgame.cpp_updateGameTime_FUN_0053f390
// Address: 0053f390
void __cdecl updateGameTime(void);

// Original: core_netgame.cpp_computeTimeDelta_FUN_0053f3e0
// Address: 0053f3e0
float __cdecl computeTimeDelta(int start_time,int end_time);

// Original: core_netgame.cpp_getElapsedSeconds_FUN_0053f440
// Address: 0053f440
float __cdecl getElapsedSeconds(uint timestamp);

// Original: core_netgame.cpp_resetChatCounts_FUN_0053f4a2
// Address: 0053f4a2
void __cdecl resetChatCounts(int count);

// Original: core_netgame.cpp_removeChatOut_FUN_0053f4b0
// Address: 0053f4b0
void __cdecl removeChatOut(int index);

// Original: core_netgame.cpp_findSimFrame_FUN_0053f550
// Address: 0053f550
int __cdecl findSimFrame(int sequence_number);

// Original: core_netgame.cpp_allocSimFrame_FUN_0053f5a0
// Address: 0053f5a0
SSimFrame * __cdecl allocSimFrame(int sequence_number);

// Original: core_netgame.cpp_purgeOldSimFrames_FUN_0053f650
// Address: 0053f650
void __cdecl purgeOldSimFrames(int min_sequence);

// Original: core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
// Address: 0053f6d0
CNetGame * __cdecl CNetGame::ctor(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_dtor_FUN_0053f760
// Address: 0053f760
CNetGame * __cdecl CNetGame::dtor(CNetGame *this_ptr,uint flags);

// Original: core_netgame.cpp_CNetGame_init_FUN_0053f780
// Address: 0053f780
void __cdecl CNetGame::init(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_shutdown_FUN_0053f830
// Address: 0053f830
void __cdecl CNetGame::shutdown(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_0053f860
// Address: 0053f860
int __cdecl CNetGame::initializeNetworkToHost(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900
// Address: 0053f900
int __cdecl CNetGame::initializeNetworkToJoin(CNetGame *this_ptr,uint32_t *server_ip);

// Original: core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0
// Address: 0053fbc0
int __cdecl CNetGame::initializeNetwork(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00
// Address: 0053fd00
void __cdecl CNetGame::disconnect(CNetGame *this_ptr,int perform_handshake);

// Original: core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
// Address: 005401e0
int __cdecl CNetGame::syncPlayers(CNetGame *this_ptr,int sync_stage);

// Original: core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_00540550
// Address: 00540550
void __cdecl CNetGame::flushIncomingPackets(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
// Address: 005405b0
void __cdecl CNetGame::receivePackets(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_processPacket_FUN_005406a0
// Address: 005406a0
void __cdecl CNetGame::processPacket(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet);

// Original: core_netgame.cpp_CNetGame_send_FUN_005411c0
// Address: 005411c0
void __cdecl CNetGame::send(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet);

// Original: core_netgame.cpp_CNetGame_sendPacket_FUN_00541230
// Address: 00541230
void __cdecl CNetGame::sendPacket(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet);

// Original: core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_00541260
// Address: 00541260
int __cdecl CNetGame::findPlayerByAddr(CNetGame *this_ptr,SNetworkAddr *addr);

// Original: core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
// Address: 005412b0
int __cdecl CNetGame::addPlayer(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode);

// Original: core_netgame.cpp_CNetGame_runLobby_FUN_00541390
// Address: 00541390
int __cdecl CNetGame::runLobby(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
// Address: 00541c80
void __cdecl CNetGame::updatePing(CNetGame *this_ptr,int player_index,float max_ping);

// Original: core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40
// Address: 00541e40
void __cdecl CNetGame::processChatOut(CNetGame *this_ptr,char *message,int target_player);

// Original: core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
// Address: 00541ff0
void __cdecl CNetGame::removeChatOut(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_addChatHistory_FUN_00542370
// Address: 00542370
void __cdecl CNetGame::addChatHistory(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message);

// Original: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
// Address: 00542470
int __cdecl CNetGame::applyNewGameSettings(CNetGame *this_ptr,UNetPacket *packet);

// Original: core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
// Address: 00542b00
void __cdecl CNetGame::removePlayer(CNetGame *this_ptr,int player_index);

// Original: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
// Address: 00542cf0
void __cdecl CNetGame::gameSettingsChanged(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
// Address: 00542dd0
void __cdecl CNetGame::sendGameSetting(CNetGame *this_ptr,int player_index);

// Original: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
// Address: 00542ff0
void __cdecl CNetGame::sendMyStateChanged(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
// Address: 00543150
void __cdecl CNetGame::processServerFrame(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0
// Address: 005435a0
void __cdecl CNetGame::processClientFrame(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
// Address: 00543800
void __cdecl CNetGame::applySimFrameHistory(CNetGame *this_ptr,SSimFrame *sim_frame);

// Original: core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0
// Address: 005438c0
SPlayerControl * __cdecl CNetGame::getMyControls(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930
// Address: 00543930
void __cdecl CNetGame::sendDisconnectNotify(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload);

// Original: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
// Address: 00543970
void __cdecl CNetGame::sendSimFrameAck(CNetGame *this_ptr);

// Original: core_netgame.cpp_matchPacketSize_FUN_00543ab0
// Address: 00543ab0
int __cdecl matchPacketSize(SNetPacketHeader *a,SNetPacketHeader *b);

// Original: core_netgame.cpp_matchPacketHeader_FUN_00543ad0
// Address: 00543ad0
int __cdecl matchPacketHeader(SNetPacketHeader *a,SNetPacketHeader *b);

// Original: core_netgame.cpp_initNetPacket_FUN_00543b00
// Address: 00543b00
void __cdecl initNetPacket(SNetPacketHeader *packet,int packet_size,uchar packet_type);

// Original: core_netgame.cpp_CNetGame_setModeSyncing_FUN_00543b20
// Address: 00543b20
void __cdecl CNetGame::setModeSyncing(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setModePlaying_FUN_00543b30
// Address: 00543b30
void __cdecl CNetGame::setModePlaying(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode5_FUN_00543b40
// Address: 00543b40
void __cdecl CNetGame::setMode5(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode6_FUN_00543b50
// Address: 00543b50
void __cdecl CNetGame::setMode6(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode7_FUN_00543b60
// Address: 00543b60
void __cdecl CNetGame::setMode7(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode9_FUN_00543b70
// Address: 00543b70
void __cdecl CNetGame::setMode9(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode10_FUN_00543b80
// Address: 00543b80
void __cdecl CNetGame::setMode10(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode12_FUN_00543b90
// Address: 00543b90
void __cdecl CNetGame::setMode12(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode13_FUN_00543ba0
// Address: 00543ba0
void __cdecl CNetGame::setMode13(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_swapPlayerData_FUN_00543bb0
// Address: 00543bb0
void __cdecl CNetGame::swapPlayerData(CNetGame *this_ptr,SNetPlayer *other);

// Original: core_netgame.cpp_SPlayer_ctor_FUN_00543cb0
// Address: 00543cb0
SPlayer * __cdecl SPlayer::ctor(SPlayer *this_ptr);

// Original: core_netgame.cpp_SChatHistory_ctor_FUN_00543cc0
// Address: 00543cc0
SChatHistory * __cdecl SChatHistory::ctor(SChatHistory *this_ptr);

// Original: core_netgame.cpp_SChatHistory_dtor_FUN_00543cd0
// Address: 00543cd0
SChatHistory * __cdecl SChatHistory::dtor(SChatHistory *this_ptr,uint flags);

// Original: core_netgame.cpp_SNetPlayer_ctor_FUN_00543ce0
// Address: 00543ce0
SNetPlayer * __cdecl SNetPlayer::ctor(SNetPlayer *this_ptr);

// Original: core_netgame.cpp_SNetPlayer_copy_FUN_00543cf0
// Address: 00543cf0
void __cdecl SNetPlayer::copy(SNetPlayer *this_ptr,SNetPlayer *other);

// Original: core_netgame.cpp_copyPlayerControls_FUN_00543db0
// Address: 00543db0
void __cdecl copyPlayerControls(SPlayerControl *dest,SPlayerControl *src);

// Original: core_netgame.cpp_copyNetAddr_FUN_00543e00
// Address: 00543e00
void __cdecl copyNetAddr(SNetworkAddr *dest,SNetworkAddr *src);

// Original: core_netgame.cpp_copyInteger_FUN_00543e20
// Address: 00543e20
int * __cdecl copyInteger(int *dest,int *src);

// Original: core_netgame.cpp_copyInteger_FUN_00543e30
// Address: 00543e30
int * __cdecl copyInteger(int *dest,int *src);
