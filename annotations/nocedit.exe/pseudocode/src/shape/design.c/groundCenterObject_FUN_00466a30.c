// Name: shape_design.c_groundCenterObject_FUN_00466a30
// Address: 00466a30
// Address Range: [[00466a30, 00466c60]]
// Convention: __cdecl
// Signature: void shape_design.c_groundCenterObject_FUN_00466a30(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f6e6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Object_grounded_Hit_a_ke_0061c7a6
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_groundCenterObject_FUN_00466a30(void)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_14;
  
  fVar6 = 999999.9;
  fVar8 = 999999.9;
  local_2c = 0xcccccccd;
  uStack_28 = 0x412e847f;
  fVar5 = -999999.9;
  fVar7 = -999999.9;
  dVar4 = -999999.9;
  for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
    fVar1 = g_LoadedVertices[local_14].vertex.x;
    fVar2 = g_LoadedVertices[local_14].vertex.y;
    dVar3 = (double)g_LoadedVertices[local_14].vertex.z;
    if (fVar5 < fVar1) {
      fVar5 = fVar1;
    }
    if (fVar1 < fVar6) {
      fVar6 = fVar1;
    }
    if (fVar7 < fVar2) {
      fVar7 = fVar2;
    }
    if (fVar2 < fVar8) {
      fVar8 = fVar2;
    }
    local_44 = SUB84(dVar3,0);
    uStack_40 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (dVar4 < dVar3) {
      dVar4 = dVar3;
    }
    if (dVar3 < (double)CONCAT44(uStack_28,local_2c)) {
      local_2c = local_44;
      uStack_28 = uStack_40;
    }
  }
  for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
  }
  for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
    g_LoadedVertices[local_14].vertex.y = g_LoadedVertices[local_14].vertex.y - fVar8;
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Object grounded.  Hit a key...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}


