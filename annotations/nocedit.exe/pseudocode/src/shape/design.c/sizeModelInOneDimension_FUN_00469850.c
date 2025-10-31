// Name: shape_design.c_sizeModelInOneDimension_FUN_00469850
// Address: 00469850
// Address Range: [[00469850, 00469bc1]]
// Convention: __cdecl
// Signature: void shape_design.c_sizeModelInOneDimension_FUN_00469850(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f740 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_axis_to_size_X_Y_o_0061cfef
//   TerminatedCString s_Enter_c_distance_in_feet_0061d012
//   TerminatedCString s_f_d_d_0061d05a
//   TerminatedCString s_Need_distance_and_two_po_0061d063
//   TerminatedCString s_Invalid_point_0061d081
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_sizeModelInOneDimension_FUN_00469850(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  char local_a4 [80];
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  bVar5 = 0;
  local_38 = 999999.9;
  local_34 = 999999.9;
  local_30 = 999999.9;
  local_2c = -999999.9;
  local_28 = -999999.9;
  local_24 = -999999.9;
  for (local_54 = 0; local_54 < g_VertexCount; local_54 = local_54 + 1) {
    local_44 = g_LoadedVertices[local_54].vertex.x;
    if (local_2c < local_44) {
      local_2c = local_44;
    }
    if (local_44 < local_38) {
      local_38 = local_44;
    }
    local_40 = g_LoadedVertices[local_54].vertex.y;
    if (local_28 < local_40) {
      local_28 = local_40;
    }
    if (local_40 < local_34) {
      local_34 = local_40;
    }
    local_3c = g_LoadedVertices[local_54].vertex.z;
    if (local_24 < local_3c) {
      local_24 = local_3c;
    }
    if (local_3c < local_30) {
      local_30 = local_3c;
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Enter axis to size - X, Y, or Z : ",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  local_48 = crt_ctype_c_toupper_FUN_005ff9e0(uVar2 & 0xff);
  if ((0x57 < (int)local_48) && ((int)local_48 < 0x5b)) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff0c,"Enter %c distance in feet (,min,max for user-defined min/max points) : ");
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_a4,0x14,0,0x16,&stack0xffffff0c);
    iVar3 = -1;
    pcVar4 = local_a4;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      local_54 = crt_stdio_c_sscanf_FUN_0060013c(local_a4,"%f,%d,%d");
      if (1 < local_54) {
        if (local_54 != 3) {
          engine_2d_c_drawText_FUN_00401fd0("Need distance and two points.",0,0x2c);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          return;
        }
        if ((((local_4c < 0) || (local_50 < 0)) || (g_VertexCount + -1 < local_4c)) ||
           (g_VertexCount + -1 < local_50)) {
          engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x2c);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          return;
        }
        if (local_48 < 0x59) {
          if (local_48 == 0x58) {
            local_2c = g_LoadedVertices[local_50].vertex.x;
            local_38 = g_LoadedVertices[local_4c].vertex.x;
          }
        }
        else if (local_48 < 0x5a) {
          local_28 = g_LoadedVertices[local_50].vertex.y;
          local_34 = g_LoadedVertices[local_4c].vertex.y;
        }
        else if (local_48 == 0x5a) {
          local_24 = g_LoadedVertices[local_50].vertex.z;
          local_30 = g_LoadedVertices[local_4c].vertex.z;
        }
      }
      for (local_54 = 0; local_54 < g_VertexCount; local_54 = local_54 + 1) {
        if (local_48 < 0x59) {
          if (local_48 == 0x58) {
            g_LoadedVertices[local_54].vertex.x =
                 g_LoadedVertices[local_54].vertex.x * (local_20 / (local_2c - local_38));
          }
        }
        else if (local_48 < 0x5a) {
          g_LoadedVertices[local_54].vertex.y =
               g_LoadedVertices[local_54].vertex.y * (local_20 / (local_28 - local_34));
        }
        else if (local_48 == 0x5a) {
          g_LoadedVertices[local_54].vertex.z =
               g_LoadedVertices[local_54].vertex.z * (local_20 / (local_24 - local_30));
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00469850: PUSH EBX
//   Label: shape_design.c_sizeModelInOneDimension_FUN_00469850
// 00469851: PUSH ESI
// 00469852: PUSH EDI
// 00469853: PUSH EBP
// 00469854: MOV EBP,ESP
// 00469856: SUB ESP,0xec
// 0046985c: MOV dword ptr [EBP + -0x28],0x497423fe
//   XREF to: Stack[-0x38] (WRITE)
// 00469863: MOV dword ptr [EBP + -0x24],0x497423fe
//   XREF to: Stack[-0x34] (WRITE)
// 0046986a: MOV dword ptr [EBP + -0x20],0x497423fe
//   XREF to: Stack[-0x30] (WRITE)
// 00469871: MOV dword ptr [EBP + -0x1c],0xc97423fe
//   XREF to: Stack[-0x2c] (WRITE)
// 00469878: MOV dword ptr [EBP + -0x18],0xc97423fe
//   XREF to: Stack[-0x28] (WRITE)
// 0046987f: MOV dword ptr [EBP + -0x14],0xc97423fe
//   XREF to: Stack[-0x24] (WRITE)
// 00469886: MOV dword ptr [EBP + -0x44],0x0
//   XREF to: Stack[-0x54] (WRITE)
// 0046988d: JMP 0x00469895
//   XREF to: 00469895 (UNCONDITIONAL_JUMP)
// 0046988f: MOV EAX,dword ptr [EBP + -0x44]
//   Label: LAB_0046988f
//   XREF to: Stack[-0x54] (READ)
// 00469892: INC dword ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ_WRITE)
// 00469895: MOV EAX,dword ptr [EBP + -0x44]
//   Label: LAB_00469895
//   XREF to: Stack[-0x54] (READ)
// 00469898: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0046989e: JGE 0x00469936
//   XREF to: 00469936 (CONDITIONAL_JUMP)
// 004698a4: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 004698a8: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 004698ae: MOV dword ptr [EBP + -0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004698b1: FLD float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 004698b4: FCOMP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004698b7: FNSTSW AX
// 004698b9: SAHF
// 004698ba: JBE 0x004698c2
//   XREF to: 004698c2 (CONDITIONAL_JUMP)
// 004698bc: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 004698bf: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004698c2: FLD float ptr [EBP + -0x34]
//   Label: LAB_004698c2
//   XREF to: Stack[-0x44] (READ)
// 004698c5: FCOMP float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 004698c8: FNSTSW AX
// 004698ca: SAHF
// 004698cb: JNC 0x004698d3
//   XREF to: 004698d3 (CONDITIONAL_JUMP)
// 004698cd: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 004698d0: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004698d3: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   Label: LAB_004698d3
//   XREF to: Stack[-0x54] (READ)
// 004698d7: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004698dd: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004698e0: FLD float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 004698e3: FCOMP float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004698e6: FNSTSW AX
// 004698e8: SAHF
// 004698e9: JBE 0x004698f1
//   XREF to: 004698f1 (CONDITIONAL_JUMP)
// 004698eb: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 004698ee: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004698f1: FLD float ptr [EBP + -0x30]
//   Label: LAB_004698f1
//   XREF to: Stack[-0x40] (READ)
// 004698f4: FCOMP float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 004698f7: FNSTSW AX
// 004698f9: SAHF
// 004698fa: JNC 0x00469902
//   XREF to: 00469902 (CONDITIONAL_JUMP)
// 004698fc: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 004698ff: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00469902: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   Label: LAB_00469902
//   XREF to: Stack[-0x54] (READ)
// 00469906: MOV EAX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046990c: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0046990f: FLD float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00469912: FCOMP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00469915: FNSTSW AX
// 00469917: SAHF
// 00469918: JBE 0x00469920
//   XREF to: 00469920 (CONDITIONAL_JUMP)
// 0046991a: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046991d: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00469920: FLD float ptr [EBP + -0x2c]
//   Label: LAB_00469920
//   XREF to: Stack[-0x3c] (READ)
// 00469923: FCOMP float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00469926: FNSTSW AX
// 00469928: SAHF
// 00469929: JNC 0x00469931
//   XREF to: 00469931 (CONDITIONAL_JUMP)
// 0046992b: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046992e: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00469931: JMP 0x0046988f
//   Label: LAB_00469931
//   XREF to: 0046988f (UNCONDITIONAL_JUMP)
// 00469936: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00469936
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046993b: PUSH 0x0
// 0046993d: PUSH 0x0
// 0046993f: MOV EAX,0x61cfef
//   XREF to: 0061cfef (PARAM)
// 00469944: PUSH EAX
//   XREF to: 0061cfef (DATA)
// 00469945: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046994a: ADD ESP,0xc
// 0046994d: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00469952: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00469957: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046995c: AND EAX,0xff
// 00469961: PUSH EAX
// 00469962: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 00469967: ADD ESP,0x4
// 0046996a: MOV dword ptr [EBP + -0x38],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0046996d: CMP dword ptr [EBP + -0x38],0x58
//   XREF to: Stack[-0x48] (READ)
// 00469971: JL 0x00469979
//   XREF to: 00469979 (CONDITIONAL_JUMP)
// 00469973: CMP dword ptr [EBP + -0x38],0x5a
//   XREF to: Stack[-0x48] (READ)
// 00469977: JLE 0x0046997e
//   XREF to: 0046997e (CONDITIONAL_JUMP)
// 00469979: JMP 0x00469bbb
//   Label: LAB_00469979
//   XREF to: 00469bbb (UNCONDITIONAL_JUMP)
// 0046997e: MOV ECX,dword ptr [EBP + -0x38]
//   Label: LAB_0046997e
//   XREF to: Stack[-0x48] (READ)
// 00469981: PUSH ECX
// 00469982: MOV ECX,0x61d012
//   XREF to: 0061d012 (DATA)
// 00469987: PUSH ECX
//   XREF to: 0061d012 (DATA)
// 00469988: LEA ECX,[EBP + 0xffffff1c]
//   XREF to: Stack[-0xf4] (DATA)
// 0046998e: PUSH ECX
// 0046998f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00469994: ADD ESP,0xc
// 00469997: LEA ECX,[EBP + 0xffffff1c]
//   XREF to: Stack[-0xf4] (DATA)
// 0046999d: PUSH ECX
// 0046999e: PUSH 0x16
// 004699a0: PUSH 0x0
// 004699a2: PUSH 0x14
// 004699a4: LEA ECX,[EBP + 0xffffff6c]
//   XREF to: Stack[-0xa4] (DATA)
// 004699aa: PUSH ECX
// 004699ab: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 004699b0: ADD ESP,0x14
// 004699b3: LEA EDI,[EBP + 0xffffff6c]
//   XREF to: Stack[-0xa4] (DATA)
// 004699b9: SUB ECX,ECX
// 004699bb: DEC ECX
// 004699bc: XOR EAX,EAX
// 004699be: SCASB.REPNE ES:EDI
// 004699c0: NOT ECX
// 004699c2: DEC ECX
// 004699c3: TEST ECX,ECX
// 004699c5: JNZ 0x004699cc
//   XREF to: 004699cc (CONDITIONAL_JUMP)
// 004699c7: JMP 0x00469bbb
//   XREF to: 00469bbb (UNCONDITIONAL_JUMP)
// 004699cc: LEA EAX,[EBP + -0x40]
//   Label: LAB_004699cc
//   XREF to: Stack[-0x50] (DATA)
// 004699cf: PUSH EAX
// 004699d0: LEA EAX,[EBP + -0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 004699d3: PUSH EAX
// 004699d4: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 004699d7: PUSH EAX
// 004699d8: MOV EAX,0x61d05a
//   XREF to: 0061d05a (DATA)
// 004699dd: PUSH EAX
//   XREF to: 0061d05a (DATA)
// 004699de: LEA EAX,[EBP + 0xffffff6c]
//   XREF to: Stack[-0xa4] (DATA)
// 004699e4: PUSH EAX
// 004699e5: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004699ea: ADD ESP,0x14
// 004699ed: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004699f0: CMP dword ptr [EBP + -0x44],0x1
//   XREF to: Stack[-0x54] (READ)
// 004699f4: JLE 0x00469af4
//   XREF to: 00469af4 (CONDITIONAL_JUMP)
// 004699fa: CMP dword ptr [EBP + -0x44],0x3
//   XREF to: Stack[-0x54] (READ)
// 004699fe: JZ 0x00469a21
//   XREF to: 00469a21 (CONDITIONAL_JUMP)
// 00469a00: PUSH 0x2c
// 00469a02: PUSH 0x0
// 00469a04: MOV EAX,0x61d063
//   XREF to: 0061d063 (PARAM)
// 00469a09: PUSH EAX
//   XREF to: 0061d063 (DATA)
// 00469a0a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00469a0f: ADD ESP,0xc
// 00469a12: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00469a17: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00469a1c: JMP 0x00469bbb
//   XREF to: 00469bbb (UNCONDITIONAL_JUMP)
// 00469a21: CMP dword ptr [EBP + -0x3c],0x0
//   Label: LAB_00469a21
//   XREF to: Stack[-0x4c] (READ)
// 00469a25: JL 0x00469a2d
//   XREF to: 00469a2d (CONDITIONAL_JUMP)
// 00469a27: CMP dword ptr [EBP + -0x40],0x0
//   XREF to: Stack[-0x50] (READ)
// 00469a2b: JGE 0x00469a2f
//   XREF to: 00469a2f (CONDITIONAL_JUMP)
// 00469a2d: JMP 0x00469a3a
//   Label: LAB_00469a2d
//   XREF to: 00469a3a (UNCONDITIONAL_JUMP)
// 00469a2f: MOV EAX,[0x01626408]
//   Label: LAB_00469a2f
//   XREF to: 01626408 (READ)
// 00469a34: DEC EAX
// 00469a35: CMP EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00469a38: JGE 0x00469a3c
//   XREF to: 00469a3c (CONDITIONAL_JUMP)
// 00469a3a: JMP 0x00469a47
//   Label: LAB_00469a3a
//   XREF to: 00469a47 (UNCONDITIONAL_JUMP)
// 00469a3c: MOV EAX,[0x01626408]
//   Label: LAB_00469a3c
//   XREF to: 01626408 (READ)
// 00469a41: DEC EAX
// 00469a42: CMP EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 00469a45: JGE 0x00469a68
//   XREF to: 00469a68 (CONDITIONAL_JUMP)
// 00469a47: PUSH 0x2c
//   Label: LAB_00469a47
// 00469a49: PUSH 0x0
// 00469a4b: MOV EAX,0x61d081
//   XREF to: 0061d081 (PARAM)
// 00469a50: PUSH EAX
//   XREF to: 0061d081 (DATA)
// 00469a51: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00469a56: ADD ESP,0xc
// 00469a59: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00469a5e: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00469a63: JMP 0x00469bbb
//   XREF to: 00469bbb (UNCONDITIONAL_JUMP)
// 00469a68: MOV EAX,dword ptr [EBP + -0x38]
//   Label: LAB_00469a68
//   XREF to: Stack[-0x48] (READ)
// 00469a6b: MOV dword ptr [EBP + 0xffffff18],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 00469a71: JMP 0x00469acc
//   XREF to: 00469acc (UNCONDITIONAL_JUMP)
// 00469a73: IMUL EAX,dword ptr [EBP + -0x40],0x14
//   Label: LAB_00469a73
//   XREF to: Stack[-0x50] (READ)
// 00469a77: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00469a7d: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00469a80: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 00469a84: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00469a8a: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00469a8d: JMP 0x00469af4
//   XREF to: 00469af4 (UNCONDITIONAL_JUMP)
// 00469a92: IMUL EAX,dword ptr [EBP + -0x40],0x14
//   Label: LAB_00469a92
//   XREF to: Stack[-0x50] (READ)
// 00469a96: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00469a9c: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00469a9f: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 00469aa3: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00469aa9: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00469aac: JMP 0x00469af4
//   XREF to: 00469af4 (UNCONDITIONAL_JUMP)
// 00469aae: IMUL EAX,dword ptr [EBP + -0x40],0x14
//   Label: LAB_00469aae
//   XREF to: Stack[-0x50] (READ)
// 00469ab2: MOV EAX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00469ab8: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00469abb: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 00469abf: MOV EAX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00469ac5: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00469ac8: JMP 0x00469af4
//   XREF to: 00469af4 (UNCONDITIONAL_JUMP)
// 00469aca: JMP 0x00469af4
//   Label: LAB_00469aca
//   XREF to: 00469af4 (UNCONDITIONAL_JUMP)
// 00469acc: CMP dword ptr [EBP + 0xffffff18],0x59
//   Label: LAB_00469acc
//   XREF to: Stack[-0xf8] (READ)
// 00469ad3: JC 0x00469ae9
//   XREF to: 00469ae9 (CONDITIONAL_JUMP)
// 00469ad5: CMP dword ptr [EBP + 0xffffff18],0x59
//   XREF to: Stack[-0xf8] (READ)
// 00469adc: JBE 0x00469a92
//   XREF to: 00469a92 (CONDITIONAL_JUMP)
// 00469ade: CMP dword ptr [EBP + 0xffffff18],0x5a
//   XREF to: Stack[-0xf8] (READ)
// 00469ae5: JZ 0x00469aae
//   XREF to: 00469aae (CONDITIONAL_JUMP)
// 00469ae7: JMP 0x00469aca
//   XREF to: 00469aca (UNCONDITIONAL_JUMP)
// 00469ae9: CMP dword ptr [EBP + 0xffffff18],0x58
//   Label: LAB_00469ae9
//   XREF to: Stack[-0xf8] (READ)
// 00469af0: JZ 0x00469a73
//   XREF to: 00469a73 (CONDITIONAL_JUMP)
// 00469af2: JMP 0x00469aca
//   XREF to: 00469aca (UNCONDITIONAL_JUMP)
// 00469af4: FLD float ptr [EBP + -0x1c]
//   Label: LAB_00469af4
//   XREF to: Stack[-0x2c] (READ)
// 00469af7: FSUB float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00469afa: FDIVR float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00469afd: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00469b00: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00469b03: FSUB float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00469b06: FDIVR float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00469b09: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00469b0c: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00469b0f: FSUB float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00469b12: FDIVR float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00469b15: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 00469b18: MOV dword ptr [EBP + -0x44],0x0
//   XREF to: Stack[-0x54] (WRITE)
// 00469b1f: JMP 0x00469b27
//   XREF to: 00469b27 (UNCONDITIONAL_JUMP)
// 00469b21: MOV EAX,dword ptr [EBP + -0x44]
//   Label: LAB_00469b21
//   XREF to: Stack[-0x54] (READ)
// 00469b24: INC dword ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ_WRITE)
// 00469b27: MOV EAX,dword ptr [EBP + -0x44]
//   Label: LAB_00469b27
//   XREF to: Stack[-0x54] (READ)
// 00469b2a: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00469b30: JGE 0x00469bbb
//   XREF to: 00469bbb (CONDITIONAL_JUMP)
// 00469b36: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00469b39: MOV dword ptr [EBP + 0xffffff14],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 00469b3f: JMP 0x00469b8e
//   XREF to: 00469b8e (UNCONDITIONAL_JUMP)
// 00469b41: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   Label: LAB_00469b41
//   XREF to: Stack[-0x54] (READ)
// 00469b45: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00469b4b: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00469b4e: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 00469b52: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00469b58: JMP 0x00469bb6
//   XREF to: 00469bb6 (UNCONDITIONAL_JUMP)
// 00469b5a: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   Label: LAB_00469b5a
//   XREF to: Stack[-0x54] (READ)
// 00469b5e: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00469b64: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00469b67: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 00469b6b: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00469b71: JMP 0x00469bb6
//   XREF to: 00469bb6 (UNCONDITIONAL_JUMP)
// 00469b73: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   Label: LAB_00469b73
//   XREF to: Stack[-0x54] (READ)
// 00469b77: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00469b7d: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469b80: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 00469b84: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00469b8a: JMP 0x00469bb6
//   XREF to: 00469bb6 (UNCONDITIONAL_JUMP)
// 00469b8c: JMP 0x00469bb6
//   Label: LAB_00469b8c
//   XREF to: 00469bb6 (UNCONDITIONAL_JUMP)
// 00469b8e: CMP dword ptr [EBP + 0xffffff14],0x59
//   Label: LAB_00469b8e
//   XREF to: Stack[-0xfc] (READ)
// 00469b95: JC 0x00469bab
//   XREF to: 00469bab (CONDITIONAL_JUMP)
// 00469b97: CMP dword ptr [EBP + 0xffffff14],0x59
//   XREF to: Stack[-0xfc] (READ)
// 00469b9e: JBE 0x00469b5a
//   XREF to: 00469b5a (CONDITIONAL_JUMP)
// 00469ba0: CMP dword ptr [EBP + 0xffffff14],0x5a
//   XREF to: Stack[-0xfc] (READ)
// 00469ba7: JZ 0x00469b73
//   XREF to: 00469b73 (CONDITIONAL_JUMP)
// 00469ba9: JMP 0x00469b8c
//   XREF to: 00469b8c (UNCONDITIONAL_JUMP)
// 00469bab: CMP dword ptr [EBP + 0xffffff14],0x58
//   Label: LAB_00469bab
//   XREF to: Stack[-0xfc] (READ)
// 00469bb2: JZ 0x00469b41
//   XREF to: 00469b41 (CONDITIONAL_JUMP)
// 00469bb4: JMP 0x00469b8c
//   XREF to: 00469b8c (UNCONDITIONAL_JUMP)
// 00469bb6: JMP 0x00469b21
//   Label: LAB_00469bb6
//   XREF to: 00469b21 (UNCONDITIONAL_JUMP)
// 00469bbb: MOV ESP,EBP
//   Label: LAB_00469bbb
// 00469bbd: POP EBP
// 00469bbe: POP EDI
// 00469bbf: POP ESI
// 00469bc0: POP EBX
// 00469bc1: RET
