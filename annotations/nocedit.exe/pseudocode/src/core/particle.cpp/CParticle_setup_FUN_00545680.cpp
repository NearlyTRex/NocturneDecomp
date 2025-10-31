// Name: core_particle.cpp_CParticle_setup_FUN_00545680
// Address: 00545680
// Address Range: [[00545680, 005456eb]]
// Convention: __cdecl
// Signature: void core_particle.cpp_CParticle_setup_FUN_00545680(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
// Cross-references:
//   core_fire.cpp_FUN_004c17c0 (004c17c0) at 004c17d6 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c6170 (004c6170) at 004c6188 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004eb9a0 (004eb9a0) at 004eb9c6 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

void __cdecl
core_particle_cpp_CParticle_setup_FUN_00545680
          (CParticle *this_ptr,CVector3f *position,CVector3f *velocity)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_14;
  
  this_ptr->gravity_acceleration = -32.0;
  if (this_ptr != (CParticle *)position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  if (velocity != (CVector3f *)0x0) {
    if (&this_ptr->velocity != velocity) {
      (this_ptr->velocity).x = velocity->x;
      (this_ptr->velocity).y = velocity->y;
      (this_ptr->velocity).z = velocity->z;
    }
    this_ptr->lifetime_remaining = 5.0;
    this_ptr->collision_result = 0;
    return;
  }
  core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
  fVar2 = (float10)fcos((float10)fVar1);
  fVar3 = (float10)fcos((float10)fStack_14);
  fVar4 = (float10)fsin((float10)fVar1);
  fVar5 = (float10)fsin((float10)fStack_14);
  fVar6 = (float10)FLOAT_0063e724;
  (this_ptr->velocity).y = (float)(fVar5 * fVar6);
  (this_ptr->velocity).x = (float)(fVar2 * fVar6 * fVar3);
  (this_ptr->velocity).z = (float)(fVar4 * fVar6 * fVar3);
  this_ptr->lifetime_remaining = 5.0;
  this_ptr->collision_result = 0;
  return;
}


// Assembly code:
// 00545680: PUSH EBX
//   Label: core_particle.cpp_CParticle_setup_FUN_00545680
// 00545681: SUB ESP,0x28
// 00545684: MOV EBX,dword ptr [ESP + 0x30]
// 00545688: MOV EAX,dword ptr [ESP + 0x34]
// 0054568c: MOV EDX,dword ptr [ESP + 0x38]
// 00545690: MOV dword ptr [EBX + 0x1c],0xc2000000
// 00545697: CMP EBX,EAX
// 00545699: JNZ 0x005456b9
//   XREF to: 005456b9 (CONDITIONAL_JUMP)
// 0054569b: TEST EDX,EDX
//   Label: LAB_0054569b
// 0054569d: JZ 0x005456dd
//   XREF to: 005456dd (CONDITIONAL_JUMP)
// 0054569f: LEA EAX,[EBX + 0xc]
// 005456a2: CMP EAX,EDX
// 005456a4: JNZ 0x005456cb
//   XREF to: 005456cb (CONDITIONAL_JUMP)
// 005456a6: MOV dword ptr [EBX + 0x18],0x40a00000
//   Label: LAB_005456a6
// 005456ad: MOV dword ptr [EBX + 0x30],0x0
// 005456b4: ADD ESP,0x28
// 005456b7: POP EBX
// 005456b8: RET
// 005456b9: MOV ECX,dword ptr [EAX]
//   Label: LAB_005456b9
// 005456bb: MOV dword ptr [EBX],ECX
// 005456bd: MOV ECX,dword ptr [EAX + 0x4]
// 005456c0: MOV dword ptr [EBX + 0x4],ECX
// 005456c3: MOV ECX,dword ptr [EAX + 0x8]
// 005456c6: MOV dword ptr [EBX + 0x8],ECX
// 005456c9: JMP 0x0054569b
//   XREF to: 0054569b (UNCONDITIONAL_JUMP)
// 005456cb: MOV ECX,dword ptr [EDX]
//   Label: LAB_005456cb
// 005456cd: MOV dword ptr [EAX],ECX
// 005456cf: MOV ECX,dword ptr [EDX + 0x4]
// 005456d2: MOV dword ptr [EAX + 0x4],ECX
// 005456d5: MOV ECX,dword ptr [EDX + 0x8]
// 005456d8: MOV dword ptr [EAX + 0x8],ECX
// 005456db: JMP 0x005456a6
//   XREF to: 005456a6 (UNCONDITIONAL_JUMP)
// 005456dd: PUSH 0x3fc90fdb
//   Label: LAB_005456dd
// 005456e2: PUSH 0x3f490fdb
// 005456e7: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
