// Name: core_script.cpp_CScript_FUN_00559d80
// Address: 00559d80
// Address Range: [[00559d80, 00559f76]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00559d80 (CScript *this_ptr,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void __cdecl
core_script_cpp_CScript_FUN_00559d80
          (CScript *this_ptr,int param_2,int param_3,int param_4,int param_5)

{
  char *x;
  int index;
  char *text;
  int iVar1;
  char *text_00;
  char local_a4 [100];
  CDrawSurface local_40;
  int local_20;
  int local_1c;
  int local_18;
  CBitFont *local_14;
  
  iVar1 = (param_5 - param_3) + 1;
  cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
            (&local_40,param_2,param_3,(param_4 - param_2) + 1,iVar1,(CDrawSurface *)0x0);
  cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0);
  cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70(&local_40);
  cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0((CBitFont *)0x0);
  if (*(int *)(this_ptr->unk4 + 0x18) < 1) {
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
              (&local_40,"(No script loaded.)");
  }
  else {
    local_1c = cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0(&local_40);
    local_20 = *(int *)(*(int *)(this_ptr->unk4 + 0x1c) + this_ptr->next_cmd * 8) + -1;
    index = local_20 - (iVar1 / local_1c) / 2;
    if (index < 0) {
      index = 0;
    }
    text = (char *)0x2;
    local_14 = (CBitFont *)(this_ptr->unk4 + 0x20);
    local_18 = iVar1 - local_1c;
    if (2 < local_18) {
      do {
        iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(local_14);
        if (iVar1 <= index) break;
        if (index == local_20) {
          if (*(int *)this_ptr->unk4 == 0) {
            iVar1 = 0xfa;
          }
          else if (*(int *)this_ptr->unk4 == 1) {
            iVar1 = 0xfb;
          }
          else {
            iVar1 = 0xf9;
          }
        }
        else {
          iVar1 = 0xff;
        }
        cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(iVar1);
        sprintf(local_a4,"%d",index + 1);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
                  (&local_40,(int)local_a4,2,text);
        iVar1 = 0x1e;
        text_00 = text;
        x = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)local_14,index);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
                  (&local_40,(int)x,iVar1,text_00);
        text = text + local_1c;
        index = index + 1;
      } while ((int)text < local_18);
    }
  }
  cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xff);
  cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(&local_40);
  return;
}
