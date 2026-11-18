// Name: core_vehicle.cpp_CVehicle_dtor_FUN_005a8a10
// Address: 005a8a10
// Address Range: [[005a8a10, 005a8a74]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_CVehicle_dtor_FUN_005a8a10(CVehicle *this_ptr,uint flags)

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_CVehicle_dtor_FUN_005a8a10(CVehicle *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CVehicle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CVehicleTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00447d30(&this_ptr->course,0);
  ptr = (CVehicle *)core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)(pCVar1 + -0x158),1)
  ;
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
