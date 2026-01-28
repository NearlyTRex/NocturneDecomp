// Name: core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0
// Address: 004495a0
// Address Range: [[004495a0, 00449604]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_004495a0(CCrossbow *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CCrossbow * __cdecl
core_crossbow_cpp_CCrossbow_dtor_FUN_004495a0(CCrossbow *this_ptr,uint d1,uint d2,uint d3)

{
  CDemonActor *pCVar1;
  CCrossbow *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCrossbowTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(this_ptr->unk + 4),1);
  ptr = (CCrossbow *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80
                  ((CWeapon *)&pCVar1[-5].previous_transform_state.orientation.z,1,unaff_EBX,
                   unaff_retaddr);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
