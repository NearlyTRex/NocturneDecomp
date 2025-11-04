// Name: core_skeleton.cpp_FUN_005a1950
// Address: 005a1950
// Address Range: [[005a1950, 005a1b60]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a1950()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a08a0 (005a08a0) at 005a096a [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a1b70 (005a1b70) at 005a1cca [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

void core_skeleton_cpp_FUN_005a1950(void)

{
  float fVar1;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  float *pfVar4;
  float *in_stack_00000004;
  CDeformableModelInstance *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CVector3f local_34;
  CSkeleton *local_28;
  CVector3f *local_24;
  int local_20;
  CSkeleton *local_1c;
  CVector3f *local_18;
  CQuaternion4f *local_14;
  int iVar5;
  
  local_28 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                       (in_stack_00000008);
  iVar5 = 0;
  if (0 < local_28->bone_count) {
    local_24 = (CVector3f *)(in_stack_00000004 + 0x1f7);
    local_14 = (CQuaternion4f *)(in_stack_00000004 + 3);
    local_34.z = (float)(in_stack_0000000c + 0x58);
    iVar3 = 0;
    pfVar2 = in_stack_00000004;
    pfVar4 = in_stack_00000004;
    local_1c = local_28;
    local_18 = local_24;
    do {
      local_20 = iVar5 * 0x30;
      core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)local_18,local_14);
      if (pfVar2[0x193] != 1.0) {
        *(float *)((int)(in_stack_00000004 + 0x1f7) + (int)local_1c) =
             pfVar2[0x193] * *(float *)((int)(in_stack_00000004 + 0x1f7) + (int)local_1c);
        *(float *)((int)(in_stack_00000004 + 0x1f8) + (int)local_1c) =
             pfVar2[0x193] * *(float *)((int)(in_stack_00000004 + 0x1f8) + (int)local_1c);
        *(float *)((int)(in_stack_00000004 + 0x1f9) + (int)local_1c) =
             pfVar2[0x193] * *(float *)((int)(in_stack_00000004 + 0x1f9) + (int)local_1c);
        *(float *)((int)(in_stack_00000004 + 0x1fb) + (int)local_1c) =
             pfVar2[0x193] * *(float *)((int)(in_stack_00000004 + 0x1fb) + (int)local_1c);
        *(float *)((int)(in_stack_00000004 + 0x1fc) + (int)local_1c) =
             pfVar2[0x193] * *(float *)((int)(in_stack_00000004 + 0x1fc) + (int)local_1c);
        *(float *)((int)(in_stack_00000004 + 0x1fd) + (int)local_1c) =
             pfVar2[0x193] * *(float *)((int)(in_stack_00000004 + 0x1fd) + (int)local_1c);
        *(float *)((int)(in_stack_00000004 + 0x1ff) + (int)local_1c) =
             pfVar2[0x193] * *(float *)((int)(in_stack_00000004 + 0x1ff) + (int)local_1c);
        *(float *)((int)(in_stack_00000004 + 0x200) + (int)local_1c) =
             pfVar2[0x193] * *(float *)((int)(in_stack_00000004 + 0x200) + (int)local_1c);
        *(float *)((int)(in_stack_00000004 + 0x201) + (int)local_1c) =
             pfVar2[0x193] * *(float *)((int)(in_stack_00000004 + 0x201) + (int)local_1c);
      }
      fVar1 = ((CMatrix3x3f *)((int)local_18 + 0x28578))->m[0].y;
      if ((int)fVar1 < 0) {
        pfVar4[0x1fa] = *(float *)(in_stack_00000010 + 0x58 + iVar3) + *in_stack_00000004;
        pfVar4[0x1fe] = *(float *)(in_stack_00000010 + 0x5c + iVar3) + in_stack_00000004[1];
        pfVar4[0x202] = *(float *)(in_stack_00000010 + 0x60 + iVar3) + in_stack_00000004[2];
      }
      else {
        core_xform_cpp_transformVector3x4_FUN_005f4dc0
                  (&local_34,
                   (CVector3f *)((int)((local_28->motion_list).state_names + -1) + 0x1a + iVar3),
                   (CMatrix3x4f *)((int)fVar1 * 0x30 + local_20));
        pfVar4[0x1fa] = local_34.y;
        pfVar4[0x1fe] = local_34.z;
        pfVar4[0x202] = (float)local_28;
      }
      pfVar2 = pfVar2 + 1;
      pfVar4 = pfVar4 + 0xc;
      iVar3 = iVar3 + 0xc;
      local_18 = ((CMatrix3x3f *)((int)local_18 + 0x24))->m + 1;
      local_14 = local_14 + 1;
      local_1c = (CSkeleton *)((local_1c->motion_list).state_names[1] + 2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_28->bone_count);
  }
  return;
}


