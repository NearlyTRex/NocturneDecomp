// Name: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
// Address: 0059c2f0
// MANUAL RECONSTRUCTION
// Address Range: [[0059c2f0, 0059c5d1]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0(CDeformableModel *this_ptr,int bone_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0(CDeformableModel *this_ptr,int bone_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDeformableModelInstance *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  ushort *puVar4;
  int iVar2;
  CVector3i *pCVar3;
  ushort *puVar6;
  SVert *pSVar7;
  CVector3f local_6c;
  float local_48;
  int local_44;
  float local_40;
  int local_38;
  int local_30;
  int local_28;
  int local_1c;
  float local_18;
  float local_14;
  
  local_40 = 0.0;
  local_48 = 1e+30;
  local_30 = 0;
  local_44 = 0;
  if (1 < this_ptr->num_parts) {
    pCVar1 = (CDeformableModelInstance *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                       (sizeof(CDeformableModelInstance),"..\\core\\skeleton.cpp",1519);
    this_ptr_00 = (CDeformableModelInstance *)0x0;
    if (pCVar1 != (CDeformableModelInstance *)0x0) {
      this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(pCVar1);
    }
    if (this_ptr_00 == (CDeformableModelInstance *)0x0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 1520;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
              (this_ptr_00,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr_00,0);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (this_ptr_00,&local_6c,bone_index);
    local_38 = 0;
    if (0 < this_ptr->num_parts) {
      do {
        local_18 = 0.0;
        local_1c = 0;
        local_28 = 0;
        local_14 = 0.0;
        if (0 < this_ptr->parts[local_38].tri_counts[0]) {
          do {
            puVar6 = &this_ptr->tri_data_ptr[0][local_30].vertex_indices.vertex_index_0;
            puVar4 = puVar6 + 3;
            do {
              pSVar7 = this_ptr->vertex_data_ptr[0] + *puVar6;
              for (iVar2 = 0; iVar2 < (int)(uint)pSVar7->num_bone_influences; iVar2 = iVar2 + 1) {
                if ((uint)pSVar7->bone_indices[iVar2] == bone_index) {
                  local_14 = local_14 + pSVar7->bone_weights[iVar2];
                }
              }
              pCVar3 = this_ptr_00->skinned_vertices_buffer + *puVar6;
              fVar1 = (float)pCVar3->x * 0.00390625f - local_6c.x;
              fVar3 = (float)pCVar3->y * 0.00390625f - local_6c.y;
              fVar2 = (float)pCVar3->z * 0.00390625f - local_6c.z;
              puVar6 = puVar6 + 1;
              local_1c = local_1c + 1;
              local_18 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 + local_18;
            } while (puVar6 != puVar4);
            local_30 = local_30 + 1;
            local_28 = local_28 + 1;
          } while (local_28 < this_ptr->parts[local_38].tri_counts[0]);
        }
        if (local_14 <= local_40) {
          if ((ABS(local_40) == 0.0) && (local_18 / (float)local_1c < local_48)) {
            local_44 = local_38;
            local_48 = local_18 / (float)local_1c;
          }
        }
        else {
          local_40 = local_14;
          local_44 = local_38;
        }
        local_38 = local_38 + 1;
      } while (local_38 < this_ptr->num_parts);
    }
    g_CurrentDebugLine = 0x628;
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    if (this_ptr_00 != (CDeformableModelInstance *)0x0) {
      (*((this_ptr_00->motion_controller).vtable)->dtor)(&this_ptr_00->motion_controller,2);
    }
    return local_44;
  }
  return 0;
}
