// Name: cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0
// Address: 0054b9b0
// Address Range: [[0054b9b0, 0054bb36]]
// Convention: __cdecl
// Signature: CPackedBitmap * cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0(CPackedBitmapSet * bitmap_set, FILE * file_handle, int param3, int param4, int selected_bitmap_index)
// Cross-references:
//   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 (0054bb40) at 0054bb8f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f281
//   TerminatedCString s_IO_error_reading_PBG_pos_0063f299
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f2c7
//   TerminatedCString s_Corrupt_data_detected_re_0063f2df
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f302
//   TerminatedCString s_Out_of_memory_reading_PB_0063f31a
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f334
//   WatcomTypeInfo g_CPackedBitmapTypeInfo
//   undefined4 s_PBG_00680ca0
//   undefined4 s_BG_00680ca1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820
//   cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890
//   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_constructTypedObjectArray_FUN_00601272
//   crt_stdio.c_fread_FUN_005fd990
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

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
      pCVar4 = (CPackedBitmap *)
               crt_memory_c_constructTypedObjectArray_FUN_00601272
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


// Assembly code:
// 0054b9b0: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0
// 0054b9b1: PUSH ESI
// 0054b9b2: PUSH EDI
// 0054b9b3: PUSH EBP
// 0054b9b4: SUB ESP,0x34
// 0054b9b7: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0054b9bb: MOV EBX,0x1
// 0054b9c0: PUSH EBP
//   Label: LAB_0054b9c0
// 0054b9c1: PUSH EBX
// 0054b9c2: PUSH 0x8
// 0054b9c4: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x20] (DATA)
// 0054b9c8: PUSH EAX
// 0054b9c9: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054b9ce: ADD ESP,0x10
// 0054b9d1: CMP EAX,0x1
// 0054b9d4: JNZ 0x0054ba3a
//   XREF to: 0054ba3a (CONDITIONAL_JUMP)
// 0054b9d6: MOV ECX,0x4
// 0054b9db: MOV EDI,0x680ca0
//   XREF to: 00680ca0 (DATA)
// 0054b9e0: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0x20] (DATA)
// 0054b9e4: XOR EAX,EAX
// 0054b9e6: CMPSB.REPE ES:EDI,ESI
//   XREF to: 00680ca0 (READ)
//   XREF to: 00680ca1 (READ)
// 0054b9e8: JZ 0x0054b9ef
//   XREF to: 0054b9ef (CONDITIONAL_JUMP)
// 0054b9ea: SBB EAX,EAX
// 0054b9ec: SBB EAX,-0x1
// 0054b9ef: TEST EAX,EAX
//   Label: LAB_0054b9ef
// 0054b9f1: JZ 0x0054ba5f
//   XREF to: 0054ba5f (CONDITIONAL_JUMP)
// 0054b9f3: MOV EAX,0x63f2c7
//   Label: LAB_0054b9f3
//   XREF to: 0063f2c7 (DATA)
// 0054b9f8: MOV EDX,0x554
// 0054b9fd: PUSH 0x63f2df
//   XREF to: 0063f2df (DATA)
// 0054ba02: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0054ba07: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0054ba0d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054ba12: ADD ESP,0x4
// 0054ba15: MOV ECX,0x63f302
//   Label: LAB_0054ba15
//   XREF to: 0063f302 (DATA)
// 0054ba1a: MOV ESI,0x555
// 0054ba1f: PUSH 0x63f31a
//   XREF to: 0063f31a (DATA)
// 0054ba24: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054ba2a: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0054ba30: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054ba35: ADD ESP,0x4
// 0054ba38: JMP 0x0054b9c0
//   XREF to: 0054b9c0 (UNCONDITIONAL_JUMP)
// 0054ba3a: MOV ESI,0x63f281
//   Label: LAB_0054ba3a
//   XREF to: 0063f281 (DATA)
// 0054ba3f: MOV EDI,0x553
// 0054ba44: PUSH 0x63f299
//   XREF to: 0063f299 (DATA)
// 0054ba49: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0054ba4f: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0054ba55: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054ba5a: ADD ESP,0x4
// 0054ba5d: JMP 0x0054b9f3
//   XREF to: 0054b9f3 (UNCONDITIONAL_JUMP)
// 0054ba5f: CMP EBX,dword ptr [ESP + 0x28]
//   Label: LAB_0054ba5f
//   XREF to: Stack[-0x1c] (READ)
// 0054ba63: JA 0x0054b9f3
//   XREF to: 0054b9f3 (CONDITIONAL_JUMP)
// 0054ba65: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x1c] (READ)
// 0054ba69: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 0054ba6d: XOR EDX,EDX
// 0054ba6f: DIV ECX
// 0054ba71: PUSH 0x662260
//   XREF to: 00662260 (DATA)
// 0054ba76: MOV ESI,EAX
// 0054ba78: PUSH EAX
// 0054ba79: IMUL EAX,EAX,0x24
// 0054ba7c: PUSH 0x562
// 0054ba81: PUSH 0x63f334
//   XREF to: 0063f334 (DATA)
// 0054ba86: ADD EAX,0x4
// 0054ba89: PUSH EAX
// 0054ba8a: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0054ba8f: ADD ESP,0xc
// 0054ba92: PUSH EAX
// 0054ba93: CALL crt_memory.c_constructTypedObjectArray_FUN_00601272
//   XREF to: 00601272 (UNCONDITIONAL_CALL)
// 0054ba98: ADD ESP,0xc
// 0054ba9b: TEST EAX,EAX
// 0054ba9d: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0054baa1: JZ 0x0054ba15
//   XREF to: 0054ba15 (CONDITIONAL_JUMP)
// 0054baa7: XOR EDI,EDI
// 0054baa9: TEST ESI,ESI
// 0054baab: JLE 0x0054bb25
//   XREF to: 0054bb25 (CONDITIONAL_JUMP)
// 0054bab1: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054bab5: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_0054bab5
//   XREF to: Stack[0x14] (READ)
// 0054bab9: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x10] (READ)
// 0054babd: TEST EDX,EDX
// 0054babf: JL 0x0054baca
//   XREF to: 0054baca (CONDITIONAL_JUMP)
// 0054bac1: CMP EDI,EDX
// 0054bac3: JZ 0x0054baca
//   XREF to: 0054baca (CONDITIONAL_JUMP)
// 0054bac5: MOV EAX,0x1
// 0054baca: PUSH EAX
//   Label: LAB_0054baca
// 0054bacb: PUSH EBP
// 0054bacc: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 0054bad0: PUSH EBX
// 0054bad1: CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
//   XREF to: 0054b690 (UNCONDITIONAL_CALL)
// 0054bad6: ADD ESP,0xc
// 0054bad9: MOV EBX,0x1
// 0054bade: CMP EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 0054bae2: JGE 0x0054bb15
//   XREF to: 0054bb15 (CONDITIONAL_JUMP)
// 0054bae4: MOV EAX,ESP
//   Label: LAB_0054bae4
// 0054bae6: PUSH EAX
// 0054bae7: CALL cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820
//   XREF to: 0054a820 (UNCONDITIONAL_CALL)
// 0054baec: ADD ESP,0x4
// 0054baef: PUSH 0x1
// 0054baf1: PUSH EBP
// 0054baf2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x44] (DATA)
// 0054baf6: PUSH EAX
// 0054baf7: CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
//   XREF to: 0054b690 (UNCONDITIONAL_CALL)
// 0054bafc: ADD ESP,0xc
// 0054baff: PUSH 0x0
// 0054bb01: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x44] (DATA)
// 0054bb05: PUSH EAX
// 0054bb06: CALL cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890
//   XREF to: 0054a890 (UNCONDITIONAL_CALL)
// 0054bb0b: ADD ESP,0x8
// 0054bb0e: INC EBX
// 0054bb0f: CMP EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 0054bb13: JL 0x0054bae4
//   XREF to: 0054bae4 (CONDITIONAL_JUMP)
// 0054bb15: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0054bb15
//   XREF to: Stack[-0x14] (READ)
// 0054bb19: ADD EAX,0x24
// 0054bb1c: INC EDI
// 0054bb1d: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054bb21: CMP EDI,ESI
// 0054bb23: JL 0x0054bab5
//   XREF to: 0054bab5 (CONDITIONAL_JUMP)
// 0054bb25: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_0054bb25
//   XREF to: Stack[0x4] (READ)
// 0054bb29: MOV dword ptr [EAX],ESI
// 0054bb2b: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x18] (READ)
// 0054bb2f: ADD ESP,0x34
// 0054bb32: POP EBP
// 0054bb33: POP EDI
// 0054bb34: POP ESI
// 0054bb35: POP EBX
// 0054bb36: RET
