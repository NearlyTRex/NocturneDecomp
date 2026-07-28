// Name: core_set.cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0
// Address: 0050a7e0
// Address Range: [[0050a7e0, 0050a96b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0(CDemonSet *this_ptr)

{
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte auStack_44 [24];
  CVector3f CStack_2c;
  CVector3f CStack_20;
  char *local_14;
  
  fVar1 = this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].z;
  iVar6 = (int)fVar1 + -1;
  if (-1 < iVar6) {
    local_14 = this_ptr->cameras[0].name + (int)fVar1 * 4 + -8;
    do {
      iVar2 = *(int *)(local_14 + 0x15f300);
      if (*(int *)(iVar2 + 0xfc) == 0) {
        *(byte *)(iVar2 + 0x140) = *(byte *)(iVar2 + 0x140) & 0xf7;
      }
      else {
        pCVar3 = (CVector3f *)(**(code **)(*(int *)(iVar2 + 0x14c) + 0x14))(iVar2,auStack_44);
        if (&CStack_2c != pCVar3) {
          CStack_2c.x = pCVar3->x;
          CStack_2c.y = pCVar3->y;
          CStack_2c.z = pCVar3->z;
        }
        if (&CStack_20 != pCVar3 + 1) {
          CStack_20.x = pCVar3[1].x;
          CStack_20.y = pCVar3[1].y;
          CStack_20.z = pCVar3[1].z;
        }
        core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
                  (this_ptr,(CVector3f *)(iVar2 + 0x20),(UOrientationVector *)(iVar2 + 0x30),
                   &CStack_2c,&CStack_20,(CMatrix3x3f *)(iVar2 + 0x3c));
        core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340
                  (this_ptr,*(int *)(iVar2 + 0x108),*(int *)(iVar2 + 0x10c),*(int *)(iVar2 + 0x110))
        ;
        iVar4 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0xc))(iVar2);
        if (iVar4 == 0) {
          *(byte *)(iVar2 + 0x140) = *(byte *)(iVar2 + 0x140) & 0xf7;
        }
        else {
          *(byte *)(iVar2 + 0x140) = *(byte *)(iVar2 + 0x140) | 8;
        }
        iVar4 = 0;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
        if (0 < (int)this_ptr->renderable_actors[0x6f7]) {
          do {
            core_set_cpp_FUN_0050e080(this_ptr,iVar4,0);
            iVar5 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0xc))(iVar2);
            if (iVar5 != 0) {
              *(byte *)(iVar2 + 0x140) = *(byte *)(iVar2 + 0x140) | 8;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
          } while (iVar4 < (int)this_ptr->renderable_actors[0x6f7]);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(this_ptr,0x10000,0x10000,0x10000);
      }
      local_14 = local_14 + -4;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return;
}
