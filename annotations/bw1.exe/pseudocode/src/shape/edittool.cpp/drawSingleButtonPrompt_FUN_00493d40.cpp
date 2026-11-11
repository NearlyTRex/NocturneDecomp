// Name: shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40
// Address: 00493d40
// Address Range: [[00493d40, 0049402d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_00493d40(char *title,char *message,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_00493d40(char *title,char *message,int color)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CEdButton local_108;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = _DAT_01c3eb50->max_char_width;
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  iVar1 = DAT_0061b49c / 0x60;
  local_18 = shape_edittool_cpp_calculateButtonWidth_FUN_0049d950("Cancel");
  iVar2 = shape_edittool_cpp_FUN_0049d9e0((char *)0x0);
  iVar2 = iVar1 * 2 + iVar2;
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_01c3eb50,title);
  local_14 = iVar1;
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_01c3eb50,message);
  if (iVar1 < iVar3) {
    local_14 = iVar3;
  }
  if (local_14 < local_18) {
    local_14 = local_18;
  }
  iVar1 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50(_DAT_01c3eb50,message);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00496840
            (g_CEditorToolsPtr,_DAT_01c3f538 * 4 + local_14,iVar1 + _DAT_01c3f53c * 2 + iVar2,title,
             0);
  local_1c = shape_edittool_cpp_calculateButtonWidth_FUN_0049d950("Cancel");
  local_24 = ((_DAT_01c4f010 + _DAT_01c4f008) - local_1c) / 2 + 1;
  iVar4 = shape_edittool_cpp_FUN_0049d9e0((char *)0x0);
  local_20 = (_DAT_01c4f014 - iVar4) + 1;
  shape_edittool_cpp_CEdButton_ctor_FUN_0049d480(&local_108);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_0049d530
            (&local_108,local_24,local_20,local_24 + local_1c + -1,_DAT_01c4f014,"OK");
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  while( true ) {
    iVar4 = wincore_winrun_cpp_wasKeyPressed_FUN_005b2580();
    if (iVar4 != 0) break;
    iVar4 = shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0(&local_108);
    if ((iVar4 != 0) || (_DAT_02c9be70 != 0)) break;
    shape_edittool_cpp_FUN_00496ee0(g_CEditorToolsPtr);
    shape_edittool_cpp_FUN_00497660(g_CEditorToolsPtr,1);
    engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
    engine_mini3d_cpp_FUN_00512320(0x3f800000);
    engine_font_cpp_FUN_004c1dd0
              (_DAT_01c3eb50,message,((_DAT_01c4f008 + _DAT_01c4f010) - iVar3) / 2,
               (((_DAT_01c4f00c + _DAT_01c4f014) - iVar1) - iVar2) / 2,color,0xffffffff);
    shape_edittool_cpp_FUN_0049d580(&local_108,1);
    shape_edittool_cpp_FUN_00497870(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  }
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  shape_edittool_cpp_FUN_00496dd0(g_CEditorToolsPtr);
  shape_edittool_cpp_CEdButton_dtor_FUN_0049d4b0(&local_108,0);
  return;
}
