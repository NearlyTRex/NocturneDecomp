// Name: core_trigger.cpp_CTrigger_onLaserHit_FUN_0056ed70
// Address: 0056ed70
// Address Range: [[0056ed70, 0056edbc]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_onLaserHit_FUN_0056ed70(CTrigger *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_onLaserHit_FUN_0056ed70(CTrigger *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_FUN_004096c0(this_ptr,laser_info);
  if ((*(int *)&this_ptr->field_0x174 == 5) &&
     (*(int *)&this_ptr->field_0x2f4 == *(int *)(laser_info + 8))) {
    *(uint *)&this_ptr->field_0x2f0 = 1;
  }
  *(uint *)(laser_info + 0x50) = 0;
  *(uint *)(laser_info + 0x48) = 0x3f800000;
  *(uint *)(laser_info + 0x4c) = *(uint *)(laser_info + 0x44);
  return;
}
