// Name: core_netgame.cpp_FUN_00504270
// Address: 00504270
// Address Range: [[00504270, 005043a3]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_FUN_00504270(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_FUN_00504270(CNetGame *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
            (g_CEditorToolsPtr,"?Initializing network..." + 1);
  this_ptr_00 = &this_ptr->field_0x180;
  support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30((CSocket *)this_ptr_00);
  iVar1 = support_trisock_cpp_CSocket_createUDPSocket_FUN_0056f930((CSocket *)this_ptr_00);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (g_CEditorToolsPtr,"Can't create datagram socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_setSocketBlocking_FUN_0056fd60((CSocket *)this_ptr_00,0);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (g_CEditorToolsPtr,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_bindSocket_FUN_0056f970((CSocket *)this_ptr_00,0x1ddf);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (g_CEditorToolsPtr,"Can't bind UDP socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_getSocketName_FUN_0056fd00
                    ((CSocket *)this_ptr_00,
                     (SNetworkAddr *)(&this_ptr->field_0x3c + *(int *)&this_ptr->field_0x124 * 0x80)
                    );
  if (iVar1 != 0) {
    core_netgame_cpp_FUN_00504c10(this_ptr);
    _DAT_01da6478 = 1;
    _DAT_01da6474 = wincore_winrun_cpp_FUN_005806a0();
    _DAT_01da6474 = _DAT_01da6474 / 0x12;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
              (g_CEditorToolsPtr,"Initializing network...OK");
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
            (g_CEditorToolsPtr,"Can't querry back for socket address");
  return 0;
}
