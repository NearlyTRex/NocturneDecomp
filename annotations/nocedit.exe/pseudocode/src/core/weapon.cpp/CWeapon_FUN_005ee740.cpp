// Name: core_weapon.cpp_CWeapon_FUN_005ee740
// Address: 005ee740
// Address Range: [[005ee740, 005ee823]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_FUN_005ee740(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee740(CWeapon *this_ptr)

{
  CBoundingBox3D CStack_4c;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (((this_ptr->model).model_ptr != (CKeyFramedModel *)0x0) &&
     ((int *)(this_ptr->base).validation_magic == &g_ActorMagicNumber)) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_4c);
    fStack_10 = CStack_4c.min.x + CStack_4c.max.x;
    fStack_c = CStack_4c.min.y + CStack_4c.max.y;
    CStack_1c.x = fStack_10 * 0.5f;
    CStack_1c.y = fStack_c * 0.5f;
    fStack_8 = CStack_4c.min.z + CStack_4c.max.z;
    CStack_1c.z = fStack_8 * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&CStack_34,&CStack_1c)
    ;
    CStack_28.x = CStack_4c.max.x - CStack_4c.min.x;
    CStack_28.y = CStack_4c.max.y - CStack_4c.min.y;
    CStack_28.z = CStack_4c.max.z - CStack_4c.min.z;
    core_box_cpp_CBox_setupCorners_FUN_0041dd20
              (&this_ptr->physics_box,&CStack_34,&(this_ptr->base).orient.vec,&CStack_28,
               this_ptr->weight);
    return;
  }
  return;
}
