// Name: crt_file.c_makepath_FUN_005febfc
// Address: 005febfc
// Address Range: [[005febfc, 005fedcf]]
// Convention: __cdecl
// Signature: void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, char * extension)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040f5ef [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50 (0047ca50) at 0047cac7 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 0047976e [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047db3f [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bda9f [UNCONDITIONAL_CALL]
//   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 (004bd750) at 004bd82b [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_005235b0 (005235b0) at 005235cf [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190 (0053d190) at 0053d1dd [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563546 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 005988df [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589530 (00589530) at 005895d2 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005896b0 (005896b0) at 00589724 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b8e0 (0058b8e0) at 0058b983 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c450 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e0b0 (0058e0b0) at 0058e182 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592e6c [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f617 [UNCONDITIONAL_CALL]
//   engine_dosio.c_makePath_FUN_00481f50 (00481f50) at 00481f6c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770 (0051b770) at 0051b7c7 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0 (0051adf0) at 0051af67 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60 (0051aa60) at 0051ac50 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad067 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad970 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_file.c_normalize_path_separator_FUN_005febe0
//   crt_locale.c_mblen_FUN_00605a40
//   crt_locale.c_wchar_to_bytes_FUN_00605a20
//   crt_string.c_mb_get_last_char_FUN_00605aa0
//   crt_string.c_mbtowc_next_FUN_00605a70
//   crt_string.c_mbtowc_peek_FUN_006059e0

#include "nocturne.h"

void __cdecl
crt_file_c_makepath_FUN_005febfc
          (char *path_buffer,char *drive,char *directory,char *filename,char *extension)

{
  char cVar1;
  wchar_t wVar2;
  undefined2 extraout_var;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  wchar_t *unaff_EBP;
  char *pcVar7;
  char *in_stack_00000018;
  wchar_t *in_stack_ffffffcc;
  char *start;
  
  start = (char *)0x0;
  if ((drive != (char *)0x0) && (*drive != '\0')) {
    if ((*drive == '\\') && (pcVar4 = drive, pcVar7 = path_buffer, drive[1] == '\\')) {
      do {
        cVar1 = *pcVar4;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar7[1] = cVar1;
        pcVar4 = pcVar4 + 2;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      uVar6 = 0xffffffff;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *drive;
        drive = drive + 1;
      } while (cVar1 != '\0');
      path_buffer = path_buffer + (~uVar6 - 1);
    }
    else {
      *path_buffer = *drive;
      path_buffer[1] = ':';
      path_buffer = path_buffer + 2;
    }
  }
  *path_buffer = 0;
  if ((directory != (char *)0x0) && (*directory != '\0')) {
    do {
      wVar2 = crt_string_c_mbtowc_peek_FUN_006059e0(directory);
      wVar2 = crt_file_c_normalize_path_separator_FUN_005febe0(wVar2,in_stack_ffffffcc);
      in_stack_ffffffcc = (wchar_t *)CONCAT22(extraout_var,wVar2);
      crt_locale_c_wchar_to_bytes_FUN_00605a20(wVar2,path_buffer);
      iVar3 = crt_locale_c_mblen_FUN_00605a40(path_buffer);
      ((byte *)path_buffer)[iVar3] = 0;
      path_buffer = crt_string_c_mbtowc_next_FUN_00605a70(path_buffer);
      pcVar4 = crt_string_c_mbtowc_next_FUN_00605a70(directory);
    } while (*pcVar4 != '\0');
    pbVar5 = (byte *)crt_string_c_mb_get_last_char_FUN_00605aa0(start,path_buffer);
    if ((char *)(uint)*pbVar5 == start) {
      path_buffer = (char *)((byte *)path_buffer + -1);
    }
    else {
      *path_buffer = (byte)start;
    }
  }
  if (start == (char *)0x0) {
    start = (char *)0x5c;
  }
  if (filename == (char *)0x0) {
    if ((char *)(uint)(byte)*path_buffer == start) {
      path_buffer = (char *)((byte *)path_buffer + 1);
    }
  }
  else {
    wVar2 = crt_string_c_mbtowc_peek_FUN_006059e0(filename);
    wVar2 = crt_file_c_normalize_path_separator_FUN_005febe0(wVar2,(wchar_t *)&stack0xffffffec);
    if (((wchar_t *)CONCAT22(extraout_var_00,wVar2) != unaff_EBP) &&
       ((wchar_t *)(uint)(byte)*path_buffer == unaff_EBP)) {
      path_buffer = (char *)((byte *)path_buffer + 1);
    }
    while (*in_stack_00000018 != '\0') {
      wVar2 = crt_string_c_mbtowc_peek_FUN_006059e0(in_stack_00000018);
      wVar2 = crt_file_c_normalize_path_separator_FUN_005febe0(wVar2,unaff_EBP);
      unaff_EBP = (wchar_t *)CONCAT22(extraout_var_01,wVar2);
      crt_locale_c_wchar_to_bytes_FUN_00605a20(wVar2,path_buffer);
      iVar3 = crt_locale_c_mblen_FUN_00605a40(path_buffer);
      ((byte *)path_buffer)[iVar3] = 0;
      path_buffer = crt_string_c_mbtowc_next_FUN_00605a70(path_buffer);
      crt_string_c_mbtowc_next_FUN_00605a70(in_stack_00000018);
    }
  }
  if ((extension != (char *)0x0) && (*extension != '\0')) {
    if (*extension != '.') {
      *path_buffer = 0x2e;
      path_buffer = (char *)((byte *)path_buffer + 1);
    }
    for (; *extension != 0; extension = (char *)((byte *)extension + 1)) {
      *path_buffer = *extension;
      path_buffer = (char *)((byte *)path_buffer + 1);
    }
  }
  *path_buffer = 0;
  return;
}


