// Name: cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480
// Address: 00433480
// Address Range: [[00433480, 004335e8]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480(char * filename, SEdgeList * edge_lists, int edge_list_count)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_saveEdgeListFile_FUN_00433480
          (char *filename,SEdgeList *edge_lists,int edge_list_count)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  FILE *file;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
  int in_stack_0000001c;
  
  if (edge_lists == (SEdgeList *)0x0) {
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x500;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Edge list array is empty!");
  }
  file = engine_dosio_c_getFile_FUN_00481a50("art",filename,"wt");
  if (file == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff9c,"Could not create output file (%s).",filename);
    g_CurrentLineNumber = 0x507;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa0);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  if (0 < edge_list_count) {
    iVar6 = 0;
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
      iVar5 = 0;
      for (iVar4 = 0; iVar4 < ((int *)(in_stack_0000001c + iVar6))[1]; iVar4 = iVar4 + 1) {
        iVar3 = *(int *)(in_stack_0000001c + iVar6);
        iVar2 = iVar5 + 2;
        psVar1 = (short *)(iVar5 + iVar3);
        iVar5 = iVar5 + 8;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (file,"%3d %3d %3d %3d %d\n",(int)*psVar1,(int)*(short *)(iVar2 + iVar3));
      }
      iVar6 = iVar6 + 8;
    } while (iVar6 < edge_list_count << 3);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x522);
  return;
}
