// Name: core_mirror.cpp_transformMirrorVertex_FUN_005229b0
// Address: 005229b0
// Address Range: [[005229b0, 00522a4e]]
// Convention: __cdecl
// Signature: int * core_mirror.cpp_transformMirrorVertex_FUN_005229b0(SMirrorReflection * reflection, CVector3f * input_vertex, CVector3f * output_vertex)
// Cross-references:
//   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 (0056db80) at 0056dcb9 [UNCONDITIONAL_CALL]
// Globals:
//   float g_MirrorProjectionScale = 256
//   float g_MirrorIntToFloat_Coarse = 0.00390625
// Function calls:
//   core_mirror.cpp_applyMirrorTransform_FUN_005222f0

#include "nocturne.h"

int * __cdecl
core_mirror_cpp_transformMirrorVertex_FUN_005229b0
          (SMirrorReflection *reflection,CVector3f *input_vertex,CVector3f *output_vertex)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  byte bVar2;
  int aiStackY_1008 [1008];
  CVector3f local_3c;
  CVector3f local_2c;
  int local_20;
  int local_1c;
  CVector3f local_18;
  
  bVar2 = 0;
  local_3c.x = (float)(int)input_vertex->x * g_MirrorIntToFloat_Coarse;
  local_3c.y = (float)(int)input_vertex->y * g_MirrorIntToFloat_Coarse;
  local_3c.z = (float)(int)input_vertex->z * g_MirrorIntToFloat_Coarse;
  pCVar1 = core_mirror_cpp_applyMirrorTransform_FUN_005222f0(reflection,&local_18,&local_3c);
  if (&local_2c != pCVar1) {
    local_2c.x = pCVar1->x;
    local_2c.y = pCVar1->y;
    local_2c.z = pCVar1->z;
  }
  local_20 = (int)ROUND(local_2c.x * g_MirrorProjectionScale);
  local_1c = (int)ROUND(local_2c.y * g_MirrorProjectionScale);
  local_18.x = (float)(int)ROUND(local_2c.z * g_MirrorProjectionScale);
  *unaff_ESI = (int)ROUND(local_2c.x * g_MirrorProjectionScale);
  unaff_ESI[(uint)bVar2 * -2 + 1] = (&local_1c)[(uint)bVar2 * -2];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(int *)((int)&local_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return unaff_ESI;
}


// Assembly code:
// 005229b0: PUSH EBX
//   Label: core_mirror.cpp_transformMirrorVertex_FUN_005229b0
// 005229b1: PUSH EDI
// 005229b2: PUSH EBP
// 005229b3: SUB ESP,0x30
// 005229b6: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 005229ba: MOV EBP,ESI
// 005229bc: MOV EBX,ESP
// 005229be: FILD dword ptr [EAX]
// 005229c0: FMUL float ptr [0x006616e8]
//   XREF to: 006616e8 (READ)
// 005229c6: FSTP float ptr [EBX]
//   XREF to: Stack[-0x3c] (DATA)
// 005229c8: FILD dword ptr [EAX + 0x4]
// 005229cb: FMUL float ptr [0x006616e8]
//   XREF to: 006616e8 (READ)
// 005229d1: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x38] (WRITE)
// 005229d4: FILD dword ptr [EAX + 0x8]
// 005229d7: FMUL float ptr [0x006616e8]
//   XREF to: 006616e8 (READ)
// 005229dd: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 005229e0: MOV EAX,ESP
// 005229e2: PUSH EAX
// 005229e3: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x18] (DATA)
// 005229e7: PUSH EAX
// 005229e8: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 005229ec: PUSH EDX
// 005229ed: CALL core_mirror.cpp_applyMirrorTransform_FUN_005222f0
//   XREF to: 005222f0 (UNCONDITIONAL_CALL)
// 005229f2: MOV EDX,EAX
// 005229f4: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x30] (DATA)
// 005229f8: ADD ESP,0xc
// 005229fb: CMP EAX,EDX
// 005229fd: JZ 0x00522a13
//   XREF to: 00522a13 (CONDITIONAL_JUMP)
// 005229ff: MOV EAX,dword ptr [EDX]
// 00522a01: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00522a05: MOV EAX,dword ptr [EDX + 0x4]
// 00522a08: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00522a0c: MOV EAX,dword ptr [EDX + 0x8]
// 00522a0f: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00522a13: LEA EBX,[ESP + 0x18]
//   Label: LAB_00522a13
//   XREF to: Stack[-0x24] (DATA)
// 00522a17: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x30] (DATA)
// 00522a1b: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 00522a1f: MOV EDI,EBP
// 00522a21: FLD float ptr [EAX]
//   XREF to: Stack[-0x30] (DATA)
// 00522a23: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522a29: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x24] (DATA)
// 00522a2b: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 00522a2e: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522a34: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 00522a37: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00522a3a: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 00522a40: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 00522a43: MOVSD ES:EDI,ESI
// 00522a44: MOVSD ES:EDI,ESI
// 00522a45: MOVSD ES:EDI,ESI
// 00522a46: MOV EAX,EBP
// 00522a48: ADD ESP,0x30
// 00522a4b: POP EBP
// 00522a4c: POP EDI
// 00522a4d: POP EBX
// 00522a4e: RET
