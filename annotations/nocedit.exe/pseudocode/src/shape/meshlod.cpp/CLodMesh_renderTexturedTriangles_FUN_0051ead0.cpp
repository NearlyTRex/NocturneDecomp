// Name: shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
// Address: 0051ead0
// Address Range: [[0051ead0, 0051ecc9]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh * this_ptr, int enable_texture_lookup, int use_atlas_mode)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051e571 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 (0051d520) at 0051d94f [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00638529 = 65535
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   SMRGLTextureBasic g_TempTextureDescriptor
//   undefined4 DAT_02f31248
//   undefined4 DAT_02f31249
//   undefined4 DAT_02f3124a
//   undefined4 DAT_02f3124b
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   shape_design.c_findTextureByFilename_FUN_0046dfc0
//   shape_design.c_fixupCramUV_FUN_0046e090
//   shape_design.c_getAtlasMapIndex_FUN_0046e030
//   shape_design.c_getTextureName_FUN_0046e060

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
          (CLodMesh *this_ptr,int enable_texture_lookup,int use_atlas_mode)

{
  char cVar1;
  float extraout_EAX;
  float fVar2;
  int iVar3;
  char *pcVar4;
  int *atlas_texture_index;
  int *extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000010;
  SMRGLTextureBasic *texture;
  SMRGLHeaderPrimitive local_6c;
  int aiStack_54 [9];
  float local_30;
  float local_2c [2];
  undefined4 local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  
  local_6c.surface_normal.A = 0;
  local_6c.base.count = 0;
  local_6c.base.type = 0;
  local_24 = 0xffffffff;
  iVar3 = this_ptr->tri_count;
  local_1c = (int *)0x0;
  if (0 < iVar3) {
    local_20 = 0;
    do {
      local_18 = (int *)((int)this_ptr->tri_data->attribute_indices + local_20);
      if (local_18[0x10] == 0) {
        atlas_texture_index = (int *)*local_18;
        if ((-1 < (int)atlas_texture_index) && (enable_texture_lookup != 0)) {
          atlas_texture_index =
               (int *)shape_design_c_findTextureByFilename_FUN_0046dfc0
                                (this_ptr->submesh_data[(int)atlas_texture_index].texture_filename);
          iVar3 = extraout_EDX_01;
        }
        local_14 = local_18 + 3;
        iVar5 = 0;
        piVar6 = local_18;
        piVar7 = local_18;
        do {
          *(int *)((int)aiStack_54 + iVar5 + -0xc) = piVar6[4];
          local_30 = (float)piVar7[7];
          fVar2 = (float)piVar7[8];
          local_2c[0] = fVar2;
          if ((-1 < (int)atlas_texture_index) && (enable_texture_lookup != 0)) {
            shape_design_c_fixupCramUV_FUN_0046e090((int)atlas_texture_index,&local_30,local_2c);
            fVar2 = extraout_EAX;
            iVar3 = extraout_EDX;
          }
          fVar9 = (float10)local_30 * (float10)FLOAT_00638529;
          fVar10 = (float10)local_2c[0] * (float10)FLOAT_00638529;
          piVar7 = piVar7 + 2;
          dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar3,fVar2));
          dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
          iVar3 = (int)((ulonglong)dVar11 >> 0x20);
          local_20 = (int)ROUND(fVar10);
          *(int *)((int)aiStack_54 + iVar5) = (int)ROUND(fVar9);
          piVar6 = piVar6 + 1;
          *(int *)((int)aiStack_54 + iVar5 + 4) = local_20;
          iVar5 = iVar5 + 0xc;
        } while (piVar6 != extraout_ECX);
        if ((int)atlas_texture_index < 0) {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,-(((uint)local_14 & 0x7f) + 0x80));
          engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                    (g_CDemonRendererPtr,&local_6c);
          iVar3 = extraout_EDX_02;
        }
        else {
          if (atlas_texture_index != local_1c) {
            if (in_stack_00000010 == 0) {
              texture = (SMRGLTextureBasic *)
                        ((int)atlas_texture_index * 0x48 + *(int *)(use_atlas_mode + 0x14));
            }
            else {
              iVar3 = shape_design_c_getAtlasMapIndex_FUN_0046e030((int)atlas_texture_index);
              pcVar4 = shape_design_c_getTextureName_FUN_0046e060(iVar3);
              pcVar8 = g_TempTextureDescriptor.texture_name;
              do {
                cVar1 = *pcVar4;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar4[1];
                pcVar4 = pcVar4 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              texture = &g_TempTextureDescriptor;
            }
            engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture);
            local_18 = atlas_texture_index;
          }
          engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                    (g_CDemonRendererPtr,&local_6c);
          iVar3 = extraout_EDX_00;
        }
      }
      local_1c = (int *)((int)local_1c + 1);
      local_20 = local_20 + 0x8c;
    } while ((int)local_1c < this_ptr->tri_count);
  }
  return;
}


