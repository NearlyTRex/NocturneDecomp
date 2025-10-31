// Name: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
// Address: 004342f0
// Address Range: [[004342f0, 004345b5]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0(int x, int y, float blend_factor, int palette_index)
// Cross-references:
//   cockpit_ckptutil.c_drawLineAA_FUN_00433c90 (00433c90) at 00433e64 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   int g_RedBitPosition
//   int g_RedBitCount
//   int g_GreenBitPosition
//   int g_GreenBitCount
//   int g_BlueBitPosition
//   int g_BlueBitCount
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f49
//   undefined4 CHAR_ARRAY_02d01f4a
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
          (int x,int y,float blend_factor,int palette_index)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte extraout_CL;
  int iVar5;
  uint *puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  uint local_2c;
  undefined4 uStack_24;
  uint uStack_20;
  
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) &&
     ((y <= g_ClipBottom && (g_BitsPerPixel != 8)))) {
    if (g_BitsPerPixel == 0x10) {
      uVar1 = *(ushort *)((int)g_ScreenBufferArray[y] + x * 2);
      uVar2 = (uint)(uVar1 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar3 = (uint)(uVar1 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar4 = (uint)(uVar1 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      puVar6 = (uint *)(x * 4 + (int)g_ScreenBufferArray[y]);
      uVar2 = (*puVar6 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar3 = (*puVar6 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar4 = (*puVar6 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    iVar5 = palette_index * 3;
    fVar9 = (float10)1 - (float10)blend_factor;
    fVar10 = (float10)(byte)g_SourcePaletteData[iVar5 + 2] * fVar9;
    fVar7 = (float10)(byte)g_SourcePaletteData[iVar5 + 1] * fVar9 +
            (float10)((float)(uVar3 & 0xff) * blend_factor);
    fVar8 = (float10)((float)(uVar4 & 0xff) * blend_factor);
    fVar9 = (float10)(float)((float10)(byte)g_SourcePaletteData[iVar5] * fVar9 +
                            (float10)((float)(uVar2 & 0xff) * blend_factor));
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44(x,(uint)(byte)g_SourcePaletteData[iVar5 + 2]));
    dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
    fVar10 = fVar10 + fVar8;
    uStack_24 = (undefined4)(longlong)ROUND(fVar7);
    local_2c = (uint)(longlong)ROUND(fVar9);
    local_2c = local_2c >> (extraout_CL & 0x1f);
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),uStack_24));
    iVar5 = (int)((ulonglong)dVar11 >> 0x20);
    uStack_20 = (uint)(longlong)ROUND(fVar10);
    uVar2 = SUB84(dVar11,0) >> ((byte)g_GreenBitCount & 0x1f);
    uStack_20 = uStack_20 >> ((byte)g_BlueBitCount & 0x1f);
    if (g_BitsPerPixel != 0x10) {
      *(uint *)(iVar5 * 4 + (int)g_ScreenBufferArray[y]) =
           local_2c << ((byte)g_RedBitPosition & 0x1f) | uVar2 << ((byte)g_GreenBitPosition & 0x1f)
           | uStack_20 << ((byte)g_BlueBitPosition & 0x1f);
      return;
    }
    *(ushort *)((int)g_ScreenBufferArray[y] + iVar5 * 2) =
         (ushort)(uVar2 << ((byte)g_GreenBitPosition & 0x1f)) |
         (ushort)(local_2c << ((byte)g_RedBitPosition & 0x1f)) |
         (ushort)(uStack_20 << ((byte)g_BlueBitPosition & 0x1f));
  }
  return;
}


// Assembly code:
// 004342f0: PUSH EBX
//   Label: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
// 004342f1: PUSH ESI
// 004342f2: PUSH EDI
// 004342f3: PUSH EBP
// 004342f4: MOV EBP,ESP
// 004342f6: SUB ESP,0x2c
// 004342f9: AND ESP,0xfffffff8
// 004342fc: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004342ff: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00434302: CMP EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00434308: JL 0x004344f5
//   XREF to: 004344f5 (CONDITIONAL_JUMP)
// 0043430e: CMP EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00434314: JG 0x004344f5
//   XREF to: 004344f5 (CONDITIONAL_JUMP)
// 0043431a: CMP ESI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00434320: JL 0x004344f5
//   XREF to: 004344f5 (CONDITIONAL_JUMP)
// 00434326: CMP ESI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0043432c: JG 0x004344f5
//   XREF to: 004344f5 (CONDITIONAL_JUMP)
// 00434332: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00434338: CMP ECX,0x8
// 0043433b: JZ 0x004344f5
//   XREF to: 004344f5 (CONDITIONAL_JUMP)
// 00434341: LEA EAX,[ESI*0x4 + 0x0]
// 00434348: CMP ECX,0x10
// 0043434b: JZ 0x004344fc
//   XREF to: 004344fc (CONDITIONAL_JUMP)
// 00434351: LEA EBX,[EDX*0x4 + 0x0]
// 00434358: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 0043435e: ADD EBX,EAX
// 00434360: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00434366: MOV EAX,dword ptr [EBX]
// 00434368: SHR EAX,CL
// 0043436a: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 00434370: SHL EAX,CL
// 00434372: XOR EDI,EDI
// 00434374: AND EAX,0xff
// 00434379: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0043437d: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00434381: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00434387: FILD qword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0043438b: MOV EAX,dword ptr [EBX]
// 0043438d: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00434390: FXCH
// 00434392: FMUL ST1
// 00434394: SHR EAX,CL
// 00434396: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 0043439c: SHL EAX,CL
// 0043439e: AND EAX,0xff
// 004343a3: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 004343a7: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004343ab: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004343b1: FILD qword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 004343b5: MOV EAX,dword ptr [EBX]
// 004343b7: FMUL ST2
// 004343b9: SHR EAX,CL
// 004343bb: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004343c1: SHL EAX,CL
// 004343c3: AND EAX,0xff
// 004343c8: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 004343cc: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004343d0: FILD qword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 004343d4: FMULP ST3
//   Label: LAB_004343d4
// 004343d6: FXCH
// 004343d8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004343db: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 004343df: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 004343e3: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004343e6: LEA EAX,[ECX*0x4 + 0x0]
// 004343ed: SUB EAX,ECX
// 004343ef: MOV ECX,EAX
// 004343f1: XOR EAX,EAX
// 004343f3: MOV AL,byte ptr [ECX + 0x2d01f48]
//   XREF to: 02d01f48 (DATA)
// 004343f9: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004343fd: FILD word ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 00434401: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00434404: XOR EAX,EAX
// 00434406: FLD1
// 00434408: MOV AL,byte ptr [ECX + 0x2d01f49]
//   XREF to: 02d01f49 (DATA)
// 0043440e: FSUBRP
// 00434410: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00434414: FXCH
// 00434416: FMUL ST1
// 00434418: FILD word ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0043441c: XOR EAX,EAX
// 0043441e: FMUL ST2
// 00434420: MOV AL,byte ptr [ECX + 0x2d01f4a]
//   XREF to: 02d01f4a (DATA)
// 00434426: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0043442a: FILD word ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0043442e: FMULP ST3
// 00434430: FLD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00434433: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00434437: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 0043443d: FXCH ST3
// 0043443f: FADD ST0,ST1
// 00434441: FXCH ST2
// 00434443: FADD ST0,ST3
// 00434445: FXCH ST2
// 00434447: FSTP ST1
// 00434449: FXCH
// 0043444b: FSTP ST2
// 0043444d: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 00434451: FXCH
// 00434453: FSTP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00434456: FXCH
// 00434458: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 0043445c: FLD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0043445f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00434464: FXCH
// 00434466: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0043446b: FXCH ST3
// 0043446d: FADD ST0,ST2
// 0043446f: FXCH
// 00434471: FISTP qword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (WRITE)
// 00434475: FXCH ST2
// 00434477: FISTP qword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (WRITE)
// 0043447b: FXCH
// 0043447d: FSTP ST1
// 0043447f: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 00434483: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 00434487: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 0043448b: SHR EDI,CL
// 0043448d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00434492: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 00434498: FISTP qword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (WRITE)
// 0043449c: SHR EAX,CL
// 0043449e: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 004344a2: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004344a6: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 004344aa: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004344b0: SHR EBX,CL
// 004344b2: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004344b8: SHL ESI,0x2
// 004344bb: CMP ECX,0x10
// 004344be: JNZ 0x00434586
//   XREF to: 00434586 (CONDITIONAL_JUMP)
// 004344c4: ADD EDX,EDX
// 004344c6: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004344cc: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004344d0: SHL EDI,CL
// 004344d2: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004344d8: MOV EDX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004344de: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 004344e2: SHL EAX,CL
// 004344e4: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004344ea: OR EAX,EDI
// 004344ec: SHL EBX,CL
// 004344ee: ADD EDX,ESI
// 004344f0: OR EAX,EBX
// 004344f2: MOV word ptr [EDX],AX
// 004344f5: MOV ESP,EBP
//   Label: LAB_004344f5
// 004344f7: POP EBP
// 004344f8: POP EDI
// 004344f9: POP ESI
// 004344fa: POP EBX
// 004344fb: RET
// 004344fc: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   Label: LAB_004344fc
//   XREF to: 02cf6a9c (DATA)
// 00434502: MOV AX,word ptr [EAX + EDX*0x2]
// 00434506: AND EAX,0xffff
// 0043450b: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00434511: MOV EBX,EAX
// 00434513: SHR EBX,CL
// 00434515: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 0043451b: SHL EBX,CL
// 0043451d: XOR EDI,EDI
// 0043451f: AND EBX,0xff
// 00434525: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00434529: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 0043452d: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00434533: FILD qword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 00434537: MOV EBX,EAX
// 00434539: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0043453c: FXCH
// 0043453e: FMUL ST1
// 00434540: SHR EBX,CL
// 00434542: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 00434548: SHL EBX,CL
// 0043454a: MOV ECX,EBX
// 0043454c: AND ECX,0xff
// 00434552: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 00434556: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 0043455a: FILD qword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0043455e: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00434564: FMUL ST2
// 00434566: SHR EAX,CL
// 00434568: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 0043456e: SHL EAX,CL
// 00434570: AND EAX,0xff
// 00434575: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 00434579: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0043457d: FILD qword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 00434581: JMP 0x004343d4
//   XREF to: 004343d4 (UNCONDITIONAL_JUMP)
// 00434586: SHL EDX,0x2
//   Label: LAB_00434586
// 00434589: MOV ECX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 0043458f: ADD EDX,ECX
// 00434591: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00434597: SHL EDI,CL
// 00434599: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 0043459f: SHL EAX,CL
// 004345a1: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004345a7: OR EDI,EAX
// 004345a9: SHL EBX,CL
// 004345ab: OR EDI,EBX
// 004345ad: MOV dword ptr [EDX],EDI
// 004345af: MOV ESP,EBP
// 004345b1: POP EBP
// 004345b2: POP EDI
// 004345b3: POP ESI
// 004345b4: POP EBX
// 004345b5: RET
