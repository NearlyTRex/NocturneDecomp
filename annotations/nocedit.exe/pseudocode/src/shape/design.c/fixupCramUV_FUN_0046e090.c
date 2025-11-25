// Name: shape_design.c_fixupCramUV_FUN_0046e090
// Address: 0046e090
// Address Range: [[0046e090, 0046e33e]]
// Convention: __cdecl
// Signature: void shape_design.c_fixupCramUV_FUN_0046e090(int atlas_texture_index, float * u_coord, float * v_coord)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (0047a3e0) at 0047a6df [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a577 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 (0051bac0) at 0051bc3f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 (0051ead0) at 0051eba3 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0061ddfe = 65536
//   double DOUBLE_0061de06 = 256
//   double DOUBLE_0061de0e = 256.010000000000
//   double DOUBLE_0061de16 = -0.0100000000000000
//   TerminatedCString s_fixupCramUV_UV_out_of_ra_0061de1e
//   TerminatedCString s_shape_design_c_0061de44
//   double DOUBLE_0061de56 = 255.999741000000
//   double DOUBLE_0061de5e = 255.999741000000
//   STextureAtlasEntry[250] g_TextureAtlasEntries
//   undefined4 DAT_01e8d478
//   undefined4 DAT_01e8d48c
//   undefined4 DAT_01e8d490
//   undefined4 DAT_01e8d494
//   undefined4 DAT_01e8d498
//   undefined4 DAT_01e8d4a4
//   undefined4 DAT_01e8d4a8
//   undefined4 DAT_01e8d4ac
//   undefined4 DAT_01e8d4b0
//   int g_TextureAtlasDimension
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl
shape_design_c_fixupCramUV_FUN_0046e090(int atlas_texture_index,float *u_coord,float *v_coord)

{
  float fVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  
  fVar1 = *u_coord * (float)DOUBLE_0061ddfe;
  fVar2 = *v_coord * (float)DOUBLE_0061ddfe;
  if (fVar1 < (float)g_TextureAtlasEntries[atlas_texture_index].min_u) {
    fVar1 = (float)g_TextureAtlasEntries[atlas_texture_index].min_u;
  }
  if ((float)g_TextureAtlasEntries[atlas_texture_index].max_u < fVar1) {
    fVar1 = (float)g_TextureAtlasEntries[atlas_texture_index].max_u;
  }
  if (fVar2 < (float)g_TextureAtlasEntries[atlas_texture_index].min_v) {
    fVar2 = (float)g_TextureAtlasEntries[atlas_texture_index].min_v;
  }
  if ((float)g_TextureAtlasEntries[atlas_texture_index].max_v < fVar2) {
    fVar2 = (float)g_TextureAtlasEntries[atlas_texture_index].max_v;
  }
  fVar1 = (float)g_TextureAtlasEntries[atlas_texture_index].packed_width *
          ((fVar1 - (float)g_TextureAtlasEntries[atlas_texture_index].min_u) /
          (float)(g_TextureAtlasEntries[atlas_texture_index].max_u -
                 g_TextureAtlasEntries[atlas_texture_index].min_u));
  fVar2 = (float)g_TextureAtlasEntries[atlas_texture_index].packed_height *
          ((fVar2 - (float)g_TextureAtlasEntries[atlas_texture_index].min_v) /
          (float)(g_TextureAtlasEntries[atlas_texture_index].max_v -
                 g_TextureAtlasEntries[atlas_texture_index].min_v));
  if (g_TextureAtlasEntries[atlas_texture_index].rotation_flag == 0) {
    *u_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_x + fVar1;
    *v_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_y + fVar2;
  }
  else {
    *u_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_x +
               ((float)g_TextureAtlasEntries[atlas_texture_index].packed_height - fVar2);
    *v_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_y + fVar1;
  }
  *u_coord = (float)((DOUBLE_0061de06 / (double)g_TextureAtlasDimension) * (double)*u_coord);
  *v_coord = (float)((DOUBLE_0061de06 / (double)g_TextureAtlasDimension) * (double)*v_coord);
  if (((((float)DOUBLE_0061de0e < *u_coord) || ((float)DOUBLE_0061de0e < *v_coord)) ||
      (*u_coord < (float)DOUBLE_0061de16)) || (*v_coord < (float)DOUBLE_0061de16)) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffff6c,"fixupCramUV - UV out of range: %f, %f",(double)*u_coord,
               (double)*v_coord);
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x2c3b;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff6c);
  }
  if (*u_coord < 0.0) {
    *u_coord = 0.0;
  }
  if (*v_coord < 0.0) {
    *v_coord = 0.0;
  }
  if ((float)DOUBLE_0061de56 < *u_coord) {
    *u_coord = 255.99974;
  }
  if ((float)DOUBLE_0061de5e < *v_coord) {
    *v_coord = 255.99974;
  }
  return;
}