// Assembly code:
// 005febfc: PUSH EBX
//   Label: crt_file.c_makepath_FUN_005febfc
// 005febfd: PUSH ESI
// 005febfe: PUSH EDI
// 005febff: PUSH EBP
// 005fec00: SUB ESP,0x8
// 005fec03: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005fec07: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005fec0b: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 005fec0f: XOR ECX,ECX
// 005fec11: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005fec15: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x18] (DATA)
// 005fec18: TEST EDX,EDX
// 005fec1a: JZ 0x005fec6a
//   XREF to: 005fec6a (CONDITIONAL_JUMP)
// 005fec1c: MOV AH,byte ptr [EDX]
// 005fec1e: TEST AH,AH
// 005fec20: JZ 0x005fec6a
//   XREF to: 005fec6a (CONDITIONAL_JUMP)
// 005fec22: CMP AH,0x5c
// 005fec25: JNZ 0x005fec60
//   XREF to: 005fec60 (CONDITIONAL_JUMP)
// 005fec27: CMP AH,byte ptr [EDX + 0x1]
// 005fec2a: JNZ 0x005fec60
//   XREF to: 005fec60 (CONDITIONAL_JUMP)
// 005fec2c: MOV ESI,EDX
// 005fec2e: MOV EDI,EBX
// 005fec30: PUSH EDI
// 005fec31: MOV AL,byte ptr [ESI]
//   Label: LAB_005fec31
// 005fec33: MOV byte ptr [EDI],AL
// 005fec35: CMP AL,0x0
// 005fec37: JZ 0x005fec49
//   XREF to: 005fec49 (CONDITIONAL_JUMP)
// 005fec39: MOV AL,byte ptr [ESI + 0x1]
// 005fec3c: ADD ESI,0x2
// 005fec3f: MOV byte ptr [EDI + 0x1],AL
// 005fec42: ADD EDI,0x2
// 005fec45: CMP AL,0x0
// 005fec47: JNZ 0x005fec31
//   XREF to: 005fec31 (CONDITIONAL_JUMP)
// 005fec49: POP EDI
//   Label: LAB_005fec49
// 005fec4a: MOV EDI,EDX
// 005fec4c: PUSH ES
// 005fec4d: MOV AX,DS
// 005fec4f: MOV ES,AX
// 005fec51: SUB ECX,ECX
// 005fec53: DEC ECX
// 005fec54: XOR EAX,EAX
// 005fec56: SCASB.REPNE ES:EDI
// 005fec58: NOT ECX
// 005fec5a: DEC ECX
// 005fec5b: POP ES
// 005fec5c: ADD EBX,ECX
// 005fec5e: JMP 0x005fec6a
//   XREF to: 005fec6a (UNCONDITIONAL_JUMP)
// 005fec60: INC EBX
//   Label: LAB_005fec60
// 005fec61: MOV AL,byte ptr [EDX]
// 005fec63: MOV byte ptr [EBX + -0x1],AL
// 005fec66: MOV byte ptr [EBX],0x3a
// 005fec69: INC EBX
// 005fec6a: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_005fec6a
//   XREF to: Stack[0xc] (READ)
// 005fec6e: MOV byte ptr [EBX],0x0
// 005fec71: TEST ESI,ESI
// 005fec73: JZ 0x005fed01
//   XREF to: 005fed01 (CONDITIONAL_JUMP)
// 005fec79: CMP byte ptr [ESI],0x0
// 005fec7c: JZ 0x005fed01
//   XREF to: 005fed01 (CONDITIONAL_JUMP)
// 005fec82: MOV EAX,ESP
//   Label: LAB_005fec82
// 005fec84: PUSH EAX
// 005fec85: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005fec89: PUSH EDI
// 005fec8a: CALL crt_string.c_mbtowc_peek_FUN_006059e0
//   XREF to: 006059e0 (UNCONDITIONAL_CALL)
// 005fec8f: ADD ESP,0x4
// 005fec92: PUSH EAX
// 005fec93: CALL crt_file.c_normalize_path_separator_FUN_005febe0
//   XREF to: 005febe0 (UNCONDITIONAL_CALL)
// 005fec98: ADD ESP,0x8
// 005fec9b: PUSH EBX
// 005fec9c: PUSH EAX
// 005fec9d: CALL crt_locale.c_wchar_to_bytes_FUN_00605a20
//   XREF to: 00605a20 (UNCONDITIONAL_CALL)
// 005feca2: ADD ESP,0x8
// 005feca5: PUSH EBX
// 005feca6: CALL crt_locale.c_mblen_FUN_00605a40
//   XREF to: 00605a40 (UNCONDITIONAL_CALL)
// 005fecab: ADD ESP,0x4
// 005fecae: PUSH EBX
// 005fecaf: MOV byte ptr [EBX + EAX*0x1],0x0
// 005fecb3: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 005fecb8: ADD ESP,0x4
// 005fecbb: PUSH EDI
// 005fecbc: MOV EBX,EAX
// 005fecbe: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 005fecc3: ADD ESP,0x4
// 005fecc6: MOV DH,byte ptr [EAX]
// 005fecc8: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[0xc] (WRITE)
// 005feccc: TEST DH,DH
// 005fecce: JNZ 0x005fec82
//   XREF to: 005fec82 (CONDITIONAL_JUMP)
// 005fecd0: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x18] (DATA)
// 005fecd4: JNZ 0x005fecdd
//   XREF to: 005fecdd (CONDITIONAL_JUMP)
// 005fecd6: MOV dword ptr [ESP],0x5c
//   XREF to: Stack[-0x18] (DATA)
// 005fecdd: PUSH EBX
//   Label: LAB_005fecdd
// 005fecde: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 005fece2: PUSH ESI
// 005fece3: CALL crt_string.c_mb_get_last_char_FUN_00605aa0
//   XREF to: 00605aa0 (UNCONDITIONAL_CALL)
// 005fece8: ADD ESP,0x8
// 005feceb: MOV AL,byte ptr [EAX]
// 005feced: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005fecf0: AND EAX,0xff
// 005fecf5: CMP EAX,EDI
// 005fecf7: JNZ 0x005fecfc
//   XREF to: 005fecfc (CONDITIONAL_JUMP)
// 005fecf9: DEC EBX
// 005fecfa: JMP 0x005fed01
//   XREF to: 005fed01 (UNCONDITIONAL_JUMP)
// 005fecfc: MOV AL,byte ptr [ESP]
//   Label: LAB_005fecfc
//   XREF to: Stack[-0x18] (DATA)
// 005fecff: MOV byte ptr [EBX],AL
// 005fed01: CMP dword ptr [ESP],0x0
//   Label: LAB_005fed01
//   XREF to: Stack[-0x18] (DATA)
// 005fed05: JNZ 0x005fed0e
//   XREF to: 005fed0e (CONDITIONAL_JUMP)
// 005fed07: MOV dword ptr [ESP],0x5c
//   XREF to: Stack[-0x18] (DATA)
// 005fed0e: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_005fed0e
//   XREF to: Stack[0x10] (READ)
// 005fed12: LEA ESI,[EBX + 0x1]
// 005fed15: TEST ECX,ECX
// 005fed17: JZ 0x005fed96
//   XREF to: 005fed96 (CONDITIONAL_JUMP)
// 005fed1d: PUSH ECX
// 005fed1e: CALL crt_string.c_mbtowc_peek_FUN_006059e0
//   XREF to: 006059e0 (UNCONDITIONAL_CALL)
// 005fed23: ADD ESP,0x4
// 005fed26: MOV EDX,ESP
// 005fed28: PUSH EDX
// 005fed29: PUSH EAX
// 005fed2a: CALL crt_file.c_normalize_path_separator_FUN_005febe0
//   XREF to: 005febe0 (UNCONDITIONAL_CALL)
// 005fed2f: ADD ESP,0x8
// 005fed32: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
//   XREF to: Stack[-0x18] (DATA)
// 005fed35: CMP EAX,EDX
// 005fed37: JZ 0x005fed43
//   XREF to: 005fed43 (CONDITIONAL_JUMP)
// 005fed39: XOR EAX,EAX
// 005fed3b: MOV AL,byte ptr [EBX]
// 005fed3d: CMP EAX,EDX
// 005fed3f: JNZ 0x005fed43
//   XREF to: 005fed43 (CONDITIONAL_JUMP)
// 005fed41: MOV EBX,ESI
// 005fed43: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_005fed43
//   XREF to: Stack[0x10] (READ)
// 005fed47: CMP byte ptr [EAX],0x0
// 005fed4a: JZ 0x005feda3
//   XREF to: 005feda3 (CONDITIONAL_JUMP)
// 005fed4c: MOV EAX,ESP
// 005fed4e: PUSH EAX
// 005fed4f: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 005fed53: PUSH ESI
// 005fed54: CALL crt_string.c_mbtowc_peek_FUN_006059e0
//   XREF to: 006059e0 (UNCONDITIONAL_CALL)
// 005fed59: ADD ESP,0x4
// 005fed5c: PUSH EAX
// 005fed5d: CALL crt_file.c_normalize_path_separator_FUN_005febe0
//   XREF to: 005febe0 (UNCONDITIONAL_CALL)
// 005fed62: ADD ESP,0x8
// 005fed65: PUSH EBX
// 005fed66: PUSH EAX
// 005fed67: CALL crt_locale.c_wchar_to_bytes_FUN_00605a20
//   XREF to: 00605a20 (UNCONDITIONAL_CALL)
// 005fed6c: ADD ESP,0x8
// 005fed6f: PUSH EBX
// 005fed70: CALL crt_locale.c_mblen_FUN_00605a40
//   XREF to: 00605a40 (UNCONDITIONAL_CALL)
// 005fed75: ADD ESP,0x4
// 005fed78: PUSH EBX
// 005fed79: MOV byte ptr [EBX + EAX*0x1],0x0
// 005fed7d: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 005fed82: ADD ESP,0x4
// 005fed85: PUSH ESI
// 005fed86: MOV EBX,EAX
// 005fed88: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 005fed8d: ADD ESP,0x4
// 005fed90: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[0x10] (WRITE)
// 005fed94: JMP 0x005fed43
//   XREF to: 005fed43 (UNCONDITIONAL_JUMP)
// 005fed96: XOR EAX,EAX
//   Label: LAB_005fed96
// 005fed98: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005fed9b: MOV AL,byte ptr [EBX]
// 005fed9d: CMP EAX,EDI
// 005fed9f: JNZ 0x005feda3
//   XREF to: 005feda3 (CONDITIONAL_JUMP)
// 005feda1: MOV EBX,ESI
// 005feda3: TEST EBP,EBP
//   Label: LAB_005feda3
// 005feda5: JZ 0x005fedc5
//   XREF to: 005fedc5 (CONDITIONAL_JUMP)
// 005feda7: MOV CH,byte ptr [EBP]
// 005fedaa: TEST CH,CH
// 005fedac: JZ 0x005fedc5
//   XREF to: 005fedc5 (CONDITIONAL_JUMP)
// 005fedae: CMP CH,0x2e
// 005fedb1: JZ 0x005fedb7
//   XREF to: 005fedb7 (CONDITIONAL_JUMP)
// 005fedb3: MOV byte ptr [EBX],0x2e
// 005fedb6: INC EBX
// 005fedb7: MOV AH,byte ptr [EBP]
//   Label: LAB_005fedb7
// 005fedba: TEST AH,AH
// 005fedbc: JZ 0x005fedc5
//   XREF to: 005fedc5 (CONDITIONAL_JUMP)
// 005fedbe: INC EBX
// 005fedbf: INC EBP
// 005fedc0: MOV byte ptr [EBX + -0x1],AH
// 005fedc3: JMP 0x005fedb7
//   XREF to: 005fedb7 (UNCONDITIONAL_JUMP)
// 005fedc5: MOV byte ptr [EBX],0x0
//   Label: LAB_005fedc5
// 005fedc8: ADD ESP,0x8
// 005fedcb: POP EBP
// 005fedcc: POP EDI
// 005fedcd: POP ESI
// 005fedce: POP EBX
// 005fedcf: RET
