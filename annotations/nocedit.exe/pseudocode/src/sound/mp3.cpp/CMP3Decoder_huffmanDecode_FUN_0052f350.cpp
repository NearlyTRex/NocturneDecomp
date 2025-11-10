// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
// Address: 0052f350
// Address Range: [[0052f350, 0052f5a7]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350(CMP3Decoder * this_ptr, SHuffmanTable * huffman_table, int * x_out, int * y_out, int * v_out, int * w_out)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680 (00531680) at 00531804 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063adf1
//   TerminatedCString s_Illegal_Huffman_code_in__0063ae02
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   char[256] g_CurrentMp3Filename
//   undefined4 g_HuffmanTables[0].table_size
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
//   sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170

#include "nocturne.h"

int __cdecl
sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
          (CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out,
          int *w_out)

{
  int iVar1;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int extraout_EAX_04;
  uint uVar2;
  uint uVar3;
  char *local_14;
  
  uVar3 = 0x80000000;
  uVar2 = 0;
  if (huffman_table == (SHuffmanTable *)0xffffffe0) {
    return 2;
  }
  if (huffman_table->table_size == 0) {
    *y_out = 0;
    *x_out = 0;
    return 0;
  }
  do {
    if (huffman_table->huffman_data[uVar2 * 2] == '\0') {
      *x_out = (int)(uint)(byte)huffman_table->huffman_data[uVar2 * 2 + 1] >> 4;
      *y_out = (uint)(huffman_table->huffman_data[uVar2 * 2 + 1] & 0xf);
      local_14 = (char *)0x0;
      goto LAB_0052f3b9;
    }
    sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr);
    if (extraout_EAX_03 == 0) {
      do {
        iVar1 = uVar2 * 2;
        uVar2 = uVar2 + (byte)huffman_table->huffman_data[iVar1];
      } while (0xf9 < (byte)huffman_table->huffman_data[iVar1]);
    }
    else {
      do {
        iVar1 = uVar2 * 2;
        uVar2 = uVar2 + (byte)huffman_table->huffman_data[iVar1 + 1];
      } while (0xf9 < (byte)huffman_table->huffman_data[iVar1 + 1]);
    }
    uVar3 = uVar3 >> 1;
  } while ((uVar3 != 0) || (uVar2 < (uint)g_HuffmanTables[0].table_size));
  local_14 = g_CurrentMp3Filename;
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  g_CurrentLineNumber = 0x321;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Illegal Huffman code in data.  File: %s");
LAB_0052f3b9:
  if ((huffman_table->table_id[0] == '3') &&
     ((huffman_table->table_id[1] == '2' || (huffman_table->table_id[1] == '3')))) {
    *v_out = *y_out >> 3 & 1;
    *w_out = *y_out >> 2 & 1;
    *x_out = *y_out >> 1 & 1;
    *y_out = *y_out & 1;
    if ((*v_out != 0) &&
       (sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr), extraout_EAX == 1)) {
      *v_out = -*v_out;
    }
    if ((*w_out != 0) &&
       (sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr), extraout_EAX_00 == 1)) {
      *w_out = -*w_out;
    }
    if ((*x_out != 0) &&
       (sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr), extraout_EAX_01 == 1)) {
      *x_out = -*x_out;
    }
  }
  else {
    if ((huffman_table->linbits != 0) && (huffman_table->xlen + -1 == *x_out)) {
      uVar2 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,huffman_table->linbits);
      *x_out = *x_out + uVar2;
    }
    if ((*x_out != 0) &&
       (sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr), extraout_EAX_04 == 1)) {
      *x_out = -*x_out;
    }
    if ((huffman_table->linbits != 0) && (huffman_table->ylen + -1 == *y_out)) {
      uVar2 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,huffman_table->linbits);
      *y_out = *y_out + uVar2;
    }
  }
  if ((*y_out != 0) &&
     (sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr), extraout_EAX_02 == 1)) {
    *y_out = -*y_out;
  }
  return (int)local_14;
}


