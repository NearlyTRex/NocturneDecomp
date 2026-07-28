// Name: core_boneguy.cpp_FUN_004196b0
// Address: 004196b0
// Address Range: [[004196b0, 00419be0]]
// Convention: unknown
// Signature: undefined4 core_boneguy_cpp_FUN_004196b0(CCharacter *param_1,float param_2)

#include "nocturne.h"

uint core_boneguy_cpp_FUN_004196b0(CCharacter *param_1,float param_2)

{
  CDemonActor *pCVar1;
  uint uVar2;
  float fVar3;
  CCharacter *pCVar4;
  CDemonActor *pCVar5;
  CVector3f *src;
  int iVar6;
  CBoundingBox3D *pCVar7;
  int iVar8;
  CVector3f *dst;
  float *scalar;
  uint auStack_d4 [10];
  CBoundingBox3D CStack_ac;
  CBoundingBox3D CStack_94;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  int local_2c;
  int local_24;
  int local_20;
  uint local_18;
  
  fVar3 = *(float *)(param_1[1].base.create_event + 0x24) - param_2;
  *(float *)(param_1[1].base.create_event + 0x24) = fVar3;
  if (0.0 < fVar3) {
    *(int *)(param_1[1].base.create_event + 0x20) =
         *(int *)(param_1[1].base.create_event + 0x20) + 1;
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40a00000,0x41200000);
    *(uint *)(param_1[1].base.create_event + 0x24) = local_18;
  }
  if (param_1->carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    if (*(float *)(param_1[1].base.create_event + 0x28) <= 0.0) {
      iVar8 = *(int *)(param_1[1].base.create_event + 0x2c);
      if (iVar8 != 0) {
        iVar8 = (**(code **)(*(int *)(iVar8 + 0x14c) + 0x8c))(iVar8);
        if (iVar8 != 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s can't pick up %s, sombody else beat me to it!\n",param_1,
                     *(uint *)(param_1[1].base.create_event + 0x2c));
          pCVar4 = param_1 + 1;
          (pCVar4->base).create_event[0x2c] = '\0';
          (pCVar4->base).create_event[0x2d] = '\0';
          (pCVar4->base).create_event[0x2e] = '\0';
          (pCVar4->base).create_event[0x2f] = '\0';
          pCVar4 = param_1 + 1;
          (pCVar4->base).create_event[0x28] = '\0';
          (pCVar4->base).create_event[0x29] = '\0';
          (pCVar4->base).create_event[0x2a] = '\0';
          (pCVar4->base).create_event[0x2b] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->model).motion_controller,1,1);
          return 0;
        }
        iVar8 = -1;
        if (*(float *)(param_1[1].base.create_event + 0x28) < 0.0) {
          iVar6 = *(int *)(param_1[1].base.create_event + 0x2c);
          iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x7c))(iVar6,param_1);
          if (iVar6 == 3) {
            pCVar1 = *(CDemonActor **)(param_1[1].base.create_event + 0x2c);
            (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,&CStack_94);
            scalar = &fStack_30;
            dst = &CStack_70;
            fStack_30 = 0.5;
            src = core_bodypart_cpp_addVector_FUN_00417fc0(&CStack_94.min,&CStack_4c,&CStack_94.max)
            ;
            core_bodypart_cpp_scaleVector_FUN_00417f60(src,dst,scalar);
            CStack_70.z = CStack_94.min.z + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(pCVar1,&CStack_58,&CStack_70);
            CStack_7c.y = 0.0;
            CStack_7c.z = 0.0;
            CStack_7c.x = 1.5;
            iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                              (param_1,&CStack_58,(CPathMap *)0x0,&CStack_7c,0.0,0.0);
          }
        }
        if (-1 < iVar8) {
          if (iVar8 < 1) {
            return 1;
          }
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s beginning to pickup %s\n",param_1,
                     *(uint *)(param_1[1].base.create_event + 0x2c));
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->model).motion_controller,7,1);
          return 1;
        }
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s can't pick up %s, giving up!!!!\n",param_1,
                   *(uint *)(param_1[1].base.create_event + 0x2c));
        pCVar4 = param_1 + 1;
        (pCVar4->base).create_event[0x2c] = '\0';
        (pCVar4->base).create_event[0x2d] = '\0';
        (pCVar4->base).create_event[0x2e] = '\0';
        (pCVar4->base).create_event[0x2f] = '\0';
        pCVar4 = param_1 + 1;
        (pCVar4->base).create_event[0x28] = '\0';
        (pCVar4->base).create_event[0x29] = '\0';
        (pCVar4->base).create_event[0x2a] = -0x60;
        (pCVar4->base).create_event[0x2b] = 'A';
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->model).motion_controller,1,1);
        return 0;
      }
      iVar8 = 0;
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < *(int *)(0x01E57284 + 0x14cd6c); local_24 = local_24 + 1) {
        pCVar1 = *(CDemonActor **)(0x01E57284 + local_20 + 0x14cd70);
        pCVar5 = (*((pCVar1->vtable)._ub)->getCarrier)(pCVar1);
        if (pCVar5 == (CDemonActor *)0x0) {
          iVar6 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,&param_1->base);
          if (iVar6 == 3) {
            pCVar7 = (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,&CStack_ac);
            fStack_64 = (pCVar7->max).x - (pCVar7->min).x;
            fStack_60 = (pCVar7->max).y - (pCVar7->min).y;
            fStack_5c = (pCVar7->max).z - (pCVar7->min).z;
            if ((((fStack_64 < 1.0) && (fStack_60 < 1.0)) && ((float)2 < fStack_5c))
               && ((double)fStack_5c < 6)) {
              iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCVar1,"CBodyPart");
              if (iVar6 == 0) {
                fStack_40 = (pCVar1->location).position.x - (param_1->base).location.position.x;
                fStack_3c = (pCVar1->location).position.y - (param_1->base).location.position.y;
                fStack_3c = fStack_3c * fStack_3c;
                fStack_38 = (pCVar1->location).position.z - (param_1->base).location.position.z;
                fStack_3c = fStack_3c * fStack_3c;
                fVar3 = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
                if (((float)5 <= fVar3) && ((int)fVar3 < 0x41700001)) {
                  *(CDemonActor **)((int)auStack_d4 + iVar8) = pCVar1;
                  local_2c = local_2c + 1;
                  iVar8 = iVar8 + 4;
                  if (0x27 < iVar8) break;
                }
              }
            }
          }
        }
        local_20 = local_20 + 4;
      }
      if (0 < local_2c) {
        iVar8 = core_actor_cpp_getRandomInt_FUN_0040de00(0,local_2c + -1);
        uVar2 = auStack_d4[iVar8];
        pCVar4 = param_1 + 1;
        (pCVar4->base).create_event[0x28] = '\0';
        (pCVar4->base).create_event[0x29] = '\0';
        (pCVar4->base).create_event[0x2a] = ' ';
        (pCVar4->base).create_event[0x2b] = -0x3e;
        iVar8 = *(int *)(param_1[1].base.create_event + 0x20);
        *(uint *)(param_1[1].base.create_event + 0x2c) = uVar2;
        *(int *)(param_1[1].base.create_event + 0x20) = iVar8 + 1;
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s is going to try to pick up %s\n",param_1,
                   *(uint *)(param_1[1].base.create_event + 0x2c));
        return 1;
      }
    }
    else {
      param_2 = *(float *)(param_1[1].base.create_event + 0x28) - param_2;
      *(float *)(param_1[1].base.create_event + 0x28) = param_2;
      if (param_2 < 0.0) {
        param_1 = param_1 + 1;
        (param_1->base).create_event[0x28] = '\0';
        (param_1->base).create_event[0x29] = '\0';
        (param_1->base).create_event[0x2a] = '\0';
        (param_1->base).create_event[0x2b] = '\0';
      }
    }
  }
  return 0;
}
