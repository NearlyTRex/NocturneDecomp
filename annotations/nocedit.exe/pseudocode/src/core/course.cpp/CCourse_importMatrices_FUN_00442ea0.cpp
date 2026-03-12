// Name: core_course.cpp_CCourse_importMatrices_FUN_00442ea0
// Address: 00442ea0
// Address Range: [[00442ea0, 0044303c]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_importMatrices_FUN_00442ea0(CCourse *this_ptr,_FILE *file_handle,int count)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_importMatrices_FUN_00442ea0(CCourse *this_ptr,_FILE *file_handle,int count)

{
  int iVar2;
  int iVar1;
  CCourseFrame *pCVar3;
  float fVar4;
  uint unaff_ESI;
  uint *puVar5;
  uint unaff_EDI;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint auStackY_1804 [1508];
  CMatrix3x3f local_58;
  byte local_34 [4];
  byte local_30 [4];
  float local_2c;
  CQuaternion4f local_28;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  CQuaternion4f *pCVar1;
  
  bVar8 = 0;
  fVar4 = 0.0;
  core_course_cpp_CCourse_allocMemory_FUN_00442500(this_ptr,count);
  if (this_ptr->len < 1) {
    return;
  }
  do {
    local_c = fVar4;
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
              (g_CEditorToolsPtr,(float)(int)fVar4,(float)this_ptr->len);
    iVar2 = _fscanf(file_handle,"%f,%f,%f\n",&local_58,&local_58.m[1].y,&local_58.m[2].z,
                       unaff_ESI,unaff_EDI);
    if (iVar2 == 3) goto LAB_00442f35;
    do {
      do {
        do {
          g_CurrentFilename = "..\\core\\course.cpp";
          g_CurrentLineNumber = 0x1c2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CCourse::importMatrices - file is corrupt on frame %d!",fVar4);
LAB_00442f35:
          iVar1 = _fscanf(file_handle,"%f,%f,%f\n",&local_58.m[0].y,&local_58.m[1].z,local_34
                             ,unaff_ESI,unaff_EDI);
        } while (iVar1 != 3);
        iVar1 = _fscanf(file_handle,"%f,%f,%f\n",&local_58.m[0].z,local_58.m + 2,local_30,
                           unaff_ESI,unaff_EDI);
      } while (iVar1 != 3);
      iVar1 = _fscanf(file_handle,"%f,%f,%f\n",local_58.m + 1,&local_58.m[2].y,&local_2c);
    } while (iVar1 != 3);
    core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690(&local_58,0);
    local_18 = local_58.m[1].x;
    local_14 = local_58.m[2].y;
    local_10 = local_2c;
    pCVar3 = this_ptr->frames + (int)fVar4;
    if (pCVar3 != (CCourseFrame *)&local_18) {
      (pCVar3->pos).x = local_58.m[1].x;
      (pCVar3->pos).y = local_58.m[2].y;
      (pCVar3->pos).z = local_2c;
    }
    core_xform_cpp_matrixToQuaternion_FUN_005f7420(&local_58,&local_28);
    pCVar1 = &this_ptr->frames[(int)fVar4].orient;
    fVar4 = (float)((int)fVar4 + 1);
    puVar6 = (uint *)((int)pCVar1 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar1->w = local_28.w;
    puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar5 = (uint *)((int)&local_28 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *puVar6 = *(uint *)((int)&local_28 + (uint)bVar8 * -8 + 4);
    *puVar7 = *puVar5;
    puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
  } while ((int)fVar4 < this_ptr->len);
  return;
}
