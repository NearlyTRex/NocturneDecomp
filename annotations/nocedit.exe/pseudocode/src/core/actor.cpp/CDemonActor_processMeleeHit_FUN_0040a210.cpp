// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
// Address: 0040a210
// Address Range: [[0040a210, 0040abb6]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor * this_ptr, int hit_type)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

{
  CDemonActor *victim;
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  CConsole *this_ptr_00;
  int iVar3;
  CDemonActor *pCVar4;
  CGlass *pCVar5;
  int extraout_EAX;
  float fVar6;
  CDemonActor *pCVar7;
  int extraout_EAX_00;
  CDemonActor *unaff_retaddr;
  char *in_stack_fffffd6c;
  CDemonActor *in_stack_fffffd70;
  double dVar8;
  longlong in_stack_fffffd78;
  uint uVar9;
  uint uVar10;
  float fStack_268;
  byte auStack_240 [52];
  byte auStack_20c [32];
  float fStack_1ec;
  float fStack_1e8;
  CVector3f CStack_1e0;
  byte auStack_1d0 [60];
  byte auStack_194 [28];
  float fStack_178;
  byte auStack_158 [20];
  float fStack_144;
  byte auStack_11c [48];
  byte auStack_ec [24];
  char local_d4 [8];
  CVector3f CStack_cc;
  byte auStack_c0 [8];
  float fStack_b8;
  float fStack_b4;
  byte auStack_b0 [12];
  char acStack_a4 [8];
  byte auStack_9c [12];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_74;
  byte auStack_68 [36];
  int local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  int iStack_28;
  float fStack_24;
  CDemonActor *pCStack_1c;
  CDemonActor *pCStack_18;
  CDemonActor *pCStack_14;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5ea);
  local_44 = 0;
  if (hit_type == 1) {
    local_44 = hit_type;
  }
  local_d4[0] = '\0';
  local_d4[1] = '\0';
  local_d4[2] = '\0';
  local_d4[3] = '\0';
  local_d4[4] = '\0';
  local_d4[5] = '\0';
  local_d4[6] = '\0';
  local_d4[7] = '\0';
  pCVar1 = (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)(auStack_11c + 0xc));
  CStack_cc.z = (pCVar1->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (this_ptr,(CVector3f *)auStack_c0,&CStack_cc);
  if (fStack_3c == 1.4013e-45) {
    local_d4[4] = '\0';
    local_d4[5] = '\0';
    local_d4[6] = '@';
    local_d4[7] = -0x40;
    auStack_ec._20_4_ = 0.0;
    local_d4[0] = '\0';
    local_d4[1] = '\0';
    local_d4[2] = '\0';
    local_d4[3] = '\0';
    pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr,(CVector3f *)auStack_9c,(CVector3f *)(auStack_ec + 0x14));
    fStack_90 = (float)auStack_c0._0_4_ + pCVar2->x;
    fStack_8c = (float)auStack_c0._4_4_ + pCVar2->y;
    fStack_88 = fStack_b8 + pCVar2->z;
    if (&fStack_b4 != &fStack_90) {
      fStack_b4 = fStack_90;
      auStack_b0._0_4_ = fStack_8c;
      auStack_b0._4_4_ = fStack_88;
    }
  }
  auStack_b0._8_4_ = 0.0;
  acStack_a4[0] = '\0';
  acStack_a4[1] = '\0';
  acStack_a4[2] = '\0';
  acStack_a4[3] = '\0';
  acStack_a4[4] = '\0';
  acStack_a4[5] = '\0';
  acStack_a4[6] = -0x80;
  acStack_a4[7] = '?';
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (this_ptr,(CVector3f *)(auStack_68 + 8),(CVector3f *)(auStack_b0 + 8));
  pCStack_1c = (*this_ptr->vtable->getCarrier)(this_ptr);
  if (fStack_38 == 0.0) {
    fStack_24 = fStack_38;
    for (CStack_34.z = fStack_38; (int)CStack_34.z < (int)g_CDemonSetPtr->actor_list_ptr;
        CStack_34.z = (float)((int)CStack_34.z + 1)) {
      pCStack_18 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + (int)fStack_24);
      if ((this_ptr != pCStack_18) && (pCStack_18 != pCStack_1c)) {
        this_ptr_00 = (CConsole *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCStack_18,g_CCharacterClassInfo.name_hash);
        uVar9 = (uint)((ulonglong)in_stack_fffffd78 >> 0x20);
        if (this_ptr_00 == (CConsole *)0x0) {
          pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (pCStack_18,g_CTriggerClassInfo.name_hash);
          if (pCVar4 == (CDemonActor *)0x0) {
            pCVar5 = (CGlass *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (pCStack_18,g_CGlassClassInfo.name_hash);
            if (pCVar5 != (CGlass *)0x0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)pCVar5,&CStack_74,(CVector3f *)(auStack_c0 + 4));
              pCVar1 = (*((pCVar5->base).vtable)->getBoundingBox)
                                 ((CDemonActor *)pCVar5,(CBoundingBox3D *)auStack_ec);
              iVar3 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,(CVector3f *)in_stack_fffffd6c,(float)in_stack_fffffd70);
              if (iVar3 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_240);
                in_stack_fffffd6c = auStack_240;
                (*this_ptr->vtable->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)in_stack_fffffd6c,(CDemonActor *)pCVar5)
                ;
                in_stack_fffffd78 = CONCAT44 /* combine 2-byte values */((SDamageInfo *)(auStack_240 + 0x10),hit_type);
                in_stack_fffffd70 = (CDemonActor *)0x40a6a6;
                (*this_ptr->vtable->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)(auStack_240 + 0x10),
                           (CDemonActor *)pCVar5);
                core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar5);
                if (extraout_EAX != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004eaef0(pCVar5,(CVector3f *)(auStack_9c + 8));
                }
              }
            }
          }
          else {
            iVar3 = core_trigger_cpp_FUN_005e0ac0();
            if (iVar3 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (pCVar4,(CVector3f *)auStack_68,(CVector3f *)(auStack_c0 + 4));
              pCVar1 = (*pCVar4->vtable->getBoundingBox)(pCVar4,(CBoundingBox3D *)auStack_11c);
              iVar3 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,(CVector3f *)in_stack_fffffd6c,(float)in_stack_fffffd70);
              if (iVar3 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffd84);
                (*this_ptr->vtable->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffd84,pCVar4);
                in_stack_fffffd6c = (char *)g_CConsolePtr;
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr,
                           (double)fStack_268,pCVar4);
                core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
                in_stack_fffffd78 = CONCAT44 /* combine 2-byte values */((SDamageInfo *)&stack0xfffffd94,hit_type);
                in_stack_fffffd70 = (CDemonActor *)0x40a607;
                (*this_ptr->vtable->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffd94,pCVar4);
              }
            }
          }
        }
        else {
          if (pCStack_1c != (CDemonActor *)0x0) {
            iVar3 = (**(code **)(*(int *)(this_ptr_00->console_buffer + 0x150) + 0xf4))
                              ((CDemonActor *)this_ptr_00);
            uVar9 = (uint)((ulonglong)in_stack_fffffd78 >> 0x20);
            if (iVar3 != 0) {
              in_stack_fffffd6c = "CHero";
              iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_18,"CHero");
              uVar9 = (uint)((ulonglong)in_stack_fffffd78 >> 0x20);
              if (iVar3 != 0) goto LAB_0040a3e0;
            }
          }
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_194);
          (*this_ptr->vtable->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)auStack_194,(CDemonActor *)this_ptr_00);
          in_stack_fffffd78 = (ulonglong)uVar9 << 0x20;
          in_stack_fffffd70 = (CDemonActor *)(auStack_b0 + 4);
          in_stack_fffffd6c = (char *)this_ptr_00;
          (**(code **)(*(int *)(this_ptr_00->console_buffer + 0x150) + 0x114))
                    ((CDemonActor *)this_ptr_00,(char *)in_stack_fffffd70);
          if (0.0 < (double)fStack_178) {
            crt_math_c_round_FUN_005fe6b0((double)fStack_178 * 0.5 + 1.0);
            core_gore_cpp_FUN_004edbb0();
            in_stack_fffffd78 = CONCAT44 /* combine 2-byte values */(this_ptr_00,(SDamageInfo *)(auStack_194 + 0x14));
            in_stack_fffffd6c = (char *)0x40a528;
            in_stack_fffffd70 = this_ptr;
            (*this_ptr->vtable->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)(auStack_194 + 0x14),
                       (CDemonActor *)this_ptr_00);
          }
        }
      }
