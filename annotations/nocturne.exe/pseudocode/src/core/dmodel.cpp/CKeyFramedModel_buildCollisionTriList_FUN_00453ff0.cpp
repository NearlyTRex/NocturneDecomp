// Name: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0
// Address: 00453ff0
// Address Range: [[00453ff0, 004540f2]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(CKeyFramedModel *this_ptr)

{
  int iVar1;
  SMRGLTextureLod *pSVar2;
  SMRGLTextureBasic *pSVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = *(int *)(this_ptr->texture_list[7].textures[2].texture_name + 4);
  if (iVar7 != 0) {
    shape_memdbg_cpp_free_FUN_00564486((void *)(iVar7 + -4));
  }
  pSVar2 = this_ptr->texture_list + 7;
  pSVar2->textures[2].texture_name[0] = '\0';
  pSVar2->textures[2].texture_name[1] = '\0';
  pSVar2->textures[2].texture_name[2] = '\0';
  pSVar2->textures[2].texture_name[3] = '\0';
  iVar7 = this_ptr->poly_count;
  pSVar3 = this_ptr->texture_list[7].textures;
  pSVar3[2].texture_name[4] = '\0';
  pSVar3[2].texture_name[5] = '\0';
  pSVar3[2].texture_name[6] = '\0';
  pSVar3[2].texture_name[7] = '\0';
  if ((0 < iVar7) && (0 < this_ptr->frame_count)) {
    iVar4 = 0;
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        iVar4 = iVar4 + 1;
        iVar1 = this_ptr->poly_count;
        *(int *)this_ptr->texture_list[7].textures[2].texture_name =
             *(int *)this_ptr->texture_list[7].textures[2].texture_name +
             *(int *)((int)this_ptr->poly_vert_list->vertices + iVar7 + -0x14) + -2;
        iVar7 = iVar7 + 0x48;
      } while (iVar4 < iVar1);
    }
    iVar7 = this_ptr->frame_count * *(int *)this_ptr->texture_list[7].textures[2].texture_name;
    piVar5 = shape_memdbg_cpp_malloc_FUN_00564c18(iVar7 * 0x38 + 4);
    piVar6 = piVar5;
    if (piVar5 != (int *)0x0) {
      piVar6 = piVar5 + 1;
      *piVar5 = iVar7;
    }
    *(int **)(this_ptr->texture_list[7].textures[2].texture_name + 4) = piVar6;
    if (piVar6 == (int *)0x0) {
      PTR_01cc4800 = "..\\core\\dmodel.cpp";
      INT_01cc4804 = 0x470;
      core_main_c_FUN_004c8440("CKeyFramedModel::buildCollisionTriList - out of memory");
    }
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00454100
              (this_ptr,(CVector3f *)&DAT_02dd1184);
  }
  return;
}
