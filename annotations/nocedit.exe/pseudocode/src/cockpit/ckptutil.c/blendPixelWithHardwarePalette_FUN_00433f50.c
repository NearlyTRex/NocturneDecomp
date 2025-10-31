// Name: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
// Address: 00433f50
// Address Range: [[00433f50, 004342e1]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50(int x, int y, float alpha, int color)
// Cross-references:
//   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0 (004339c0) at 00433b43 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   uint[256] g_Hardware32BitPalette
//   ushort[256] g_Hardware16BitPalette
//   int g_RedBitPosition
//   int g_RedBitCount
//   int g_GreenBitPosition
//   int g_GreenBitCount
//   int g_BlueBitPosition
//   int g_BlueBitCount
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50(int x,int y,float alpha,int color)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte extraout_CL;
  byte extraout_CL_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double dVar15;
  uint local_38;
  uint uStack_24;
  uint uStack_1c;
  uint uStack_14;
  
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) &&
     ((y <= g_ClipBottom && (g_BitsPerPixel != 8)))) {
    if (g_BitsPerPixel == 0x10) {
      uVar1 = *(ushort *)((int)g_ScreenBufferArray[y] + x * 2);
      uVar5 = (uint)(uVar1 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar6 = (uint)(uVar1 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar7 = (uint)(uVar1 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      puVar9 = (uint *)(x * 4 + (int)g_ScreenBufferArray[y]);
      uVar5 = *puVar9 >> ((byte)g_RedBitPosition & 0x1f);
      uVar6 = *puVar9 >> ((byte)g_GreenBitPosition & 0x1f);
      uVar7 = *puVar9 >> ((byte)g_BlueBitPosition & 0x1f);
    }
    if (g_BitsPerPixel == 0x10) {
      uVar1 = g_Hardware16BitPalette[color];
      uVar10 = (uint)(uVar1 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar11 = (uint)(uVar1 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar8 = (uint)(uVar1 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      uVar10 = g_Hardware32BitPalette[color] >> ((byte)g_RedBitPosition & 0x1f);
      uVar11 = g_Hardware32BitPalette[color] >> ((byte)g_GreenBitPosition & 0x1f);
      uVar8 = g_Hardware32BitPalette[color] >> ((byte)g_BlueBitPosition & 0x1f);
    }
    local_38 = uVar10 & 0xff;
    fVar2 = 1.0 - alpha;
    fVar4 = (float)local_38 * fVar2 + (float)(uVar5 & 0xff) * alpha;
    fVar3 = (float)(uVar11 & 0xff) * fVar2 + (float)(uVar6 & 0xff) * alpha;
    fVar2 = (float)(uVar8 & 0xff) * fVar2 + (float)(uVar7 & 0xff) * alpha;
    if (g_BitsPerPixel != 0x10) {
      fVar12 = (float10)fVar4;
      fVar13 = (float10)fVar3;
      fVar14 = (float10)fVar2;
      dVar15 = crt_math_c_round_FUN_005fe6b0((double)(CONCAT44(uVar10,x) & 0xffffffffff));
      dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
      dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
      uStack_1c = (uint)(longlong)ROUND(fVar12);
      uStack_24 = (uint)(longlong)ROUND(fVar13);
      uStack_14 = (uint)(longlong)ROUND(fVar14);
      *(uint *)((int)g_ScreenBufferArray[y] + SUB84(dVar15,0) * 4) =
           uStack_24 << ((byte)g_GreenBitPosition & 0x1f) | uStack_1c << (extraout_CL_00 & 0x1f) |
           uStack_14 << ((byte)g_BlueBitPosition & 0x1f);
      return;
    }
    fVar12 = (float10)fVar4;
    fVar13 = (float10)fVar3;
    fVar14 = (float10)fVar2;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)(CONCAT44(uVar10,x) & 0xffffffffff));
    dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
    dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
    uStack_24 = (uint)(longlong)ROUND(fVar12);
    uStack_1c = (uint)(longlong)ROUND(fVar14);
    uStack_14 = (uint)(longlong)ROUND(fVar13);
    *(ushort *)((int)g_ScreenBufferArray[y] + SUB84(dVar15,0) * 2) =
         (ushort)((uStack_14 >> ((byte)g_GreenBitCount & 0x1f)) << ((byte)g_GreenBitPosition & 0x1f)
                 ) |
         (ushort)((uStack_24 >> (extraout_CL & 0x1f)) << ((byte)g_RedBitPosition & 0x1f)) |
         (ushort)((uStack_1c >> ((byte)g_BlueBitCount & 0x1f)) << ((byte)g_BlueBitPosition & 0x1f));
  }
  return;
}


// Assembly code:
// 00433f50: PUSH EBX
//   Label: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
// 00433f51: PUSH ESI
// 00433f52: PUSH EDI
// 00433f53: PUSH EBP
// 00433f54: MOV EBP,ESP
// 00433f56: SUB ESP,0x2c
// 00433f59: AND ESP,0xfffffff8
// 00433f5c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00433f5f: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00433f62: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00433f65: CMP EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00433f6b: JL 0x00434199
//   XREF to: 00434199 (CONDITIONAL_JUMP)
// 00433f71: CMP EAX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00433f77: JG 0x00434199
//   XREF to: 00434199 (CONDITIONAL_JUMP)
// 00433f7d: CMP ESI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00433f83: JL 0x00434199
//   XREF to: 00434199 (CONDITIONAL_JUMP)
// 00433f89: CMP ESI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00433f8f: JG 0x00434199
//   XREF to: 00434199 (CONDITIONAL_JUMP)
// 00433f95: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00433f9b: CMP ECX,0x8
// 00433f9e: JZ 0x00434199
//   XREF to: 00434199 (CONDITIONAL_JUMP)
// 00433fa4: LEA EDX,[ESI*0x4 + 0x0]
// 00433fab: CMP ECX,0x10
// 00433fae: JZ 0x004341a0
//   XREF to: 004341a0 (CONDITIONAL_JUMP)
// 00433fb4: LEA EBX,[EAX*0x4 + 0x0]
// 00433fbb: MOV EDX,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00433fc1: ADD EBX,EDX
// 00433fc3: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00433fc9: MOV EDX,dword ptr [EBX]
// 00433fcb: SHR EDX,CL
// 00433fcd: XOR ECX,ECX
// 00433fcf: AND EDX,0xff
// 00433fd5: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00433fd9: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00433fdd: FILD qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00433fe1: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00433fe7: MOV EDX,dword ptr [EBX]
// 00433fe9: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00433fec: FXCH
// 00433fee: FMUL ST1
// 00433ff0: SHR EDX,CL
// 00433ff2: XOR ECX,ECX
// 00433ff4: AND EDX,0xff
// 00433ffa: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00433ffe: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00434002: FILD qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00434006: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0043400c: MOV EDX,dword ptr [EBX]
// 0043400e: FMUL ST2
// 00434010: SHR EDX,CL
// 00434012: XOR EBX,EBX
// 00434014: AND EDX,0xff
// 0043401a: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0043401e: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00434022: FILD qword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00434026: FMULP ST3
//   Label: LAB_00434026
// 00434028: FXCH
// 0043402a: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 0043402e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00434031: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (WRITE)
// 00434035: CMP dword ptr [0x0067939c],0x10
//   XREF to: 0067939c (READ)
// 0043403c: JNZ 0x0043422e
//   XREF to: 0043422e (CONDITIONAL_JUMP)
// 00434042: MOV DX,word ptr [EDI*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 0043404a: AND EDX,0xffff
// 00434050: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00434056: MOV EBX,EDX
// 00434058: SHR EBX,CL
// 0043405a: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 00434060: SHL EBX,CL
// 00434062: MOV ECX,EBX
// 00434064: AND ECX,0xff
// 0043406a: MOV EDI,EDX
// 0043406c: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00434070: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00434076: SHR EDI,CL
// 00434078: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 0043407e: SHL EDI,CL
// 00434080: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00434086: SHR EDX,CL
// 00434088: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 0043408e: SHL EDX,CL
// 00434090: MOV ECX,EDX
//   Label: LAB_00434090
// 00434092: AND EDI,0xff
// 00434098: AND ECX,0xff
// 0043409e: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004340a1: XOR EBX,EBX
// 004340a3: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 004340a7: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004340ab: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004340af: FLD1
// 004340b1: FILD qword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 004340b5: FXCH
// 004340b7: FSUBRP ST2,ST0
// 004340b9: FMUL ST1
// 004340bb: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 004340bf: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 004340c3: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 004340c7: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 004340cb: FILD qword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 004340cf: FMUL ST2
// 004340d1: FILD qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 004340d5: FMULP ST3
// 004340d7: SHL ESI,0x2
// 004340da: MOV EDI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004340e0: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 004340e4: FLD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004340e7: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 004340eb: FXCH ST4
// 004340ed: FADD ST0,ST2
// 004340ef: FXCH ST3
// 004340f1: FADD ST0,ST1
// 004340f3: FXCH ST5
// 004340f5: FADD ST0,ST4
// 004340f7: FXCH ST3
// 004340f9: FSTP ST2
// 004340fb: FXCH ST4
// 004340fd: FSTP ST4
// 004340ff: FXCH
// 00434101: FSTP ST2
// 00434103: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 00434107: FXCH
// 00434109: FSTP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0043410c: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (WRITE)
// 00434110: CMP EDI,0x10
// 00434113: JNZ 0x0043426e
//   XREF to: 0043426e (CONDITIONAL_JUMP)
// 00434119: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0043411d: FLD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00434120: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 00434124: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 0043412a: FXCH ST2
// 0043412c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00434131: FXCH
// 00434133: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00434138: FXCH ST2
// 0043413a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0043413f: FXCH
// 00434141: FISTP qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (WRITE)
// 00434145: FXCH
// 00434147: FISTP qword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (WRITE)
// 0043414b: FISTP qword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0043414f: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00434153: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00434157: SHR EDI,CL
// 00434159: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 0043415f: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00434163: SHR EDX,CL
// 00434165: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 0043416b: SHR EBX,CL
// 0043416d: LEA ECX,[EAX + EAX*0x1]
// 00434170: MOV EAX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00434176: MOV ESI,EDI
// 00434178: ADD EAX,ECX
// 0043417a: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00434180: SHL ESI,CL
// 00434182: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00434188: SHL EDX,CL
// 0043418a: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00434190: OR EDX,ESI
// 00434192: SHL EBX,CL
// 00434194: OR EDX,EBX
// 00434196: MOV word ptr [EAX],DX
// 00434199: MOV ESP,EBP
//   Label: LAB_00434199
// 0043419b: POP EBP
// 0043419c: POP EDI
// 0043419d: POP ESI
// 0043419e: POP EBX
// 0043419f: RET
// 004341a0: MOV EDX,dword ptr [EDX + 0x2cf6a9c]
//   Label: LAB_004341a0
//   XREF to: 02cf6a9c (DATA)
// 004341a6: MOV DX,word ptr [EDX + EAX*0x2]
// 004341aa: AND EDX,0xffff
// 004341b0: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004341b6: MOV EBX,EDX
// 004341b8: SHR EBX,CL
// 004341ba: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004341c0: SHL EBX,CL
// 004341c2: XOR ECX,ECX
// 004341c4: AND EBX,0xff
// 004341ca: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004341ce: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 004341d2: FILD qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 004341d6: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004341dc: MOV EBX,EDX
// 004341de: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004341e1: FXCH
// 004341e3: FMUL ST1
// 004341e5: SHR EBX,CL
// 004341e7: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004341ed: SHL EBX,CL
// 004341ef: XOR ECX,ECX
// 004341f1: AND EBX,0xff
// 004341f7: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004341fb: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 004341ff: FILD qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00434203: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00434209: FMUL ST2
// 0043420b: SHR EDX,CL
// 0043420d: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 00434213: SHL EDX,CL
// 00434215: XOR EBX,EBX
// 00434217: AND EDX,0xff
// 0043421d: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00434221: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00434225: FILD qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00434229: JMP 0x00434026
//   XREF to: 00434026 (UNCONDITIONAL_JUMP)
// 0043422e: LEA EBX,[EDI*0x4 + 0x0]
//   Label: LAB_0043422e
// 00434235: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0043423b: MOV EDX,dword ptr [EBX + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00434241: SHR EDX,CL
// 00434243: MOV EDI,dword ptr [EBX + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00434249: AND EDX,0xff
// 0043424f: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00434255: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00434259: SHR EDI,CL
// 0043425b: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00434261: MOV EDX,dword ptr [EBX + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00434267: SHR EDX,CL
// 00434269: JMP 0x00434090
//   XREF to: 00434090 (UNCONDITIONAL_JUMP)
// 0043426e: FLD float ptr [ESP + 0x4]
//   Label: LAB_0043426e
//   XREF to: Stack[-0x3c] (READ)
// 00434272: FLD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00434275: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 00434279: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0043427f: FXCH ST2
// 00434281: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00434286: FXCH
// 00434288: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0043428d: FXCH ST2
// 0043428f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00434294: SHL EAX,0x2
// 00434297: FXCH
// 00434299: FISTP qword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0043429d: FXCH
// 0043429f: FISTP qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (WRITE)
// 004342a3: FISTP qword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (WRITE)
// 004342a7: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 004342ab: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 004342af: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004342b3: SHL EBX,CL
// 004342b5: MOV EDX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004342bb: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004342c1: ADD EDX,EAX
// 004342c3: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 004342c7: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 004342cb: SHL EAX,CL
// 004342cd: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004342d3: OR EAX,EBX
// 004342d5: SHL EDI,CL
// 004342d7: OR EAX,EDI
// 004342d9: MOV dword ptr [EDX],EAX
// 004342db: MOV ESP,EBP
// 004342dd: POP EBP
// 004342de: POP EDI
// 004342df: POP ESI
// 004342e0: POP EBX
// 004342e1: RET
