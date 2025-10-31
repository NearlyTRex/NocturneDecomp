// Name: core_baron.cpp_FUN_00413470
// Address: 00413470
// Address Range: [[00413470, 0041359b]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_00413470()
// Cross-references:
//   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90 (00413e90) at 00413ef9 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CCharacterClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 actors_hero_baron.cpp_FUN_00413470(undefined4 param_1, undefined4 param_2)
    */

void core_baron_cpp_FUN_00413470(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *this_ptr;
  CVector3f *pCVar5;
  int iVar6;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  SCollisionInfo *in_stack_ffffffd0;
  
  if ((((in_stack_00000008 != (CDemonActor *)0x0) &&
       (in_stack_00000008 != *(CDemonActor **)(in_stack_00000004 + 0x1fcac))) &&
      (*(CDemonActor **)(in_stack_00000004 + 0x1fcac) == (CDemonActor *)0x0)) &&
     ((this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                            (in_stack_00000008,g_CCharacterClassInfo.name_hash),
      this_ptr == (CDemonActor *)0x0 ||
      (iVar6 = (*(this_ptr->metadata).vtable[1].hasCollision)(this_ptr,in_stack_ffffffd0), iVar6 < 1
      )))) {
    *(CDemonActor **)(in_stack_00000004 + 0x1fcac) = in_stack_00000008;
    pCVar5 = core_actor_cpp_CDemonActor_FUN_00408e80(*(CDemonActor **)(in_stack_00000004 + 0x1fcac))
    ;
    iVar6 = *(int *)(in_stack_00000004 + 0x1fcac);
    fVar1 = *(float *)(iVar6 + 0x24);
    fVar2 = pCVar5->y;
    fVar3 = *(float *)(iVar6 + 0x28);
    fVar4 = pCVar5->z;
    *(float *)(in_stack_00000004 + 0x20) = *(float *)(iVar6 + 0x20) + pCVar5->x;
    *(float *)(in_stack_00000004 + 0x24) = fVar1 + fVar2;
    *(float *)(in_stack_00000004 + 0x28) = fVar3 + fVar4;
    iVar6 = *(int *)(in_stack_00000004 + 0x1fcac);
    if ((undefined4 *)(in_stack_00000004 + 0x30) != (undefined4 *)(iVar6 + 0x30)) {
      *(undefined4 *)(in_stack_00000004 + 0x30) = *(undefined4 *)(iVar6 + 0x30);
      *(undefined4 *)(in_stack_00000004 + 0x34) = *(undefined4 *)(iVar6 + 0x34);
      *(undefined4 *)(in_stack_00000004 + 0x38) = *(undefined4 *)(iVar6 + 0x38);
    }
    crt_memory_c_memset_FUN_005fde40((void *)(in_stack_00000004 + 0xbe2c),0,0x2c);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    *(undefined4 *)(in_stack_00000004 + 0x1fccc) = 1;
    *(undefined4 *)(in_stack_00000004 + 0x1fcd0) = 0;
    return;
  }
  return;
}


