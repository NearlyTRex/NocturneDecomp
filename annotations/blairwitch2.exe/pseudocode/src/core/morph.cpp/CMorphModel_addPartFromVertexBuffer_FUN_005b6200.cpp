// Name: core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200
// Address: 005b6200
// Address Range: [[005b6200, 005b6343]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data)

{
  void *pvVar1;
  
  if (4 < *(int *)this_ptr) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0xac;
    core_main_c_FUN_004e4500("CMorphModel::addPart - too many parts!");
  }
  *(uint *)(&this_ptr->field_0xc + *(int *)this_ptr * 0x10) =
       *(uint *)&this_ptr->field_0x54;
  *(int *)(&this_ptr->field_0x4 + *(int *)this_ptr * 0x10) = vertex_count;
  *(uint *)(&this_ptr->field_0x10 + *(int *)this_ptr * 0x10) =
       *(uint *)&this_ptr->field_0x5c;
  *(int *)(&this_ptr->field_0x8 + *(int *)this_ptr * 0x10) = tri_count;
  *(int *)&this_ptr->field_0x54 =
       *(int *)&this_ptr->field_0x54 + *(int *)(&this_ptr->field_0x4 + *(int *)this_ptr * 0x10);
  *(int *)&this_ptr->field_0x5c =
       *(int *)&this_ptr->field_0x5c + *(int *)(&this_ptr->field_0x8 + *(int *)this_ptr * 0x10);
  pvVar1 = realloc
                     (*(void **)&this_ptr->field_0x58,*(int *)&this_ptr->field_0x54 << 4);
  *(void **)&this_ptr->field_0x58 = pvVar1;
  pvVar1 = realloc
                     (*(void **)&this_ptr->field_0x60,*(int *)&this_ptr->field_0x5c * 0x3c);
  *(void **)&this_ptr->field_0x60 = pvVar1;
  *(int *)this_ptr = *(int *)this_ptr + 1;
  if ((*(int *)&this_ptr->field_0x58 == 0) || (*(int *)&this_ptr->field_0x60 == 0)) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0xc5;
    core_main_c_FUN_004e4500("CMorphModel::setup - out of memory!");
  }
  if (skinned_vertices != (CVector3i *)0x0) {
    core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400
              (this_ptr,*(int *)this_ptr + -1,skinned_vertices,0,vertex_count);
  }
  if (tri_data != (SInputFace *)0x0) {
    core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_005b6780
              (this_ptr,*(int *)this_ptr + -1,tri_data,texture_sets,index_data,0,tri_count);
    return;
  }
  return;
}
