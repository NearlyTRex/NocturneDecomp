// Name: shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180
// Address: 00556180
// Address Range: [[00556180, 005563c2]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180(CColorQuantizer * this_ptr, CBitmap * * bitmap_ptr)
// Cross-references:
//   shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0 (005563d0) at 00556451 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640d9b
//   TerminatedCString s_Phase_3_00640db1
//   TerminatedCString s_shape_quantize_cpp_00640db9
//   TerminatedCString s_shape_quantize_cpp_00640dcf
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_string.c_strncpy_FUN_00600f40
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_quantize.cpp_CBitmap_ctor_FUN_00556a00
//   shape_quantize.cpp_CBitmap_dtor_FUN_00556c20
//   shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
//   shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0

#include "nocturne.h"

int __cdecl
shape_quantize_cpp_CColorQuantizer_applyQuantization_FUN_00556180
          (CColorQuantizer *this_ptr,CBitmap **bitmap_ptr)

{
  ushort uVar1;
  short start_x;
  int iVar2;
  CBitmap *pCVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uchar *puVar8;
  char *pcVar9;
  byte bVar10;
  char *pcVar11;
  CBitmap *pCVar12;
  uchar *puVar13;
  uchar *puVar14;
  uchar *puVar15;
  
  bVar10 = 0;
  iVar2 = shape_quantize_cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
                    (this_ptr,(uint)(ushort)(*bitmap_ptr)->width);
  if (iVar2 == 0) {
    return 0;
  }
  pCVar3 = (CBitmap *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x28,"..\\shape\\quantize.cpp",900);
  if (pCVar3 != (CBitmap *)0x0) {
    pCVar3 = shape_quantize_cpp_CBitmap_ctor_FUN_00556a00(pCVar3);
  }
  puVar14 = (uchar *)0x0;
  puVar13 = (uchar *)0x0;
  do {
    uVar5 = (uint)(ushort)(*bitmap_ptr)->height;
    if ((int)uVar5 <= (int)puVar14) {
      pCVar12 = pCVar3;
      crt_string_c_strncpy_FUN_00600f40(pCVar3->field0_0x0,(*bitmap_ptr)->field0_0x0,0x14);
      pcVar11 = this_ptr->output_region;
      pcVar9 = (char *)pCVar3->palette;
      for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + (uint)bVar10 * -8 + 4;
        pcVar9 = pcVar9 + (uint)bVar10 * -8 + 4;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pcVar9 = *pcVar11;
        pcVar11 = pcVar11 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
      }
      g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
      g_CurrentDebugLine = 0x3a1;
      if (*bitmap_ptr != (CBitmap *)0x0) {
        pCVar3 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(*bitmap_ptr);
        shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar3);
      }
      *bitmap_ptr = pCVar12;
      return 1;
    }
    puVar15 = puVar14;
    if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
      pcVar11 = "Phase 3";
      iVar2 = (*this_ptr->progress_callback)("Phase 3",uVar5,(int)puVar14);
      puVar13 = puVar14;
      if (iVar2 != 0) {
        g_CurrentDebugLine = 0x38d;
        g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
        if ((CBitmap *)pcVar11 != (CBitmap *)0x0) {
          pCVar3 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20((CBitmap *)pcVar11);
          shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar3);
        }
        return 0;
      }
    }
    uVar5 = (uint)(ushort)(*bitmap_ptr)->width * 3;
    puVar6 = *(undefined4 **)((int)(*bitmap_ptr)->row_table + (int)puVar13);
    puVar7 = (undefined4 *)this_ptr->scanline_buffer;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar10 * -2 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar10 * -2 + 1);
    }
    if ((int)puVar15 % 2 == 0) {
      start_x = (*bitmap_ptr)->width + -1;
      puVar13 = (uchar *)0xffffffff;
      pCVar3 = (CBitmap *)(int)start_x;
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (this_ptr,(uchar *)this_ptr->scanline_buffer,this_ptr->flags_buffer,start_x,-1,
                 (short)((uint)*(undefined4 *)((int)&this_ptr->current_pixel_index + 2) >> 0x10));
    }
    else {
      puVar13 = (uchar *)(int)(*bitmap_ptr)->width;
      pCVar3 = (CBitmap *)0x0;
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (this_ptr,(uchar *)this_ptr->scanline_buffer,this_ptr->flags_buffer,0,
                 (*bitmap_ptr)->width,
                 (short)((uint)*(undefined4 *)((int)&this_ptr->current_pixel_index + 2) >> 0x10));
    }
    uVar1 = (*bitmap_ptr)->width;
    puVar14 = this_ptr->flags_buffer;
    puVar8 = puVar13;
    for (uVar5 = (uint)(uVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)puVar8 = *(undefined4 *)puVar14;
      puVar14 = puVar14 + (uint)bVar10 * -8 + 4;
      puVar8 = puVar8 + (uint)bVar10 * -8 + 4;
    }
    for (uVar5 = (byte)uVar1 & 0xffffff03; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar14;
      puVar14 = puVar14 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    puVar14 = puVar15 + 1;
    puVar13 = puVar13 + 4;
  } while( true );
}


