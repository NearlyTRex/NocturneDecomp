// Name: engine_model.c_getMRGLSize_FUN_00528700
// Address: 00528700
// Address Range: [[00528700, 00528864]]
// Convention: __cdecl
// Signature: int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
// Cross-references:
//   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 (00407aa0) at 00407af0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0 (004b54e0) at 004b556a [UNCONDITIONAL_CALL]
//   engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30 (00501f30) at 00502294 [UNCONDITIONAL_CALL]
//   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40 (00501d40) at 00501d71 [UNCONDITIONAL_CALL]
//   engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320 (00502320) at 0050238a [UNCONDITIONAL_CALL]
//   engine_model.c_byteswapMRGLData_FUN_00527e40 (00527e40) at 00527e50 [UNCONDITIONAL_CALL]
//   engine_model.c_loadMRGLTextures_FUN_00528870 (00528870) at 005288aa [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_FUN_00545060 (00545060) at 005450e1 [UNCONDITIONAL_CALL]
//   shape_design.c_findVertexListInModel_FUN_00468000 (00468000) at 00468022 [UNCONDITIONAL_CALL]
//   shape_design.c_getVertexCountFromModel_FUN_00468080 (00468080) at 004680a2 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005285ec = 0052871f
//   TerminatedCString s_MRGLSize_Bad_type_d_00639c36
//   TerminatedCString s_engine_model_c_00639c4e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

int __cdecl engine_model_c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended *header)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char acStack_fc [252];
  
  iVar1 = (header->base).type;
  switch(iVar1) {
  case 0:
    return 4;
  case 1:
    return 0x10;
  case 2:
  case 3:
    return header->child_count * 0xc + 0xc;
  case 4:
    return header->child_count * 8 + 0xc;
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xf:
  case 0x15:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x21:
  case 0x24:
  case 0x25:
  case 0x2e:
  case 0x2f:
  case 0x3b:
    return (header->base).count * 4 + 0x18;
  case 9:
    return 0x20;
  case 10:
  case 0xb:
  case 0x12:
  case 0x14:
  case 0x3d:
    return 8;
  case 0xc:
    return 0x1c;
  case 0xd:
    return 0x18;
  case 0xe:
  case 0x11:
  case 0x18:
  case 0x1e:
  case 0x22:
  case 0x29:
  case 0x33:
  case 0x34:
  case 0x38:
  case 0x3e:
  case 0x41:
  case 0x42:
    return (header->base).count * 0xc + 0x18;
  case 0x10:
    return 0x14;
  default:
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff00,"MRGLSize: Bad type : %d",iVar1);
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0x25b;
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_fc);
    return 4;
  case 0x16:
    return (header->base).count * 4 + 8;
  case 0x17:
    return 0xc;
  case 0x1d:
    return header->child_count * 0x20 + 0x1c;
  case 0x1f:
    return header->child_count * 4 + 0xc;
  case 0x20:
    return 0x158;
  case 0x26:
    return 0x3d60;
  case 0x40:
    return 0x48;
  }
}


