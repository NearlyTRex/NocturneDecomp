#pragma once

// Function prototypes for core/netgame.cpp
// Generated from Ghidra function signatures

// Original: core_netgame.cpp_getElapsedSeconds_FUN_004e95d0
// Address: 004e95d0
float getElapsedSeconds(int param_1);

// Original: core_netgame.cpp_removeChatOut_FUN_004e9640
// Address: 004e9640
void removeChatOut(int param_1);

// Original: core_netgame.cpp_allocSimFrame_FUN_004e9730
// Address: 004e9730
int * allocSimFrame(int param_1);

// Original: core_netgame.cpp_CNetGame_ctor_FUN_004e9860
// Address: 004e9860
undefined4 * CNetGame::ctor(int param_1);

// Original: core_netgame.cpp_CNetGame_dtor_FUN_004e98f0
// Address: 004e98f0
int CNetGame::dtor(int param_1);

// Original: core_netgame.cpp_CNetGame_init_FUN_004e9910
// Address: 004e9910
void __cdecl CNetGame::init(int param_1);

// Original: core_netgame.cpp_CNetGame_shutdown_FUN_004e99c0
// Address: 004e99c0
void __cdecl CNetGame::shutdown(int param_1);

// Original: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90
// Address: 004e9a90
undefined4 __cdecl CNetGame::initializeNetworkToJoin(undefined4 *param_1,undefined4 param_2);

// Original: core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50
// Address: 004e9d50
undefined4 __cdecl CNetGame::initializeNetwork(int param_1);

// Original: core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90
// Address: 004e9e90
void __cdecl CNetGame::disconnect(int *param_1,int param_2);

// Original: core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370
// Address: 004ea370
undefined4 __cdecl CNetGame::syncPlayers(int *param_1,int param_2);

// Original: core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0
// Address: 004ea6e0
void __cdecl CNetGame::flushIncomingPackets(int param_1);

// Original: core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740
// Address: 004ea740
void __cdecl CNetGame::receivePackets(int param_1);

// Original: core_netgame.cpp_CNetGame_processPacket_FUN_004ea830
// Address: 004ea830
void __cdecl CNetGame::processPacket(int *param_1,int *param_2,int param_3);

// Original: core_netgame.cpp_CNetGame_send_FUN_004eb350
// Address: 004eb350
void __cdecl CNetGame::send(int param_1,int param_2,undefined4 param_3);

// Original: core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0
// Address: 004eb3c0
void __cdecl CNetGame::sendPacket(int param_1,undefined4 param_2,int *param_3);

// Original: core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_004eb3f0
// Address: 004eb3f0
int __cdecl CNetGame::findPlayerByAddr(int param_1,int *param_2);

// Original: core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440
// Address: 004eb440
int CNetGame::addPlayer(int param_1,undefined4 *param_2,char *param_3,undefined4 param_4,undefined4 param_5);

// Original: core_netgame.cpp_CNetGame_runLobby_FUN_004eb520
// Address: 004eb520
undefined4 __cdecl CNetGame::runLobby(int *param_1);

// Original: core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10
// Address: 004ebe10
void __cdecl CNetGame::updatePing(int param_1,int param_2,float param_3);

// Original: core_netgame.cpp_CNetGame_processChatOut_FUN_004ebfd0
// Address: 004ebfd0
void __cdecl CNetGame::processChatOut(int param_1,undefined4 param_2,int param_3);

// Original: core_netgame.cpp_CNetGame_removeChatOut_FUN_004ec180
// Address: 004ec180
void __cdecl CNetGame::removeChatOut(int param_1);

// Original: core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500
// Address: 004ec500
void __cdecl CNetGame::addChatHistory(undefined4 param_1,undefined4 *param_2,undefined4 param_3,char *param_4,char *param_5);

// Original: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_004ec600
// Address: 004ec600
undefined4 __cdecl CNetGame::applyNewGameSettings(int *param_1,undefined4 *param_2);

// Original: core_netgame.cpp_CNetGame_removePlayer_FUN_004ecc80
// Address: 004ecc80
void __cdecl CNetGame::removePlayer(int param_1,int param_2);

// Original: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70
// Address: 004ece70
void __cdecl CNetGame::gameSettingsChanged(int *param_1);

// Original: core_netgame.cpp_CNetGame_sendGameSetting_FUN_004ecf50
// Address: 004ecf50
void __cdecl CNetGame::sendGameSetting(int *param_1,int param_2);

// Original: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170
// Address: 004ed170
void __cdecl CNetGame::sendMyStateChanged(int *param_1);

// Original: core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0
// Address: 004ed2d0
void __cdecl CNetGame::processServerFrame(int *param_1);

// Original: core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720
// Address: 004ed720
void CNetGame::processClientFrame(int *param_1);

// Original: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_004ed980
// Address: 004ed980
void __cdecl CNetGame::applySimFrameHistory(int param_1,int *param_2);

// Original: core_netgame.cpp_CNetGame_getMyControls_FUN_004eda40
// Address: 004eda40
int * __cdecl CNetGame::getMyControls(int *param_1);

// Original: core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0
// Address: 004edab0
void __cdecl CNetGame::sendDisconnectNotify(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_004edaf0
// Address: 004edaf0
void __cdecl CNetGame::sendSimFrameAck(int *param_1);

// Original: core_netgame.cpp_SPlayer_ctor_FUN_004ede30
// Address: 004ede30
undefined4 SPlayer::ctor(undefined4 param_1);

// Original: core_netgame.cpp_assignInt1_FUN_004edfa0
// Address: 004edfa0
undefined4 * __cdecl assignInt1(undefined4 *param_1,undefined4 *param_2);
