// Name: core_netgame.cpp_FUN_0052c970
// Address: 0052c970
// Address Range: [[0052c970, 0052caaa]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_FUN_0052c970(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_FUN_0052c970(CNetGame *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
            (g_CEditorToolsPtr,"Initializing network...");
  this_ptr_00 = &this_ptr->field_0x178;
  support_trisock_cpp_CSocket_closeSocket_FUN_0059cc40((CSocket *)this_ptr_00);
  iVar1 = support_trisock_cpp_CSocket_createUDPSocket_FUN_0059c940((CSocket *)this_ptr_00);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"Can't create datagram socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_setSocketBlocking_FUN_0059cd70((CSocket *)this_ptr_00,0);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_bindSocket_FUN_0059c980((CSocket *)this_ptr_00,0x1ddf);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"Can't bind UDP socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_getSocketName_FUN_0059cd10
                    ((CSocket *)this_ptr_00,
                     (SNetworkAddr *)(&this_ptr->field_0x3c + *(int *)&this_ptr->field_0x11c * 0x7c)
                    );
  if (iVar1 != 0) {
    core_netgame_cpp_FUN_0052d300(this_ptr);
    _DAT_01d51da0 = 1;
    _DAT_01d51d9c = wincore_winrun_cpp_FUN_005b2420();
    _DAT_01d51d9c = _DAT_01d51d9c / 0x12;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
              (g_CEditorToolsPtr,"Initializing network...OK");
    return 1;
  }
  shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"Can't querry back for socket address");
  return 0;
}
