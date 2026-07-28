// Name: core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750
// Address: 00508750
// Address Range: [[00508750, 00508889]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet *this_ptr,int layer_flag)

{
  int iVar1;
  CVector3f *pCVar2;
  int iVar3;
  CDemonSet *pCVar4;
  byte auStack_40 [24];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  if (*(int *)(0x01CC9450 + 4) != 0) {
    layer_flag = 0;
  }
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < (int)this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].z) {
    do {
      iVar1 = pCVar4->vdir_boxes[0xec].dead;
      pCVar2 = (CVector3f *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,auStack_40);
      if (&CStack_28 != pCVar2) {
        CStack_28.x = pCVar2->x;
        CStack_28.y = pCVar2->y;
        CStack_28.z = pCVar2->z;
      }
      if (&CStack_1c != pCVar2 + 1) {
        CStack_1c.x = pCVar2[1].x;
        CStack_1c.y = pCVar2[1].y;
        CStack_1c.z = pCVar2[1].z;
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
                (this_ptr,(CVector3f *)(iVar1 + 0x20),(UOrientationVector *)(iVar1 + 0x30),
                 &CStack_28,&CStack_1c,(CMatrix3x3f *)(iVar1 + 0x3c));
      core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340
                (this_ptr,*(int *)(iVar1 + 0x108),*(int *)(iVar1 + 0x10c),*(int *)(iVar1 + 0x110));
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
      (**(code **)(*(int *)(iVar1 + 0x14c) + 0x10))(iVar1,layer_flag);
      core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(this_ptr,0x10000,0x10000,0x10000);
      iVar3 = iVar3 + 1;
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < (int)this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].z);
  }
  return;
}
