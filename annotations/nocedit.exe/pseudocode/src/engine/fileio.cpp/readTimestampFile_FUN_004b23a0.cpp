// Name: engine_fileio.cpp_readTimestampFile_FUN_004b23a0
// Address: 004b23a0
// Address Range: [[004b23a0, 004b2631]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_readTimestampFile_FUN_004b23a0(FILE * file, STimestampRecord * * records, int * count)
// Cross-references:
//   engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640 (004b2640) at 004b26a6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_0062604b
//   TerminatedCString s_anon_00626169
//   TerminatedCString s_Error_reading_s_0062616b
//   TerminatedCString s_engine_fileio_cpp_0062617c
//   TerminatedCString s_Error_parsing_s_record_d_00626191
//   TerminatedCString s_engine_fileio_cpp_006261ad
//   TerminatedCString s_Out_of_memory_reading_s__006261c2
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_stdio.c_fseek_FUN_005ffacc
//   engine_fileio.cpp_parseTimestampRecord_FUN_004b2270
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

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
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 *in_stack_00000018;
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
    pSVar4 = (STimestampRecord *)
             shape_memdbg_cpp_debugRealloc_FUN_0050f540
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
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + ((uint)bVar6 * -2 + 1) * 4;
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    unaff_retaddr = unaff_retaddr + 0x148;
  } while( true );
}


