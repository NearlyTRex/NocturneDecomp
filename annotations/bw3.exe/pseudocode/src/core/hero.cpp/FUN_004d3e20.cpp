// Name: core_hero.cpp_FUN_004d3e20
// Address: 004d3e20
// Address Range: [[004d3e20, 004d408a]]
// Convention: unknown
// Signature: bool core_hero_cpp_FUN_004d3e20(CHero *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_hero_cpp_FUN_004d3e20(CHero *param_1,char *param_2)

{
  CHero *this_ptr;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  CDemonActor *pCVar4;
  char *format;
  char acStack_128 [256];
  float local_28;
  int local_24;
  CDemonActor *pCStack_20;
  int iStack_1c;
  int local_18;
  
  local_24 = 0;
  local_28 = 1e+30;
  local_18 = 0;
  do {
    if (g_CDemonSetPtr->actor_count <= local_18) {
LAB_004d3fd9:
      return param_1->hero_action == 4;
    }
    this_ptr = *(CHero **)((int)g_CDemonSetPtr->actors + local_24);
    if ((((ABS((this_ptr->base).base.location.position.x - (param_1->base).base.location.position.x)
           <= (float)_DAT_005c4e75) &&
         (ABS((this_ptr->base).base.location.position.y - (param_1->base).base.location.position.y)
          <= (float)_DAT_005c4e75)) &&
        (ABS((this_ptr->base).base.location.position.z - (param_1->base).base.location.position.z)
         <= (float)_DAT_005c4e75)) &&
       ((this_ptr != param_1 &&
        (pCVar1 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr),
        pCVar1 == (CDemonActor *)0x0)))) {
      iVar2 = (*((this_ptr->base).base.vtable._ub)->canPickup)
                        ((CDemonActor *)this_ptr,(CDemonActor *)param_1);
      iStack_1c = iVar2;
      if (iVar2 != 0) {
        iVar3 = core_actor_cpp_isOfClass_FUN_0040c790((CDemonActor *)this_ptr,param_2);
        if (iVar3 != 0) {
          iVar3 = (*(((param_1->base).base.vtable._uh)->_uh).canReachPickup)
                            (param_1,(CDemonActor *)this_ptr,iVar2,&local_28);
          if (iVar3 != 0) {
            if ((iVar2 == 5) && ((int)local_28 < 0x40400000)) {
              pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 ((CDemonActor *)this_ptr,g_CAmmoClassInfo.name_hash);
              pCStack_20 = pCVar1;
              pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 ((CDemonActor *)this_ptr,g_CHealthItemClassInfo.name_hash);
              if (pCVar1 == (CDemonActor *)0x0) {
                if (((pCVar4 != (CDemonActor *)0x0) && (pCVar4[2].orient.vec.x != 0.0)) &&
                   ((param_1->base).hit_points == 100.0)) {
                  format = "Already have max health!";
                  goto LAB_004d3f97;
                }
code_r0x004d400c:
                core_inv_cpp_FUN_004da880(&param_1->inventory,(CDemonActor *)this_ptr,1);
              }
              else {
                if ((pCVar1[2].validation_magic == 0xb) && (param_1->bullets == 0x32)) {
                  format = "Already have max bullets!";
                }
                else {
                  if ((pCStack_20[2].validation_magic != 10) || (param_1->mana != 100))
                  goto code_r0x004d400c;
                  format = "Already have max mana!";
                }
LAB_004d3f97:
                _sprintf(acStack_128,format);
                core_game_cpp_CGame_displayMessage_FUN_004b46b0(g_CGamePtr,acStack_128,2.0);
              }
              param_1->hero_action_actor = (CDemonActor *)0x0;
              param_1->hero_action_target = (CDemonActor *)0x0;
              param_1->hero_action = 5;
              goto LAB_004d3fd9;
            }
            iVar2 = (*(((param_1->base).base.vtable._ue)->_ue).randomize)((CEnemy *)param_1);
            if ((iVar2 == 0) && (iStack_1c != 5)) {
              param_1->hero_action = 4;
              param_1->hero_action_actor = (CDemonActor *)this_ptr;
              param_1->hero_action_target = (CDemonActor *)this_ptr;
            }
          }
        }
      }
    }
    local_18 = local_18 + 1;
    local_24 = local_24 + 4;
  } while( true );
}