// Assembly code:
// 0052f350: PUSH EBX
//   Label: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
// 0052f351: PUSH ESI
// 0052f352: PUSH EDI
// 0052f353: PUSH EBP
// 0052f354: SUB ESP,0x4
// 0052f357: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0052f35b: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0052f35f: MOV EDX,0x1
// 0052f364: MOV EDI,0x80000000
// 0052f369: LEA EAX,[ESI + 0x20]
// 0052f36c: XOR EBX,EBX
// 0052f36e: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 0052f371: TEST EAX,EAX
// 0052f373: JZ 0x0052f48b
//   XREF to: 0052f48b (CONDITIONAL_JUMP)
// 0052f379: MOV ECX,dword ptr [ESI + 0x824]
// 0052f37f: TEST ECX,ECX
// 0052f381: JZ 0x0052f498
//   XREF to: 0052f498 (CONDITIONAL_JUMP)
// 0052f387: LEA EAX,[EBX + EBX*0x1]
//   Label: LAB_0052f387
// 0052f38a: ADD EAX,ESI
// 0052f38c: CMP byte ptr [EAX + 0x20],0x0
// 0052f390: JNZ 0x0052f4ae
//   XREF to: 0052f4ae (CONDITIONAL_JUMP)
// 0052f396: XOR EBX,EBX
// 0052f398: MOV BL,byte ptr [EAX + 0x21]
// 0052f39b: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0052f39f: SAR EBX,0x4
// 0052f3a2: MOV dword ptr [EDI],EBX
// 0052f3a4: MOV AL,byte ptr [EAX + 0x21]
// 0052f3a7: AND AL,0xf
// 0052f3a9: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0052f3ad: AND EAX,0xff
// 0052f3b2: MOV dword ptr [EBX],EAX
// 0052f3b4: XOR EBX,EBX
// 0052f3b6: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 0052f3b9: MOV DH,byte ptr [ESI]
//   Label: LAB_0052f3b9
// 0052f3bb: CMP DH,0x33
// 0052f3be: JNZ 0x0052f536
//   XREF to: 0052f536 (CONDITIONAL_JUMP)
// 0052f3c4: MOV BL,byte ptr [ESI + 0x1]
// 0052f3c7: CMP BL,0x32
// 0052f3ca: JNZ 0x0052f52e
//   XREF to: 0052f52e (CONDITIONAL_JUMP)
// 0052f3d0: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0052f3d0
//   XREF to: Stack[0x10] (READ)
// 0052f3d4: MOV EAX,dword ptr [EAX]
// 0052f3d6: SAR EAX,0x3
// 0052f3d9: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0052f3dd: AND EAX,0x1
// 0052f3e0: MOV dword ptr [EBX],EAX
// 0052f3e2: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0052f3e6: MOV EAX,dword ptr [EAX]
// 0052f3e8: SAR EAX,0x2
// 0052f3eb: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x18] (READ)
// 0052f3ef: AND EAX,0x1
// 0052f3f2: MOV dword ptr [EBX],EAX
// 0052f3f4: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0052f3f8: MOV EAX,dword ptr [EAX]
// 0052f3fa: SAR EAX,0x1
// 0052f3fc: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0052f400: AND EAX,0x1
// 0052f403: MOV dword ptr [EBX],EAX
// 0052f405: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0052f409: AND dword ptr [EAX],0x1
// 0052f40c: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0052f410: CMP dword ptr [EAX],0x0
// 0052f413: JZ 0x0052f429
//   XREF to: 0052f429 (CONDITIONAL_JUMP)
// 0052f415: PUSH EBP
// 0052f416: CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
//   XREF to: 0052f250 (UNCONDITIONAL_CALL)
// 0052f41b: ADD ESP,0x4
// 0052f41e: CMP EAX,0x1
// 0052f421: JNZ 0x0052f429
//   XREF to: 0052f429 (CONDITIONAL_JUMP)
// 0052f423: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0052f427: NEG dword ptr [EAX]
// 0052f429: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_0052f429
//   XREF to: Stack[0x18] (READ)
// 0052f42d: CMP dword ptr [EAX],0x0
// 0052f430: JZ 0x0052f446
//   XREF to: 0052f446 (CONDITIONAL_JUMP)
// 0052f432: PUSH EBP
// 0052f433: CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
//   XREF to: 0052f250 (UNCONDITIONAL_CALL)
// 0052f438: ADD ESP,0x4
// 0052f43b: CMP EAX,0x1
// 0052f43e: JNZ 0x0052f446
//   XREF to: 0052f446 (CONDITIONAL_JUMP)
// 0052f440: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x18] (READ)
// 0052f444: NEG dword ptr [EAX]
// 0052f446: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0052f446
//   XREF to: Stack[0xc] (READ)
// 0052f44a: CMP dword ptr [EAX],0x0
// 0052f44d: JZ 0x0052f463
//   XREF to: 0052f463 (CONDITIONAL_JUMP)
// 0052f44f: PUSH EBP
// 0052f450: CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
//   XREF to: 0052f250 (UNCONDITIONAL_CALL)
// 0052f455: ADD ESP,0x4
// 0052f458: CMP EAX,0x1
// 0052f45b: JNZ 0x0052f463
//   XREF to: 0052f463 (CONDITIONAL_JUMP)
// 0052f45d: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0052f461: NEG dword ptr [EAX]
// 0052f463: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0052f463
//   XREF to: Stack[0x10] (READ)
// 0052f467: CMP dword ptr [EAX],0x0
// 0052f46a: JZ 0x0052f480
//   XREF to: 0052f480 (CONDITIONAL_JUMP)
// 0052f46c: PUSH EBP
// 0052f46d: CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
//   XREF to: 0052f250 (UNCONDITIONAL_CALL)
// 0052f472: ADD ESP,0x4
// 0052f475: CMP EAX,0x1
// 0052f478: JNZ 0x0052f480
//   XREF to: 0052f480 (CONDITIONAL_JUMP)
// 0052f47a: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0052f47e: NEG dword ptr [EAX]
// 0052f480: MOV EAX,dword ptr [ESP]
//   Label: LAB_0052f480
//   XREF to: Stack[-0x14] (DATA)
// 0052f483: ADD ESP,0x4
// 0052f486: POP EBP
// 0052f487: POP EDI
// 0052f488: POP ESI
// 0052f489: POP EBX
// 0052f48a: RET
// 0052f48b: MOV EAX,0x2
//   Label: LAB_0052f48b
// 0052f490: ADD ESP,0x4
// 0052f493: POP EBP
// 0052f494: POP EDI
// 0052f495: POP ESI
// 0052f496: POP EBX
// 0052f497: RET
// 0052f498: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0052f498
//   XREF to: Stack[0x10] (READ)
// 0052f49c: MOV dword ptr [EAX],EBX
// 0052f49e: MOV EAX,EBX
// 0052f4a0: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0052f4a4: MOV dword ptr [EBX],ECX
// 0052f4a6: ADD ESP,0x4
// 0052f4a9: POP EBP
// 0052f4aa: POP EDI
// 0052f4ab: POP ESI
// 0052f4ac: POP EBX
// 0052f4ad: RET
// 0052f4ae: PUSH EBP
//   Label: LAB_0052f4ae
// 0052f4af: CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
//   XREF to: 0052f250 (UNCONDITIONAL_CALL)
// 0052f4b4: ADD ESP,0x4
// 0052f4b7: TEST EAX,EAX
// 0052f4b9: JZ 0x0052f51a
//   XREF to: 0052f51a (CONDITIONAL_JUMP)
// 0052f4bb: MOV AL,byte ptr [ESI + EBX*0x2 + 0x21]
//   Label: LAB_0052f4bb
// 0052f4bf: AND EAX,0xff
// 0052f4c4: ADD EBX,EAX
// 0052f4c6: CMP EAX,0xfa
// 0052f4cb: JGE 0x0052f4bb
//   XREF to: 0052f4bb (CONDITIONAL_JUMP)
// 0052f4cd: SHR EDI,0x1
//   Label: LAB_0052f4cd
// 0052f4cf: TEST EDI,EDI
// 0052f4d1: JNZ 0x0052f387
//   XREF to: 0052f387 (CONDITIONAL_JUMP)
// 0052f4d7: CMP EBX,dword ptr [0x02f68aac]
//   XREF to: 02f68aac (READ)
// 0052f4dd: JC 0x0052f387
//   XREF to: 0052f387 (CONDITIONAL_JUMP)
// 0052f4e3: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x14] (DATA)
// 0052f4e7: JZ 0x0052f3b9
//   XREF to: 0052f3b9 (CONDITIONAL_JUMP)
// 0052f4ed: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 0052f4f2: MOV ECX,0x63adf1
//   XREF to: 0063adf1 (PARAM)
// 0052f4f7: MOV EBX,0x321
// 0052f4fc: PUSH 0x63ae02
//   XREF to: 0063ae02 (DATA)
// 0052f501: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052f507: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0052f50d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052f512: ADD ESP,0x8
// 0052f515: JMP 0x0052f3b9
//   XREF to: 0052f3b9 (UNCONDITIONAL_JUMP)
// 0052f51a: MOV AL,byte ptr [ESI + EBX*0x2 + 0x20]
//   Label: LAB_0052f51a
// 0052f51e: AND EAX,0xff
// 0052f523: ADD EBX,EAX
// 0052f525: CMP EAX,0xfa
// 0052f52a: JGE 0x0052f51a
//   XREF to: 0052f51a (CONDITIONAL_JUMP)
// 0052f52c: JMP 0x0052f4cd
//   XREF to: 0052f4cd (UNCONDITIONAL_JUMP)
// 0052f52e: CMP BL,DH
//   Label: LAB_0052f52e
// 0052f530: JZ 0x0052f3d0
//   XREF to: 0052f3d0 (CONDITIONAL_JUMP)
// 0052f536: MOV EDI,dword ptr [ESI + 0xc]
//   Label: LAB_0052f536
// 0052f539: TEST EDI,EDI
// 0052f53b: JZ 0x0052f559
//   XREF to: 0052f559 (CONDITIONAL_JUMP)
// 0052f53d: MOV EAX,dword ptr [ESI + 0x4]
// 0052f540: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0052f544: DEC EAX
// 0052f545: CMP EAX,dword ptr [EBX]
// 0052f547: JNZ 0x0052f559
//   XREF to: 0052f559 (CONDITIONAL_JUMP)
// 0052f549: PUSH EDI
// 0052f54a: PUSH EBP
// 0052f54b: CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 0052f550: MOV EDI,dword ptr [EBX]
// 0052f552: ADD EDI,EAX
// 0052f554: ADD ESP,0x8
// 0052f557: MOV dword ptr [EBX],EDI
// 0052f559: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0052f559
//   XREF to: Stack[0xc] (READ)
// 0052f55d: CMP dword ptr [EAX],0x0
// 0052f560: JZ 0x0052f576
//   XREF to: 0052f576 (CONDITIONAL_JUMP)
// 0052f562: PUSH EBP
// 0052f563: CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
//   XREF to: 0052f250 (UNCONDITIONAL_CALL)
// 0052f568: ADD ESP,0x4
// 0052f56b: CMP EAX,0x1
// 0052f56e: JNZ 0x0052f576
//   XREF to: 0052f576 (CONDITIONAL_JUMP)
// 0052f570: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0052f574: NEG dword ptr [EAX]
// 0052f576: CMP dword ptr [ESI + 0xc],0x0
//   Label: LAB_0052f576
// 0052f57a: JZ 0x0052f463
//   XREF to: 0052f463 (CONDITIONAL_JUMP)
// 0052f580: MOV EAX,dword ptr [ESI + 0x8]
// 0052f583: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0052f587: DEC EAX
// 0052f588: CMP EAX,dword ptr [EBX]
// 0052f58a: JNZ 0x0052f463
//   XREF to: 0052f463 (CONDITIONAL_JUMP)
// 0052f590: MOV EAX,dword ptr [ESI + 0xc]
// 0052f593: PUSH EAX
// 0052f594: PUSH EBP
// 0052f595: CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 0052f59a: MOV EDX,dword ptr [EBX]
// 0052f59c: ADD EDX,EAX
// 0052f59e: ADD ESP,0x8
// 0052f5a1: MOV dword ptr [EBX],EDX
// 0052f5a3: JMP 0x0052f463
//   XREF to: 0052f463 (UNCONDITIONAL_JUMP)
