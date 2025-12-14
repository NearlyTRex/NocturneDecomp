// Name: engine_fileio.cpp_readTimestampFile_FUN_004b23a0
// Address: 004b23a0
// Address Range: [[004b23a0, 004b2631]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_readTimestampFile_FUN_004b23a0(FILE * file, STimestampRecord * * records, int * count)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_readTimestampFile_FUN_004b23a0(FILE *file,STimestampRecord **records,int *count)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  STimestampRecord *pSVar4;
  BADSPACEBASE *in_ESP;
  int new_size;
  char *pcVar5;
  int unaff_EDI;
  byte bVar6;
  int unaff_retaddr;
  uint *in_stack_00000010;
  uint *in_stack_00000014;
  uint *in_stack_00000018;
  char *in_stack_0000001c;
  char acStack_150 [312];
  char local_18 [8];
  
  bVar6 = 0;
  new_size = 0x148;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  crt_stdio_c_fseek_FUN_005ffacc((FILE *)file->_ptr,0,0);
  *records = (STimestampRecord *)0x0;
  do {
    crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)*records," ");
    pcVar2 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffaa8,0x400,(FILE *)*count);
    if (pcVar2 != &stack0xfffffaa8) {
      if ((((FILE *)*in_stack_00000010)->_flag & 0x20) == 0) {
        return unaff_EDI;
      }
      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                ((FILE *)*in_stack_00000010,"..\\engine\\fileio.cpp",0xc4);
      *in_stack_00000014 = 0;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error reading %s");
LAB_004b246f:
      if (*(FILE **)in_stack_0000001c != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  (*(FILE **)in_stack_0000001c,"..\\engine\\fileio.cpp",0xc4);
        in_stack_0000001c[0] = '\0';
        in_stack_0000001c[1] = '\0';
        in_stack_0000001c[2] = '\0';
        in_stack_0000001c[3] = '\0';
      }
      if (*records != (STimestampRecord *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(*records,"..\\engine\\fileio.cpp",0x1ae);
        *records = (STimestampRecord *)0x0;
      }
      return -1;
    }
    iVar3 = engine_fileio_cpp_parseTimestampRecord_FUN_004b2270
                      (&stack0xfffffaa8,(STimestampRecord *)&stack0xfffffeac);
    if (iVar3 == 0) {
      if ((FILE *)*in_stack_00000014 != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  ((FILE *)*in_stack_00000014,"..\\engine\\fileio.cpp",0xc4);
        *in_stack_00000018 = 0;
      }
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error parsing %s, record %d");
      goto LAB_004b246f;
    }
    pcVar2 = acStack_150;
    pcVar5 = in_stack_0000001c;
    do {
      cVar1 = *pcVar5;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar2[1] = cVar1;
      pcVar2 = pcVar2 + 2;
    } while (cVar1 != '\0');
    pSVar4 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (*records,new_size,"..\\engine\\fileio.cpp",0x1c2);
    *records = pSVar4;
    if (pSVar4 == (STimestampRecord *)0x0) {
      if ((FILE *)*in_stack_00000018 != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  ((FILE *)*in_stack_00000018,"..\\engine\\fileio.cpp",0xc4);
        in_stack_0000001c[0] = '\0';
        in_stack_0000001c[1] = '\0';
        in_stack_0000001c[2] = '\0';
        in_stack_0000001c[3] = '\0';
      }
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Out of memory reading %s record %d");
      return -1;
    }
    new_size = new_size + 0x148;
    pcVar2 = acStack_150 + 4;
    pcVar5 = pSVar4->field1_0x4 + unaff_retaddr + -4;
    for (iVar3 = 0x52; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar5 = *(uint *)pcVar2;
      pcVar2 = pcVar2 + ((uint)bVar6 * -2 + 1) * 4;
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    unaff_retaddr = unaff_retaddr + 0x148;
  } while( true );
}
