#pragma once

// Function prototypes for core/netgame.cpp
// Generated from Ghidra function signatures

// Original: core_netgame.cpp_staticInit_FUN_004e94a0
// Address: 004e94a0
void __cdecl staticInit(void);

// Original: core_netgame.cpp_resetGameTime_FUN_004e94f0
// Address: 004e94f0
void __cdecl resetGameTime(void);

// Original: core_netgame.cpp_updateGameTime_FUN_004e9520
// Address: 004e9520
void __cdecl updateGameTime(void);

// Original: core_netgame.cpp_computeTimeDelta_FUN_004e9570
// Address: 004e9570
float __cdecl computeTimeDelta(int start_time,int end_time);

// Original: core_netgame.cpp_getElapsedSeconds_FUN_004e95d0
// Address: 004e95d0
float __cdecl getElapsedSeconds(uint timestamp);

// Original: core_netgame.cpp_resetChatCounts_FUN_004e9630
// Address: 004e9630
void __edx resetChatCounts(int count);

// Original: core_netgame.cpp_removeChatOut_FUN_004e9640
// Address: 004e9640
void __cdecl removeChatOut(int index);

// Original: core_netgame.cpp_findSimFrame_FUN_004e96e0
// Address: 004e96e0
int __cdecl findSimFrame(int sequence_number);

// Original: core_netgame.cpp_allocSimFrame_FUN_004e9730
// Address: 004e9730
SSimFrame * __cdecl allocSimFrame(int sequence_number);

// Original: core_netgame.cpp_purgeOldSimFrames_FUN_004e97e0
// Address: 004e97e0
void __cdecl purgeOldSimFrames(int min_sequence);

