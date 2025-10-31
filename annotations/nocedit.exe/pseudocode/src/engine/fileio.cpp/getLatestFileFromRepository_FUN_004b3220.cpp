// Name: engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
// Address: 004b3220
// Address Range: [[004b3220, 004b3591]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220(char * base_directory, char * filename)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3eae [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4583 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0 (004b41c0) at 004b420e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb465 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bad65 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc34c [UNCONDITIONAL_CALL]
// Globals:
//   Sleep* Sleep = 00212228
//   TerminatedCString s_engine_fileio_cpp_0062604b
//   TerminatedCString s_engine_fileio_cpp_00626129
//   TerminatedCString s_WARNING_Error_setting_da_00626577
//   TerminatedCString s_rb_0062660e
//   TerminatedCString s_Can_t_access_s_Perhaps_s_00626611
//   TerminatedCString s_engine_fileio_cpp_006266a4
//   TerminatedCString s_wb_006266b9
//   TerminatedCString s_Can_t_create_s_006266bc
//   TerminatedCString s_Error_turning_on_read_on_006266cd
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_errno.c_errno_FUN_00601450
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_setvbuf_FUN_00601490
//   engine_dosio.c_copyFileTimestamp_FUN_00481910
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_findFileNormally_FUN_004817c0
//   engine_dosio.c_getFileTimestamp_FUN_00481960
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_setFileAttributes_FUN_004819f0
//   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220(char *base_directory,char *filename)

{
  char cVar1;
  bool bVar2;
  FILE *stream_ptr;
  int *piVar3;
  FILE *dest_file;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  uint uStack_320;
  uint uStack_318;
  undefined1 auStack_314 [20];
  char acStack_300 [4];
  char acStack_2fc [488];
  char local_114 [4];
  char acStack_110 [4];
  uint uStack_10c;
  uint uStack_104;
  char local_14 [4];
  
  bVar8 = 0;
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(base_directory,local_14,local_114);
  engine_dosio_c_makePath_FUN_00481f50
            (&stack0xfffffac8,&stack0xfffffff0,acStack_110,(char *)0x0,(char *)0x0);
  iVar5 = -1;
  pcVar6 = &stack0xfffffacc;
  do {
    pcVar7 = pcVar6;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  pcVar6 = filename;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar5 = 0;
  do {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (&stack0xfffffacc,(char *)0x0,"rb","..\\engine\\fileio.cpp",
                            0x153);
    if (stream_ptr != (FILE *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490(stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b32cc;
    }
    piVar3 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar3 != 6) break;
    iVar5 = iVar5 + 1;
    (*Sleep)(500);
  } while (iVar5 < 10);
  stream_ptr = (FILE *)0x0;
LAB_004b32cc:
  if ((stream_ptr == (FILE *)0x0) ||
     (iVar5 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)&stack0xfffffad4),
     iVar5 == 0)) {
    if (stream_ptr != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
      stream_ptr = (FILE *)0x0;
    }
    pcVar6 = "Can't access %s.\nPerhaps someone else is checking it in, and it's taking a while?\nTry again in a few minutes, and if that doesn't work, get Fletch";
  }
  else {
    pcVar6 = auStack_314;
    do {
      cVar1 = *filename;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    iVar5 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)auStack_314);
    if (iVar5 == 0) {
      uStack_10c = 0xffffffff;
    }
    if (((uStack_10c != uStack_320) || (uStack_318 + 2 < uStack_104)) ||
       (uStack_104 + 2 < uStack_318)) {
      engine_dosio_c_setFileAttributes_FUN_004819f0(auStack_314 + 4,0);
      crt_io_c_deleteFile_FUN_005ff9d0(auStack_314 + 8);
      dest_file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            (auStack_314 + 0xc,(char *)0x0,"wb",
                             "..\\engine\\fileio.cpp",0x3c5);
      if (dest_file == (FILE *)0x0) {
        if (stream_ptr != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
          stream_ptr = (FILE *)0x0;
        }
        pcVar6 = "Can't create %s.";
        goto LAB_004b32fe;
      }
      pcVar6 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                         (stream_ptr,dest_file,&stack0xfffffae8,auStack_314 + 0x10,auStack_314._0_4_
                         );
      if (stream_ptr != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
        stream_ptr = (FILE *)0x0;
      }
      if (dest_file != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(dest_file,"..\\engine\\fileio.cpp",0xc4);
      }
      if (pcVar6 != (char *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
        goto LAB_004b3306;
      }
      iVar5 = engine_dosio_c_copyFileTimestamp_FUN_00481910(acStack_2fc,(char *)auStack_314._16_4_);
      if (iVar5 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)");
        return 0;
      }
    }
    if (stream_ptr != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
      stream_ptr = (FILE *)0x0;
    }
    uVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,auStack_314 + 0x10);
    if (((((int)uVar4 < 0) || ((uVar4 & 8) != 0)) ||
        (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_300,(byte)uVar4 | 8),
        CONCAT31(extraout_var,bVar2) != 0)) && (-1 < (int)uVar4)) {
      return 1;
    }
    pcVar6 = "Error turning on read-only bit for %s.";
  }
