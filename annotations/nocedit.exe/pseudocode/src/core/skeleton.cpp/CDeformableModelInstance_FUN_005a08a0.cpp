// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a08a0
// Address: 005a08a0
// Address Range: [[005a08a0, 005a0ac3]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModelInstance_FUN_005a08a0(CDeformableModelInstance * this_ptr)
// Function calls:
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0ad0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_FUN_005a1950

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_005a08a0(CDeformableModelInstance *this_ptr)

{
  int iVar1;
  CMotionList *pCVar2;
  CSkeleton *pCVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar7;
  int in_stack_00000014;
  undefined1 auStack_2dac [6812];
  undefined1 auStack_1310 [4800];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  int local_1c;
  int local_14;
  float fVar8;
  float fVar9;
  
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr->motion_controller);
  local_1c = pCVar2->motions[in_stack_00000014].frame_count;
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar1 = pCVar3->bone_count;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0ad0(this_ptr);
  iVar7 = 0;
  core_skeleton_cpp_FUN_005a1950();
  local_14 = -1;
  fVar8 = 1e+30;
  if (0 < unaff_EBP) {
    do {
      core_skeleton_cpp_CDeformableModelInstance_FUN_005a0ad0(this_ptr);
      core_skeleton_cpp_FUN_005a1950();
      iVar5 = 0;
      fVar9 = 0.0;
      if (0 < iVar1) {
        fVar9 = 0.0;
        puVar4 = auStack_2dac;
        puVar6 = auStack_1310;
        do {
          local_44 = *(float *)(puVar4 + 0xc);
          local_40 = *(float *)(puVar4 + 0x1c);
          local_3c = *(float *)(puVar4 + 0x2c);
          local_50 = *(float *)(puVar6 + 0xc);
          local_4c = *(float *)(puVar6 + 0x1c);
          local_48 = *(float *)(puVar6 + 0x2c);
          puVar6 = puVar6 + 0x30;
          puVar4 = puVar4 + 0x30;
          iVar5 = iVar5 + 1;
          fVar9 = (local_48 - local_3c) * (local_48 - local_3c) +
                  (local_4c - local_40) * (local_4c - local_40) +
                  (local_50 - local_44) * (local_50 - local_44) + fVar9;
          local_38 = local_44;
          local_34 = local_40;
          fStack_30 = local_3c;
          fStack_2c = local_50;
          fStack_28 = local_4c;
          local_24 = local_48;
        } while (iVar5 < iVar1);
      }
      if (fVar9 < fVar8) {
        local_14 = iVar7;
        fVar8 = fVar9;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < unaff_EBP);
  }
  return local_14;
}


