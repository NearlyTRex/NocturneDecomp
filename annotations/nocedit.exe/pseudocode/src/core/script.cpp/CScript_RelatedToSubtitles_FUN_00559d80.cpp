// Name: core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80
// Address: 00559d80
// Address Range: [[00559d80, 00559f76]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_RelatedToSubtitles(CScript* param_1, uint
   XMaybe, uint YMaybe, uint nWidthMinusOne, uint nHeightMinusOne) */

void core_script_cpp_CScript_RelatedToSubtitles_FUN_00559d80(void)

{
  int iVar1;
  char *x;
  int index;
  BADSPACEBASE *in_ESP;
  char *text;
  int iVar2;
  CBitFont *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CStrList *in_stack_00000014;
  char *y;
  char *in_stack_ffffff84;
  byte local_40 [48];
  
  iVar2 = (int)in_stack_00000014 + (1 - in_stack_0000000c);
  cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
            ((CDrawSurface *)local_40,in_stack_00000008,in_stack_0000000c,
             (in_stack_00000010 - in_stack_00000008) + 1,iVar2,(CDrawSurface *)0x0);
  cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0);
  cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70((CDrawSurface *)(local_40 + 8));
  cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0((CBitFont *)0x0);
  if (*(int *)(in_stack_00000004->bitmap_files[0] + 0x2c) < 1) {
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
              ((CDrawSurface *)(local_40 + 0x14),"(No script loaded.)");
  }
  else {
    iVar1 = cockpit_drawsurf_cpp_getCurrentFontMaxWidth_FUN_00489ce0();
    index = (*(int *)(*(int *)(in_stack_00000004->bitmap_files[0] + 0x30) +
                     *(int *)(in_stack_00000004->bitmap_files[0] + 0x44) * 8) + -1) -
            (iVar2 / iVar1) / 2;
    if (index < 0) {
      index = 0;
    }
    text = &DAT_00000002;
    iVar2 = iVar2 - iVar1;
    if (2 < iVar2) {
      do {
        iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(in_stack_00000004);
        if (iVar1 <= index) break;
        if (index == iVar2) {
          iVar1 = *(int *)(in_stack_00000004->bitmap_files[0] + 0x14);
          if (iVar1 == 0) {
            iVar1 = 0xfa;
          }
          else if (iVar1 == 1) {
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
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"%d",index + 1);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
                  ((CDrawSurface *)(local_40 + 0x24),(int)&stack0xffffff80,2,text);
        y = text;
        x = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000014,index);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
                  ((CDrawSurface *)(local_40 + 0x2c),(int)x,(int)y,in_stack_ffffff84);
        text = text + iVar2;
        index = index + 1;
      } while ((int)text < (int)(in_stack_00000004->bitmap_files[0] + 0x34));
    }
  }
  cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xff);
  cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
            ((CDrawSurface *)(local_40 + 0x1c));
  return;
}
