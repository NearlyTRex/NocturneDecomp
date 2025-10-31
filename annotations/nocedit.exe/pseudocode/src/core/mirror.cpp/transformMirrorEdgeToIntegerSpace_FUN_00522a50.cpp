// Name: core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
// Address: 00522a50
// Address Range: [[00522a50, 00522bef]]
// Convention: __cdecl
// Signature: CVector3i * core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50(CVector3i * output, SMirrorReflection * reflection, CVector3i * point_a, CVector3i * point_b)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056db80 (0056db80) at 0056dd84 [UNCONDITIONAL_CALL]
// Globals:
//   float g_MirrorFloatToInt = 65536
//   float g_MirrorIntToFloat_Coarse = 0.00390625
//   float g_MirrorIntToFloat_Fine = 0.00001525879
// Function calls:
//   core_mirror.cpp_applyMirrorTransform_FUN_005222f0

#include "nocturne.h"

CVector3i * __cdecl
core_mirror_cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
          (CVector3i *output,SMirrorReflection *reflection,CVector3i *point_a,CVector3i *point_b)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3i *unaff_ESI;
  int *piVar2;
  byte bVar3;
  int aiStackY_101c [1004];
  float local_54;
  undefined1 local_50 [8];
  CVector3f local_48;
  int local_34;
  int local_30 [2];
  float local_28;
  undefined1 local_24 [8];
  float local_1c;
  float local_18;
  float fStack_14;
  
  bVar3 = 0;
  local_24._0_4_ = (float)(int)(reflection->corner1).x * g_MirrorIntToFloat_Coarse;
  local_24._4_4_ = (float)(int)(reflection->corner1).y * g_MirrorIntToFloat_Coarse;
  local_1c = (float)(int)(reflection->corner1).z * g_MirrorIntToFloat_Coarse;
  local_54 = (float)point_a->x * g_MirrorIntToFloat_Fine;
  local_50._0_4_ = (float)point_a->y * g_MirrorIntToFloat_Fine;
  local_50._4_4_ = (float)point_a->z * g_MirrorIntToFloat_Fine;
  if (&local_54 != (float *)&stack0xffffffa0) {
    local_54 = local_54 + (float)local_24._0_4_;
    local_50._0_4_ = (float)local_50._0_4_ + (float)local_24._4_4_;
    local_50._4_4_ = (float)local_50._4_4_ + local_1c;
  }
  pCVar1 = core_mirror_cpp_applyMirrorTransform_FUN_005222f0
                     ((SMirrorReflection *)output,&local_48,(CVector3f *)local_24);
  if ((CVector3f *)(local_24 + 4) != pCVar1) {
    local_24._4_4_ = pCVar1->x;
    local_1c = pCVar1->y;
    local_18 = pCVar1->z;
  }
  pCVar1 = core_mirror_cpp_applyMirrorTransform_FUN_005222f0
                     ((SMirrorReflection *)output,(CVector3f *)&fStack_14,(CVector3f *)local_50);
  if ((CVector3f *)(local_50 + 4) != pCVar1) {
    local_50._4_4_ = pCVar1->x;
    local_48.x = pCVar1->y;
    local_48.y = pCVar1->z;
  }
  local_24._0_4_ = local_48.x - local_18;
  local_24._4_4_ = local_48.y - fStack_14;
  local_28 = (float)local_50._4_4_ - local_1c;
  if ((float *)(local_50 + 4) != &local_28) {
    local_50._4_4_ = (float)local_50._4_4_ - local_1c;
    local_48.x = local_48.x - local_18;
    local_48.y = local_48.y - fStack_14;
  }
  local_34 = (int)ROUND((float)local_50._4_4_ * g_MirrorFloatToInt);
  local_30[0] = (int)ROUND(local_48.x * g_MirrorFloatToInt);
  local_30[1] = (int)ROUND(local_48.y * g_MirrorFloatToInt);
  piVar2 = (int *)((int)unaff_ESI + (uint)bVar3 * -8 + 4);
  unaff_ESI->x = (int)ROUND((float)local_50._4_4_ * g_MirrorFloatToInt);
  *piVar2 = local_30[(uint)bVar3 * -2];
  piVar2[(uint)bVar3 * -2 + 1] = local_30[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  return unaff_ESI;
}


