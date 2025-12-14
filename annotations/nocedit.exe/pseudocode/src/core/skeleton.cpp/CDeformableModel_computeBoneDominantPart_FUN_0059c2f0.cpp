// Name: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
// Address: 0059c2f0
// Address Range: [[0059c2f0, 0059c5d1]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0(CDeformableModel * model_ptr, int bone_index, CVector3f * reference_position)

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
          (CDeformableModel *model_ptr,int bone_index,CVector3f *reference_position)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  BADSPACEBASE *in_ESP;
  byte *pbVar9;
  CMotionController *unaff_EDI;
  int iVar10;
  int in_stack_00000020;
  CVector3f CStack_54;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  uint local_30;
  float local_2c;
  int local_28;
  float local_24;
  int local_20;
  CDeformableModelInstance *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int iVar11;
  
  iVar1 = bone_index;
  local_40 = 0.0;
  local_48 = 1e+30;
  local_30 = 0;
  local_44 = 0.0;
  if (1 < model_ptr->num_parts) {
    pCVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b4,"..\\core\\skeleton.cpp",0x5ef);
    local_1c = (CDeformableModelInstance *)0x0;
    if (pCVar2 != (CDeformableModelInstance *)0x0) {
      local_1c = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(pCVar2);
    }
    if (local_1c == (CDeformableModelInstance *)0x0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x5f0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    pCVar2 = local_1c;
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
              (local_1c,(CDeformableModel *)reference_position);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(pCVar2);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar2);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(pCVar2,0);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar2,&CStack_54,bone_index);
    local_1c = (CDeformableModelInstance *)0x0;
    if (0 < *(int *)(in_stack_00000020 + 0x7140)) {
      local_20 = in_stack_00000020;
      do {
        model_ptr = (CDeformableModel *)0x0;
        iVar10 = 0;
        iVar11 = 0;
        bone_index = 0;
        local_18 = local_20;
        local_10 = local_14 * 0x12;
        if (0 < *(int *)(local_20 + 0x7164)) {
          do {
            puVar3 = (ushort *)(*(int *)(in_stack_00000020 + 0x7c) + local_10);
            puVar4 = puVar3 + 3;
            do {
              pbVar9 = (byte *)(*(int *)(in_stack_00000020 + 0x40) + (uint)*puVar3 * 0x34);
              iVar5 = 0;
              pbVar7 = pbVar9;
              pbVar8 = pbVar9;
              while (iVar5 < (int)(uint)*pbVar9) {
                if ((uint)pbVar8[1] == iVar1) {
                  bone_index = (int)((float)bone_index + *(float *)(pbVar7 + 4));
                  pbVar7 = pbVar7 + 4;
                  iVar5 = iVar5 + 1;
                  pbVar8 = pbVar8 + 1;
                }
                else {
                  pbVar7 = pbVar7 + 4;
                  iVar5 = iVar5 + 1;
                  pbVar8 = pbVar8 + 1;
                }
              }
              piVar6 = (int *)((int)unaff_EDI[0x68].tween_progress + (uint)*puVar3 * 0xc);
              local_44 = (float)*piVar6 * 0.00390625f;
              local_40 = (float)piVar6[1] * 0.00390625f;
              local_3c = (float)piVar6[2] * 0.00390625f;
              puVar3 = puVar3 + 1;
              iVar10 = iVar10 + 1;
              model_ptr = (CDeformableModel *)
                          ((local_3c - local_48) * (local_3c - local_48) +
                           (local_40 - CStack_54.z) * (local_40 - CStack_54.z) +
                           (local_44 - CStack_54.y) * (local_44 - CStack_54.y) + (float)model_ptr);
            } while (puVar3 != puVar4);
            local_14 = local_14 + 1;
            local_10 = local_10 + 0x12;
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(local_20 + 0x7164));
        }
        if ((float)bone_index <= local_24) {
          if ((ABS(local_24) == 0.0) && ((float)model_ptr / (float)iVar10 < local_2c)) {
            local_28 = (int)local_1c;
            local_2c = (float)model_ptr / (float)iVar10;
          }
        }
        else {
          local_24 = (float)bone_index;
          local_28 = (int)local_1c;
        }
        local_20 = local_20 + 0x60;
        local_1c = (CDeformableModelInstance *)((int)local_1c + 1);
      } while ((int)local_1c < *(int *)(in_stack_00000020 + 0x7140));
    }
    g_CurrentDebugLine = 0x628;
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    if (unaff_EDI != (CMotionController *)0x0) {
      (*unaff_EDI->vtable->dtor)(unaff_EDI);
    }
    return (int)local_1c;
  }
  return 0;
}
