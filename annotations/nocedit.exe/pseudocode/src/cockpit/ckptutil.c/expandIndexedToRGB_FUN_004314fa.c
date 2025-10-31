// Name: cockpit_ckptutil.c_expandIndexedToRGB_FUN_004314fa
// Address: 004314fa
// Address Range: [[004314fa, 00431527]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_expandIndexedToRGB_FUN_004314fa(void * output_buffer, void * input_buffer, int pixel_count)
// Cross-references:
//   cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_00431770 (00431770) at 00431770 [DATA]
// Globals:
//   uint[256] g_Hardware32BitPalette

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_expandIndexedToRGB_FUN_004314fa
          (void *output_buffer,void *input_buffer,int pixel_count)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  
  do {
                    /* WARNING: Load size is inaccurate */
    bVar1 = *input_buffer;
    input_buffer = (void *)((int)input_buffer + 1);
    *(uint *)output_buffer = g_Hardware32BitPalette[bVar1];
    output_buffer = (void *)((int)output_buffer + 4);
    iVar3 = pixel_count + -1;
    bVar2 = 0 < pixel_count;
    pixel_count = iVar3;
  } while (iVar3 != 0 && bVar2);
  return;
}


// Assembly code:
// 004314fa: PUSH EBP
//   Label: cockpit_ckptutil.c_expandIndexedToRGB_FUN_004314fa
// 004314fb: MOV EBP,ESP
// 004314fd: PUSH ESI
// 004314fe: PUSH EDI
// 004314ff: PUSH EAX
// 00431500: PUSH ECX
// 00431501: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00431504: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00431507: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0043150a: MOV EAX,0x0
// 0043150f: MOVZX EAX,byte ptr [ESI]
//   Label: LAB_0043150f
// 00431512: INC ESI
// 00431513: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 0043151a: MOV dword ptr [EDI],EAX
// 0043151c: ADD EDI,0x4
// 0043151f: DEC ECX
// 00431520: JG 0x0043150f
//   XREF to: 0043150f (CONDITIONAL_JUMP)
// 00431522: POP ECX
// 00431523: POP EAX
// 00431524: POP EDI
// 00431525: POP ESI
// 00431526: LEAVE
// 00431527: RET
