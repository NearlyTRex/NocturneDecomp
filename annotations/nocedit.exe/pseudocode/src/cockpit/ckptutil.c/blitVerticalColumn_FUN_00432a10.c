// Name: cockpit_ckptutil.c_blitVerticalColumn_FUN_00432a10
// Address: 00432a10
// Address Range: [[00432a10, 00432ae7]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitVerticalColumn_FUN_00432a10(void * sprite_data, void * unused_param, int start_x, int start_y, int end_x, int end_y)
// Globals:
//   int g_WindowWidth = 0x140
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
// Function calls:
//   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitVerticalColumn_FUN_00432a10
          (void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y)

{
  int *piVar1;
  ColorConversionFunc *pCVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    iVar4 = start_y * 4;
    if (g_BitsPerPixel == 8) {
      if (start_y < end_y) {
        do {
          iVar3 = g_WindowWidth * start_y;
          piVar1 = (int *)((int)g_ScreenBufferArray + iVar4);
          iVar4 = iVar4 + 4;
          start_y = start_y + 1;
          (*pCVar2)((void *)(*piVar1 + start_x),(void *)((int)unused_param + iVar3 + start_x),
                    local_14);
        } while (start_y < end_y);
        return;
      }
    }
    else if (start_y < end_y) {
      do {
        iVar3 = g_WindowWidth * start_y;
        piVar1 = (int *)((int)g_ScreenBufferArray + iVar4);
        iVar4 = iVar4 + 4;
        start_y = start_y + 1;
        (*pCVar2)((void *)(*piVar1 + start_x * 2),(void *)(iVar3 + start_x + (int)unused_param),
                  local_14);
      } while (start_y < end_y);
      return;
    }
  }
  return;
}


// Assembly code:
// 00432a10: PUSH EBX
//   Label: cockpit_ckptutil.c_blitVerticalColumn_FUN_00432a10
// 00432a11: PUSH ESI
// 00432a12: PUSH EDI
// 00432a13: PUSH EBP
// 00432a14: SUB ESP,0xc
// 00432a17: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00432a1b: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 00432a1f: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x18] (READ)
// 00432a23: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x14] (READ)
// 00432a27: SUB EAX,EDI
// 00432a29: INC EAX
// 00432a2a: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00432a2e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00432a32: TEST EDX,EDX
// 00432a34: JNZ 0x00432a48
//   XREF to: 00432a48 (CONDITIONAL_JUMP)
// 00432a36: LEA EAX,[EAX]
// 00432a3c: LEA EDX,[EDX]
// 00432a40: ADD ESP,0xc
//   Label: LAB_00432a40
// 00432a43: POP EBP
// 00432a44: POP EDI
// 00432a45: POP ESI
// 00432a46: POP EBX
// 00432a47: RET
// 00432a48: CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   Label: LAB_00432a48
//   XREF to: 00431760 (UNCONDITIONAL_CALL)
// 00432a4d: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00432a53: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00432a57: LEA EAX,[ESI*0x4 + 0x0]
// 00432a5e: CMP ECX,0x8
// 00432a61: JNZ 0x00432aa1
//   XREF to: 00432aa1 (CONDITIONAL_JUMP)
// 00432a63: MOV EBX,ESI
// 00432a65: CMP ESI,EBP
// 00432a67: JGE 0x00432a40
//   XREF to: 00432a40 (CONDITIONAL_JUMP)
// 00432a69: MOV ESI,EAX
// 00432a6b: MOV EAX,[0x00679394]
//   Label: LAB_00432a6b
//   XREF to: 00679394 (READ)
// 00432a70: IMUL EAX,EBX
// 00432a73: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00432a77: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00432a7b: ADD EAX,EDI
// 00432a7d: PUSH ECX
// 00432a7e: ADD EDX,EAX
// 00432a80: MOV EAX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00432a86: PUSH EDX
// 00432a87: ADD EAX,EDI
// 00432a89: PUSH EAX
// 00432a8a: ADD ESI,0x4
// 00432a8d: INC EBX
// 00432a8e: CALL dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00432a92: ADD ESP,0xc
// 00432a95: CMP EBX,EBP
// 00432a97: JL 0x00432a6b
//   XREF to: 00432a6b (CONDITIONAL_JUMP)
// 00432a99: ADD ESP,0xc
// 00432a9c: POP EBP
// 00432a9d: POP EDI
// 00432a9e: POP ESI
// 00432a9f: POP EBX
// 00432aa0: RET
// 00432aa1: MOV EBX,ESI
//   Label: LAB_00432aa1
// 00432aa3: CMP ESI,EBP
// 00432aa5: JGE 0x00432a40
//   XREF to: 00432a40 (CONDITIONAL_JUMP)
// 00432aa7: LEA EDX,[EDI + EDI*0x1]
// 00432aaa: MOV ESI,EAX
// 00432aac: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 00432aaf: MOV EAX,[0x00679394]
//   Label: LAB_00432aaf
//   XREF to: 00679394 (READ)
// 00432ab4: IMUL EAX,EBX
// 00432ab7: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00432abb: ADD EAX,EDI
// 00432abd: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00432ac0: ADD EAX,EDX
// 00432ac2: MOV EDX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00432ac8: ADD EDX,ECX
// 00432aca: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00432ace: PUSH ECX
// 00432acf: PUSH EAX
// 00432ad0: PUSH EDX
// 00432ad1: ADD ESI,0x4
// 00432ad4: INC EBX
// 00432ad5: CALL dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00432ad9: ADD ESP,0xc
// 00432adc: CMP EBX,EBP
// 00432ade: JL 0x00432aaf
//   XREF to: 00432aaf (CONDITIONAL_JUMP)
// 00432ae0: ADD ESP,0xc
// 00432ae3: POP EBP
// 00432ae4: POP EDI
// 00432ae5: POP ESI
// 00432ae6: POP EBX
// 00432ae7: RET
