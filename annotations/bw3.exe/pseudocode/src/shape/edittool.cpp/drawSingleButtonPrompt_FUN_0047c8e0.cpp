// Name: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0
// Address: 0047c8e0
// Address Range: [[0047c8e0, 0047cbcd]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047c8e0(char *title,char *message,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047c8e0(char *title,char *message,int color)

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
  
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(int *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = engine_font_cpp_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  iVar1 = DAT_005fba1c / 0x60;
  local_18 = shape_edittool_cpp_FUN_004864f0("Cancel");
  iVar2 = shape_edittool_cpp_FUN_00486580((char *)0x0);
  iVar2 = iVar1 * 2 + iVar2;
  iVar1 = engine_font_cpp_FUN_004b2a80(_DAT_01c5b0e0,title);
  local_14 = iVar1;
  iVar3 = engine_font_cpp_FUN_004b2a80(_DAT_01c5b0e0,message);
  if (iVar1 < iVar3) {
    local_14 = iVar3;
  }
  if (local_14 < local_18) {
    local_14 = local_18;
  }
  iVar1 = engine_font_cpp_FUN_004b2b30(_DAT_01c5b0e0,message);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
            (g_CEditorToolsPtr,_DAT_01c5bae0 * 4 + local_14,iVar1 + _DAT_01c5bae4 * 2 + iVar2,title,
             0);
  local_1c = shape_edittool_cpp_FUN_004864f0("Cancel");
  local_24 = ((_DAT_01c6b5b0 + _DAT_01c6b5a8) - local_1c) / 2 + 1;
  iVar4 = shape_edittool_cpp_FUN_00486580((char *)0x0);
  local_20 = (_DAT_01c6b5b4 - iVar4) + 1;
  shape_edittool_cpp_CEdButton_ctor_FUN_00486020(&local_108);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004860d0
            (&local_108,local_24,local_20,local_24 + local_1c + -1,_DAT_01c6b5b4,&DAT_005bce1f);
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  while( true ) {
    iVar4 = wincore_winrun_cpp_wasKeyPressed_FUN_00580800();
    if (iVar4 != 0) break;
    iVar4 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00486440(&local_108);
    if ((iVar4 != 0) || (_DAT_02d21b80 != 0)) break;
    shape_edittool_cpp_FUN_0047fa80(g_CEditorToolsPtr);
    shape_edittool_cpp_FUN_00480200(g_CEditorToolsPtr,1);
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    engine_mini3d_cpp_FUN_004edaf0(0x3f800000);
    engine_font_cpp_FUN_004b0a20
              (_DAT_01c5b0e0,message,((_DAT_01c6b5a8 + _DAT_01c6b5b0) - iVar3) / 2,
               (((_DAT_01c6b5ac + _DAT_01c6b5b4) - iVar1) - iVar2) / 2,color,0xffffffff);
    shape_edittool_cpp_FUN_00486120(&local_108,1);
    shape_edittool_cpp_FUN_00480410(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_FUN_0057a8a0();
  }
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  shape_edittool_cpp_FUN_0047f970(g_CEditorToolsPtr);
  shape_edittool_cpp_CEdButton_dtor_FUN_00486050(&local_108,0);
  return;
}
