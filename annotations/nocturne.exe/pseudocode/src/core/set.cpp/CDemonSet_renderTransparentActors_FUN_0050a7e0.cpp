// Name: core_set.cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0
// Address: 0050a7e0
// Address Range: [[0050a7e0, 0050a96b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0(CDemonSet *this_ptr)

{
  int iVar1;
  CVector3f *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte auStack_44 [24];
  CVector3f CStack_2c;
  CVector3f CStack_20;
  char *local_14;
  
  iVar5 = this_ptr->sorted_render_actor_count + -1;
  if (-1 < iVar5) {
    local_14 = this_ptr->cameras[0].name + this_ptr->sorted_render_actor_count * 4 + -8;
    do {
      iVar1 = *(int *)(local_14 + 0x15f300);
      if (*(int *)(iVar1 + 0xfc) == 0) {
        *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xf7;
      }
      else {
        pCVar2 = (CVector3f *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,auStack_44);
        if (&CStack_2c != pCVar2) {
          CStack_2c.x = pCVar2->x;
          CStack_2c.y = pCVar2->y;
          CStack_2c.z = pCVar2->z;
        }
        if (&CStack_20 != pCVar2 + 1) {
          CStack_20.x = pCVar2[1].x;
          CStack_20.y = pCVar2[1].y;
          CStack_20.z = pCVar2[1].z;
        }
        core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
                  (this_ptr,(CVector3f *)(iVar1 + 0x20),(UOrientationVector *)(iVar1 + 0x30),
                   &CStack_2c,&CStack_20,(CMatrix3x3f *)(iVar1 + 0x3c));
        core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340
                  (this_ptr,*(int *)(iVar1 + 0x108),*(int *)(iVar1 + 0x10c),*(int *)(iVar1 + 0x110))
        ;
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xc))(iVar1);
        if (iVar3 == 0) {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xf7;
        }
        else {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 8;
        }
        iVar3 = 0;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                  (g_CDemonRenderer_PTR_005ae704,1);
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_FUN_0050e080(this_ptr,iVar3,0);
            iVar4 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xc))(iVar1);
            if (iVar4 != 0) {
              *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 8;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                      (g_CDemonRenderer_PTR_005ae704,1);
            iVar3 = iVar3 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
          } while (iVar3 < this_ptr->mirror_glass_actor_count);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(this_ptr,0x10000,0x10000,0x10000);
      }
      local_14 = local_14 + -4;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}
