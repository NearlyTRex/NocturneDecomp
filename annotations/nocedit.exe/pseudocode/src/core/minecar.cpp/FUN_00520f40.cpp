// Name: core_minecar.cpp_FUN_00520f40
// Address: 00520f40
// Address Range: [[00520f40, 00520fa4]]
// Convention: __cdecl
// Signature: CMineCar * core_minecar.cpp_FUN_00520f40(CMineCar * this_ptr, uint d1, uint d2, uint d3)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_FUN_00520f40(CMineCar *this_ptr,uint d1,uint d2,uint d3)

{
  CCourse *pCVar1;
  CMineCar *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMineCarTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0
                     ((CCourse *)((this_ptr->base_platform).field9_0x2f0 + 0x20));
  ptr = (CMineCar *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)&pCVar1[-0x42].loop,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
