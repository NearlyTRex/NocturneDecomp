// Name: core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
// Address: 005e0cd0
// Address Range: [[005e0cd0, 005e0f61]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0()
// Cross-references:
//   core_trigger.cpp_CTrigger_process_FUN_005dfac0 (005dfac0) at 005e0001 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\core\trigger.cpp_006557d8
//   TerminatedCString s_CTrigger_containsActor_i_006557ec
//   TerminatedCString s_core_trigger_cpp_00655826
//   TerminatedCString s_Hell_froze_0065583a
//   undefined4 DAT_00655848
//   undefined4 DAT_0065584c
//   undefined4 g_CCharacterClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_trigger.cpp_CTrigger_containsActor(CTrigger* param_1,
   undefined4 param_2) */

undefined4
core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0
          (undefined4 param_1,undefined4 param_2,float unaff_EBX,undefined4 param_4,
          CDemonActor *param_5,CDemonActor *param_6)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  CDemonActor *pCVar5;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float unaff_ESI;
  float fStack_5c;
  float fStack_50;
  CBoundingBox3D CStack_44;
  float fStack_24;
  CVector3f CStack_20;
  
  if (param_6 != (CDemonActor *)0x0) {
    pCVar3 = (*((param_6->metadata).vtable)->getBoundingBox)
                       (param_6,(CBoundingBox3D *)&stack0xffffff84);
    CStack_20.x = (pCVar3->min).x + (pCVar3->max).x;
    CStack_20.y = (pCVar3->min).y + (pCVar3->max).y;
    CStack_44.max.x = CStack_20.x * _DAT_00655848;
    CStack_44.max.y = CStack_20.y * _DAT_00655848;
    CStack_20.z = (pCVar3->min).z + (pCVar3->max).z;
    CStack_44.max.z = CStack_20.z * _DAT_00655848;
    core_actor_cpp_CDemonActor_FUN_00408ec0(param_6);
    if (*(int *)(param_5[1].create_event + 0x48) != 0) {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(param_6,g_CCharacterClassInfo.name_hash);
      if ((pCVar5 != (CDemonActor *)0x0) && (pCVar5[0x1a].field22_0x120 == 0)) {
        return 0;
      }
      CStack_20.x = (param_6->location).position.y;
    }
    fStack_24 = fStack_24 - (param_5->location).position.x;
    fVar2 = CStack_20.x - (param_5->location).position.y;
    fVar1 = CStack_20.y - (param_5->location).position.z;
    if (fVar1 * fVar1 + fVar2 * fVar2 + fStack_24 * fStack_24 <=
        *(float *)param_5[1].actor_name * *(float *)param_5[1].actor_name) {
      pCVar4 = core_actor_cpp_CDemonActor_FUN_00408f10(param_5);
      if (&CStack_20 != pCVar4) {
        CStack_20.x = pCVar4->x;
        CStack_20.y = pCVar4->y;
        CStack_20.z = pCVar4->z;
      }
      if (*(int *)(param_5[1].actor_name + 0x18) == 0) {
        pCVar3 = (*((param_5->metadata).vtable)->getBoundingBox)(param_5,&CStack_44);
        if ((((((pCVar3->min).x <= unaff_EBP) && ((pCVar3->min).y <= unaff_ESI)) &&
             ((pCVar3->min).z <= unaff_EBX)) &&
            ((unaff_EBP <= (pCVar3->max).x && (unaff_ESI <= (pCVar3->max).y)))) &&
           (unaff_EBX <= (pCVar3->max).z)) {
          return 1;
        }
      }
      else {
        if (*(int *)(param_5[1].actor_name + 0x18) != 1) {
          g_CurrentFilename = "?..\\core\\trigger.cpp" + 1;
          g_CurrentLineNumber = 0x37d;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CTrigger::containsActor - invalid trigger shape %d for %s");
          g_CurrentLineNumber = 899;
          g_CurrentFilename = "..\\core\\trigger.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze...");
          return 0;
        }
        (*((param_5->metadata).vtable)->getBoundingBox)(param_5,(CBoundingBox3D *)&stack0xffffff8c);
        if ((fStack_5c <= unaff_ESI) && (unaff_ESI <= fStack_50)) {
          if (unaff_EBP * unaff_EBP + unaff_EBX * unaff_EBX <=
              *(float *)(param_5[1].actor_name + 8) * *(float *)(param_5[1].actor_name + 0x10) *
              (float)_DAT_0065584c) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}


// Assembly code:
// 005e0cd0: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
// 005e0cd1: PUSH ESI
// 005e0cd2: PUSH EBP
// 005e0cd3: SUB ESP,0x88
// 005e0cd9: MOV EBX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x4] (READ)
// 005e0ce0: MOV ESI,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x8] (READ)
// 005e0ce7: TEST ESI,ESI
// 005e0ce9: JNZ 0x005e0cf7
//   XREF to: 005e0cf7 (CONDITIONAL_JUMP)
// 005e0ceb: XOR EAX,EAX
//   Label: LAB_005e0ceb
// 005e0ced: ADD ESP,0x88
// 005e0cf3: POP EBP
// 005e0cf4: POP ESI
// 005e0cf5: POP EBX
// 005e0cf6: RET
// 005e0cf7: LEA EAX,[ESP + 0x18]
//   Label: LAB_005e0cf7
//   XREF to: Stack[-0x7c] (DATA)
// 005e0cfb: PUSH EAX
// 005e0cfc: MOV EDX,dword ptr [ESI + 0x154]
// 005e0d02: PUSH ESI
// 005e0d03: CALL dword ptr [EDX + 0x14]
// 005e0d06: LEA EDX,[EAX + 0xc]
// 005e0d09: FLD float ptr [EAX]
// 005e0d0b: FADD float ptr [EDX]
// 005e0d0d: ADD ESP,0x8
// 005e0d10: FST float ptr [ESP + 0x60]
// 005e0d14: FLD float ptr [EAX + 0x4]
// 005e0d17: FADD float ptr [EDX + 0x4]
// 005e0d1a: FXCH
// 005e0d1c: FLD float ptr [0x00655848]
//   XREF to: 00655848 (READ)
// 005e0d22: FXCH
// 005e0d24: FMUL ST1
// 005e0d26: FXCH ST2
// 005e0d28: FST float ptr [ESP + 0x64]
// 005e0d2c: FMUL ST1
// 005e0d2e: FLD float ptr [EAX + 0x8]
// 005e0d31: FADD float ptr [EDX + 0x8]
// 005e0d34: LEA EAX,[ESP + 0x48]
// 005e0d38: FST float ptr [ESP + 0x68]
// 005e0d3c: FMULP ST2
// 005e0d3e: PUSH EAX
// 005e0d3f: LEA EAX,[ESP + 0x58]
// 005e0d43: FXCH ST2
// 005e0d45: FSTP float ptr [ESP + 0x4c]
// 005e0d49: PUSH EAX
// 005e0d4a: FXCH
// 005e0d4c: FSTP float ptr [ESP + 0x54]
// 005e0d50: PUSH ESI
// 005e0d51: FSTP float ptr [ESP + 0x5c]
// 005e0d55: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005e0d5a: MOV EDX,dword ptr [EBX + 0x218]
// 005e0d60: ADD ESP,0xc
// 005e0d63: TEST EDX,EDX
// 005e0d65: JNZ 0x005e0e5a
//   XREF to: 005e0e5a (CONDITIONAL_JUMP)
// 005e0d6b: LEA EAX,[EBX + 0x20]
//   Label: LAB_005e0d6b
// 005e0d6e: FLD float ptr [ESP + 0x54]
// 005e0d72: FSUB float ptr [EAX]
// 005e0d74: FMUL ST0
// 005e0d76: FLD float ptr [ESP + 0x58]
// 005e0d7a: FSUB float ptr [EAX + 0x4]
// 005e0d7d: FMUL ST0
// 005e0d7f: FLD float ptr [ESP + 0x5c]
// 005e0d83: FXCH
// 005e0d85: FADDP ST2,ST0
// 005e0d87: FSUB float ptr [EAX + 0x8]
// 005e0d8a: FMUL ST0
// 005e0d8c: FLD float ptr [EBX + 0x158]
// 005e0d92: FXCH
// 005e0d94: FADDP ST2,ST0
// 005e0d96: FMUL float ptr [EBX + 0x158]
// 005e0d9c: FXCH
// 005e0d9e: FCOMPP
// 005e0da0: FNSTSW AX
// 005e0da2: SAHF
// 005e0da3: JA 0x005e0ceb
//   XREF to: 005e0ceb (CONDITIONAL_JUMP)
// 005e0da9: LEA EAX,[ESP + 0x54]
// 005e0dad: PUSH EAX
// 005e0dae: LEA EAX,[ESP + 0x70]
// 005e0db2: PUSH EAX
// 005e0db3: PUSH EBX
// 005e0db4: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005e0db9: MOV EDX,EAX
// 005e0dbb: LEA EAX,[ESP + 0x60]
// 005e0dbf: ADD ESP,0xc
// 005e0dc2: CMP EAX,EDX
// 005e0dc4: JZ 0x005e0dda
//   XREF to: 005e0dda (CONDITIONAL_JUMP)
// 005e0dc6: MOV EAX,dword ptr [EDX]
// 005e0dc8: MOV dword ptr [ESP + 0x54],EAX
// 005e0dcc: MOV EAX,dword ptr [EDX + 0x4]
// 005e0dcf: MOV dword ptr [ESP + 0x58],EAX
// 005e0dd3: MOV EAX,dword ptr [EDX + 0x8]
// 005e0dd6: MOV dword ptr [ESP + 0x5c],EAX
// 005e0dda: MOV EAX,dword ptr [EBX + 0x170]
//   Label: LAB_005e0dda
// 005e0de0: TEST EAX,EAX
// 005e0de2: JBE 0x005e0e87
//   XREF to: 005e0e87 (CONDITIONAL_JUMP)
// 005e0de8: CMP EAX,0x1
// 005e0deb: JNZ 0x005e0f09
//   XREF to: 005e0f09 (CONDITIONAL_JUMP)
// 005e0df1: MOV EAX,ESP
// 005e0df3: PUSH EAX
// 005e0df4: MOV EDX,dword ptr [EBX + 0x154]
// 005e0dfa: PUSH EBX
// 005e0dfb: CALL dword ptr [EDX + 0x14]
// 005e0dfe: ADD ESP,0x8
// 005e0e01: FLD float ptr [ESP + 0x58]
// 005e0e05: FCOMP float ptr [ESP + 0x4]
// 005e0e09: FNSTSW AX
// 005e0e0b: SAHF
// 005e0e0c: JC 0x005e0ceb
//   XREF to: 005e0ceb (CONDITIONAL_JUMP)
// 005e0e12: FLD float ptr [ESP + 0x58]
// 005e0e16: FCOMP float ptr [ESP + 0x10]
// 005e0e1a: FNSTSW AX
// 005e0e1c: SAHF
// 005e0e1d: JA 0x005e0ceb
//   XREF to: 005e0ceb (CONDITIONAL_JUMP)
// 005e0e23: FLD float ptr [ESP + 0x5c]
// 005e0e27: FMUL ST0
// 005e0e29: FLD float ptr [ESP + 0x54]
// 005e0e2d: FMUL ST0
// 005e0e2f: FADDP
// 005e0e31: FLD float ptr [EBX + 0x160]
// 005e0e37: FMUL float ptr [EBX + 0x168]
// 005e0e3d: FMUL double ptr [0x0065584c]
//   XREF to: 0065584c (READ)
// 005e0e43: FCOMPP
// 005e0e45: FNSTSW AX
// 005e0e47: SAHF
// 005e0e48: JNC 0x005e0efa
//   XREF to: 005e0efa (CONDITIONAL_JUMP)
// 005e0e4e: XOR EAX,EAX
// 005e0e50: ADD ESP,0x88
// 005e0e56: POP EBP
// 005e0e57: POP ESI
// 005e0e58: POP EBX
// 005e0e59: RET
// 005e0e5a: MOV ECX,dword ptr [0x00823c4c]
//   Label: LAB_005e0e5a
//   XREF to: 00823c4c (READ)
// 005e0e60: PUSH ECX
// 005e0e61: PUSH ESI
// 005e0e62: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e0e67: ADD ESP,0x8
// 005e0e6a: TEST EAX,EAX
// 005e0e6c: JZ 0x005e0e7b
//   XREF to: 005e0e7b (CONDITIONAL_JUMP)
// 005e0e6e: CMP dword ptr [EAX + 0x2410],0x0
// 005e0e75: JZ 0x005e0ceb
//   XREF to: 005e0ceb (CONDITIONAL_JUMP)
// 005e0e7b: MOV EAX,dword ptr [ESI + 0x24]
//   Label: LAB_005e0e7b
// 005e0e7e: MOV dword ptr [ESP + 0x58],EAX
// 005e0e82: JMP 0x005e0d6b
//   XREF to: 005e0d6b (UNCONDITIONAL_JUMP)
// 005e0e87: LEA EAX,[ESP + 0x30]
//   Label: LAB_005e0e87
// 005e0e8b: PUSH EAX
// 005e0e8c: MOV EDX,dword ptr [EBX + 0x154]
// 005e0e92: PUSH EBX
// 005e0e93: CALL dword ptr [EDX + 0x14]
// 005e0e96: FLD float ptr [EAX]
// 005e0e98: ADD ESP,0x8
// 005e0e9b: MOV EBX,EAX
// 005e0e9d: FCOMP float ptr [ESP + 0x54]
// 005e0ea1: FNSTSW AX
// 005e0ea3: SAHF
// 005e0ea4: JA 0x005e0ceb
//   XREF to: 005e0ceb (CONDITIONAL_JUMP)
// 005e0eaa: FLD float ptr [EBX + 0x4]
// 005e0ead: FCOMP float ptr [ESP + 0x58]
// 005e0eb1: FNSTSW AX
// 005e0eb3: SAHF
// 005e0eb4: JA 0x005e0ceb
//   XREF to: 005e0ceb (CONDITIONAL_JUMP)
// 005e0eba: FLD float ptr [EBX + 0x8]
// 005e0ebd: FCOMP float ptr [ESP + 0x5c]
// 005e0ec1: FNSTSW AX
// 005e0ec3: SAHF
// 005e0ec4: JA 0x005e0ceb
//   XREF to: 005e0ceb (CONDITIONAL_JUMP)
// 005e0eca: FLD float ptr [EBX + 0xc]
// 005e0ecd: FCOMP float ptr [ESP + 0x54]
// 005e0ed1: FNSTSW AX
// 005e0ed3: SAHF
// 005e0ed4: JC 0x005e0ceb
//   XREF to: 005e0ceb (CONDITIONAL_JUMP)
// 005e0eda: FLD float ptr [EBX + 0x10]
// 005e0edd: FCOMP float ptr [ESP + 0x58]
// 005e0ee1: FNSTSW AX
// 005e0ee3: SAHF
// 005e0ee4: JC 0x005e0ceb
//   XREF to: 005e0ceb (CONDITIONAL_JUMP)
// 005e0eea: FLD float ptr [EBX + 0x14]
// 005e0eed: FCOMP float ptr [ESP + 0x5c]
// 005e0ef1: FNSTSW AX
// 005e0ef3: SAHF
// 005e0ef4: JC 0x005e0ceb
//   XREF to: 005e0ceb (CONDITIONAL_JUMP)
// 005e0efa: MOV EAX,0x1
//   Label: LAB_005e0efa
// 005e0eff: ADD ESP,0x88
// 005e0f05: POP EBP
// 005e0f06: POP ESI
// 005e0f07: POP EBX
// 005e0f08: RET
// 005e0f09: PUSH EBX
//   Label: LAB_005e0f09
// 005e0f0a: MOV EDX,dword ptr [EBX + 0x170]
// 005e0f10: PUSH EDX
// 005e0f11: MOV EBP,0x6557d8
//   XREF to: 006557d8 (DATA)
// 005e0f16: MOV EAX,0x37d
// 005e0f1b: PUSH 0x6557ec
//   XREF to: 006557ec (DATA)
// 005e0f20: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005e0f26: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005e0f2b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e0f30: ADD ESP,0xc
// 005e0f33: MOV EBX,0x383
// 005e0f38: MOV ECX,0x655826
//   XREF to: 00655826 (PARAM)
// 005e0f3d: PUSH 0x65583a
//   XREF to: 0065583a (DATA)
// 005e0f42: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005e0f48: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005e0f4e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e0f53: ADD ESP,0x4
// 005e0f56: XOR EAX,EAX
// 005e0f58: ADD ESP,0x88
// 005e0f5e: POP EBP
// 005e0f5f: POP ESI
// 005e0f60: POP EBX
// 005e0f61: RET
