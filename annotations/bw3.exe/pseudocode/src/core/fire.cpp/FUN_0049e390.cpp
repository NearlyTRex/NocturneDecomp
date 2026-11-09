// Name: core_fire.cpp_FUN_0049e390
// Address: 0049e390
// Address Range: [[0049e390, 0049e4f3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049e390(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_0049e390(CGunFlame *this_ptr)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar2 = *(float *)&g_CGamePtr->field_0x314;
  fVar3 = *(float *)&this_ptr->field_0xc - fVar2;
  *(float *)&this_ptr->field_0xc = fVar3;
  if (fVar3 <= 0.0) {
    *(uint *)&this_ptr->field_0xc = 0;
  }
  else {
    puVar1 = &this_ptr->field_0x10;
    fVar3 = (float)_DAT_005c0870;
    *(float *)this_ptr = *(float *)this_ptr + *(float *)puVar1 * fVar2;
    *(float *)&this_ptr->field_0x4 =
         *(float *)&this_ptr->field_0x4 + *(float *)&this_ptr->field_0x14 * fVar2;
    *(float *)&this_ptr->field_0x8 =
         *(float *)&this_ptr->field_0x8 + *(float *)&this_ptr->field_0x18 * fVar2;
    fVar4 = *(float *)&this_ptr->field_0x14 * _DAT_005c0868;
    fVar5 = *(float *)&this_ptr->field_0x18 * _DAT_005c0868;
    *(float *)puVar1 = *(float *)puVar1 * _DAT_005c0868;
    *(float *)&this_ptr->field_0x14 = fVar4;
    *(float *)&this_ptr->field_0x18 = fVar5;
    *(float *)&this_ptr->field_0x14 = fVar2 * fVar3 + *(float *)&this_ptr->field_0x14;
    if (*(int *)&this_ptr->field_0x24 == 0) {
      iVar6 = core_actor_cpp_FUN_0040cf40(fVar2 * (float)_DAT_005c0878);
      if (iVar6 != 0) {
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
                  (0x01C73654,(CVector3f *)this_ptr,0.5,(CVector3f *)0x0,0x4000);
      }
      if (*(int *)&this_ptr->field_0x20 != 0) {
        iVar6 = core_actor_cpp_FUN_0040cf40(fVar2);
        if (iVar6 != 0) {
          core_fire_cpp_FUN_0049df60(this_ptr);
        }
      }
    }
    fVar2 = fVar2 * _DAT_005df908 + *(float *)&this_ptr->field_0x1c;
    while( true ) {
      *(float *)&this_ptr->field_0x1c = fVar2;
      if (*(float *)&this_ptr->field_0x1c < (float)*(int *)&this_ptr->field_0x28) break;
      fVar2 = *(float *)&this_ptr->field_0x1c - (float)*(int *)&this_ptr->field_0x28;
    }
  }
  return;
}
