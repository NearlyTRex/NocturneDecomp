// Name: core_manpuz.cpp_FUN_0050b890
// Address: 0050b890
// Address Range: [[0050b890, 0050b914]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * core_manpuz.cpp_FUN_0050b890(CMansionPuzzleCircle * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl
core_manpuz_cpp_FUN_0050b890(CMansionPuzzleCircle *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5)

{
  int iVar1;
  CMansionPuzzleCircle *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMansionPuzzleCircleTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_manpuz_cpp_FUN_0050bad0();
  core_manpuz_cpp_FUN_0050bab0();
  iVar1 = core_manpuz_cpp_FUN_0050ba90();
  ptr = (CMansionPuzzleCircle *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x5f0),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
