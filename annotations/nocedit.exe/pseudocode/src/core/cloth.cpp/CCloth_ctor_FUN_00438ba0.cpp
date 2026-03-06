// Name: core_cloth.cpp_CCloth_ctor_FUN_00438ba0
// Address: 00438ba0
// Address Range: [[00438ba0, 00438bf7]]
// Convention: __cdecl
// Signature: CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_00438ba0(CCloth *this_ptr)

#include "nocturne.h"

CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_00438ba0(CCloth *this_ptr)

{
  CCloth *pCVar1;
  CCloth_ptr_22232 pvVar1;
  CCloth_ptr_249488 pvVar2;
  
  pCVar1 = (CCloth *)core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&this_ptr->model);
  pvVar1 = __arrinit(pCVar1->vertices,800,&g_SClothVertexTypeInfo);
  pvVar2 = __arrinit
                     (ADJ(pvVar1)->collide_bones,0x32,&g_SClothBoneTypeInfo);
  ADJ(pvVar2)->vertex_sort_buffer = (int *)0x0;
  ADJ(pvVar2)->collide_bone_count = 0;
  ADJ(pvVar2)->double_sided = 0;
  return ADJ(pvVar2);
}
