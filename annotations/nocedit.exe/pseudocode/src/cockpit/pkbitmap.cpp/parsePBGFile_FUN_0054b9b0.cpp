// Name: cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0
// Address: 0054b9b0
// Address Range: [[0054b9b0, 0054bb36]]
// Convention: __cdecl
// Signature: CPackedBitmap * cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0(CPackedBitmapSet * bitmap_set, FILE * file_handle, int param3, int param4, int selected_bitmap_index)

#include "nocturne.h"

CPackedBitmap * __cdecl
cockpit_pkbitmap_cpp_parsePBGFile_FUN_0054b9b0
          (CPackedBitmapSet *bitmap_set,FILE *file_handle,int param3,int param4,
          int selected_bitmap_index)

{
  SIZE_T SVar1;
  int iVar2;
  uint uVar3;
  void *array_memory;
  CPackedBitmap *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int *piVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  WatcomTypeInfo *element_count;
  WatcomTypeInfo *in_stack_ffffffc0;
  CPackedBitmap CStack_34;
  CPackedBitmap *this_ptr;
  
  bVar10 = 0;
  do {
    SVar1 = crt_stdio_c_fread_FUN_005fd990(&CStack_34.packed_data,8,1,file_handle);
    if (SVar1 == 1) {
      iVar5 = 4;
      bVar8 = false;
      iVar2 = 0;
      bVar9 = true;
      piVar6 = &CStack_34.width;
      pbVar7 = (byte *)("PBM\032PBG\032" + 4);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = (byte)*piVar6 < *pbVar7;
        bVar9 = (byte)*piVar6 == *pbVar7;
        piVar6 = (int *)((int)piVar6 + (uint)bVar10 * -2 + 1);
        pbVar7 = pbVar7 + (uint)bVar10 * -2 + 1;
      } while (bVar9);
      if (!bVar9) {
        iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if ((iVar2 != 0) || ((void **)CStack_34.height == (void **)0x0)) goto LAB_0054b9f3;
      uVar3 = (uint)CStack_34.height / (uint)param4;
      element_count = &g_CPackedBitmapTypeInfo;
      array_memory = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               (uVar3 * 0x24 + 4,"..\\cockpit\\pkbitmap.cpp",0x562);
      pCVar4 = crt_memory_c_constructTypedObjectArray_FUN_00601272
                         (array_memory,(int)element_count,in_stack_ffffffc0);
      if (pCVar4 != (CPackedBitmap *)0x0) {
        iVar2 = 0;
        this_ptr = pCVar4;
        if (0 < (int)uVar3) {
          do {
            iVar5 = in_stack_0000001c;
            if ((-1 < in_stack_00000020) && (iVar2 != in_stack_00000020)) {
              iVar5 = 1;
            }
            cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0054b690(this_ptr,file_handle,iVar5);
            iVar5 = 1;
            if (1 < in_stack_00000018) {
              do {
                cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_0054a820
                          ((CPackedBitmap *)&stack0xffffffc8);
                cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0054b690
                          (&CStack_34,file_handle,1);
                CStack_34.filename[0] = '\0';
                CStack_34.filename[1] = '\0';
                CStack_34.filename[2] = '\0';
                CStack_34.filename[3] = '\0';
                cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_0054a890
                          ((CPackedBitmap *)(CStack_34.filename + 4));
                iVar5 = iVar5 + 1;
              } while (iVar5 < in_stack_00000018);
            }
            iVar2 = iVar2 + 1;
            this_ptr = this_ptr + 1;
          } while (iVar2 < (int)uVar3);
        }
        *(uint *)param4 = uVar3;
        return pCVar4;
      }
    }
    else {
      g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
      g_CurrentLineNumber = 0x553;
      core_main_c_displayErrorAndQuit_FUN_00506f10("IO error reading PBG (possibly corrupt file).");
LAB_0054b9f3:
      g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
      g_CurrentLineNumber = 0x554;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Corrupt data detected reading PBG.");
    }
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    g_CurrentLineNumber = 0x555;
    in_stack_ffffffc0 = (WatcomTypeInfo *)0x54ba35;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory reading PBG");
  } while( true );
}
