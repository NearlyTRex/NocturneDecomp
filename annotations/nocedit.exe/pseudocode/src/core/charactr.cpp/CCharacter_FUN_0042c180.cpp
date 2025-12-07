// Name: core_charactr.cpp_CCharacter_FUN_0042c180
// Address: 0042c180
// Address Range: [[0042c180, 0042c3ba]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c180(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c180(CCharacter *this_ptr)

{
  float fVar1;
  CCharacter *this_ptr_00;
  int iVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  double dVar4;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  char *in_stack_00000010;
  CVector3f *in_stack_00000014;
  byte auStack_58 [12];
  byte auStack_4c [8];
  float fStack_44;
  byte auStack_40 [12];
  CVector3f CStack_34;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  this_ptr_00 = this_ptr;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base_actor,(CVector3f *)(auStack_4c + 4),in_stack_00000008);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr_00->base_actor,(CVector3f *)(auStack_58 + 8),in_stack_0000000c);
  iVar2 = (*((this_ptr_00->base_actor).vtable)->testLineIntersection)
                    (&this_ptr_00->base_actor,(CVector3f *)auStack_40,(CVector3f *)auStack_4c,
                     (CVector3f *)auStack_58);
  if (iVar2 != 0) {
    if (in_stack_00000014 != (CVector3f *)0x0) {
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr_00->base_actor,(CVector3f *)auStack_40,&CStack_34);
      if (in_stack_00000014 != pCVar3) {
        in_stack_00000014->x = pCVar3->x;
        in_stack_00000014->y = pCVar3->y;
        in_stack_00000014->z = pCVar3->z;
      }
    }
    dVar4 = (double)*(float *)(in_stack_00000010 + 4);
    if (0.0 < dVar4) {
      auStack_4c._4_4_ = in_stack_0000000c->x - in_stack_00000008->x;
      fStack_44 = in_stack_0000000c->y - in_stack_00000008->y;
      auStack_40._0_4_ = in_stack_0000000c->z - in_stack_00000008->z;
      fVar1 = SQRT((float)auStack_40._0_4_ * (float)auStack_40._0_4_ +
                   (float)auStack_4c._4_4_ * (float)auStack_4c._4_4_ + fStack_44 * fStack_44);
      dVar4 = crt_math_c_round_FUN_005fe6b0(dVar4 * 0.40000000000000002);
      in_stack_00000010 = (char *)(int)ROUND(dVar4);
      dVar4 = (double)(ulonglong)(uint)fVar1;
      if (fVar1 <= 0.0) {
        auStack_4c._0_4_ = 0.0;
        auStack_58._8_4_ = 0.0;
        auStack_4c._4_4_ = 0.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        auStack_58._8_4_ = (float)auStack_58._8_4_ * fVar1;
        auStack_4c._0_4_ = (float)auStack_4c._0_4_ * fVar1;
        auStack_4c._4_4_ = (float)auStack_4c._4_4_ * fVar1;
      }
      fStack_14 = (float)auStack_58._8_4_ * 10f;
      unaff_EBP = (float)auStack_4c._0_4_ * 10f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr_00->base_actor,(CVector3f *)&this_ptr,(CVector3f *)(auStack_40 + 8));
      core_gore_cpp_FUN_004edbb0();
    }
    auStack_58._4_4_ = fStack_18 + fStack_24;
    auStack_58._8_4_ = fStack_14 + fStack_20;
    auStack_4c._0_4_ = unaff_EBP + fStack_1c;
    this_ptr = (CCharacter *)((float)auStack_58._8_4_ * 0.5f);
    in_stack_00000008 = (CVector3f *)((float)auStack_4c._0_4_ * 0.5f);
    if (in_stack_00000010 + 0x1c != &stack0x00000000) {
      *(float *)(in_stack_00000010 + 0x1c) = (float)auStack_58._4_4_ * 0.5f;
      *(CCharacter **)(in_stack_00000010 + 0x20) = this_ptr;
      *(CVector3f **)(in_stack_00000010 + 0x24) = in_stack_00000008;
    }
    (*(this_ptr_00->base_actor).vtable[1].playAmbientSoundWithVolume)
              (&this_ptr_00->base_actor,in_stack_00000010,SUB84 /* extract 2-byte value */(dVar4,0));
    return 1;
  }
  in_stack_00000010[4] = '\0';
  in_stack_00000010[5] = '\0';
  in_stack_00000010[6] = '\0';
  in_stack_00000010[7] = '\0';
  return 0;
}
