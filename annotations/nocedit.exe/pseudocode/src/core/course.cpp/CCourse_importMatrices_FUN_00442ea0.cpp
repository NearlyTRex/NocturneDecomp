// Name: core_course.cpp_CCourse_importMatrices_FUN_00442ea0
// Address: 00442ea0
// Address Range: [[00442ea0, 0044303c]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_importMatrices_FUN_00442ea0(CCourse * this_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_importMatrices_FUN_00442ea0(CCourse *this_ptr)

{
  CQuaternion4f *pCVar1;
  CCourse *pCVar2;
  FILE *file;
  int iVar3;
  CCourseFrame *pCVar4;
  float fVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  CCourse *in_stack_00000008;
  float in_stack_0000000c;
  FILE *in_stack_00000010;
  FILE *in_stack_00000014;
  FILE *in_stack_00000018;
  uint auStackY_17e4 [509];
  uint auStackY_ff0 [993];
  CMatrix3x3f *in_stack_ffffffbc;
  byte local_40 [8];
  byte local_38 [8];
  CCourse *local_30 [2];
  byte local_28 [8];
  CCourse *apCStack_20 [4];
  float local_10;
  
  pCVar2 = this_ptr;
  bVar9 = 0;
  core_course_cpp_CCourse_allocMemory_FUN_00442500(this_ptr);
  fVar5 = 0.0;
  if (pCVar2->len < 1) {
    return;
  }
  do {
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
              (g_CEditorToolsPtr,(float)(int)fVar5,(float)pCVar2->len);
    iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (in_stack_00000010,"%f,%f,%f\n",&stack0xffffffb0,local_40,local_30,
                       unaff_EDI);
    if (iVar3 == 3) goto LAB_00442f35;
    do {
      do {
        do {
          g_CurrentFilename = "..\\core\\course.cpp";
          g_CurrentLineNumber = 0x1c2;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("CCourse::importMatrices - file is corrupt on frame %d!","CCourse::importMatrices - file is corrupt on frame %d!",fVar5);
LAB_00442f35:
          iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (in_stack_00000014,"%f,%f,%f\n",&stack0xffffffb8,local_38,local_28);
          file = in_stack_00000018;
        } while (iVar3 != 3);
        iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (in_stack_00000018,"%f,%f,%f\n",local_40,local_30,apCStack_20);
      } while (iVar3 != 3);
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0(file,"%f,%f,%f\n",local_38,local_28);
    } while (iVar3 != 3);
    core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690((CMatrix3x3f *)local_40,0);
    this_ptr = local_30[0];
    in_stack_00000008 = apCStack_20[0];
    in_stack_0000000c = local_10;
    pCVar4 = &pCVar2->frame_list->frame1 + (int)fVar5;
    if (pCVar4 != (CCourseFrame *)&this_ptr) {
      (pCVar4->pos).x = (float)local_30[0];
      (pCVar4->pos).y = (float)apCStack_20[0];
      (pCVar4->pos).z = local_10;
    }
    core_xform_cpp_matrixToQuaternion_FUN_005f7420
              ((CQuaternion4f *)(local_40 + 4),in_stack_ffffffbc);
    pCVar1 = &(&pCVar2->frame_list->frame1)[(int)fVar5].orient;
    fVar6 = (float)((int)fVar5 + 1);
    puVar7 = (uint *)((int)pCVar1 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar1->w = fVar5;
    puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
    *puVar7 = *(uint *)(&stack0xfffffffc + (uint)bVar9 * -8);
    *puVar8 = *(uint *)(&stack0x00000000 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    puVar8[(uint)bVar9 * -2 + 1] =
         *(uint *)
          ((int)(&stack0x00000000 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
          ((uint)bVar9 * -2 + 1) * 4);
    fVar5 = fVar6;
    unaff_EDI = (float)local_40._4_4_;
  } while ((int)fVar6 < pCVar2->len);
  return;
}
