// Name: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20
// Address: 00487e20
// Address Range: [[00487e20, 00488100]]
// Convention: __cdecl
// Signature: int cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20(CDrawSurface * this_ptr, int * x1, int * y1, int * x2, int * y2, int clip_left, int clip_top, int clip_right, int clip_bottom)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30 (00487a30) at 00487a91 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990 (00487990) at 004879f1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_drawsurf_cpp_00621d6e
//   TerminatedCString s_s_2d_line_clipping_excee_00621d86
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl
cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_00487e20
          (CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,
          int clip_right,int clip_bottom)

{
  longlong lVar1;
  int in_EAX;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int in_EDX;
  byte bVar5;
  int iVar6;
  int local_40;
  int local_3c;
  int local_20;
  
  bVar2 = clip_bottom < *y1;
  if (*y1 < clip_top) {
    bVar2 = bVar2 | 2;
  }
  if (clip_right < *x1) {
    bVar2 = bVar2 | 4;
  }
  if (*x1 < clip_left) {
    bVar2 = bVar2 | 8;
  }
  bVar3 = clip_bottom < *y2;
  if (*y2 < clip_top) {
    bVar3 = bVar3 | 2;
  }
  if (clip_right < *x2) {
    bVar3 = bVar3 | 4;
  }
  if (*x2 < clip_left) {
    bVar3 = bVar3 | 8;
  }
  local_20 = 0;
  do {
    iVar4 = *x2 - *x1;
    iVar6 = *y2 - *y1;
    if ((bVar2 == 0) && (bVar3 == 0)) {
      local_40 = 1;
      break;
    }
    if ((bVar3 & bVar2) != 0) {
      local_40 = 0;
      break;
    }
    bVar5 = bVar2;
    if (bVar2 == 0) {
      bVar5 = bVar3;
    }
    if ((bVar5 & 1) == 0) {
      if ((bVar5 & 2) == 0) {
        if ((bVar5 & 4) == 0) {
          if (((bVar5 & 8) != 0) && (in_EDX = clip_left, iVar4 != 0)) {
            lVar1 = (longlong)(int)(((longlong)(clip_left - *x1) * 0x10000) / (longlong)iVar4) *
                    (longlong)iVar6;
            in_EAX = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + *y1;
          }
        }
        else {
          in_EDX = clip_right;
          if (iVar4 != 0) {
            lVar1 = (longlong)(int)(((longlong)(clip_right - *x1) * 0x10000) / (longlong)iVar4) *
                    (longlong)iVar6;
            in_EAX = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + *y1;
          }
        }
      }
      else {
        in_EAX = clip_top;
        if (iVar6 != 0) {
          lVar1 = (longlong)(int)(((longlong)(clip_top - *y1) * 0x10000) / (longlong)iVar6) *
                  (longlong)iVar4;
          in_EDX = *x1 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
      }
    }
    else {
      in_EAX = clip_bottom;
      if (iVar6 != 0) {
        lVar1 = (longlong)(int)(((longlong)(clip_bottom - *y1) * 0x10000) / (longlong)iVar6) *
                (longlong)iVar4;
        in_EDX = *x1 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
    }
    if (bVar2 == 0) {
      *x2 = in_EDX;
      *y2 = in_EAX;
      bVar3 = clip_bottom < in_EAX;
      if (in_EAX < clip_top) {
        bVar3 = bVar3 | 2;
      }
      if (clip_right < *x2) {
        bVar3 = bVar3 | 4;
      }
      if (*x2 < clip_left) {
        bVar3 = bVar3 | 8;
      }
    }
    else {
      *x1 = in_EDX;
      *y1 = in_EAX;
      local_3c = clip_top;
      bVar2 = clip_bottom < in_EAX;
      if (in_EAX < clip_top) {
        bVar2 = bVar2 | 2;
      }
      if (clip_right < *x1) {
        bVar2 = bVar2 | 4;
      }
      if (*x1 < clip_left) {
        bVar2 = bVar2 | 8;
      }
    }
    local_20 = local_20 + 1;
  } while (local_20 < 100);
  if (local_20 == 100) {
    g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
    g_CurrentLineNumber = 0x369;
    core_main_c_displayErrorAndQuit_FUN_00506f10("2d line clipping exceeded max iterations");
    return local_3c;
  }
  return local_40;
}


// Assembly code:
// 00487e20: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20
// 00487e21: PUSH ESI
// 00487e22: PUSH EDI
// 00487e23: PUSH EBP
// 00487e24: SUB ESP,0x48
// 00487e27: MOV EBP,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x8] (READ)
// 00487e2b: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[0xc] (READ)
// 00487e2f: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x18] (READ)
// 00487e33: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 00487e37: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x1c] (READ)
// 00487e3b: MOV EBX,dword ptr [EDI]
// 00487e3d: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 00487e41: MOV ECX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x20] (READ)
// 00487e45: MOV ESI,dword ptr [EBP]
// 00487e48: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 00487e4c: XOR ECX,ECX
// 00487e4e: CMP EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x24] (READ)
// 00487e52: JLE 0x00487e59
//   XREF to: 00487e59 (CONDITIONAL_JUMP)
// 00487e54: MOV ECX,0x1
// 00487e59: CMP EBX,dword ptr [ESP + 0x4]
//   Label: LAB_00487e59
//   XREF to: Stack[-0x54] (READ)
// 00487e5d: JGE 0x00487e62
//   XREF to: 00487e62 (CONDITIONAL_JUMP)
// 00487e5f: OR CL,0x2
// 00487e62: CMP ESI,dword ptr [ESP + 0x14]
//   Label: LAB_00487e62
//   XREF to: Stack[-0x44] (READ)
// 00487e66: JLE 0x00487e6b
//   XREF to: 00487e6b (CONDITIONAL_JUMP)
// 00487e68: OR CL,0x4
// 00487e6b: CMP ESI,dword ptr [ESP + 0xc]
//   Label: LAB_00487e6b
//   XREF to: Stack[-0x4c] (READ)
// 00487e6f: JGE 0x00487e74
//   XREF to: 00487e74 (CONDITIONAL_JUMP)
// 00487e71: OR CL,0x8
// 00487e74: MOV ESI,dword ptr [ESP + 0x68]
//   Label: LAB_00487e74
//   XREF to: Stack[0x10] (READ)
// 00487e78: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00487e7c: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x18] (READ)
// 00487e80: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x14] (READ)
// 00487e84: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 00487e88: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x1c] (READ)
// 00487e8c: MOV ESI,dword ptr [ESI]
// 00487e8e: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 00487e92: MOV ECX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x20] (READ)
// 00487e96: MOV EBX,dword ptr [EBX]
// 00487e98: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x58] (DATA)
// 00487e9b: XOR ECX,ECX
// 00487e9d: CMP EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x24] (READ)
// 00487ea1: JLE 0x00487ea8
//   XREF to: 00487ea8 (CONDITIONAL_JUMP)
// 00487ea3: MOV ECX,0x1
// 00487ea8: CMP EBX,dword ptr [ESP + 0x10]
//   Label: LAB_00487ea8
//   XREF to: Stack[-0x48] (READ)
// 00487eac: JGE 0x00487eb1
//   XREF to: 00487eb1 (CONDITIONAL_JUMP)
// 00487eae: OR CL,0x2
// 00487eb1: CMP ESI,dword ptr [ESP]
//   Label: LAB_00487eb1
//   XREF to: Stack[-0x58] (DATA)
// 00487eb4: JLE 0x00487eb9
//   XREF to: 00487eb9 (CONDITIONAL_JUMP)
// 00487eb6: OR CL,0x4
// 00487eb9: CMP ESI,dword ptr [ESP + 0x8]
//   Label: LAB_00487eb9
//   XREF to: Stack[-0x50] (READ)
// 00487ebd: JL 0x00487f0a
//   XREF to: 00487f0a (CONDITIONAL_JUMP)
// 00487ebf: XOR ESI,ESI
//   Label: LAB_00487ebf
// 00487ec1: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00487ec5: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00487ec9: MOV ECX,dword ptr [ESP + 0x68]
//   Label: LAB_00487ec9
//   XREF to: Stack[0x10] (READ)
// 00487ecd: MOV ESI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x14] (READ)
// 00487ed1: MOV EBX,dword ptr [EBP]
// 00487ed4: MOV ECX,dword ptr [ECX]
// 00487ed6: MOV ESI,dword ptr [ESI]
// 00487ed8: SUB ECX,EBX
// 00487eda: SUB ESI,dword ptr [EDI]
// 00487edc: CMP dword ptr [ESP + 0x44],0x0
//   XREF to: Stack[-0x14] (READ)
// 00487ee1: JZ 0x00487f0f
//   XREF to: 00487f0f (CONDITIONAL_JUMP)
// 00487ee3: MOV EBX,dword ptr [ESP + 0x44]
//   Label: LAB_00487ee3
//   XREF to: Stack[-0x14] (READ)
// 00487ee7: TEST dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x1c] (READ)
// 00487eeb: JZ 0x00487f20
//   XREF to: 00487f20 (CONDITIONAL_JUMP)
// 00487eed: XOR ESI,ESI
// 00487eef: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 00487ef3: CMP dword ptr [ESP + 0x38],0x64
//   Label: LAB_00487ef3
//   XREF to: Stack[-0x20] (READ)
// 00487ef8: JZ 0x004880d3
//   XREF to: 004880d3 (CONDITIONAL_JUMP)
// 00487efe: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 00487f02: ADD ESP,0x48
// 00487f05: POP EBP
// 00487f06: POP EDI
// 00487f07: POP ESI
// 00487f08: POP EBX
// 00487f09: RET
// 00487f0a: OR CL,0x8
//   Label: LAB_00487f0a
// 00487f0d: JMP 0x00487ebf
//   XREF to: 00487ebf (UNCONDITIONAL_JUMP)
// 00487f0f: CMP dword ptr [ESP + 0x3c],0x0
//   Label: LAB_00487f0f
//   XREF to: Stack[-0x1c] (READ)
// 00487f14: JNZ 0x00487ee3
//   XREF to: 00487ee3 (CONDITIONAL_JUMP)
// 00487f16: MOV dword ptr [ESP + 0x18],0x1
//   XREF to: Stack[-0x40] (WRITE)
// 00487f1e: JMP 0x00487ef3
//   XREF to: 00487ef3 (UNCONDITIONAL_JUMP)
// 00487f20: TEST EBX,EBX
//   Label: LAB_00487f20
// 00487f22: JZ 0x00487fbf
//   XREF to: 00487fbf (CONDITIONAL_JUMP)
// 00487f28: MOV dword ptr [ESP + 0x40],EBX
//   Label: LAB_00487f28
//   XREF to: Stack[-0x18] (WRITE)
// 00487f2c: MOV BL,byte ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (READ)
// 00487f30: TEST BL,0x1
// 00487f33: JZ 0x00487fc8
//   XREF to: 00487fc8 (CONDITIONAL_JUMP)
// 00487f39: TEST ESI,ESI
// 00487f3b: JZ 0x00487f5d
//   XREF to: 00487f5d (CONDITIONAL_JUMP)
// 00487f3d: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x24] (READ)
// 00487f41: MOV EBX,dword ptr [EDI]
// 00487f43: MOV EDX,0x10000
// 00487f48: SUB EAX,EBX
// 00487f4a: MOV EBX,ESI
// 00487f4c: IMUL EDX
// 00487f4e: IDIV EBX
// 00487f50: MOV EDX,ECX
// 00487f52: IMUL EDX
// 00487f54: SHRD EAX,EDX,0x10
// 00487f58: MOV EDX,dword ptr [EBP]
// 00487f5b: ADD EDX,EAX
// 00487f5d: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_00487f5d
//   XREF to: Stack[0x24] (READ)
// 00487f61: CMP dword ptr [ESP + 0x44],0x0
//   Label: LAB_00487f61
//   XREF to: Stack[-0x14] (READ)
// 00487f66: JZ 0x0048805e
//   XREF to: 0048805e (CONDITIONAL_JUMP)
// 00487f6c: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x18] (READ)
// 00487f70: MOV ESI,EAX
// 00487f72: MOV dword ptr [EBP],EDX
// 00487f75: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00487f79: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x1c] (READ)
// 00487f7d: MOV dword ptr [EDI],EAX
// 00487f7f: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 00487f83: MOV ECX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x20] (READ)
// 00487f87: MOV EBX,dword ptr [EBP]
// 00487f8a: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00487f8e: XOR ECX,ECX
// 00487f90: CMP EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x24] (READ)
// 00487f94: JLE 0x00487f9b
//   XREF to: 00487f9b (CONDITIONAL_JUMP)
// 00487f96: MOV ECX,0x1
// 00487f9b: CMP ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_00487f9b
//   XREF to: Stack[-0x3c] (READ)
// 00487f9f: JGE 0x00487fa4
//   XREF to: 00487fa4 (CONDITIONAL_JUMP)
// 00487fa1: OR CL,0x2
// 00487fa4: CMP EBX,dword ptr [ESP + 0x2c]
//   Label: LAB_00487fa4
//   XREF to: Stack[-0x2c] (READ)
// 00487fa8: JLE 0x00487fad
//   XREF to: 00487fad (CONDITIONAL_JUMP)
// 00487faa: OR CL,0x4
// 00487fad: CMP EBX,dword ptr [ESP + 0x24]
//   Label: LAB_00487fad
//   XREF to: Stack[-0x34] (READ)
// 00487fb1: JGE 0x00487fb6
//   XREF to: 00487fb6 (CONDITIONAL_JUMP)
// 00487fb3: OR CL,0x8
// 00487fb6: MOV dword ptr [ESP + 0x44],ECX
//   Label: LAB_00487fb6
//   XREF to: Stack[-0x14] (WRITE)
// 00487fba: JMP 0x004880bc
//   XREF to: 004880bc (UNCONDITIONAL_JUMP)
// 00487fbf: MOV EBX,dword ptr [ESP + 0x3c]
//   Label: LAB_00487fbf
//   XREF to: Stack[-0x1c] (READ)
// 00487fc3: JMP 0x00487f28
//   XREF to: 00487f28 (UNCONDITIONAL_JUMP)
// 00487fc8: TEST BL,0x2
//   Label: LAB_00487fc8
// 00487fcb: JZ 0x00487ffa
//   XREF to: 00487ffa (CONDITIONAL_JUMP)
// 00487fcd: TEST ESI,ESI
// 00487fcf: JZ 0x00487ff1
//   XREF to: 00487ff1 (CONDITIONAL_JUMP)
// 00487fd1: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x1c] (READ)
// 00487fd5: MOV EDX,dword ptr [EDI]
// 00487fd7: MOV EBX,ESI
// 00487fd9: SUB EAX,EDX
// 00487fdb: MOV EDX,0x10000
// 00487fe0: IMUL EDX
// 00487fe2: IDIV EBX
// 00487fe4: MOV EDX,ECX
// 00487fe6: IMUL EDX
// 00487fe8: SHRD EAX,EDX,0x10
// 00487fec: MOV EDX,dword ptr [EBP]
// 00487fef: ADD EDX,EAX
// 00487ff1: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_00487ff1
//   XREF to: Stack[0x1c] (READ)
// 00487ff5: JMP 0x00487f61
//   XREF to: 00487f61 (UNCONDITIONAL_JUMP)
// 00487ffa: TEST BL,0x4
//   Label: LAB_00487ffa
// 00487ffd: JZ 0x0048802a
//   XREF to: 0048802a (CONDITIONAL_JUMP)
// 00487fff: TEST ECX,ECX
// 00488001: JZ 0x00488021
//   XREF to: 00488021 (CONDITIONAL_JUMP)
// 00488003: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x20] (READ)
// 00488007: MOV EBX,dword ptr [EBP]
// 0048800a: MOV EDX,0x10000
// 0048800f: SUB EAX,EBX
// 00488011: MOV EBX,ECX
// 00488013: IMUL EDX
// 00488015: IDIV EBX
// 00488017: MOV EDX,ESI
// 00488019: IMUL EDX
// 0048801b: SHRD EAX,EDX,0x10
// 0048801f: ADD EAX,dword ptr [EDI]
// 00488021: MOV EDX,dword ptr [ESP + 0x78]
//   Label: LAB_00488021
//   XREF to: Stack[0x20] (READ)
// 00488025: JMP 0x00487f61
//   XREF to: 00487f61 (UNCONDITIONAL_JUMP)
// 0048802a: TEST BL,0x8
//   Label: LAB_0048802a
// 0048802d: JZ 0x00487f61
//   XREF to: 00487f61 (CONDITIONAL_JUMP)
// 00488033: TEST ECX,ECX
// 00488035: JZ 0x00488055
//   XREF to: 00488055 (CONDITIONAL_JUMP)
// 00488037: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x18] (READ)
// 0048803b: MOV EDX,dword ptr [EBP]
// 0048803e: MOV EBX,ECX
// 00488040: SUB EAX,EDX
// 00488042: MOV EDX,0x10000
// 00488047: IMUL EDX
// 00488049: IDIV EBX
// 0048804b: MOV EDX,ESI
// 0048804d: IMUL EDX
// 0048804f: SHRD EAX,EDX,0x10
// 00488053: ADD EAX,dword ptr [EDI]
// 00488055: MOV EDX,dword ptr [ESP + 0x70]
//   Label: LAB_00488055
//   XREF to: Stack[0x18] (READ)
// 00488059: JMP 0x00487f61
//   XREF to: 00487f61 (UNCONDITIONAL_JUMP)
// 0048805e: MOV ECX,dword ptr [ESP + 0x68]
//   Label: LAB_0048805e
//   XREF to: Stack[0x10] (READ)
// 00488062: MOV dword ptr [ECX],EDX
// 00488064: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x14] (READ)
// 00488068: MOV dword ptr [ECX],EAX
// 0048806a: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x18] (READ)
// 0048806e: MOV EBX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x10] (READ)
// 00488072: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00488076: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x1c] (READ)
// 0048807a: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0048807e: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00488082: MOV ECX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x20] (READ)
// 00488086: MOV EBX,dword ptr [EBX]
// 00488088: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0048808c: XOR ECX,ECX
// 0048808e: CMP EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x24] (READ)
// 00488092: JLE 0x00488099
//   XREF to: 00488099 (CONDITIONAL_JUMP)
// 00488094: MOV ECX,0x1
// 00488099: MOV ESI,dword ptr [ESP + 0x34]
//   Label: LAB_00488099
//   XREF to: Stack[-0x24] (READ)
// 0048809d: CMP ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 004880a1: JGE 0x004880a6
//   XREF to: 004880a6 (CONDITIONAL_JUMP)
// 004880a3: OR CL,0x2
// 004880a6: CMP EBX,dword ptr [ESP + 0x30]
//   Label: LAB_004880a6
//   XREF to: Stack[-0x28] (READ)
// 004880aa: JLE 0x004880af
//   XREF to: 004880af (CONDITIONAL_JUMP)
// 004880ac: OR CL,0x4
// 004880af: CMP EBX,dword ptr [ESP + 0x20]
//   Label: LAB_004880af
//   XREF to: Stack[-0x38] (READ)
// 004880b3: JGE 0x004880b8
//   XREF to: 004880b8 (CONDITIONAL_JUMP)
// 004880b5: OR CL,0x8
// 004880b8: MOV dword ptr [ESP + 0x3c],ECX
//   Label: LAB_004880b8
//   XREF to: Stack[-0x1c] (WRITE)
// 004880bc: MOV ECX,dword ptr [ESP + 0x38]
//   Label: LAB_004880bc
//   XREF to: Stack[-0x20] (READ)
// 004880c0: INC ECX
// 004880c1: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004880c5: CMP ECX,0x64
// 004880c8: JL 0x00487ec9
//   XREF to: 00487ec9 (CONDITIONAL_JUMP)
// 004880ce: JMP 0x00487ef3
//   XREF to: 00487ef3 (UNCONDITIONAL_JUMP)
// 004880d3: MOV EBP,0x621d6e
//   Label: LAB_004880d3
//   XREF to: 00621d6e (DATA)
// 004880d8: MOV EAX,0x369
// 004880dd: PUSH 0x621d86
//   XREF to: 00621d86 (DATA)
// 004880e2: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004880e8: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004880ed: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004880f2: ADD ESP,0x4
// 004880f5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 004880f9: ADD ESP,0x48
// 004880fc: POP EBP
// 004880fd: POP EDI
// 004880fe: POP ESI
// 004880ff: POP EBX
// 00488100: RET
