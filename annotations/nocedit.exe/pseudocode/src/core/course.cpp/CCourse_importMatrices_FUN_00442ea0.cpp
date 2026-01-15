// Name: core_course.cpp_CCourse_importMatrices_FUN_00442ea0
// Address: 00442ea0
// Address Range: [[00442ea0, 0044303c]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_importMatrices_FUN_00442ea0(CCourse * this_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_importMatrices_FUN_00442ea0(CCourse *this_ptr)

{
  CQuaternion4f *pCVar1;
  int iVar2;
  CCourseFrame *pCVar3;
  int iVar4;
  CMatrix3x3f *unaff_ESI;
  uint unaff_EDI;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  FILE *in_stack_00000008;
  float afStackY_1804 [1508];
  CMatrix3x3f local_58;
  byte local_34 [4];
  byte local_30 [4];
  float local_2c;
  float local_28;
  float afStack_24 [4];
  float local_14;
  float local_10;
  int local_c;
  
  bVar7 = 0;
  iVar4 = 0;
  core_course_cpp_CCourse_allocMemory_FUN_00442500(this_ptr);
  if (this_ptr->len < 1) {
    return;
  }
  do {
    local_c = iVar4;
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
              (g_CEditorToolsPtr,(float)iVar4,(float)this_ptr->len);
    iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (in_stack_00000008,"%f,%f,%f\n",&local_58,&local_58.m[1].y,
                       &local_58.m[2].z,unaff_ESI,unaff_EDI);
    if (iVar2 == 3) goto LAB_00442f35;
    do {
      do {
        do {
          g_CurrentFilename = "..\\core\\course.cpp";
          g_CurrentLineNumber = 0x1c2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CCourse::importMatrices - file is corrupt on frame %d!",iVar4);
LAB_00442f35:
          iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (in_stack_00000008,"%f,%f,%f\n",&local_58.m[0].y,&local_58.m[1].z,
                             local_34,unaff_ESI,unaff_EDI);
        } while (iVar2 != 3);
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (in_stack_00000008,"%f,%f,%f\n",&local_58.m[0].z,local_58.m + 2,
                           local_30,unaff_ESI,unaff_EDI);
      } while (iVar2 != 3);
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (in_stack_00000008,"%f,%f,%f\n",local_58.m + 1,&local_58.m[2].y,
                         &local_2c);
    } while (iVar2 != 3);
    core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690(&local_58,0);
    afStack_24[3] = local_58.m[1].x;
    local_14 = local_58.m[2].y;
    local_10 = local_2c;
    pCVar3 = &this_ptr->frame_list->frame1 + iVar4;
    if (pCVar3 != (CCourseFrame *)(afStack_24 + 3)) {
      (pCVar3->pos).x = local_58.m[1].x;
      (pCVar3->pos).y = local_58.m[2].y;
      (pCVar3->pos).z = local_2c;
    }
    core_xform_cpp_matrixToQuaternion_FUN_005f7420((CQuaternion4f *)&local_58,unaff_ESI);
    pCVar1 = &(&this_ptr->frame_list->frame1)[iVar4].orient;
    iVar4 = iVar4 + 1;
    pfVar5 = (float *)((int)pCVar1 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar1->w = local_28;
    pfVar6 = pfVar5 + (uint)bVar7 * -2 + 1;
    *pfVar5 = afStack_24[(uint)bVar7 * -2];
    *pfVar6 = afStack_24[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar6[(uint)bVar7 * -2 + 1] =
         (afStack_24 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  } while (iVar4 < this_ptr->len);
  return;
}
