// Name: core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0
// Address: 005221d0
// Address Range: [[005221d0, 0052233e]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_005221d0(CMorphModel *this_ptr,int vertex_count,CVector3i *vertex_data,int poly_count,SMRGLHeaderPrimitive *poly_data,int poly_stride,SMRGLTextureModel *texture_list,int *texture_index_list)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_005221d0(CMorphModel *this_ptr,int vertex_count,CVector3i *vertex_data,int poly_count,SMRGLHeaderPrimitive *poly_data,int poly_stride,SMRGLTextureModel *texture_list,int *texture_index_list)

{
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  SMRGLHeaderPrimitive *pSVar5;
  
  if (4 < *(int *)this_ptr) {
    _DAT_01d1d400 = "..\\core\\morph.cpp";
    _DAT_01d1d404 = 0x77;
    core_main_c_FUN_005030e0("CMorphModel::addPart - too many parts!");
  }
  iVar4 = 0;
  pSVar5 = poly_data;
  for (iVar2 = poly_count; 0 < iVar2; iVar2 = iVar2 + -1) {
    pSVar1 = pSVar5 + 4;
    pSVar5 = pSVar5 + poly_stride;
    iVar4 = iVar4 + *(int *)pSVar1 + -2;
  }
  *(uint *)(&this_ptr->field_0xc + *(int *)this_ptr * 0x10) =
       *(uint *)&this_ptr->field_0x54;
  *(int *)(&this_ptr->field_0x4 + *(int *)this_ptr * 0x10) = vertex_count;
  *(uint *)(&this_ptr->field_0x10 + *(int *)this_ptr * 0x10) =
       *(uint *)&this_ptr->field_0x5c;
  *(int *)(&this_ptr->field_0x8 + *(int *)this_ptr * 0x10) = iVar4;
  *(int *)&this_ptr->field_0x54 =
       *(int *)&this_ptr->field_0x54 + *(int *)(&this_ptr->field_0x4 + *(int *)this_ptr * 0x10);
  *(int *)&this_ptr->field_0x5c =
       *(int *)&this_ptr->field_0x5c + *(int *)(&this_ptr->field_0x8 + *(int *)this_ptr * 0x10);
  pvVar3 = realloc
                     (*(void **)&this_ptr->field_0x58,*(int *)&this_ptr->field_0x54 << 4);
  *(void **)&this_ptr->field_0x58 = pvVar3;
  pvVar3 = realloc
                     (*(void **)&this_ptr->field_0x60,*(int *)&this_ptr->field_0x5c * 0x3c);
  *(void **)&this_ptr->field_0x60 = pvVar3;
  *(int *)this_ptr = *(int *)this_ptr + 1;
  if ((*(int *)&this_ptr->field_0x58 == 0) || (*(int *)&this_ptr->field_0x60 == 0)) {
    _DAT_01d1d400 = "..\\core\\morph.cpp";
    _DAT_01d1d404 = 0x90;
    core_main_c_FUN_005030e0("CMorphModel::setup - out of memory!");
  }
  if (vertex_data != (CVector3i *)0x0) {
    core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540
              (this_ptr,*(int *)this_ptr + -1,vertex_data,0,vertex_count);
  }
  if (poly_data == (SMRGLHeaderPrimitive *)0x0) {
    return;
  }
  core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_005226e0
            (this_ptr,*(int *)this_ptr + -1,poly_data,poly_stride,texture_list,texture_index_list,0,
             poly_count);
  return;
}
