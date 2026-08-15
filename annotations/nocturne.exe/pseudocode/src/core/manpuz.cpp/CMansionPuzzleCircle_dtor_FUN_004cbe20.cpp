// Name: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20
// Address: 004cbe20
// Address Range: [[004cbe20, 004cbea4]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20(CMansionPuzzleCircle *this_ptr,uint flags)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20(CMansionPuzzleCircle *this_ptr,uint flags)

{
  SReflector *pSVar1;
  SGem *pSVar2;
  SPanel *pSVar3;
  CMansionPuzzleCircle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete
                       (this_ptr,&g_CMansionPuzzleCircleTypeInfo_005a0290);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_manpuz_cpp_SReflector_arrdtor2_FUN_004cc060(this_ptr->reflectors,0);
  pSVar2 = core_manpuz_cpp_SGem_arrdtor12_FUN_004cc040((SGem *)(pSVar1 + -0x17),0);
  pSVar3 = core_manpuz_cpp_SPanel_arrdtor12_FUN_004cc020
                     ((SPanel *)&pSVar2[-7].collision_tri_a.vertex3.y,0);
  ptr = (CMansionPuzzleCircle *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pSVar3[-0x10].world_position,1)
  ;
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
