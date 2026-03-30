// Name: core_script.cpp_CScript_renderEditor_FUN_00559d80
// Address: 00559d80
// Address Range: [[00559d80, 00559f76]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_renderEditor_FUN_00559d80(CScript *this_ptr,int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_renderEditor_FUN_00559d80(CScript *this_ptr,int left,int top,int right,int bottom)

{
  int iVar2;
  int iVar3;
  int iVar4;
  char *text;
  int index;
  int y;
  int iVar1;
  char local_a4 [100];
  CDrawSurface local_40;
  int local_20;
  int local_1c;
  int local_18;
  CStrList *local_14;
  int x;
  
  iVar1 = (bottom - top) + 1;
  cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00486ea0
            (&local_40,left,top,(right - left) + 1,iVar1,(CDrawSurface *)0x0);
  cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0);
  cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70(&local_40);
  cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0((CBitFont *)0x0);
  if (this_ptr->parsed_line_count < 1) {
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
              (&local_40,"(No script loaded.)");
  }
  else {
    iVar2 = cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0(&local_40);
    iVar3 = this_ptr->parsed_lines[this_ptr->next_cmd].line_number + -1;
    index = iVar3 - (iVar1 / iVar2) / 2;
    if (index < 0) {
      index = 0;
    }
    y = 2;
    if (2 < iVar1 - iVar2) {
      do {
        iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
        if (iVar4 <= index) break;
        if (index == iVar3) {
          if (this_ptr->script_state == 0) {
            iVar4 = 0xfa;
          }
          else if (this_ptr->script_state == 1) {
            iVar4 = 0xfb;
          }
          else {
            iVar4 = 0xf9;
          }
        }
        else {
          iVar4 = 0xff;
        }
        cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(iVar4);
        _sprintf(local_a4,"%d",index + 1);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0(&local_40,local_a4,2,y);
        x = 0x1e;
        iVar4 = y;
        text = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&this_ptr->script_text,index);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0(&local_40,text,x,iVar4);
        y = y + iVar2;
        index = index + 1;
      } while (y < iVar1 - iVar2);
    }
  }
  cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xff);
  cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(&local_40);
  return;
}
