// Name: shape_design.c_simpleTexture_FUN_00467350
// Address: 00467350
// Address Range: [[00467350, 004676a8]]
// Convention: __cdecl
// Signature: void shape_design.c_simpleTexture_FUN_00467350(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f6af [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_texture_name_0061c963
//   TerminatedCString s_rb_0061c979
//   TerminatedCString s_art_0061c97c
//   TerminatedCString s_ERROR_Bad_texture_name_0061c980
//   TerminatedCString s_shape_design_c_0061c999
//   TerminatedCString s_Face_map_on_Z_axis_Y_N_0061c9ab
//   double g_TextureScalingFactor = 254
//   TerminatedCString s_s_0061c9ce
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a0c
//   undefined4 DAT_016e9a10
//   undefined4 DAT_016e9a14
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a4c
//   undefined4 DAT_016e9a50
//   undefined4 DAT_016e9a54
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_simpleTexture_FUN_00467350(void)

{
  char cVar1;
  FILE *file_ptr;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char local_70 [8];
  int local_20;
  int local_1c;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_70,0x28,0,0,"Enter texture name : ");
  iVar3 = -1;
  pcVar4 = local_70;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    file_ptr = engine_dosio_c_getFile_FUN_00481a50("art",local_70,"rb");
    if (file_ptr == (FILE *)0x0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("ERROR! Bad texture name!",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      local_70[0] = -0x2f;
      local_70[1] = 's';
      local_70[2] = 'F';
      local_70[3] = '\0';
      engine_2d_c_clearInputAndWait_FUN_00403260();
      local_70[4] = -0x2a;
      local_70[5] = 's';
      local_70[6] = 'F';
      local_70[7] = '\0';
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\shape\\design.c",0x1ffd);
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Face map on Z axis (Y/N) ?",0,0);
      builtin_strncpy(local_70,"\x0etF",4);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      builtin_strncpy(local_70 + 4,"\x13tF",4);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      iVar3 = crt_ctype_c_toupper_FUN_005ff9e0(uVar2 & 0xff);
      if (iVar3 == 0x59) {
        fVar9 = 99999.9;
        fVar8 = 99999.9;
        fVar7 = -99999.9;
        fVar6 = -99999.9;
        for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
          if (g_LoadedVertices[local_1c].vertex.x < fVar9) {
            fVar9 = g_LoadedVertices[local_1c].vertex.x;
          }
          if (g_LoadedVertices[local_1c].vertex.y < fVar8) {
            fVar8 = g_LoadedVertices[local_1c].vertex.y;
          }
          if (fVar7 < g_LoadedVertices[local_1c].vertex.x) {
            fVar7 = g_LoadedVertices[local_1c].vertex.x;
          }
          if (fVar6 < g_LoadedVertices[local_1c].vertex.y) {
            fVar6 = g_LoadedVertices[local_1c].vertex.y;
          }
        }
        for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
          for (local_20 = 0; local_20 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
              local_20 = local_20 + 1) {
            uVar2 = g_ModelPolygonData[local_1c].vertex_indices[local_20];
            g_ModelPolygonData[local_1c].uv_u[local_20] =
                 ((g_LoadedVertices[uVar2].vertex.x - fVar9) * (float)g_TextureScalingFactor) /
                 (fVar7 - fVar9) + 1.0;
            g_ModelPolygonData[local_1c].uv_v[local_20] =
                 ((g_LoadedVertices[uVar2].vertex.y - fVar8) * (float)g_TextureScalingFactor) /
                 (fVar6 - fVar8) + 1.0;
          }
        }
      }
      else {
        for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
          g_ModelPolygonData[local_1c].uv_u[0] = 1.0;
          g_ModelPolygonData[local_1c].uv_u[1] = 255.0;
          g_ModelPolygonData[local_1c].uv_u[2] = 255.0;
          g_ModelPolygonData[local_1c].uv_u[3] = 1.0;
          g_ModelPolygonData[local_1c].uv_v[0] = 1.0;
          g_ModelPolygonData[local_1c].uv_v[1] = 1.0;
          g_ModelPolygonData[local_1c].uv_v[2] = 255.0;
          g_ModelPolygonData[local_1c].uv_v[3] = 255.0;
          g_ModelPolygonData[local_1c].polygon_type = 2;
          local_70[4] = -0x66;
          local_70[5] = 'v';
          local_70[6] = 'F';
          local_70[7] = '\0';
          crt_stdio_c_sprintf_FUN_005fdbd0(g_ModelPolygonData[local_1c].texture_name,"%s");
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00467350: PUSH EBX
//   Label: shape_design.c_simpleTexture_FUN_00467350
// 00467351: PUSH ESI
// 00467352: PUSH EDI
// 00467353: PUSH EBP
// 00467354: MOV EBP,ESP
// 00467356: SUB ESP,0x74
// 0046735c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00467361: MOV ECX,0x61c963
//   XREF to: 0061c963 (DATA)
// 00467366: PUSH ECX
//   XREF to: 0061c963 (DATA)
// 00467367: PUSH 0x0
// 00467369: PUSH 0x0
// 0046736b: PUSH 0x28
// 0046736d: LEA ECX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00467370: PUSH ECX
// 00467371: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00467376: ADD ESP,0x14
// 00467379: LEA EDI,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 0046737c: SUB ECX,ECX
// 0046737e: DEC ECX
// 0046737f: XOR EAX,EAX
// 00467381: SCASB.REPNE ES:EDI
// 00467383: NOT ECX
// 00467385: DEC ECX
// 00467386: TEST ECX,ECX
// 00467388: JNZ 0x0046738f
//   XREF to: 0046738f (CONDITIONAL_JUMP)
// 0046738a: JMP 0x004676a2
//   XREF to: 004676a2 (UNCONDITIONAL_JUMP)
// 0046738f: MOV EAX,0x61c979
//   Label: LAB_0046738f
//   XREF to: 0061c979 (DATA)
// 00467394: PUSH EAX
//   XREF to: 0061c979 (DATA)
// 00467395: LEA EAX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00467398: PUSH EAX
// 00467399: MOV EAX,0x61c97c
//   XREF to: 0061c97c (PARAM)
// 0046739e: PUSH EAX
//   XREF to: 0061c97c (DATA)
// 0046739f: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004673a4: ADD ESP,0xc
// 004673a7: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004673aa: CMP dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (READ)
// 004673ae: JNZ 0x004673db
//   XREF to: 004673db (CONDITIONAL_JUMP)
// 004673b0: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004673b5: PUSH 0x0
// 004673b7: PUSH 0x0
// 004673b9: MOV EAX,0x61c980
//   XREF to: 0061c980 (PARAM)
// 004673be: PUSH EAX
//   XREF to: 0061c980 (DATA)
// 004673bf: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004673c4: ADD ESP,0xc
// 004673c7: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004673cc: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004673d1: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004673d6: JMP 0x004676a2
//   XREF to: 004676a2 (UNCONDITIONAL_JUMP)
// 004673db: PUSH 0x1ffd
//   Label: LAB_004673db
// 004673e0: MOV EAX,0x61c999
//   XREF to: 0061c999 (DATA)
// 004673e5: PUSH EAX
//   XREF to: 0061c999 (DATA)
// 004673e6: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004673e9: PUSH EAX
// 004673ea: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004673ef: ADD ESP,0xc
// 004673f2: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004673f7: PUSH 0x0
// 004673f9: PUSH 0x0
// 004673fb: MOV EAX,0x61c9ab
//   XREF to: 0061c9ab (PARAM)
// 00467400: PUSH EAX
//   XREF to: 0061c9ab (DATA)
// 00467401: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00467406: ADD ESP,0xc
// 00467409: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046740e: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00467413: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00467418: AND EAX,0xff
// 0046741d: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00467420: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467423: PUSH EAX
// 00467424: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 00467429: ADD ESP,0x4
// 0046742c: CMP EAX,0x59
// 0046742f: JNZ 0x004675c2
//   XREF to: 004675c2 (CONDITIONAL_JUMP)
// 00467435: MOV dword ptr [EBP + -0x64],0x47c34ff3
//   XREF to: Stack[-0x74] (WRITE)
// 0046743c: MOV dword ptr [EBP + -0x68],0x47c34ff3
//   XREF to: Stack[-0x78] (WRITE)
// 00467443: MOV dword ptr [EBP + -0x6c],0xc7c34ff3
//   XREF to: Stack[-0x7c] (WRITE)
// 0046744a: MOV dword ptr [EBP + -0x70],0xc7c34ff3
//   XREF to: Stack[-0x80] (WRITE)
// 00467451: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00467458: JMP 0x00467460
//   XREF to: 00467460 (UNCONDITIONAL_JUMP)
// 0046745a: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046745a
//   XREF to: Stack[-0x1c] (READ)
// 0046745d: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00467460: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00467460
//   XREF to: Stack[-0x1c] (READ)
// 00467463: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00467469: JGE 0x004674f0
//   XREF to: 004674f0 (CONDITIONAL_JUMP)
// 0046746f: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00467473: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00467479: FCOMP float ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 0046747c: FNSTSW AX
// 0046747e: SAHF
// 0046747f: JNC 0x0046748e
//   XREF to: 0046748e (CONDITIONAL_JUMP)
// 00467481: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00467485: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046748b: MOV dword ptr [EBP + -0x64],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0046748e: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   Label: LAB_0046748e
//   XREF to: Stack[-0x1c] (READ)
// 00467492: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00467498: FCOMP float ptr [EBP + -0x68]
//   XREF to: Stack[-0x78] (READ)
// 0046749b: FNSTSW AX
// 0046749d: SAHF
// 0046749e: JNC 0x004674ad
//   XREF to: 004674ad (CONDITIONAL_JUMP)
// 004674a0: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 004674a4: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004674aa: MOV dword ptr [EBP + -0x68],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004674ad: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   Label: LAB_004674ad
//   XREF to: Stack[-0x1c] (READ)
// 004674b1: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 004674b7: FCOMP float ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 004674ba: FNSTSW AX
// 004674bc: SAHF
// 004674bd: JBE 0x004674cc
//   XREF to: 004674cc (CONDITIONAL_JUMP)
// 004674bf: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 004674c3: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 004674c9: MOV dword ptr [EBP + -0x6c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 004674cc: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   Label: LAB_004674cc
//   XREF to: Stack[-0x1c] (READ)
// 004674d0: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004674d6: FCOMP float ptr [EBP + -0x70]
//   XREF to: Stack[-0x80] (READ)
// 004674d9: FNSTSW AX
// 004674db: SAHF
// 004674dc: JBE 0x004674eb
//   XREF to: 004674eb (CONDITIONAL_JUMP)
// 004674de: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 004674e2: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004674e8: MOV dword ptr [EBP + -0x70],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 004674eb: JMP 0x0046745a
//   Label: LAB_004674eb
//   XREF to: 0046745a (UNCONDITIONAL_JUMP)
// 004674f0: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_004674f0
//   XREF to: Stack[-0x1c] (WRITE)
// 004674f7: JMP 0x004674ff
//   XREF to: 004674ff (UNCONDITIONAL_JUMP)
// 004674f9: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004674f9
//   XREF to: Stack[-0x1c] (READ)
// 004674fc: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 004674ff: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004674ff
//   XREF to: Stack[-0x1c] (READ)
// 00467502: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00467508: JGE 0x004675bd
//   XREF to: 004675bd (CONDITIONAL_JUMP)
// 0046750e: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 00467515: JMP 0x0046751d
//   XREF to: 0046751d (UNCONDITIONAL_JUMP)
// 00467517: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00467517
//   XREF to: Stack[-0x20] (READ)
// 0046751a: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0046751d: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   Label: LAB_0046751d
//   XREF to: Stack[-0x1c] (READ)
// 00467524: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00467527: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0046752d: JGE 0x004675b8
//   XREF to: 004675b8 (CONDITIONAL_JUMP)
// 00467533: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0046753a: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046753d: SHL EAX,0x2
// 00467540: ADD EAX,EDX
// 00467542: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00467548: MOV dword ptr [EBP + -0x74],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0046754b: IMUL EAX,dword ptr [EBP + -0x74],0x14
//   XREF to: Stack[-0x84] (READ)
// 0046754f: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00467555: FSUB float ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 00467558: FMUL double ptr [0x0061c9c6]
//   XREF to: 0061c9c6 (READ)
// 0046755e: FLD float ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 00467561: FSUB float ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 00467564: FDIVP
// 00467566: FLD1
// 00467568: FADDP
// 0046756a: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00467571: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00467574: SHL EAX,0x2
// 00467577: ADD EAX,EDX
// 00467579: FSTP float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046757f: IMUL EAX,dword ptr [EBP + -0x74],0x14
//   XREF to: Stack[-0x84] (READ)
// 00467583: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00467589: FSUB float ptr [EBP + -0x68]
//   XREF to: Stack[-0x78] (READ)
// 0046758c: FMUL double ptr [0x0061c9c6]
//   XREF to: 0061c9c6 (READ)
// 00467592: FLD float ptr [EBP + -0x70]
//   XREF to: Stack[-0x80] (READ)
// 00467595: FSUB float ptr [EBP + -0x68]
//   XREF to: Stack[-0x78] (READ)
// 00467598: FDIVP
// 0046759a: FLD1
// 0046759c: FADDP
// 0046759e: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 004675a5: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004675a8: SHL EAX,0x2
// 004675ab: ADD EAX,EDX
// 004675ad: FSTP float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 004675b3: JMP 0x00467517
//   XREF to: 00467517 (UNCONDITIONAL_JUMP)
// 004675b8: JMP 0x004674f9
//   Label: LAB_004675b8
//   XREF to: 004674f9 (UNCONDITIONAL_JUMP)
// 004675bd: JMP 0x004676a2
//   Label: LAB_004675bd
//   XREF to: 004676a2 (UNCONDITIONAL_JUMP)
// 004675c2: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_004675c2
//   XREF to: Stack[-0x1c] (WRITE)
// 004675c9: JMP 0x004675d1
//   XREF to: 004675d1 (UNCONDITIONAL_JUMP)
// 004675cb: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004675cb
//   XREF to: Stack[-0x1c] (READ)
// 004675ce: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 004675d1: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004675d1
//   XREF to: Stack[-0x1c] (READ)
// 004675d4: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 004675da: JGE 0x004676a2
//   XREF to: 004676a2 (CONDITIONAL_JUMP)
// 004675e0: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 004675e7: MOV dword ptr [EAX + 0x16e9a08],0x3f800000
//   XREF to: 016e9a08 (DATA)
// 004675f1: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 004675f8: MOV dword ptr [EAX + 0x16e9a0c],0x437f0000
//   XREF to: 016e9a0c (DATA)
// 00467602: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00467609: MOV dword ptr [EAX + 0x16e9a10],0x437f0000
//   XREF to: 016e9a10 (DATA)
// 00467613: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0046761a: MOV dword ptr [EAX + 0x16e9a14],0x3f800000
//   XREF to: 016e9a14 (DATA)
// 00467624: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0046762b: MOV dword ptr [EAX + 0x16e9a48],0x3f800000
//   XREF to: 016e9a48 (DATA)
// 00467635: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0046763c: MOV dword ptr [EAX + 0x16e9a4c],0x3f800000
//   XREF to: 016e9a4c (DATA)
// 00467646: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0046764d: MOV dword ptr [EAX + 0x16e9a50],0x437f0000
//   XREF to: 016e9a50 (DATA)
// 00467657: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0046765e: MOV dword ptr [EAX + 0x16e9a54],0x437f0000
//   XREF to: 016e9a54 (DATA)
// 00467668: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0046766f: MOV dword ptr [EAX + 0x16e9910],0x2
//   XREF to: 016e9910 (DATA)
// 00467679: LEA EAX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 0046767c: PUSH EAX
// 0046767d: MOV EAX,0x61c9ce
//   XREF to: 0061c9ce (DATA)
// 00467682: PUSH EAX
//   XREF to: 0061c9ce (DATA)
// 00467683: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0046768a: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 0046768f: ADD EAX,EDX
// 00467691: ADD EAX,0x4
// 00467694: PUSH EAX
// 00467695: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0046769a: ADD ESP,0xc
// 0046769d: JMP 0x004675cb
//   XREF to: 004675cb (UNCONDITIONAL_JUMP)
// 004676a2: MOV ESP,EBP
//   Label: LAB_004676a2
// 004676a4: POP EBP
// 004676a5: POP EDI
// 004676a6: POP ESI
// 004676a7: POP EBX
// 004676a8: RET
