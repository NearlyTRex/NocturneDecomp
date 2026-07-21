// Name: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90
// Address: 004e9a90
// Address Range: [[004e9a90, 004e9d45]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90(uint *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  float fStack_60;
  uint uStack_5c;
  byte uStack_58;
  uint uStack_57;
  int iStack_53;
  char acStack_4f [20];
  uint uStack_3b;
  uint uStack_37;
  byte auStack_30 [8];
  uint uStack_28;
  int aiStack_24 [3];
  char *pcStack_18;
  
  bVar8 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(param_1,0);
  iVar3 = 0x01C775EC;
  param_1[7] = 0;
  uVar2 = support_trisock_cpp_createNetworkAddr_FUN_00548d30
                    (auStack_30,&DAT_02dd10c4,0x1ddf,param_1 + 2,*(uint *)(iVar3 + 0xc0),
                     *(uint *)(iVar3 + 0xc4));
  uVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440(param_1,uVar2);
  param_1[0x45] = uVar2;
  iVar3 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_00548d30(&uStack_28,param_2,0x1ddf);
  uVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440
                    (param_1,&uStack_28,"TheServer",0,0);
  iVar3 = _DAT_01cea3f8;
  *param_1 = 2;
  uVar2 = 0x01BCD074;
  param_1[1] = 1;
  param_1[0x44] = uVar4;
  iVar3 = iVar3 + -0x50000;
  _DAT_01cea3fc = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (uVar2,"Contacting server.  Press ESC to give up...");
  aiStack_24[2] = DAT_005c1664;
  DAT_005c1664 = 0;
  if (-1 < (int)param_1[0x44]) {
    pcStack_18 = (char *)(param_1 + 2);
    do {
      aiStack_24[1] = _DAT_01cea3f8 - iVar3;
      fStack_60 = (float)(_DAT_01cea3f8 - iVar3) * (float)ram0x0058bbba;
      if (fStack_60 < 0.0) {
        fStack_60 = 0.0;
      }
      if ((float)_DAT_0058bbc2 < fStack_60) {
        fStack_60 = 30.0;
      }
      if ((float)_DAT_0058bbca < fStack_60) {
        uStack_5c = 0x29;
        uStack_58 = 1;
        uStack_57 = uStack_28;
        (&iStack_53)[(uint)bVar8 * -2] = aiStack_24[(uint)bVar8 * -2];
        uStack_3b = param_1[param_1[0x45] * 0x1e + 0xd];
        uStack_37 = param_1[param_1[0x45] * 0x1e + 0xe];
        pcVar7 = acStack_4f;
        pcVar6 = pcStack_18;
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        core_netgame_cpp_CNetGame_send_FUN_004eb350(param_1,param_1[0x44],&uStack_5c);
        iVar3 = _DAT_01cea3f8;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(param_1);
      if (_DAT_01cea3fc == 1) {
        DAT_005c1664 = aiStack_24[2];
        return 1;
      }
      if (_DAT_01cea3fc < 3) {
        if (_DAT_01cea3fc == 2) {
          FUN_0046fcd0(0x01BCD074,"Connection refused - computer is not a server");
          core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(param_1,0);
          return 0;
        }
      }
      else {
        if (_DAT_01cea3fc < 4) {
          FUN_0046fcd0(0x01BCD074,"Connection refused - game is full");
          core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(param_1,0);
          return 0;
        }
        if (_DAT_01cea3fc == 4) {
          FUN_0046fcd0(0x01BCD074,"Connection refused - already in the game");
          goto LAB_004e9d11;
        }
      }
      iVar5 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
      if (iVar5 != 0) {
LAB_004e9d11:
        core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(param_1,0);
        return 0;
      }
    } while (-1 < (int)param_1[0x44]);
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(param_1,1);
  return 0;
}
