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
  char *text;
  int index;
  int y;
  int iVar1;
  int x;
  char local_a4 [100];
  CDrawSurface local_40;
  int local_20;
  int local_1c;
  int local_18;
  CStrList *local_14;
  
  iVar1 = (param_5 - param_3) + 1;
  cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
            (&local_40,param_2,param_3,(param_4 - param_2) + 1,iVar1,(CDrawSurface *)0x0);
  cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0);
  cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70(&local_40);
  cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0((CBitFont *)0x0);
  if (this_ptr->parsed_line_count < 1) {
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
              (&local_40,"(No script loaded.)");
  }
  else {
    local_1c = cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0(&local_40);
    local_20 = this_ptr->parsed_lines[this_ptr->next_cmd].line_number + -1;
    index = local_20 - (iVar1 / local_1c) / 2;
    if (index < 0) {
      index = 0;
    }
    y = 2;
    local_14 = &this_ptr->script_text;
    local_18 = iVar1 - local_1c;
    if (2 < local_18) {
      do {
        iVar1 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(local_14);
        if (iVar1 <= index) break;
        if (index == local_20) {
          if (this_ptr->script_state == 0) {
            iVar1 = 0xfa;
          }
          else if (this_ptr->script_state == 1) {
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
        _sprintf(local_a4,"%d",index + 1);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0(&local_40,local_a4,2,y);
        x = 0x1e;
        iVar1 = y;
        text = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(local_14,index);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0(&local_40,text,x,iVar1);
        y = y + local_1c;
        index = index + 1;
      } while (y < local_18);
    }
  }
  cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xff);
  cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(&local_40);
  return;
}
