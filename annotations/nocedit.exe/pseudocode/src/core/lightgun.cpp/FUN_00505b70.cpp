// Name: core_lightgun.cpp_FUN_00505b70
// Address: 00505b70
// Address Range: [[00505b70, 00505c6e]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_00505b70()
// Globals:
//   TerminatedCString s_CTrigger_CGlass_006314b6
//   float FLOAT_006314ca = 0.5
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613bc
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
//   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_lightgun.cpp_FUN_00505b70(undefined4 param_1, undefined4
   param_2) */

undefined4 core_lightgun_cpp_FUN_00505b70(void)

{
  CDemonActor *actor_ptr;
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  undefined4 uVar4;
  CVector3f *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float fStack_44;
  CVector3f CStack_1c;
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  pCVar1 = (*in_stack_00000008->vtable->getBoundingBox)
                     (in_stack_00000008,(CBoundingBox3D *)&stack0xffffffb8);
  CStack_1c.x = ((pCVar1->min).x + (pCVar1->max).x) * FLOAT_006314ca;
  CStack_1c.y = ((pCVar1->min).y + (pCVar1->max).y) * FLOAT_006314ca;
  CStack_1c.z = ((pCVar1->min).z + (pCVar1->max).z) * FLOAT_006314ca;
  uVar4 = 0;
  iVar3 = 0;
  fStack_44 = 7.37983e-39;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,(CVector3f *)&stack0xfffffff0,&CStack_1c);
  do {
    core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
              (g_CDemonSetPtr,in_stack_00000004,(CVector3f *)&stack0xfffffff4);
    actor_ptr = g_CDemonSetPtr->collision_actor;
    if (actor_ptr == (CDemonActor *)0x0) break;
    if (in_stack_00000008 == actor_ptr) {
      uVar4 = 1;
      break;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CTrigger || CGlass");
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
  } while (iVar3 < 3);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  return uVar4;
}


// Assembly code:
// 00505b70: PUSH EBX
//   Label: core_lightgun.cpp_FUN_00505b70
// 00505b71: PUSH ESI
// 00505b72: PUSH EDI
// 00505b73: PUSH EBP
// 00505b74: SUB ESP,0x3c
// 00505b77: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 00505b7b: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 00505b7f: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505b85: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00505b86: CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
//   XREF to: 00573e10 (UNCONDITIONAL_CALL)
// 00505b8b: ADD ESP,0x4
// 00505b8e: MOV EAX,ESP
// 00505b90: PUSH EAX
// 00505b91: MOV EBX,dword ptr [ESI + 0x154]
// 00505b97: PUSH ESI
// 00505b98: CALL dword ptr [EBX + 0x14]
// 00505b9b: LEA EBX,[EAX + 0xc]
// 00505b9e: FLD float ptr [EAX]
// 00505ba0: FADD float ptr [EBX]
// 00505ba2: ADD ESP,0x8
// 00505ba5: FST float ptr [ESP + 0x30]
// 00505ba9: FLD float ptr [EAX + 0x4]
// 00505bac: FADD float ptr [EBX + 0x4]
// 00505baf: FXCH
// 00505bb1: FLD float ptr [0x006314ca]
//   XREF to: 006314ca (READ)
// 00505bb7: FXCH
// 00505bb9: FMUL ST1
// 00505bbb: FXCH ST2
// 00505bbd: FST float ptr [ESP + 0x34]
// 00505bc1: FLD float ptr [EAX + 0x8]
// 00505bc4: FADD float ptr [EBX + 0x8]
// 00505bc7: FXCH
// 00505bc9: FMUL ST2
// 00505bcb: FXCH
// 00505bcd: FST float ptr [ESP + 0x38]
// 00505bd1: FMULP ST2
// 00505bd3: LEA EAX,[ESP + 0x18]
// 00505bd7: XOR EBP,EBP
// 00505bd9: PUSH EAX
// 00505bda: LEA EAX,[ESP + 0x28]
// 00505bde: FXCH ST2
// 00505be0: FSTP float ptr [ESP + 0x1c]
// 00505be4: PUSH EAX
// 00505be5: FXCH
// 00505be7: FSTP float ptr [ESP + 0x24]
// 00505beb: XOR EBX,EBX
// 00505bed: PUSH ESI
// 00505bee: FSTP float ptr [ESP + 0x2c]
// 00505bf2: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00505bf7: ADD ESP,0xc
// 00505bfa: LEA EAX,[ESP + 0x24]
//   Label: LAB_00505bfa
// 00505bfe: PUSH EAX
// 00505bff: PUSH EDI
// 00505c00: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505c06: PUSH ECX
//   XREF to: 03114278 (DATA)
// 00505c07: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 00505c0c: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505c11: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 00505c17: ADD ESP,0xc
// 00505c1a: TEST EDX,EDX
// 00505c1c: JZ 0x00505c4f
//   XREF to: 00505c4f (CONDITIONAL_JUMP)
// 00505c1e: CMP ESI,EDX
// 00505c20: JZ 0x00505c68
//   XREF to: 00505c68 (CONDITIONAL_JUMP)
// 00505c22: PUSH 0x6314b6
//   XREF to: 006314b6 (DATA)
// 00505c27: PUSH EDX
// 00505c28: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00505c2d: ADD ESP,0x8
// 00505c30: TEST EAX,EAX
// 00505c32: JZ 0x00505c4f
//   XREF to: 00505c4f (CONDITIONAL_JUMP)
// 00505c34: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505c39: MOV ECX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 00505c3f: PUSH ECX
// 00505c40: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00505c41: INC EBX
// 00505c42: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 00505c47: ADD ESP,0x8
// 00505c4a: CMP EBX,0x3
// 00505c4d: JL 0x00505bfa
//   XREF to: 00505bfa (CONDITIONAL_JUMP)
// 00505c4f: MOV EBX,dword ptr [0x006810c8]
//   Label: LAB_00505c4f
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00505c55: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00505c56: CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
//   XREF to: 00573fc0 (UNCONDITIONAL_CALL)
// 00505c5b: ADD ESP,0x4
// 00505c5e: MOV EAX,EBP
// 00505c60: ADD ESP,0x3c
// 00505c63: POP EBP
// 00505c64: POP EDI
// 00505c65: POP ESI
// 00505c66: POP EBX
// 00505c67: RET
// 00505c68: MOV EBP,0x1
//   Label: LAB_00505c68
// 00505c6d: JMP 0x00505c4f
//   XREF to: 00505c4f (UNCONDITIONAL_JUMP)
