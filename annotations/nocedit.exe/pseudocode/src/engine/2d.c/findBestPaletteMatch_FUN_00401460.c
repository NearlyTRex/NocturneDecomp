// Name: engine_2d.c_findBestPaletteMatch_FUN_00401460
// Address: 00401460
// Address Range: [[00401460, 0040158f] [00401591, 0040159c]]
// Convention: __cdecl
// Signature: int engine_2d.c_findBestPaletteMatch_FUN_00401460(int red, int green, int blue, int start_index, int end_index)
// Cross-references:
//   engine_2d.c_buildColorLookupTable_FUN_00402870 (00402870) at 004028f2 [UNCONDITIONAL_CALL]
// Globals:
//   double g_PaletteLuminanceScaleFactor = 0.577350270000000
//   double g_RedComponentWeight = 0.300000000000000
//   double g_GreenComponentWeight = 0.590000000000000
//   double g_BlueComponentWeight = 0.110000000000000
//   double g_LuminanceDifferenceWeight = 0.150000000000000
//   float[256] g_PaletteLuminanceCache
//   undefined4 DAT_0077263c
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f49
//   undefined4 CHAR_ARRAY_02d01f4a
//   undefined4 CHAR_ARRAY_02d01f4b
//   undefined4 CHAR_ARRAY_02d01f4c

#include "nocturne.h"

int __cdecl
engine_2d_c_findBestPaletteMatch_FUN_00401460
          (int red,int green,int blue,int start_index,int end_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int unaff_EDI;
  float local_20;
  
  pbVar5 = (byte *)(g_SourcePaletteData + start_index * 3);
  local_20 = 1e+30;
  if (start_index <= end_index) {
    iVar7 = start_index << 2;
    do {
      uVar6 = (int)(red - (uint)*pbVar5) >> 0x1f;
      fVar1 = (float)(int)((red - (uint)*pbVar5 ^ uVar6) - uVar6);
      uVar6 = (int)(green - (uint)pbVar5[1]) >> 0x1f;
      fVar2 = (float)(int)((green - (uint)pbVar5[1] ^ uVar6) - uVar6);
      uVar6 = (int)(blue - (uint)pbVar5[2]) >> 0x1f;
      fVar3 = ABS(SQRT((float)blue * (float)blue +
                       (float)green * (float)green + (float)red * (float)red) *
                  (float)g_PaletteLuminanceScaleFactor -
                  *(float *)((int)g_PaletteLuminanceCache + iVar7));
      fVar4 = (float)(int)((blue - (uint)pbVar5[2] ^ uVar6) - uVar6);
      fVar1 = fVar3 * fVar3 * (float)g_LuminanceDifferenceWeight +
              fVar4 * fVar4 * (float)g_BlueComponentWeight +
              fVar2 * fVar2 * (float)g_GreenComponentWeight +
              fVar1 * fVar1 * (float)g_RedComponentWeight;
      if (fVar1 < local_20) {
        unaff_EDI = start_index;
        local_20 = fVar1;
      }
      pbVar5 = pbVar5 + 3;
      start_index = start_index + 1;
      iVar7 = iVar7 + 4;
    } while (start_index <= end_index);
  }
  return unaff_EDI;
}