// Assembly code:
// 00413470: PUSH EBX
//   Label: core_baron.cpp_FUN_00413470
// 00413471: PUSH ESI
// 00413472: PUSH EDI
// 00413473: PUSH EBP
// 00413474: SUB ESP,0x24
// 00413477: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0041347b: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0041347f: TEST ESI,ESI
// 00413481: JZ 0x00413491
//   XREF to: 00413491 (CONDITIONAL_JUMP)
// 00413483: MOV EDX,dword ptr [EBX + 0x1fcac]
// 00413489: CMP ESI,EDX
// 0041348b: JZ 0x00413491
//   XREF to: 00413491 (CONDITIONAL_JUMP)
// 0041348d: TEST EDX,EDX
// 0041348f: JZ 0x00413499
//   XREF to: 00413499 (CONDITIONAL_JUMP)
// 00413491: ADD ESP,0x24
//   Label: LAB_00413491
// 00413494: POP EBP
// 00413495: POP EDI
// 00413496: POP ESI
// 00413497: POP EBX
// 00413498: RET
// 00413499: MOV EDI,dword ptr [0x00823c4c]
//   Label: LAB_00413499
//   XREF to: 00823c4c (READ)
// 0041349f: PUSH EDI
// 004134a0: PUSH ESI
// 004134a1: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004134a6: ADD ESP,0x8
// 004134a9: TEST EAX,EAX
// 004134ab: JNZ 0x0041357f
//   XREF to: 0041357f (CONDITIONAL_JUMP)
// 004134b1: MOV EDX,0xc0000000
//   Label: LAB_004134b1
// 004134b6: XOR EBP,EBP
// 004134b8: MOV dword ptr [EBX + 0x1fcac],ESI
// 004134be: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x1c] (DATA)
// 004134c2: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 004134c6: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 004134ca: PUSH EAX
// 004134cb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 004134cf: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004134d3: PUSH EAX
// 004134d4: MOV ECX,dword ptr [EBX + 0x1fcac]
// 004134da: PUSH ECX
// 004134db: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004134e0: MOV EDX,dword ptr [EBX + 0x1fcac]
// 004134e6: FLD float ptr [EDX + 0x20]
// 004134e9: FADD float ptr [EAX]
// 004134eb: ADD ESP,0xc
// 004134ee: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (WRITE)
// 004134f2: FLD float ptr [EDX + 0x24]
// 004134f5: FADD float ptr [EAX + 0x4]
// 004134f8: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (WRITE)
// 004134fc: FLD float ptr [EDX + 0x28]
// 004134ff: LEA EDX,[EBX + 0x20]
// 00413502: FADD float ptr [EAX + 0x8]
// 00413505: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 00413509: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (WRITE)
// 0041350d: MOV dword ptr [EDX],EAX
// 0041350f: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 00413513: MOV dword ptr [EDX + 0x4],EAX
// 00413516: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 0041351a: MOV dword ptr [EDX + 0x8],EAX
// 0041351d: MOV EAX,dword ptr [EBX + 0x1fcac]
// 00413523: LEA EDX,[EBX + 0x30]
// 00413526: ADD EAX,0x30
// 00413529: CMP EDX,EAX
// 0041352b: JZ 0x0041353d
//   XREF to: 0041353d (CONDITIONAL_JUMP)
// 0041352d: MOV ECX,dword ptr [EAX]
// 0041352f: MOV dword ptr [EDX],ECX
// 00413531: MOV ECX,dword ptr [EAX + 0x4]
// 00413534: MOV dword ptr [EDX + 0x4],ECX
// 00413537: MOV ECX,dword ptr [EAX + 0x8]
// 0041353a: MOV dword ptr [EDX + 0x8],ECX
// 0041353d: PUSH 0x2c
//   Label: LAB_0041353d
// 0041353f: PUSH 0x0
// 00413541: LEA EAX,[EBX + 0xbe2c]
// 00413547: PUSH EAX
// 00413548: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0041354d: ADD ESP,0xc
// 00413550: PUSH 0x1
// 00413552: PUSH 0x6
// 00413554: LEA EAX,[EBX + 0x158]
// 0041355a: PUSH EAX
// 0041355b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00413560: MOV dword ptr [EBX + 0x1fccc],0x1
// 0041356a: ADD ESP,0xc
// 0041356d: MOV dword ptr [EBX + 0x1fcd0],0x0
// 00413577: ADD ESP,0x24
// 0041357a: POP EBP
// 0041357b: POP EDI
// 0041357c: POP ESI
// 0041357d: POP EBX
// 0041357e: RET
// 0041357f: PUSH EAX
//   Label: LAB_0041357f
// 00413580: MOV EDX,dword ptr [EAX + 0x154]
// 00413586: CALL dword ptr [EDX + 0x120]
// 0041358c: ADD ESP,0x4
// 0041358f: TEST EAX,EAX
// 00413591: JG 0x00413491
//   XREF to: 00413491 (CONDITIONAL_JUMP)
// 00413597: JMP 0x004134b1
//   XREF to: 004134b1 (UNCONDITIONAL_JUMP)