// Assembly code:
// 00522a50: PUSH EBX
//   Label: core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
// 00522a51: PUSH EDI
// 00522a52: PUSH EBP
// 00522a53: SUB ESP,0x54
// 00522a56: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x8] (READ)
// 00522a5a: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0xc] (READ)
// 00522a5e: MOV EBP,ESI
// 00522a60: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x4] (READ)
// 00522a64: LEA EBX,[ESP + 0x3c]
//   XREF to: Stack[-0x24] (DATA)
// 00522a68: FILD dword ptr [EAX]
// 00522a6a: FMUL float ptr [0x006616e8]
//   XREF to: 006616e8 (READ)
// 00522a70: FSTP float ptr [EBX]
//   XREF to: Stack[-0x24] (DATA)
// 00522a72: FILD dword ptr [EAX + 0x4]
// 00522a75: FMUL float ptr [0x006616e8]
//   XREF to: 006616e8 (READ)
// 00522a7b: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 00522a7e: FILD dword ptr [EAX + 0x8]
// 00522a81: FMUL float ptr [0x006616e8]
//   XREF to: 006616e8 (READ)
// 00522a87: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 00522a8a: LEA EBX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 00522a8e: MOV EAX,EDX
// 00522a90: FILD dword ptr [EAX]
// 00522a92: FMUL float ptr [0x006616ec]
//   XREF to: 006616ec (READ)
// 00522a98: FSTP float ptr [EBX]
//   XREF to: Stack[-0x54] (DATA)
// 00522a9a: FILD dword ptr [EAX + 0x4]
// 00522a9d: FMUL float ptr [0x006616ec]
//   XREF to: 006616ec (READ)
// 00522aa3: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x50] (WRITE)
// 00522aa6: FILD dword ptr [EAX + 0x8]
// 00522aa9: FMUL float ptr [0x006616ec]
//   XREF to: 006616ec (READ)
// 00522aaf: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x4c] (WRITE)
// 00522ab2: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x54] (READ)
// 00522ab6: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00522aba: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00522abe: MOV EAX,ESP
// 00522ac0: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 00522ac4: FXCH ST2
// 00522ac6: FADD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 00522aca: FXCH
// 00522acc: FADD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 00522ad0: FXCH ST2
// 00522ad2: FADD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 00522ad6: FXCH
// 00522ad8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 00522adb: FXCH
// 00522add: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x5c] (WRITE)
// 00522ae1: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 00522ae5: CMP EDX,EAX
// 00522ae7: JZ 0x00522b00
//   XREF to: 00522b00 (CONDITIONAL_JUMP)
// 00522ae9: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 00522aec: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00522af0: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x5c] (READ)
// 00522af4: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00522af8: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00522afc: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00522b00: LEA EAX,[ESP + 0x3c]
//   Label: LAB_00522b00
//   XREF to: Stack[-0x24] (DATA)
// 00522b04: PUSH EAX
// 00522b05: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x48] (DATA)
// 00522b09: PUSH EAX
// 00522b0a: PUSH ESI
// 00522b0b: CALL core_mirror.cpp_applyMirrorTransform_FUN_005222f0
//   XREF to: 005222f0 (UNCONDITIONAL_CALL)
// 00522b10: MOV EDX,EAX
// 00522b12: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x24] (DATA)
// 00522b16: ADD ESP,0xc
// 00522b19: CMP EAX,EDX
// 00522b1b: JZ 0x00522b31
//   XREF to: 00522b31 (CONDITIONAL_JUMP)
// 00522b1d: MOV EAX,dword ptr [EDX]
// 00522b1f: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00522b23: MOV EAX,dword ptr [EDX + 0x4]
// 00522b26: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00522b2a: MOV EAX,dword ptr [EDX + 0x8]
// 00522b2d: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00522b31: LEA EAX,[ESP + 0xc]
//   Label: LAB_00522b31
//   XREF to: Stack[-0x54] (DATA)
// 00522b35: PUSH EAX
// 00522b36: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x18] (DATA)
// 00522b3a: PUSH EAX
// 00522b3b: PUSH ESI
// 00522b3c: CALL core_mirror.cpp_applyMirrorTransform_FUN_005222f0
//   XREF to: 005222f0 (UNCONDITIONAL_CALL)
// 00522b41: MOV EDX,EAX
// 00522b43: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x54] (DATA)
// 00522b47: ADD ESP,0xc
// 00522b4a: CMP EAX,EDX
// 00522b4c: JZ 0x00522b62
//   XREF to: 00522b62 (CONDITIONAL_JUMP)
// 00522b4e: MOV EAX,dword ptr [EDX]
// 00522b50: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00522b54: MOV EAX,dword ptr [EDX + 0x4]
// 00522b57: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00522b5b: MOV EAX,dword ptr [EDX + 0x8]
// 00522b5e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00522b62: FLD float ptr [ESP + 0xc]
//   Label: LAB_00522b62
//   XREF to: Stack[-0x54] (READ)
// 00522b66: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00522b6a: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00522b6e: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x30] (DATA)
// 00522b72: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 00522b76: FXCH ST2
// 00522b78: FSUB float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 00522b7c: FXCH
// 00522b7e: FSUB float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 00522b82: FXCH ST2
// 00522b84: FSUB float ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 00522b88: FXCH ST2
// 00522b8a: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (WRITE)
// 00522b8e: FXCH
// 00522b90: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (WRITE)
// 00522b94: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (WRITE)
// 00522b98: CMP EDX,EAX
// 00522b9a: JZ 0x00522bb4
//   XREF to: 00522bb4 (CONDITIONAL_JUMP)
// 00522b9c: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (DATA)
// 00522ba0: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00522ba4: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00522ba8: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00522bac: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00522bb0: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00522bb4: LEA EBX,[ESP + 0x24]
//   Label: LAB_00522bb4
//   XREF to: Stack[-0x3c] (DATA)
// 00522bb8: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 00522bbc: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0x3c] (DATA)
// 00522bc0: MOV EDI,EBP
// 00522bc2: FLD float ptr [EAX]
//   XREF to: Stack[-0x54] (DATA)
// 00522bc4: FMUL float ptr [0x006616e4]
//   XREF to: 006616e4 (READ)
// 00522bca: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x3c] (DATA)
// 00522bcc: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x50] (READ)
// 00522bcf: FMUL float ptr [0x006616e4]
//   XREF to: 006616e4 (READ)
// 00522bd5: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x38] (WRITE)
// 00522bd8: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x4c] (READ)
// 00522bdb: FMUL float ptr [0x006616e4]
//   XREF to: 006616e4 (READ)
// 00522be1: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 00522be4: MOVSD ES:EDI,ESI
// 00522be5: MOVSD ES:EDI,ESI
// 00522be6: MOVSD ES:EDI,ESI
// 00522be7: MOV EAX,EBP
// 00522be9: ADD ESP,0x54
// 00522bec: POP EBP
// 00522bed: POP EDI
// 00522bee: POP EBX
// 00522bef: RET
