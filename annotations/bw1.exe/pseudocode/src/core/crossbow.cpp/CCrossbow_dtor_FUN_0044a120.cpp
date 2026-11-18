// Name: core_crossbow.cpp_CCrossbow_dtor_FUN_0044a120
// Address: 0044a120
// Address Range: [[0044a120, 0044a184]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0044a120(CCrossbow *this_ptr,uint flags)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0044a120(CCrossbow *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CCrossbow *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCrossbowTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408730(&(this_ptr->bolt_flame).base,1);
  ptr = (CCrossbow *)
        core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0
                  ((CWeapon *)((int)&pCVar1[-5].previous_transform_state.orientation + 4),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
