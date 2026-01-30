// Name: core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20
// Address: 005e8d20
// Address Range: [[005e8d20, 005e8d94]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_CVehicle_dtor_FUN_005e8d20(CVehicle *this_ptr,uint d1,uint d2,uint d3,uint d4)

#include "nocturne.h"

CVehicle * __cdecl
core_vehicle_cpp_CVehicle_dtor_FUN_005e8d20(CVehicle *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  int extraout_EAX;
  CVehicle *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CVehicleTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_course_cpp_CCourse_dtor_FUN_004424e0((CCourse *)(this_ptr->unk2 + 0x6e4));
  core_vehicle_cpp_FUN_005e8dd0();
  ptr = (CVehicle *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(extraout_EAX + -0x93c),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
