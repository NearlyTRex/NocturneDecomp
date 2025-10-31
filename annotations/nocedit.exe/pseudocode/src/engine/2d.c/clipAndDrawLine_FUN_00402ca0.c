// Name: engine_2d.c_clipAndDrawLine_FUN_00402ca0
// Address: 00402ca0
// Address Range: [[00402ca0, 00402ed4]]
// Convention: __cdecl
// Signature: void engine_2d.c_clipAndDrawLine_FUN_00402ca0(int * x1, int * y1, int * x2, int * y2, int x_min, int y_min, int x_max, int y_max)
// Cross-references:
//   engine_2d.c_clipLineGlobal_FUN_00402c50 (00402c50) at 00402c84 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_2d_c_0061319f
//   TerminatedCString s_s_2d_line_clipping_excee_006131ae
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_2d.c_computeOutcode_FUN_00402c10
//   engine_2d.c_drawLine_FUN_004011b0

#include "nocturne.h"

void __cdecl
engine_2d_c_clipAndDrawLine_FUN_00402ca0
          (int *x1,int *y1,int *x2,int *y2,int x_min,int y_min,int x_max,int y_max)

{
  longlong lVar1;
  byte bVar2;
  undefined3 extraout_var;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *unaff_EBX;
  int iVar7;
  int *unaff_EDI;
  int *in_stack_00000024;
  int *in_stack_00000028;
  int local_18;
  int local_14;
  int *piVar3;
  undefined3 extraout_var_00;
  
  engine_2d_c_computeOutcode_FUN_00402c10((int)x1,(int)y1,x_min,y_min,x_max,y_max);
  bVar2 = engine_2d_c_computeOutcode_FUN_00402c10
                    ((int)y2,x_min,y_min,x_max,y_max,(int)in_stack_00000024);
  piVar3 = (int *)CONCAT31(extraout_var,bVar2);
  local_14 = 0;
  piVar5 = unaff_EDI;
  do {
    iVar7 = y_min - (int)y1;
    iVar6 = x_min - (int)x2;
    if ((piVar5 == (int *)0x0) && (piVar3 == (int *)0x0)) {
      local_18 = 1;
      break;
    }
    if (((uint)piVar5 & (uint)piVar3) != 0) {
      local_18 = 0;
      break;
    }
    piVar4 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar4 = piVar3;
    }
    if (((uint)piVar4 & 1) == 0) {
      if (((uint)piVar4 & 2) == 0) {
        if (((uint)piVar4 & 4) == 0) {
          if ((((uint)piVar4 & 8) != 0) && (unaff_EBX = (int *)x_max, iVar6 != 0)) {
            lVar1 = (longlong)(int)(((longlong)(x_max - (int)x2) * 0x10000) / (longlong)iVar6) *
                    (longlong)iVar7;
            unaff_EDI = (int *)(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                               (int)y1);
          }
        }
        else {
          unaff_EBX = in_stack_00000024;
          if (iVar6 != 0) {
            lVar1 = (longlong)
                    (int)(((longlong)((int)in_stack_00000024 - (int)x2) * 0x10000) / (longlong)iVar6
                         ) * (longlong)iVar7;
            unaff_EDI = (int *)(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                               (int)y1);
          }
        }
      }
      else {
        unaff_EDI = (int *)y_max;
        if (iVar7 != 0) {
          lVar1 = (longlong)(int)(((longlong)(y_max - (int)y1) * 0x10000) / (longlong)iVar7) *
                  (longlong)iVar6;
          unaff_EBX = (int *)((int)x2 +
                             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10));
        }
      }
    }
    else {
      unaff_EDI = in_stack_00000028;
      if (iVar7 != 0) {
        lVar1 = (longlong)
                (int)(((longlong)((int)in_stack_00000028 - (int)y1) * 0x10000) / (longlong)iVar7) *
                (longlong)iVar6;
        unaff_EBX = (int *)((int)x2 +
                           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10));
      }
    }
    if (piVar5 == (int *)0x0) {
      bVar2 = engine_2d_c_computeOutcode_FUN_00402c10
                        ((int)unaff_EBX,(int)unaff_EDI,x_max,y_max,(int)in_stack_00000024,
                         (int)in_stack_00000028);
      piVar5 = (int *)CONCAT31(extraout_var_00,bVar2);
      x_min = (int)unaff_EBX;
      y_min = (int)unaff_EDI;
    }
    else {
      engine_2d_c_computeOutcode_FUN_00402c10
                ((int)unaff_EBX,(int)unaff_EDI,x_max,y_max,(int)in_stack_00000024,
                 (int)in_stack_00000028);
      y1 = unaff_EDI;
      x2 = unaff_EBX;
    }
    local_14 = local_14 + 1;
  } while (local_14 < 100);
  if (local_14 == 100) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x870;
    core_main_c_displayErrorAndQuit_FUN_00506f10("2d line clipping exceeded max iterations");
  }
  if (local_18 != 0) {
    engine_2d_c_drawLine_FUN_004011b0((int)x2,(int)y1,x_min,y_min);
    return;
  }
  return;
}


