// Name: core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0
// Address: 004090c0
// Address Range: [[004090c0, 00409148]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0(CDemonActor * this_ptr, SCollisionReturnInfo * collision_result, float tolerance_radius)
// Cross-references:
//   core_hero.cpp_CHero_FUN_004f2580 (004f2580) at 004f25ac [UNCONDITIONAL_CALL]
// Function calls:
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0
          (CDemonActor *this_ptr,SCollisionReturnInfo *collision_result,float tolerance_radius)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_retaddr;
  float in_stack_00000024;
  SCollisionInfo SStack_2c;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)&stack0xffffffd0);
  SStack_2c.ray_type = 0;
  iVar3 = (**(code **)((int)collision_result[0xc].position.y + 0x34))
                    ((CDemonActor *)collision_result,&SStack_2c);
  if ((((iVar3 == 2) && (unaff_EBX - in_stack_00000024 <= (collision_result->position).y)) &&
      ((collision_result->position).y <= unaff_retaddr + in_stack_00000024)) &&
     (fVar1 = (collision_result->position).z, fVar2 = (collision_result->position).x,
     fVar2 * fVar2 + fVar1 * fVar1 <=
     ((float)this_ptr + in_stack_00000024) * ((float)this_ptr + in_stack_00000024))) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 004090c0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0
// 004090c1: SUB ESP,0x2c
// 004090c4: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 004090c8: MOV EAX,ESP
// 004090ca: PUSH EAX
// 004090cb: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 004090d0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 004090d4: ADD ESP,0x4
// 004090d7: XOR EDX,EDX
// 004090d9: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 004090dd: PUSH EAX
// 004090de: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 004090e2: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 004090e6: PUSH ECX
// 004090e7: MOV EDX,dword ptr [EDX + 0x154]
// 004090ed: CALL dword ptr [EDX + 0x34]
// 004090f0: ADD ESP,0x8
// 004090f3: CMP EAX,0x2
// 004090f6: JNZ 0x00409138
//   XREF to: 00409138 (CONDITIONAL_JUMP)
// 004090f8: FLD float ptr [ESP + 0x14]
// 004090fc: FSUB float ptr [ESP + 0x3c]
// 00409100: FCOMP float ptr [EBX + 0x4]
// 00409103: FNSTSW AX
// 00409105: SAHF
// 00409106: JA 0x00409138
//   XREF to: 00409138 (CONDITIONAL_JUMP)
// 00409108: FLD float ptr [ESP + 0x18]
// 0040910c: FADD float ptr [ESP + 0x3c]
// 00409110: FCOMP float ptr [EBX + 0x4]
// 00409113: FNSTSW AX
// 00409115: SAHF
// 00409116: JC 0x00409138
//   XREF to: 00409138 (CONDITIONAL_JUMP)
// 00409118: FLD float ptr [EBX + 0x8]
// 0040911b: FMUL ST0
// 0040911d: FLD float ptr [ESP + 0x1c]
// 00409121: FADD float ptr [ESP + 0x3c]
// 00409125: FLD float ptr [EBX]
// 00409127: FMUL ST0
// 00409129: FXCH
// 0040912b: FMUL ST0
// 0040912d: FXCH
// 0040912f: FADDP ST2,ST0
// 00409131: FCOMPP
// 00409133: FNSTSW AX
// 00409135: SAHF
// 00409136: JNC 0x0040913f
//   XREF to: 0040913f (CONDITIONAL_JUMP)
// 00409138: XOR EAX,EAX
//   Label: LAB_00409138
// 0040913a: ADD ESP,0x2c
// 0040913d: POP EBX
// 0040913e: RET
// 0040913f: MOV EAX,0x1
//   Label: LAB_0040913f
// 00409144: ADD ESP,0x2c
// 00409147: POP EBX
// 00409148: RET
