// Name: core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20
// Address: 005e8d20
// Address Range: [[005e8d20, 005e8d94]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_CVehicle_dtor_FUN_005e8d20(CVehicle *this_ptr,uint flags)

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_CVehicle_dtor_FUN_005e8d20(CVehicle *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CTire *pCVar2;
  CVehicle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CVehicleTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0(&this_ptr->course,0);
  pCVar2 = core_vehicle_cpp_CTire_arrdtor_FUN_005e8dd0((CTire *)(pCVar1 + -0x93),0);
  ptr = (CVehicle *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-6].model.model_name + 0x70),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
