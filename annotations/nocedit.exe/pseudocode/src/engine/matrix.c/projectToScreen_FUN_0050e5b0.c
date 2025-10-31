// Name: engine_matrix.c_projectToScreen_FUN_0050e5b0
// Address: 0050e5b0
// Address Range: [[0050e5b0, 0050e63a]]
// Convention: __cdecl
// Signature: int engine_matrix.c_projectToScreen_FUN_0050e5b0(int input_value)
// Globals:
//   int g_ProjectionScale = 0x10000
//   int g_ViewportCenterYFixed
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_matrix.c_transformWorldToView_FUN_0050cc40

#include "nocturne.h"

int __cdecl engine_matrix_c_projectToScreen_FUN_0050e5b0(int input_value)

{
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  byte bVar1;
  float10 fVar2;
  int aiStackY_1038 [1017];
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_18;
  int iStack_14;
  
  bVar1 = 0;
  local_4c = input_value;
  local_48 = 0;
  engine_matrix_c_transformWorldToView_FUN_0050cc40((int *)&stack0xffffffb0,(int *)0x0);
  *(undefined4 *)((int)&stack0xffffffb4 + (uint)bVar1 * -8) =
       *(undefined4 *)(&stack0xffffffc4 + (uint)bVar1 * -8);
  *(undefined4 *)((int)&stack0xffffffb8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(undefined4 *)(&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (0 < local_44) {
    local_18 = input_value;
    iStack_14 = local_44;
    fVar2 = ((-(float10)input_value * (float10)g_ViewportCenterYFixed) / (float10)local_44) /
            (float10)g_ProjectionScale;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,input_value));
    return (int)ROUND(fVar2);
  }
  return -1;
}


// Assembly code:
// 0050e5b0: PUSH EBX
//   Label: engine_matrix.c_projectToScreen_FUN_0050e5b0
// 0050e5b1: PUSH ESI
// 0050e5b2: PUSH EDI
// 0050e5b3: PUSH EBP
// 0050e5b4: MOV EBP,ESP
// 0050e5b6: SUB ESP,0x3c
// 0050e5b9: AND ESP,0xfffffff8
// 0050e5bc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050e5bf: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x44] (DATA)
// 0050e5c3: MOV EDI,ESP
// 0050e5c5: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050e5c9: MOV EAX,ESP
// 0050e5cb: XOR EDX,EDX
// 0050e5cd: PUSH EAX
// 0050e5ce: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0050e5d2: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0050e5d6: CALL engine_matrix.c_transformWorldToView_FUN_0050cc40
//   XREF to: 0050cc40 (UNCONDITIONAL_CALL)
// 0050e5db: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x44] (DATA)
// 0050e5df: ADD ESP,0x4
// 0050e5e2: MOVSD ES:EDI,ESI
// 0050e5e3: MOVSD ES:EDI,ESI
// 0050e5e4: MOVSD ES:EDI,ESI
// 0050e5e5: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0050e5e9: TEST EBX,EBX
// 0050e5eb: JLE 0x0050e628
//   XREF to: 0050e628 (CONDITIONAL_JUMP)
// 0050e5ed: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050e5f0: FILD dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0050e5f6: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0050e5fa: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0050e5fe: FILD dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 0050e602: FCHS
// 0050e604: FMULP
// 0050e606: FILD dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 0050e60a: FDIVP
// 0050e60c: FILD dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0050e612: FDIVP
// 0050e614: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050e619: FISTP dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (WRITE)
// 0050e61d: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 0050e621: MOV ESP,EBP
// 0050e623: POP EBP
// 0050e624: POP EDI
// 0050e625: POP ESI
// 0050e626: POP EBX
// 0050e627: RET
// 0050e628: MOV dword ptr [ESP + 0x30],0xffffffff
//   Label: LAB_0050e628
//   XREF to: Stack[-0x20] (WRITE)
// 0050e630: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 0050e634: MOV ESP,EBP
// 0050e636: POP EBP
// 0050e637: POP EDI
// 0050e638: POP ESI
// 0050e639: POP EBX
// 0050e63a: RET
