// Name: core_stone.cpp_CTempleStone_dtor_FUN_00584f70
// Address: 00584f70
// Address Range: [[00584f70, 00584fd4]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_00584f70(CTempleStone *this_ptr,uint flags)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_00584f70(CTempleStone *this_ptr,uint flags)

{
  CBox *pCVar1;
  CTempleStone *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CTempleStoneTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dab0((CBox *)&this_ptr->field_0x394,0);
  pCVar2 = (CTempleStone *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)(pCVar1 + -0x394),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
