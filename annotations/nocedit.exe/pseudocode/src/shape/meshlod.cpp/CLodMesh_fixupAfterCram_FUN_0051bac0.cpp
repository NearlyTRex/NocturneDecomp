// Name: shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0
// Address: 0051bac0
// Address Range: [[0051bac0, 0051bcbf]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh * this_ptr)
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d376 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051dd6e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_00637dbd
//   TerminatedCString s_LodMesh_fixupAfterCram_t_00637dd2
//   double DOUBLE_00637e15 = 0.00390625
//   double DOUBLE_00637e1d = 256
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_floor_FUN_005feb90
//   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   shape_design.c_findTextureByFilename_FUN_0046dfc0
//   shape_design.c_fixupCramUV_FUN_0046e090
//   shape_design.c_getAtlasMapIndex_FUN_0046e030
//   shape_design.c_getLastTextureProcessIndex_FUN_0046a860
//   shape_design.c_getTextureName_FUN_0046e060
//   shape_meshlod.cpp_CLodMesh_FUN_00518790

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh *this_ptr)

{
  int iVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  float10 in_ST0;
  double dVar7;
  char *pcStack_30;
  float local_2c [3];
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fVar8;
  
  local_1c = 0.0;
  if (0 < this_ptr->tri_count) {
    local_20 = 0;
    do {
      pcVar6 = this_ptr->triangle_data->field0_0x0 + local_20;
      if ((*(int *)(pcVar6 + 0x40) == 0) && (-1 < *(int *)pcVar6)) {
        iVar2 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                          ((char *)((int)this_ptr->submesh_data + *(int *)pcVar6 * 0x48 + 8));
        if (iVar2 < 0) {
          g_CurrentLineNumber = 0x12c0;
          g_CurrentFilename = "..\\shape\\meshlod.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("LodMesh::fixupAfterCram - texture %s not found in cram list.",
                     (int)this_ptr->submesh_data + *(int *)pcVar6 * 0x48 + 8);
        }
        local_14 = *(float *)(pcVar6 + 0x1c);
        piVar3 = (int *)(pcVar6 + 8);
        fVar8 = *(float *)(pcVar6 + 0x20);
        local_20 = 0x40800000;
        do {
          if ((float)piVar3[7] < local_14) {
            local_14 = (float)piVar3[7];
          }
          if ((float)piVar3[8] < fVar8) {
            fVar8 = (float)piVar3[8];
          }
          piVar3 = piVar3 + 2;
        } while (piVar3 != (int *)(pcVar6 + 0x18));
        dVar7 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        local_18 = (float)((float10)(double)CONCAT44(extraout_EDX,extraout_EAX) *
                          (float10)DOUBLE_00637e1d);
        dVar7 = crt_math_c_floor_FUN_005feb90(dVar7);
        in_ST0 = (float10)dVar7;
        local_18 = (float)((float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00) *
                          (float10)DOUBLE_00637e1d);
        pcVar4 = pcVar6;
        do {
          pcStack_30 = (char *)(*(float *)(pcVar4 + 0x1c) - local_1c);
          local_2c[0] = *(float *)(pcVar4 + 0x20) - local_18;
          shape_design_c_fixupCramUV_FUN_0046e090(iVar2,(float *)&pcStack_30,local_2c);
          *(char **)(pcVar4 + 0x1c) = pcStack_30;
          pcVar5 = pcVar4 + 8;
          *(float *)(pcVar4 + 0x20) = local_2c[0];
          pcVar4 = pcVar5;
        } while (pcVar5 != pcVar6 + 0x18);
        iVar2 = shape_design_c_getAtlasMapIndex_FUN_0046e030(iVar2);
        *(int *)pcVar6 = iVar2;
      }
      local_20 = local_20 + 0x8c;
      local_1c = (float)((int)local_1c + 1);
    } while ((int)local_1c < this_ptr->tri_count);
  }
  iVar2 = 0;
  this_ptr->submesh_count = 0;
  while( true ) {
    iVar1 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
    if (iVar1 <= iVar2) break;
    pcStack_30 = shape_design_c_getTextureName_FUN_0046e060(iVar2);
    iVar2 = iVar2 + 1;
    shape_meshlod_cpp_CLodMesh_FUN_00518790(this_ptr);
  }
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}


