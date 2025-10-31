// Name: core_stairs.cpp_FUN_005ba700
// Address: 005ba700
// Address Range: [[005ba700, 005ba831]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba700()
// Cross-references:
//   core_stairs.cpp_FUN_005ba900 (005ba900) at 005baa5d [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065308a
// Function calls:
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_stairs.cpp_FUN_005ba700(undefined4 param_1) */

void core_stairs_cpp_FUN_005ba700(void)

{
  BADSPACEBASE *in_ESP;
  CDemonTriangle *this_ptr;
  int iVar1;
  CDemonTriangle *this_ptr_00;
  int in_stack_00000004;
  undefined1 local_58 [8];
  float local_50;
  CVector3f local_4c;
  float local_40;
  undefined1 local_3c [12];
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  local_18 = *(float *)(in_stack_00000004 + 0x160) * (float)_DAT_0065308a;
  local_14 = -*(float *)(in_stack_00000004 + 0x160) * (float)_DAT_0065308a;
  iVar1 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x16c)) {
    this_ptr_00 = (CDemonTriangle *)(in_stack_00000004 + 0x170);
    this_ptr = (CDemonTriangle *)(in_stack_00000004 + 0x1a8);
    do {
      iVar1 = iVar1 + 1;
      local_58._4_4_ = *(float *)(in_stack_00000004 + 0x158) * (float)iVar1;
      local_50 = *(float *)(in_stack_00000004 + 0x15c) * (float)iVar1;
      local_3c._4_4_ = local_50 - *(float *)(in_stack_00000004 + 0x168);
      local_3c._0_4_ = (float)local_58._4_4_ - *(float *)(in_stack_00000004 + 0x164);
      local_58._0_4_ = local_14;
      local_4c.x = local_18;
      local_3c._8_4_ = local_18;
      local_40 = local_14;
      local_4c.y = (float)local_58._4_4_;
      local_4c.z = local_50;
      local_30.x = (float)local_3c._0_4_;
      local_30.y = (float)local_3c._4_4_;
      local_30.z = (float)local_3c._4_4_;
      local_24 = (float)local_58._4_4_;
      local_20 = (float)local_3c._0_4_;
      local_1c = local_50;
      local_10 = iVar1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                (this_ptr_00,(CVector3f *)local_58,&local_4c,(CVector3f *)(local_3c + 8));
      this_ptr_00 = this_ptr_00 + 2;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                (this_ptr,(CVector3f *)(local_58 + 4),&local_30,(CVector3f *)local_3c);
      this_ptr = this_ptr + 2;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x16c));
  }
  return;
}


// Assembly code:
// 005ba700: PUSH EBX
//   Label: core_stairs.cpp_FUN_005ba700
// 005ba701: PUSH ESI
// 005ba702: PUSH EBP
// 005ba703: SUB ESP,0x4c
// 005ba706: MOV EBX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 005ba70a: FLD double ptr [0x0065308a]
//   XREF to: 0065308a (READ)
// 005ba710: FLD float ptr [EBX + 0x160]
// 005ba716: FMUL ST1
// 005ba718: FLD float ptr [EBX + 0x160]
// 005ba71e: FCHS
// 005ba720: FMULP ST2
// 005ba722: MOV EDX,dword ptr [EBX + 0x16c]
// 005ba728: XOR ESI,ESI
// 005ba72a: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (WRITE)
// 005ba72e: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (WRITE)
// 005ba732: TEST EDX,EDX
// 005ba734: JLE 0x005ba82b
//   XREF to: 005ba82b (CONDITIONAL_JUMP)
// 005ba73a: PUSH EDI
// 005ba73b: LEA EDI,[EBX + 0x170]
// 005ba741: LEA EBP,[EBX + 0x1a8]
// 005ba747: INC ESI
//   Label: LAB_005ba747
// 005ba748: MOV dword ptr [ESP + 0x4c],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 005ba74c: FILD dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x10] (READ)
// 005ba750: FLD float ptr [EBX + 0x158]
// 005ba756: FMUL ST1
// 005ba758: FLD float ptr [EBX + 0x15c]
// 005ba75e: FMULP ST2
// 005ba760: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 005ba764: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (WRITE)
// 005ba768: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x1c] (WRITE)
// 005ba76c: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 005ba770: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x1c] (READ)
// 005ba774: FSUB float ptr [EBX + 0x168]
// 005ba77a: FXCH
// 005ba77c: FSUB float ptr [EBX + 0x164]
// 005ba782: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005ba786: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 005ba78a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005ba78e: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x1c] (READ)
// 005ba792: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005ba796: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005ba79a: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005ba79e: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 005ba7a2: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005ba7a6: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x1c] (READ)
// 005ba7aa: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005ba7ae: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005ba7b2: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x20] (WRITE)
// 005ba7b6: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005ba7ba: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x20] (READ)
// 005ba7be: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (WRITE)
// 005ba7c2: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005ba7c6: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 005ba7ca: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005ba7ce: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 005ba7d2: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005ba7d6: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x20] (READ)
// 005ba7da: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005ba7de: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 005ba7e2: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005ba7e6: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x34] (DATA)
// 005ba7ea: PUSH EAX
// 005ba7eb: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x4c] (DATA)
// 005ba7ef: PUSH EAX
// 005ba7f0: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x58] (DATA)
// 005ba7f4: PUSH EAX
// 005ba7f5: PUSH EDI
// 005ba7f6: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 005ba7fb: ADD ESP,0x10
// 005ba7fe: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x40] (DATA)
// 005ba802: PUSH EAX
// 005ba803: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x34] (DATA)
// 005ba807: PUSH EAX
// 005ba808: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x58] (DATA)
// 005ba80c: PUSH EAX
// 005ba80d: PUSH EBP
// 005ba80e: ADD EDI,0x70
// 005ba811: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 005ba816: ADD ESP,0x10
// 005ba819: MOV ECX,dword ptr [EBX + 0x16c]
// 005ba81f: ADD EBP,0x70
// 005ba822: CMP ESI,ECX
// 005ba824: JL 0x005ba747
//   XREF to: 005ba747 (CONDITIONAL_JUMP)
// 005ba82a: POP EDI
// 005ba82b: ADD ESP,0x4c
//   Label: LAB_005ba82b
// 005ba82e: POP EBP
// 005ba82f: POP ESI
// 005ba830: POP EBX
// 005ba831: RET
