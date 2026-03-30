// Name: engine_boss.c_modelStructNotSupported4_FUN_0041dbe0
// Address: 0041dbe0
// Address Range: [[0041dbe0, 0041dc1e] [03fc37bf, 03fc381f]]
// Convention: __esi
// Signature: void __esi engine_boss_c_modelStructNotSupported4_FUN_0041dbe0(SMRGLHeaderExtended *mrgl_data)

#include "nocturne.h"

void __esi engine_boss_c_modelStructNotSupported4_FUN_0041dbe0(SMRGLHeaderExtended *mrgl_data)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x44;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  (mrgl_data->base).type = local_3c;
  (mrgl_data->base).count = iStack_38;
  mrgl_data->child_count = iStack_34;
  mrgl_data[1].base.type = iStack_30;
  mrgl_data[1].base.count = iStack_2c;
  mrgl_data[1].child_count = iStack_28;
  mrgl_data[2].base.type = iStack_24;
  mrgl_data[2].base.count = iStack_20;
  mrgl_data[2].child_count = iStack_1c;
  mrgl_data[3].base.type = iStack_18;
  mrgl_data[3].base.count = iStack_14;
  mrgl_data[3].child_count = iStack_10;
  mrgl_data[4].base.type = iStack_c;
  return;
}
