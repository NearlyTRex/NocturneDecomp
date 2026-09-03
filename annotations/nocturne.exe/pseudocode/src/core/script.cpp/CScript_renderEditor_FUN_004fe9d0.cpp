// Name: core_script.cpp_CScript_renderEditor_FUN_004fe9d0
// Address: 004fe9d0
// Address Range: [[004fe9d0, 004febc6]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_renderEditor_FUN_004fe9d0(CScript *this_ptr,int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_renderEditor_FUN_004fe9d0(CScript *this_ptr,int left,int top,int right,int bottom)

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
  
  iVar1 = (bottom - top) + 1;
  cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
            (&local_40,left,top,(right - left) + 1,iVar1,(CDrawSurface *)0x0);
  cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0);
  cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0(&local_40);
  cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0((CBitFont *)0x0);
  if (this_ptr->parsed_line_count < 1) {
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xf9);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260
              (&local_40,"(No script loaded.)");
  }
  else {
    local_1c = cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320(&local_40);
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
        iVar1 = shape_edittool_cpp_CStrList_getItemCount_FUN_00477660(local_14);
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
        cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(iVar1);
        _sprintf(local_a4,"%d",index + 1);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30(&local_40,local_a4,2,y);
        x = 0x1e;
        iVar1 = y;
        text = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(local_14,index);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30(&local_40,text,x,iVar1);
        y = y + local_1c;
        index = index + 1;
      } while (y < local_18);
    }
  }
  cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xff);
  cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70(&local_40);
  return;
}
