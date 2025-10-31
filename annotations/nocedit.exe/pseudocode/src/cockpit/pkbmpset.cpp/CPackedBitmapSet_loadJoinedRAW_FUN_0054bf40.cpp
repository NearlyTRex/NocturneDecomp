// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40
// Address: 0054bf40
// Address Range: [[0054bf40, 0054c1d1]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40(CPackedBitmapSet * this_ptr, char * filename, int bitmap_width, int bitmap_height, int total_bitmaps, int unknown_param)
// Globals:
//   TerminatedCString s_art_0063f433
//   TerminatedCString s_rb_0063f437
//   TerminatedCString s_art_0063f43a
//   TerminatedCString s_Unable_to_open_s_in_CPac_0063f43e
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f473
//   TerminatedCString s_Size_of_s_is_lu_must_be__0063f48b
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f4e8
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f500
//   TerminatedCString s_Can_t_allocate_u_bytes_f_0063f518
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f562
//   TerminatedCString s_Error_reading_from_s_in__0063f57a
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f5b3
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f5cb
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f5e3
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40
          (CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height,
          int total_bitmaps,int unknown_param)

{
  int iVar1;
  FILE *pFVar2;
  int iVar3;
  uchar *bitmap_data;
  SIZE_T SVar4;
  BADSPACEBASE *in_ESP;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  uchar in_stack_0000002c;
  char *in_stack_00000034;
  int in_stack_00000048;
  char acStack_134 [4];
  char acStack_130 [108];
  char acStack_c4 [4];
  char acStack_c0 [92];
  char acStack_64 [4];
  char acStack_60 [80];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  iVar1 = engine_dosio_c_getFileSize_FUN_00481880("art",(char *)bitmap_width);
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("art",(char *)bitmap_height,"rb");
  if (pFVar2 == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffe64,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW",total_bitmaps);
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 0xba;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffe68);
  }
  iVar3 = iVar1 / (in_stack_00000020 * bitmap_height);
  if (in_stack_00000020 * bitmap_height * iVar3 - iVar1 != 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_130,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW",in_stack_0000001c,iVar1);
    g_CurrentLineNumber = 199;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_134);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(this_ptr,iVar3);
  this_ptr->base_path = bitmap_height;
  this_ptr->extension = in_stack_00000024;
  bitmap_data = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                                   ((int)this_ptr,"..\\cockpit\\pkbmpset.cpp",0xd3);
  if (bitmap_data == (uchar *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_c4,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW");
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 0xd8;
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_c0);
  }
  iVar1 = 0;
  if (0 < this_ptr->bitmap_count) {
    iVar3 = 0;
    do {
      SVar4 = crt_stdio_c_fread_FUN_005fd990(bitmap_data,bitmap_height,1,(FILE *)bitmap_width);
      if (SVar4 != 1) {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_64,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW");
        g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
        g_CurrentLineNumber = 0xe2;
        core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_60);
      }
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar3),bitmap_data,
                 this_ptr->extension,this_ptr->base_path,(int)in_stack_00000034,in_stack_0000002c);
      iVar3 = iVar3 + 0x24;
    } while (iVar1 < this_ptr->bitmap_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(bitmap_data,"..\\cockpit\\pkbmpset.cpp",0xec);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0
            ((FILE *)bitmap_height,"..\\cockpit\\pkbmpset.cpp",0xed);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(this_ptr,in_stack_00000034);
  if (in_stack_00000048 == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(this_ptr);
  return;
}


// Assembly code:
// 0054bf40: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40
// 0054bf41: PUSH ESI
// 0054bf42: PUSH EDI
// 0054bf43: PUSH EBP
// 0054bf44: SUB ESP,0x198
// 0054bf4a: MOV EBX,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[0x4] (READ)
// 0054bf51: MOV EBP,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[0x10] (READ)
// 0054bf58: PUSH EBX
// 0054bf59: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
//   XREF to: 0054bd60 (UNCONDITIONAL_CALL)
// 0054bf5e: ADD ESP,0x4
// 0054bf61: MOV EDX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[0x8] (READ)
// 0054bf68: PUSH EDX
// 0054bf69: PUSH 0x63f433
//   XREF to: 0063f433 (DATA)
// 0054bf6e: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 0054bf73: ADD ESP,0x8
// 0054bf76: PUSH 0x63f437
//   XREF to: 0063f437 (DATA)
// 0054bf7b: MOV ECX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[0x8] (READ)
// 0054bf82: PUSH ECX
// 0054bf83: PUSH 0x63f43a
//   XREF to: 0063f43a (DATA)
// 0054bf88: MOV ESI,EAX
// 0054bf8a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0054bf8f: ADD ESP,0xc
// 0054bf92: MOV dword ptr [ESP + 0x190],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0054bf99: TEST EAX,EAX
// 0054bf9b: JZ 0x0054c17f
//   XREF to: 0054c17f (CONDITIONAL_JUMP)
// 0054bfa1: MOV EAX,dword ptr [ESP + 0x1b4]
//   Label: LAB_0054bfa1
//   XREF to: Stack[0xc] (READ)
// 0054bfa8: IMUL EAX,EBP
// 0054bfab: MOV EDX,ESI
// 0054bfad: MOV dword ptr [ESP + 0x194],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054bfb4: SAR EDX,0x1f
// 0054bfb7: MOV ECX,dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x14] (READ)
// 0054bfbe: MOV EAX,ESI
// 0054bfc0: IDIV ECX
// 0054bfc2: MOV EDI,EAX
// 0054bfc4: MOV EAX,ECX
// 0054bfc6: IMUL EAX,EDI
// 0054bfc9: CMP EAX,ESI
// 0054bfcb: JZ 0x0054c014
//   XREF to: 0054c014 (CONDITIONAL_JUMP)
// 0054bfcd: PUSH EBP
// 0054bfce: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[0xc] (READ)
// 0054bfd5: PUSH EAX
// 0054bfd6: PUSH ESI
// 0054bfd7: MOV EDX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[0x8] (READ)
// 0054bfde: PUSH EDX
// 0054bfdf: PUSH 0x63f48b
//   XREF to: 0063f48b (DATA)
// 0054bfe4: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x144] (DATA)
// 0054bfe8: PUSH EAX
// 0054bfe9: MOV ESI,0xc7
// 0054bfee: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054bff3: ADD ESP,0x18
// 0054bff6: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x144] (DATA)
// 0054bffa: MOV ECX,0x63f4e8
//   XREF to: 0063f4e8 (DATA)
// 0054bfff: PUSH EAX
// 0054c000: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0054c006: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054c00c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054c011: ADD ESP,0x4
// 0054c014: PUSH EDI
//   Label: LAB_0054c014
// 0054c015: PUSH EBX
// 0054c016: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
//   XREF to: 0054bdb0 (UNCONDITIONAL_CALL)
// 0054c01b: ADD ESP,0x8
// 0054c01e: PUSH 0xd3
// 0054c023: MOV dword ptr [EBX + 0x20],EBP
// 0054c026: PUSH 0x63f500
//   XREF to: 0063f500 (DATA)
// 0054c02b: MOV EDI,dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0x14] (READ)
// 0054c032: MOV EAX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[0xc] (READ)
// 0054c039: PUSH EDI
// 0054c03a: MOV dword ptr [EBX + 0x1c],EAX
// 0054c03d: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0054c042: ADD ESP,0xc
// 0054c045: MOV EBP,EAX
// 0054c047: TEST EAX,EAX
// 0054c049: JNZ 0x0054c087
//   XREF to: 0054c087 (CONDITIONAL_JUMP)
// 0054c04b: PUSH EDI
// 0054c04c: PUSH 0x63f518
//   XREF to: 0063f518 (DATA)
// 0054c051: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0xe0] (DATA)
// 0054c058: PUSH EAX
// 0054c059: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054c05e: MOV EDX,0x63f562
//   XREF to: 0063f562 (DATA)
// 0054c063: ADD ESP,0xc
// 0054c066: LEA EAX,[ESP + 0xc8]
//   XREF to: Stack[-0xe0] (DATA)
// 0054c06d: MOV ECX,0xd8
// 0054c072: PUSH EAX
// 0054c073: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0054c079: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0054c07f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054c084: ADD ESP,0x4
// 0054c087: MOV ESI,dword ptr [EBX]
//   Label: LAB_0054c087
// 0054c089: XOR EDI,EDI
// 0054c08b: TEST ESI,ESI
// 0054c08d: JLE 0x0054c12c
//   XREF to: 0054c12c (CONDITIONAL_JUMP)
// 0054c093: XOR ESI,ESI
// 0054c095: MOV EAX,dword ptr [ESP + 0x190]
//   Label: LAB_0054c095
//   XREF to: Stack[-0x18] (READ)
// 0054c09c: PUSH EAX
// 0054c09d: PUSH 0x1
// 0054c09f: MOV EDX,dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0x14] (READ)
// 0054c0a6: PUSH EDX
// 0054c0a7: PUSH EBP
// 0054c0a8: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054c0ad: ADD ESP,0x10
// 0054c0b0: CMP EAX,0x1
// 0054c0b3: JZ 0x0054c0f7
//   XREF to: 0054c0f7 (CONDITIONAL_JUMP)
// 0054c0b5: MOV ECX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[0x8] (READ)
// 0054c0bc: PUSH ECX
// 0054c0bd: PUSH 0x63f57a
//   XREF to: 0063f57a (DATA)
// 0054c0c2: LEA EAX,[ESP + 0x134]
//   XREF to: Stack[-0x7c] (DATA)
// 0054c0c9: PUSH EAX
// 0054c0ca: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054c0cf: MOV EAX,0x63f5b3
//   XREF to: 0063f5b3 (DATA)
// 0054c0d4: ADD ESP,0xc
// 0054c0d7: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0054c0dc: LEA EAX,[ESP + 0x12c]
//   XREF to: Stack[-0x7c] (DATA)
// 0054c0e3: MOV EDX,0xe2
// 0054c0e8: PUSH EAX
// 0054c0e9: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0054c0ef: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054c0f4: ADD ESP,0x4
// 0054c0f7: MOV EAX,dword ptr [ESP + 0x1b4]
//   Label: LAB_0054c0f7
//   XREF to: Stack[0xc] (READ)
// 0054c0fe: PUSH EAX
// 0054c0ff: MOV EDX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[0x14] (READ)
// 0054c106: PUSH EDX
// 0054c107: MOV ECX,dword ptr [EBX + 0x20]
// 0054c10a: PUSH ECX
// 0054c10b: MOV EAX,dword ptr [EBX + 0x1c]
// 0054c10e: PUSH EAX
// 0054c10f: MOV EAX,dword ptr [EBX + 0x4]
// 0054c112: PUSH EBP
// 0054c113: ADD EAX,ESI
// 0054c115: PUSH EAX
// 0054c116: INC EDI
// 0054c117: CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
//   XREF to: 0054b190 (UNCONDITIONAL_CALL)
// 0054c11c: ADD ESI,0x24
// 0054c11f: MOV EDX,dword ptr [EBX]
// 0054c121: ADD ESP,0x18
// 0054c124: CMP EDI,EDX
// 0054c126: JL 0x0054c095
//   XREF to: 0054c095 (CONDITIONAL_JUMP)
// 0054c12c: PUSH 0xec
//   Label: LAB_0054c12c
// 0054c131: PUSH 0x63f5cb
//   XREF to: 0063f5cb (DATA)
// 0054c136: PUSH EBP
// 0054c137: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0054c13c: ADD ESP,0xc
// 0054c13f: PUSH 0xed
// 0054c144: PUSH 0x63f5e3
//   XREF to: 0063f5e3 (DATA)
// 0054c149: MOV ECX,dword ptr [ESP + 0x198]
//   XREF to: Stack[-0x18] (READ)
// 0054c150: PUSH ECX
// 0054c151: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0054c156: ADD ESP,0xc
// 0054c159: MOV ESI,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[0x8] (READ)
// 0054c160: PUSH ESI
// 0054c161: PUSH EBX
// 0054c162: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
//   XREF to: 0054c6f0 (UNCONDITIONAL_CALL)
// 0054c167: ADD ESP,0x8
// 0054c16a: CMP dword ptr [ESP + 0x1c0],0x0
//   XREF to: Stack[0x18] (READ)
// 0054c172: JNZ 0x0054c1be
//   XREF to: 0054c1be (CONDITIONAL_JUMP)
// 0054c174: ADD ESP,0x198
// 0054c17a: POP EBP
// 0054c17b: POP EDI
// 0054c17c: POP ESI
// 0054c17d: POP EBX
// 0054c17e: RET
// 0054c17f: MOV EDI,dword ptr [ESP + 0x1b0]
//   Label: LAB_0054c17f
//   XREF to: Stack[0x8] (READ)
// 0054c186: PUSH EDI
// 0054c187: PUSH 0x63f43e
//   XREF to: 0063f43e (DATA)
// 0054c18c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1a8] (DATA)
// 0054c190: PUSH EAX
// 0054c191: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054c196: MOV EAX,0x63f473
//   XREF to: 0063f473 (DATA)
// 0054c19b: ADD ESP,0xc
// 0054c19e: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0054c1a3: MOV EAX,ESP
// 0054c1a5: MOV EDX,0xba
// 0054c1aa: PUSH EAX
// 0054c1ab: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0054c1b1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054c1b6: ADD ESP,0x4
// 0054c1b9: JMP 0x0054bfa1
//   XREF to: 0054bfa1 (UNCONDITIONAL_JUMP)
// 0054c1be: PUSH EBX
//   Label: LAB_0054c1be
// 0054c1bf: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
//   XREF to: 0054c710 (UNCONDITIONAL_CALL)
// 0054c1c4: ADD ESP,0x4
// 0054c1c7: ADD ESP,0x198
// 0054c1cd: POP EBP
// 0054c1ce: POP EDI
// 0054c1cf: POP ESI
// 0054c1d0: POP EBX
// 0054c1d1: RET
