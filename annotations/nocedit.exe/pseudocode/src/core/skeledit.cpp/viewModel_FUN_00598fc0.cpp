// Name: core_skeledit.cpp_viewModel_FUN_00598fc0
// Address: 00598fc0
// Address Range: [[00598fc0, 00599473]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_viewModel_FUN_00598fc0(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_viewModel_FUN_00598fc0(void)

{
  char cVar1;
  _FILE *p_Var2;
  int iVar3;
  CDeformableModelInstance *this_ptr;
  CDeformableModelInstance *this_ptr_00;
  int iVar4;
  byte *puVar5;
  char *pcVar6;
  char *pcVar7;
  CDeformableModelInstance *in_stack_fffffee8;
  int local_14;
  
  __STK();
  p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("skeledit.ini",(char *)0x0,"rt","..\\core\\skeledit.cpp"
                      ,0x124);
  if (p_Var2 == (_FILE *)0x0) goto LAB_00599119;
  iVar4 = 1;
  do {
    iVar3 = _fgetc(p_Var2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  _fscanf(p_Var2,"%d\n",&local_14);
  if (local_14 != 1) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\skeledit.cpp",0x12d);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Deleting old %s file.","skeledit.ini");
    remove("skeledit.ini");
    goto LAB_00599119;
  }
  iVar4 = 1;
  do {
    iVar3 = _fgetc(p_Var2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  DAT_03670848 = 0;
  do {
    iVar4 = _fgetc(p_Var2);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_00599080;
    puVar5 = &DAT_03670848;
  } while (iVar4 != 0x22);
  while ((iVar4 = _fgetc(p_Var2), -1 < iVar4 && (iVar4 != 10))) {
    if (iVar4 == 0x22) {
      iVar4 = 1;
      goto LAB_005992fc;
    }
    *puVar5 = (char)iVar4;
    puVar5[1] = 0;
    puVar5 = puVar5 + 1;
  }
  goto LAB_00599080;
  while ((iVar3 != 10 || (iVar4 = iVar4 + -1, 0 < iVar4))) {
LAB_00599354:
    iVar3 = _fgetc(p_Var2);
    if (iVar3 < 0) break;
  }
  goto LAB_005990c3;
  while ((iVar3 != 10 || (iVar4 = iVar4 + -1, 0 < iVar4))) {
LAB_005993ac:
    iVar3 = _fgetc(p_Var2);
    if (iVar3 < 0) break;
  }
  goto LAB_00599106;
  while ((iVar3 != 10 || (iVar4 = iVar4 + -1, 0 < iVar4))) {
LAB_005992fc:
    iVar3 = _fgetc(p_Var2);
    if (iVar3 < 0) break;
  }
LAB_00599080:
  iVar4 = 1;
  do {
    iVar3 = _fgetc(p_Var2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  DAT_03670950 = 0;
  do {
    iVar4 = _fgetc(p_Var2);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_005990c3;
    puVar5 = &DAT_03670950;
  } while (iVar4 != 0x22);
  while ((iVar4 = _fgetc(p_Var2), -1 < iVar4 && (iVar4 != 10))) {
    if (iVar4 == 0x22) {
      iVar4 = 1;
      goto LAB_00599354;
    }
    *puVar5 = (char)iVar4;
    puVar5[1] = 0;
    puVar5 = puVar5 + 1;
  }
LAB_005990c3:
  iVar4 = 1;
  do {
    iVar3 = _fgetc(p_Var2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  DAT_03670a58 = 0;
  do {
    iVar4 = _fgetc(p_Var2);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_00599106;
    puVar5 = &DAT_03670a58;
  } while (iVar4 != 0x22);
  while ((iVar4 = _fgetc(p_Var2), -1 < iVar4 && (iVar4 != 10))) {
    if (iVar4 == 0x22) {
      iVar4 = 1;
      goto LAB_005993ac;
    }
    *puVar5 = (char)iVar4;
    puVar5[1] = 0;
    puVar5 = puVar5 + 1;
  }
LAB_00599106:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\skeledit.cpp",0x13f);
LAB_00599119:
  pcVar6 = "z:\\meshlod";
  pcVar7 = "meshlod";
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Nocturne(R) Skeleton system editor menu",0,0);
    engine_2d_c_drawText_FUN_00401fd0("3.  View a deformable model in action!",0,0x2c);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0();
    core_skeleton_cpp_freeAllModels_FUN_005a1dc0();
    iVar4 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if ((iVar4 == 0x33) &&
       (iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                          (g_CEditorToolsPtr,"Select model to view","models",
                           "*.dfm",(int)&stack0xfffffee8,0), iVar3 != 0)) {
      this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                           (0x22b4,"..\\core\\skeledit.cpp",0x1b79);
      this_ptr_00 = (CDeformableModelInstance *)0x0;
      if (this_ptr != (CDeformableModelInstance *)0x0) {
        this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr);
      }
      if (this_ptr_00 == (CDeformableModelInstance *)0x0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x1b7a;
        core_main_c_displayErrorAndQuit_FUN_00506f10("viewModel - out of memory!");
      }
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr_00,&stack0xfffffee8);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
      core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0(in_stack_fffffee8);
      g_CurrentDebugLine = 0x1b7e;
      g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
      if (this_ptr_00 != (CDeformableModelInstance *)0x0) {
        (*((this_ptr_00->motion_controller).vtable)->dtor)(&this_ptr_00->motion_controller);
      }
    }
  } while (iVar4 != 0x1b);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("skeledit.ini",(char *)0x0,"wt","..\\core\\skeledit.cpp"
                      ,0x144);
  if (p_Var2 != (_FILE *)0x0) {
    _fprintf(p_Var2,"// version\n");
    _fprintf(p_Var2,"%d\n",1);
    _fprintf(p_Var2,"// lastPOSimported\n");
    _fprintf(p_Var2,"\"%s\"\n",&DAT_03670848);
    _fprintf(p_Var2,"// lastMOTimported\n");
    _fprintf(p_Var2,"\"%s\"\n",&DAT_03670950);
    _fprintf(p_Var2,"// lastTestSkeletonDir\n");
    _fprintf(p_Var2,"\"%s\"\n",&DAT_03670a58);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\skeledit.cpp",0x154);
    return;
  }
  return;
}
