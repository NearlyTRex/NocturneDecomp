// Name: core_boneguy.cpp_CBoneGuy_FUN_0041cc40
// Address: 0041cc40
// Address Range: [[0041cc40, 0041ccd1] [0041ccf1, 0041d170]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041cc40(CBoneGuy *this_ptr)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041cc40(CBoneGuy *this_ptr)

{
  CDemonActor *pCVar1;
  uint uVar2;
  float fVar3;
  CDemonActor *pCVar4;
  int iVar5;
  CBoundingBox3D *pCVar6;
  int iVar7;
  CDeformableModelInstance *this_ptr_00;
  float in_stack_00000008;
  uint auStack_c0 [8];
  byte auStack_a0 [20];
  float fStack_8c;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  CVector3f aCStack_70 [2];
  CVector3f CStack_58;
  float fStack_4c;
  float fStack_48;
  uint uStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  int local_20;
  float local_18;
  
  fVar3 = *(float *)(this_ptr->unk1 + 4) - in_stack_00000008;
  *(float *)(this_ptr->unk1 + 4) = fVar3;
  if (0.0 < fVar3) {
    *(int *)this_ptr->unk1 = *(int *)this_ptr->unk1 + 1;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
    *(float *)(this_ptr->unk1 + 4) = local_18;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    if (*(float *)(this_ptr->unk1 + 8) <= 0.0) {
      if (*(int *)(this_ptr->unk1 + 0xc) != 0) {
        iVar7 = (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0xc) + 0x154) + 0x8c))();
        if (iVar7 != 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s can't pick up %s, sombody else beat me to it!\n",this_ptr,
                     *(uint *)(this_ptr->unk1 + 0xc));
          this_ptr->unk1[0xc] = '\0';
          this_ptr->unk1[0xd] = '\0';
          this_ptr->unk1[0xe] = '\0';
          this_ptr->unk1[0xf] = '\0';
          this_ptr->unk1[8] = '\0';
          this_ptr->unk1[9] = '\0';
          this_ptr->unk1[10] = '\0';
          this_ptr->unk1[0xb] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
          return 0;
        }
        iVar7 = -1;
        if (*(float *)(this_ptr->unk1 + 8) < 0.0) {
          iVar5 = (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0xc) + 0x154) + 0x7c))();
          if (iVar5 == 3) {
            pCVar1 = *(CDemonActor **)(this_ptr->unk1 + 0xc);
            (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,(CBoundingBox3D *)(auStack_a0 + 4));
            uStack_30 = 0x3f000000;
            core_bodypart_cpp_FUN_0041b540();
            core_bodypart_cpp_FUN_0041b4e0();
            aCStack_70[0].z = fStack_8c + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar1,&CStack_58,aCStack_70);
            uStack_78 = 0;
            uStack_74 = 0;
            uStack_7c = 0x3fc00000;
            iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
          }
        }
        this_ptr_00 = &(this_ptr->base).base.model;
        if (-1 < iVar7) {
          if (iVar7 < 1) {
            return 1;
          }
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s beginning to pickup %s\n",this_ptr,
                     *(uint *)(this_ptr->unk1 + 0xc));
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,7,1);
          return 1;
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s can't pick up %s, giving up!!!!\n",this_ptr,
                   *(uint *)(this_ptr->unk1 + 0xc));
        this_ptr->unk1[0xc] = '\0';
        this_ptr->unk1[0xd] = '\0';
        this_ptr->unk1[0xe] = '\0';
        this_ptr->unk1[0xf] = '\0';
        this_ptr->unk1[8] = '\0';
        this_ptr->unk1[9] = '\0';
        this_ptr->unk1[10] = -0x60;
        this_ptr->unk1[0xb] = 'A';
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,1,1);
        return 0;
      }
      iVar7 = 0;
      local_2c = 0.0;
      local_24 = 0.0;
      local_20 = 0;
      while( true ) {
        if ((int)g_CDemonSetPtr->actor_list_ptr <= (int)local_24) break;
        pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_20);
        pCVar4 = (*((pCVar1->vtable)._ub)->getCarrier)(pCVar1);
        if (pCVar4 == (CDemonActor *)0x0) {
          iVar5 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)this_ptr);
          if (iVar5 == 3) {
            pCVar6 = (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,(CBoundingBox3D *)auStack_a0);
            CStack_58.z = (pCVar6->max).x - (pCVar6->min).x;
            fStack_4c = (pCVar6->max).y - (pCVar6->min).y;
            fStack_48 = (pCVar6->max).z - (pCVar6->min).z;
            if ((((CStack_58.z < 1.0) && (fStack_4c < 1.0)) && ((float)2 < fStack_48))
               && ((double)fStack_48 < 6)) {
              iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar1,"CBodyPart");
              if (iVar5 == 0) {
                local_2c = (pCVar1->location).position.x -
                           (this_ptr->base).base.base.location.position.x;
                fStack_28 = (pCVar1->location).position.y -
                            (this_ptr->base).base.base.location.position.y;
                fStack_28 = fStack_28 * fStack_28;
                local_24 = (pCVar1->location).position.z -
                           (this_ptr->base).base.base.location.position.z;
                fStack_28 = fStack_28 * fStack_28;
                fVar3 = SQRT(local_24 * local_24 + local_2c * local_2c + fStack_28 * fStack_28);
                if (((float)5 <= fVar3) && ((int)fVar3 < 0x41700001)) {
                  *(CDemonActor **)((int)auStack_c0 + iVar7) = pCVar1;
                  local_18 = (float)((int)local_18 + 1);
                  iVar7 = iVar7 + 4;
                  if (0x27 < iVar7) break;
                }
              }
            }
          }
        }
        local_24 = (float)((int)local_24 + 1);
        local_20 = local_20 + 4;
      }
      if (0 < (int)local_2c) {
        iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,(int)local_2c + -1);
        uVar2 = auStack_c0[iVar7 + -5];
        this_ptr->unk1[8] = '\0';
        this_ptr->unk1[9] = '\0';
        this_ptr->unk1[10] = ' ';
        this_ptr->unk1[0xb] = -0x3e;
        iVar7 = *(int *)this_ptr->unk1;
        *(uint *)(this_ptr->unk1 + 0xc) = uVar2;
        *(int *)this_ptr->unk1 = iVar7 + 1;
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s is going to try to pick up %s\n",this_ptr,
                   *(uint *)(this_ptr->unk1 + 0xc));
        return 1;
      }
    }
    else {
      fVar3 = *(float *)(this_ptr->unk1 + 8) - in_stack_00000008;
      *(float *)(this_ptr->unk1 + 8) = fVar3;
      if (fVar3 < 0.0) {
        this_ptr->unk1[8] = '\0';
        this_ptr->unk1[9] = '\0';
        this_ptr->unk1[10] = '\0';
        this_ptr->unk1[0xb] = '\0';
      }
    }
  }
  return 0;
}
