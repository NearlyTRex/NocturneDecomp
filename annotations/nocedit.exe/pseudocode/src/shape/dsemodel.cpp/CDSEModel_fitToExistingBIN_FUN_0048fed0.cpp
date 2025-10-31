// Name: shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
// Address: 0048fed0
// Address Range: [[0048fed0, 00490016]]
// Convention: __cdecl
// Signature: int shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel * this_ptr, char * filename)
// Cross-references:
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053efd4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_0062250a
//   TerminatedCString s_models_0062250d
//   TerminatedCString s_shape_dsemodel_cpp_00622514
//   double g_ModelScalingNormalizationFactor = 0.00390625
// Function calls:
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_model.c_freeMRGLData_FUN_005280b0
//   engine_model.c_getMRGLBounds_FUN_00528140
//   engine_model.c_loadModelFile_FUN_00527ec0
//   shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50
//   shape_dsemodel.cpp_CDSEModel_scaleX_FUN_0048fd70
//   shape_dsemodel.cpp_CDSEModel_scaleY_FUN_0048fe20
//   shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

int __cdecl
shape_dsemodel_cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel *this_ptr,char *filename)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  SMRGLModelBounds *in_stack_ffffff44;
  int local_90 [13];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_28;
  FILE *local_24;
  SMRGLHeaderExtended *local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  local_24 = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rb");
  if (local_24 == (FILE *)0x0) {
    local_28 = 0;
  }
  else {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\shape\\dsemodel.cpp",0x180);
    local_20 = engine_model_c_loadModelFile_FUN_00527ec0(filename);
    engine_model_c_getMRGLBounds_FUN_00528140(local_20,in_stack_ffffff44);
    piVar2 = (int *)&stack0xffffff3c;
    piVar3 = local_90;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    }
    piVar2 = local_90;
    piVar3 = &local_5c;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    }
    local_1c = (float)(local_50 - local_5c) * (float)g_ModelScalingNormalizationFactor;
    local_18 = (float)(local_48 - local_54) * (float)g_ModelScalingNormalizationFactor;
    local_14 = (float)(local_4c - local_58) * (float)g_ModelScalingNormalizationFactor;
    shape_dsemodel_cpp_CDSEModel_centerModel_FUN_0048fa50(this_ptr);
    shape_dsemodel_cpp_CDSEModel_scaleX_FUN_0048fd70(this_ptr,local_1c);
    shape_dsemodel_cpp_CDSEModel_scaleY_FUN_0048fe20(this_ptr,local_14);
    shape_dsemodel_cpp_CDSEModel_scaleZ_FUN_0048fcc0(this_ptr,local_18);
    engine_model_c_freeMRGLData_FUN_005280b0(local_20);
    local_28 = 1;
  }
  return local_28;
}


