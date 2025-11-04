// Name: core_mobster.cpp_FUN_00525720
// Address: 00525720
// Address Range: [[00525720, 0052580f]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00525720()
// Cross-references:
//   core_mobster.cpp_FUN_00525840 (00525840) at 005261f4 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00639836 = 1.57079632675000
//   double DOUBLE_0063983e = -1.57079632675000
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_00525720(undefined4 param_1) */

void core_mobster_cpp_FUN_00525720(void)

{
  float fVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (*(int *)(in_stack_00000004 + 0xbee4) == 0) {
    local_18.y = -2.35;
    local_18.z = -1.6;
    local_18.x = 4.2;
    if (&local_24 != &local_18) {
      local_24.y = -2.35;
      local_24.z = -1.6;
      local_24.x = 4.2;
    }
    fVar1 = *(float *)(*(int *)(in_stack_00000004 + 0xbee0) + 0x34) + (float)DOUBLE_00639836;
  }
  else {
    if (&local_24 != (CVector3f *)&stack0xffffffc4) {
      local_24.y = -2.35;
      local_24.z = -1.6;
      local_24.x = -4.2;
    }
    fVar1 = *(float *)(*(int *)(in_stack_00000004 + 0xbee0) + 0x34) + (float)DOUBLE_0063983e;
  }
  *(float *)(in_stack_00000004 + 0x34) = fVar1;
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (*(CDemonActor **)(in_stack_00000004 + 0xbee0),&local_30,&local_24);
  *(float *)(in_stack_00000004 + 0x20) = pCVar2->x;
  *(float *)(in_stack_00000004 + 0x24) = pCVar2->y;
  *(float *)(in_stack_00000004 + 0x28) = pCVar2->z;
  *(undefined4 *)(in_stack_00000004 + 0xbee0) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),8,1);
  return;
}


// Assembly code:
// 00525720: PUSH EBX
//   Label: core_mobster.cpp_FUN_00525720
// 00525721: PUSH ESI
// 00525722: PUSH EDI
// 00525723: SUB ESP,0x30
// 00525726: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0052572a: CMP dword ptr [EBX + 0xbee4],0x0
// 00525731: JZ 0x005257c9
//   XREF to: 005257c9 (CONDITIONAL_JUMP)
// 00525737: MOV ESI,0xc0166666
// 0052573c: MOV EDI,0xbfcccccd
// 00525741: MOV ECX,0xc0866666
// 00525746: MOV EAX,ESP
// 00525748: LEA EDX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 0052574c: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 00525750: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 00525754: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x3c] (DATA)
// 00525757: CMP EDX,EAX
// 00525759: JZ 0x00525767
//   XREF to: 00525767 (CONDITIONAL_JUMP)
// 0052575b: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0052575f: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00525763: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00525767: MOV EAX,dword ptr [EBX + 0xbee0]
//   Label: LAB_00525767
// 0052576d: FLD float ptr [EAX + 0x34]
// 00525770: FADD double ptr [0x0063983e]
//   XREF to: 0063983e (READ)
// 00525776: FSTP float ptr [EBX + 0x34]
//   Label: LAB_00525776
// 00525779: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 0052577d: PUSH EAX
// 0052577e: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x30] (DATA)
// 00525782: PUSH EAX
// 00525783: MOV ECX,dword ptr [EBX + 0xbee0]
// 00525789: PUSH ECX
// 0052578a: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0052578f: LEA EDX,[EBX + 0x20]
// 00525792: FLD float ptr [EAX]
// 00525794: ADD ESP,0xc
// 00525797: FSTP float ptr [EDX]
// 00525799: PUSH 0x1
// 0052579b: ADD EBX,0x158
// 005257a1: MOV ECX,dword ptr [EAX + 0x4]
// 005257a4: MOV dword ptr [EDX + 0x4],ECX
// 005257a7: PUSH 0x8
// 005257a9: FLD float ptr [EAX + 0x8]
// 005257ac: PUSH EBX
// 005257ad: FSTP float ptr [EDX + 0x8]
// 005257b0: MOV dword ptr [EBX + 0xbd88],0x0
// 005257ba: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005257bf: ADD ESP,0xc
// 005257c2: ADD ESP,0x30
// 005257c5: POP EDI
// 005257c6: POP ESI
// 005257c7: POP EBX
// 005257c8: RET
// 005257c9: MOV ESI,0xc0166666
//   Label: LAB_005257c9
// 005257ce: MOV EDI,0xbfcccccd
// 005257d3: MOV ECX,0x40866666
// 005257d8: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x18] (DATA)
// 005257dc: LEA EDX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 005257e0: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005257e4: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 005257e8: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005257ec: CMP EDX,EAX
// 005257ee: JZ 0x005257fc
//   XREF to: 005257fc (CONDITIONAL_JUMP)
// 005257f0: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005257f4: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 005257f8: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005257fc: MOV EAX,dword ptr [EBX + 0xbee0]
//   Label: LAB_005257fc
// 00525802: FLD float ptr [EAX + 0x34]
// 00525805: FADD double ptr [0x00639836]
//   XREF to: 00639836 (READ)
// 0052580b: JMP 0x00525776
//   XREF to: 00525776 (UNCONDITIONAL_JUMP)
