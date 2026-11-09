// Name: core_script.cpp_FUN_00521af0
// Address: 00521af0
// Address Range: [[00521af0, 00521ce6]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00521af0(CScript *this_ptr,int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_00521af0(CScript *this_ptr,int left,int top,int right,int bottom)

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
  cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00465d30
            (local_40,left,top,(right - left) + 1,iVar1,(CDrawSurface *)0x0);
  cockpit_drawsurf_cpp_setColor_FUN_00465ea0(0);
  cockpit_drawsurf_cpp_FUN_00467ac0(local_40);
  cockpit_drawsurf_cpp_FUN_00466350((CBitFont *)0x0);
  if (*(int *)&this_ptr->field_0x2c < 1) {
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(0xf9);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00468a70
              (local_40,"(No script loaded.)");
  }
  else {
    local_1c = cockpit_drawsurf_cpp_FUN_00468b30(local_40);
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
        iVar1 = shape_edittool_cpp_FUN_004858f0(local_14);
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
        cockpit_drawsurf_cpp_setColor_FUN_00465ea0(iVar1);
        FUN_005b7790(local_a4,&DAT_005e2eb7,index + 1);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00468240(local_40,local_a4,2,y);
        x = 0x1e;
        iVar1 = y;
        text = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(local_14,index);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00468240(local_40,text,x,iVar1);
        y = y + local_1c;
        index = index + 1;
      } while (y < local_18);
    }
  }
  cockpit_drawsurf_cpp_setColor_FUN_00465ea0(0xff);
  cockpit_drawsurf_cpp_FUN_004673b0(local_40);
  return;
}
