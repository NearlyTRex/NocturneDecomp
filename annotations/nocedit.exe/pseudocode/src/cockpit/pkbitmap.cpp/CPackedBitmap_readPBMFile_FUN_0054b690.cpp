// Name: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
// Address: 0054b690
// Address Range: [[0054b690, 0054b85a]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690(CPackedBitmap * this_ptr, FILE * file_handle, int skip_data_load)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0054b690
          (CPackedBitmap *this_ptr,FILE *file_handle,int skip_data_load)

{
  void *size;
  SIZE_T SVar1;
  int iVar2;
  void **ppvVar3;
  char *buffer;
  int iVar4;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  byte *pbVar5;
  int unaff_EDI;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  int in_stack_0000001c;
  int in_stack_ffffffe0;
  int in_stack_ffffffe4;
  int in_stack_ffffffe8;
  int in_stack_ffffffec;
  
  bVar9 = 0;
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(this_ptr);
  do {
    SVar1 = crt_stdio_c_fread_FUN_005fd990(&stack0xffffffd8,0x1c,1,file_handle);
    if (SVar1 != 1) goto LAB_0054b71f;
    iVar4 = 4;
    bVar7 = false;
    iVar2 = 0;
    bVar8 = true;
    pbVar5 = &stack0xffffffdc;
    pbVar6 = (byte *)"PBM\032PBG\032";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pbVar5 < *pbVar6;
      bVar8 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (uint)bVar9 * -2 + 1;
      pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (((iVar2 == 0) && (in_stack_ffffffe0 != 0)) && (in_stack_ffffffe4 != 0)) {
      this_ptr->width = in_stack_ffffffe0;
      this_ptr->height = in_stack_ffffffe4;
      if (((in_stack_ffffffe8 != 0) || (in_stack_ffffffec != 0)) ||
         (((char *)(this_ptr->width + -1) != unaff_EBP || (this_ptr->height + -1 != unaff_EDI))))
      goto LAB_0054b6da;
      ppvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                          ((this_ptr->height + 1) * 4,"..\\cockpit\\pkbitmap.cpp",0x4c6);
      this_ptr->row_pointers = ppvVar3;
      if (ppvVar3 != (void **)0x0) {
        SVar1 = crt_stdio_c_fread_FUN_005fd990
                          (this_ptr->row_pointers,(this_ptr->height + 1) * 4,1,file_handle);
        if (SVar1 == 1) {
          iVar2 = 0;
          if (0 < this_ptr->height) {
            ppvVar3 = this_ptr->row_pointers;
            do {
              if ((int)ppvVar3[1] < (int)*ppvVar3) goto LAB_0054b6da;
              iVar2 = iVar2 + 1;
              ppvVar3 = ppvVar3 + 1;
            } while (iVar2 < this_ptr->height);
          }
          size = this_ptr->row_pointers[this_ptr->height];
          if (in_stack_0000001c != 0) {
            crt_stdio_c_fseek_FUN_005ffacc(file_handle,(long)size,1);
            return;
          }
          in_stack_ffffffe0 = 0x4de;
          buffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             ((int)size,"..\\cockpit\\pkbitmap.cpp",0x4de);
          this_ptr->packed_data = buffer;
          if (buffer == (char *)0x0) goto LAB_0054b6fd;
          in_stack_ffffffe0 = 1;
          SVar1 = crt_stdio_c_fread_FUN_005fd990(buffer,(SIZE_T)size,1,file_handle);
          if (SVar1 == 1) {
            return;
          }
        }
LAB_0054b71f:
        g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
        g_CurrentLineNumber = 0x4ad;
        in_stack_ffffffe4 = 0x54b73e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("IO error reading PBM (possibly corrupt file).");
        goto LAB_0054b6da;
      }
    }
    else {
LAB_0054b6da:
      g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
      g_CurrentLineNumber = 0x4ae;
      in_stack_ffffffe8 = 0x54b6fa;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Corrupt data detected reading PBM.");
    }
LAB_0054b6fd:
    unaff_EBP = "Out of memory reading PBM";
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    g_CurrentLineNumber = 0x4af;
    in_stack_ffffffec = 0x54b71d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory reading PBM");
  } while( true );
}
