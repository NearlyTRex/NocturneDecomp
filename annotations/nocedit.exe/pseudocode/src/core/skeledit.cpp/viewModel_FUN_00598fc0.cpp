// Name: core_skeledit.cpp_viewModel_FUN_00598fc0
// Address: 00598fc0
// Address Range: [[00598fc0, 00599473]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_viewModel_FUN_00598fc0()

#include "nocturne.h"

void core_skeledit_cpp_viewModel_FUN_00598fc0(void)

{
  char cVar1;
  FILE *pFVar2;
  int iVar3;
  CDeformableModelInstance *this_ptr;
  int iVar4;
  byte *puVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  CDeformableModelInstance *in_stack_ffffff28;
  byte auStack_18 [4];
  int local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x134);
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("skeledit.ini",(char *)0x0,"rt","..\\core\\skeledit.cpp"
                      ,0x124);
  if (pFVar2 == (FILE *)0x0) goto LAB_00599119;
  iVar4 = 1;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar2,"%d\n",auStack_18);
  if (local_14 != 1) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\skeledit.cpp",0x12d);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Deleting old %s file.","skeledit.ini");
    crt_io_c_deleteFile_FUN_005ff9d0("skeledit.ini");
    goto LAB_00599119;
  }
  iVar4 = 1;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  DAT_03670848 = 0;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_00599080;
    puVar5 = &DAT_03670848;
  } while (iVar4 != 0x22);
  while ((iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2), -1 < iVar4 && (iVar4 != 10))) {
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
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  }
  goto LAB_005990c3;
  while ((iVar3 != 10 || (iVar4 = iVar4 + -1, 0 < iVar4))) {
LAB_005993ac:
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  }
  goto LAB_00599106;
  while ((iVar3 != 10 || (iVar4 = iVar4 + -1, 0 < iVar4))) {
LAB_005992fc:
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  }
LAB_00599080:
  iVar4 = 1;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  DAT_03670950 = 0;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_005990c3;
    puVar5 = &DAT_03670950;
  } while (iVar4 != 0x22);
  while ((iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2), -1 < iVar4 && (iVar4 != 10))) {
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
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  DAT_03670a58 = 0;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_00599106;
    puVar5 = &DAT_03670a58;
  } while (iVar4 != 0x22);
  while ((iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2), -1 < iVar4 && (iVar4 != 10))) {
    if (iVar4 == 0x22) {
      iVar4 = 1;
      goto LAB_005993ac;
    }
    *puVar5 = (char)iVar4;
    puVar5[1] = 0;
    puVar5 = puVar5 + 1;
  }
LAB_00599106:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\skeledit.cpp",0x13f);
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
                           "*.dfm",SUB41 /* extract 2-byte value */(&stack0xffffff14,0)), iVar3 != 0)) {
      this_ptr = (CDeformableModelInstance *)
                 shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                           (0x22b4,"..\\core\\skeledit.cpp",0x1b79);
      if (this_ptr != (CDeformableModelInstance *)0x0) {
        this_ptr = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr);
      }
      if (this_ptr == (CDeformableModelInstance *)0x0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x1b7a;
        core_main_c_displayErrorAndQuit_FUN_00506f10("viewModel - out of memory!");
      }
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,&stack0xffffff18);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
      core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0(in_stack_ffffff28);
      g_CurrentDebugLine = 0x1b7e;
      g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
      if (this_ptr != (CDeformableModelInstance *)0x0) {
        in_stack_ffffff28 = (CDeformableModelInstance *)&DAT_00000002;
        (*((this_ptr->motion_controller).vtable)->dtor)(&this_ptr->motion_controller);
      }
    }
  } while (iVar4 != 0x1b);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("skeledit.ini",(char *)0x0,"wt","..\\core\\skeledit.cpp"
                      ,0x144);
  if (pFVar2 != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"// version\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"%d\n",1);
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"// lastPOSimported\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"\"%s\"\n",&DAT_03670848);
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"// lastMOTimported\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"\"%s\"\n",&DAT_03670950);
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"// lastTestSkeletonDir\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"\"%s\"\n");
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\skeledit.cpp",0x154);
    return;
  }
  return;
}
