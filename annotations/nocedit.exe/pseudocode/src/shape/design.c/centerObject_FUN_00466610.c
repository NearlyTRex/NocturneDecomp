// Name: shape_design.c_centerObject_FUN_00466610
// Address: 00466610
// Address Range: [[00466610, 00466a27]]
// Convention: __cdecl
// Signature: void shape_design.c_centerObject_FUN_00466610(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f69b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Press_Enter_or_enter_min_0061c725
//   TerminatedCString s_d_d_0061c74e
//   TerminatedCString s_Need_two_points_0061c754
//   TerminatedCString s_Invalid_point_0061c765
//   TerminatedCString s_Which_axis_to_center_X_Y_0061c774
//   double g_CenteringFactor = 0.5
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_sscanf_FUN_0060013c
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_centerObject_FUN_00466610(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  char local_b8 [8];
  double local_68;
  double local_60;
  double local_58;
  double local_38;
  double local_30;
  double local_28;
  int local_20;
  int local_1c;
  int local_14;
  
  local_68 = 999999.9;
  local_60 = 999999.9;
  local_58 = 999999.9;
  local_38 = -999999.9;
  local_30 = -999999.9;
  local_28 = -999999.9;
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
    dVar1 = (double)g_LoadedVertices[local_1c].vertex.x;
    dVar2 = (double)g_LoadedVertices[local_1c].vertex.y;
    dVar3 = (double)g_LoadedVertices[local_1c].vertex.z;
    if (local_38 < dVar1) {
      local_38 = dVar1;
    }
    if (dVar1 < local_68) {
      local_68 = dVar1;
    }
    if (local_30 < dVar2) {
      local_30 = dVar2;
    }
    if (dVar2 < local_60) {
      local_60 = dVar2;
    }
    if (local_28 < dVar3) {
      local_28 = dVar3;
    }
    if (dVar3 < local_58) {
      local_58 = dVar3;
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar4 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                    (local_b8,0x14,0,0,"Press <Enter> or enter min,max points : ");
  if (iVar4 == 0x1b) {
    return;
  }
  iVar4 = crt_stdio_c_sscanf_FUN_0060013c(local_b8,"%d,%d",&local_14);
  if (0 < iVar4) {
    if (iVar4 != 2) {
      engine_2d_c_drawText_FUN_00401fd0("Need two points.",0,0x16);
      local_b8[0] = -0x4b;
      local_b8[1] = 'g';
      local_b8[2] = 'F';
      local_b8[3] = '\0';
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      local_b8[4] = -0x46;
      local_b8[5] = 'g';
      local_b8[6] = 'F';
      local_b8[7] = '\0';
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      return;
    }
    if ((((local_14 < 0) || (local_20 < 0)) || (g_VertexCount + -1 < local_14)) ||
       (g_VertexCount + -1 < local_20)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      local_b8[0] = -4;
      local_b8[1] = 'g';
      local_b8[2] = 'F';
      local_b8[3] = '\0';
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      local_b8[4] = '\x01';
      local_b8[5] = 'h';
      local_b8[6] = 'F';
      local_b8[7] = '\0';
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      return;
    }
    engine_2d_c_drawText_FUN_00401fd0("Which axis to center - X, Y, or Z? : ",0,0x16);
    builtin_strncpy(local_b8,"\x1dhF",4);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    builtin_strncpy(local_b8 + 4,"\"hF",4);
    uVar5 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    builtin_strncpy(local_b8 + 4,"-hF",4);
    uVar5 = crt_ctype_c_toupper_FUN_005ff9e0(uVar5 & 0xff);
    if (uVar5 < 0x59) {
      if (uVar5 == 0x58) {
        local_38 = (double)g_LoadedVertices[local_20].vertex.x;
        local_68 = (double)g_LoadedVertices[local_14].vertex.x;
      }
    }
    else if (uVar5 < 0x5a) {
      local_30 = (double)g_LoadedVertices[local_20].vertex.y;
      local_60 = (double)g_LoadedVertices[local_14].vertex.y;
    }
    else if (uVar5 == 0x5a) {
      local_28 = (double)g_LoadedVertices[local_20].vertex.z;
      local_58 = (double)g_LoadedVertices[local_14].vertex.z;
    }
  }
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
  }
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
    g_LoadedVertices[local_1c].vertex.x =
         (float)((double)g_LoadedVertices[local_1c].vertex.x -
                ((local_38 - local_68) * g_CenteringFactor + local_68));
    g_LoadedVertices[local_1c].vertex.y =
         (float)((double)g_LoadedVertices[local_1c].vertex.y -
                ((local_30 - local_60) * g_CenteringFactor + local_60));
    g_LoadedVertices[local_1c].vertex.z =
         (float)((double)g_LoadedVertices[local_1c].vertex.z -
                ((local_28 - local_58) * g_CenteringFactor + local_58));
  }
  return;
}