// Assembly code:
// 0048fed0: PUSH EBX
//   Label: shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
// 0048fed1: PUSH ESI
// 0048fed2: PUSH EDI
// 0048fed3: PUSH EBP
// 0048fed4: MOV EBP,ESP
// 0048fed6: SUB ESP,0xb8
// 0048fedc: MOV EAX,0x62250a
//   XREF to: 0062250a (DATA)
// 0048fee1: PUSH EAX
//   XREF to: 0062250a (DATA)
// 0048fee2: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048fee5: PUSH EAX
// 0048fee6: MOV EAX,0x62250d
//   XREF to: 0062250d (PARAM)
// 0048feeb: PUSH EAX
//   XREF to: 0062250d (DATA)
// 0048feec: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0048fef1: ADD ESP,0xc
// 0048fef4: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0048fef7: CMP dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (READ)
// 0048fefb: JNZ 0x0048ff09
//   XREF to: 0048ff09 (CONDITIONAL_JUMP)
// 0048fefd: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 0048ff04: JMP 0x0049000d
//   XREF to: 0049000d (UNCONDITIONAL_JUMP)
// 0048ff09: PUSH 0x180
//   Label: LAB_0048ff09
// 0048ff0e: MOV EAX,0x622514
//   XREF to: 00622514 (DATA)
// 0048ff13: PUSH EAX
//   XREF to: 00622514 (DATA)
// 0048ff14: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0048ff17: PUSH EAX
// 0048ff18: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0048ff1d: ADD ESP,0xc
// 0048ff20: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048ff23: PUSH EAX
// 0048ff24: CALL engine_model.c_loadModelFile_FUN_00527ec0
//   XREF to: 00527ec0 (UNCONDITIONAL_CALL)
// 0048ff29: ADD ESP,0x4
// 0048ff2c: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0048ff2f: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0048ff32: PUSH EAX
// 0048ff33: LEA ESI,[EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (DATA)
// 0048ff39: CALL engine_model.c_getMRGLBounds_FUN_00528140
//   XREF to: 00528140 (UNCONDITIONAL_CALL)
// 0048ff3e: ADD ESP,0x4
// 0048ff41: MOV ECX,0xd
// 0048ff46: LEA EDI,[EBP + -0x80]
//   XREF to: Stack[-0x90] (DATA)
// 0048ff49: LEA ESI,[EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (DATA)
// 0048ff4f: MOVSD.REP ES:EDI,ESI
// 0048ff51: MOV ECX,0xd
// 0048ff56: LEA EDI,[EBP + -0x4c]
//   XREF to: Stack[-0x5c] (DATA)
// 0048ff59: LEA ESI,[EBP + -0x80]
//   XREF to: Stack[-0x90] (DATA)
// 0048ff5c: MOVSD.REP ES:EDI,ESI
// 0048ff5e: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0048ff61: SUB EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0048ff64: MOV dword ptr [EBP + 0xffffff48],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 0048ff6a: FILD dword ptr [EBP + 0xffffff48]
//   XREF to: Stack[-0xc8] (READ)
// 0048ff70: FMUL double ptr [0x0062252a]
//   XREF to: 0062252a (READ)
// 0048ff76: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0048ff79: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0048ff7c: SUB EAX,dword ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0048ff7f: MOV dword ptr [EBP + 0xffffff48],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 0048ff85: FILD dword ptr [EBP + 0xffffff48]
//   XREF to: Stack[-0xc8] (READ)
// 0048ff8b: FMUL double ptr [0x0062252a]
//   XREF to: 0062252a (READ)
// 0048ff91: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0048ff94: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0048ff97: SUB EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0048ff9a: MOV dword ptr [EBP + 0xffffff48],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 0048ffa0: FILD dword ptr [EBP + 0xffffff48]
//   XREF to: Stack[-0xc8] (READ)
// 0048ffa6: FMUL double ptr [0x0062252a]
//   XREF to: 0062252a (READ)
// 0048ffac: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0048ffaf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048ffb2: PUSH EAX
// 0048ffb3: CALL shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50
//   XREF to: 0048fa50 (UNCONDITIONAL_CALL)
// 0048ffb8: ADD ESP,0x4
// 0048ffbb: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048ffbe: SUB ESP,0x4
// 0048ffc1: FSTP float ptr [ESP]
//   XREF to: Stack[-0xcc] (DATA)
// 0048ffc4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048ffc7: PUSH EAX
// 0048ffc8: CALL shape_dsemodel.cpp_CDSEModel_scaleX_FUN_0048fd70
//   XREF to: 0048fd70 (UNCONDITIONAL_CALL)
// 0048ffcd: ADD ESP,0x8
// 0048ffd0: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048ffd3: SUB ESP,0x4
// 0048ffd6: FSTP float ptr [ESP]
//   XREF to: Stack[-0xcc] (DATA)
// 0048ffd9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048ffdc: PUSH EAX
// 0048ffdd: CALL shape_dsemodel.cpp_CDSEModel_scaleY_FUN_0048fe20
//   XREF to: 0048fe20 (UNCONDITIONAL_CALL)
// 0048ffe2: ADD ESP,0x8
// 0048ffe5: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0048ffe8: SUB ESP,0x4
// 0048ffeb: FSTP float ptr [ESP]
//   XREF to: Stack[-0xcc] (DATA)
// 0048ffee: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fff1: PUSH EAX
// 0048fff2: CALL shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0
//   XREF to: 0048fcc0 (UNCONDITIONAL_CALL)
// 0048fff7: ADD ESP,0x8
// 0048fffa: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0048fffd: PUSH EAX
// 0048fffe: CALL engine_model.c_freeMRGLData_FUN_005280b0
//   XREF to: 005280b0 (UNCONDITIONAL_CALL)
// 00490003: ADD ESP,0x4
// 00490006: MOV dword ptr [EBP + -0x18],0x1
//   XREF to: Stack[-0x28] (WRITE)
// 0049000d: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0049000d
//   XREF to: Stack[-0x28] (READ)
// 00490010: MOV ESP,EBP
// 00490012: POP EBP
// 00490013: POP EDI
// 00490014: POP ESI
// 00490015: POP EBX
// 00490016: RET
