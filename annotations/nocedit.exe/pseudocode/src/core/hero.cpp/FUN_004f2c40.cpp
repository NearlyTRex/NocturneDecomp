// Name: core_hero.cpp_FUN_004f2c40
// Address: 004f2c40
// Address Range: [[004f2c40, 004f2d66]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2c40()
// Cross-references:
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fde7 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d4016 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f1274 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f85f7 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5d65 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d90af [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062ec0e = 4
//   double DOUBLE_0062ec16 = 5
//   double DOUBLE_0062ec1e = 0.349065850388889
//   CEventList* g_CEventListInstance = 02d05310
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02d05310
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ea0
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_event.cpp_FUN_004aabe0
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f2c40(undefined4 param_1) */

undefined4 core_hero_cpp_FUN_004f2c40(void)

{
  CDemonActor *pCVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDemonActor *in_stack_00000004;
  CVector3f aCStack_3c [2];
  float local_1c;
  undefined4 local_18;
  float local_14;
  int iVar4;
  
  iVar3 = 0;
  core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
  iVar4 = 0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= iVar3) {
      return 0;
    }
    pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar4 + -4);
    if ((*(char *)&pCVar1[0x1b].field_236.x != '\0') && (pCVar1 != in_stack_00000004)) {
      local_1c = (pCVar1->location).position.x - (in_stack_00000004->location).position.x;
      local_14 = (pCVar1->location).position.z - (in_stack_00000004->location).position.z;
      if (ABS((pCVar1->location).position.y - (in_stack_00000004->location).position.y) <=
          (float)DOUBLE_0062ec0e) {
        local_18 = 0;
        if (SQRT(local_14 * local_14 + local_1c * local_1c) <= (float)DOUBLE_0062ec16) {
          pCVar2 = core_actor_cpp_CDemonActor_FUN_00408ea0(in_stack_00000004);
          pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (aCStack_3c,pCVar2);
          if (ABS(pCVar2->y) <= (float)DOUBLE_0062ec1e) {
            core_event_cpp_FUN_004aabe0();
            return 1;
          }
        }
      }
    }
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
  } while( true );
}


