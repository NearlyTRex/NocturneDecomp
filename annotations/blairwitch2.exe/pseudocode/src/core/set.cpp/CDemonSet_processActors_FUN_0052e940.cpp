// Name: core_set.cpp_CDemonSet_processActors_FUN_0052e940
// Address: 0052e940
// Address Range: [[0052e940, 0052ef76]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_processActors_FUN_0052e940(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_processActors_FUN_0052e940(CDemonSet *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CPathMap *this_ptr_00;
  CCharacter *this_ptr_01;
  float fVar3;
  int iVar4;
  CGlass *this_ptr_02;
  CTrigger *this_ptr_03;
  CFlameCan *this_ptr_04;
  CDemonSet *pCVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_104c [993];
  CPathMap *delta_time;
  float fStack_a4;
  CVector3f aCStack_9c [3];
  EDamageType EStack_78;
  CVector3f CStack_6c;
  float afStack_60 [3];
  CPathMap *local_54;
  float fStack_50;
  float local_4c;
  int iStack_48;
  int local_44;
  CLocation *pCStack_40;
  CCharacter *local_3c;
  CCharacter *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CDemonSet *local_20;
  int local_1c;
  int iStack_18;
  
  bVar7 = 0;
  iVar2 = 0;
  if (0 < this_ptr->actor_count) {
    do {
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->actor_count);
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_4c = (float)wincore_winrun_cpp_getTime_FUN_0058e9e0();
    local_28 = 0;
  }
  _DAT_01fc9608 = 0;
  _DAT_01fc961c = 0;
  delta_time = (CPathMap *)g_CGamePtr->delta_time_float;
  if (0.0 < (float)delta_time) {
    local_54 = delta_time;
    core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_00537fc0(this_ptr);
    iVar2 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        pCVar5->actors[0]->direction_hint = iVar2;
        iVar2 = iVar2 + 1;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar2 < this_ptr->actor_count);
    }
    if (0.0 < (float)delta_time) {
      local_2c = -999999;
      iVar2 = local_2c;
      do {
        local_2c = iVar2;
        local_24 = 999999;
        local_1c = 0;
        if (0 < this_ptr->actor_count) {
          local_20 = this_ptr;
          iVar2 = local_28 << 2;
          do {
            pCVar1 = local_20->actors[0];
            if (pCVar1->process_disabled == 0) {
              iVar4 = pCVar1->health;
              if (iVar4 == local_2c) {
                pfVar6 = (float *)((int)pCVar1 + (uint)bVar7 * -8 + 0x34);
                CStack_6c.z = (pCVar1->orient).vec.x;
                afStack_60[(uint)bVar7 * -2] = *pfVar6;
                afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = pfVar6[(uint)bVar7 * -2 + 1];
                DAT_007bbff4 = pCVar1;
                if (g_CGamePtr->profile_mode == 2) {
                  local_30 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
                }
                (*((DAT_007bbff4->vtable)._ub)->process)(DAT_007bbff4,(float)delta_time);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar4 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
                  *(int *)(iVar2 + 0x200a3bc) = iVar4 - local_28;
                  *(CDemonActor **)(iVar2 + 0x200c2fc) = DAT_007bbff4;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  local_20 = (CDemonSet *)((int)&local_20->camera_count + 1);
                  iVar2 = iVar2 + 4;
                }
                delta_time = (CPathMap *)0x52eb68;
                this_ptr_00 = (*((DAT_007bbff4->vtable)._ub)->getPathMap)(DAT_007bbff4);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_005121a0
                            (this_ptr_00,&(DAT_007bbff4->location).position,0);
                  delta_time = this_ptr_00;
                }
                if ((((float)local_54 == (DAT_007bbff4->orient).vec.y) &&
                    (afStack_60[2] == (DAT_007bbff4->orient).vec.x)) &&
                   (fStack_50 == (DAT_007bbff4->orient).vec.z)) {
                  DAT_007bbff4 = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(DAT_007bbff4);
                  DAT_007bbff4 = (CDemonActor *)0x0;
                }
              }
              else if ((local_2c < iVar4) && (iVar4 < local_24)) {
                local_24 = iVar4;
              }
            }
            local_20 = (CDemonSet *)local_20->cameras;
            local_1c = local_1c + 1;
          } while (local_1c < this_ptr->actor_count);
        }
        iVar2 = local_24;
      } while (local_24 < 999999);
    }
    iVar2 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        this_ptr_01 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (pCVar5->actors[0],g_CCharacterClassInfo.name_hash);
        local_3c = this_ptr_01;
        if (((this_ptr_01 != (CCharacter *)0x0) &&
            (fVar3 = (float)(*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
            fVar3 == 0.0)) &&
           (local_4c = fVar3,
           iVar4 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0
                             (0x01C3DEB4,&(this_ptr_01->base).location.position,0.0,&CStack_6c,
                              &local_4c), iVar4 != 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xffffff58);
          fStack_a4 = local_4c;
          EStack_78 = DAMAGE_TYPE_FALL_APART;
          if (aCStack_9c != &CStack_6c) {
            aCStack_9c[0].x = CStack_6c.x;
            aCStack_9c[0].y = CStack_6c.y;
            aCStack_9c[0].z = CStack_6c.z;
          }
          (*(((local_38->base).vtable._uc)->_uc).processDamage)
                    (local_38,(SDamageInfo *)&stack0xffffff58);
        }
        this_ptr_02 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (pCVar5->actors[0],g_CGlassClassInfo.name_hash);
        if (this_ptr_02 != (CGlass *)0x0) {
          pCStack_40 = &(this_ptr_02->base).location;
          iVar4 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0
                            (0x01C3DEB4,&pCStack_40->position,0.0,(CVector3f *)0x0,(float *)0x0);
          if ((iVar4 != 0) &&
             (iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(this_ptr_02),
             iVar4 != 0)) {
            core_glass_cpp_FUN_004c6d40(this_ptr_02);
          }
        }
        this_ptr_03 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (pCVar5->actors[0],g_CTriggerClassInfo.name_hash);
        if (((this_ptr_03 != (CTrigger *)0x0) &&
            (this_ptr_03->trigger_cause == TRIGGER_CAUSE_DAMAGE)) &&
           (this_ptr_03->damage_actor_wildcard_name[0] == '\0')) {
          afStack_60[2] = 0.0;
          iVar4 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0
                            (0x01C3DEB4,&(this_ptr_03->base).location.position,0.0,
                             (CVector3f *)0x0,afStack_60 + 2);
          if (iVar4 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_03,afStack_60[2]);
          }
        }
        this_ptr_04 = (CFlameCan *)
                      core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (pCVar5->actors[0],g_CFlameCanClassInfo.name_hash);
        if ((this_ptr_04 != (CFlameCan *)0x0) &&
           (iVar4 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0
                              (0x01C3DEB4,&(this_ptr_04->base).location.position,0.0,
                               (CVector3f *)0x0,(float *)0x0), iVar4 != 0)) {
          core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(this_ptr_04);
        }
        iVar2 = iVar2 + 1;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar2 < this_ptr->actor_count);
    }
    if (g_CGamePtr->profile_mode != 0) {
      if (g_CGamePtr->profile_mode == 2) {
        local_34 = 0;
        local_44 = local_28 + -1;
        local_38 = (CCharacter *)0x0;
        if (0 < local_44) {
          iStack_48 = local_28 << 2;
          do {
            if (local_34 + 1 < local_28) {
              iVar2 = (local_34 + 1) * 4;
              do {
                iVar4 = local_38[0x1ec].flames[0x1e].base.footstep_particle_count;
                if (iVar4 < *(int *)(iVar2 + 0x200a3bc)) {
                  local_38[0x1ec].flames[0x1e].base.footstep_particle_count =
                       *(int *)(iVar2 + 0x200a3bc);
                  *(int *)(iVar2 + 0x200a3bc) = iVar4;
                  fVar3 = local_38[0x1ec].flames[0x26].base.orient_matrix.m[2].z;
                  local_38[0x1ec].flames[0x26].base.orient_matrix.m[2].z =
                       *(float *)(iVar2 + 0x200c2fc);
                  *(float *)(iVar2 + 0x200c2fc) = fVar3;
                }
                iVar2 = iVar2 + 4;
              } while (iVar2 < iStack_48);
            }
            local_38 = (CCharacter *)((local_38->base).actor_name + 4);
            local_34 = local_34 + 1;
          } while (local_34 < local_44);
        }
        iVar2 = 0x14;
        if (local_28 < 0x14) {
          iVar2 = local_28;
        }
        iVar4 = 0;
        if (0 < iVar2) {
          do {
            iVar4 = iVar4 + 1;
            engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%d. %s : %3.2f ms\n");
          } while (iVar4 < iVar2);
        }
      }
      fVar3 = local_4c;
      iStack_18 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
      iStack_18 = iStack_18 - (int)fVar3;
      engine_console_cpp_CConsole_printf_FUN_00436710
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n");
    }
    iVar2 = 0;
    if (0 < this_ptr->actor_count) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->actor_count);
    }
  }
  return;
}
