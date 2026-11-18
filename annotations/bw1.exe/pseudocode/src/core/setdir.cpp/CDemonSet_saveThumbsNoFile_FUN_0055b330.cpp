// Name: core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_0055b330
// Address: 0055b330
// Address Range: [[0055b330, 0055b4b6]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_saveThumbsNoFile_FUN_0055b330(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_saveThumbsNoFile_FUN_0055b330(CDemonSet *this_ptr)

{
  int value;
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  CVector3f *local_1c;
  char *local_18;
  CVector3f *local_14;
  
  bVar7 = 0;
  value = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(g_CDemonRenderer_PTR_00612560)
  ;
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(g_CDemonRenderer_PTR_00612560,0);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00483c10
            (g_CDemonRenderer_PTR_00612560,0,0,0x40,0x30);
  iVar4 = 0;
  if (0 < this_ptr->camera_count) {
    local_1c = &this_ptr->cameras[0].orientation;
    local_14 = &this_ptr->cameras[0].position;
    local_18 = g_CHAR_ARRAY_020b28f4;
    do {
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
                (g_CDemonRenderer_PTR_0061255c,local_14);
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
                (g_CDemonRenderer_PTR_0061255c,this_ptr->cameras[iVar4].projection_scale);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
                (g_CDemonRenderer_PTR_0061255c,local_1c);
      engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780
                (g_CDemonRenderer_PTR_0061255c,&g_CVector3i_0268e8f4);
      engine_special_cpp_clearZBufferNative_FUN_0057dca4();
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(this_ptr,9999.9,0);
      iVar3 = 0;
      pcVar2 = local_18;
      do {
        pcVar5 = *(char **)((int)g_ZBufferScanlineArray + iVar3);
        pcVar6 = pcVar2;
        for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pcVar6 = *(uint *)pcVar5;
          pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
          pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
        }
        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pcVar6 = *pcVar5;
          pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        }
        iVar3 = iVar3 + 4;
        pcVar2 = pcVar2 + 0x100;
      } while (iVar3 != 0xc0);
      iVar4 = iVar4 + 1;
      local_1c = local_1c + 0x23;
      local_18 = local_18 + 0x3000;
      local_14 = local_14 + 0x23;
    } while (iVar4 < this_ptr->camera_count);
  }
  engine_drender_cpp_popViewport_FUN_00483c40();
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(g_CDemonRenderer_PTR_00612560,value);
  return;
}
