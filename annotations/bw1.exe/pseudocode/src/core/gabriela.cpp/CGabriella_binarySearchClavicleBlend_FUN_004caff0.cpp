// Name: core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_004caff0
// Address: 004caff0
// Address Range: [[004caff0, 004cb1d6]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_binarySearchClavicleBlend_FUN_004caff0(CGabriella *this_ptr,float delta_time,float *clavicle_blend,int probe_bone_index,int blend_bone_index,CVector3f *probe_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_binarySearchClavicleBlend_FUN_004caff0(CGabriella *this_ptr,float delta_time,float *clavicle_blend,int probe_bone_index,int blend_bone_index,CVector3f *probe_offset)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float local_1b78;
  SPose local_1b74;
  CMatrix3x4f local_d8;
  CMatrix3x4f local_a8;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  float local_18;
  CDeformableModelInstance *local_14;
  
  bVar6 = 0;
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(pCVar2,&local_1b74);
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
            (pCVar2,blend_bone_index,&local_3c);
  local_24.x = local_3c.x;
  *(uint *)((int)&local_24 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_3c + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  local_24.y = local_24.y + _DAT_005e1230;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,&local_24,&local_48);
  local_30.x = local_48.x;
  *(uint *)((int)&local_30 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_48 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_48 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  local_18 = *clavicle_blend;
  local_1b78 = delta_time / _DAT_00600d68 + local_18;
  if (1.0 < local_1b78) {
    local_1b78 = 1.0;
  }
  local_14 = &(this_ptr->base).base.model;
  iVar3 = 0;
  do {
    pCVar2 = local_14;
    core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90(local_14,&local_1b74);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
              (pCVar2,0,0.0,*clavicle_blend,blend_bone_index,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00568e30
              (pCVar2,probe_bone_index,&local_a8);
    pCVar4 = &local_a8;
    pCVar5 = &local_d8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar5->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_transformVector3x4_FUN_005b5080(probe_offset,&local_d8,&local_60);
    local_6c.x = local_60.x;
    *(uint *)((int)&local_6c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_60 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&local_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,&local_6c,&local_54);
    local_78.x = local_54.x;
    *(uint *)((int)&local_78 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_54 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&local_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    iVar1 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                      (g_CDemonSetPtr,&local_30,&local_78);
    if (iVar1 == 0) {
      local_1b78 = *clavicle_blend;
    }
    else if (iVar3 != 0) {
      local_18 = *clavicle_blend;
    }
    iVar3 = iVar3 + 1;
    *clavicle_blend = (local_18 + local_1b78) * (float)_DAT_005e1234;
  } while (iVar3 < 7);
  return;
}
