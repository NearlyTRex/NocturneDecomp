// Name: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
// Address: 005a1800
// Address Range: [[005a1800, 005a194d]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800(CDeformableModelInstance * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
          (CDeformableModelInstance *this_ptr)

{
  int iVar1;
  CVector3i *pCVar2;
  CDeformableModel *pCVar3;
  SRenderVertex *pSVar4;
  int extraout_EAX;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int *piVar7;
  int *extraout_EDX;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  double dVar12;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xfa7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::computeCylindricalUVs - points not generated");
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar1 = pCVar3->vertex_count[this_ptr->cached_skinned_lod_index];
  pCVar2 = this_ptr->skinned_vertices_buffer;
  iVar10 = 1;
  iVar8 = pCVar2->y;
  iVar9 = iVar8;
  iVar5 = iVar8;
  if (1 < iVar1) {
    do {
      iVar6 = pCVar2[1].y;
      iVar9 = iVar6;
      if ((iVar5 <= iVar6) && (iVar9 = iVar5, iVar8 < iVar6)) {
        iVar8 = iVar6;
      }
      iVar10 = iVar10 + 1;
      iVar5 = iVar9;
      pCVar2 = pCVar2 + 1;
    } while (iVar10 < iVar1);
  }
  iVar8 = iVar8 - iVar9;
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  if (0 < iVar1) {
    iVar10 = 0;
    iVar5 = 0;
    do {
      piVar7 = (int *)((int)&this_ptr->skinned_vertices_buffer->x + iVar10);
      if ((*piVar7 == 0) && (piVar7[2] == 0)) {
        pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
        iVar6 = in_stack_00000008;
      }
      else {
        fVar11 = crt_math_c_atan2_FUN_006013b1((float10)*piVar7,(float10)piVar7[2]);
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar11 * (float10)2670176.8577967598));
        iVar6 = extraout_EAX + (int)ROUND(dVar12);
        pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
        iVar5 = extraout_ECX;
        piVar7 = extraout_EDX;
      }
      *(int *)((int)&pSVar4->u + iVar5) = iVar6;
      iVar6 = iVar5 + 0x30;
      *(int *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->v + iVar5) =
           in_stack_0000000c + (int)(((longlong)(piVar7[1] - iVar9) * 0x1000000) / (longlong)iVar8);
      iVar10 = iVar10 + 0xc;
      iVar5 = iVar6;
    } while (iVar6 < iVar1 * 0x30);
  }
  return;
}