// Assembly code:
// 00466a30: PUSH EBX
//   Label: shape_design.c_groundCenterObject_FUN_00466a30
// 00466a31: PUSH ESI
// 00466a32: PUSH EDI
// 00466a33: PUSH EBP
// 00466a34: MOV EBP,ESP
// 00466a36: SUB ESP,0x54
// 00466a3c: MOV dword ptr [EBP + -0x2c],0xcccccccd
//   XREF to: Stack[-0x3c] (WRITE)
// 00466a43: MOV dword ptr [EBP + -0x28],0x412e847f
//   XREF to: Stack[-0x38] (WRITE)
// 00466a4a: MOV dword ptr [EBP + -0x4c],0xcccccccd
//   XREF to: Stack[-0x5c] (WRITE)
// 00466a51: MOV dword ptr [EBP + -0x48],0x412e847f
//   XREF to: Stack[-0x58] (WRITE)
// 00466a58: MOV dword ptr [EBP + -0x1c],0xcccccccd
//   XREF to: Stack[-0x2c] (WRITE)
// 00466a5f: MOV dword ptr [EBP + -0x18],0x412e847f
//   XREF to: Stack[-0x28] (WRITE)
// 00466a66: MOV dword ptr [EBP + -0x14],0xcccccccd
//   XREF to: Stack[-0x24] (WRITE)
// 00466a6d: MOV dword ptr [EBP + -0x10],0xc12e847f
//   XREF to: Stack[-0x20] (WRITE)
// 00466a74: MOV dword ptr [EBP + -0x24],0xcccccccd
//   XREF to: Stack[-0x34] (WRITE)
// 00466a7b: MOV dword ptr [EBP + -0x20],0xc12e847f
//   XREF to: Stack[-0x30] (WRITE)
// 00466a82: MOV dword ptr [EBP + -0xc],0xcccccccd
//   XREF to: Stack[-0x1c] (WRITE)
// 00466a89: MOV dword ptr [EBP + -0x8],0xc12e847f
//   XREF to: Stack[-0x18] (WRITE)
// 00466a90: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 00466a97: JMP 0x00466a9f
//   XREF to: 00466a9f (UNCONDITIONAL_JUMP)
// 00466a99: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00466a99
//   XREF to: Stack[-0x14] (READ)
// 00466a9c: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00466a9f: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00466a9f
//   XREF to: Stack[-0x14] (READ)
// 00466aa2: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466aa8: JGE 0x00466b64
//   XREF to: 00466b64 (CONDITIONAL_JUMP)
// 00466aae: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 00466ab2: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466ab8: FSTP double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (WRITE)
// 00466abb: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 00466abf: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00466ac5: FSTP double ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 00466ac8: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 00466acc: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466ad2: FSTP double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 00466ad5: FLD double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 00466ad8: FCOMP double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00466adb: FNSTSW AX
// 00466add: SAHF
// 00466ade: JBE 0x00466aec
//   XREF to: 00466aec (CONDITIONAL_JUMP)
// 00466ae0: MOV EAX,dword ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 00466ae3: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00466ae6: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 00466ae9: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00466aec: FLD double ptr [EBP + -0x44]
//   Label: LAB_00466aec
//   XREF to: Stack[-0x54] (READ)
// 00466aef: FCOMP double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00466af2: FNSTSW AX
// 00466af4: SAHF
// 00466af5: JNC 0x00466b03
//   XREF to: 00466b03 (CONDITIONAL_JUMP)
// 00466af7: MOV EAX,dword ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 00466afa: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00466afd: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 00466b00: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00466b03: FLD double ptr [EBP + -0x3c]
//   Label: LAB_00466b03
//   XREF to: Stack[-0x4c] (READ)
// 00466b06: FCOMP double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00466b09: FNSTSW AX
// 00466b0b: SAHF
// 00466b0c: JBE 0x00466b1a
//   XREF to: 00466b1a (CONDITIONAL_JUMP)
// 00466b0e: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00466b11: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00466b14: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00466b17: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00466b1a: FLD double ptr [EBP + -0x3c]
//   Label: LAB_00466b1a
//   XREF to: Stack[-0x4c] (READ)
// 00466b1d: FCOMP double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 00466b20: FNSTSW AX
// 00466b22: SAHF
// 00466b23: JNC 0x00466b31
//   XREF to: 00466b31 (CONDITIONAL_JUMP)
// 00466b25: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00466b28: MOV dword ptr [EBP + -0x4c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00466b2b: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00466b2e: MOV dword ptr [EBP + -0x48],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00466b31: FLD double ptr [EBP + -0x34]
//   Label: LAB_00466b31
//   XREF to: Stack[-0x44] (READ)
// 00466b34: FCOMP double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00466b37: FNSTSW AX
// 00466b39: SAHF
// 00466b3a: JBE 0x00466b48
//   XREF to: 00466b48 (CONDITIONAL_JUMP)
// 00466b3c: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 00466b3f: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00466b42: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00466b45: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00466b48: FLD double ptr [EBP + -0x34]
//   Label: LAB_00466b48
//   XREF to: Stack[-0x44] (READ)
// 00466b4b: FCOMP double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00466b4e: FNSTSW AX
// 00466b50: SAHF
// 00466b51: JNC 0x00466b5f
//   XREF to: 00466b5f (CONDITIONAL_JUMP)
// 00466b53: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 00466b56: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00466b59: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00466b5c: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00466b5f: JMP 0x00466a99
//   Label: LAB_00466b5f
//   XREF to: 00466a99 (UNCONDITIONAL_JUMP)
// 00466b64: MOV dword ptr [EBP + -0x44],0x0
//   Label: LAB_00466b64
//   XREF to: Stack[-0x54] (WRITE)
// 00466b6b: MOV dword ptr [EBP + -0x40],0x0
//   XREF to: Stack[-0x50] (WRITE)
// 00466b72: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 00466b79: MOV dword ptr [EBP + -0x38],0x0
//   XREF to: Stack[-0x48] (WRITE)
// 00466b80: MOV dword ptr [EBP + -0x34],0x0
//   XREF to: Stack[-0x44] (WRITE)
// 00466b87: MOV dword ptr [EBP + -0x30],0x0
//   XREF to: Stack[-0x40] (WRITE)
// 00466b8e: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 00466b95: JMP 0x00466b9d
//   XREF to: 00466b9d (UNCONDITIONAL_JUMP)
// 00466b97: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00466b97
//   XREF to: Stack[-0x14] (READ)
// 00466b9a: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00466b9d: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00466b9d
//   XREF to: Stack[-0x14] (READ)
// 00466ba0: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466ba6: JGE 0x00466bda
//   XREF to: 00466bda (CONDITIONAL_JUMP)
// 00466ba8: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 00466bac: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466bb2: FADD double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 00466bb5: FSTP double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (WRITE)
// 00466bb8: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 00466bbc: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00466bc2: FADD double ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00466bc5: FSTP double ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 00466bc8: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 00466bcc: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466bd2: FADD double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 00466bd5: FSTP double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 00466bd8: JMP 0x00466b97
//   XREF to: 00466b97 (UNCONDITIONAL_JUMP)
// 00466bda: FILD dword ptr [0x01626408]
//   Label: LAB_00466bda
//   XREF to: 01626408 (READ)
// 00466be0: FDIVR double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 00466be3: FSTP double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (WRITE)
// 00466be6: FILD dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466bec: FDIVR double ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00466bef: FSTP double ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 00466bf2: FILD dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466bf8: FDIVR double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 00466bfb: FSTP double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 00466bfe: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 00466c05: JMP 0x00466c0d
//   XREF to: 00466c0d (UNCONDITIONAL_JUMP)
// 00466c07: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00466c07
//   XREF to: Stack[-0x14] (READ)
// 00466c0a: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00466c0d: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00466c0d
//   XREF to: Stack[-0x14] (READ)
// 00466c10: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466c16: JGE 0x00466c39
//   XREF to: 00466c39 (CONDITIONAL_JUMP)
// 00466c18: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 00466c1c: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00466c22: FSTP double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 00466c25: FLD double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 00466c28: FSUB double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 00466c2b: FSTP double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 00466c2e: FLD double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 00466c31: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00466c37: JMP 0x00466c07
//   XREF to: 00466c07 (UNCONDITIONAL_JUMP)
// 00466c39: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00466c39
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00466c3e: PUSH 0x0
// 00466c40: PUSH 0x0
// 00466c42: MOV EAX,0x61c7a6
//   XREF to: 0061c7a6 (PARAM)
// 00466c47: PUSH EAX
//   XREF to: 0061c7a6 (DATA)
// 00466c48: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00466c4d: ADD ESP,0xc
// 00466c50: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00466c55: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00466c5a: MOV ESP,EBP
// 00466c5c: POP EBP
// 00466c5d: POP EDI
// 00466c5e: POP ESI
// 00466c5f: POP EBX
// 00466c60: RET
