// Name: core_script.cpp_CScript_renderEditor_FUN_00543c00
// Address: 00543c00
// Address Range: [[00543c00, 00543df6]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_renderEditor_FUN_00543c00(CScript *this_ptr,int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_renderEditor_FUN_00543c00(CScript *this_ptr,int left,int top,int right,int bottom)

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
  cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240
            (&local_40,left,top,(right - left) + 1,iVar1,(CDrawSurface *)0x0);
  cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(0);
  cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0(&local_40);
  cockpit_drawsurf_cpp_setCurrentFont_FUN_0047e860((CBitFont *)0x0);
  if (this_ptr->parsed_line_count < 1) {
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(0xf9);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80
              (&local_40,"(No script loaded.)");
  }
  else {
    local_1c = cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00481040(&local_40);
    local_20 = *(int *)(this_ptr->parsed_lines + this_ptr->next_cmd * 8) + -1;
    index = local_20 - (iVar1 / local_1c) / 2;
    if (index < 0) {
      index = 0;
    }
    y = 2;
    local_14 = &this_ptr->script_text;
    local_18 = iVar1 - local_1c;
    if (2 < local_18) {
      do {
        iVar1 = shape_edittool_cpp_FUN_0049df50(local_14);
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
        cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(iVar1);
        _sprintf(local_a4,&DAT_005ee1bb);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00480750(&local_40,local_a4,2,y);
        x = 0x1e;
        iVar1 = y;
        text = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(local_14,index);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00480750(&local_40,text,x,iVar1);
        y = y + local_1c;
        index = index + 1;
      } while (y < local_18);
    }
  }
  cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(0xff);
  cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0(&local_40);
  return;
}
