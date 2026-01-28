// Name: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
// Address: 005a1800
// Address Range: [[005a1800, 005a194d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800 (CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
          (CDeformableModelInstance *this_ptr)

{
  int iVar1;
  CVector3i *pCVar2;
  CDeformableModel *pCVar3;
  SRenderVertex *pSVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  double dVar13;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xfa7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::computeCylindricalUVs - points not generated");
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar1 = pCVar3->vertex_count[this_ptr->cached_skinned_lod_index];
  pCVar2 = this_ptr->skinned_vertices_buffer;
  iVar11 = 1;
  iVar9 = pCVar2->y;
  iVar10 = iVar9;
  iVar6 = iVar9;
  if (1 < iVar1) {
    do {
      iVar5 = pCVar2[1].y;
      iVar10 = iVar5;
      if ((iVar6 <= iVar5) && (iVar10 = iVar6, iVar9 < iVar5)) {
        iVar9 = iVar5;
      }
      iVar11 = iVar11 + 1;
      iVar6 = iVar10;
      pCVar2 = pCVar2 + 1;
    } while (iVar11 < iVar1);
  }
  iVar9 = iVar9 - iVar10;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  if (0 < iVar1) {
    iVar11 = 0;
    iVar6 = 0;
    do {
      piVar7 = (int *)((int)&this_ptr->skinned_vertices_buffer->x + iVar11);
      if ((*piVar7 == 0) && (piVar7[2] == 0)) {
        pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        pcVar8 = in_stack_00000008;
      }
      else {
        fVar12 = crt_math_c_atan2_FUN_006013b1((float10)*piVar7,(float10)piVar7[2]);
        dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar12 * (float10)2670176.8577967598));
        pcVar8 = (this_ptr->motion_controller).current_motion_name + (int)ROUND(dVar13) + -0x30;
        pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      }
      *(char **)((int)&pSVar4->u + iVar6) = pcVar8;
      iVar5 = iVar6 + 0x30;
      *(int *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->v + iVar6) =
           in_stack_0000000c + (int)(((longlong)(piVar7[1] - iVar10) * 0x1000000) / (longlong)iVar9)
      ;
      iVar11 = iVar11 + 0xc;
      iVar6 = iVar5;
    } while (iVar5 < iVar1 * 0x30);
  }
  return;
}