// Assembly code:
// 0051ead0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
// 0051ead1: PUSH ESI
// 0051ead2: PUSH EDI
// 0051ead3: PUSH EBP
// 0051ead4: SUB ESP,0x68
// 0051ead7: MOV EDX,0x3
// 0051eadc: MOV EBP,0xffffffff
// 0051eae1: XOR ECX,ECX
// 0051eae3: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 0051eae7: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x64] (WRITE)
// 0051eaeb: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x68] (WRITE)
// 0051eaef: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x6c] (WRITE)
// 0051eaf3: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x70] (WRITE)
// 0051eaf7: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 0051eafb: MOV dword ptr [ESP + 0x54],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0051eaff: MOV EDX,dword ptr [EAX + 0x8]
// 0051eb02: MOV dword ptr [ESP + 0x5c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051eb06: TEST EDX,EDX
// 0051eb08: JLE 0x0051eb4a
//   XREF to: 0051eb4a (CONDITIONAL_JUMP)
// 0051eb0a: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0051eb0e: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_0051eb0e
//   XREF to: Stack[0x4] (READ)
// 0051eb12: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x20] (READ)
// 0051eb16: MOV EAX,dword ptr [EAX + 0xc]
// 0051eb19: ADD EBX,EAX
// 0051eb1b: MOV EBP,dword ptr [EBX + 0x40]
// 0051eb1e: MOV dword ptr [ESP + 0x60],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0051eb22: TEST EBP,EBP
// 0051eb24: JZ 0x0051eb52
//   XREF to: 0051eb52 (CONDITIONAL_JUMP)
// 0051eb26: MOV EBX,dword ptr [ESP + 0x5c]
//   Label: LAB_0051eb26
//   XREF to: Stack[-0x1c] (READ)
// 0051eb2a: INC EBX
// 0051eb2b: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x20] (READ)
// 0051eb2f: MOV dword ptr [ESP + 0x5c],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051eb33: MOV EAX,EBX
// 0051eb35: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 0051eb39: ADD ECX,0x8c
// 0051eb3f: MOV ESI,dword ptr [EBX + 0x8]
// 0051eb42: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0051eb46: CMP EAX,ESI
// 0051eb48: JL 0x0051eb0e
//   XREF to: 0051eb0e (CONDITIONAL_JUMP)
// 0051eb4a: ADD ESP,0x68
//   Label: LAB_0051eb4a
// 0051eb4d: POP EBP
// 0051eb4e: POP EDI
// 0051eb4f: POP ESI
// 0051eb50: POP EBX
// 0051eb51: RET
// 0051eb52: MOV EBP,dword ptr [EBX]
//   Label: LAB_0051eb52
// 0051eb54: TEST EBP,EBP
// 0051eb56: JL 0x0051eb66
//   XREF to: 0051eb66 (CONDITIONAL_JUMP)
// 0051eb58: CMP dword ptr [ESP + 0x80],0x0
//   XREF to: Stack[0x8] (READ)
// 0051eb60: JNZ 0x0051ec67
//   XREF to: 0051ec67 (CONDITIONAL_JUMP)
// 0051eb66: MOV EDI,dword ptr [ESP + 0x60]
//   Label: LAB_0051eb66
//   XREF to: Stack[-0x18] (READ)
// 0051eb6a: MOV ESI,EDI
// 0051eb6c: LEA EAX,[EDI + 0xc]
// 0051eb6f: XOR EBX,EBX
// 0051eb71: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051eb75: MOV EAX,dword ptr [ESI + 0x10]
//   Label: LAB_0051eb75
// 0051eb78: MOV dword ptr [ESP + EBX*0x1 + 0x18],EAX
// 0051eb7c: MOV EAX,dword ptr [EDI + 0x1c]
// 0051eb7f: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0051eb83: MOV EAX,dword ptr [EDI + 0x20]
// 0051eb86: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0051eb8a: TEST EBP,EBP
// 0051eb8c: JL 0x0051ebab
//   XREF to: 0051ebab (CONDITIONAL_JUMP)
// 0051eb8e: CMP dword ptr [ESP + 0x80],0x0
//   XREF to: Stack[0x8] (READ)
// 0051eb96: JZ 0x0051ebab
//   XREF to: 0051ebab (CONDITIONAL_JUMP)
// 0051eb98: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x2c] (DATA)
// 0051eb9c: PUSH EAX
// 0051eb9d: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x30] (DATA)
// 0051eba1: PUSH EAX
// 0051eba2: PUSH EBP
// 0051eba3: CALL shape_design.c_fixupCramUV_FUN_0046e090
//   XREF to: 0046e090 (UNCONDITIONAL_CALL)
// 0051eba8: ADD ESP,0xc
// 0051ebab: FLD float ptr [0x00638529]
//   Label: LAB_0051ebab
//   XREF to: 00638529 (READ)
// 0051ebb1: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 0051ebb5: FMUL ST1
// 0051ebb7: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x2c] (READ)
// 0051ebbb: FMULP ST2
// 0051ebbd: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 0051ebc1: ADD EDI,0x8
// 0051ebc4: ADD EBX,0xc
// 0051ebc7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0051ebcc: FXCH
// 0051ebce: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0051ebd3: FXCH
// 0051ebd5: FISTP dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (WRITE)
// 0051ebd9: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (READ)
// 0051ebdd: FISTP dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (WRITE)
// 0051ebe1: MOV dword ptr [ESP + EBX*0x1 + 0x10],EAX
// 0051ebe5: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (READ)
// 0051ebe9: ADD ESI,0x4
// 0051ebec: MOV dword ptr [ESP + EBX*0x1 + 0x14],EAX
// 0051ebf0: CMP ESI,ECX
// 0051ebf2: JNZ 0x0051eb75
//   XREF to: 0051eb75 (CONDITIONAL_JUMP)
// 0051ebf4: TEST EBP,EBP
// 0051ebf6: JL 0x0051ec95
//   XREF to: 0051ec95 (CONDITIONAL_JUMP)
// 0051ebfc: CMP EBP,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 0051ec00: JZ 0x0051ec50
//   XREF to: 0051ec50 (CONDITIONAL_JUMP)
// 0051ec02: CMP dword ptr [ESP + 0x80],0x0
//   XREF to: Stack[0x8] (READ)
// 0051ec0a: JZ 0x0051ec86
//   XREF to: 0051ec86 (CONDITIONAL_JUMP)
// 0051ec0c: PUSH EBP
// 0051ec0d: CALL shape_design.c_getAtlasMapIndex_FUN_0046e030
//   XREF to: 0046e030 (UNCONDITIONAL_CALL)
// 0051ec12: ADD ESP,0x4
// 0051ec15: PUSH EAX
// 0051ec16: CALL shape_design.c_getTextureName_FUN_0046e060
//   XREF to: 0046e060 (UNCONDITIONAL_CALL)
// 0051ec1b: ADD ESP,0x4
// 0051ec1e: MOV EDI,0x2f31248
//   XREF to: 02f31248 (DATA)
// 0051ec23: MOV ESI,EAX
// 0051ec25: PUSH EDI
//   XREF to: 02f31248 (DATA)
// 0051ec26: MOV AL,byte ptr [ESI]
//   Label: LAB_0051ec26
// 0051ec28: MOV byte ptr [EDI],AL
//   XREF to: 02f31248 (WRITE)
//   XREF to: 02f3124a (WRITE)
// 0051ec2a: CMP AL,0x0
// 0051ec2c: JZ 0x0051ec3e
//   XREF to: 0051ec3e (CONDITIONAL_JUMP)
// 0051ec2e: MOV AL,byte ptr [ESI + 0x1]
// 0051ec31: ADD ESI,0x2
// 0051ec34: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f31249 (WRITE)
//   XREF to: 02f3124b (WRITE)
// 0051ec37: ADD EDI,0x2
// 0051ec3a: CMP AL,0x0
// 0051ec3c: JNZ 0x0051ec26
//   XREF to: 0051ec26 (CONDITIONAL_JUMP)
// 0051ec3e: POP EDI
//   Label: LAB_0051ec3e
// 0051ec3f: PUSH 0x2f31240
//   XREF to: 02f31240 (DATA)
// 0051ec44: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   Label: LAB_0051ec44
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 0051ec49: ADD ESP,0x4
// 0051ec4c: MOV dword ptr [ESP + 0x54],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0051ec50: MOV EAX,ESP
//   Label: LAB_0051ec50
// 0051ec52: PUSH EAX
// 0051ec53: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0051ec59: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0051ec5a: CALL engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
//   XREF to: 0048b1e0 (UNCONDITIONAL_CALL)
// 0051ec5f: ADD ESP,0x8
// 0051ec62: JMP 0x0051eb26
//   XREF to: 0051eb26 (UNCONDITIONAL_JUMP)
// 0051ec67: IMUL EBP,EBP,0x48
//   Label: LAB_0051ec67
// 0051ec6a: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 0051ec6e: MOV EAX,dword ptr [EAX + 0x14]
// 0051ec71: ADD EAX,EBP
// 0051ec73: ADD EAX,0x8
// 0051ec76: PUSH EAX
// 0051ec77: CALL shape_design.c_findTextureByFilename_FUN_0046dfc0
//   XREF to: 0046dfc0 (UNCONDITIONAL_CALL)
// 0051ec7c: ADD ESP,0x4
// 0051ec7f: MOV EBP,EAX
// 0051ec81: JMP 0x0051eb66
//   XREF to: 0051eb66 (UNCONDITIONAL_JUMP)
// 0051ec86: IMUL EAX,EBP,0x48
//   Label: LAB_0051ec86
// 0051ec89: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 0051ec8d: MOV EBX,dword ptr [EBX + 0x14]
// 0051ec90: ADD EAX,EBX
// 0051ec92: PUSH EAX
// 0051ec93: JMP 0x0051ec44
//   XREF to: 0051ec44 (UNCONDITIONAL_JUMP)
// 0051ec95: MOV EAX,dword ptr [ESP + 0x5c]
//   Label: LAB_0051ec95
//   XREF to: Stack[-0x1c] (READ)
// 0051ec99: AND EAX,0x7f
// 0051ec9c: ADD EAX,0x80
// 0051eca1: NEG EAX
// 0051eca3: PUSH EAX
// 0051eca4: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0051ecaa: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0051ecab: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 0051ecb0: ADD ESP,0x8
// 0051ecb3: MOV EAX,ESP
// 0051ecb5: PUSH EAX
// 0051ecb6: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0051ecbc: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0051ecbd: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)
// 0051ecc2: ADD ESP,0x8
// 0051ecc5: JMP 0x0051eb26
//   XREF to: 0051eb26 (UNCONDITIONAL_JUMP)
