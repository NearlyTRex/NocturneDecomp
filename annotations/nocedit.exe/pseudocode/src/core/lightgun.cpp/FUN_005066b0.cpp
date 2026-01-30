// Name: core_lightgun.cpp_FUN_005066b0
// Address: 005066b0
// Address Range: [[005066b0, 005066ef] [005066f1, 00506a4d]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_FUN_005066b0(void)

#include "nocturne.h"

/* Signature: byte actors_weapon_lightgun.cpp_FUN_005066b0(uint param_1) */

void __cdecl core_lightgun_cpp_FUN_005066b0(void)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  int iVar3;
  CDemonActor *in_stack_00000004;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_1c;
  int iStack_18;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 == 0) {
    input_local_point = (CVector3f *)(*(((in_stack_00000004->vtable)._uc)->_uc).cfunc3)();
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&CStack_4c,input_local_point);
    CStack_64.z = in_stack_00000004[2].orient.heading;
    CStack_64.x = 0.0;
    CStack_64.y = 0.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_28,&CStack_64)
    ;
    fStack_58 = -CStack_28.x;
    fStack_54 = -CStack_28.y;
    fStack_50 = -CStack_28.z;
    fStack_40 = CStack_4c.x + CStack_28.x;
    fStack_3c = CStack_4c.y + CStack_28.y;
    fStack_38 = CStack_4c.z + CStack_28.z;
    if (&fStack_34 != &fStack_58) {
      fStack_34 = fStack_58;
      fStack_30 = fStack_54;
      fStack_2c = fStack_50;
    }
    fVar1 = SQRT(fStack_2c * fStack_2c + fStack_34 * fStack_34 + fStack_30 * fStack_30);
    if (fVar1 <= 0.0) {
      fStack_30 = 0.0;
      fStack_34 = 0.0;
      fStack_2c = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      fStack_34 = fStack_34 * fVar1;
      fStack_30 = fStack_30 * fVar1;
      fStack_2c = fStack_2c * fVar1;
    }
    fpatan((float10)18 / (float10)112.0f,(float10)1);
    core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
    if (in_stack_00000004[4].location.position.z != 0.0) {
      in_stack_00000004[4].location.position.z = 0.0;
      iVar2 = 1;
      do {
        iVar3 = iVar2 + 1;
        iStack_18 = iVar2;
        core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
        iVar2 = iVar3;
      } while (iVar3 < 10);
      CStack_4c.y = fStack_3c - CStack_4c.y;
      CStack_4c.x = fStack_40 - CStack_4c.x;
      CStack_4c.z = fStack_38 - CStack_4c.z;
      fStack_68 = SQRT(CStack_4c.z * CStack_4c.z +
                       CStack_4c.x * CStack_4c.x + CStack_4c.y * CStack_4c.y);
      if (0.0 < fStack_68) {
        fStack_68 = 1.0 / fStack_68;
        fStack_70 = CStack_4c.x * fStack_68;
        fStack_6c = CStack_4c.y * fStack_68;
        fStack_68 = CStack_4c.z * fStack_68;
      }
      else {
        fStack_6c = 0.0;
        fStack_70 = 0.0;
        fStack_68 = 0.0;
      }
      fStack_1c = (float)in_stack_00000004[4].location.area_id * (float)0.015625;
      fStack_7c = fStack_70 * fStack_1c;
      fStack_78 = fStack_6c * fStack_1c;
      fStack_74 = fStack_68 * fStack_1c;
      if (&fStack_70 != &fStack_7c) {
        fStack_70 = fStack_7c;
        fStack_6c = fStack_78;
        fStack_68 = fStack_74;
      }
      iVar2 = 0;
      do {
        core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
      return;
    }
  }
  return;
}
