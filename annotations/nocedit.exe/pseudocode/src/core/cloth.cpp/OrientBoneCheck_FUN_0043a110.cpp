// Name: core_cloth.cpp_OrientBoneCheck_FUN_0043a110
// Address: 0043a110
// Address Range: [[0043a110, 0043a2af]]
// Convention: unknown
// Signature: void core_cloth_cpp_OrientBoneCheck_FUN_0043a110(void)

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_OrientBoneCheck(uint param_1, uint param_2,
   uint param_3) */

void core_cloth_cpp_OrientBoneCheck_FUN_0043a110(void)

{
  CSkeleton *this_ptr;
  int iVar1;
  char *bone_name;
  CVector3f *pCVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  byte bVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  CDeformableModelInstance *in_stack_0000000c;
  CMatrix3x4f local_94;
  CMatrix3x4f local_64;
  CVector3f local_34;
  CVector3f local_28;
  CSkeleton *local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                       (in_stack_0000000c);
  bone_name = (char *)(in_stack_00000004 + 0x3ce90 + in_stack_00000008 * 0xac);
  local_1c = this_ptr;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,bone_name);
  bone_name[0x44] = '\0';
  bone_name[0x45] = '\0';
  bone_name[0x46] = '\0';
  bone_name[0x47] = '\0';
  local_18 = -1;
  *(int *)(bone_name + 0x40) = iVar1;
  iVar1 = 0;
  if (0 < this_ptr->bone_count) {
    pCVar2 = in_stack_0000000c->transformed_vertices;
    do {
      if ((*(int *)(bone_name + 0x40) == this_ptr->bone_list[0].parent_index) &&
         (local_14 = SQRT(pCVar2->z * pCVar2->z + pCVar2->x * pCVar2->x + pCVar2->y * pCVar2->y),
         *(float *)(bone_name + 0x44) < local_14)) {
        *(float *)(bone_name + 0x44) = local_14;
        local_18 = iVar1;
      }
      this_ptr = (CSkeleton *)((this_ptr->motion_list).state_names[1] + 2);
      iVar1 = iVar1 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar1 < local_1c->bone_count);
  }
  if (local_18 < 0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x2bf;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't orient bone with no children!");
  }
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            (&local_34,in_stack_0000000c->transformed_vertices + local_18);
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_28.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)(bone_name + 0x48),&local_28,&local_34);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_94,(CVector3f *)(bone_name + 0x1c),(CVector3f *)(bone_name + 0x28));
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(bone_name + 0x48),&local_94,&local_64);
  pCVar3 = &local_64;
  pfVar4 = (float *)(bone_name + 0x48);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  *(float *)(bone_name + 0x38) = 1.0 / *(float *)(bone_name + 0x14);
  *(float *)(bone_name + 0x3c) = 1.0 / *(float *)(bone_name + 0x18);
  if (*(float *)(bone_name + 0x34) <= 0.0) {
    return;
  }
  *(uint *)(bone_name + 0x44) = *(uint *)(bone_name + 0x34);
  return;
}
