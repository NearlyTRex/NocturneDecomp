// Name: core_hero.cpp_CHero_tryPickupActorOfClass_FUN_004d3e20
// Address: 004d3e20
// Address Range: [[004d3e20, 004d408a]]
// Convention: __cdecl
// Signature: bool __cdecl core_hero_cpp_CHero_tryPickupActorOfClass_FUN_004d3e20(CHero *this_ptr,char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl core_hero_cpp_CHero_tryPickupActorOfClass_FUN_004d3e20(CHero *this_ptr,char *class_name)

{
  CHero *this_ptr_00;
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
      return this_ptr->hero_action == 4;
    }
    this_ptr_00 = *(CHero **)((int)g_CDemonSetPtr->actors + local_24);
    if ((((ABS((this_ptr_00->base).base.location.position.x -
               (this_ptr->base).base.location.position.x) <= (float)_DAT_005c4e75) &&
         (ABS((this_ptr_00->base).base.location.position.y -
              (this_ptr->base).base.location.position.y) <= (float)_DAT_005c4e75)) &&
        (ABS((this_ptr_00->base).base.location.position.z -
             (this_ptr->base).base.location.position.z) <= (float)_DAT_005c4e75)) &&
       ((this_ptr_00 != this_ptr &&
        (pCVar1 = (*((this_ptr_00->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr_00),
        pCVar1 == (CDemonActor *)0x0)))) {
      iVar2 = (*((this_ptr_00->base).base.vtable._ub)->canPickup)
                        ((CDemonActor *)this_ptr_00,(CDemonActor *)this_ptr);
      iStack_1c = iVar2;
      if (iVar2 != 0) {
        iVar3 = core_actor_cpp_isOfClass_FUN_0040c790((CDemonActor *)this_ptr_00,class_name);
        if (iVar3 != 0) {
          iVar3 = (*(((this_ptr->base).base.vtable._uh)->_uh).canReachPickup)
                            (this_ptr,(CDemonActor *)this_ptr_00,iVar2,&local_28);
          if (iVar3 != 0) {
            if ((iVar2 == 5) && ((int)local_28 < 0x40400000)) {
              pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 ((CDemonActor *)this_ptr_00,g_CAmmoClassInfo.name_hash);
              pCStack_20 = pCVar1;
              pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 ((CDemonActor *)this_ptr_00,g_CHealthItemClassInfo.name_hash);
              if (pCVar1 == (CDemonActor *)0x0) {
                if (((pCVar4 != (CDemonActor *)0x0) && (pCVar4[2].orient.vec.x != 0.0)) &&
                   ((this_ptr->base).hit_points == 100.0)) {
                  format = "Already have max health!";
                  goto LAB_004d3f97;
                }
code_r0x004d400c:
                core_inv_cpp_CInventory_addItem_FUN_004da880
                          (&this_ptr->inventory,(CDemonActor *)this_ptr_00,1);
              }
              else {
                if ((pCVar1[2].validation_magic == 0xb) && (this_ptr->bullets == 0x32)) {
                  format = "Already have max bullets!";
                }
                else {
                  if ((pCStack_20[2].validation_magic != 10) || (this_ptr->mana != 100))
                  goto code_r0x004d400c;
                  format = "Already have max mana!";
                }
LAB_004d3f97:
                _sprintf(acStack_128,format);
                core_game_cpp_CGame_displayMessage_FUN_004b46b0(g_CGamePtr,acStack_128,2.0);
              }
              this_ptr->hero_action_actor = (CDemonActor *)0x0;
              this_ptr->hero_action_target = (CDemonActor *)0x0;
              this_ptr->hero_action = 5;
              goto LAB_004d3fd9;
            }
            iVar2 = (*(((this_ptr->base).base.vtable._ue)->_ue).randomize)((CEnemy *)this_ptr);
            if ((iVar2 == 0) && (iStack_1c != 5)) {
              this_ptr->hero_action = 4;
              this_ptr->hero_action_actor = (CDemonActor *)this_ptr_00;
              this_ptr->hero_action_target = (CDemonActor *)this_ptr_00;
            }
          }
        }
      }
    }
    local_18 = local_18 + 1;
    local_24 = local_24 + 4;
  } while( true );
}