LAB_004b32fe:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
LAB_004b3306:
  if (stream_ptr != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
  }
  return 0;
}


// Assembly code:
// 004b3220: PUSH EBX
//   Label: engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
// 004b3221: PUSH ESI
// 004b3222: PUSH EDI
// 004b3223: PUSH EBP
// 004b3224: SUB ESP,0x52c
// 004b322a: MOV EBP,dword ptr [ESP + 0x544]
//   XREF to: Stack[0x8] (READ)
// 004b3231: LEA EAX,[ESP + 0x428]
//   XREF to: Stack[-0x114] (DATA)
// 004b3238: PUSH EAX
// 004b3239: LEA EAX,[ESP + 0x52c]
//   XREF to: Stack[-0x14] (DATA)
// 004b3240: PUSH EAX
// 004b3241: MOV EDX,dword ptr [ESP + 0x548]
//   XREF to: Stack[0x4] (READ)
// 004b3248: PUSH EDX
// 004b3249: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b324e: ADD ESP,0xc
// 004b3251: PUSH 0x0
// 004b3253: PUSH 0x0
// 004b3255: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x114] (DATA)
// 004b325c: PUSH EAX
// 004b325d: LEA EAX,[ESP + 0x534]
//   XREF to: Stack[-0x14] (DATA)
// 004b3264: PUSH EAX
// 004b3265: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x53c] (DATA)
// 004b3269: PUSH EAX
// 004b326a: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b326f: ADD ESP,0x14
// 004b3272: MOV EDI,ESP
// 004b3274: MOV ESI,EBP
// 004b3276: PUSH EDI
// 004b3277: SUB ECX,ECX
// 004b3279: DEC ECX
// 004b327a: MOV AL,0x0
// 004b327c: SCASB.REPNE ES:EDI
// 004b327e: DEC EDI
// 004b327f: MOV AL,byte ptr [ESI]
//   Label: LAB_004b327f
// 004b3281: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x53c] (DATA)
// 004b3283: CMP AL,0x0
// 004b3285: JZ 0x004b3297
//   XREF to: 004b3297 (CONDITIONAL_JUMP)
// 004b3287: MOV AL,byte ptr [ESI + 0x1]
// 004b328a: ADD ESI,0x2
// 004b328d: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x53b] (WRITE)
// 004b3290: ADD EDI,0x2
// 004b3293: CMP AL,0x0
// 004b3295: JNZ 0x004b327f
//   XREF to: 004b327f (CONDITIONAL_JUMP)
// 004b3297: POP EDI
//   Label: LAB_004b3297
// 004b3298: MOV EDI,ESP
// 004b329a: XOR ESI,ESI
// 004b329c: PUSH 0x153
//   Label: LAB_004b329c
// 004b32a1: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004b32a6: PUSH 0x62660e
//   XREF to: 0062660e (DATA)
// 004b32ab: PUSH 0x0
// 004b32ad: PUSH EDI
// 004b32ae: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b32b3: MOV EBX,EAX
// 004b32b5: ADD ESP,0x14
// 004b32b8: TEST EAX,EAX
// 004b32ba: JNZ 0x004b3342
//   XREF to: 004b3342 (CONDITIONAL_JUMP)
// 004b32c0: CALL crt_errno.c_errno_FUN_00601450
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b32c5: CMP dword ptr [EAX],0x6
// 004b32c8: JZ 0x004b332a
//   XREF to: 004b332a (CONDITIONAL_JUMP)
// 004b32ca: XOR EAX,EAX
//   Label: LAB_004b32ca
// 004b32cc: MOV EBX,EAX
//   Label: LAB_004b32cc
// 004b32ce: TEST EAX,EAX
// 004b32d0: JNZ 0x004b335b
//   XREF to: 004b335b (CONDITIONAL_JUMP)
// 004b32d6: TEST EBX,EBX
//   Label: LAB_004b32d6
// 004b32d8: JZ 0x004b32ef
//   XREF to: 004b32ef (CONDITIONAL_JUMP)
// 004b32da: PUSH 0xc4
// 004b32df: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b32e4: PUSH EBX
// 004b32e5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b32ea: ADD ESP,0xc
// 004b32ed: XOR EBX,EBX
// 004b32ef: MOV EAX,ESP
//   Label: LAB_004b32ef
// 004b32f1: PUSH EAX
// 004b32f2: PUSH 0x626611
//   XREF to: 00626611 (DATA)
// 004b32f7: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b32fd: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b32fe: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   Label: LAB_004b32fe
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b3303: ADD ESP,0xc
// 004b3306: TEST EBX,EBX
//   Label: LAB_004b3306
// 004b3308: JZ 0x004b331d
//   XREF to: 004b331d (CONDITIONAL_JUMP)
// 004b330a: PUSH 0xc4
// 004b330f: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b3314: PUSH EBX
// 004b3315: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b331a: ADD ESP,0xc
// 004b331d: XOR EAX,EAX
//   Label: LAB_004b331d
// 004b331f: ADD ESP,0x52c
// 004b3325: POP EBP
// 004b3326: POP EDI
// 004b3327: POP ESI
// 004b3328: POP EBX
// 004b3329: RET
// 004b332a: PUSH 0x1f4
//   Label: LAB_004b332a
// 004b332f: INC ESI
// 004b3330: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004b3337: CMP ESI,0xa
// 004b333a: JL 0x004b329c
//   XREF to: 004b329c (CONDITIONAL_JUMP)
// 004b3340: JMP 0x004b32ca
//   XREF to: 004b32ca (UNCONDITIONAL_JUMP)
// 004b3342: PUSH 0x400
//   Label: LAB_004b3342
// 004b3347: PUSH 0x0
// 004b3349: PUSH 0x0
// 004b334b: PUSH EAX
// 004b334c: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004b3351: ADD ESP,0x10
// 004b3354: MOV EAX,EBX
// 004b3356: JMP 0x004b32cc
//   XREF to: 004b32cc (UNCONDITIONAL_JUMP)
// 004b335b: MOV EAX,ESP
//   Label: LAB_004b335b
// 004b335d: PUSH EAX
// 004b335e: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004b3363: ADD ESP,0x4
// 004b3366: TEST EAX,EAX
// 004b3368: JZ 0x004b32d6
//   XREF to: 004b32d6 (CONDITIONAL_JUMP)
// 004b336e: LEA EDI,[ESP + 0x214]
//   XREF to: Stack[-0x328] (DATA)
// 004b3375: MOV ESI,EBP
// 004b3377: PUSH EDI
// 004b3378: MOV AL,byte ptr [ESI]
//   Label: LAB_004b3378
// 004b337a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x328] (DATA)
// 004b337c: CMP AL,0x0
// 004b337e: JZ 0x004b3390
//   XREF to: 004b3390 (CONDITIONAL_JUMP)
// 004b3380: MOV AL,byte ptr [ESI + 0x1]
// 004b3383: ADD ESI,0x2
// 004b3386: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x327] (WRITE)
// 004b3389: ADD EDI,0x2
// 004b338c: CMP AL,0x0
// 004b338e: JNZ 0x004b3378
//   XREF to: 004b3378 (CONDITIONAL_JUMP)
// 004b3390: POP EDI
//   Label: LAB_004b3390
// 004b3391: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0x328] (DATA)
// 004b3398: PUSH EAX
// 004b3399: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004b339e: ADD ESP,0x4
// 004b33a1: TEST EAX,EAX
// 004b33a3: JZ 0x004b345b
//   XREF to: 004b345b (CONDITIONAL_JUMP)
// 004b33a9: MOV EAX,dword ptr [ESP + 0x418]
//   Label: LAB_004b33a9
//   XREF to: Stack[-0x124] (READ)
// 004b33b0: CMP EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x338] (READ)
// 004b33b7: JNZ 0x004b33e0
//   XREF to: 004b33e0 (CONDITIONAL_JUMP)
// 004b33b9: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x330] (READ)
// 004b33c0: MOV EBP,dword ptr [ESP + 0x420]
//   XREF to: Stack[-0x11c] (READ)
// 004b33c7: ADD EAX,0x2
// 004b33ca: CMP EAX,EBP
// 004b33cc: JC 0x004b33e0
//   XREF to: 004b33e0 (CONDITIONAL_JUMP)
// 004b33ce: MOV EDX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x330] (READ)
// 004b33d5: LEA EAX,[EBP + 0x2]
// 004b33d8: CMP EAX,EDX
// 004b33da: JNC 0x004b34dc
//   XREF to: 004b34dc (CONDITIONAL_JUMP)
// 004b33e0: PUSH 0x0
//   Label: LAB_004b33e0
// 004b33e2: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x328] (DATA)
// 004b33e9: PUSH EAX
// 004b33ea: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004b33ef: ADD ESP,0x8
// 004b33f2: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0x328] (DATA)
// 004b33f9: PUSH EAX
// 004b33fa: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004b33ff: ADD ESP,0x4
// 004b3402: PUSH 0x3c5
// 004b3407: PUSH 0x6266a4
//   XREF to: 006266a4 (DATA)
// 004b340c: PUSH 0x6266b9
//   XREF to: 006266b9 (DATA)
// 004b3411: PUSH 0x0
// 004b3413: LEA EAX,[ESP + 0x224]
//   XREF to: Stack[-0x328] (DATA)
// 004b341a: PUSH EAX
// 004b341b: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b3420: ADD ESP,0x14
// 004b3423: MOV EDI,EAX
// 004b3425: TEST EAX,EAX
// 004b3427: JNZ 0x004b346b
//   XREF to: 004b346b (CONDITIONAL_JUMP)
// 004b3429: TEST EBX,EBX
// 004b342b: JZ 0x004b3442
//   XREF to: 004b3442 (CONDITIONAL_JUMP)
// 004b342d: PUSH 0xc4
// 004b3432: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b3437: PUSH EBX
// 004b3438: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b343d: ADD ESP,0xc
// 004b3440: XOR EBX,EBX
// 004b3442: LEA EAX,[ESP + 0x214]
//   Label: LAB_004b3442
//   XREF to: Stack[-0x328] (DATA)
// 004b3449: PUSH EAX
// 004b344a: PUSH 0x6266bc
//   XREF to: 006266bc (DATA)
// 004b344f: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b3455: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b3456: JMP 0x004b32fe
//   XREF to: 004b32fe (UNCONDITIONAL_JUMP)
// 004b345b: MOV dword ptr [ESP + 0x418],0xffffffff
//   Label: LAB_004b345b
//   XREF to: Stack[-0x124] (WRITE)
// 004b3466: JMP 0x004b33a9
//   XREF to: 004b33a9 (UNCONDITIONAL_JUMP)
// 004b346b: MOV ECX,dword ptr [ESP + 0x204]
//   Label: LAB_004b346b
//   XREF to: Stack[-0x338] (READ)
// 004b3472: PUSH ECX
// 004b3473: LEA ESI,[ESP + 0x218]
//   XREF to: Stack[-0x328] (DATA)
// 004b347a: PUSH ESI
// 004b347b: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x53c] (DATA)
// 004b347f: PUSH ESI
// 004b3480: PUSH EAX
// 004b3481: PUSH EBX
// 004b3482: CALL engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
//   XREF to: 004b2030 (UNCONDITIONAL_CALL)
// 004b3487: ADD ESP,0x14
// 004b348a: MOV ESI,EAX
// 004b348c: TEST EBX,EBX
// 004b348e: JZ 0x004b34a5
//   XREF to: 004b34a5 (CONDITIONAL_JUMP)
// 004b3490: PUSH 0xc4
// 004b3495: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b349a: PUSH EBX
// 004b349b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b34a0: ADD ESP,0xc
// 004b34a3: XOR EBX,EBX
// 004b34a5: TEST EDI,EDI
//   Label: LAB_004b34a5
// 004b34a7: JZ 0x004b34bc
//   XREF to: 004b34bc (CONDITIONAL_JUMP)
// 004b34a9: PUSH 0xc4
// 004b34ae: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b34b3: PUSH EDI
// 004b34b4: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b34b9: ADD ESP,0xc
// 004b34bc: TEST ESI,ESI
//   Label: LAB_004b34bc
// 004b34be: JNZ 0x004b3525
//   XREF to: 004b3525 (CONDITIONAL_JUMP)
// 004b34c0: MOV ESI,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x330] (READ)
// 004b34c7: PUSH ESI
// 004b34c8: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x328] (DATA)
// 004b34cf: PUSH EAX
// 004b34d0: CALL engine_dosio.c_copyFileTimestamp_FUN_00481910
//   XREF to: 00481910 (UNCONDITIONAL_CALL)
// 004b34d5: ADD ESP,0x8
// 004b34d8: TEST EAX,EAX
// 004b34da: JZ 0x004b3539
//   XREF to: 004b3539 (CONDITIONAL_JUMP)
// 004b34dc: TEST EBX,EBX
//   Label: LAB_004b34dc
// 004b34de: JZ 0x004b34f5
//   XREF to: 004b34f5 (CONDITIONAL_JUMP)
// 004b34e0: PUSH 0xc4
// 004b34e5: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b34ea: PUSH EBX
// 004b34eb: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b34f0: ADD ESP,0xc
// 004b34f3: XOR EBX,EBX
// 004b34f5: LEA EAX,[ESP + 0x214]
//   Label: LAB_004b34f5
//   XREF to: Stack[-0x328] (DATA)
// 004b34fc: PUSH EAX
// 004b34fd: PUSH 0x0
// 004b34ff: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004b3504: ADD ESP,0x8
// 004b3507: MOV ESI,EAX
// 004b3509: TEST EAX,EAX
// 004b350b: JL 0x004b3511
//   XREF to: 004b3511 (CONDITIONAL_JUMP)
// 004b350d: TEST AL,0x8
// 004b350f: JZ 0x004b3562
//   XREF to: 004b3562 (CONDITIONAL_JUMP)
// 004b3511: TEST ESI,ESI
//   Label: LAB_004b3511
// 004b3513: JL 0x004b3579
//   XREF to: 004b3579 (CONDITIONAL_JUMP)
// 004b3515: MOV EAX,0x1
// 004b351a: ADD ESP,0x52c
// 004b3520: POP EBP
// 004b3521: POP EDI
// 004b3522: POP ESI
// 004b3523: POP EBX
// 004b3524: RET
// 004b3525: PUSH ESI
//   Label: LAB_004b3525
// 004b3526: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b352b: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b352c: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b3531: ADD ESP,0x8
// 004b3534: JMP 0x004b3306
//   XREF to: 004b3306 (UNCONDITIONAL_JUMP)
// 004b3539: LEA EAX,[ESP + 0x214]
//   Label: LAB_004b3539
//   XREF to: Stack[-0x328] (DATA)
// 004b3540: PUSH EAX
// 004b3541: PUSH 0x626577
//   XREF to: 00626577 (DATA)
// 004b3546: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b354c: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b354d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b3552: ADD ESP,0xc
// 004b3555: XOR EAX,EAX
// 004b3557: ADD ESP,0x52c
// 004b355d: POP EBP
// 004b355e: POP EDI
// 004b355f: POP ESI
// 004b3560: POP EBX
// 004b3561: RET
// 004b3562: OR AL,0x8
//   Label: LAB_004b3562
// 004b3564: PUSH EAX
// 004b3565: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x328] (DATA)
// 004b356c: PUSH EAX
// 004b356d: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004b3572: ADD ESP,0x8
// 004b3575: TEST EAX,EAX
// 004b3577: JNZ 0x004b3511
//   XREF to: 004b3511 (CONDITIONAL_JUMP)
// 004b3579: LEA EAX,[ESP + 0x214]
//   Label: LAB_004b3579
//   XREF to: Stack[-0x328] (DATA)
// 004b3580: PUSH EAX
// 004b3581: PUSH 0x6266cd
//   XREF to: 006266cd (DATA)
// 004b3586: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b358c: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004b358d: JMP 0x004b32fe
//   XREF to: 004b32fe (UNCONDITIONAL_JUMP)
