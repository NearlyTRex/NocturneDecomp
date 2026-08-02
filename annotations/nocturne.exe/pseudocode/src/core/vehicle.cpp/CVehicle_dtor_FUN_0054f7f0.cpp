// Name: core_vehicle.cpp_CVehicle_dtor_FUN_0054f7f0
// Address: 0054f7f0
// Address Range: [[0054f7f0, 0054f864]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_CVehicle_dtor_FUN_0054f7f0(CVehicle *this_ptr,uint flags)

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_CVehicle_dtor_FUN_0054f7f0(CVehicle *this_ptr,uint flags)

{
  CCourse *pCVar1;
  int iVar2;
  CVehicle *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CVehicleTypeInfo_005a3d40);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_0043b5f0(&this_ptr->course,0);
  iVar2 = core_vehicle_cpp_FUN_0054f8a0(pCVar1 + -0x93,0);
  pCVar3 = (CVehicle *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)(iVar2 + -0x934),1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_00564494(pCVar3);
  return pCVar3;
}
