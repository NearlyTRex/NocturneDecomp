// Name: core_set.cpp_CDemonSet_renderOpaqueActors_FUN_005301d0
// Address: 005301d0
// Address Range: [[005301d0, 00530403]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderOpaqueActors_FUN_005301d0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderOpaqueActors_FUN_005301d0(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int fog_scale;
  int iVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  byte bVar6;
  float local_60 [6];
  CVector3f local_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  char *local_18;
  int local_14;
  
  bVar6 = 0;
  _DAT_0200a3a4 = 0;
  if (((g_CGamePtr->letterbox_mode == 0) &&
      (iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x255f0) != 0)) {
    _DAT_0200a3a4 = *(int *)(iVar1 + 0x255f8);
  }
  local_14 = this_ptr->sorted_render_actor_count + -1;
  if (-1 < local_14) {
    local_18 = this_ptr->cameras[0].name + this_ptr->sorted_render_actor_count * 4 + -8;
    do {
      iVar1 = *(int *)(local_18 + 0x15f6fc);
      if (*(int *)(iVar1 + 0xf8) == 0) {
        *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xfb;
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x24))(iVar1);
        pfVar4 = local_60;
        pCVar5 = &local_48;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar5->x = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
          pCVar5 = (CVector3f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
        if (&CStack_30 != &local_48) {
          CStack_30.x = local_48.x;
          CStack_30.y = local_48.y;
          CStack_30.z = local_48.z;
        }
        if (&CStack_24 != &CStack_3c) {
          CStack_24.x = CStack_3c.x;
          CStack_24.y = CStack_3c.y;
          CStack_24.z = CStack_3c.z;
        }
        core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
                  (this_ptr,(CVector3f *)(iVar1 + 0x20),(UOrientationVector *)(iVar1 + 0x30),
                   &CStack_30,&CStack_24,(CMatrix3x3f *)(iVar1 + 0x3c));
        iVar3 = *(int *)(iVar1 + 0x108);
        iVar2 = *(int *)(iVar1 + 0x10c);
        fog_scale = *(int *)(iVar1 + 0x110);
        if (iVar1 == _DAT_0200a3a4) {
          iVar3 = (iVar3 * 3) / 2;
          iVar2 = (iVar2 * 3) / 2;
          fog_scale = (fog_scale * 3) / 2;
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(g_CDemonSetPtr,iVar3,iVar2,fog_scale);
        engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x18))(iVar1);
        if (iVar3 == 0) {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xfb;
        }
        else {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 4;
        }
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
        iVar3 = 0;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar3,0);
            iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x18))(iVar1);
            if (iVar2 != 0) {
              *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 4;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
            iVar3 = iVar3 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
          } while (iVar3 < this_ptr->mirror_glass_actor_count);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(this_ptr,0x10000,0x10000,0x10000);
      }
      local_18 = local_18 + -4;
      local_14 = local_14 + -1;
    } while (-1 < local_14);
  }
  return;
}
