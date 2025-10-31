// Name: shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70
// Address: 0053ee70
// Address Range: [[0053ee70, 0053f309]]
// Convention: __cdecl
// Signature: void shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70(CMultiCram * this_ptr)
// Cross-references:
//   shape_design.c_multicramTextures_FUN_0046eb80 (0046eb80) at 0046eb92 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_multicrm_cpp_0063d0f1
//   TerminatedCString s_shape_multicrm_cpp_0063d107
//   TerminatedCString s_CMultiCram_run_Out_of_me_0063d11d
//   TerminatedCString s_Found_model_s_0063d13d
//   TerminatedCString s_s_bin_0063d14e
//   TerminatedCString s_s_is_a_new_model_0063d155
//   TerminatedCString s_Sizing_s_to_existing_BIN_0063d168
//   TerminatedCString s_s_mdl_0063d188
//   TerminatedCString s_s_bin_0063d18f
//   TerminatedCString s_s_c_bin_0063d196
//   TerminatedCString s_rb_0063d19f
//   TerminatedCString s_models_0063d1a2
//   TerminatedCString s_shape_multicrm_cpp_0063d1a9
//   TerminatedCString s_Found_clone_of_different_0063d1bf
//   TerminatedCString s_s_c_mdl_0063d1e4
//   TerminatedCString s_s_c_bin_0063d1ed
//   TerminatedCString s_shape_multicrm_cpp_0063d1f6
//   TerminatedCString s_Press_any_key_0063d20c
//   int g_WindowHeight = 0xc8
//   char* g_CurrentDebugFilename = 0067d200
//   int g_PartsCount
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_design.c_exportModelToBIN_FUN_0045aa80
//   shape_design.c_exportModelToMDL_FUN_00459e80
//   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
//   shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960
//   shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_multicrm_cpp_CMultiCram_run_FUN_0053ee70(CMultiCram *this_ptr)

{
  CDSEModel *pCVar1;
  int iVar2;
  FILE *file_ptr;
  BADSPACEBASE *in_ESP;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  this_ptr->model_count = g_PartsCount;
  for (local_1c = 0; (int)local_1c < this_ptr->model_count; local_1c = local_1c + 1) {
    pCVar1 = (CDSEModel *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1f20dc,"..\\shape\\multicrm.cpp",0x42);
    this_ptr->models[local_1c] = pCVar1;
    if (this_ptr->models[local_1c] == (CDSEModel *)0x0) {
      g_CurrentFilename = "..\\shape\\multicrm.cpp";
      g_CurrentLineNumber = 0x43;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CMultiCram::run - Out of memory");
    }
    shape_dsemodel_cpp_CDSEModel_processModelPart_FUN_0048f770(this_ptr->models[local_1c],local_1c);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee4,"Found model : %s");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffee4,0,local_14);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_14 = local_14 + 0xb;
    if (g_WindowHeight + -0xb < local_14) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      local_14 = 0;
    }
  }
  for (local_1c = 0; (int)local_1c < this_ptr->model_count; local_1c = local_1c + 1) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffee4,"%s.bin",this_ptr->models[local_1c]->model_name);
    iVar2 = shape_dsemodel_cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
                      (this_ptr->models[local_1c],&stack0xfffffee4);
    if (iVar2 == 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee4,"%s is a new model.");
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee4,"Sizing %s to existing .BIN file");
    }
    engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffee4,0,local_14);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_14 = local_14 + 0xb;
    if (g_WindowHeight + -0xb < local_14) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      local_14 = 0;
    }
    shape_dsemodel_cpp_CDSEModel_load_FUN_0048f960(this_ptr->models[local_1c]);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee4,"%s.mdl");
    shape_design_c_exportModelToMDL_FUN_00459e80(&stack0xfffffee4);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee4,"%s.bin");
    shape_design_c_exportModelToBIN_FUN_0045aa80(&stack0xfffffee4,0x4e,0x35,1,0x59);
    for (local_18 = 0x61; local_18 < 0x7b; local_18 = local_18 + 1) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffee4,"%s%c.bin",this_ptr->models[local_1c]->model_name,local_18
                );
      file_ptr = engine_dosio_c_getFile_FUN_00481a50
                           ("models",&stack0xfffffee4,"rb");
      if (file_ptr != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\shape\\multicrm.cpp",0x80);
        shape_dsemodel_cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
                  (this_ptr->models[local_1c],&stack0xfffffee4);
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee4,"Found clone of different size : %s%c");
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffee4,0,local_14);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        local_14 = local_14 + 0xb;
        if (g_WindowHeight + -0xb < local_14) {
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          local_14 = 0;
        }
        shape_dsemodel_cpp_CDSEModel_load_FUN_0048f960(this_ptr->models[local_1c]);
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee4,"%s%c.mdl");
        shape_design_c_exportModelToMDL_FUN_00459e80(&stack0xfffffee4);
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee4,"%s%c.bin");
        shape_design_c_exportModelToBIN_FUN_0045aa80(&stack0xfffffee4,0x4e,0x35,1,0x59);
      }
    }
  }
  for (local_1c = 0; (int)local_1c < this_ptr->model_count; local_1c = local_1c + 1) {
    g_CurrentDebugFilename = "..\\shape\\multicrm.cpp";
    g_CurrentDebugLine = 0xa9;
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr->models[local_1c]);
  }
  engine_2d_c_drawText_FUN_00401fd0("Press any key...",0,local_14);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}


