// Name: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_0050b890
// Address: 0050b890
// Address Range: [[0050b890, 0050b914]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_0050b890(CMansionPuzzleCircle *this_ptr,uint flags)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_0050b890(CMansionPuzzleCircle *this_ptr,uint flags)

{
  SReflector *pSVar1;
  SGem *pSVar2;
  SPanel *pSVar3;
  CMansionPuzzleCircle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMansionPuzzleCircleTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_manpuz_cpp_SReflector_arrdtor_FUN_0050bad0((SReflector *)(this_ptr->unk3 + 0xcf8),0)
  ;
  pSVar2 = core_manpuz_cpp_SGem_arrdtor_FUN_0050bab0((SGem *)(pSVar1 + -0x17),0);
  pSVar3 = core_manpuz_cpp_SPanel_arrdtor_FUN_0050ba90((SPanel *)(pSVar2[-7].unk + 0x58),0);
  ptr = (CMansionPuzzleCircle *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(pSVar3[-0x10].unk + 0x50),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
