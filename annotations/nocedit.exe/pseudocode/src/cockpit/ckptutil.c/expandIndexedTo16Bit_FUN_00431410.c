// Name: cockpit_ckptutil.c_expandIndexedTo16Bit_FUN_00431410
// Address: 00431410
// Address Range: [[00431410, 004314f9]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_expandIndexedTo16Bit_FUN_00431410(void * output_buffer, void * indexed_input_buffer, int pixel_count)
// Globals:
//   uint g_CPUFamily = 0x5
//   ushort[256] g_Hardware16BitPalette

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_expandIndexedTo16Bit_FUN_00431410
          (void *output_buffer,void *indexed_input_buffer,int pixel_count)

{
  byte *pbVar1;
  byte bVar2;
  
  if (g_CPUFamily < 6) {
    if (((uint)output_buffer & 2) != 0) {
                    /* WARNING: Load size is inaccurate */
      *(ushort *)output_buffer = g_Hardware16BitPalette[*indexed_input_buffer];
      output_buffer = (void *)((int)output_buffer + 2);
      indexed_input_buffer = (void *)((int)indexed_input_buffer + 1);
      pixel_count = pixel_count + -1;
    }
    while( true ) {
      if (pixel_count < 2) break;
                    /* WARNING: Load size is inaccurate */
      *(uint *)output_buffer =
           CONCAT22(g_Hardware16BitPalette[*(byte *)((int)indexed_input_buffer + 1)],
                    g_Hardware16BitPalette[*indexed_input_buffer]);
      indexed_input_buffer = (void *)((int)indexed_input_buffer + 2);
      output_buffer = (void *)((int)output_buffer + 4);
      pixel_count = pixel_count + -2;
    }
    if (pixel_count + -2 == -1) {
                    /* WARNING: Load size is inaccurate */
      *(ushort *)output_buffer = g_Hardware16BitPalette[*indexed_input_buffer];
    }
    return;
  }
  if (((uint)output_buffer & 2) != 0) {
                    /* WARNING: Load size is inaccurate */
    *(ushort *)output_buffer = g_Hardware16BitPalette[*indexed_input_buffer];
    output_buffer = (void *)((int)output_buffer + 2);
    indexed_input_buffer = (void *)((int)indexed_input_buffer + 1);
    pixel_count = pixel_count + -1;
  }
  while (1 < pixel_count) {
    pbVar1 = (byte *)((int)indexed_input_buffer + 1);
                    /* WARNING: Load size is inaccurate */
    bVar2 = *indexed_input_buffer;
    indexed_input_buffer = (void *)((int)indexed_input_buffer + 2);
    *(uint *)output_buffer = CONCAT22(g_Hardware16BitPalette[*pbVar1],g_Hardware16BitPalette[bVar2])
    ;
    output_buffer = (void *)((int)output_buffer + 4);
    pixel_count = pixel_count + -2;
  }
  if (pixel_count + -2 == -1) {
                    /* WARNING: Load size is inaccurate */
    *(ushort *)output_buffer = g_Hardware16BitPalette[*indexed_input_buffer];
  }
  return;
}


// Assembly code:
// 00431410: PUSH EBP
//   Label: cockpit_ckptutil.c_expandIndexedTo16Bit_FUN_00431410
// 00431411: MOV EBP,ESP
// 00431413: PUSH ESI
// 00431414: PUSH EDI
// 00431415: CMP dword ptr [0x006793b0],0x6
//   XREF to: 006793b0 (READ)
// 0043141c: JNC 0x00431489
//   XREF to: 00431489 (CONDITIONAL_JUMP)
// 0043141e: PUSH EAX
// 0043141f: PUSH EBX
// 00431420: PUSH ECX
// 00431421: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00431424: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00431427: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0043142a: MOV EAX,0x0
// 0043142f: TEST EDI,0x2
// 00431435: JZ 0x00431449
//   XREF to: 00431449 (CONDITIONAL_JUMP)
// 00431437: MOV AL,byte ptr [ESI]
// 00431439: MOV BX,word ptr [EAX*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 00431441: MOV word ptr [EDI],BX
// 00431444: ADD EDI,0x2
// 00431447: INC ESI
// 00431448: DEC ECX
// 00431449: SUB ECX,0x2
//   Label: LAB_00431449
// 0043144c: JL 0x00431470
//   XREF to: 00431470 (CONDITIONAL_JUMP)
// 0043144e: MOV AL,byte ptr [ESI + 0x1]
// 00431451: MOV BX,word ptr [EAX*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 00431459: SHL EBX,0x10
// 0043145c: MOV AL,byte ptr [ESI]
// 0043145e: MOV BX,word ptr [EAX*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 00431466: MOV dword ptr [EDI],EBX
// 00431468: ADD ESI,0x2
// 0043146b: ADD EDI,0x4
// 0043146e: JMP 0x00431449
//   XREF to: 00431449 (UNCONDITIONAL_JUMP)
// 00431470: CMP ECX,-0x1
//   Label: LAB_00431470
// 00431473: JNZ 0x00431482
//   XREF to: 00431482 (CONDITIONAL_JUMP)
// 00431475: MOV AL,byte ptr [ESI]
// 00431477: MOV BX,word ptr [EAX*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 0043147f: MOV word ptr [EDI],BX
// 00431482: POP ECX
//   Label: LAB_00431482
// 00431483: POP EBX
// 00431484: POP EAX
// 00431485: POP EDI
// 00431486: POP ESI
// 00431487: LEAVE
// 00431488: RET
// 00431489: PUSH EAX
//   Label: LAB_00431489
// 0043148a: PUSH EBX
// 0043148b: PUSH ECX
// 0043148c: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043148f: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00431492: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00431495: MOV EAX,0x0
// 0043149a: TEST EDI,0x2
// 004314a0: JZ 0x004314b5
//   XREF to: 004314b5 (CONDITIONAL_JUMP)
// 004314a2: MOVZX EAX,byte ptr [ESI]
// 004314a5: MOV BX,word ptr [EAX*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 004314ad: MOV word ptr [EDI],BX
// 004314b0: ADD EDI,0x2
// 004314b3: INC ESI
// 004314b4: DEC ECX
// 004314b5: SUB ECX,0x2
//   Label: LAB_004314b5
// 004314b8: JL 0x004314e0
//   XREF to: 004314e0 (CONDITIONAL_JUMP)
// 004314ba: MOVZX EAX,byte ptr [ESI + 0x1]
// 004314be: MOVZX EBX,word ptr [EAX*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 004314c6: MOVZX EAX,byte ptr [ESI]
// 004314c9: SHL EBX,0x10
// 004314cc: MOVZX EAX,word ptr [EAX*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 004314d4: OR EBX,EAX
// 004314d6: ADD ESI,0x2
// 004314d9: MOV dword ptr [EDI],EBX
// 004314db: ADD EDI,0x4
// 004314de: JMP 0x004314b5
//   XREF to: 004314b5 (UNCONDITIONAL_JUMP)
// 004314e0: CMP ECX,-0x1
//   Label: LAB_004314e0
// 004314e3: JNZ 0x004314f3
//   XREF to: 004314f3 (CONDITIONAL_JUMP)
// 004314e5: MOVZX EAX,byte ptr [ESI]
// 004314e8: MOV BX,word ptr [EAX*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 004314f0: MOV word ptr [EDI],BX
// 004314f3: POP ECX
//   Label: LAB_004314f3
// 004314f4: POP EBX
// 004314f5: POP EAX
// 004314f6: POP EDI
// 004314f7: POP ESI
// 004314f8: LEAVE
// 004314f9: RET
