// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260
// Address: 0059f260
// Address Range: [[0059f260, 0059f6dc]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, CVector3f * source_position, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260
          (CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,
          CVector3f *source_position,float blend_weight,int bone_index,
          CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  int iVar6;
  CQuaternion4f *result_out;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float *pfVar7;
  int unaff_EDI;
  CDeformableModel_MotionBlendWeightFunc *pCVar9;
  float *pfVar10;
  uint *puVar12;
  uint *puVar13;
  byte bVar14;
  int unaff_retaddr;
  CQuaternion4f *in_stack_0000001c;
  CQuaternion4f *in_stack_00000024;
  CQuaternion4f *in_stack_00000028;
  float afStackY_18a8 [1518];
  float fVar15;
  CQuaternion4f *in_stack_ffffff24;
  CQuaternion4f *in_stack_ffffff28;
  CQuaternion4f *in_stack_ffffff2c;
  float in_stack_ffffff30;
  float fStack_c0;
  float in_stack_ffffff48;
  float in_stack_ffffff50;
  uint local_a8;
  byte auStack_a4 [16];
  uint auStack_94 [5];
  CQuaternion4f CStack_80;
  uint uStack_6c;
  uint auStack_68 [11];
  float afStack_3c [3];
  CQuaternion4f *local_30;
  CQuaternion4f *local_2c;
  CQuaternion4f *local_28;
  CQuaternion4f *local_24;
  CQuaternion4f *local_20;
  CSkeleton *local_1c;
  CQuaternion4f *local_18;
  int local_14;
  CQuaternion4f *pCVar8;
  float *pfVar11;
  
  bVar14 = 0;
  if ((float)0.001 < blend_weight) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    local_30 = source_quaternions + 0x6b;
    if (source_quaternions[0x225].w == 0.0) {
      iVar6 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_20 = source_quaternions;
        local_18 = (CQuaternion4f *)source_position;
        local_28 = local_30;
        do {
          hierarchy_distance =
               core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                         (this_ptr_00,iVar6,(int)in_stack_0000001c);
          if (-1 < hierarchy_distance) {
            fVar15 = blend_weight;
            in_stack_00000024 =
                 (CQuaternion4f *)
                 (*(code *)in_stack_00000024)
                           (iVar6,(int)in_stack_0000001c,(float)in_stack_0000001c,hierarchy_distance
                            ,(CDeformableModelInstance *)blend_weight);
            fStack_c0 = 8.260639e-39;
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      ((CQuaternion4f *)source_position,in_stack_0000001c,in_stack_00000024,
                       in_stack_ffffff50);
            pCVar9 = blend_callback + (uint)bVar14 * -8 + 0x6b4;
            *(float *)(blend_callback + 0x6b0) = fVar15;
            *(uint *)pCVar9 = *(uint *)(auStack_a4 + (uint)bVar14 * -8 + -4);
            *(uint *)(pCVar9 + (uint)bVar14 * -8 + 4) =
                 *(uint *)(auStack_a4 + (uint)bVar14 * -8 + (uint)bVar14 * -8);
            *(uint *)(pCVar9 + (uint)bVar14 * -8 + 4 + (uint)bVar14 * -8 + 4) =
                 *(uint *)
                  ((int)(auStack_a4 + (uint)bVar14 * -8 + (uint)bVar14 * -8) +
                  ((uint)bVar14 * -2 + 1) * 4);
          }
          iVar6 = iVar6 + 1;
          local_1c = (CSkeleton *)((int)local_1c + 0x10);
          local_24 = (CQuaternion4f *)((int)local_24 + 0x10);
          local_14 = local_14 + 0x10;
        } while (iVar6 < this_ptr_00->bone_count);
      }
    }
    else if (source_quaternions[0x225].w == 1.4013e-45) {
      local_14 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_24 = source_quaternions;
        result_out = (CQuaternion4f *)source_position;
        local_2c = local_30;
        local_1c = this_ptr_00;
        do {
          iVar6 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                            (this_ptr_00,unaff_EBP,(int)in_stack_0000001c);
          if (-1 < iVar6) {
            if (*(int *)(local_14 + 0x2857c) < 0) {
              pfVar10 = (float *)&stack0xffffff34;
              pCVar8 = result_out;
            }
            else {
              core_xform_cpp_negateFirstComponent_FUN_005f75e0
                        ((CQuaternion4f *)(bone_index + *(int *)(local_14 + 0x2857c) * 0x10),
                         in_stack_ffffff24);
              pCVar8 = (CQuaternion4f *)(auStack_a4 + 0xc);
              auStack_a4._8_4_ = in_stack_ffffff48;
              auStack_94[(uint)bVar14 * -2 + -1] = auStack_94[(uint)bVar14 * -2 + -8];
              auStack_94[(uint)bVar14 * -2 + (uint)bVar14 * -2] =
                   auStack_94[(uint)bVar14 * -2 + (uint)bVar14 * -2 + -7];
              (auStack_94 + (uint)bVar14 * -2 + (uint)bVar14 * -2)[(uint)bVar14 * -2 + 1] =
                   (auStack_94 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + -7)[(uint)bVar14 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(result_out,pCVar8,in_stack_ffffff28);
              local_a8 = auStack_68[1];
              *(uint *)(auStack_a4 + (uint)bVar14 * -8) = auStack_68[(uint)bVar14 * -2 + 2];
              *(uint *)(auStack_a4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 4) =
                   auStack_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 3];
              *(uint *)
               ((int)(auStack_a4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 4) +
               ((uint)bVar14 * -2 + 1) * 4) =
                   (auStack_68 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 3)[(uint)bVar14 * -2 + 1];
              pfVar10 = (float *)&stack0xffffff3c;
              core_xform_cpp_multiplyQuaternion_FUN_005f7640
                        ((CQuaternion4f *)auStack_a4,
                         (CQuaternion4f *)((int)local_20 + unaff_retaddr),in_stack_ffffff2c);
              pCVar8 = &CStack_80;
            }
            pfVar11 = pfVar10 + (uint)bVar14 * -2 + 1;
            pfVar7 = (float *)((int)pCVar8 + (uint)bVar14 * -8 + 4);
            *pfVar10 = pCVar8->w;
            pfVar10 = pfVar7 + (uint)bVar14 * -2 + 1;
            *pfVar11 = *pfVar7;
            pfVar11[(uint)bVar14 * -2 + 1] = *pfVar10;
            (pfVar11 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
                 pfVar10[(uint)bVar14 * -2 + 1];
            in_stack_ffffff28 = (CQuaternion4f *)&stack0xffffff40;
            in_stack_ffffff24 = local_18;
            in_stack_ffffff2c = in_stack_00000028;
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_18,in_stack_ffffff28,in_stack_00000028,in_stack_ffffff30);
            puVar12 = (uint *)(unaff_EDI + 0x6b4 + (uint)bVar14 * -8);
            *(uint *)(unaff_EDI + 0x6b0) = uStack_6c;
            puVar13 = puVar12 + (uint)bVar14 * -2 + 1;
            *puVar12 = auStack_68[(uint)bVar14 * -2];
            *puVar13 = auStack_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
            puVar13[(uint)bVar14 * -2 + 1] =
                 (auStack_68 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
          }
          result_out = result_out + 1;
          local_18 = (CQuaternion4f *)&local_18[2].x;
          local_20 = (CQuaternion4f *)((int)local_20 + 0x10);
          local_28 = (CQuaternion4f *)((int)local_28 + 0x10);
          unaff_EBP = unaff_EBP + 1;
        } while (unaff_EBP < this_ptr_00->bone_count);
      }
    }
    else {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0xad5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Write me!");
    }
    if ((int)in_stack_0000001c < 0) {
      fVar4 = source_position[0x6c].x;
      fVar15 = *(float *)(bone_index + 4);
      fVar1 = *(float *)(bone_index + 8);
      fVar5 = 1.0 - (float)blend_callback;
      fVar2 = source_position[0x8e].x;
      fVar3 = source_position[0x8e].y;
      if (&source_position[0x8d].z != afStack_3c) {
        source_position[0x8d].z =
             source_position[0x8d].z * fVar5 +
             source_position[0x6b].y * *(float *)bone_index * (float)blend_callback;
        source_position[0x8e].x =
             fVar2 * fVar5 + source_position[0x6b].z * fVar15 * (float)blend_callback;
        source_position[0x8e].y = fVar3 * fVar5 + fVar4 * fVar1 * (float)blend_callback;
        return;
      }
    }
  }
  return;
}
