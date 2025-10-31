// Name: core_setdir.cpp_CZThumb_render_FUN_00574f20
// Address: 00574f20
// Address Range: [[00574f20, 0057509f]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CZThumb_render_FUN_00574f20(CZThumb * this_ptr, int screen_x, int screen_y)
// Cross-references:
//   core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70 (00575f70) at 005760a3 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   undefined4 DAT_00ffffff
//   undefined4 g_ScreenBufferArray[1]
//   undefined4 g_ScreenBufferArray[2]
//   undefined4 UCHAR_ARRAY_02d0101f
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

void __cdecl
core_setdir_cpp_CZThumb_render_FUN_00574f20(CZThumb *this_ptr,int screen_x,int screen_y)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_14;
  
  if ((((-1 < screen_x) && (-1 < screen_y)) && (screen_x + this_ptr->width < g_WindowWidth)) &&
     (this_ptr->height + screen_y < g_WindowHeight)) {
    if (g_BitsPerPixel == 0x20) {
      iVar4 = screen_y * 4;
      for (local_14 = 1; local_1c = iVar4 + 4, local_14 < this_ptr->height + -1;
          local_14 = local_14 + 1) {
        iVar1 = screen_x << 2;
        for (iVar3 = 1; iVar1 = iVar1 + 4, iVar3 < this_ptr->width + -1; iVar3 = iVar3 + 1) {
          uVar2 = (uint)(0xffffff /
                        (ulonglong)
                        (*(int *)((int)this_ptr->zbuffer_data +
                                 (local_14 * this_ptr->width + iVar3) * 4) + 1));
          if (0xff < uVar2) {
            uVar2 = 0xff;
          }
          *(uint *)(*(int *)((int)g_ScreenBufferArray + iVar4 + 4) + iVar1) = uVar2 * 0x10101;
        }
        iVar4 = local_1c;
      }
    }
    else {
      local_20 = screen_y + 1;
      for (iVar4 = 1; iVar4 < this_ptr->height + -1; iVar4 = iVar4 + 1) {
        iVar3 = 1;
        iVar1 = screen_x;
        while( true ) {
          iVar1 = iVar1 + 1;
          if (this_ptr->width + -1 <= iVar3) break;
          uVar2 = (uint)(0xffffff /
                        (ulonglong)
                        (*(int *)((int)this_ptr->zbuffer_data +
                                 (this_ptr->width * iVar4 + iVar3) * 4) + 1));
          if (0xff < uVar2) {
            uVar2 = 0xff;
          }
          g_ActiveRenderColor = (int)g_ColorCubeLookup[(uVar2 >> 3) * 0x421];
          iVar3 = iVar3 + 1;
          engine_2d_c_plotPixel_FUN_00401140(iVar1,local_20);
        }
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}


// Assembly code:
// 00574f20: PUSH EBX
//   Label: core_setdir.cpp_CZThumb_render_FUN_00574f20
// 00574f21: PUSH ESI
// 00574f22: PUSH EDI
// 00574f23: PUSH EBP
// 00574f24: SUB ESP,0x10
// 00574f27: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00574f2b: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00574f2f: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00574f33: TEST EDX,EDX
// 00574f35: JL 0x00575098
//   XREF to: 00575098 (CONDITIONAL_JUMP)
// 00574f3b: TEST EAX,EAX
// 00574f3d: JL 0x00575098
//   XREF to: 00575098 (CONDITIONAL_JUMP)
// 00574f43: MOV ECX,dword ptr [EBX]
// 00574f45: MOV ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00574f4b: ADD EDX,ECX
// 00574f4d: CMP EDX,ESI
// 00574f4f: JGE 0x00575098
//   XREF to: 00575098 (CONDITIONAL_JUMP)
// 00574f55: MOV EDX,dword ptr [EBX + 0x4]
// 00574f58: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00574f5e: ADD EDX,EAX
// 00574f60: CMP EDX,EDI
// 00574f62: JGE 0x00575098
//   XREF to: 00575098 (CONDITIONAL_JUMP)
// 00574f68: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00574f6f: JNZ 0x0057500a
//   XREF to: 0057500a (CONDITIONAL_JUMP)
// 00574f75: SHL EAX,0x2
// 00574f78: MOV EDX,0x1
// 00574f7d: ADD EAX,0x4
// 00574f80: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00574f84: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00574f88: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00574f88
// 00574f8b: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00574f8f: DEC EAX
// 00574f90: CMP EAX,EDX
// 00574f92: JLE 0x00575098
//   XREF to: 00575098 (CONDITIONAL_JUMP)
// 00574f98: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00574f9c: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00574fa0: SHL EAX,0x2
// 00574fa3: MOV ECX,0x1
// 00574fa8: LEA ESI,[EAX + 0x4]
// 00574fab: MOV EAX,dword ptr [EBX]
//   Label: LAB_00574fab
// 00574fad: DEC EAX
// 00574fae: CMP ECX,EAX
// 00574fb0: JL 0x00574fc8
//   XREF to: 00574fc8 (CONDITIONAL_JUMP)
// 00574fb2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00574fb6: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00574fba: INC ESI
// 00574fbb: ADD ECX,0x4
// 00574fbe: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00574fc2: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00574fc6: JMP 0x00574f88
//   XREF to: 00574f88 (UNCONDITIONAL_JUMP)
// 00574fc8: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00574fc8
//   XREF to: Stack[-0x14] (READ)
// 00574fcc: IMUL EAX,dword ptr [EBX]
// 00574fcf: MOV EDI,dword ptr [EBX + 0x24]
// 00574fd2: ADD EAX,ECX
// 00574fd4: XOR EDX,EDX
// 00574fd6: MOV EDI,dword ptr [EDI + EAX*0x4]
// 00574fd9: MOV EAX,0xffffff
// 00574fde: INC EDI
// 00574fdf: DIV EDI
// 00574fe1: CMP EAX,0xff
// 00574fe6: JBE 0x00574fed
//   XREF to: 00574fed (CONDITIONAL_JUMP)
// 00574fe8: MOV EAX,0xff
// 00574fed: MOV EDI,dword ptr [EBP + 0x2cf6a9c]
//   Label: LAB_00574fed
//   XREF to: 02cf6aa0 (DATA)
//   XREF to: 02cf6aa4 (DATA)
// 00574ff3: LEA EDX,[EDI + ESI*0x1]
// 00574ff6: MOV EDI,EAX
// 00574ff8: SHL EDI,0x8
// 00574ffb: ADD EDI,EAX
// 00574ffd: SHL EAX,0x10
// 00575000: INC ECX
// 00575001: ADD EDI,EAX
// 00575003: ADD ESI,0x4
// 00575006: MOV dword ptr [EDX],EDI
//   XREF to: 00ffffff (DATA)
// 00575008: JMP 0x00574fab
//   XREF to: 00574fab (UNCONDITIONAL_JUMP)
// 0057500a: MOV EBP,0x1
//   Label: LAB_0057500a
// 0057500f: ADD EAX,EBP
// 00575011: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 00575014: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00575014
// 00575017: DEC EAX
// 00575018: CMP EBP,EAX
// 0057501a: JGE 0x00575098
//   XREF to: 00575098 (CONDITIONAL_JUMP)
// 00575020: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00575023: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00575027: MOV ESI,0x1
// 0057502c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00575030: ADD EDI,ESI
// 00575032: MOV EAX,dword ptr [EBX]
//   Label: LAB_00575032
// 00575034: DEC EAX
// 00575035: CMP ESI,EAX
// 00575037: JL 0x00575043
//   XREF to: 00575043 (CONDITIONAL_JUMP)
// 00575039: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0057503c: INC ECX
// 0057503d: INC EBP
// 0057503e: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x20] (DATA)
// 00575041: JMP 0x00575014
//   XREF to: 00575014 (UNCONDITIONAL_JUMP)
// 00575043: MOV EAX,dword ptr [EBX]
//   Label: LAB_00575043
// 00575045: IMUL EAX,EBP
// 00575048: MOV EDX,dword ptr [EBX + 0x24]
// 0057504b: ADD EAX,ESI
// 0057504d: MOV ECX,dword ptr [EDX + EAX*0x4]
// 00575050: MOV EAX,0xffffff
// 00575055: INC ECX
// 00575056: XOR EDX,EDX
// 00575058: DIV ECX
// 0057505a: CMP EAX,0xff
// 0057505f: JBE 0x00575066
//   XREF to: 00575066 (CONDITIONAL_JUMP)
// 00575061: MOV EAX,0xff
// 00575066: SHR EAX,0x3
//   Label: LAB_00575066
// 00575069: MOV EDX,EAX
// 0057506b: MOV ECX,EAX
// 0057506d: SHL EDX,0xa
// 00575070: SHL ECX,0x5
// 00575073: ADD EDX,ECX
// 00575075: MOV AL,byte ptr [EDX + EAX*0x1 + 0x2cf9020]
//   XREF to: 02d0101f (READ)
// 0057507c: AND EAX,0xff
// 00575081: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00575086: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0057508a: PUSH EAX
// 0057508b: PUSH EDI
// 0057508c: INC ESI
// 0057508d: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00575092: ADD ESP,0x8
// 00575095: INC EDI
// 00575096: JMP 0x00575032
//   XREF to: 00575032 (UNCONDITIONAL_JUMP)
// 00575098: ADD ESP,0x10
//   Label: LAB_00575098
// 0057509b: POP EBP
// 0057509c: POP EDI
// 0057509d: POP ESI
// 0057509e: POP EBX
// 0057509f: RET
