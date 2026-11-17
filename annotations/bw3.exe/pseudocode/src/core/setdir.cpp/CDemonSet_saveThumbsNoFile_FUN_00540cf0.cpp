// Name: core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00540cf0
// Address: 00540cf0
// Address Range: [[00540cf0, 00540e76]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_saveThumbsNoFile_FUN_00540cf0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_saveThumbsNoFile_FUN_00540cf0(CDemonSet *this_ptr)

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
  value = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(g_CDemonRenderer_PTR_005f2afc)
  ;
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(g_CDemonRenderer_PTR_005f2afc,0);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046d2f0
            (g_CDemonRenderer_PTR_005f2afc,0,0,0x40,0x30);
  iVar4 = 0;
  if (0 < this_ptr->camera_count) {
    local_1c = &this_ptr->cameras[0].orientation;
    local_14 = &this_ptr->cameras[0].position;
    local_18 = g_CHAR_ARRAY_0212551c;
    do {
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
                (g_CDemonRenderer_PTR_005f2af8,local_14);
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
                (g_CDemonRenderer_PTR_005f2af8,this_ptr->cameras[iVar4].projection_scale);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
                (g_CDemonRenderer_PTR_005f2af8,local_1c);
      engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60
                (g_CDemonRenderer_PTR_005f2af8,&g_CVector3i_0270151c);
      engine_special_cpp_clearZBufferNative_FUN_00560dd4();
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(this_ptr,9999.9,0);
      iVar3 = 0;
      pcVar2 = local_18;
      do {
        pcVar5 = *(char **)((int)g_UINT_PTR_ARRAY_01c60dac + iVar3);
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
  engine_drender_cpp_popViewport_FUN_0046d320();
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(g_CDemonRenderer_PTR_005f2afc,value);
  return;
}
