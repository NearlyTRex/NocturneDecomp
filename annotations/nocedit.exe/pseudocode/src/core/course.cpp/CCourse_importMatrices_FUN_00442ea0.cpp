// Name: core_course.cpp_CCourse_importMatrices_FUN_00442ea0
// Address: 00442ea0
// Address Range: [[00442ea0, 0044303c]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_importMatrices_FUN_00442ea0(CCourse *this_ptr,_FILE *file_handle,int count)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_importMatrices_FUN_00442ea0(CCourse *this_ptr,_FILE *file_handle,int count)

{
  CQuaternion4f *pCVar1;
  int iVar2;
  CCourseFrame *pCVar3;
  int iVar4;
  float local_e1;
  uint *puVar5;
  float local_e2;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint auStackY_1804 [1508];
  CMatrix3x3f local_58;
  float local_34;
  float local_30;
  float local_2c;
  CQuaternion4f local_28;
  CVector3f local_18;
  float local_c;
  
  bVar8 = 0;
  iVar4 = 0;
  core_course_cpp_CCourse_allocMemory_FUN_00442500(this_ptr,count);
  if (this_ptr->len < 1) {
    return;
  }
  do {
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
              (g_CEditorToolsPtr,(float)iVar4,(float)this_ptr->len);
    iVar2 = _fscanf(file_handle,"%f,%f,%f\n",&local_58,&local_58.m[1].y,&local_58.m[2].z,
                       local_e1,local_e2);
    if (iVar2 == 3) goto LAB_00442f35;
    do {
      do {
        do {
          g_CurrentFilename = "..\\core\\course.cpp";
          g_CurrentLineNumber = 0x1c2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CCourse::importMatrices - file is corrupt on frame %d!",iVar4);
LAB_00442f35:
          iVar2 = _fscanf(file_handle,"%f,%f,%f\n",&local_58.m[0].y,&local_58.m[1].z,
                             &local_34,local_e1,local_e2);
        } while (iVar2 != 3);
        iVar2 = _fscanf(file_handle,"%f,%f,%f\n",&local_58.m[0].z,local_58.m + 2,&local_30,
                           local_e1,local_e2);
      } while (iVar2 != 3);
      iVar2 = _fscanf(file_handle,"%f,%f,%f\n",local_58.m + 1,&local_58.m[2].y,&local_2c);
    } while (iVar2 != 3);
    core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690(&local_58,0);
    local_18.x = local_58.m[1].x;
    local_18.y = local_58.m[2].y;
    local_18.z = local_2c;
    pCVar3 = this_ptr->frames + iVar4;
    if (pCVar3 != (CCourseFrame *)&local_18) {
      (pCVar3->pos).x = local_58.m[1].x;
      (pCVar3->pos).y = local_58.m[2].y;
      (pCVar3->pos).z = local_2c;
    }
    core_xform_cpp_matrixToQuaternion_FUN_005f7420(&local_58,&local_28);
    pCVar1 = &this_ptr->frames[iVar4].orient;
    iVar4 = iVar4 + 1;
    puVar6 = (uint *)((int)pCVar1 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar1->w = local_28.w;
    puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar5 = (uint *)((int)&local_28 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *puVar6 = *(uint *)((int)&local_28 + (uint)bVar8 * -8 + 4);
    *puVar7 = *puVar5;
    puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
  } while (iVar4 < this_ptr->len);
  return;
}
