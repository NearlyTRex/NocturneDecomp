// Name: core_charactr.cpp_CCharacter_FUN_0042c5f0
// Address: 0042c5f0
// Address Range: [[0042c5f0, 0042c7fc] [0042c83e, 0042c917]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042c5f0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c5f0(CCharacter *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  int *in_stack_00000014;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  
  if (in_stack_00000008 == 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s tried to follow NULL actor!\n",this_ptr);
    *in_stack_00000014 = 3;
    return;
  }
  local_50.x = *(float *)(in_stack_00000008 + 0x20) - (this_ptr->base_actor).location.position.x;
  local_50.y = *(float *)(in_stack_00000008 + 0x24) - (this_ptr->base_actor).location.position.y;
  local_50.z = *(float *)(in_stack_00000008 + 0x28) - (this_ptr->base_actor).location.position.z;
  if (0.0 <= in_stack_0000000c) {
    if ((((float)20 < ABS(local_50.y)) || ((float)40 < ABS(local_50.x)))
       || ((float)40 < ABS(local_50.z))) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while following %s\n",this_ptr);
      *in_stack_00000014 = 3;
      return;
    }
    local_2c = SQRT(local_50.z * local_50.z + local_50.x * local_50.x);
    local_50.y = 0.0;
    if (in_stack_00000010 < 0.0) {
      in_stack_00000010 = 1e+30;
    }
    local_20 = in_stack_0000000c * (float)0.10000000000000001;
    iVar4 = *in_stack_00000014;
    if (iVar4 == 0) {
      in_stack_0000000c = in_stack_0000000c + local_20;
    }
    else if (iVar4 == 1) {
      in_stack_00000010 = in_stack_00000010 + local_20;
      in_stack_0000000c = in_stack_0000000c - local_20;
    }
    else if (iVar4 == 2) {
      in_stack_00000010 = in_stack_00000010 - local_20;
    }
    if (in_stack_0000000c < (float)0.01) {
      in_stack_0000000c = 0.01;
    }
    if (in_stack_0000000c <= local_2c) {
      (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0xbc))();
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
      if (iVar4 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused after pathmap call while following %s\n",this_ptr);
        *in_stack_00000014 = 3;
        return;
      }
      if (local_2c <= in_stack_00000010) {
        *in_stack_00000014 = 1;
        return;
      }
      *in_stack_00000014 = 2;
      return;
    }
    *in_stack_00000014 = 0;
    return;
  }
  local_50.y = 0.0;
  pCVar1 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base_actor,&local_44,&local_50);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_38,pCVar1);
  *(float *)(this_ptr->field2_0x240c + 0xc) = pCVar1->y;
  if (*in_stack_00000014 == 0) {
    if ((float)0.17453292519444399 < ABS(*(float *)(this_ptr->field2_0x240c + 0xc))) goto LAB_0042c771;
    if (*in_stack_00000014 != 1) goto LAB_0042c80e;
  }
  else {
    if (ABS(*(float *)(this_ptr->field2_0x240c + 0xc)) < (float)0.034906585038888903) {
      *in_stack_00000014 = 0;
LAB_0042c80e:
      this_ptr->field2_0x240c[0xc] = '\0';
      this_ptr->field2_0x240c[0xd] = '\0';
      this_ptr->field2_0x240c[0xe] = '\0';
      this_ptr->field2_0x240c[0xf] = '\0';
      goto LAB_0042c7cc;
    }
LAB_0042c771:
    *in_stack_00000014 = 1;
  }
  local_1c = *(float *)(this_ptr->field2_0x240c + 0xc);
  local_18 = *(float *)(this_ptr->field2_0x240c + 0x2c);
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_1c);
  fVar3 = -local_18;
  if ((fVar3 <= fVar2) && (fVar3 = fVar2, local_18 < fVar2)) {
    fVar3 = local_18;
  }
  *(float *)(this_ptr->field2_0x240c + 0xc) = fVar3;
LAB_0042c7cc:
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  return;
}