// Assembly code:
// 004b23a0: PUSH EBX
//   Label: engine_fileio.cpp_readTimestampFile_FUN_004b23a0
// 004b23a1: PUSH ESI
// 004b23a2: PUSH EDI
// 004b23a3: PUSH EBP
// 004b23a4: SUB ESP,0x550
// 004b23aa: MOV EBX,dword ptr [ESP + 0x568]
//   XREF to: Stack[0x8] (READ)
// 004b23b1: XOR EDX,EDX
// 004b23b3: PUSH EDX
// 004b23b4: MOV EAX,dword ptr [ESP + 0x568]
//   XREF to: Stack[0x4] (READ)
// 004b23bb: PUSH EDX
// 004b23bc: MOV ECX,dword ptr [EAX]
// 004b23be: MOV EBP,0x148
// 004b23c3: PUSH ECX
// 004b23c4: XOR ESI,ESI
// 004b23c6: MOV dword ptr [ESP + 0x554],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004b23cd: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 004b23d2: ADD ESP,0xc
// 004b23d5: MOV dword ptr [EBX],0x0
// 004b23db: MOV dword ptr [ESP + 0x54c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004b23e2: MOV EAX,dword ptr [ESP + 0x564]
//   Label: LAB_004b23e2
//   XREF to: Stack[0x4] (READ)
// 004b23e9: PUSH 0x626169
//   XREF to: 00626169 (DATA)
// 004b23ee: MOV EDI,dword ptr [EAX]
// 004b23f0: PUSH EDI
// 004b23f1: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b23f6: ADD ESP,0x8
// 004b23f9: MOV EAX,dword ptr [ESP + 0x564]
//   XREF to: Stack[0x4] (READ)
// 004b2400: MOV EDX,dword ptr [EAX]
// 004b2402: PUSH EDX
// 004b2403: PUSH 0x400
// 004b2408: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x560] (DATA)
// 004b240c: PUSH EAX
// 004b240d: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x560] (DATA)
// 004b2411: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004b2416: ADD ESP,0xc
// 004b2419: CMP EAX,EDI
// 004b241b: JZ 0x004b24cb
//   XREF to: 004b24cb (CONDITIONAL_JUMP)
// 004b2421: MOV EAX,dword ptr [ESP + 0x564]
//   XREF to: Stack[0x4] (READ)
// 004b2428: MOV EAX,dword ptr [EAX]
// 004b242a: TEST byte ptr [EAX + 0xc],0x20
// 004b242e: JZ 0x004b2620
//   XREF to: 004b2620 (CONDITIONAL_JUMP)
// 004b2434: PUSH 0xc4
// 004b2439: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b243e: PUSH EAX
// 004b243f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b2444: ADD ESP,0xc
// 004b2447: MOV EBP,dword ptr [ESP + 0x570]
//   XREF to: Stack[0x10] (READ)
// 004b244e: PUSH EBP
// 004b244f: MOV EAX,dword ptr [ESP + 0x568]
//   XREF to: Stack[0x4] (READ)
// 004b2456: PUSH 0x62616b
//   XREF to: 0062616b (DATA)
// 004b245b: MOV dword ptr [EAX],0x0
// 004b2461: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b2466: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b2467: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b246c: ADD ESP,0xc
// 004b246f: MOV EAX,dword ptr [ESP + 0x564]
//   Label: LAB_004b246f
//   XREF to: Stack[0x4] (READ)
// 004b2476: MOV EDX,dword ptr [EAX]
// 004b2478: TEST EDX,EDX
// 004b247a: JZ 0x004b249c
//   XREF to: 004b249c (CONDITIONAL_JUMP)
// 004b247c: PUSH 0xc4
// 004b2481: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b2486: PUSH EDX
// 004b2487: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b248c: ADD ESP,0xc
// 004b248f: MOV EAX,dword ptr [ESP + 0x564]
//   XREF to: Stack[0x4] (READ)
// 004b2496: MOV dword ptr [EAX],0x0
// 004b249c: MOV ESI,dword ptr [EBX]
//   Label: LAB_004b249c
// 004b249e: TEST ESI,ESI
// 004b24a0: JZ 0x004b24bb
//   XREF to: 004b24bb (CONDITIONAL_JUMP)
// 004b24a2: PUSH 0x1ae
// 004b24a7: PUSH 0x62617c
//   XREF to: 0062617c (DATA)
// 004b24ac: PUSH ESI
// 004b24ad: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004b24b2: ADD ESP,0xc
// 004b24b5: MOV dword ptr [EBX],0x0
// 004b24bb: MOV EAX,0xffffffff
//   Label: LAB_004b24bb
// 004b24c0: ADD ESP,0x550
// 004b24c6: POP EBP
// 004b24c7: POP EDI
// 004b24c8: POP ESI
// 004b24c9: POP EBX
// 004b24ca: RET
// 004b24cb: LEA EAX,[ESP + 0x400]
//   Label: LAB_004b24cb
//   XREF to: Stack[-0x160] (DATA)
// 004b24d2: PUSH EAX
// 004b24d3: PUSH EDI
// 004b24d4: CALL engine_fileio.cpp_parseTimestampRecord_FUN_004b2270
//   XREF to: 004b2270 (UNCONDITIONAL_CALL)
// 004b24d9: ADD ESP,0x8
// 004b24dc: TEST EAX,EAX
// 004b24de: JNZ 0x004b2535
//   XREF to: 004b2535 (CONDITIONAL_JUMP)
// 004b24e0: MOV EAX,dword ptr [ESP + 0x564]
//   XREF to: Stack[0x4] (READ)
// 004b24e7: MOV ECX,dword ptr [EAX]
// 004b24e9: TEST ECX,ECX
// 004b24eb: JZ 0x004b250d
//   XREF to: 004b250d (CONDITIONAL_JUMP)
// 004b24ed: PUSH 0xc4
// 004b24f2: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b24f7: PUSH ECX
// 004b24f8: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b24fd: ADD ESP,0xc
// 004b2500: MOV EAX,dword ptr [ESP + 0x564]
//   XREF to: Stack[0x4] (READ)
// 004b2507: MOV dword ptr [EAX],0x0
// 004b250d: MOV EDI,dword ptr [ESP + 0x548]
//   Label: LAB_004b250d
//   XREF to: Stack[-0x18] (READ)
// 004b2514: PUSH EDI
// 004b2515: MOV EBP,dword ptr [ESP + 0x574]
//   XREF to: Stack[0x10] (READ)
// 004b251c: PUSH EBP
// 004b251d: PUSH 0x626191
//   XREF to: 00626191 (DATA)
// 004b2522: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b2527: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b2528: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b252d: ADD ESP,0x10
// 004b2530: JMP 0x004b246f
//   XREF to: 004b246f (UNCONDITIONAL_JUMP)
// 004b2535: MOV ESI,dword ptr [ESP + 0x56c]
//   Label: LAB_004b2535
//   XREF to: Stack[0xc] (READ)
// 004b253c: LEA EDI,[ESP + 0x400]
//   XREF to: Stack[-0x160] (DATA)
// 004b2543: PUSH EDI
// 004b2544: MOV AL,byte ptr [ESI]
//   Label: LAB_004b2544
// 004b2546: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x160] (DATA)
// 004b2548: CMP AL,0x0
// 004b254a: JZ 0x004b255c
//   XREF to: 004b255c (CONDITIONAL_JUMP)
// 004b254c: MOV AL,byte ptr [ESI + 0x1]
// 004b254f: ADD ESI,0x2
// 004b2552: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x15f] (WRITE)
// 004b2555: ADD EDI,0x2
// 004b2558: CMP AL,0x0
// 004b255a: JNZ 0x004b2544
//   XREF to: 004b2544 (CONDITIONAL_JUMP)
// 004b255c: POP EDI
//   Label: LAB_004b255c
// 004b255d: PUSH 0x1c2
// 004b2562: PUSH 0x6261ad
//   XREF to: 006261ad (DATA)
// 004b2567: PUSH EBP
// 004b2568: MOV EDX,dword ptr [EBX]
// 004b256a: PUSH EDX
// 004b256b: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004b2570: ADD ESP,0x10
// 004b2573: MOV dword ptr [EBX],EAX
// 004b2575: TEST EAX,EAX
// 004b2577: JNZ 0x004b25da
//   XREF to: 004b25da (CONDITIONAL_JUMP)
// 004b2579: MOV EAX,dword ptr [ESP + 0x564]
//   XREF to: Stack[0x4] (READ)
// 004b2580: MOV EDX,dword ptr [EAX]
// 004b2582: TEST EDX,EDX
// 004b2584: JZ 0x004b25a6
//   XREF to: 004b25a6 (CONDITIONAL_JUMP)
// 004b2586: PUSH 0xc4
// 004b258b: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b2590: PUSH EDX
// 004b2591: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b2596: ADD ESP,0xc
// 004b2599: MOV EAX,dword ptr [ESP + 0x564]
//   XREF to: Stack[0x4] (READ)
// 004b25a0: MOV dword ptr [EAX],0x0
// 004b25a6: MOV EBX,dword ptr [ESP + 0x548]
//   Label: LAB_004b25a6
//   XREF to: Stack[-0x18] (READ)
// 004b25ad: PUSH EBX
// 004b25ae: MOV ESI,dword ptr [ESP + 0x574]
//   XREF to: Stack[0x10] (READ)
// 004b25b5: PUSH ESI
// 004b25b6: PUSH 0x6261c2
//   XREF to: 006261c2 (DATA)
// 004b25bb: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b25c1: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b25c2: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b25c7: MOV EAX,0xffffffff
// 004b25cc: ADD ESP,0x10
// 004b25cf: ADD ESP,0x550
// 004b25d5: POP EBP
// 004b25d6: POP EDI
// 004b25d7: POP ESI
// 004b25d8: POP EBX
// 004b25d9: RET
// 004b25da: MOV ESI,dword ptr [ESP + 0x54c]
//   Label: LAB_004b25da
//   XREF to: Stack[-0x14] (READ)
// 004b25e1: MOV ECX,0x52
// 004b25e6: LEA EDI,[EAX + ESI*0x1]
// 004b25e9: LEA ESI,[ESP + 0x400]
//   XREF to: Stack[-0x160] (DATA)
// 004b25f0: ADD EBP,0x148
// 004b25f6: MOVSD.REP ES:EDI,ESI
// 004b25f8: MOV EAX,dword ptr [ESP + 0x548]
//   XREF to: Stack[-0x18] (READ)
// 004b25ff: MOV EDI,dword ptr [ESP + 0x54c]
//   XREF to: Stack[-0x14] (READ)
// 004b2606: INC EAX
// 004b2607: ADD EDI,0x148
// 004b260d: MOV dword ptr [ESP + 0x548],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004b2614: MOV dword ptr [ESP + 0x54c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 004b261b: JMP 0x004b23e2
//   XREF to: 004b23e2 (UNCONDITIONAL_JUMP)
// 004b2620: MOV EAX,dword ptr [ESP + 0x548]
//   Label: LAB_004b2620
//   XREF to: Stack[-0x18] (READ)
// 004b2627: ADD ESP,0x550
// 004b262d: POP EBP
// 004b262e: POP EDI
// 004b262f: POP ESI
// 004b2630: POP EBX
// 004b2631: RET
