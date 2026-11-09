// Name: core_script.cpp_FUN_00529210
// Address: 00529210
// Address Range: [[00529210, 00529406]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00529210(CScript *this_ptr,int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_00529210(CScript *this_ptr,int left,int top,int right,int bottom)

{
  char *text;
  int index;
  int y;
  int iVar1;
  int x;
  char local_a4 [100];
  CDrawSurface local_40 [32];
  int local_20;
  int local_1c;
  int local_18;
  CStrList *local_14;
  
  iVar1 = (bottom - top) + 1;
  cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900
            (local_40,left,top,(right - left) + 1,iVar1,(CDrawSurface *)0x0);
  cockpit_drawsurf_cpp_FUN_00467a70(0);
  cockpit_drawsurf_cpp_FUN_00469690(local_40);
  cockpit_drawsurf_cpp_FUN_00467f20((CBitFont *)0x0);
  if (*(int *)&this_ptr->field_0x2c < 1) {
    cockpit_drawsurf_cpp_FUN_00467a70(0xf9);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0046a640
              (local_40,"(No script loaded.)");
  }
  else {
    local_1c = cockpit_drawsurf_cpp_FUN_0046a700(local_40);
    local_20 = *(int *)(*(int *)&this_ptr->field_0x30 + *(int *)&this_ptr->field_0x44 * 8) + -1;
    index = local_20 - (iVar1 / local_1c) / 2;
    if (index < 0) {
      index = 0;
    }
    y = 2;
    local_14 = (CStrList *)&this_ptr->field_0x34;
    local_18 = iVar1 - local_1c;
    if (2 < local_18) {
      do {
        iVar1 = shape_edittool_cpp_FUN_00486af0(local_14);
        if (iVar1 <= index) break;
        if (index == local_20) {
          if (*(int *)&this_ptr->field_0x1c == 0) {
            iVar1 = 0xfa;
          }
          else if (*(int *)&this_ptr->field_0x1c == 1) {
            iVar1 = 0xfb;
          }
          else {
            iVar1 = 0xf9;
          }
        }
        else {
          iVar1 = 0xff;
        }
        cockpit_drawsurf_cpp_FUN_00467a70(iVar1);
        FUN_005a28c0(local_a4,&DAT_005cde1c,index + 1);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10(local_40,local_a4,2,y);
        x = 0x1e;
        iVar1 = y;
        text = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440(local_14,index);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10(local_40,text,x,iVar1);
        y = y + local_1c;
        index = index + 1;
      } while (y < local_18);
    }
  }
  cockpit_drawsurf_cpp_FUN_00467a70(0xff);
  cockpit_drawsurf_cpp_FUN_00468f80(local_40);
  return;
}
