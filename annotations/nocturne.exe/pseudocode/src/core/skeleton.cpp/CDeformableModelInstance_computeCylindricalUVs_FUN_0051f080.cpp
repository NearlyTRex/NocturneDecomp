// Name: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080
// Address: 0051f080
// Address Range: [[0051f080, 0051f1cd]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080(CDeformableModelInstance *this_ptr,int u_offset,int v_offset)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080(CDeformableModelInstance *this_ptr,int u_offset,int v_offset)

{
  int iVar1;
  CVector3i *pCVar2;
  CDeformableModel *pCVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int *piVar6;
  int *extraout_EDX;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  double dVar12;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
    g_INT_01cc4804 = 0xfa7;
    core_main_c_FUN_004c8440("CDeformableModelInstance::computeCylindricalUVs - points not generated");
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  iVar1 = pCVar3->vertex_count[this_ptr->cached_skinned_lod_index];
  pCVar2 = this_ptr->skinned_vertices_buffer;
  iVar10 = 1;
  iVar8 = pCVar2->y;
  iVar9 = iVar8;
  iVar4 = iVar8;
  if (1 < iVar1) {
    do {
      iVar5 = pCVar2[1].y;
      iVar9 = iVar5;
      if ((iVar4 <= iVar5) && (iVar9 = iVar4, iVar8 < iVar5)) {
        iVar8 = iVar5;
      }
      iVar10 = iVar10 + 1;
      iVar4 = iVar9;
      pCVar2 = pCVar2 + 1;
    } while (iVar10 < iVar1);
  }
  iVar8 = iVar8 - iVar9;
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  if (0 < iVar1) {
    iVar10 = 0;
    iVar4 = 0;
    do {
      piVar6 = (int *)((int)&this_ptr->skinned_vertices_buffer->x + iVar10);
      if ((*piVar6 == 0) && (piVar6[2] == 0)) {
        iVar5 = *DAT_005ae704;
        pcVar7 = (char *)u_offset;
      }
      else {
        fVar11 = atan2((float10)*piVar6,(float10)piVar6[2]);
        dVar12 = round((double)(fVar11 * (float10)2670176.8577967598));
        pcVar7 = (this_ptr->motion_controller).current_motion_name + (int)ROUND(dVar12) + -0x30;
        iVar5 = *DAT_005ae704;
        iVar4 = extraout_ECX;
        piVar6 = extraout_EDX;
      }
      *(char **)(iVar4 + 0x18 + iVar5) = pcVar7;
      iVar5 = iVar4 + 0x30;
      *(int *)(iVar4 + 0x1c + *DAT_005ae704) =
           v_offset +
           (int)((longlong)
                 ((((longlong)(piVar6[1] - iVar9) & 0xffffffffffU) >> 8) << 0x20 |
                 (longlong)(piVar6[1] - iVar9) * 0x1000000 & 0xffffffffU) / (longlong)iVar8);
      iVar10 = iVar10 + 0xc;
      iVar4 = iVar5;
    } while (iVar5 < iVar1 * 0x30);
  }
  return;
}
