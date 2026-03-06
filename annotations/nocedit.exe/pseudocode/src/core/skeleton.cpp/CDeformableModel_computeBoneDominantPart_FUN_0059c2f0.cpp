// Name: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
// Address: 0059c2f0
// Address Range: [[0059c2f0, 0059c5d1]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0(CDeformableModel *this_ptr,int bone_index,CVector3f *reference_position)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0(CDeformableModel *this_ptr,int bone_index,CVector3f *reference_position)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  CVector3i *pCVar3;
  SVert *pSVar4;
  SVert *pSVar5;
  ushort *puVar6;
  SVert *pSVar7;
  CVector3f local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_48;
  int local_44;
  float local_40;
  CDeformableModel *local_3c;
  int local_38;
  CDeformableModel *local_34;
  int local_30;
  int local_2c;
  int local_28;
  CDeformableModelInstance *local_24;
  ushort *local_20;
  int local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  local_40 = 0.0;
  local_48 = 1e+30;
  local_30 = 0;
  local_44 = 0;
  if (1 < this_ptr->num_parts) {
    pCVar1 = (CDeformableModelInstance *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b4,"..\\core\\skeleton.cpp",0x5ef);
    local_24 = (CDeformableModelInstance *)0x0;
    if (pCVar1 != (CDeformableModelInstance *)0x0) {
      local_24 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(pCVar1);
    }
    if (local_24 == (CDeformableModelInstance *)0x0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x5f0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    pCVar1 = local_24;
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(local_24,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(pCVar1);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar1);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(pCVar1,0);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar1,&local_6c,bone_index);
    local_38 = 0;
    if (0 < this_ptr->num_parts) {
      local_3c = this_ptr;
      do {
        local_18 = 0.0;
        local_1c = 0;
        local_28 = 0;
        local_14 = 0.0;
        local_34 = local_3c;
        local_2c = local_30 * 0x12;
        if (0 < local_3c->parts[0].tri_counts[0]) {
          do {
            puVar6 = (ushort *)
                     ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_2c);
            local_20 = puVar6 + 3;
            do {
              pSVar7 = this_ptr->vertex_data_ptr[0] + *puVar6;
              iVar2 = 0;
              pSVar4 = pSVar7;
              pSVar5 = pSVar7;
              while (iVar2 < (int)(uint)pSVar7->num_bone_influences) {
                if ((uint)pSVar5->bone_indices[0] == bone_index) {
                  local_14 = local_14 + pSVar4->bone_weights[0];
                  pSVar4 = (SVert *)pSVar4->bone_weights;
                  iVar2 = iVar2 + 1;
                  pSVar5 = (SVert *)pSVar5->bone_indices;
                }
                else {
                  pSVar4 = (SVert *)pSVar4->bone_weights;
                  iVar2 = iVar2 + 1;
                  pSVar5 = (SVert *)pSVar5->bone_indices;
                }
              }
              pCVar3 = local_24->skinned_vertices_buffer + *puVar6;
              local_60 = (float)pCVar3->x * 0.00390625f;
              local_5c = (float)pCVar3->y * 0.00390625f;
              local_58 = (float)pCVar3->z * 0.00390625f;
              puVar6 = puVar6 + 1;
              local_1c = local_1c + 1;
              local_18 = (local_58 - local_6c.z) * (local_58 - local_6c.z) +
                         (local_5c - local_6c.y) * (local_5c - local_6c.y) +
                         (local_60 - local_6c.x) * (local_60 - local_6c.x) + local_18;
            } while (puVar6 != local_20);
            local_30 = local_30 + 1;
            local_2c = local_2c + 0x12;
            local_28 = local_28 + 1;
          } while (local_28 < local_3c->parts[0].tri_counts[0]);
        }
        if (local_14 <= local_40) {
          if (ABS(local_40) == 0.0) {
            local_10 = local_1c;
            local_18 = local_18 / (float)local_1c;
            if (local_18 < local_48) {
              local_44 = local_38;
              local_48 = local_18;
            }
          }
        }
        else {
          local_40 = local_14;
          local_44 = local_38;
        }
        local_3c = (CDeformableModel *)(local_3c->tri_count + 3);
        local_38 = local_38 + 1;
      } while (local_38 < this_ptr->num_parts);
    }
    g_CurrentDebugLine = 0x628;
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    if (local_24 != (CDeformableModelInstance *)0x0) {
      (*((local_24->motion_controller).vtable)->dtor)(&local_24->motion_controller,2);
    }
    return local_44;
  }
  return 0;
}
