// Name: core_trap.cpp_CTrap_process_FUN_00546900
// Address: 00546900
// Address Range: [[00546900, 00546aa8]]
// Convention: unknown
// Signature: void core_trap_cpp_CTrap_process_FUN_00546900(CDemonActor *param_1)

#include "nocturne.h"

void core_trap_cpp_CTrap_process_FUN_00546900(CDemonActor *param_1)

{
  float fVar1;
  CCharacter *pCVar2;
  CCharacter *this_ptr;
  float unaff_EBX;
  float unaff_EBP;
  int iVar3;
  float unaff_EDI;
  int iVar4;
  int in_stack_ffffff78;
  byte auStack_54 [36];
  CKeyFramedModelInstance *pCStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (param_1[2].location.area_id == 0) {
    fVar1 = param_1[2].orient.vec.x;
    if (fVar1 != 0.0) {
      iVar3 = (**(code **)(*(int *)((int)fVar1 + 0x14c) + 0x104))(fVar1);
      if (iVar3 == 0) {
        return;
      }
      *(uint *)((int)param_1[2].orient.vec.x + 0xbd50) = 0;
      param_1[2].orient.vec.x = 0.0;
    }
    iVar4 = 0;
    (*((param_1->vtable)._ub)->getBoundingBox)(param_1,(CBoundingBox3D *)(auStack_54 + 0x20));
    for (iVar3 = 0; iVar3 < *(int *)(0x01E57284 + 0x150bf4); iVar3 = iVar3 + 1) {
      this_ptr = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)(iVar4 + 0x150bf8 + 0x01E57284),
                            g_CWerewolfActorType_02de078c.name_hash);
      if ((this_ptr != (CCharacter *)0x0) && (*(int *)(this_ptr[1].base.create_event + 0x4c) == 0))
      {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990((SCollisionInfo *)auStack_54);
        (*((this_ptr->base).vtable._ub)->getCollisionType)
                  ((CDemonActor *)this_ptr,(SCollisionInfo *)auStack_54);
        if (((this_ptr->base).location.position.y <= (param_1->location).position.y + fStack_14) &&
           ((param_1->location).position.y + fStack_20 <=
            (this_ptr->base).location.position.y + (float)auStack_54._32_4_)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                    (param_1,(CVector3f *)&stack0xfffffff4,&(this_ptr->base).location.position);
          if ((((fStack_24 <= unaff_EDI + (float)pCStack_30) &&
               (unaff_EDI - (float)pCStack_30 <= fStack_18)) &&
              (fStack_1c <= unaff_EBX + (float)pCStack_30)) &&
             (unaff_EBX - (float)pCStack_30 <= unaff_EBP)) {
            *(CCharacter **)&param_1[2].orient = this_ptr;
            pCVar2 = this_ptr + 1;
            (pCVar2->base).create_event[0x50] = '\0';
            (pCVar2->base).create_event[0x51] = '\0';
            (pCVar2->base).create_event[0x52] = '\0';
            (pCVar2->base).create_event[0x53] = '@';
            *(CDemonActor **)(this_ptr[1].base.create_event + 0x4c) = param_1;
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffff78);
            (*(((this_ptr->base).vtable._uc)->_uc).getGrabbed)
                      (this_ptr,(CDemonActor *)&stack0xffffff78,in_stack_ffffff78);
            return;
          }
        }
      }
      iVar4 = iVar4 + 4;
    }
  }
  return;
}
