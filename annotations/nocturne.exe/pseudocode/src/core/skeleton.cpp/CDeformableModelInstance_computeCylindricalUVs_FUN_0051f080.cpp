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
  SRenderVertex *pSVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int *piVar7;
  int *extraout_EDX;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  double dVar13;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 4007;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDeformableModelInstance::computeCylindricalUVs - points not generated");
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  iVar1 = pCVar3->vertex_count[this_ptr->cached_skinned_lod_index];
  pCVar2 = this_ptr->skinned_vertices_buffer;
  iVar11 = 1;
  iVar9 = pCVar2->y;
  iVar10 = iVar9;
  iVar5 = iVar9;
  if (1 < iVar1) {
    do {
      iVar6 = pCVar2[1].y;
      iVar10 = iVar6;
      if ((iVar5 <= iVar6) && (iVar10 = iVar5, iVar9 < iVar6)) {
        iVar9 = iVar6;
      }
      iVar11 = iVar11 + 1;
      iVar5 = iVar10;
      pCVar2 = pCVar2 + 1;
    } while (iVar11 < iVar1);
  }
  iVar9 = iVar9 - iVar10;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  if (0 < iVar1) {
    iVar11 = 0;
    iVar5 = 0;
    do {
      piVar7 = (int *)((int)&this_ptr->skinned_vertices_buffer->x + iVar11);
      if ((*piVar7 == 0) && (piVar7[2] == 0)) {
        pSVar4 = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
        pcVar8 = (char *)u_offset;
      }
      else {
        fVar12 = atan2((float10)*piVar7,(float10)piVar7[2]);
        dVar13 = round((double)(fVar12 * (float10)2670176.8577967598));
        pcVar8 = (this_ptr->motion_controller).current_motion_name + (int)ROUND(dVar13) + -0x30;
        pSVar4 = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
        iVar5 = extraout_ECX;
        piVar7 = extraout_EDX;
      }
      *(char **)((int)&pSVar4->u + iVar5) = pcVar8;
      iVar6 = iVar5 + 0x30;
      *(int *)((int)&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->v + iVar5) =
           v_offset +
           (int)((longlong)
                 ((((longlong)(piVar7[1] - iVar10) & 0xffffffffffU) >> 8) << 0x20 |
                 (longlong)(piVar7[1] - iVar10) * 0x1000000 & 0xffffffffU) / (longlong)iVar9);
      iVar11 = iVar11 + 0xc;
      iVar5 = iVar6;
    } while (iVar6 < iVar1 * 0x30);
  }
  return;
}
