// Name: core_vehicle.cpp_CVehicle_dtor_FUN_0054f7f0
// Address: 0054f7f0
// Address Range: [[0054f7f0, 0054f864]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_CVehicle_dtor_FUN_0054f7f0(CVehicle *this_ptr,uint flags)

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_CVehicle_dtor_FUN_0054f7f0(CVehicle *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CTire *pCVar2;
  CVehicle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CVehicleTypeInfo_005a3d40);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_0043b5f0(&this_ptr->course,0);
  pCVar2 = core_vehicle_cpp_CTire_arrdtor_FUN_0054f8a0((CTire *)(pCVar1 + -0x93),0);
  ptr = (CVehicle *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                  ((CDemonActor *)(pCVar2[-6].model.model_name + 0x78),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
