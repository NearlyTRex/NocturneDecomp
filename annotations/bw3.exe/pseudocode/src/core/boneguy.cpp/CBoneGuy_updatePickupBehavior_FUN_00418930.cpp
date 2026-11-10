// Name: core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00418930
// Address: 00418930
// Address Range: [[00418930, 00418f50]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930(CBoneGuy *this_ptr,float delta_time)

{
  CDemonActor *this_ptr_00;
  CConsole *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  CDeformableModelInstance *this_ptr_01;
  int unaff_ESI;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_10a0 [970];
  CPathMap *path_map;
  CVector3f *direction;
  float fVar8;
  float *pfVar9;
  float max_distance;
  uint uStack_15c;
  CDemonActor *in_stack_fffffeac;
  uint auStack_120 [2];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_100;
  uint auStack_fc [2];
  float fStack_f4;
  byte auStack_f0 [12];
  uint auStack_e4 [11];
  float fStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  float fStack_a0;
  CVector3f CStack_9c;
  uint uStack_90;
  float afStack_8c [5];
  CVector3f aCStack_78 [2];
  uint uStack_60;
  float afStack_5c [5];
  float afStack_48 [5];
  float fStack_34;
  CLocation *local_30;
  int local_2c;
  byte *local_28;
  int local_24;
  float *local_1c;
  int local_18;
  float *local_14;
  
  bVar7 = 0;
  fVar8 = *(float *)&this_ptr->field_0xd05c - delta_time;
  *(float *)&this_ptr->field_0xd05c = fVar8;
  if (0.0 < fVar8) {
    *(int *)&this_ptr->field_0xd054 = *(int *)&this_ptr->field_0xd054 + 1;
    local_14 = (float *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,10.0);
    *(float **)&this_ptr->field_0xd05c = local_14;
  }
  if (*(int *)&(this_ptr->base).base.field_0x2628 == 0) {
    if (*(float *)&this_ptr->field_0xd060 <= 0.0) {
      iVar4 = *(int *)&this_ptr->field_0xd064;
      local_30 = &(this_ptr->base).base.base.location;
      if (iVar4 != 0) {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x94))(iVar4);
        if (iVar4 != 0) {
          engine_console_cpp_FUN_00441ff0
                    (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,this_ptr,
                     *(uint *)&this_ptr->field_0xd064);
          *(uint *)&this_ptr->field_0xd064 = 0;
          *(uint *)&this_ptr->field_0xd060 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,1,1);
          return 0;
        }
        iVar4 = -1;
        if (*(float *)&this_ptr->field_0xd060 < 0.0) {
          iVar3 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xd064 + 0x154) + 0x84))
                            (*(int *)&this_ptr->field_0xd064,this_ptr);
          if (iVar3 == 3) {
            iVar4 = *(int *)&this_ptr->field_0xd064;
            (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
            fStack_34 = 0.5;
            puVar5 = auStack_e4;
            puVar6 = auStack_fc;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            core_bodypart_cpp_FUN_00416c50(auStack_fc,auStack_f0,afStack_5c + 10);
            afStack_48[0] = afStack_b4[3];
            afStack_5c[(uint)bVar7 * -2 + 6] = afStack_b4[(uint)bVar7 * -2 + 4];
            afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
            core_bodypart_cpp_FUN_00416bd0(afStack_5c + 5);
            pfVar9 = afStack_8c + 2;
            uStack_90 = uStack_60;
            afStack_8c[(uint)bVar7 * -2] = afStack_5c[(uint)bVar7 * -2];
            afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            afStack_8c[1] = fStack_f4 + (float)_DAT_005b703a;
            afStack_8c[2] = (float)uStack_90;
            afStack_8c[(uint)bVar7 * -2 + 3] = afStack_8c[(uint)bVar7 * -2];
            afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            core_actor_cpp_FUN_00408b80(iVar4,pfVar9);
            max_distance = 0.0;
            direction = aCStack_78;
            fVar8 = 0.0;
            path_map = (CPathMap *)0x0;
            CStack_9c.x = afStack_5c[2];
            *(float *)((int)&CStack_9c + (uint)bVar7 * -8 + 4) = afStack_5c[(uint)bVar7 * -2 + 3];
            *(float *)((int)&CStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                 afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            aCStack_78[0].x = 1.5;
            aCStack_78[0].y = 0.0;
            aCStack_78[0].z = 0.0;
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                              ((CCharacter *)this_ptr,&CStack_9c,path_map,direction,fVar8,
                               max_distance);
          }
        }
        this_ptr_01 = &(this_ptr->base).base.model;
        if (-1 < iVar4) {
          if (iVar4 < 1) {
            return 1;
          }
          engine_console_cpp_FUN_00441ff0
                    (g_CConsolePtr,"%s beginning to pickup %s\n",this_ptr,
                     *(uint *)&this_ptr->field_0xd064);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_01->base,7,1);
          return 1;
        }
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"%s can't pick up %s, giving up!!!!\n",this_ptr,
                   *(uint *)&this_ptr->field_0xd064);
        *(uint *)&this_ptr->field_0xd064 = 0;
        *(uint *)&this_ptr->field_0xd060 = 0x41a00000;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_01->base,1,1);
        return 0;
      }
      local_28 = (byte *)auStack_120;
      local_2c = 0;
      local_24 = 0;
      local_1c = (float *)0x0;
      local_18 = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= local_24) break;
        this_ptr_00 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_2c);
        pCVar2 = (*((this_ptr_00->vtable)._ub)->getCarrier)(this_ptr_00);
        if (pCVar2 == (CDemonActor *)0x0) {
          iVar4 = (*((this_ptr_00->vtable)._ub)->canPickup)(this_ptr_00,(CDemonActor *)this_ptr);
          if (iVar4 == 3) {
            uStack_15c = 0x418d52;
            (*((this_ptr_00->vtable)._ub)->getBoundingBox)
                      (this_ptr_00,(CBoundingBox3D *)in_stack_fffffeac);
            pfVar9 = local_14;
            puVar5 = &uStack_100;
            puVar6 = auStack_120;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            afStack_5c[1] = *pfVar9 - fStack_118;
            afStack_5c[2] = pfVar9[1] - fStack_114;
            afStack_5c[3] = pfVar9[2] - fStack_110;
            fStack_b8 = *pfVar9 - fStack_118;
            afStack_b4[(uint)bVar7 * -2] = afStack_5c[(uint)bVar7 * -2 + 2];
            afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3];
            if ((((fStack_b8 < 1.0) && (afStack_b4[0] < 1.0)) &&
                ((float)_DAT_005b7042 < afStack_b4[1])) && ((double)afStack_b4[1] < _DAT_005b704a))
            {
              in_stack_fffffeac = this_ptr_00;
              iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(this_ptr_00,"CBodyPart");
              if (iVar4 == 0) {
                fStack_a0 = (this_ptr_00->location).position.x - *local_1c;
                CStack_9c.x = (this_ptr_00->location).position.y - local_1c[1];
                CStack_9c.y = (this_ptr_00->location).position.z - local_1c[2];
                afStack_b4[2] = fStack_a0;
                afStack_b4[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_9c + (uint)bVar7 * -8);
                afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                     *(float *)((int)&CStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4);
                afStack_b4[3] = afStack_b4[3] * afStack_b4[3] * afStack_b4[3] * afStack_b4[3];
                fVar8 = SQRT(fStack_a4 * fStack_a4 +
                             afStack_b4[2] * afStack_b4[2] + afStack_b4[3] * afStack_b4[3]);
                if (((float)_DAT_005b7032 <= fVar8) && ((int)fVar8 < 0x41700001)) {
                  *(CDemonActor **)(&stack0xfffffec0 + unaff_ESI) = this_ptr_00;
                  unaff_ESI = unaff_ESI + 4;
                  if (0x27 < unaff_ESI) break;
                }
              }
            }
          }
        }
        local_24 = local_24 + 1;
        local_2c = local_2c + 4;
      }
      if (0 < local_18) {
        iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_18 + -1);
        *(uint *)&this_ptr->field_0xd064 = *(uint *)(&stack0xfffffeac + iVar4 * 4);
        pCVar1 = g_CConsolePtr;
        *(uint *)&this_ptr->field_0xd060 = 0xc2200000;
        *(int *)&this_ptr->field_0xd054 = *(int *)&this_ptr->field_0xd054 + 1;
        engine_console_cpp_FUN_00441ff0
                  (pCVar1,"%s is going to try to pick up %s\n",this_ptr,
                   *(uint *)&this_ptr->field_0xd064);
        return 1;
      }
    }
    else {
      fVar8 = *(float *)&this_ptr->field_0xd060 - delta_time;
      *(float *)&this_ptr->field_0xd060 = fVar8;
      if (fVar8 < 0.0) {
        *(uint *)&this_ptr->field_0xd060 = 0;
      }
    }
  }
  return 0;
}
