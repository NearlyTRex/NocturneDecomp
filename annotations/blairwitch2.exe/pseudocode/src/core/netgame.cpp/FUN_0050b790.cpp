// Name: core_netgame.cpp_FUN_0050b790
// Address: 0050b790
// Address Range: [[0050b790, 0050b8c3]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_FUN_0050b790(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_FUN_0050b790(CNetGame *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  
  shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,"?Initializing network..." + 1);
  this_ptr_00 = &this_ptr->field_0x180;
  support_trisock_cpp_CSocket_closeSocket_FUN_00579360((CSocket *)this_ptr_00);
  iVar1 = support_trisock_cpp_CSocket_createUDPSocket_FUN_00579060((CSocket *)this_ptr_00);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"Can't create datagram socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_setSocketBlocking_FUN_00579490((CSocket *)this_ptr_00,0);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_bindSocket_FUN_005790a0((CSocket *)this_ptr_00,0x1ddf);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"Can't bind UDP socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_getSocketName_FUN_00579430
                    ((CSocket *)this_ptr_00,
                     (SNetworkAddr *)(&this_ptr->field_0x3c + *(int *)&this_ptr->field_0x124 * 0x80)
                    );
  if (iVar1 != 0) {
    core_netgame_cpp_FUN_0050c130(this_ptr);
    _DAT_01d34e38 = 1;
    _DAT_01d34e34 = wincore_winrun_cpp_FUN_0058e9e0();
    _DAT_01d34e34 = _DAT_01d34e34 / 0x12;
    shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr);
    return 1;
  }
  shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"Can't querry back for socket address");
  return 0;
}