// Assembly code:
// 00402ca0: PUSH EBX
//   Label: engine_2d.c_clipAndDrawLine_FUN_00402ca0
// 00402ca1: PUSH ESI
// 00402ca2: PUSH EDI
// 00402ca3: PUSH EBP
// 00402ca4: SUB ESP,0x10
// 00402ca7: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00402cab: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x20] (READ)
// 00402caf: PUSH EDX
// 00402cb0: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x1c] (READ)
// 00402cb4: PUSH ECX
// 00402cb5: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x18] (READ)
// 00402cb9: PUSH ESI
// 00402cba: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x14] (READ)
// 00402cbe: PUSH EAX
// 00402cbf: PUSH EBP
// 00402cc0: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 00402cc4: PUSH EDX
// 00402cc5: CALL engine_2d.c_computeOutcode_FUN_00402c10
//   XREF to: 00402c10 (UNCONDITIONAL_CALL)
// 00402cca: ADD ESP,0x18
// 00402ccd: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x20] (READ)
// 00402cd1: PUSH ECX
// 00402cd2: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x1c] (READ)
// 00402cd6: PUSH ESI
// 00402cd7: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00402cdb: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x18] (READ)
// 00402cdf: PUSH EAX
// 00402ce0: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x14] (READ)
// 00402ce4: PUSH EDX
// 00402ce5: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00402ce9: PUSH ECX
// 00402cea: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 00402cee: PUSH ESI
// 00402cef: CALL engine_2d.c_computeOutcode_FUN_00402c10
//   XREF to: 00402c10 (UNCONDITIONAL_CALL)
// 00402cf4: ADD ESP,0x18
// 00402cf7: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00402cfb: XOR EAX,EAX
// 00402cfd: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00402d01: MOV ESI,dword ptr [ESP + 0x30]
//   Label: LAB_00402d01
//   XREF to: Stack[0x10] (READ)
// 00402d05: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00402d09: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00402d0d: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00402d11: SUB ESI,EBP
// 00402d13: SUB ECX,EDX
// 00402d15: TEST EAX,EAX
// 00402d17: JZ 0x00402d66
//   XREF to: 00402d66 (CONDITIONAL_JUMP)
// 00402d19: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00402d19
//   XREF to: Stack[-0x14] (READ)
// 00402d1d: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00402d21: TEST EAX,EDX
// 00402d23: JZ 0x00402d76
//   XREF to: 00402d76 (CONDITIONAL_JUMP)
// 00402d25: XOR ECX,ECX
// 00402d27: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x20] (DATA)
// 00402d2a: CMP dword ptr [ESP + 0x4],0x64
//   Label: LAB_00402d2a
//   XREF to: Stack[-0x1c] (READ)
// 00402d2f: JNZ 0x00402d54
//   XREF to: 00402d54 (CONDITIONAL_JUMP)
// 00402d31: MOV ESI,0x61319f
//   XREF to: 0061319f (DATA)
// 00402d36: MOV EDI,0x870
// 00402d3b: PUSH 0x6131ae
//   XREF to: 006131ae (DATA)
// 00402d40: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00402d46: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00402d4c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00402d51: ADD ESP,0x4
// 00402d54: CMP dword ptr [ESP],0x0
//   Label: LAB_00402d54
//   XREF to: Stack[-0x20] (DATA)
// 00402d58: JNZ 0x00402eb5
//   XREF to: 00402eb5 (CONDITIONAL_JUMP)
// 00402d5e: ADD ESP,0x10
// 00402d61: POP EBP
// 00402d62: POP EDI
// 00402d63: POP ESI
// 00402d64: POP EBX
// 00402d65: RET
// 00402d66: CMP dword ptr [ESP + 0x8],0x0
//   Label: LAB_00402d66
//   XREF to: Stack[-0x18] (READ)
// 00402d6b: JNZ 0x00402d19
//   XREF to: 00402d19 (CONDITIONAL_JUMP)
// 00402d6d: MOV dword ptr [ESP],0x1
//   XREF to: Stack[-0x20] (DATA)
// 00402d74: JMP 0x00402d2a
//   XREF to: 00402d2a (UNCONDITIONAL_JUMP)
// 00402d76: TEST EAX,EAX
//   Label: LAB_00402d76
// 00402d78: JZ 0x00402ddd
//   XREF to: 00402ddd (CONDITIONAL_JUMP)
// 00402d7a: TEST AL,0x1
//   Label: LAB_00402d7a
// 00402d7c: JZ 0x00402de1
//   XREF to: 00402de1 (CONDITIONAL_JUMP)
// 00402d7e: TEST ESI,ESI
// 00402d80: JZ 0x00402da1
//   XREF to: 00402da1 (CONDITIONAL_JUMP)
// 00402d82: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x20] (READ)
// 00402d86: MOV EDX,0x10000
// 00402d8b: MOV EBX,ESI
// 00402d8d: SUB EAX,EBP
// 00402d8f: IMUL EDX
// 00402d91: IDIV EBX
// 00402d93: MOV EDX,ECX
// 00402d95: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00402d99: IMUL EDX
// 00402d9b: SHRD EAX,EDX,0x10
// 00402d9f: ADD EBX,EAX
// 00402da1: MOV EDI,dword ptr [ESP + 0x40]
//   Label: LAB_00402da1
//   XREF to: Stack[0x20] (READ)
// 00402da5: CMP dword ptr [ESP + 0xc],0x0
//   Label: LAB_00402da5
//   XREF to: Stack[-0x14] (READ)
// 00402daa: JZ 0x00402e74
//   XREF to: 00402e74 (CONDITIONAL_JUMP)
// 00402db0: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x20] (READ)
// 00402db4: PUSH EAX
// 00402db5: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x1c] (READ)
// 00402db9: PUSH EDX
// 00402dba: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x18] (READ)
// 00402dbe: PUSH ECX
// 00402dbf: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x14] (READ)
// 00402dc3: PUSH ESI
// 00402dc4: PUSH EDI
// 00402dc5: PUSH EBX
// 00402dc6: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[0x4] (WRITE)
// 00402dca: CALL engine_2d.c_computeOutcode_FUN_00402c10
//   XREF to: 00402c10 (UNCONDITIONAL_CALL)
// 00402dcf: ADD ESP,0x18
// 00402dd2: MOV EBP,EDI
// 00402dd4: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00402dd8: JMP 0x00402e9e
//   XREF to: 00402e9e (UNCONDITIONAL_JUMP)
// 00402ddd: MOV EAX,EDX
//   Label: LAB_00402ddd
// 00402ddf: JMP 0x00402d7a
//   XREF to: 00402d7a (UNCONDITIONAL_JUMP)
// 00402de1: TEST AL,0x2
//   Label: LAB_00402de1
// 00402de3: JZ 0x00402e0e
//   XREF to: 00402e0e (CONDITIONAL_JUMP)
// 00402de5: TEST ESI,ESI
// 00402de7: JZ 0x00402e08
//   XREF to: 00402e08 (CONDITIONAL_JUMP)
// 00402de9: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x18] (READ)
// 00402ded: MOV EDX,0x10000
// 00402df2: MOV EBX,ESI
// 00402df4: SUB EAX,EBP
// 00402df6: IMUL EDX
// 00402df8: IDIV EBX
// 00402dfa: MOV EDX,ECX
// 00402dfc: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00402e00: IMUL EDX
// 00402e02: SHRD EAX,EDX,0x10
// 00402e06: ADD EBX,EAX
// 00402e08: MOV EDI,dword ptr [ESP + 0x38]
//   Label: LAB_00402e08
//   XREF to: Stack[0x18] (READ)
// 00402e0c: JMP 0x00402da5
//   XREF to: 00402da5 (UNCONDITIONAL_JUMP)
// 00402e0e: TEST AL,0x4
//   Label: LAB_00402e0e
// 00402e10: JZ 0x00402e3f
//   XREF to: 00402e3f (CONDITIONAL_JUMP)
// 00402e12: TEST ECX,ECX
// 00402e14: JZ 0x00402e36
//   XREF to: 00402e36 (CONDITIONAL_JUMP)
// 00402e16: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x1c] (READ)
// 00402e1a: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00402e1e: MOV EDX,0x10000
// 00402e23: SUB EAX,EBX
// 00402e25: MOV EBX,ECX
// 00402e27: IMUL EDX
// 00402e29: IDIV EBX
// 00402e2b: MOV EDX,ESI
// 00402e2d: IMUL EDX
// 00402e2f: SHRD EAX,EDX,0x10
// 00402e33: LEA EDI,[EAX + EBP*0x1]
// 00402e36: MOV EBX,dword ptr [ESP + 0x3c]
//   Label: LAB_00402e36
//   XREF to: Stack[0x1c] (READ)
// 00402e3a: JMP 0x00402da5
//   XREF to: 00402da5 (UNCONDITIONAL_JUMP)
// 00402e3f: TEST AL,0x8
//   Label: LAB_00402e3f
// 00402e41: JZ 0x00402da5
//   XREF to: 00402da5 (CONDITIONAL_JUMP)
// 00402e47: TEST ECX,ECX
// 00402e49: JZ 0x00402e6b
//   XREF to: 00402e6b (CONDITIONAL_JUMP)
// 00402e4b: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 00402e4f: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00402e53: MOV EBX,ECX
// 00402e55: SUB EAX,EDX
// 00402e57: MOV EDX,0x10000
// 00402e5c: IMUL EDX
// 00402e5e: IDIV EBX
// 00402e60: MOV EDX,ESI
// 00402e62: IMUL EDX
// 00402e64: SHRD EAX,EDX,0x10
// 00402e68: LEA EDI,[EAX + EBP*0x1]
// 00402e6b: MOV EBX,dword ptr [ESP + 0x34]
//   Label: LAB_00402e6b
//   XREF to: Stack[0x14] (READ)
// 00402e6f: JMP 0x00402da5
//   XREF to: 00402da5 (UNCONDITIONAL_JUMP)
// 00402e74: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_00402e74
//   XREF to: Stack[0x20] (READ)
// 00402e78: PUSH EAX
// 00402e79: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x1c] (READ)
// 00402e7d: PUSH EDX
// 00402e7e: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x18] (READ)
// 00402e82: PUSH ECX
// 00402e83: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x14] (READ)
// 00402e87: PUSH ESI
// 00402e88: PUSH EDI
// 00402e89: PUSH EBX
// 00402e8a: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[0xc] (WRITE)
// 00402e8e: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[0x10] (WRITE)
// 00402e92: CALL engine_2d.c_computeOutcode_FUN_00402c10
//   XREF to: 00402c10 (UNCONDITIONAL_CALL)
// 00402e97: ADD ESP,0x18
// 00402e9a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00402e9e: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00402e9e
//   XREF to: Stack[-0x1c] (READ)
// 00402ea2: INC EAX
// 00402ea3: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00402ea7: CMP EAX,0x64
// 00402eaa: JL 0x00402d01
//   XREF to: 00402d01 (CONDITIONAL_JUMP)
// 00402eb0: JMP 0x00402d2a
//   XREF to: 00402d2a (UNCONDITIONAL_JUMP)
// 00402eb5: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_00402eb5
//   XREF to: Stack[0x10] (READ)
// 00402eb9: PUSH EDX
// 00402eba: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 00402ebe: PUSH ECX
// 00402ebf: PUSH EBP
// 00402ec0: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00402ec4: PUSH EBX
// 00402ec5: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 00402eca: ADD ESP,0x10
// 00402ecd: ADD ESP,0x10
// 00402ed0: POP EBP
// 00402ed1: POP EDI
// 00402ed2: POP ESI
// 00402ed3: POP EBX
// 00402ed4: RET