// Original: core_netgame.cpp_CNetGame_ctor_FUN_004e9860
// Address: 004e9860
CNetGame * __cdecl CNetGame::ctor(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_dtor_FUN_004e98f0
// Address: 004e98f0
CNetGame * __cdecl CNetGame::dtor(CNetGame *this_ptr,uint flags);

// Original: core_netgame.cpp_CNetGame_init_FUN_004e9910
// Address: 004e9910
void __cdecl CNetGame::init(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_shutdown_FUN_004e99c0
// Address: 004e99c0
void __cdecl CNetGame::shutdown(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0
// Address: 004e99f0
int __cdecl CNetGame::initializeNetworkToHost(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90
// Address: 004e9a90
int __cdecl CNetGame::initializeNetworkToJoin(CNetGame *this_ptr,uint32_t *server_ip);

// Original: core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50
// Address: 004e9d50
int __cdecl CNetGame::initializeNetwork(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90
// Address: 004e9e90
void __cdecl CNetGame::disconnect(CNetGame *this_ptr,int perform_handshake);

// Original: core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370
// Address: 004ea370
int __cdecl CNetGame::syncPlayers(CNetGame *this_ptr,int sync_stage);

// Original: core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0
// Address: 004ea6e0
void __cdecl CNetGame::flushIncomingPackets(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740
// Address: 004ea740
void __cdecl CNetGame::receivePackets(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_processPacket_FUN_004ea830
// Address: 004ea830
void __cdecl CNetGame::processPacket(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet);

// Original: core_netgame.cpp_CNetGame_send_FUN_004eb350
// Address: 004eb350
void __cdecl CNetGame::send(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet);

// Original: core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0
// Address: 004eb3c0
void __cdecl CNetGame::sendPacket(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet);

// Original: core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_004eb3f0
// Address: 004eb3f0
int __cdecl CNetGame::findPlayerByAddr(CNetGame *this_ptr,SNetworkAddr *addr);

// Original: core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440
// Address: 004eb440
int __cdecl CNetGame::addPlayer(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode);

// Original: core_netgame.cpp_CNetGame_runLobby_FUN_004eb520
// Address: 004eb520
int __cdecl CNetGame::runLobby(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10
// Address: 004ebe10
void __cdecl CNetGame::updatePing(CNetGame *this_ptr,int player_index,float max_ping);

// Original: core_netgame.cpp_CNetGame_processChatOut_FUN_004ebfd0
// Address: 004ebfd0
void __cdecl CNetGame::processChatOut(CNetGame *this_ptr,char *message,int target_player);

// Original: core_netgame.cpp_CNetGame_removeChatOut_FUN_004ec180
// Address: 004ec180
void __cdecl CNetGame::removeChatOut(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500
// Address: 004ec500
void __cdecl CNetGame::addChatHistory(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message);

// Original: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_004ec600
// Address: 004ec600
int __cdecl CNetGame::applyNewGameSettings(CNetGame *this_ptr,UNetPacket *packet);

// Original: core_netgame.cpp_CNetGame_removePlayer_FUN_004ecc80
// Address: 004ecc80
void __cdecl CNetGame::removePlayer(CNetGame *this_ptr,int player_index);

// Original: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70
// Address: 004ece70
void __cdecl CNetGame::gameSettingsChanged(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_sendGameSetting_FUN_004ecf50
// Address: 004ecf50
void __cdecl CNetGame::sendGameSetting(CNetGame *this_ptr,int player_index);

// Original: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170
// Address: 004ed170
void __cdecl CNetGame::sendMyStateChanged(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0
// Address: 004ed2d0
void __cdecl CNetGame::processServerFrame(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720
// Address: 004ed720
void __cdecl CNetGame::processClientFrame(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_004ed980
// Address: 004ed980
void __cdecl CNetGame::applySimFrameHistory(CNetGame *this_ptr,SSimFrame *sim_frame);

// Original: core_netgame.cpp_CNetGame_getMyControls_FUN_004eda40
// Address: 004eda40
SPlayerInput * __cdecl CNetGame::getMyControls(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0
// Address: 004edab0
void __cdecl CNetGame::sendDisconnectNotify(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload);

// Original: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_004edaf0
// Address: 004edaf0
void __cdecl CNetGame::sendSimFrameAck(CNetGame *this_ptr);

// Original: core_netgame.cpp_matchPacketSize_FUN_004edc30
// Address: 004edc30
int __cdecl matchPacketSize(SNetPacketHeader *a,SNetPacketHeader *b);

// Original: core_netgame.cpp_matchPacketHeader_FUN_004edc50
// Address: 004edc50
int __cdecl matchPacketHeader(SNetPacketHeader *a,SNetPacketHeader *b);

// Original: core_netgame.cpp_initNetPacket_FUN_004edc80
// Address: 004edc80
void __cdecl initNetPacket(SNetPacketHeader *packet,int packet_size,uchar packet_type);

// Original: core_netgame.cpp_CNetGame_setModeSyncing_FUN_004edca0
// Address: 004edca0
void __cdecl CNetGame::setModeSyncing(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setModePlaying_FUN_004edcb0
// Address: 004edcb0
void __cdecl CNetGame::setModePlaying(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode5_FUN_004edcc0
// Address: 004edcc0
void __cdecl CNetGame::setMode5(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode6_FUN_004edcd0
// Address: 004edcd0
void __cdecl CNetGame::setMode6(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode7_FUN_004edce0
// Address: 004edce0
void __cdecl CNetGame::setMode7(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode9_FUN_004edcf0
// Address: 004edcf0
void __cdecl CNetGame::setMode9(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode10_FUN_004edd00
// Address: 004edd00
void __cdecl CNetGame::setMode10(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode12_FUN_004edd10
// Address: 004edd10
void __cdecl CNetGame::setMode12(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_setMode13_FUN_004edd20
// Address: 004edd20
void __cdecl CNetGame::setMode13(CNetGame *this_ptr);

// Original: core_netgame.cpp_CNetGame_swapPlayerData_FUN_004edd30
// Address: 004edd30
void __cdecl CNetGame::swapPlayerData(CNetGame *this_ptr,SNetPlayer *other);

// Original: core_netgame.cpp_SPlayer_ctor_FUN_004ede30
// Address: 004ede30
SPlayer * __cdecl SPlayer::ctor(SPlayer *this_ptr);

// Original: core_netgame.cpp_SChatHistory_ctor_FUN_004ede40
// Address: 004ede40
SChatHistory * __cdecl SChatHistory::ctor(SChatHistory *this_ptr);

// Original: core_netgame.cpp_SChatHistory_dtor_FUN_004ede50
// Address: 004ede50
SChatHistory * __cdecl SChatHistory::dtor(SChatHistory *this_ptr,uint flags);

// Original: core_netgame.cpp_SNetPlayer_ctor_FUN_004ede60
// Address: 004ede60
SNetPlayer * __cdecl SNetPlayer::ctor(SNetPlayer *this_ptr);

// Original: core_netgame.cpp_SNetPlayer_copy_FUN_004ede70
// Address: 004ede70
void __cdecl SNetPlayer::copy(SNetPlayer *this_ptr,SNetPlayer *other);

// Original: core_netgame.cpp_copyPlayerInput_FUN_004edf30
// Address: 004edf30
void __cdecl copyPlayerInput(SPlayerInput *dest,SPlayerInput *src);

// Original: core_netgame.cpp_copyNetAddr_FUN_004edf80
// Address: 004edf80
void __cdecl copyNetAddr(SNetworkAddr *dest,SNetworkAddr *src);

// Original: core_netgame.cpp_assignInt1_FUN_004edfa0
// Address: 004edfa0
int * __cdecl assignInt1(int *dest,int *src);

// Original: core_netgame.cpp_assignInt2_FUN_004edfb0
// Address: 004edfb0
int * __cdecl assignInt2(int *dest,int *src);