// Assembly code:
// 00556180: PUSH EBX
//   Label: shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180
// 00556181: PUSH ESI
// 00556182: PUSH EDI
// 00556183: PUSH EBP
// 00556184: MOV EBP,ESP
// 00556186: SUB ESP,0x10
// 00556189: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0055618c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055618f: MOV EAX,dword ptr [EAX]
// 00556191: MOV AX,word ptr [EAX + 0x14]
// 00556195: AND EAX,0xffff
// 0055619a: PUSH EAX
// 0055619b: PUSH EBX
// 0055619c: CALL shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
//   XREF to: 00555500 (UNCONDITIONAL_CALL)
// 005561a1: ADD ESP,0x8
// 005561a4: TEST EAX,EAX
// 005561a6: JNZ 0x005561af
//   XREF to: 005561af (CONDITIONAL_JUMP)
// 005561a8: MOV ESP,EBP
// 005561aa: POP EBP
// 005561ab: POP EDI
// 005561ac: POP ESI
// 005561ad: POP EBX
// 005561ae: RET
// 005561af: PUSH 0x384
//   Label: LAB_005561af
// 005561b4: PUSH 0x640d9b
//   XREF to: 00640d9b (DATA)
// 005561b9: PUSH 0x28
// 005561bb: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005561c0: ADD ESP,0xc
// 005561c3: TEST EAX,EAX
// 005561c5: JZ 0x005561ed
//   XREF to: 005561ed (CONDITIONAL_JUMP)
// 005561c7: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005561ca: MOV EDX,dword ptr [EDX]
// 005561cc: PUSH 0x8
// 005561ce: MOV CX,word ptr [EDX + 0x16]
// 005561d2: AND ECX,0xffff
// 005561d8: MOV DX,word ptr [EDX + 0x14]
// 005561dc: PUSH ECX
// 005561dd: AND EDX,0xffff
// 005561e3: PUSH EDX
// 005561e4: PUSH EAX
// 005561e5: CALL shape_quantize.cpp_CBitmap_ctor_FUN_00556a00
//   XREF to: 00556a00 (UNCONDITIONAL_CALL)
// 005561ea: ADD ESP,0x10
// 005561ed: MOV dword ptr [EBP + -0x10],EAX
//   Label: LAB_005561ed
//   XREF to: Stack[-0x20] (WRITE)
// 005561f0: XOR EDX,EDX
// 005561f2: MOV EAX,dword ptr [EAX + 0x20]
// 005561f5: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005561f8: MOV EAX,dword ptr [EAX]
// 005561fa: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005561fd: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00556200: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_00556200
//   XREF to: Stack[0x8] (READ)
// 00556203: MOV EDX,dword ptr [EDX]
// 00556205: MOV AX,word ptr [EDX + 0x16]
// 00556209: MOV ESI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0055620c: AND EAX,0xffff
// 00556211: CMP EAX,ESI
// 00556213: JLE 0x00556350
//   XREF to: 00556350 (CONDITIONAL_JUMP)
// 00556219: CMP dword ptr [EBX],0x0
// 0055621c: JZ 0x00556270
//   XREF to: 00556270 (CONDITIONAL_JUMP)
// 00556222: PUSH ESI
// 00556223: PUSH EAX
// 00556224: PUSH 0x640db1
//   XREF to: 00640db1 (DATA)
// 00556229: CALL dword ptr [EBX]
// 0055622b: ADD ESP,0xc
// 0055622e: TEST EAX,EAX
// 00556230: JZ 0x00556270
//   XREF to: 00556270 (CONDITIONAL_JUMP)
// 00556236: MOV EBX,0x38d
// 0055623b: MOV ECX,0x640db9
//   XREF to: 00640db9 (PARAM)
// 00556240: MOV ESI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00556243: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 00556249: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0055624f: TEST ESI,ESI
// 00556251: JZ 0x00556267
//   XREF to: 00556267 (CONDITIONAL_JUMP)
// 00556253: PUSH 0x0
// 00556255: PUSH ESI
// 00556256: CALL shape_quantize.cpp_CBitmap_dtor_FUN_00556c20
//   XREF to: 00556c20 (UNCONDITIONAL_CALL)
// 0055625b: ADD ESP,0x8
// 0055625e: PUSH EAX
// 0055625f: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00556264: ADD ESP,0x4
// 00556267: XOR EAX,EAX
//   Label: LAB_00556267
// 00556269: MOV ESP,EBP
// 0055626b: POP EBP
// 0055626c: POP EDI
// 0055626d: POP ESI
// 0055626e: POP EBX
// 0055626f: RET
// 00556270: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_00556270
//   XREF to: Stack[0x8] (READ)
// 00556273: MOV EDX,dword ptr [EDX]
// 00556275: XOR ECX,ECX
// 00556277: MOV AX,word ptr [EDX + 0x14]
// 0055627b: MOV EDI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0055627e: MOV CX,AX
// 00556281: MOV EAX,dword ptr [EDX + 0x20]
// 00556284: ADD EAX,EDI
// 00556286: LEA ECX,[ECX + ECX*0x2]
// 00556289: MOV ESI,dword ptr [EAX]
// 0055628b: MOV EDI,dword ptr [EBX + 0xc]
// 0055628e: PUSH EDI
// 0055628f: MOV EAX,ECX
// 00556291: SHR ECX,0x2
// 00556294: MOVSD.REP ES:EDI,ESI
// 00556296: MOV CL,AL
// 00556298: AND CL,0x3
// 0055629b: MOVSB.REP ES:EDI,ESI
// 0055629d: POP EDI
// 0055629e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005562a1: MOV EDX,EAX
// 005562a3: MOV ECX,0x2
// 005562a8: SAR EDX,0x1f
// 005562ab: IDIV ECX
// 005562ad: TEST EDX,EDX
// 005562af: JZ 0x005562db
//   XREF to: 005562db (CONDITIONAL_JUMP)
// 005562b1: MOV EAX,dword ptr [EBX + 0x4b3e]
// 005562b7: SAR EAX,0x10
// 005562ba: PUSH EAX
// 005562bb: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005562be: MOV EAX,dword ptr [EAX]
// 005562c0: MOV AX,word ptr [EAX + 0x14]
// 005562c4: CWDE
// 005562c5: PUSH EAX
// 005562c6: PUSH 0x0
// 005562c8: MOV ECX,dword ptr [EBX + 0x8]
// 005562cb: PUSH ECX
// 005562cc: MOV ESI,dword ptr [EBX + 0xc]
// 005562cf: PUSH ESI
// 005562d0: PUSH EBX
// 005562d1: CALL shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
//   XREF to: 005556f0 (UNCONDITIONAL_CALL)
// 005562d6: ADD ESP,0x18
// 005562d9: JMP 0x00556304
//   XREF to: 00556304 (UNCONDITIONAL_JUMP)
// 005562db: MOV EAX,dword ptr [EBX + 0x4b3e]
//   Label: LAB_005562db
// 005562e1: SAR EAX,0x10
// 005562e4: PUSH EAX
// 005562e5: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005562e8: MOV EAX,dword ptr [EAX]
// 005562ea: MOV AX,word ptr [EAX + 0x14]
// 005562ee: DEC EAX
// 005562ef: PUSH -0x1
// 005562f1: CWDE
// 005562f2: PUSH EAX
// 005562f3: MOV EAX,dword ptr [EBX + 0x8]
// 005562f6: PUSH EAX
// 005562f7: MOV EDX,dword ptr [EBX + 0xc]
// 005562fa: PUSH EDX
// 005562fb: PUSH EBX
// 005562fc: CALL shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
//   XREF to: 005556f0 (UNCONDITIONAL_CALL)
// 00556301: ADD ESP,0x18
// 00556304: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00556304
//   XREF to: Stack[0x8] (READ)
// 00556307: MOV EAX,dword ptr [EAX]
// 00556309: MOV EDI,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0055630c: XOR ECX,ECX
// 0055630e: MOV AX,word ptr [EAX + 0x14]
// 00556312: MOV ESI,dword ptr [EBX + 0x8]
// 00556315: MOV CX,AX
// 00556318: PUSH EDI
// 00556319: MOV EAX,ECX
// 0055631b: SHR ECX,0x2
// 0055631e: MOVSD.REP ES:EDI,ESI
// 00556320: MOV CL,AL
// 00556322: AND CL,0x3
// 00556325: MOVSB.REP ES:EDI,ESI
// 00556327: POP EDI
// 00556328: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055632b: MOV EAX,dword ptr [EAX]
// 0055632d: MOV AX,word ptr [EAX + 0x14]
// 00556331: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00556334: AND EAX,0xffff
// 00556339: INC EDX
// 0055633a: ADD EDI,EAX
// 0055633c: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0055633f: MOV dword ptr [EBP + -0xc],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00556342: ADD EAX,0x4
// 00556345: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00556348: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0055634b: JMP 0x00556200
//   XREF to: 00556200 (UNCONDITIONAL_JUMP)
// 00556350: PUSH 0x14
//   Label: LAB_00556350
// 00556352: PUSH EDX
// 00556353: MOV EDI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00556356: PUSH EDI
// 00556357: LEA ESI,[EBX + 0x4830]
// 0055635d: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 00556362: ADD ESP,0xc
// 00556365: MOV ECX,0x300
// 0055636a: MOV EDI,dword ptr [EDI + 0x24]
// 0055636d: PUSH EDI
// 0055636e: MOV EAX,ECX
// 00556370: SHR ECX,0x2
// 00556373: MOVSD.REP ES:EDI,ESI
// 00556375: MOV CL,AL
// 00556377: AND CL,0x3
// 0055637a: MOVSB.REP ES:EDI,ESI
// 0055637c: POP EDI
// 0055637d: MOV dword ptr [0x0067d20c],0x640dcf
//   XREF to: 0067d20c (WRITE)
//   XREF to: 00640dcf (DATA)
// 00556387: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055638a: MOV EDX,0x3a1
// 0055638f: MOV EAX,dword ptr [EAX]
// 00556391: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 00556397: TEST EAX,EAX
// 00556399: JZ 0x005563af
//   XREF to: 005563af (CONDITIONAL_JUMP)
// 0055639b: PUSH 0x0
// 0055639d: PUSH EAX
// 0055639e: CALL shape_quantize.cpp_CBitmap_dtor_FUN_00556c20
//   XREF to: 00556c20 (UNCONDITIONAL_CALL)
// 005563a3: ADD ESP,0x8
// 005563a6: PUSH EAX
// 005563a7: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005563ac: ADD ESP,0x4
// 005563af: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_005563af
//   XREF to: Stack[0x8] (READ)
// 005563b2: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 005563b5: MOV dword ptr [EAX],EDX
// 005563b7: MOV EAX,0x1
// 005563bc: MOV ESP,EBP
// 005563be: POP EBP
// 005563bf: POP EDI
// 005563c0: POP ESI
// 005563c1: POP EBX
// 005563c2: RET
