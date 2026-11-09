// Name: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800
// Address: 0047b800
// Address Range: [[0047b800, 0047bae1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047b800(char *title,char *message,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047b800(char *title,char *message,int color)

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
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(int *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = engine_font_cpp_FUN_004ab560(_DAT_01c25590,0x6a);
  iVar1 = DAT_006141bc / 0x60;
  local_18 = shape_edittool_cpp_FUN_004852f0("Cancel");
  iVar2 = shape_edittool_cpp_FUN_00485380(0);
  iVar2 = iVar1 * 2 + iVar2;
  iVar1 = engine_font_cpp_FUN_004aaf00(_DAT_01c25590,title);
  local_14 = iVar1;
  iVar3 = engine_font_cpp_FUN_004aaf00(_DAT_01c25590,message);
  if (iVar1 < iVar3) {
    local_14 = iVar3;
  }
  if (local_14 < local_18) {
    local_14 = local_18;
  }
  iVar1 = engine_font_cpp_FUN_004aafb0(_DAT_01c25590,message);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
            (g_CEditorToolsPtr,_DAT_01c25f78 * 4 + local_14,iVar1 + _DAT_01c25f7c * 2 + iVar2,title,
             0);
  local_1c = shape_edittool_cpp_FUN_004852f0("Cancel");
  local_24 = ((_DAT_01c35e50 + _DAT_01c35e48) - local_1c) / 2 + 1;
  iVar4 = shape_edittool_cpp_FUN_00485380(0);
  local_20 = (_DAT_01c35e54 - iVar4) + 1;
  shape_edittool_cpp_CEdButton_ctor_FUN_00484e20(&local_108);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00484ed0
            (&local_108,local_24,local_20,local_24 + local_1c + -1,_DAT_01c35e54,&DAT_005d1f69);
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  while( true ) {
    iVar4 = wincore_winrun_cpp_wasKeyPressed_FUN_0058eb40();
    if (iVar4 != 0) break;
    iVar4 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00485240(&local_108);
    if (iVar4 != 0) break;
    shape_edittool_cpp_FUN_0047e870(g_CEditorToolsPtr);
    shape_edittool_cpp_FUN_0047eff0(g_CEditorToolsPtr,1);
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    engine_mini3d_cpp_FUN_004f3570(0x3f800000);
    engine_font_cpp_FUN_004a8df0
              (_DAT_01c25590,message,((_DAT_01c35e48 + _DAT_01c35e50) - iVar3) / 2,
               (((_DAT_01c35e4c + _DAT_01c35e54) - iVar1) - iVar2) / 2,color,0xffffffff);
    shape_edittool_cpp_FUN_00484f20(&local_108,1);
    shape_edittool_cpp_FUN_0047f210(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_FUN_00589560();
  }
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
  shape_edittool_cpp_CEdButton_dtor_FUN_00484e50(&local_108,0);
  return;
}