// Assembly code:
// 004f2c40: PUSH EBX
//   Label: core_hero.cpp_FUN_004f2c40
// 004f2c41: PUSH ESI
// 004f2c42: PUSH EDI
// 004f2c43: PUSH EBP
// 004f2c44: MOV EBP,ESP
// 004f2c46: SUB ESP,0x40
// 004f2c49: AND ESP,0xfffffff8
// 004f2c4c: MOV EBX,0x3fc00000
// 004f2c51: MOV EAX,ESP
// 004f2c53: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2c56: PUSH EAX
// 004f2c57: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x38] (DATA)
// 004f2c5b: XOR EDX,EDX
// 004f2c5d: PUSH EAX
// 004f2c5e: XOR EDI,EDI
// 004f2c60: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 004f2c64: PUSH ESI
// 004f2c65: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 004f2c69: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 004f2c6d: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f2c72: ADD ESP,0xc
// 004f2c75: ADD ESI,0x20
// 004f2c78: MOV dword ptr [ESP + 0x3c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 004f2c7c: MOV EAX,[0x006810c8]
//   Label: LAB_004f2c7c
//   XREF to: 006810c8 (READ)
// 004f2c81: CMP EDI,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 004f2c87: JGE 0x004f2d5e
//   XREF to: 004f2d5e (CONDITIONAL_JUMP)
// 004f2c8d: ADD EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 004f2c91: MOV EBX,dword ptr [EAX + 0x14f09c]
//   XREF to: 03263314 (DATA)
//   XREF to: 03263318 (DATA)
// 004f2c97: CMP byte ptr [EBX + 0x2534],0x0
// 004f2c9e: JZ 0x004f2ca5
//   XREF to: 004f2ca5 (CONDITIONAL_JUMP)
// 004f2ca0: CMP EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2ca3: JNZ 0x004f2cb3
//   XREF to: 004f2cb3 (CONDITIONAL_JUMP)
// 004f2ca5: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_004f2ca5
//   XREF to: Stack[-0x14] (READ)
// 004f2ca9: ADD EAX,0x4
// 004f2cac: INC EDI
// 004f2cad: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f2cb1: JMP 0x004f2c7c
//   XREF to: 004f2c7c (UNCONDITIONAL_JUMP)
// 004f2cb3: LEA EAX,[EBX + 0x20]
//   Label: LAB_004f2cb3
// 004f2cb6: FLD float ptr [EAX]
// 004f2cb8: FSUB float ptr [ESI]
// 004f2cba: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (WRITE)
// 004f2cbe: FLD float ptr [EAX + 0x4]
// 004f2cc1: FSUB float ptr [ESI + 0x4]
// 004f2cc4: FST float ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (WRITE)
// 004f2cc8: FLD float ptr [EAX + 0x8]
// 004f2ccb: FXCH
// 004f2ccd: FABS
// 004f2ccf: FXCH
// 004f2cd1: FSUB float ptr [ESI + 0x8]
// 004f2cd4: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (WRITE)
// 004f2cd8: FCOMP double ptr [0x0062ec0e]
//   XREF to: 0062ec0e (READ)
// 004f2cde: FNSTSW AX
// 004f2ce0: SAHF
// 004f2ce1: JA 0x004f2ca5
//   XREF to: 004f2ca5 (CONDITIONAL_JUMP)
// 004f2ce3: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 004f2ce7: FMUL ST0
// 004f2ce9: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 004f2ced: FMUL ST0
// 004f2cef: FADDP
// 004f2cf1: FSQRT
// 004f2cf3: XOR EDX,EDX
// 004f2cf5: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f2cf9: FCOMP double ptr [0x0062ec16]
//   XREF to: 0062ec16 (READ)
// 004f2cff: FNSTSW AX
// 004f2d01: SAHF
// 004f2d02: JA 0x004f2ca5
//   XREF to: 004f2ca5 (CONDITIONAL_JUMP)
// 004f2d04: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x20] (DATA)
// 004f2d08: PUSH EAX
// 004f2d09: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x2c] (DATA)
// 004f2d0d: PUSH EAX
// 004f2d0e: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2d11: PUSH ECX
// 004f2d12: CALL core_actor.cpp_CDemonActor_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 004f2d17: ADD ESP,0xc
// 004f2d1a: PUSH EAX
// 004f2d1b: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x44] (DATA)
// 004f2d1f: PUSH EAX
// 004f2d20: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f2d25: FLD float ptr [EAX + 0x4]
// 004f2d28: FABS
// 004f2d2a: ADD ESP,0x8
// 004f2d2d: FCOMP double ptr [0x0062ec1e]
//   XREF to: 0062ec1e (READ)
// 004f2d33: FNSTSW AX
// 004f2d35: SAHF
// 004f2d36: JA 0x004f2ca5
//   XREF to: 004f2ca5 (CONDITIONAL_JUMP)
// 004f2d3c: ADD EBX,0x2534
// 004f2d42: PUSH EBX
// 004f2d43: MOV EBX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004f2d49: PUSH EBX
//   XREF to: 02d05310 (DATA)
// 004f2d4a: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004f2d4f: MOV EAX,0x1
// 004f2d54: ADD ESP,0x8
// 004f2d57: MOV ESP,EBP
// 004f2d59: POP EBP
// 004f2d5a: POP EDI
// 004f2d5b: POP ESI
// 004f2d5c: POP EBX
// 004f2d5d: RET
// 004f2d5e: XOR EAX,EAX
//   Label: LAB_004f2d5e
// 004f2d60: MOV ESP,EBP
// 004f2d62: POP EBP
// 004f2d63: POP EDI
// 004f2d64: POP ESI
// 004f2d65: POP EBX
// 004f2d66: RET