// Assembly code:
// 0051bac0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0
// 0051bac1: PUSH ESI
// 0051bac2: PUSH EDI
// 0051bac3: PUSH EBP
// 0051bac4: SUB ESP,0x24
// 0051bac7: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0051bacb: XOR EDX,EDX
// 0051bacd: MOV ECX,dword ptr [EAX + 0x8]
// 0051bad0: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051bad4: TEST ECX,ECX
// 0051bad6: JLE 0x0051bb11
//   XREF to: 0051bb11 (CONDITIONAL_JUMP)
// 0051bad8: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0051badc: MOV EBP,dword ptr [ESP + 0x38]
//   Label: LAB_0051badc
//   XREF to: Stack[0x4] (READ)
// 0051bae0: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 0051bae4: MOV EBP,dword ptr [EBP + 0xc]
// 0051bae7: ADD EBP,EAX
// 0051bae9: CMP dword ptr [EBP + 0x40],0x0
// 0051baed: JZ 0x0051bb3c
//   XREF to: 0051bb3c (CONDITIONAL_JUMP)
// 0051baef: MOV EBX,dword ptr [ESP + 0x14]
//   Label: LAB_0051baef
//   XREF to: Stack[-0x20] (READ)
// 0051baf3: ADD EBX,0x8c
// 0051baf9: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0051bafd: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0051bb01: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0051bb05: INC ESI
// 0051bb06: MOV EDI,dword ptr [EBX + 0x8]
// 0051bb09: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0051bb0d: CMP ESI,EDI
// 0051bb0f: JL 0x0051badc
//   XREF to: 0051badc (CONDITIONAL_JUMP)
// 0051bb11: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_0051bb11
//   XREF to: Stack[0x4] (READ)
// 0051bb15: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0051bb19: XOR EBX,EBX
// 0051bb1b: MOV dword ptr [EAX + 0x10],0x0
// 0051bb22: CALL shape_design.c_getLastTextureProcessIndex_FUN_0046a860
//   Label: LAB_0051bb22
//   XREF to: 0046a860 (UNCONDITIONAL_CALL)
// 0051bb27: CMP EBX,EAX
// 0051bb29: JL 0x0051bca7
//   XREF to: 0051bca7 (CONDITIONAL_JUMP)
// 0051bb2f: CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)
// 0051bb34: ADD ESP,0x24
// 0051bb37: POP EBP
// 0051bb38: POP EDI
// 0051bb39: POP ESI
// 0051bb3a: POP EBX
// 0051bb3b: RET
// 0051bb3c: MOV ECX,dword ptr [EBP]
//   Label: LAB_0051bb3c
// 0051bb3f: TEST ECX,ECX
// 0051bb41: JL 0x0051baef
//   XREF to: 0051baef (CONDITIONAL_JUMP)
// 0051bb43: IMUL EAX,ECX,0x48
// 0051bb46: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0051bb4a: MOV EBX,dword ptr [EBX + 0x14]
// 0051bb4d: ADD EAX,EBX
// 0051bb4f: ADD EAX,0x8
// 0051bb52: PUSH EAX
// 0051bb53: CALL shape_design.c_findTextureByFilename_FUN_0046dfc0
//   XREF to: 0046dfc0 (UNCONDITIONAL_CALL)
// 0051bb58: ADD ESP,0x4
// 0051bb5b: MOV ESI,EAX
// 0051bb5d: TEST EAX,EAX
// 0051bb5f: JL 0x0051bc6d
//   XREF to: 0051bc6d (CONDITIONAL_JUMP)
// 0051bb65: MOV ECX,0x40800000
//   Label: LAB_0051bb65
// 0051bb6a: MOV EAX,dword ptr [EBP + 0x1c]
// 0051bb6d: LEA EBX,[EBP + 0x8]
// 0051bb70: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0051bb74: LEA EDI,[EBP + 0x18]
// 0051bb77: MOV EAX,dword ptr [EBP + 0x20]
// 0051bb7a: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0051bb7e: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051bb82: FLD float ptr [EBX + 0x1c]
//   Label: LAB_0051bb82
// 0051bb85: FCOMP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0051bb89: FNSTSW AX
// 0051bb8b: SAHF
// 0051bb8c: JNC 0x0051bb95
//   XREF to: 0051bb95 (CONDITIONAL_JUMP)
// 0051bb8e: MOV EAX,dword ptr [EBX + 0x1c]
// 0051bb91: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0051bb95: FLD float ptr [EBX + 0x20]
//   Label: LAB_0051bb95
// 0051bb98: FCOMP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0051bb9c: FNSTSW AX
// 0051bb9e: SAHF
// 0051bb9f: JNC 0x0051bba8
//   XREF to: 0051bba8 (CONDITIONAL_JUMP)
// 0051bba1: MOV EAX,dword ptr [EBX + 0x20]
// 0051bba4: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051bba8: ADD EBX,0x8
//   Label: LAB_0051bba8
// 0051bbab: CMP EBX,EDI
// 0051bbad: JNZ 0x0051bb82
//   XREF to: 0051bb82 (CONDITIONAL_JUMP)
// 0051bbaf: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0051bbb3: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0051bbb7: FMUL double ptr [0x00637e15]
//   XREF to: 00637e15 (READ)
// 0051bbbd: SUB ESP,0x8
// 0051bbc0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 0051bbc3: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0051bbc8: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0051bbcc: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0051bbd0: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 0051bbd4: ADD ESP,0x8
// 0051bbd7: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0051bbdb: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0051bbdf: FXCH
// 0051bbe1: FMUL double ptr [0x00637e1d]
//   XREF to: 00637e1d (READ)
// 0051bbe7: FXCH
// 0051bbe9: FMUL double ptr [0x00637e15]
//   XREF to: 00637e15 (READ)
// 0051bbef: FXCH
// 0051bbf1: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (WRITE)
// 0051bbf5: SUB ESP,0x8
// 0051bbf8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 0051bbfb: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0051bc00: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0051bc04: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0051bc08: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 0051bc0c: FMUL double ptr [0x00637e1d]
//   XREF to: 00637e1d (READ)
// 0051bc12: MOV EBX,EBP
// 0051bc14: ADD ESP,0x8
// 0051bc17: LEA EDI,[EBP + 0x18]
// 0051bc1a: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (WRITE)
// 0051bc1e: FLD float ptr [EBX + 0x1c]
//   Label: LAB_0051bc1e
// 0051bc21: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x28] (DATA)
// 0051bc25: FSUB float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0051bc29: PUSH EAX
// 0051bc2a: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 0051bc2e: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x2c] (DATA)
// 0051bc32: FLD float ptr [EBX + 0x20]
// 0051bc35: PUSH EAX
// 0051bc36: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0051bc3a: PUSH ESI
// 0051bc3b: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0051bc3f: CALL shape_design.c_fixupCramUV_FUN_0046e090
//   XREF to: 0046e090 (UNCONDITIONAL_CALL)
// 0051bc44: ADD ESP,0xc
// 0051bc47: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x2c] (READ)
// 0051bc4b: MOV dword ptr [EBX + 0x1c],EAX
// 0051bc4e: ADD EBX,0x8
// 0051bc51: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 0051bc55: MOV dword ptr [EBX + 0x18],EAX
// 0051bc58: CMP EBX,EDI
// 0051bc5a: JNZ 0x0051bc1e
//   XREF to: 0051bc1e (CONDITIONAL_JUMP)
// 0051bc5c: PUSH ESI
// 0051bc5d: CALL shape_design.c_getAtlasMapIndex_FUN_0046e030
//   XREF to: 0046e030 (UNCONDITIONAL_CALL)
// 0051bc62: ADD ESP,0x4
// 0051bc65: MOV dword ptr [EBP],EAX
// 0051bc68: JMP 0x0051baef
//   XREF to: 0051baef (UNCONDITIONAL_JUMP)
// 0051bc6d: MOV EAX,0x12c0
//   Label: LAB_0051bc6d
// 0051bc72: MOV EDX,dword ptr [EBP]
// 0051bc75: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0051bc7a: IMUL EAX,EDX,0x48
// 0051bc7d: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0051bc81: MOV EBX,dword ptr [EBX + 0x14]
// 0051bc84: ADD EAX,EBX
// 0051bc86: ADD EAX,0x8
// 0051bc89: PUSH EAX
// 0051bc8a: MOV EDI,0x637dbd
//   XREF to: 00637dbd (DATA)
// 0051bc8f: PUSH 0x637dd2
//   XREF to: 00637dd2 (DATA)
// 0051bc94: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0051bc9a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051bc9f: ADD ESP,0x8
// 0051bca2: JMP 0x0051bb65
//   XREF to: 0051bb65 (UNCONDITIONAL_JUMP)
// 0051bca7: PUSH EBX
//   Label: LAB_0051bca7
// 0051bca8: CALL shape_design.c_getTextureName_FUN_0046e060
//   XREF to: 0046e060 (UNCONDITIONAL_CALL)
// 0051bcad: ADD ESP,0x4
// 0051bcb0: PUSH EAX
// 0051bcb1: PUSH ESI
// 0051bcb2: INC EBX
// 0051bcb3: CALL shape_meshlod.cpp_CLodMesh_FUN_00518790
//   XREF to: 00518790 (UNCONDITIONAL_CALL)
// 0051bcb8: ADD ESP,0x8
// 0051bcbb: JMP 0x0051bb22
//   XREF to: 0051bb22 (UNCONDITIONAL_JUMP)
