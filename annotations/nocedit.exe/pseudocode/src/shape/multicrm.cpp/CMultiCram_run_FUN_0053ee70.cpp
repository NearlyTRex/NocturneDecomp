// Name: shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70
// Address: 0053ee70
// Address Range: [[0053ee70, 0053f309]]
// Convention: __cdecl
// Signature: void shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70(CMultiCram * this_ptr)

#include "nocturne.h"

void __cdecl shape_multicrm_cpp_CMultiCram_run_FUN_0053ee70(CMultiCram *this_ptr)

{
  CDSEModel *pCVar1;
  int iVar2;
  FILE *pFVar3;
  BADSPACEBASE *in_ESP;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  this_ptr->model_count = g_PartsCount;
  for (local_1c = 0; (int)local_1c < this_ptr->model_count; local_1c = local_1c + 1) {
    pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1f20dc,"..\\shape\\multicrm.cpp",0x42);
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
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffee4,"%s is a new model.",this_ptr->models[local_1c]->model_name
                );
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffee4,"Sizing %s to existing .BIN file",
                 this_ptr->models[local_1c]->model_name);
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
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffee4,"%s.bin",this_ptr->models[local_1c]->model_name);
    shape_design_c_exportModelToBIN_FUN_0045aa80(&stack0xfffffee4,0x4e,0x35,1,0x59);
    for (local_18 = 0x61; local_18 < 0x7b; local_18 = local_18 + 1) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffee4,"%s%c.bin",this_ptr->models[local_1c]->model_name,local_18
                );
      pFVar3 = engine_dosio_c_getFile_FUN_00481a50("models",&stack0xfffffee4,"rb")
      ;
      if (pFVar3 != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)0x80,"..\\shape\\multicrm.cpp",0x80);
        shape_dsemodel_cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
                  (this_ptr->models[local_1c],&stack0xfffffee4);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffee4,"Found clone of different size : %s%c",
                   this_ptr->models[local_1c]->model_name);
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
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffee4,"%s%c.bin",this_ptr->models[local_1c]->model_name,
                   local_18);
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