// Assembly code:
// 005a08a0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a08a0
// 005a08a1: PUSH ESI
// 005a08a2: PUSH EDI
// 005a08a3: PUSH EBP
// 005a08a4: SUB ESP,0x3588
// 005a08aa: MOV EDI,dword ptr [ESP + 0x359c]
//   XREF to: Stack[0x4] (READ)
// 005a08b1: PUSH EDI
// 005a08b2: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005a08b7: ADD ESP,0x4
// 005a08ba: IMUL EDX,dword ptr [ESP + 0x35a8],0x54c
//   XREF to: Stack[0x10] (READ)
// 005a08c5: MOV EAX,dword ptr [EDX + EAX*0x1 + 0x9cc]
// 005a08cc: PUSH EDI
// 005a08cd: MOV dword ptr [ESP + 0x357c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a08d4: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005a08d9: ADD ESP,0x4
// 005a08dc: MOV EBX,dword ptr [EAX + 0x28558]
// 005a08e2: LEA EAX,[ESP + 0x1a9c]
//   XREF to: Stack[-0x1afc] (DATA)
// 005a08e9: PUSH EAX
// 005a08ea: MOV ESI,dword ptr [ESP + 0x35a4]
//   XREF to: Stack[0x8] (READ)
// 005a08f1: PUSH dword ptr [ESP + 0x35a8]
//   XREF to: Stack[0xc] (READ)
// 005a08f8: PUSH ESI
// 005a08f9: PUSH EDI
// 005a08fa: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0ad0
//   XREF to: 005a0ad0 (UNCONDITIONAL_CALL)
// 005a08ff: ADD ESP,0x10
// 005a0902: PUSH EDI
// 005a0903: LEA EAX,[ESP + 0x1aa0]
//   XREF to: Stack[-0x1afc] (DATA)
// 005a090a: PUSH EAX
// 005a090b: MOV EBP,0xffffffff
// 005a0910: XOR ESI,ESI
// 005a0912: CALL core_skeleton.cpp_FUN_005a1950
//   XREF to: 005a1950 (UNCONDITIONAL_CALL)
// 005a0917: ADD ESP,0x8
// 005a091a: MOV EAX,0x7149f2ca
// 005a091f: MOV EDX,dword ptr [ESP + 0x3578]
//   XREF to: Stack[-0x20] (READ)
// 005a0926: MOV dword ptr [ESP + 0x3574],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 005a092d: MOV dword ptr [ESP + 0x357c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a0934: TEST EDX,EDX
// 005a0936: JLE 0x005a0a9b
//   XREF to: 005a0a9b (CONDITIONAL_JUMP)
// 005a093c: MOV EAX,ESP
//   Label: LAB_005a093c
// 005a093e: MOV dword ptr [ESP + 0x3584],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005a0945: PUSH EAX
// 005a0946: FILD dword ptr [ESP + 0x3588]
//   XREF to: Stack[-0x14] (READ)
// 005a094d: SUB ESP,0x4
// 005a0950: MOV EBP,dword ptr [ESP + 0x35b0]
//   XREF to: Stack[0x10] (READ)
// 005a0957: FSTP float ptr [ESP]
//   XREF to: Stack[-0x35a0] (DATA)
// 005a095a: PUSH EBP
// 005a095b: PUSH EDI
// 005a095c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0ad0
//   XREF to: 005a0ad0 (UNCONDITIONAL_CALL)
// 005a0961: ADD ESP,0x10
// 005a0964: PUSH EDI
// 005a0965: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3598] (DATA)
// 005a0969: PUSH EAX
// 005a096a: CALL core_skeleton.cpp_FUN_005a1950
//   XREF to: 005a1950 (UNCONDITIONAL_CALL)
// 005a096f: ADD ESP,0x8
// 005a0972: XOR EAX,EAX
// 005a0974: XOR ECX,ECX
// 005a0976: MOV dword ptr [ESP + 0x3580],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a097d: TEST EBX,EBX
// 005a097f: JLE 0x005a0a78
//   XREF to: 005a0a78 (CONDITIONAL_JUMP)
// 005a0985: FLD float ptr [ESP + 0x3580]
//   XREF to: Stack[-0x18] (READ)
// 005a098c: LEA EAX,[ESP + 0x7dc]
//   XREF to: Stack[-0x2dbc] (DATA)
// 005a0993: LEA EDX,[ESP + 0x2278]
//   XREF to: Stack[-0x1320] (DATA)
// 005a099a: MOV EBP,dword ptr [EAX + 0xc]
//   Label: LAB_005a099a
//   XREF to: Stack[-0x2db0] (READ)
// 005a099d: MOV dword ptr [ESP + 0x3550],EBP
//   XREF to: Stack[-0x48] (WRITE)
// 005a09a4: MOV EBP,dword ptr [EAX + 0x1c]
//   XREF to: Stack[-0x2da0] (READ)
// 005a09a7: MOV dword ptr [ESP + 0x3554],EBP
//   XREF to: Stack[-0x44] (WRITE)
// 005a09ae: MOV EBP,dword ptr [EAX + 0x2c]
//   XREF to: Stack[-0x2d90] (READ)
// 005a09b1: MOV dword ptr [ESP + 0x3558],EBP
//   XREF to: Stack[-0x40] (WRITE)
// 005a09b8: MOV EBP,dword ptr [ESP + 0x3550]
//   XREF to: Stack[-0x48] (READ)
// 005a09bf: MOV dword ptr [ESP + 0x3544],EBP
//   XREF to: Stack[-0x54] (WRITE)
// 005a09c6: MOV EBP,dword ptr [ESP + 0x3554]
//   XREF to: Stack[-0x44] (READ)
// 005a09cd: MOV dword ptr [ESP + 0x3548],EBP
//   XREF to: Stack[-0x50] (WRITE)
// 005a09d4: MOV EBP,dword ptr [ESP + 0x3558]
//   XREF to: Stack[-0x40] (READ)
// 005a09db: MOV dword ptr [ESP + 0x354c],EBP
//   XREF to: Stack[-0x4c] (WRITE)
// 005a09e2: MOV EBP,dword ptr [EDX + 0xc]
//   XREF to: Stack[-0x1314] (READ)
// 005a09e5: MOV dword ptr [ESP + 0x355c],EBP
//   XREF to: Stack[-0x3c] (WRITE)
// 005a09ec: FLD float ptr [ESP + 0x355c]
//   XREF to: Stack[-0x3c] (READ)
// 005a09f3: MOV EBP,dword ptr [EDX + 0x1c]
//   XREF to: Stack[-0x1304] (READ)
// 005a09f6: FSUB float ptr [ESP + 0x3550]
//   XREF to: Stack[-0x48] (READ)
// 005a09fd: FMUL ST0
// 005a09ff: MOV dword ptr [ESP + 0x3560],EBP
//   XREF to: Stack[-0x38] (WRITE)
// 005a0a06: MOV EBP,dword ptr [EDX + 0x2c]
//   XREF to: Stack[-0x12f4] (READ)
// 005a0a09: FLD float ptr [ESP + 0x3560]
//   XREF to: Stack[-0x38] (READ)
// 005a0a10: MOV dword ptr [ESP + 0x3564],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 005a0a17: FSUB float ptr [ESP + 0x3554]
//   XREF to: Stack[-0x44] (READ)
// 005a0a1e: FMUL ST0
// 005a0a20: FLD float ptr [ESP + 0x3564]
//   XREF to: Stack[-0x34] (READ)
// 005a0a27: FXCH
// 005a0a29: FADDP ST2,ST0
// 005a0a2b: FSUB float ptr [ESP + 0x3558]
//   XREF to: Stack[-0x40] (READ)
// 005a0a32: FMUL ST0
// 005a0a34: ADD EDX,0x30
// 005a0a37: MOV EBP,dword ptr [ESP + 0x355c]
//   XREF to: Stack[-0x3c] (READ)
// 005a0a3e: ADD EAX,0x30
// 005a0a41: MOV dword ptr [ESP + 0x3538],EBP
//   XREF to: Stack[-0x60] (WRITE)
// 005a0a48: MOV EBP,dword ptr [ESP + 0x3560]
//   XREF to: Stack[-0x38] (READ)
// 005a0a4f: INC ECX
// 005a0a50: MOV dword ptr [ESP + 0x353c],EBP
//   XREF to: Stack[-0x5c] (WRITE)
// 005a0a57: MOV EBP,dword ptr [ESP + 0x3564]
//   XREF to: Stack[-0x34] (READ)
// 005a0a5e: FADDP
// 005a0a60: MOV dword ptr [ESP + 0x3540],EBP
//   XREF to: Stack[-0x58] (WRITE)
// 005a0a67: FADDP
// 005a0a69: CMP ECX,EBX
// 005a0a6b: JL 0x005a099a
//   XREF to: 005a099a (CONDITIONAL_JUMP)
// 005a0a71: FSTP float ptr [ESP + 0x3580]
//   XREF to: Stack[-0x18] (WRITE)
// 005a0a78: FLD float ptr [ESP + 0x3580]
//   Label: LAB_005a0a78
//   XREF to: Stack[-0x18] (READ)
// 005a0a7f: FCOMP float ptr [ESP + 0x357c]
//   XREF to: Stack[-0x1c] (READ)
// 005a0a86: FNSTSW AX
// 005a0a88: SAHF
// 005a0a89: JC 0x005a0aad
//   XREF to: 005a0aad (CONDITIONAL_JUMP)
// 005a0a8b: MOV ECX,dword ptr [ESP + 0x3578]
//   Label: LAB_005a0a8b
//   XREF to: Stack[-0x20] (READ)
// 005a0a92: INC ESI
// 005a0a93: CMP ESI,ECX
// 005a0a95: JL 0x005a093c
//   XREF to: 005a093c (CONDITIONAL_JUMP)
// 005a0a9b: MOV EAX,dword ptr [ESP + 0x3574]
//   Label: LAB_005a0a9b
//   XREF to: Stack[-0x24] (READ)
// 005a0aa2: ADD ESP,0x3588
// 005a0aa8: POP EBP
// 005a0aa9: POP EDI
// 005a0aaa: POP ESI
// 005a0aab: POP EBX
// 005a0aac: RET
// 005a0aad: MOV EAX,dword ptr [ESP + 0x3580]
//   Label: LAB_005a0aad
//   XREF to: Stack[-0x18] (READ)
// 005a0ab4: MOV dword ptr [ESP + 0x3574],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 005a0abb: MOV dword ptr [ESP + 0x357c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a0ac2: JMP 0x005a0a8b
//   XREF to: 005a0a8b (UNCONDITIONAL_JUMP)
