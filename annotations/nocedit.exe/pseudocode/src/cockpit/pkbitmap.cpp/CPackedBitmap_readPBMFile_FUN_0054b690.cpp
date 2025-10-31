// Name: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
// Address: 0054b690
// Address Range: [[0054b690, 0054b85a]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690(CPackedBitmap * this_ptr, FILE * file_handle, int skip_data_load)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 (0054b860) at 0054b8d5 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 (0054b9b0) at 0054bad1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f11b
//   TerminatedCString s_IO_error_reading_PBM_pos_0063f133
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f161
//   TerminatedCString s_Corrupt_data_detected_re_0063f179
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f19c
//   TerminatedCString s_Out_of_memory_reading_PB_0063f1b4
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f1ce
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f1e6
//   TerminatedCString s_anon_00680c9c
//   undefined4 s_BM_PBG_00680c9d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

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
      ppvVar3 = (void **)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                   ((this_ptr->height + 1) * 4,"..\\cockpit\\pkbitmap.cpp",0x4c6
                                   );
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
          buffer = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
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


// Assembly code:
// 0054b690: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
// 0054b691: PUSH ESI
// 0054b692: PUSH EDI
// 0054b693: PUSH EBP
// 0054b694: SUB ESP,0x1c
// 0054b697: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0054b69b: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0054b69f: PUSH EBX
// 0054b6a0: CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
//   XREF to: 0054a8e0 (UNCONDITIONAL_CALL)
// 0054b6a5: ADD ESP,0x4
//   Label: LAB_0054b6a5
// 0054b6a8: PUSH EBP
// 0054b6a9: PUSH 0x1
// 0054b6ab: PUSH 0x1c
// 0054b6ad: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x2c] (DATA)
// 0054b6b1: PUSH EAX
// 0054b6b2: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054b6b7: ADD ESP,0x10
// 0054b6ba: CMP EAX,0x1
// 0054b6bd: JNZ 0x0054b71f
//   XREF to: 0054b71f (CONDITIONAL_JUMP)
// 0054b6bf: MOV ECX,0x4
// 0054b6c4: MOV EDI,0x680c9c
//   XREF to: 00680c9c (DATA)
// 0054b6c9: MOV ESI,ESP
// 0054b6cb: XOR EAX,EAX
// 0054b6cd: CMPSB.REPE ES:EDI,ESI
//   XREF to: 00680c9c (READ)
//   XREF to: 00680c9d (READ)
// 0054b6cf: JZ 0x0054b6d6
//   XREF to: 0054b6d6 (CONDITIONAL_JUMP)
// 0054b6d1: SBB EAX,EAX
// 0054b6d3: SBB EAX,-0x1
// 0054b6d6: TEST EAX,EAX
//   Label: LAB_0054b6d6
// 0054b6d8: JZ 0x0054b743
//   XREF to: 0054b743 (CONDITIONAL_JUMP)
// 0054b6da: MOV EDX,0x63f161
//   Label: LAB_0054b6da
//   XREF to: 0063f161 (DATA)
// 0054b6df: MOV ECX,0x4ae
// 0054b6e4: PUSH 0x63f179
//   XREF to: 0063f179 (DATA)
// 0054b6e9: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0054b6ef: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0054b6f5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054b6fa: ADD ESP,0x4
// 0054b6fd: MOV ESI,0x63f19c
//   Label: LAB_0054b6fd
//   XREF to: 0063f19c (DATA)
// 0054b702: MOV EDI,0x4af
// 0054b707: PUSH 0x63f1b4
//   XREF to: 0063f1b4 (DATA)
// 0054b70c: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0054b712: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0054b718: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054b71d: JMP 0x0054b6a5
//   XREF to: 0054b6a5 (UNCONDITIONAL_JUMP)
// 0054b71f: MOV EDI,0x63f11b
//   Label: LAB_0054b71f
//   XREF to: 0063f11b (DATA)
// 0054b724: MOV EAX,0x4ad
// 0054b729: PUSH 0x63f133
//   XREF to: 0063f133 (DATA)
// 0054b72e: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0054b734: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0054b739: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054b73e: ADD ESP,0x4
// 0054b741: JMP 0x0054b6da
//   XREF to: 0054b6da (UNCONDITIONAL_JUMP)
// 0054b743: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_0054b743
//   XREF to: Stack[-0x28] (READ)
// 0054b747: CMP EDX,0x1
// 0054b74a: JC 0x0054b6da
//   XREF to: 0054b6da (CONDITIONAL_JUMP)
// 0054b74c: CMP dword ptr [ESP + 0x8],0x1
//   XREF to: Stack[-0x24] (READ)
// 0054b751: JC 0x0054b6da
//   XREF to: 0054b6da (CONDITIONAL_JUMP)
// 0054b753: MOV dword ptr [EBX + 0x18],EDX
// 0054b756: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 0054b75a: MOV dword ptr [EBX + 0x1c],EAX
// 0054b75d: CMP dword ptr [ESP + 0xc],0x0
//   XREF to: Stack[-0x20] (READ)
// 0054b762: JNZ 0x0054b6da
//   XREF to: 0054b6da (CONDITIONAL_JUMP)
// 0054b768: CMP dword ptr [ESP + 0x10],0x0
//   XREF to: Stack[-0x1c] (READ)
// 0054b76d: JNZ 0x0054b6da
//   XREF to: 0054b6da (CONDITIONAL_JUMP)
// 0054b773: MOV EAX,dword ptr [EBX + 0x18]
// 0054b776: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0054b77a: DEC EAX
// 0054b77b: CMP EAX,EDX
// 0054b77d: JNZ 0x0054b6da
//   XREF to: 0054b6da (CONDITIONAL_JUMP)
// 0054b783: MOV EAX,dword ptr [EBX + 0x1c]
// 0054b786: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0054b78a: DEC EAX
// 0054b78b: CMP EAX,ECX
// 0054b78d: JNZ 0x0054b6da
//   XREF to: 0054b6da (CONDITIONAL_JUMP)
// 0054b793: MOV EAX,dword ptr [EBX + 0x1c]
// 0054b796: PUSH 0x4c6
// 0054b79b: INC EAX
// 0054b79c: PUSH 0x63f1ce
//   XREF to: 0063f1ce (DATA)
// 0054b7a1: SHL EAX,0x2
// 0054b7a4: PUSH EAX
// 0054b7a5: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0054b7aa: ADD ESP,0xc
// 0054b7ad: MOV dword ptr [EBX + 0x20],EAX
// 0054b7b0: TEST EAX,EAX
// 0054b7b2: JZ 0x0054b6fd
//   XREF to: 0054b6fd (CONDITIONAL_JUMP)
// 0054b7b8: MOV EAX,dword ptr [EBX + 0x1c]
// 0054b7bb: PUSH EBP
// 0054b7bc: INC EAX
// 0054b7bd: PUSH 0x1
// 0054b7bf: SHL EAX,0x2
// 0054b7c2: PUSH EAX
// 0054b7c3: MOV EDI,dword ptr [EBX + 0x20]
// 0054b7c6: PUSH EDI
// 0054b7c7: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054b7cc: ADD ESP,0x10
// 0054b7cf: CMP EAX,0x1
// 0054b7d2: JNZ 0x0054b71f
//   XREF to: 0054b71f (CONDITIONAL_JUMP)
// 0054b7d8: MOV EAX,dword ptr [EBX + 0x1c]
// 0054b7db: XOR EDX,EDX
// 0054b7dd: TEST EAX,EAX
// 0054b7df: JLE 0x0054b7fa
//   XREF to: 0054b7fa (CONDITIONAL_JUMP)
// 0054b7e1: MOV EAX,dword ptr [EBX + 0x20]
// 0054b7e4: MOV ESI,dword ptr [EAX + 0x4]
//   Label: LAB_0054b7e4
// 0054b7e7: CMP ESI,dword ptr [EAX]
// 0054b7e9: JL 0x0054b6da
//   XREF to: 0054b6da (CONDITIONAL_JUMP)
// 0054b7ef: INC EDX
// 0054b7f0: MOV ECX,dword ptr [EBX + 0x1c]
// 0054b7f3: ADD EAX,0x4
// 0054b7f6: CMP EDX,ECX
// 0054b7f8: JL 0x0054b7e4
//   XREF to: 0054b7e4 (CONDITIONAL_JUMP)
// 0054b7fa: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_0054b7fa
// 0054b7fd: MOV EDX,dword ptr [EBX + 0x1c]
// 0054b800: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 0054b804: MOV ESI,dword ptr [EAX + EDX*0x4]
// 0054b807: TEST EDI,EDI
// 0054b809: JNZ 0x0054b847
//   XREF to: 0054b847 (CONDITIONAL_JUMP)
// 0054b80b: PUSH 0x4de
// 0054b810: PUSH 0x63f1e6
//   XREF to: 0063f1e6 (DATA)
// 0054b815: PUSH ESI
// 0054b816: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0054b81b: ADD ESP,0xc
// 0054b81e: MOV dword ptr [EBX + 0x14],EAX
// 0054b821: TEST EAX,EAX
// 0054b823: JZ 0x0054b6fd
//   XREF to: 0054b6fd (CONDITIONAL_JUMP)
// 0054b829: PUSH EBP
// 0054b82a: PUSH 0x1
// 0054b82c: PUSH ESI
// 0054b82d: PUSH EAX
// 0054b82e: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054b833: ADD ESP,0x10
// 0054b836: CMP EAX,0x1
// 0054b839: JNZ 0x0054b71f
//   XREF to: 0054b71f (CONDITIONAL_JUMP)
// 0054b83f: ADD ESP,0x1c
// 0054b842: POP EBP
// 0054b843: POP EDI
// 0054b844: POP ESI
// 0054b845: POP EBX
// 0054b846: RET
// 0054b847: PUSH 0x1
//   Label: LAB_0054b847
// 0054b849: PUSH ESI
// 0054b84a: PUSH EBP
// 0054b84b: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0054b850: ADD ESP,0xc
// 0054b853: ADD ESP,0x1c
// 0054b856: POP EBP
// 0054b857: POP EDI
// 0054b858: POP ESI
// 0054b859: POP EBX
// 0054b85a: RET