LAB_0040a3e0:
      fStack_24 = (float)((int)fStack_24 + 4);
    }
  }
  if (fStack_38 == 1.4013e-45) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
    if (pCStack_1c != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_1c);
    }
    iStack_28 = 0;
    while( true ) {
      fVar6 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                        (g_CDemonSetPtr,(CVector3f *)auStack_b0,(CVector3f *)(auStack_c0 + 4));
      dVar8 = (double)fVar6;
      if ((dVar8 < 0.0) || (1.0 < dVar8)) break;
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar4 != (CDemonActor *)0x0) &&
         (iVar3 = (*pCVar4->vtable[1].hasCollision)(pCVar4,SUB84 /* extract 2-byte value */(dVar8,0)), 0 < iVar3)) {
        pCVar4 = (CDemonActor *)0x0;
      }
      pCVar5 = (CGlass *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      CStack_34.x = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash)
      ;
      pCStack_14 = (CDemonActor *)CStack_34.x;
      CStack_34.y = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      victim = pCStack_14;
      fVar6 = (float)((ulonglong)in_stack_fffffd78 >> 0x20);
      if (pCVar4 == (CDemonActor *)0x0) {
        if (pCVar5 == (CGlass *)0x0) {
          if (pCStack_14 == (CDemonActor *)0x0) {
            if ((CDemonActor *)CStack_34.y == (CDemonActor *)0x0) {
              if (pCVar7 == (CDemonActor *)0x0) {
                return 0;
              }
              core_flamecan_cpp_FUN_004cb340();
            }
            else {
              core_crate_cpp_FUN_00448a70();
            }
          }
          else {
            iVar3 = core_trigger_cpp_FUN_005e0ac0();
            uVar10 = (uint)((ulonglong)in_stack_fffffd78 >> 0x20);
            if (iVar3 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_158);
              (*this_ptr->vtable->fillAttackDamageInfo)
                        (this_ptr,hit_type,(SDamageInfo *)auStack_158,victim);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr,
                         SUB84 /* extract 2-byte value */((double)fStack_144,0),(int)((ulonglong)(double)fStack_144 >> 0x20),
                         victim);
              core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
              in_stack_fffffd78 = CONCAT44 /* combine 2-byte values */(uVar10,unaff_retaddr);
              (*this_ptr->vtable->playAttackHitEffects)
                        (this_ptr,hit_type,(SDamageInfo *)(auStack_158 + 0x10),unaff_retaddr);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                      (g_CDemonSetPtr,(CDemonActor *)CStack_34.x);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_1d0);
          (*this_ptr->vtable->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)auStack_1d0,(CDemonActor *)pCVar5);
          in_stack_fffffd78 = CONCAT44 /* combine 2-byte values */(fVar6,pCVar5);
          (*this_ptr->vtable->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_1d0 + 0x10),(CDemonActor *)pCVar5);
          core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar5);
          if (extraout_EAX_00 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004eaef0
                    (pCVar5,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      else {
        if (pCStack_1c != (CDemonActor *)0x0) {
          iVar3 = (*pCVar4->vtable[1].renderOpaque)(pCVar4);
          fVar6 = (float)((ulonglong)in_stack_fffffd78 >> 0x20);
          if (iVar3 != 0) {
            iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_18,"CHero");
            fVar6 = (float)((ulonglong)in_stack_fffffd78 >> 0x20);
            if (iVar3 != 0) goto LAB_0040a876;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_20c);
        auStack_20c._0_4_ = g_CDemonSetPtr->field11_0x14d148;
        (*this_ptr->vtable->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_20c,pCVar4);
        CStack_74.y = (g_CDemonSetPtr->collision_result_vec2).x -
                      (g_CDemonSetPtr->collision_result_vec1).x;
        CStack_74.z = (g_CDemonSetPtr->collision_result_vec2).y -
                      (g_CDemonSetPtr->collision_result_vec1).y;
        auStack_68._0_4_ =
             (g_CDemonSetPtr->collision_result_vec2).z - (g_CDemonSetPtr->collision_result_vec1).z;
        fStack_38 = (float)10 /
                    SQRT((float)auStack_68._0_4_ * (float)auStack_68._0_4_ +
                         CStack_74.y * CStack_74.y + CStack_74.z * CStack_74.z);
        fStack_40 = CStack_74.y * fStack_38;
        fStack_3c = CStack_74.z * fStack_38;
        fStack_38 = (float)auStack_68._0_4_ * fStack_38;
        if ((float *)(auStack_20c + 0x1c) != &fStack_40) {
          auStack_20c._28_4_ = fStack_40;
          fStack_1ec = fStack_3c;
          fStack_1e8 = fStack_38;
        }
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (pCVar4,&CStack_34,&g_CDemonSetPtr->collision_impact_position);
        if (&CStack_1e0 != pCVar2) {
          CStack_1e0.x = pCVar2->x;
          CStack_1e0.y = pCVar2->y;
          CStack_1e0.z = pCVar2->z;
        }
        (*pCVar4->vtable[1].playAmbientSoundWithVolume)(pCVar4,auStack_20c + 0x10,fVar6);
        in_stack_fffffd78 = CONCAT44 /* combine 2-byte values */(hit_type,this_ptr);
        (*this_ptr->vtable->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)(auStack_20c + 0x1c),pCVar4);
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      }
LAB_0040a876:
      iStack_28 = iStack_28 + 1;
      if (3 < iStack_28) {
        return 0;
      }
    }
  }
  return 0;
}
