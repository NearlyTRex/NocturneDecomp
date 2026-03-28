// Name: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_0050b890
// Address: 0050b890
// Address Range: [[0050b890, 0050b914]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_0050b890(CMansionPuzzleCircle *this_ptr,uint flags)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_0050b890(CMansionPuzzleCircle *this_ptr,uint flags)

{
  CMansionPuzzleCircle_ptr_4928 pSVar1;
  CMansionPuzzleCircle_ptr_2720 pSVar2;
  CMansionPuzzleCircle_ptr_1520 pSVar3;
  CMansionPuzzleCircle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMansionPuzzleCircleTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pSVar1 = (CMansionPuzzleCircle_ptr_4928)
           core_manpuz_cpp_SReflector_arrdtor_FUN_0050bad0(this_ptr->reflectors,0);
  pSVar2 = (CMansionPuzzleCircle_ptr_2720)
           core_manpuz_cpp_SGem_arrdtor_FUN_0050bab0(ADJ(pSVar1)->gems,0);
  pSVar3 = (CMansionPuzzleCircle_ptr_1520)
           core_manpuz_cpp_SPanel_arrdtor_FUN_0050ba90(ADJ(pSVar2)->panels,0);
  ptr = (CMansionPuzzleCircle *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&ADJ(pSVar3)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
