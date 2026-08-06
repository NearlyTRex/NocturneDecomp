// Name: core_setdir.cpp_CDemonSet_FUN_00513720
// Address: 00513720
// Address Range: [[00513720, 005138a6]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_FUN_00513720(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_FUN_00513720(CDemonSet *this_ptr)

{
  int value;
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  CVector3f *local_1c;
  uint *local_18;
  CVector3f *local_14;
  
  bVar7 = 0;
  value = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(g_CDemonRenderer_PTR_005ae704)
  ;
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(g_CDemonRenderer_PTR_005ae704,0);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40
            (g_CDemonRenderer_PTR_005ae704,0,0,0x40,0x30);
  iVar4 = 0;
  if (0 < this_ptr->camera_count) {
    local_1c = &this_ptr->cameras[0].orientation;
    local_14 = &this_ptr->cameras[0].position;
    local_18 = (uint *)&DAT_020875f8;
    do {
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
                ((CDemonRenderer *)PTR_DAT_005ae700,local_14);
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
                ((CDemonRenderer *)PTR_DAT_005ae700,this_ptr->cameras[iVar4].projection_scale);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
                ((CDemonRenderer *)PTR_DAT_005ae700,local_1c);
      engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0
                ((CDemonRenderer *)PTR_DAT_005ae700,(CVector3f *)0x26635f8);
      engine_special_cpp_clearZBufferNative_FUN_0052eed4();
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(this_ptr,9999.9,0);
      iVar3 = 0;
      puVar2 = local_18;
      do {
        puVar5 = *(uint **)(&DAT_01bd4260 + iVar3);
        puVar6 = puVar2;
        for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(byte *)puVar6 = *(byte *)puVar5;
          puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        }
        iVar3 = iVar3 + 4;
        puVar2 = puVar2 + 0x40;
      } while (iVar3 != 0xc0);
      iVar4 = iVar4 + 1;
      local_1c = (CVector3f *)&local_1c[0x22].z;
      local_18 = local_18 + 0xc00;
      local_14 = (CVector3f *)&local_14[0x22].z;
    } while (iVar4 < this_ptr->camera_count);
  }
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70();
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(g_CDemonRenderer_PTR_005ae704,value);
  return;
}
