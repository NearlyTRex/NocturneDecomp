// Name: core_weapon.cpp_CWeapon_FUN_005ee740
// Address: 005ee740
// Address Range: [[005ee740, 005ee823]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_FUN_005ee740(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee740(CWeapon *this_ptr)

{
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  CVector3f CStack_14;
  float fStack_8;
  
  if (((this_ptr->model).model_ptr != (CKeyFramedModel *)0x0) &&
     ((int *)(this_ptr->base).validation_magic == &g_ActorMagicNumber)) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)
              (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffb4);
    fStack_8 = fStack_44 + fStack_38;
    CStack_14.x = fStack_8 * 0.5f;
    CStack_14.y = (fStack_40 + fStack_34) * 0.5f;
    CStack_14.z = (fStack_3c + fStack_30) * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&CStack_2c,&CStack_14)
    ;
    CStack_20.x = fStack_38 - fStack_44;
    CStack_20.y = fStack_34 - fStack_40;
    CStack_20.z = fStack_30 - fStack_3c;
    core_box_cpp_CBox_setupCorners_FUN_0041dd20
              ((CBox *)this_ptr->unk3,&CStack_2c,&(this_ptr->base).orient.vec,&CStack_20,
               *(float *)(this_ptr->unk3 + 0x25c));
    return;
  }
  return;
}