// Assembly code:
// 00401460: PUSH EBX
//   Label: engine_2d.c_findBestPaletteMatch_FUN_00401460
// 00401461: PUSH ESI
// 00401462: PUSH EDI
// 00401463: PUSH EBP
// 00401464: SUB ESP,0x30
// 00401467: MOV EBP,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 0040146b: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x10] (READ)
// 0040146f: LEA EAX,[ESI*0x4 + 0x0]
// 00401476: MOV ECX,0x2d01f48
//   XREF to: 02d01f48 (DATA)
// 0040147b: SUB EAX,ESI
// 0040147d: ADD ECX,EAX
// 0040147f: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00401483: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00401487: MOV dword ptr [ESP + 0x2c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0040148b: FILD dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0040148f: FMUL ST0
// 00401491: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00401495: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 00401499: FMUL ST0
// 0040149b: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0040149f: FADDP
// 004014a1: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 004014a5: FMUL ST0
// 004014a7: FADDP
// 004014a9: FSQRT
// 004014ab: MOV EDX,0x7149f2ca
// 004014b0: FMUL double ptr [0x00613084]
//   XREF to: 00613084 (READ)
// 004014b6: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004014ba: MOV EBX,ESI
// 004014bc: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x14] (READ)
// 004014c0: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (WRITE)
// 004014c4: CMP ESI,EAX
// 004014c6: JG 0x0040157e
//   XREF to: 0040157e (CONDITIONAL_JUMP)
// 004014cc: SHL ESI,0x2
// 004014cf: XOR EAX,EAX
//   Label: LAB_004014cf
// 004014d1: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 004014d5: MOV AL,byte ptr [ECX]
//   XREF to: 02d01f48 (DATA)
//   XREF to: 02d01f4b (DATA)
// 004014d7: SUB EDX,EAX
// 004014d9: MOV EAX,EDX
// 004014db: CDQ
// 004014dc: XOR EAX,EDX
// 004014de: SUB EAX,EDX
// 004014e0: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004014e4: XOR EAX,EAX
// 004014e6: MOV EDX,EBP
// 004014e8: MOV AL,byte ptr [ECX + 0x1]
//   XREF to: 02d01f49 (DATA)
//   XREF to: 02d01f4c (DATA)
// 004014eb: SUB EDX,EAX
// 004014ed: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 004014f1: MOV EAX,EDX
// 004014f3: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 004014f7: CDQ
// 004014f8: XOR EAX,EDX
// 004014fa: SUB EAX,EDX
// 004014fc: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00401500: XOR EAX,EAX
// 00401502: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 00401506: MOV AL,byte ptr [ECX + 0x2]
//   XREF to: 02d01f4a (DATA)
// 00401509: SUB EDX,EAX
// 0040150b: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0040150f: MOV EAX,EDX
// 00401511: FSTP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00401514: CDQ
// 00401515: XOR EAX,EDX
// 00401517: SUB EAX,EDX
// 00401519: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0040151d: FSUB float ptr [ESI + 0x772638]
//   XREF to: 00772638 (DATA)
//   XREF to: 0077263c (DATA)
// 00401523: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00401527: FABS
// 00401529: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0040152d: FMUL ST0
// 0040152f: FMUL double ptr [0x0061308c]
//   XREF to: 0061308c (READ)
// 00401535: FLD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00401538: FMUL ST0
// 0040153a: FMUL double ptr [0x00613094]
//   XREF to: 00613094 (READ)
// 00401540: FADDP
// 00401542: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00401546: FMUL ST0
// 00401548: FMUL double ptr [0x0061309c]
//   XREF to: 0061309c (READ)
// 0040154e: FADDP
// 00401550: FLD ST1
// 00401552: FMULP ST2
// 00401554: FXCH
// 00401556: FMUL double ptr [0x006130a4]
//   XREF to: 006130a4 (READ)
// 0040155c: FADDP
// 0040155e: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (WRITE)
// 00401562: FCOMP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00401566: FNSTSW AX
// 00401568: SAHF
// 00401569: JC 0x00401591
//   XREF to: 00401591 (CONDITIONAL_JUMP)
// 0040156b: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_0040156b
//   XREF to: Stack[0x14] (READ)
// 0040156f: ADD ECX,0x3
// 00401572: INC EBX
// 00401573: ADD ESI,0x4
// 00401576: CMP EBX,EDX
// 00401578: JLE 0x004014cf
//   XREF to: 004014cf (CONDITIONAL_JUMP)
// 0040157e: MOV EAX,EDI
//   Label: LAB_0040157e
// 00401580: ADD ESP,0x30
// 00401583: POP EBP
// 00401584: POP EDI
// 00401585: POP ESI
// 00401586: POP EBX
// 00401587: LEA EAX,[EAX]
// 0040158d: LEA EDX,[EDX]
// 00401591: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00401591
//   XREF to: Stack[-0x1c] (READ)
// 00401595: MOV EDI,EBX
// 00401597: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0040159b: JMP 0x0040156b
//   XREF to: 0040156b (UNCONDITIONAL_JUMP)