// Assembly code:
// 005a1950: PUSH EBX
//   Label: core_skeleton.cpp_FUN_005a1950
// 005a1951: PUSH ESI
// 005a1952: PUSH EDI
// 005a1953: PUSH EBP
// 005a1954: SUB ESP,0x2c
// 005a1957: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 005a195b: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 005a195f: PUSH EDX
// 005a1960: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005a1965: ADD ESP,0x4
// 005a1968: MOV EBX,dword ptr [EAX + 0x28558]
// 005a196e: XOR ECX,ECX
// 005a1970: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a1974: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005a1978: TEST EBX,EBX
// 005a197a: JLE 0x005a1a6d
//   XREF to: 005a1a6d (CONDITIONAL_JUMP)
// 005a1980: LEA EBX,[EDI + 0x7dc]
// 005a1986: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a198a: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 005a198e: LEA ESI,[EDI + 0xc]
// 005a1991: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 005a1995: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 005a1999: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005a199d: ADD EBX,0x58
// 005a19a0: MOV dword ptr [ESP + 0x20],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 005a19a4: MOV ESI,EDI
// 005a19a6: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 005a19aa: XOR EBP,EBP
// 005a19ac: MOV EBX,EDI
// 005a19ae: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_005a19ae
//   XREF to: Stack[-0x18] (READ)
// 005a19b2: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005a19b6: PUSH EAX
// 005a19b7: IMUL EAX,EDX,0x30
// 005a19ba: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 005a19be: PUSH ECX
// 005a19bf: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005a19c3: CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
//   XREF to: 005f7280 (UNCONDITIONAL_CALL)
// 005a19c8: MOV EDX,dword ptr [EBX + 0x64c]
// 005a19ce: ADD ESP,0x8
// 005a19d1: CMP EDX,0x3f800000
// 005a19d7: JNZ 0x005a1a75
//   XREF to: 005a1a75 (CONDITIONAL_JUMP)
// 005a19dd: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_005a19dd
//   XREF to: Stack[-0x20] (READ)
// 005a19e1: MOV EAX,dword ptr [EAX + 0x2857c]
// 005a19e7: TEST EAX,EAX
// 005a19e9: JL 0x005a1b32
//   XREF to: 005a1b32 (CONDITIONAL_JUMP)
// 005a19ef: IMUL EAX,EAX,0x30
// 005a19f2: ADD EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 005a19f6: PUSH EAX
// 005a19f7: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 005a19fb: ADD EAX,EBP
// 005a19fd: PUSH EAX
// 005a19fe: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3c] (DATA)
// 005a1a02: PUSH EAX
// 005a1a03: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005a1a08: ADD ESP,0xc
// 005a1a0b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 005a1a0e: MOV dword ptr [ESI + 0x7e8],EAX
// 005a1a14: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 005a1a18: MOV dword ptr [ESI + 0x7f8],EAX
// 005a1a1e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 005a1a22: MOV dword ptr [ESI + 0x808],EAX
// 005a1a28: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005a1a28
//   XREF to: Stack[-0x1c] (READ)
// 005a1a2c: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 005a1a30: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 005a1a34: ADD EBX,0x4
// 005a1a37: ADD ESI,0x30
// 005a1a3a: ADD EBP,0xc
// 005a1a3d: ADD EAX,0x30
// 005a1a40: ADD EDX,0x10
// 005a1a43: ADD ECX,0x24
// 005a1a46: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a1a4a: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005a1a4e: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005a1a52: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 005a1a56: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005a1a5a: INC EAX
// 005a1a5b: MOV ECX,dword ptr [EDX + 0x28558]
// 005a1a61: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a1a65: CMP EAX,ECX
// 005a1a67: JL 0x005a19ae
//   XREF to: 005a19ae (CONDITIONAL_JUMP)
// 005a1a6d: ADD ESP,0x2c
//   Label: LAB_005a1a6d
// 005a1a70: POP EBP
// 005a1a71: POP EDI
// 005a1a72: POP ESI
// 005a1a73: POP EBX
// 005a1a74: RET
// 005a1a75: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005a1a75
//   XREF to: Stack[-0x24] (READ)
// 005a1a79: FLD float ptr [EBX + 0x64c]
// 005a1a7f: FMUL float ptr [EDI + EAX*0x1 + 0x7dc]
// 005a1a86: FSTP float ptr [EDI + EAX*0x1 + 0x7dc]
// 005a1a8d: FLD float ptr [EBX + 0x64c]
// 005a1a93: FMUL float ptr [EDI + EAX*0x1 + 0x7e0]
// 005a1a9a: FSTP float ptr [EDI + EAX*0x1 + 0x7e0]
// 005a1aa1: FLD float ptr [EBX + 0x64c]
// 005a1aa7: FMUL float ptr [EDI + EAX*0x1 + 0x7e4]
// 005a1aae: FSTP float ptr [EDI + EAX*0x1 + 0x7e4]
// 005a1ab5: FLD float ptr [EBX + 0x64c]
// 005a1abb: FMUL float ptr [EDI + EAX*0x1 + 0x7ec]
// 005a1ac2: FSTP float ptr [EDI + EAX*0x1 + 0x7ec]
// 005a1ac9: FLD float ptr [EBX + 0x64c]
// 005a1acf: FMUL float ptr [EDI + EAX*0x1 + 0x7f0]
// 005a1ad6: FSTP float ptr [EDI + EAX*0x1 + 0x7f0]
// 005a1add: FLD float ptr [EBX + 0x64c]
// 005a1ae3: FMUL float ptr [EDI + EAX*0x1 + 0x7f4]
// 005a1aea: FSTP float ptr [EDI + EAX*0x1 + 0x7f4]
// 005a1af1: FLD float ptr [EBX + 0x64c]
// 005a1af7: FMUL float ptr [EDI + EAX*0x1 + 0x7fc]
// 005a1afe: FSTP float ptr [EDI + EAX*0x1 + 0x7fc]
// 005a1b05: FLD float ptr [EBX + 0x64c]
// 005a1b0b: FMUL float ptr [EDI + EAX*0x1 + 0x800]
// 005a1b12: FSTP float ptr [EDI + EAX*0x1 + 0x800]
// 005a1b19: FLD float ptr [EBX + 0x64c]
// 005a1b1f: FMUL float ptr [EDI + EAX*0x1 + 0x804]
// 005a1b26: FSTP float ptr [EDI + EAX*0x1 + 0x804]
// 005a1b2d: JMP 0x005a19dd
//   XREF to: 005a19dd (UNCONDITIONAL_JUMP)
// 005a1b32: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_005a1b32
//   XREF to: Stack[0x8] (READ)
// 005a1b36: FLD float ptr [EAX + EBP*0x1 + 0x58]
// 005a1b3a: FADD float ptr [EDI]
// 005a1b3c: FSTP float ptr [ESI + 0x7e8]
// 005a1b42: FLD float ptr [EAX + EBP*0x1 + 0x5c]
// 005a1b46: FADD float ptr [EDI + 0x4]
// 005a1b49: FSTP float ptr [ESI + 0x7f8]
// 005a1b4f: FLD float ptr [EAX + EBP*0x1 + 0x60]
// 005a1b53: FADD float ptr [EDI + 0x8]
// 005a1b56: FSTP float ptr [ESI + 0x808]
// 005a1b5c: JMP 0x005a1a28
//   XREF to: 005a1a28 (UNCONDITIONAL_JUMP)
