// Name: core_netgame.cpp_FUN_0050b4d0
// Address: 0050b4d0
// Address Range: [[0050b4d0, 0050b78d]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_FUN_0050b4d0(CNetGame *this_ptr,uint32_t *server_ip)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_FUN_0050b4d0(CNetGame *this_ptr,uint32_t *server_ip)

{
  char cVar1;
  CGame *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  float fStack_5c;
  uint uStack_58;
  byte uStack_54;
  uint uStack_53;
  uint uStack_4f;
  char acStack_4b [20];
  uint uStack_37;
  uint uStack_33;
  uint uStack_2c;
  uint auStack_28 [4];
  char *pcStack_18;
  int iStack_14;
  
  bVar8 = 0;
  core_netgame_cpp_FUN_0050b8d0(this_ptr,0);
  pCVar2 = g_CGamePtr;
  *(uint *)&this_ptr->field_0x1c = 0;
  uVar3 = support_trisock_cpp_createNetworkAddr_FUN_00578e60
                    (auStack_28,_DAT_02653630,0x1ddf,&this_ptr->field_0x8,
                     *(uint *)&pCVar2->field_0xd4,*(uint *)&pCVar2->field_0xd8);
  uVar3 = core_netgame_cpp_FUN_0050ce70(this_ptr,uVar3);
  *(uint *)&this_ptr->field_0x124 = uVar3;
  iVar4 = core_netgame_cpp_FUN_0050b790(this_ptr);
  if (iVar4 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_00578e60(&uStack_2c,*server_ip,0x1ddf);
  uVar3 = core_netgame_cpp_FUN_0050ce70(this_ptr,&uStack_2c,"TheServer",0,0);
  *(uint *)this_ptr = 2;
  *(uint *)&this_ptr->field_0x4 = 1;
  iVar4 = _DAT_01d34e38;
  *(uint *)&this_ptr->field_0x120 = uVar3;
  _DAT_01d34e3c = 0;
  iVar4 = iVar4 + -0x50000;
  shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,"Contacting server.  Press ESC to give up...");
  auStack_28[3] = DAT_0061e990;
  DAT_0061e990 = 0;
  if (-1 < *(int *)&this_ptr->field_0x120) {
    pcStack_18 = &this_ptr->field_0x8;
    do {
      iStack_14 = _DAT_01d34e38 - iVar4;
      fStack_5c = (float)(_DAT_01d34e38 - iVar4) * (float)_DAT_005e0535;
      if (fStack_5c < 0.0) {
        fStack_5c = 0.0;
      }
      if ((float)_DAT_005e053d < fStack_5c) {
        fStack_5c = 30.0;
      }
      if ((float)_DAT_005e0545 < fStack_5c) {
        uStack_58 = 0x29;
        uStack_54 = 1;
        uStack_53 = uStack_2c;
        (&uStack_4f)[(uint)bVar8 * -2] = auStack_28[(uint)bVar8 * -2];
        uStack_37 = *(uint *)(&this_ptr->field_0x34 + *(int *)&this_ptr->field_0x124 * 0x80);
        uStack_33 = *(uint *)(&this_ptr->field_0x38 + *(int *)&this_ptr->field_0x124 * 0x80);
        pcVar7 = acStack_4b;
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
        core_netgame_cpp_CNetGame_send_FUN_0050cd90
                  (this_ptr,*(int *)&this_ptr->field_0x120,(SNetPacketHeader *)&uStack_58);
        iVar4 = _DAT_01d34e38;
      }
      wincore_wddvmem_cpp_FUN_00589560();
      core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(this_ptr);
      if (_DAT_01d34e3c == 1) {
        DAT_0061e990 = auStack_28[3];
        return 1;
      }
      if (_DAT_01d34e3c < 3) {
        if (_DAT_01d34e3c == 2) {
          shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"Connection refused - computer is not a server");
          core_netgame_cpp_FUN_0050b8d0(this_ptr,0);
          return 0;
        }
      }
      else {
        if (_DAT_01d34e3c < 4) {
          shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"Connection refused - game is full");
          core_netgame_cpp_FUN_0050b8d0(this_ptr,0);
          return 0;
        }
        if (_DAT_01d34e3c == 4) {
          shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"Connection refused - already in the game");
          goto LAB_0050b759;
        }
      }
      iVar5 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
      if (iVar5 != 0) {
LAB_0050b759:
        core_netgame_cpp_FUN_0050b8d0(this_ptr,0);
        return 0;
      }
    } while (-1 < *(int *)&this_ptr->field_0x120);
  }
  core_netgame_cpp_FUN_0050b8d0(this_ptr,1);
  return 0;
}
