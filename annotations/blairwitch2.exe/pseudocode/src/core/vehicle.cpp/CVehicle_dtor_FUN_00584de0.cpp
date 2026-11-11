// Name: core_vehicle.cpp_CVehicle_dtor_FUN_00584de0
// Address: 00584de0
// Address Range: [[00584de0, 00584e44]]
// Convention: unknown
// Signature: CVehicle * core_vehicle_cpp_CVehicle_dtor_FUN_00584de0(CVehicle *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CVehicle * core_vehicle_cpp_CVehicle_dtor_FUN_00584de0(CVehicle *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CVehicle *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CVehicleTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00438a70(&this_ptr->course,0);
  pCVar2 = (CVehicle *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)(pCVar1 + -0x175),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
