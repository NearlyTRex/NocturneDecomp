// Name: core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80
// Address: 00559d80
// Address Range: [[00559d80, 00559f76]]
// Convention: unknown
// Signature: void core_script_cpp_CScript_RelatedToSubtitles_FUN_00559d80(void)

#include "nocturne.h"

void core_script_cpp_CScript_RelatedToSubtitles_FUN_00559d80(void)

{
  char *x;
  int index;
  char *text;
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  char *text_00;
  char local_a4 [100];
  CDrawSurface local_40;
  int local_20;
  int local_1c;
  int local_18;
  CBitFont *local_14;
  
  iVar1 = (in_stack_00000014 - in_stack_0000000c) + 1;
  cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
            (&local_40,in_stack_00000008,in_stack_0000000c,
             (in_stack_00000010 - in_stack_00000008) + 1,iVar1,(CDrawSurface *)0x0);
  cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0);
  cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70(&local_40);
  cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0((CBitFont *)0x0);
  if (*(int *)(in_stack_00000004 + 0x30) < 1) {
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
              (&local_40,"(No script loaded.)");
  }
  else {
    local_1c = cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0(&local_40);
    local_20 = *(int *)(*(int *)(in_stack_00000004 + 0x34) + *(int *)(in_stack_00000004 + 0x48) * 8)
               + -1;
    index = local_20 - (iVar1 / local_1c) / 2;
    if (index < 0) {
      index = 0;
    }
    text = (char *)0x2;
    local_14 = (CBitFont *)(in_stack_00000004 + 0x38);
    local_18 = iVar1 - local_1c;
    if (2 < local_18) {
      do {
        iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(local_14);
        if (iVar1 <= index) break;
        if (index == local_20) {
          if (*(int *)(in_stack_00000004 + 0x18) == 0) {
            iVar1 = 0xfa;
          }
          else if (*(int *)(in_stack_00000004 + 0x18) == 1) {
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