// Assembly code:
// 00466610: PUSH EBX
//   Label: shape_design.c_centerObject_FUN_00466610
// 00466611: PUSH ESI
// 00466612: PUSH EDI
// 00466613: PUSH EBP
// 00466614: MOV EBP,ESP
// 00466616: SUB ESP,0xb4
// 0046661c: MOV dword ptr [EBP + -0x58],0xcccccccd
//   XREF to: Stack[-0x68] (WRITE)
// 00466623: MOV dword ptr [EBP + -0x54],0x412e847f
//   XREF to: Stack[-0x64] (WRITE)
// 0046662a: MOV dword ptr [EBP + -0x50],0xcccccccd
//   XREF to: Stack[-0x60] (WRITE)
// 00466631: MOV dword ptr [EBP + -0x4c],0x412e847f
//   XREF to: Stack[-0x5c] (WRITE)
// 00466638: MOV dword ptr [EBP + -0x48],0xcccccccd
//   XREF to: Stack[-0x58] (WRITE)
// 0046663f: MOV dword ptr [EBP + -0x44],0x412e847f
//   XREF to: Stack[-0x54] (WRITE)
// 00466646: MOV dword ptr [EBP + -0x28],0xcccccccd
//   XREF to: Stack[-0x38] (WRITE)
// 0046664d: MOV dword ptr [EBP + -0x24],0xc12e847f
//   XREF to: Stack[-0x34] (WRITE)
// 00466654: MOV dword ptr [EBP + -0x20],0xcccccccd
//   XREF to: Stack[-0x30] (WRITE)
// 0046665b: MOV dword ptr [EBP + -0x1c],0xc12e847f
//   XREF to: Stack[-0x2c] (WRITE)
// 00466662: MOV dword ptr [EBP + -0x18],0xcccccccd
//   XREF to: Stack[-0x28] (WRITE)
// 00466669: MOV dword ptr [EBP + -0x14],0xc12e847f
//   XREF to: Stack[-0x24] (WRITE)
// 00466670: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00466677: JMP 0x0046667f
//   XREF to: 0046667f (UNCONDITIONAL_JUMP)
// 00466679: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00466679
//   XREF to: Stack[-0x1c] (READ)
// 0046667c: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046667f: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046667f
//   XREF to: Stack[-0x1c] (READ)
// 00466682: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466688: JGE 0x00466744
//   XREF to: 00466744 (CONDITIONAL_JUMP)
// 0046668e: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00466692: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466698: FSTP double ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (WRITE)
// 0046669b: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0046669f: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004666a5: FSTP double ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 004666a8: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 004666ac: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 004666b2: FSTP double ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (WRITE)
// 004666b5: FLD double ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 004666b8: FCOMP double ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 004666bb: FNSTSW AX
// 004666bd: SAHF
// 004666be: JBE 0x004666cc
//   XREF to: 004666cc (CONDITIONAL_JUMP)
// 004666c0: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 004666c3: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004666c6: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 004666c9: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004666cc: FLD double ptr [EBP + -0x38]
//   Label: LAB_004666cc
//   XREF to: Stack[-0x48] (READ)
// 004666cf: FCOMP double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 004666d2: FNSTSW AX
// 004666d4: SAHF
// 004666d5: JNC 0x004666e3
//   XREF to: 004666e3 (CONDITIONAL_JUMP)
// 004666d7: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 004666da: MOV dword ptr [EBP + -0x58],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004666dd: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 004666e0: MOV dword ptr [EBP + -0x54],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004666e3: FLD double ptr [EBP + -0x30]
//   Label: LAB_004666e3
//   XREF to: Stack[-0x40] (READ)
// 004666e6: FCOMP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004666e9: FNSTSW AX
// 004666eb: SAHF
// 004666ec: JBE 0x004666fa
//   XREF to: 004666fa (CONDITIONAL_JUMP)
// 004666ee: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 004666f1: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004666f4: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004666f7: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004666fa: FLD double ptr [EBP + -0x30]
//   Label: LAB_004666fa
//   XREF to: Stack[-0x40] (READ)
// 004666fd: FCOMP double ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 00466700: FNSTSW AX
// 00466702: SAHF
// 00466703: JNC 0x00466711
//   XREF to: 00466711 (CONDITIONAL_JUMP)
// 00466705: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00466708: MOV dword ptr [EBP + -0x50],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0046670b: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046670e: MOV dword ptr [EBP + -0x4c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00466711: FLD double ptr [EBP + -0x40]
//   Label: LAB_00466711
//   XREF to: Stack[-0x50] (READ)
// 00466714: FCOMP double ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00466717: FNSTSW AX
// 00466719: SAHF
// 0046671a: JBE 0x00466728
//   XREF to: 00466728 (CONDITIONAL_JUMP)
// 0046671c: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0046671f: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00466722: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00466725: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00466728: FLD double ptr [EBP + -0x40]
//   Label: LAB_00466728
//   XREF to: Stack[-0x50] (READ)
// 0046672b: FCOMP double ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046672e: FNSTSW AX
// 00466730: SAHF
// 00466731: JNC 0x0046673f
//   XREF to: 0046673f (CONDITIONAL_JUMP)
// 00466733: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 00466736: MOV dword ptr [EBP + -0x48],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00466739: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046673c: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0046673f: JMP 0x00466679
//   Label: LAB_0046673f
//   XREF to: 00466679 (UNCONDITIONAL_JUMP)
// 00466744: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00466744
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00466749: MOV EAX,0x61c725
//   XREF to: 0061c725 (DATA)
// 0046674e: PUSH EAX
//   XREF to: 0061c725 (DATA)
// 0046674f: PUSH 0x0
// 00466751: PUSH 0x0
// 00466753: PUSH 0x14
// 00466755: LEA EAX,[EBP + 0xffffff58]
//   XREF to: Stack[-0xb8] (DATA)
// 0046675b: PUSH EAX
// 0046675c: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00466761: ADD ESP,0x14
// 00466764: CMP EAX,0x1b
// 00466767: JNZ 0x0046676e
//   XREF to: 0046676e (CONDITIONAL_JUMP)
// 00466769: JMP 0x00466a21
//   XREF to: 00466a21 (UNCONDITIONAL_JUMP)
// 0046676e: LEA EAX,[EBP + -0x10]
//   Label: LAB_0046676e
//   XREF to: Stack[-0x20] (DATA)
// 00466771: PUSH EAX
// 00466772: LEA EAX,[EBP + -0x4]
//   XREF to: Stack[-0x14] (DATA)
// 00466775: PUSH EAX
// 00466776: MOV EAX,0x61c74e
//   XREF to: 0061c74e (DATA)
// 0046677b: PUSH EAX
//   XREF to: 0061c74e (DATA)
// 0046677c: LEA EAX,[EBP + 0xffffff58]
//   XREF to: Stack[-0xb8] (DATA)
// 00466782: PUSH EAX
// 00466783: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00466788: ADD ESP,0x10
// 0046678b: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046678e: CMP dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (READ)
// 00466792: JLE 0x004668bf
//   XREF to: 004668bf (CONDITIONAL_JUMP)
// 00466798: CMP dword ptr [EBP + -0xc],0x2
//   XREF to: Stack[-0x1c] (READ)
// 0046679c: JZ 0x004667bf
//   XREF to: 004667bf (CONDITIONAL_JUMP)
// 0046679e: PUSH 0x16
// 004667a0: PUSH 0x0
// 004667a2: MOV EAX,0x61c754
//   XREF to: 0061c754 (PARAM)
// 004667a7: PUSH EAX
//   XREF to: 0061c754 (DATA)
// 004667a8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004667ad: ADD ESP,0xc
// 004667b0: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004667b5: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004667ba: JMP 0x00466a21
//   XREF to: 00466a21 (UNCONDITIONAL_JUMP)
// 004667bf: CMP dword ptr [EBP + -0x4],0x0
//   Label: LAB_004667bf
//   XREF to: Stack[-0x14] (READ)
// 004667c3: JL 0x004667cb
//   XREF to: 004667cb (CONDITIONAL_JUMP)
// 004667c5: CMP dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (READ)
// 004667c9: JGE 0x004667cd
//   XREF to: 004667cd (CONDITIONAL_JUMP)
// 004667cb: JMP 0x004667d8
//   Label: LAB_004667cb
//   XREF to: 004667d8 (UNCONDITIONAL_JUMP)
// 004667cd: MOV EAX,[0x01626408]
//   Label: LAB_004667cd
//   XREF to: 01626408 (READ)
// 004667d2: DEC EAX
// 004667d3: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004667d6: JGE 0x004667da
//   XREF to: 004667da (CONDITIONAL_JUMP)
// 004667d8: JMP 0x004667e5
//   Label: LAB_004667d8
//   XREF to: 004667e5 (UNCONDITIONAL_JUMP)
// 004667da: MOV EAX,[0x01626408]
//   Label: LAB_004667da
//   XREF to: 01626408 (READ)
// 004667df: DEC EAX
// 004667e0: CMP EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004667e3: JGE 0x00466806
//   XREF to: 00466806 (CONDITIONAL_JUMP)
// 004667e5: PUSH 0x16
//   Label: LAB_004667e5
// 004667e7: PUSH 0x0
// 004667e9: MOV EAX,0x61c765
//   XREF to: 0061c765 (PARAM)
// 004667ee: PUSH EAX
//   XREF to: 0061c765 (DATA)
// 004667ef: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004667f4: ADD ESP,0xc
// 004667f7: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004667fc: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00466801: JMP 0x00466a21
//   XREF to: 00466a21 (UNCONDITIONAL_JUMP)
// 00466806: PUSH 0x16
//   Label: LAB_00466806
// 00466808: PUSH 0x0
// 0046680a: MOV EAX,0x61c774
//   XREF to: 0061c774 (PARAM)
// 0046680f: PUSH EAX
//   XREF to: 0061c774 (DATA)
// 00466810: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00466815: ADD ESP,0xc
// 00466818: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046681d: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00466822: AND EAX,0xff
// 00466827: PUSH EAX
// 00466828: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0046682d: ADD ESP,0x4
// 00466830: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00466833: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00466836: MOV dword ptr [EBP + 0xffffff54],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 0046683c: JMP 0x00466897
//   XREF to: 00466897 (UNCONDITIONAL_JUMP)
// 0046683e: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   Label: LAB_0046683e
//   XREF to: Stack[-0x20] (READ)
// 00466842: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466848: FSTP double ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 0046684b: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0046684f: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466855: FSTP double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (WRITE)
// 00466858: JMP 0x004668bf
//   XREF to: 004668bf (UNCONDITIONAL_JUMP)
// 0046685d: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   Label: LAB_0046685d
//   XREF to: Stack[-0x20] (READ)
// 00466861: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00466867: FSTP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0046686a: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0046686e: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00466874: FSTP double ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (WRITE)
// 00466877: JMP 0x004668bf
//   XREF to: 004668bf (UNCONDITIONAL_JUMP)
// 00466879: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   Label: LAB_00466879
//   XREF to: Stack[-0x20] (READ)
// 0046687d: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466883: FSTP double ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 00466886: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0046688a: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466890: FSTP double ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (WRITE)
// 00466893: JMP 0x004668bf
//   XREF to: 004668bf (UNCONDITIONAL_JUMP)
// 00466895: JMP 0x004668bf
//   Label: LAB_00466895
//   XREF to: 004668bf (UNCONDITIONAL_JUMP)
// 00466897: CMP dword ptr [EBP + 0xffffff54],0x59
//   Label: LAB_00466897
//   XREF to: Stack[-0xbc] (READ)
// 0046689e: JC 0x004668b4
//   XREF to: 004668b4 (CONDITIONAL_JUMP)
// 004668a0: CMP dword ptr [EBP + 0xffffff54],0x59
//   XREF to: Stack[-0xbc] (READ)
// 004668a7: JBE 0x0046685d
//   XREF to: 0046685d (CONDITIONAL_JUMP)
// 004668a9: CMP dword ptr [EBP + 0xffffff54],0x5a
//   XREF to: Stack[-0xbc] (READ)
// 004668b0: JZ 0x00466879
//   XREF to: 00466879 (CONDITIONAL_JUMP)
// 004668b2: JMP 0x00466895
//   XREF to: 00466895 (UNCONDITIONAL_JUMP)
// 004668b4: CMP dword ptr [EBP + 0xffffff54],0x58
//   Label: LAB_004668b4
//   XREF to: Stack[-0xbc] (READ)
// 004668bb: JZ 0x0046683e
//   XREF to: 0046683e (CONDITIONAL_JUMP)
// 004668bd: JMP 0x00466895
//   XREF to: 00466895 (UNCONDITIONAL_JUMP)
// 004668bf: MOV dword ptr [EBP + -0x38],0x0
//   Label: LAB_004668bf
//   XREF to: Stack[-0x48] (WRITE)
// 004668c6: MOV dword ptr [EBP + -0x34],0x0
//   XREF to: Stack[-0x44] (WRITE)
// 004668cd: MOV dword ptr [EBP + -0x30],0x0
//   XREF to: Stack[-0x40] (WRITE)
// 004668d4: MOV dword ptr [EBP + -0x2c],0x0
//   XREF to: Stack[-0x3c] (WRITE)
// 004668db: MOV dword ptr [EBP + -0x40],0x0
//   XREF to: Stack[-0x50] (WRITE)
// 004668e2: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 004668e9: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 004668f0: JMP 0x004668f8
//   XREF to: 004668f8 (UNCONDITIONAL_JUMP)
// 004668f2: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004668f2
//   XREF to: Stack[-0x1c] (READ)
// 004668f5: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 004668f8: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004668f8
//   XREF to: Stack[-0x1c] (READ)
// 004668fb: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466901: JGE 0x00466935
//   XREF to: 00466935 (CONDITIONAL_JUMP)
// 00466903: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00466907: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046690d: FADD double ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00466910: FSTP double ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (WRITE)
// 00466913: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00466917: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046691d: FADD double ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00466920: FSTP double ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 00466923: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00466927: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046692d: FADD double ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 00466930: FSTP double ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (WRITE)
// 00466933: JMP 0x004668f2
//   XREF to: 004668f2 (UNCONDITIONAL_JUMP)
// 00466935: FILD dword ptr [0x01626408]
//   Label: LAB_00466935
//   XREF to: 01626408 (READ)
// 0046693b: FDIVR double ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0046693e: FSTP double ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (WRITE)
// 00466941: FILD dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466947: FDIVR double ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046694a: FSTP double ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 0046694d: FILD dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466953: FDIVR double ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 00466956: FSTP double ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (WRITE)
// 00466959: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00466960: JMP 0x00466968
//   XREF to: 00466968 (UNCONDITIONAL_JUMP)
// 00466962: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00466962
//   XREF to: Stack[-0x1c] (READ)
// 00466965: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00466968: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00466968
//   XREF to: Stack[-0x1c] (READ)
// 0046696b: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466971: JGE 0x00466a21
//   XREF to: 00466a21 (CONDITIONAL_JUMP)
// 00466977: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0046697b: FLD double ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046697e: FSUB double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 00466981: FMUL double ptr [0x0061c79e]
//   XREF to: 0061c79e (READ)
// 00466987: FADD double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 0046698a: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466990: FSTP double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (WRITE)
// 00466996: FSUBR double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (READ)
// 0046699c: FSTP double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (WRITE)
// 004669a2: FLD double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (READ)
// 004669a8: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 004669ae: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 004669b2: FLD double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004669b5: FSUB double ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 004669b8: FMUL double ptr [0x0061c79e]
//   XREF to: 0061c79e (READ)
// 004669be: FADD double ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 004669c1: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004669c7: FSTP double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (WRITE)
// 004669cd: FSUBR double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (READ)
// 004669d3: FSTP double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (WRITE)
// 004669d9: FLD double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (READ)
// 004669df: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004669e5: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 004669e9: FLD double ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004669ec: FSUB double ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 004669ef: FMUL double ptr [0x0061c79e]
//   XREF to: 0061c79e (READ)
// 004669f5: FADD double ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 004669f8: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 004669fe: FSTP double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (WRITE)
// 00466a04: FSUBR double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (READ)
// 00466a0a: FSTP double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (WRITE)
// 00466a10: FLD double ptr [EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (READ)
// 00466a16: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466a1c: JMP 0x00466962
//   XREF to: 00466962 (UNCONDITIONAL_JUMP)
// 00466a21: MOV ESP,EBP
//   Label: LAB_00466a21
// 00466a23: POP EBP
// 00466a24: POP EDI
// 00466a25: POP ESI
// 00466a26: POP EBX
// 00466a27: RET
