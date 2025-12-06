// Name: core_charactr.cpp_CCharacter_FUN_0042c180
// Address: 0042c180
// Address Range: [[0042c180, 0042c3ba]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c180(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c180(CCharacter *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  CVector3f *pCVar2;
  float extraout_EDX;
  float fVar3;
  float extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float10 fVar4;
  float10 fVar5;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  char *in_stack_00000010;
  CVector3f *in_stack_00000014;
  double dVar6;
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
  iVar1 = (*((this_ptr_00->base_actor).vtable)->testLineIntersection)
                    (&this_ptr_00->base_actor,(CVector3f *)auStack_40,(CVector3f *)auStack_4c,
                     (CVector3f *)auStack_58);
  if (iVar1 != 0) {
    fVar3 = extraout_EDX;
    if (in_stack_00000014 != (CVector3f *)0x0) {
      pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr_00->base_actor,(CVector3f *)auStack_40,&CStack_34);
      fVar3 = extraout_EDX_00;
      if (in_stack_00000014 != pCVar2) {
        in_stack_00000014->x = pCVar2->x;
        in_stack_00000014->y = pCVar2->y;
        fVar3 = pCVar2->z;
        in_stack_00000014->z = fVar3;
      }
    }
    dVar6 = (double)*(float *)(in_stack_00000010 + 4);
    if (0.0 < dVar6) {
      auStack_4c._4_4_ = in_stack_0000000c->x - in_stack_00000008->x;
      fVar4 = (float10)in_stack_0000000c->y - (float10)in_stack_00000008->y;
      fStack_44 = (float)fVar4;
      fVar5 = (float10)in_stack_0000000c->z - (float10)in_stack_00000008->z;
      auStack_40._0_4_ = (uint)fVar5;
      fVar4 = SQRT(fVar5 * (float10)(float)auStack_40._0_4_ +
                   (float10)(float)auStack_4c._4_4_ * (float10)(float)auStack_4c._4_4_ +
                   fVar4 * (float10)fStack_44);
      fVar5 = (float10)*(float *)(in_stack_00000010 + 4) * (float10)0.40000000000000002;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(fVar3,in_stack_00000008));
      in_stack_00000010 = (char *)(int)ROUND(fVar5);
      dVar6 = (double)(ulonglong)(uint)(float)fVar4;
      if (fVar4 <= (float10)0) {
        auStack_4c._0_4_ = 0.0;
        auStack_58._8_4_ = 0.0;
        auStack_4c._4_4_ = 0.0;
      }
      else {
        fVar3 = 1.0 / (float)fVar4;
        auStack_58._8_4_ = (float)auStack_58._8_4_ * fVar3;
        auStack_4c._0_4_ = (float)auStack_4c._0_4_ * fVar3;
        auStack_4c._4_4_ = (float)auStack_4c._4_4_ * fVar3;
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
              (&this_ptr_00->base_actor,in_stack_00000010,SUB84 /* extract 2-byte value */(dVar6,0));
    return 1;
  }
  in_stack_00000010[4] = '\0';
  in_stack_00000010[5] = '\0';
  in_stack_00000010[6] = '\0';
  in_stack_00000010[7] = '\0';
  return 0;
}