// Assembly code:
// 00528700: SUB ESP,0x100
//   Label: engine_model.c_getMRGLSize_FUN_00528700
// 00528706: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[0x4] (READ)
// 0052870d: MOV EDX,dword ptr [EAX]
// 0052870f: CMP EDX,0x42
// 00528712: JA 0x00528825
//   XREF to: 00528825 (CONDITIONAL_JUMP)
// 00528718: JMP dword ptr [EDX*0x4 + 0x5285ec]
//   Label: switchD
//   XREF to: 0052871f (COMPUTED_JUMP)
//   XREF to: 0052872b (COMPUTED_JUMP)
//   XREF to: 00528737 (COMPUTED_JUMP)
//   XREF to: 00528750 (COMPUTED_JUMP)
//   XREF to: 00528760 (COMPUTED_JUMP)
//   XREF to: 00528770 (COMPUTED_JUMP)
//   XREF to: 0052877c (COMPUTED_JUMP)
//   XREF to: 00528788 (COMPUTED_JUMP)
//   XREF to: 00528794 (COMPUTED_JUMP)
//   XREF to: 005287a0 (COMPUTED_JUMP)
//   XREF to: 005287ac (COMPUTED_JUMP)
//   XREF to: 005287c5 (COMPUTED_JUMP)
//   XREF to: 005287d1 (COMPUTED_JUMP)
//   XREF to: 005287e1 (COMPUTED_JUMP)
//   XREF to: 005287ed (COMPUTED_JUMP)
//   XREF to: 005287fd (COMPUTED_JUMP)
//   XREF to: 0052880d (COMPUTED_JUMP)
//   XREF to: 00528819 (COMPUTED_JUMP)
//   XREF to: 00528825 (COMPUTED_JUMP)
//   XREF to: 005285ec (DATA)
// 0052871f: MOV EAX,0x4
//   Label: caseD_0
// 00528724: ADD ESP,0x100
// 0052872a: RET
// 0052872b: MOV EAX,0x10
//   Label: caseD_1
// 00528730: ADD ESP,0x100
// 00528736: RET
// 00528737: MOV EDX,dword ptr [EAX + 0x8]
//   Label: caseD_3
// 0052873a: LEA EAX,[EDX*0x4 + 0x0]
// 00528741: SUB EAX,EDX
// 00528743: SHL EAX,0x2
// 00528746: ADD EAX,0xc
// 00528749: ADD ESP,0x100
// 0052874f: RET
// 00528750: MOV EAX,dword ptr [EAX + 0x8]
//   Label: caseD_4
// 00528753: SHL EAX,0x3
// 00528756: ADD EAX,0xc
// 00528759: ADD ESP,0x100
// 0052875f: RET
// 00528760: MOV EAX,dword ptr [EAX + 0x4]
//   Label: caseD_3b
// 00528763: SHL EAX,0x2
// 00528766: ADD EAX,0x18
// 00528769: ADD ESP,0x100
// 0052876f: RET
// 00528770: MOV EAX,0x20
//   Label: caseD_9
// 00528775: ADD ESP,0x100
// 0052877b: RET
// 0052877c: MOV EAX,0x8
//   Label: caseD_3d
// 00528781: ADD ESP,0x100
// 00528787: RET
// 00528788: MOV EAX,0x1c
//   Label: caseD_c
// 0052878d: ADD ESP,0x100
// 00528793: RET
// 00528794: MOV EAX,0x18
//   Label: caseD_d
// 00528799: ADD ESP,0x100
// 0052879f: RET
// 005287a0: MOV EAX,0x48
//   Label: caseD_40
// 005287a5: ADD ESP,0x100
// 005287ab: RET
// 005287ac: MOV EDX,dword ptr [EAX + 0x4]
//   Label: caseD_42
// 005287af: LEA EAX,[EDX*0x4 + 0x0]
// 005287b6: SUB EAX,EDX
// 005287b8: SHL EAX,0x2
// 005287bb: ADD EAX,0x18
// 005287be: ADD ESP,0x100
// 005287c4: RET
// 005287c5: MOV EAX,0x14
//   Label: caseD_10
// 005287ca: ADD ESP,0x100
// 005287d0: RET
// 005287d1: MOV EAX,dword ptr [EAX + 0x4]
//   Label: caseD_16
// 005287d4: SHL EAX,0x2
// 005287d7: ADD EAX,0x8
// 005287da: ADD ESP,0x100
// 005287e0: RET
// 005287e1: MOV EAX,0xc
//   Label: caseD_17
// 005287e6: ADD ESP,0x100
// 005287ec: RET
// 005287ed: MOV EAX,dword ptr [EAX + 0x8]
//   Label: caseD_1d
// 005287f0: SHL EAX,0x5
// 005287f3: ADD EAX,0x1c
// 005287f6: ADD ESP,0x100
// 005287fc: RET
// 005287fd: MOV EAX,dword ptr [EAX + 0x8]
//   Label: caseD_1f
// 00528800: SHL EAX,0x2
// 00528803: ADD EAX,0xc
// 00528806: ADD ESP,0x100
// 0052880c: RET
// 0052880d: MOV EAX,0x158
//   Label: caseD_20
// 00528812: ADD ESP,0x100
// 00528818: RET
// 00528819: MOV EAX,0x3d60
//   Label: caseD_26
// 0052881e: ADD ESP,0x100
// 00528824: RET
// 00528825: PUSH EDX
//   Label: caseD_3f
// 00528826: PUSH 0x639c36
//   XREF to: 00639c36 (DATA)
// 0052882b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100] (DATA)
// 0052882f: PUSH EAX
// 00528830: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00528835: MOV EDX,0x639c4e
//   XREF to: 00639c4e (PARAM)
// 0052883a: ADD ESP,0xc
// 0052883d: MOV EAX,ESP
// 0052883f: MOV ECX,0x25b
// 00528844: PUSH EAX
// 00528845: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0052884b: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00528851: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00528856: MOV EAX,0x4
// 0052885b: ADD ESP,0x4
// 0052885e: ADD ESP,0x100
// 00528864: RET
