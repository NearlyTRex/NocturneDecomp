// Name: core_bodypart.cpp_CBodyPart_process_FUN_00419be0
// Address: 00419be0
// Address Range: [[00419be0, 00419db9]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_process_FUN_00419be0(CBodyPart * this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_00419be0(CBodyPart *this_ptr)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float in_stack_0000000c;
  byte auStack_3c [4];
  float fStack_38;
  float local_14;
  CDemonActor *local_10;
  CDemonActor *local_c;
  
  if ((*(int *)(this_ptr->field1_0x158 + 0x1c) < 3) || (*(int *)(this_ptr->field1_0x158 + 0x28) < 1)
     ) {
    (this_ptr->base_actor).was_created = 2;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr);
    pCVar3 = (CVector3f *)(this_ptr->field1_0x158 + 0x10);
    if (pCVar3 != &g_ZeroVector) {
      pCVar3->x = g_ZeroVector.x;
      *(float *)(this_ptr->field1_0x158 + 0x14) = g_ZeroVector.y;
      *(float *)(this_ptr->field1_0x158 + 0x18) = g_ZeroVector.z;
    }
    if ((CVector3f *)(this_ptr->field1_0x158 + 4) != pCVar3) {
      ((CVector3f *)(this_ptr->field1_0x158 + 4))->x = pCVar3->x;
      *(uint *)(this_ptr->field1_0x158 + 8) = *(uint *)(this_ptr->field1_0x158 + 0x14);
      *(uint *)(this_ptr->field1_0x158 + 0xc) = *(uint *)(this_ptr->field1_0x158 + 0x18)
      ;
      return;
    }
  }
  else {
    if ((*(int *)this_ptr->field1_0x158 != 0) && (*(int *)(this_ptr->field1_0x158 + 0xdc8) == 0)) {
      core_bodypart_cpp_FUN_00419e10();
      return;
    }
    if ((*(int *)(this_ptr->field1_0x158 + 0xdd0) != 0) ||
       (*(int *)(this_ptr->field1_0x158 + 0xdc8) != 0)) {
      core_bodypart_cpp_FUN_0041b1b0();
    }
    if (*(int *)(this_ptr->field1_0x158 + 0xdd0) == 0) {
      fVar4 = *(float *)(this_ptr->field1_0x158 + 0xb64) - in_stack_0000000c;
      *(float *)(this_ptr->field1_0x158 + 0xb64) = fVar4;
      if (0.0 <= fVar4) {
        pCVar1 = &(this_ptr->base_actor).location;
        local_14 = (pCVar1->position).x;
        local_10 = (CDemonActor *)(this_ptr->base_actor).location.position.y;
        local_c = (CDemonActor *)(this_ptr->base_actor).location.position.z;
        core_box_cpp_CBox_process_FUN_0041e2f0
                  ((CBox *)(this_ptr->field1_0x158 + 0xb74),in_stack_0000000c);
        (pCVar1->position).x = (((CBox *)(this_ptr->field1_0x158 + 0xb74))->position).x;
        (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field1_0x158 + 0xb78);
        (this_ptr->base_actor).location.position.z = *(float *)(this_ptr->field1_0x158 + 0xb7c);
        pCVar2 = &(this_ptr->base_actor).orient;
        if (pCVar2 != (COrientation *)(this_ptr->field1_0x158 + 0xb80)) {
          pCVar2->pitch = *(float *)(this_ptr->field1_0x158 + 0xb80);
          (this_ptr->base_actor).orient.bank = *(float *)(this_ptr->field1_0x158 + 0xb84);
          (this_ptr->base_actor).orient.heading = *(float *)(this_ptr->field1_0x158 + 0xb88);
        }
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
        if (((float)3 <
             SQRT(*(float *)(this_ptr->field1_0x158 + 0xbbc) *
                  *(float *)(this_ptr->field1_0x158 + 0xbbc) +
                  *(float *)(this_ptr->field1_0x158 + 0xbb4) *
                  *(float *)(this_ptr->field1_0x158 + 0xbb4) +
                  *(float *)(this_ptr->field1_0x158 + 3000) *
                  *(float *)(this_ptr->field1_0x158 + 3000))) &&
           (iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                              (g_CEventListPtr,"disableBodyPartDamage"), iVar5 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffffbc);
          fStack_38 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                    (g_CDemonSetPtr,(SDamageInfo *)&stack0x00000000,
                     &(this_ptr->base_actor).location.position,auStack_3c);
          core_bodypart_cpp_FUN_00419e10();
          return;
        }
      }
      else {
        this_ptr->field1_0x158[0xdc8] = '\0';
        this_ptr->field1_0x158[0xdc9] = '\0';
        this_ptr->field1_0x158[0xdca] = '\0';
        this_ptr->field1_0x158[0xdcb] = '\0';
        this_ptr->field1_0x158[0xb64] = '\0';
        this_ptr->field1_0x158[0xb65] = '\0';
        this_ptr->field1_0x158[0xb66] = '\0';
        this_ptr->field1_0x158[0xb67] = '\0';
      }
    }
    core_bodypart_cpp_FUN_00419e10();
  }
  return;
}
