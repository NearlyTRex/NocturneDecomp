// Name: core_vehicle.cpp_CVehicle_dtor_FUN_005a8a10
// Address: 005a8a10
// Address Range: [[005a8a10, 005a8a74]]
// Convention: unknown
// Signature: CVehicle * core_vehicle_cpp_CVehicle_dtor_FUN_005a8a10(CVehicle *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CVehicle * core_vehicle_cpp_CVehicle_dtor_FUN_005a8a10(CVehicle *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CVehicle *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CVehicleTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00447d30(&this_ptr->course,0);
  pCVar2 = (CVehicle *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)(pCVar1 + -0x158),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
