// Name: core_baal.cpp_CBaal_chooseAttack_FUN_00597700
// Address: 00597700
// Address Range: [[00597700, 0059780c]]
// Convention: __cdecl
// Signature: void __cdecl core_baal_cpp_CBaal_chooseAttack_FUN_00597700(CBaal *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_baal_cpp_CBaal_chooseAttack_FUN_00597700(CBaal *this_ptr)

{
  CCharacter *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_102c [1015];
  float local_44;
  float local_40;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar3 = 0;
  if ((this_ptr->base).attack_cooldown <= 0.0) {
    pCVar1 = (this_ptr->base).victim;
    local_2c.x = (pCVar1->base).location.position.x - (this_ptr->base).base.base.location.position.x
    ;
    local_2c.y = (pCVar1->base).location.position.y - (this_ptr->base).base.base.location.position.y
    ;
    local_2c.z = (pCVar1->base).location.position.z - (this_ptr->base).base.base.location.position.z
    ;
    local_20 = local_2c.x;
    local_1c = local_2c.y;
    local_18 = local_2c.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_2c,&local_38);
    local_44 = local_38.x;
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8) =
         *(uint *)((int)&local_38 + (uint)bVar3 * -8 + 4);
    *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&local_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                         (local_40 - (this_ptr->base).base.base.orient.vec.y);
    if (ABS(local_14) < (float)_DAT_005d9689) {
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
      if (iVar2 < 0x19) {
        iVar2 = 3;
      }
      else if ((iVar2 < 0x19) || (0x31 < iVar2)) {
        if ((iVar2 < 0x32) || (0x4a < iVar2)) {
          iVar2 = 3;
        }
        else {
          iVar2 = 5;
        }
      }
      else {
        iVar2 = 4;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,iVar2,1);
      return;
    }
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&(this_ptr->base).base.model.base,0,1);
  return;
}
