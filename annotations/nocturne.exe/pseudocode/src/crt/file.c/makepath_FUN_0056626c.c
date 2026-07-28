// Name: crt_file.c_makepath_FUN_0056626c
// Address: 0056626c
// Address Range: [[0056626c, 0056643f]]
// Convention: __cdecl
// Signature: void __cdecl crt_file_c_makepath_FUN_0056626c(char *path_buffer,char *drive,char *directory,char *filename,char *extension)

#include "nocturne.h"

void __cdecl makepath(char *path_buffer,char *drive,char *directory,char *filename,char *extension)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  uint local_18;
  char *local_14;
  
  local_14 = path_buffer;
  local_18 = 0;
  if ((drive != (char *)0x0) && (*drive != '\0')) {
    if ((*drive == '\\') && (pcVar5 = drive, pcVar6 = path_buffer, drive[1] == '\\')) {
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar6[1] = cVar1;
        pcVar5 = pcVar5 + 2;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      uVar4 = 0xffffffff;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *drive;
        drive = drive + 1;
      } while (cVar1 != '\0');
      path_buffer = path_buffer + (~uVar4 - 1);
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
      puVar7 = &local_18;
      iVar2 = mbtowc_peek(directory);
      iVar2 = normalize_path_separator(iVar2,(int *)puVar7);
      wchar_to_bytes((wchar_t)iVar2,path_buffer);
      iVar2 = mblen(path_buffer);
      path_buffer[iVar2] = 0;
      path_buffer = (char *)mbtowc_next(path_buffer);
      directory = (char *)mbtowc_next(directory);
    } while (*directory != '\0');
    if (local_18 == 0) {
      local_18 = 0x5c;
    }
    pbVar3 = (byte *)mb_get_last_char(local_14,path_buffer);
    if (*pbVar3 == local_18) {
      path_buffer = path_buffer + -1;
    }
    else {
      *path_buffer = (byte)local_18;
    }
  }
  if (local_18 == 0) {
    local_18 = 0x5c;
  }
  if (filename == (char *)0x0) {
    if ((byte)*path_buffer == local_18) {
      path_buffer = path_buffer + 1;
    }
  }
  else {
    iVar2 = mbtowc_peek(filename);
    uVar4 = normalize_path_separator(iVar2,(int *)&local_18);
    if ((uVar4 != local_18) && ((byte)*path_buffer == local_18)) {
      path_buffer = path_buffer + 1;
    }
    for (; *filename != '\0'; filename = (char *)mbtowc_next(filename)) {
      puVar7 = &local_18;
      iVar2 = mbtowc_peek(filename);
      iVar2 = normalize_path_separator(iVar2,(int *)puVar7);
      wchar_to_bytes((wchar_t)iVar2,path_buffer);
      iVar2 = mblen(path_buffer);
      path_buffer[iVar2] = 0;
      path_buffer = (char *)mbtowc_next(path_buffer);
    }
  }
  if ((extension != (char *)0x0) && (*extension != '\0')) {
    if (*extension != '.') {
      *path_buffer = 0x2e;
      path_buffer = path_buffer + 1;
    }
    for (; *extension != 0; extension = extension + 1) {
      *path_buffer = *extension;
      path_buffer = path_buffer + 1;
    }
  }
  *path_buffer = 0;
  return;
}
