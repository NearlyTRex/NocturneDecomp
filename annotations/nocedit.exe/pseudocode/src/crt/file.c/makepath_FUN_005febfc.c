// Name: crt_file.c_makepath_FUN_005febfc
// Address: 005febfc
// Address Range: [[005febfc, 005fedcf]]
// Convention: __cdecl
// Signature: void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, char * extension)

#include "nocturne.h"

void __cdecl
crt_file_c_makepath_FUN_005febfc
          (char *path_buffer,char *drive,char *directory,char *filename,char *extension)

{
  char cVar1;
  wchar_t wVar2;
  ushort extraout_var;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  ushort extraout_var_00;
  ushort extraout_var_01;
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
      in_stack_ffffffcc = (wchar_t *)CONCAT22 /* combine 2-byte values */(extraout_var,wVar2);
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
    if (((wchar_t *)CONCAT22 /* combine 2-byte values */(extraout_var_00,wVar2) != unaff_EBP) &&
       ((wchar_t *)(uint)(byte)*path_buffer == unaff_EBP)) {
      path_buffer = (char *)((byte *)path_buffer + 1);
    }
    while (*in_stack_00000018 != '\0') {
      wVar2 = crt_string_c_mbtowc_peek_FUN_006059e0(in_stack_00000018);
      wVar2 = crt_file_c_normalize_path_separator_FUN_005febe0(wVar2,unaff_EBP);
      unaff_EBP = (wchar_t *)CONCAT22 /* combine 2-byte values */(extraout_var_01,wVar2);
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