// Assembly code:
// 0046e090: PUSH EBX
//   Label: shape_design.c_fixupCramUV_FUN_0046e090
// 0046e091: PUSH ESI
// 0046e092: PUSH EDI
// 0046e093: PUSH EBP
// 0046e094: MOV EBP,ESP
// 0046e096: SUB ESP,0x84
// 0046e09c: IMUL EAX,dword ptr [EBP + 0x14],0x250
//   XREF to: Stack[0x4] (READ)
// 0046e0a3: MOV EDX,0x1e8d264
//   XREF to: 01e8d264 (DATA)
// 0046e0a8: ADD EDX,EAX
// 0046e0aa: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0046e0ad: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046e0b0: FLD float ptr [EAX]
// 0046e0b2: FMUL double ptr [0x0061ddfe]
//   XREF to: 0061ddfe (READ)
// 0046e0b8: FSTP double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0046e0bb: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046e0be: FLD float ptr [EAX]
// 0046e0c0: FMUL double ptr [0x0061ddfe]
//   XREF to: 0061ddfe (READ)
// 0046e0c6: FSTP double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0046e0c9: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e0cc: FILD dword ptr [EAX + 0x240]
//   XREF to: 01e8d4a4 (DATA)
// 0046e0d2: FCOMP double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046e0d5: FNSTSW AX
// 0046e0d7: SAHF
// 0046e0d8: JBE 0x0046e0e6
//   XREF to: 0046e0e6 (CONDITIONAL_JUMP)
// 0046e0da: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e0dd: FILD dword ptr [EAX + 0x240]
//   XREF to: 01e8d4a4 (DATA)
// 0046e0e3: FSTP double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0046e0e6: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046e0e6
//   XREF to: Stack[-0x14] (READ)
// 0046e0e9: FILD dword ptr [EAX + 0x248]
//   XREF to: 01e8d4ac (DATA)
// 0046e0ef: FCOMP double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046e0f2: FNSTSW AX
// 0046e0f4: SAHF
// 0046e0f5: JNC 0x0046e103
//   XREF to: 0046e103 (CONDITIONAL_JUMP)
// 0046e0f7: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e0fa: FILD dword ptr [EAX + 0x248]
//   XREF to: 01e8d4ac (DATA)
// 0046e100: FSTP double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0046e103: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046e103
//   XREF to: Stack[-0x14] (READ)
// 0046e106: FILD dword ptr [EAX + 0x244]
//   XREF to: 01e8d4a8 (DATA)
// 0046e10c: FCOMP double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e10f: FNSTSW AX
// 0046e111: SAHF
// 0046e112: JBE 0x0046e120
//   XREF to: 0046e120 (CONDITIONAL_JUMP)
// 0046e114: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e117: FILD dword ptr [EAX + 0x244]
//   XREF to: 01e8d4a8 (DATA)
// 0046e11d: FSTP double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0046e120: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046e120
//   XREF to: Stack[-0x14] (READ)
// 0046e123: FILD dword ptr [EAX + 0x24c]
//   XREF to: 01e8d4b0 (DATA)
// 0046e129: FCOMP double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e12c: FNSTSW AX
// 0046e12e: SAHF
// 0046e12f: JNC 0x0046e13d
//   XREF to: 0046e13d (CONDITIONAL_JUMP)
// 0046e131: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e134: FILD dword ptr [EAX + 0x24c]
//   XREF to: 01e8d4b0 (DATA)
// 0046e13a: FSTP double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0046e13d: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046e13d
//   XREF to: Stack[-0x14] (READ)
// 0046e140: MOV EAX,dword ptr [EAX + 0x248]
//   XREF to: 01e8d4ac (DATA)
// 0046e146: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e149: SUB EAX,dword ptr [EDX + 0x240]
//   XREF to: 01e8d4a4 (DATA)
// 0046e14f: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0046e152: FILD dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e155: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e158: FILD dword ptr [EAX + 0x240]
//   XREF to: 01e8d4a4 (DATA)
// 0046e15e: FSUBR double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046e161: FDIVRP
// 0046e163: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e166: FILD dword ptr [EAX + 0x230]
//   XREF to: 01e8d494 (DATA)
// 0046e16c: FMULP
// 0046e16e: FSTP double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0046e171: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e174: MOV EAX,dword ptr [EAX + 0x24c]
//   XREF to: 01e8d4b0 (DATA)
// 0046e17a: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e17d: SUB EAX,dword ptr [EDX + 0x244]
//   XREF to: 01e8d4a8 (DATA)
// 0046e183: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0046e186: FILD dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046e189: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e18c: FILD dword ptr [EAX + 0x244]
//   XREF to: 01e8d4a8 (DATA)
// 0046e192: FSUBR double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e195: FDIVRP
// 0046e197: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e19a: FILD dword ptr [EAX + 0x234]
//   XREF to: 01e8d498 (DATA)
// 0046e1a0: FMULP
// 0046e1a2: FSTP double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0046e1a5: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e1a8: CMP dword ptr [EAX + 0x214],0x0
//   XREF to: 01e8d478 (DATA)
// 0046e1af: JNZ 0x0046e1d5
//   XREF to: 0046e1d5 (CONDITIONAL_JUMP)
// 0046e1b1: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e1b4: FILD dword ptr [EAX + 0x228]
//   XREF to: 01e8d48c (DATA)
// 0046e1ba: FADD double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046e1bd: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046e1c0: FSTP float ptr [EAX]
// 0046e1c2: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e1c5: FILD dword ptr [EAX + 0x22c]
//   XREF to: 01e8d490 (DATA)
// 0046e1cb: FADD double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e1ce: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046e1d1: FSTP float ptr [EAX]
// 0046e1d3: JMP 0x0046e202
//   XREF to: 0046e202 (UNCONDITIONAL_JUMP)
// 0046e1d5: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046e1d5
//   XREF to: Stack[-0x14] (READ)
// 0046e1d8: FILD dword ptr [EAX + 0x234]
//   XREF to: 01e8d498 (DATA)
// 0046e1de: FSUB double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e1e1: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e1e4: FILD dword ptr [EAX + 0x228]
//   XREF to: 01e8d48c (DATA)
// 0046e1ea: FADDP
// 0046e1ec: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046e1ef: FSTP float ptr [EAX]
// 0046e1f1: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e1f4: FILD dword ptr [EAX + 0x22c]
//   XREF to: 01e8d490 (DATA)
// 0046e1fa: FADD double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046e1fd: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046e200: FSTP float ptr [EAX]
// 0046e202: FILD dword ptr [0x01eb1760]
//   Label: LAB_0046e202
//   XREF to: 01eb1760 (READ)
// 0046e208: FDIVR double ptr [0x0061de06]
//   XREF to: 0061de06 (READ)
// 0046e20e: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046e211: FLD float ptr [EAX]
// 0046e213: FSTP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0046e216: FMUL double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046e219: FSTP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0046e21c: FLD double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046e21f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046e222: FSTP float ptr [EAX]
// 0046e224: FILD dword ptr [0x01eb1760]
//   XREF to: 01eb1760 (READ)
// 0046e22a: FDIVR double ptr [0x0061de06]
//   XREF to: 0061de06 (READ)
// 0046e230: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046e233: FLD float ptr [EAX]
// 0046e235: FSTP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0046e238: FMUL double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046e23b: FSTP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0046e23e: FLD double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046e241: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046e244: FSTP float ptr [EAX]
// 0046e246: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046e249: FLD float ptr [EAX]
// 0046e24b: FCOMP double ptr [0x0061de0e]
//   XREF to: 0061de0e (READ)
// 0046e251: FNSTSW AX
// 0046e253: SAHF
// 0046e254: JA 0x0046e266
//   XREF to: 0046e266 (CONDITIONAL_JUMP)
// 0046e256: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046e259: FLD float ptr [EAX]
// 0046e25b: FCOMP double ptr [0x0061de0e]
//   XREF to: 0061de0e (READ)
// 0046e261: FNSTSW AX
// 0046e263: SAHF
// 0046e264: JBE 0x0046e268
//   XREF to: 0046e268 (CONDITIONAL_JUMP)
// 0046e266: JMP 0x0046e278
//   Label: LAB_0046e266
//   XREF to: 0046e278 (UNCONDITIONAL_JUMP)
// 0046e268: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0046e268
//   XREF to: Stack[0x8] (READ)
// 0046e26b: FLD float ptr [EAX]
// 0046e26d: FCOMP double ptr [0x0061de16]
//   XREF to: 0061de16 (READ)
// 0046e273: FNSTSW AX
// 0046e275: SAHF
// 0046e276: JNC 0x0046e27a
//   XREF to: 0046e27a (CONDITIONAL_JUMP)
// 0046e278: JMP 0x0046e28a
//   Label: LAB_0046e278
//   XREF to: 0046e28a (UNCONDITIONAL_JUMP)
// 0046e27a: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0046e27a
//   XREF to: Stack[0xc] (READ)
// 0046e27d: FLD float ptr [EAX]
// 0046e27f: FCOMP double ptr [0x0061de16]
//   XREF to: 0061de16 (READ)
// 0046e285: FNSTSW AX
// 0046e287: SAHF
// 0046e288: JNC 0x0046e2d8
//   XREF to: 0046e2d8 (CONDITIONAL_JUMP)
// 0046e28a: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0046e28a
//   XREF to: Stack[0xc] (READ)
// 0046e28d: FLD float ptr [EAX]
// 0046e28f: SUB ESP,0x8
// 0046e292: FSTP double ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 0046e295: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046e298: FLD float ptr [EAX]
// 0046e29a: SUB ESP,0x8
// 0046e29d: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa4] (DATA)
// 0046e2a0: MOV EAX,0x61de1e
//   XREF to: 0061de1e (DATA)
// 0046e2a5: PUSH EAX
//   XREF to: 0061de1e (DATA)
// 0046e2a6: LEA EAX,[EBP + 0xffffff7c]
//   XREF to: Stack[-0x94] (DATA)
// 0046e2ac: PUSH EAX
// 0046e2ad: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0046e2b2: ADD ESP,0x18
// 0046e2b5: MOV dword ptr [0x02f0ca48],0x61de44
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061de44 (DATA)
// 0046e2bf: MOV dword ptr [0x02f0ca4c],0x2c3b
//   XREF to: 02f0ca4c (WRITE)
// 0046e2c9: LEA EAX,[EBP + 0xffffff7c]
//   XREF to: Stack[-0x94] (DATA)
// 0046e2cf: PUSH EAX
// 0046e2d0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0046e2d5: ADD ESP,0x4
// 0046e2d8: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0046e2d8
//   XREF to: Stack[0x8] (READ)
// 0046e2db: FLD float ptr [EAX]
// 0046e2dd: FLDZ
// 0046e2df: FCOMPP
// 0046e2e1: FNSTSW AX
// 0046e2e3: SAHF
// 0046e2e4: JBE 0x0046e2ef
//   XREF to: 0046e2ef (CONDITIONAL_JUMP)
// 0046e2e6: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046e2e9: MOV dword ptr [EAX],0x0
// 0046e2ef: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0046e2ef
//   XREF to: Stack[0xc] (READ)
// 0046e2f2: FLD float ptr [EAX]
// 0046e2f4: FLDZ
// 0046e2f6: FCOMPP
// 0046e2f8: FNSTSW AX
// 0046e2fa: SAHF
// 0046e2fb: JBE 0x0046e306
//   XREF to: 0046e306 (CONDITIONAL_JUMP)
// 0046e2fd: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046e300: MOV dword ptr [EAX],0x0
// 0046e306: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0046e306
//   XREF to: Stack[0x8] (READ)
// 0046e309: FLD float ptr [EAX]
// 0046e30b: FCOMP double ptr [0x0061de56]
//   XREF to: 0061de56 (READ)
// 0046e311: FNSTSW AX
// 0046e313: SAHF
// 0046e314: JBE 0x0046e31f
//   XREF to: 0046e31f (CONDITIONAL_JUMP)
// 0046e316: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046e319: MOV dword ptr [EAX],0x437fffef
// 0046e31f: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0046e31f
//   XREF to: Stack[0xc] (READ)
// 0046e322: FLD float ptr [EAX]
// 0046e324: FCOMP double ptr [0x0061de5e]
//   XREF to: 0061de5e (READ)
// 0046e32a: FNSTSW AX
// 0046e32c: SAHF
// 0046e32d: JBE 0x0046e338
//   XREF to: 0046e338 (CONDITIONAL_JUMP)
// 0046e32f: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046e332: MOV dword ptr [EAX],0x437fffef
// 0046e338: MOV ESP,EBP
//   Label: LAB_0046e338
// 0046e33a: POP EBP
// 0046e33b: POP EDI
// 0046e33c: POP ESI
// 0046e33d: POP EBX
// 0046e33e: RET
