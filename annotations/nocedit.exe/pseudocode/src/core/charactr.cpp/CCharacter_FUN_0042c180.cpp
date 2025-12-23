// Name: core_charactr.cpp_CCharacter_FUN_0042c180
// Address: 0042c180
// Address Range: [[0042c180, 0042c3ba]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c180(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c180(CCharacter *this_ptr)

{
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  char *in_stack_00000010;
  CVector3f *in_stack_00000014;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  byte auStack_68 [12];
  byte auStack_5c [12];
  byte auStack_50 [8];
  byte local_48 [12];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  CVector3f CStack_24;
  int iStack_18;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base_actor,(CVector3f *)local_48,in_stack_00000008);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base_actor,(CVector3f *)auStack_50,in_stack_0000000c);
  iVar2 = (*((this_ptr->base_actor).vtable)->testLineIntersection)
                    (&this_ptr->base_actor,(CVector3f *)(local_48 + 8),(CVector3f *)(auStack_50 + 4)
                     ,(CVector3f *)(auStack_5c + 4));
  if (iVar2 != 0) {
    if (in_stack_00000014 != (CVector3f *)0x0) {
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base_actor,(CVector3f *)auStack_68,(CVector3f *)auStack_5c);
      if (in_stack_00000014 != pCVar3) {
        in_stack_00000014->x = pCVar3->x;
        in_stack_00000014->y = pCVar3->y;
        in_stack_00000014->z = pCVar3->z;
      }
    }
    dVar7 = (double)*(float *)(in_stack_00000010 + 4);
    if (0.0 < dVar7) {
      fStack_70 = in_stack_0000000c->x - in_stack_00000008->x;
      fVar4 = (float10)in_stack_0000000c->y - (float10)in_stack_00000008->y;
      fVar5 = (float10)fStack_70;
      fVar6 = (float10)in_stack_0000000c->z - (float10)in_stack_00000008->z;
      auStack_68._0_4_ = (uint)fVar6;
      fVar4 = SQRT(fVar6 * (float10)(float)auStack_68._0_4_ +
                   fVar5 * fVar5 + fVar4 * (float10)(float)fVar4);
      dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7 * 0.40000000000000002);
      iStack_18 = (int)ROUND(dVar7);
      dVar7 = (double)(ulonglong)(uint)(float)fVar4;
      if (fVar4 <= (float10)0) {
        fStack_74 = 0.0;
        fStack_78 = 0.0;
        fStack_70 = 0.0;
      }
      else {
        fVar1 = 1.0 / (float)fVar4;
        fStack_78 = fStack_78 * fVar1;
        fStack_74 = fStack_74 * fVar1;
        fStack_70 = fStack_70 * fVar1;
      }
      fStack_3c = fStack_78 * 10f;
      fStack_38 = fStack_74 * 10f;
      fStack_34 = fStack_70 * 10f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base_actor,&CStack_24,(CVector3f *)(auStack_68 + 8));
      core_gore_cpp_FUN_004edbb0();
    }
    fStack_28 = ((float)local_48._8_4_ + (float)auStack_50._4_4_) * 0.5f;
    CStack_24.x = (fStack_3c + (float)local_48._0_4_) * 0.5f;
    CStack_24.y = (fStack_38 + (float)local_48._4_4_) * 0.5f;
    if ((float *)(in_stack_00000010 + 0x1c) != &fStack_28) {
      *(float *)(in_stack_00000010 + 0x1c) = fStack_28;
      *(float *)(in_stack_00000010 + 0x20) = CStack_24.x;
      *(float *)(in_stack_00000010 + 0x24) = CStack_24.y;
    }
    (*(this_ptr->base_actor).vtable[1].playAmbientSoundWithVolume)
              (&this_ptr->base_actor,in_stack_00000010,SUB84 /* extract 2-byte value */(dVar7,0));
    return 1;
  }
  in_stack_00000010[4] = '\0';
  in_stack_00000010[5] = '\0';
  in_stack_00000010[6] = '\0';
  in_stack_00000010[7] = '\0';
  return 0;
}