// Assembly code:
// 0053ee70: PUSH EBX
//   Label: shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70
// 0053ee71: PUSH ESI
// 0053ee72: PUSH EDI
// 0053ee73: PUSH EBP
// 0053ee74: MOV EBP,ESP
// 0053ee76: SUB ESP,0x114
// 0053ee7c: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0053ee83: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0053ee88: MOV EDX,dword ptr [0x01e528a0]
//   XREF to: 01e528a0 (READ)
// 0053ee8e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053ee91: MOV dword ptr [EAX],EDX
// 0053ee93: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0053ee9a: JMP 0x0053eea2
//   XREF to: 0053eea2 (UNCONDITIONAL_JUMP)
// 0053ee9c: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0053ee9c
//   XREF to: Stack[-0x1c] (READ)
// 0053ee9f: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0053eea2: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0053eea2
//   XREF to: Stack[-0x1c] (READ)
// 0053eea5: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053eea8: CMP EAX,dword ptr [EDX]
// 0053eeaa: JGE 0x0053ef7d
//   XREF to: 0053ef7d (CONDITIONAL_JUMP)
// 0053eeb0: PUSH 0x42
// 0053eeb2: MOV EAX,0x63d0f1
//   XREF to: 0063d0f1 (PARAM)
// 0053eeb7: PUSH EAX
//   XREF to: 0063d0f1 (DATA)
// 0053eeb8: PUSH 0x1f20dc
// 0053eebd: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0053eec2: ADD ESP,0xc
// 0053eec5: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053eec8: SHL EDX,0x2
// 0053eecb: ADD EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053eece: MOV dword ptr [EDX + 0x4],EAX
// 0053eed1: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053eed4: SHL EAX,0x2
// 0053eed7: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053eeda: CMP dword ptr [EAX + 0x4],0x0
// 0053eede: JNZ 0x0053ef02
//   XREF to: 0053ef02 (CONDITIONAL_JUMP)
// 0053eee0: MOV dword ptr [0x02f0ca48],0x63d107
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0063d107 (DATA)
// 0053eeea: MOV dword ptr [0x02f0ca4c],0x43
//   XREF to: 02f0ca4c (WRITE)
// 0053eef4: MOV EAX,0x63d11d
//   XREF to: 0063d11d (PARAM)
// 0053eef9: PUSH EAX
//   XREF to: 0063d11d (DATA)
// 0053eefa: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053eeff: ADD ESP,0x4
// 0053ef02: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0053ef02
//   XREF to: Stack[-0x1c] (READ)
// 0053ef05: PUSH EAX
// 0053ef06: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053ef09: SHL EAX,0x2
// 0053ef0c: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053ef0f: PUSH dword ptr [EAX + 0x4]
// 0053ef12: CALL shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
//   XREF to: 0048f770 (UNCONDITIONAL_CALL)
// 0053ef17: ADD ESP,0x8
// 0053ef1a: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053ef1d: SHL EAX,0x2
// 0053ef20: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053ef23: MOV EAX,dword ptr [EAX + 0x4]
// 0053ef26: ADD EAX,0x1f20c8
// 0053ef2b: PUSH EAX
// 0053ef2c: MOV EAX,0x63d13d
//   XREF to: 0063d13d (DATA)
// 0053ef31: PUSH EAX
//   XREF to: 0063d13d (DATA)
// 0053ef32: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053ef38: PUSH EAX
// 0053ef39: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053ef3e: ADD ESP,0xc
// 0053ef41: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0053ef44: PUSH EAX
// 0053ef45: PUSH 0x0
// 0053ef47: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053ef4d: PUSH EAX
// 0053ef4e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053ef53: ADD ESP,0xc
// 0053ef56: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0053ef5b: ADD dword ptr [EBP + -0x4],0xb
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0053ef5f: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0053ef64: SUB EAX,0xb
// 0053ef67: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0053ef6a: JGE 0x0053ef78
//   XREF to: 0053ef78 (CONDITIONAL_JUMP)
// 0053ef6c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0053ef71: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0053ef78: JMP 0x0053ee9c
//   Label: LAB_0053ef78
//   XREF to: 0053ee9c (UNCONDITIONAL_JUMP)
// 0053ef7d: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0053ef7d
//   XREF to: Stack[-0x1c] (WRITE)
// 0053ef84: JMP 0x0053ef8c
//   XREF to: 0053ef8c (UNCONDITIONAL_JUMP)
// 0053ef86: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0053ef86
//   XREF to: Stack[-0x1c] (READ)
// 0053ef89: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0053ef8c: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0053ef8c
//   XREF to: Stack[-0x1c] (READ)
// 0053ef8f: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053ef92: CMP EAX,dword ptr [EDX]
// 0053ef94: JGE 0x0053f29d
//   XREF to: 0053f29d (CONDITIONAL_JUMP)
// 0053ef9a: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053ef9d: SHL EAX,0x2
// 0053efa0: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053efa3: MOV EAX,dword ptr [EAX + 0x4]
// 0053efa6: ADD EAX,0x1f20c8
// 0053efab: PUSH EAX
// 0053efac: MOV EAX,0x63d14e
//   XREF to: 0063d14e (DATA)
// 0053efb1: PUSH EAX
//   XREF to: 0063d14e (DATA)
// 0053efb2: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053efb8: PUSH EAX
// 0053efb9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053efbe: ADD ESP,0xc
// 0053efc1: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053efc7: PUSH EAX
// 0053efc8: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053efcb: SHL EAX,0x2
// 0053efce: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053efd1: PUSH dword ptr [EAX + 0x4]
// 0053efd4: CALL shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
//   XREF to: 0048fed0 (UNCONDITIONAL_CALL)
// 0053efd9: ADD ESP,0x8
// 0053efdc: MOV dword ptr [EBP + 0xfffffef0],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 0053efe2: CMP dword ptr [EBP + 0xfffffef0],0x0
//   XREF to: Stack[-0x120] (READ)
// 0053efe9: JNZ 0x0053f014
//   XREF to: 0053f014 (CONDITIONAL_JUMP)
// 0053efeb: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053efee: SHL EAX,0x2
// 0053eff1: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053eff4: MOV EAX,dword ptr [EAX + 0x4]
// 0053eff7: ADD EAX,0x1f20c8
// 0053effc: PUSH EAX
// 0053effd: MOV EAX,0x63d155
//   XREF to: 0063d155 (DATA)
// 0053f002: PUSH EAX
//   XREF to: 0063d155 (DATA)
// 0053f003: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f009: PUSH EAX
// 0053f00a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053f00f: ADD ESP,0xc
// 0053f012: JMP 0x0053f03b
//   XREF to: 0053f03b (UNCONDITIONAL_JUMP)
// 0053f014: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0053f014
//   XREF to: Stack[-0x1c] (READ)
// 0053f017: SHL EAX,0x2
// 0053f01a: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f01d: MOV EAX,dword ptr [EAX + 0x4]
// 0053f020: ADD EAX,0x1f20c8
// 0053f025: PUSH EAX
// 0053f026: MOV EAX,0x63d168
//   XREF to: 0063d168 (DATA)
// 0053f02b: PUSH EAX
//   XREF to: 0063d168 (DATA)
// 0053f02c: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f032: PUSH EAX
// 0053f033: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053f038: ADD ESP,0xc
// 0053f03b: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0053f03b
//   XREF to: Stack[-0x14] (READ)
// 0053f03e: PUSH EAX
// 0053f03f: PUSH 0x0
// 0053f041: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f047: PUSH EAX
// 0053f048: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053f04d: ADD ESP,0xc
// 0053f050: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0053f055: ADD dword ptr [EBP + -0x4],0xb
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0053f059: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0053f05e: SUB EAX,0xb
// 0053f061: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0053f064: JGE 0x0053f072
//   XREF to: 0053f072 (CONDITIONAL_JUMP)
// 0053f066: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0053f06b: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0053f072: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0053f072
//   XREF to: Stack[-0x1c] (READ)
// 0053f075: SHL EAX,0x2
// 0053f078: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f07b: PUSH dword ptr [EAX + 0x4]
// 0053f07e: CALL shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960
//   XREF to: 0048f960 (UNCONDITIONAL_CALL)
// 0053f083: ADD ESP,0x4
// 0053f086: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053f089: SHL EAX,0x2
// 0053f08c: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f08f: MOV EAX,dword ptr [EAX + 0x4]
// 0053f092: ADD EAX,0x1f20c8
// 0053f097: PUSH EAX
// 0053f098: MOV EAX,0x63d188
//   XREF to: 0063d188 (DATA)
// 0053f09d: PUSH EAX
//   XREF to: 0063d188 (DATA)
// 0053f09e: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f0a4: PUSH EAX
// 0053f0a5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053f0aa: ADD ESP,0xc
// 0053f0ad: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f0b3: PUSH EAX
// 0053f0b4: CALL shape_design.c_exportModelToMDL_FUN_00459e80
//   XREF to: 00459e80 (UNCONDITIONAL_CALL)
// 0053f0b9: ADD ESP,0x4
// 0053f0bc: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053f0bf: SHL EAX,0x2
// 0053f0c2: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f0c5: MOV EAX,dword ptr [EAX + 0x4]
// 0053f0c8: ADD EAX,0x1f20c8
// 0053f0cd: PUSH EAX
// 0053f0ce: MOV EAX,0x63d18f
//   XREF to: 0063d18f (DATA)
// 0053f0d3: PUSH EAX
//   XREF to: 0063d18f (DATA)
// 0053f0d4: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f0da: PUSH EAX
// 0053f0db: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053f0e0: ADD ESP,0xc
// 0053f0e3: PUSH 0x59
// 0053f0e5: PUSH 0x1
// 0053f0e7: PUSH 0x35
// 0053f0e9: PUSH 0x4e
// 0053f0eb: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f0f1: PUSH EAX
// 0053f0f2: CALL shape_design.c_exportModelToBIN_FUN_0045aa80
//   XREF to: 0045aa80 (UNCONDITIONAL_CALL)
// 0053f0f7: ADD ESP,0x14
// 0053f0fa: MOV dword ptr [EBP + -0x8],0x61
//   XREF to: Stack[-0x18] (WRITE)
// 0053f101: JMP 0x0053f109
//   XREF to: 0053f109 (UNCONDITIONAL_JUMP)
// 0053f103: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0053f103
//   XREF to: Stack[-0x18] (READ)
// 0053f106: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0053f109: CMP dword ptr [EBP + -0x8],0x7a
//   Label: LAB_0053f109
//   XREF to: Stack[-0x18] (READ)
// 0053f10d: JG 0x0053f298
//   XREF to: 0053f298 (CONDITIONAL_JUMP)
// 0053f113: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0053f116: PUSH EAX
// 0053f117: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053f11a: SHL EAX,0x2
// 0053f11d: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f120: MOV EAX,dword ptr [EAX + 0x4]
// 0053f123: ADD EAX,0x1f20c8
// 0053f128: PUSH EAX
// 0053f129: MOV EAX,0x63d196
//   XREF to: 0063d196 (DATA)
// 0053f12e: PUSH EAX
//   XREF to: 0063d196 (DATA)
// 0053f12f: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f135: PUSH EAX
// 0053f136: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053f13b: ADD ESP,0x10
// 0053f13e: MOV EAX,0x63d19f
//   XREF to: 0063d19f (DATA)
// 0053f143: PUSH EAX
//   XREF to: 0063d19f (DATA)
// 0053f144: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f14a: PUSH EAX
// 0053f14b: MOV EAX,0x63d1a2
//   XREF to: 0063d1a2 (PARAM)
// 0053f150: PUSH EAX
//   XREF to: 0063d1a2 (DATA)
// 0053f151: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0053f156: ADD ESP,0xc
// 0053f159: MOV dword ptr [EBP + 0xfffffeec],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 0053f15f: CMP dword ptr [EBP + 0xfffffeec],0x0
//   XREF to: Stack[-0x124] (READ)
// 0053f166: JZ 0x0053f293
//   XREF to: 0053f293 (CONDITIONAL_JUMP)
// 0053f16c: PUSH 0x80
// 0053f171: MOV EAX,0x63d1a9
//   XREF to: 0063d1a9 (DATA)
// 0053f176: PUSH EAX
//   XREF to: 0063d1a9 (DATA)
// 0053f177: MOV EAX,dword ptr [EBP + 0xfffffeec]
//   XREF to: Stack[-0x124] (READ)
// 0053f17d: PUSH EAX
// 0053f17e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0053f183: ADD ESP,0xc
// 0053f186: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f18c: PUSH EAX
// 0053f18d: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053f190: SHL EAX,0x2
// 0053f193: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f196: PUSH dword ptr [EAX + 0x4]
// 0053f199: CALL shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
//   XREF to: 0048fed0 (UNCONDITIONAL_CALL)
// 0053f19e: ADD ESP,0x8
// 0053f1a1: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0053f1a4: PUSH EAX
// 0053f1a5: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053f1a8: SHL EAX,0x2
// 0053f1ab: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f1ae: MOV EAX,dword ptr [EAX + 0x4]
// 0053f1b1: ADD EAX,0x1f20c8
// 0053f1b6: PUSH EAX
// 0053f1b7: MOV EAX,0x63d1bf
//   XREF to: 0063d1bf (DATA)
// 0053f1bc: PUSH EAX
//   XREF to: 0063d1bf (DATA)
// 0053f1bd: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f1c3: PUSH EAX
// 0053f1c4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053f1c9: ADD ESP,0x10
// 0053f1cc: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0053f1cf: PUSH EAX
// 0053f1d0: PUSH 0x0
// 0053f1d2: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f1d8: PUSH EAX
// 0053f1d9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053f1de: ADD ESP,0xc
// 0053f1e1: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0053f1e6: ADD dword ptr [EBP + -0x4],0xb
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0053f1ea: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0053f1ef: SUB EAX,0xb
// 0053f1f2: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0053f1f5: JGE 0x0053f203
//   XREF to: 0053f203 (CONDITIONAL_JUMP)
// 0053f1f7: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0053f1fc: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0053f203: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0053f203
//   XREF to: Stack[-0x1c] (READ)
// 0053f206: SHL EAX,0x2
// 0053f209: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f20c: PUSH dword ptr [EAX + 0x4]
// 0053f20f: CALL shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960
//   XREF to: 0048f960 (UNCONDITIONAL_CALL)
// 0053f214: ADD ESP,0x4
// 0053f217: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0053f21a: PUSH EAX
// 0053f21b: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053f21e: SHL EAX,0x2
// 0053f221: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f224: MOV EAX,dword ptr [EAX + 0x4]
// 0053f227: ADD EAX,0x1f20c8
// 0053f22c: PUSH EAX
// 0053f22d: MOV EAX,0x63d1e4
//   XREF to: 0063d1e4 (DATA)
// 0053f232: PUSH EAX
//   XREF to: 0063d1e4 (DATA)
// 0053f233: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f239: PUSH EAX
// 0053f23a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053f23f: ADD ESP,0x10
// 0053f242: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f248: PUSH EAX
// 0053f249: CALL shape_design.c_exportModelToMDL_FUN_00459e80
//   XREF to: 00459e80 (UNCONDITIONAL_CALL)
// 0053f24e: ADD ESP,0x4
// 0053f251: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0053f254: PUSH EAX
// 0053f255: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053f258: SHL EAX,0x2
// 0053f25b: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f25e: MOV EAX,dword ptr [EAX + 0x4]
// 0053f261: ADD EAX,0x1f20c8
// 0053f266: PUSH EAX
// 0053f267: MOV EAX,0x63d1ed
//   XREF to: 0063d1ed (DATA)
// 0053f26c: PUSH EAX
//   XREF to: 0063d1ed (DATA)
// 0053f26d: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f273: PUSH EAX
// 0053f274: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053f279: ADD ESP,0x10
// 0053f27c: PUSH 0x59
// 0053f27e: PUSH 0x1
// 0053f280: PUSH 0x35
// 0053f282: PUSH 0x4e
// 0053f284: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0053f28a: PUSH EAX
// 0053f28b: CALL shape_design.c_exportModelToBIN_FUN_0045aa80
//   XREF to: 0045aa80 (UNCONDITIONAL_CALL)
// 0053f290: ADD ESP,0x14
// 0053f293: JMP 0x0053f103
//   Label: LAB_0053f293
//   XREF to: 0053f103 (UNCONDITIONAL_JUMP)
// 0053f298: JMP 0x0053ef86
//   Label: LAB_0053f298
//   XREF to: 0053ef86 (UNCONDITIONAL_JUMP)
// 0053f29d: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0053f29d
//   XREF to: Stack[-0x1c] (WRITE)
// 0053f2a4: JMP 0x0053f2ac
//   XREF to: 0053f2ac (UNCONDITIONAL_JUMP)
// 0053f2a6: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0053f2a6
//   XREF to: Stack[-0x1c] (READ)
// 0053f2a9: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0053f2ac: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0053f2ac
//   XREF to: Stack[-0x1c] (READ)
// 0053f2af: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f2b2: CMP EAX,dword ptr [EDX]
// 0053f2b4: JGE 0x0053f2e0
//   XREF to: 0053f2e0 (CONDITIONAL_JUMP)
// 0053f2b6: MOV dword ptr [0x0067d20c],0x63d1f6
//   XREF to: 0067d20c (WRITE)
//   XREF to: 0063d1f6 (DATA)
// 0053f2c0: MOV dword ptr [0x02f0d944],0xa9
//   XREF to: 02f0d944 (WRITE)
// 0053f2ca: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053f2cd: SHL EAX,0x2
// 0053f2d0: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f2d3: PUSH dword ptr [EAX + 0x4]
// 0053f2d6: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0053f2db: ADD ESP,0x4
// 0053f2de: JMP 0x0053f2a6
//   XREF to: 0053f2a6 (UNCONDITIONAL_JUMP)
// 0053f2e0: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0053f2e0
//   XREF to: Stack[-0x14] (READ)
// 0053f2e3: PUSH EAX
// 0053f2e4: PUSH 0x0
// 0053f2e6: MOV EAX,0x63d20c
//   XREF to: 0063d20c (PARAM)
// 0053f2eb: PUSH EAX
//   XREF to: 0063d20c (DATA)
// 0053f2ec: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053f2f1: ADD ESP,0xc
// 0053f2f4: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0053f2f9: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0053f2fe: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0053f303: MOV ESP,EBP
// 0053f305: POP EBP
// 0053f306: POP EDI
// 0053f307: POP ESI
// 0053f308: POP EBX
// 0053f309: RET
