// Name: crt_file.c_makepath_FUN_005febfc
// Address: 005febfc
// Address Range: [[005febfc, 005fedcf]]
// Convention: __cdecl
// Signature: void __cdecl crt_file_c_makepath_FUN_005febfc(char *path_buffer,char *drive,char *directory,char *filename,char *extension)

#include "nocturne.h"

void __cdecl makepath(char *path_buffer,char *drive,char *directory,char *filename,char *extension)

{
  char cVar1;
  wchar_t wVar2;
  int iVar3;
  byte *pbVar4;
  ushort extraout_var;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  wchar_t *pwVar8;
  uint local_18;
  char *local_14;
  
  local_14 = path_buffer;
  local_18 = 0;
  if ((drive != (char *)0x0) && (*drive != '\0')) {
    if ((*drive == '\\') && (pcVar6 = drive, pcVar7 = path_buffer, drive[1] == '\\')) {
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar7[1] = cVar1;
        pcVar6 = pcVar6 + 2;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *drive;
        drive = drive + 1;
      } while (cVar1 != '\0');
      path_buffer = path_buffer + (~uVar5 - 1);
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
      pwVar8 = (wchar_t *)&local_18;
      wVar2 = mbtowc_peek(directory);
      wVar2 = normalize_path_separator(wVar2,pwVar8);
      wchar_to_bytes(wVar2,path_buffer);
      iVar3 = mblen(path_buffer);
      ((byte *)path_buffer)[iVar3] = 0;
      path_buffer = mbtowc_next(path_buffer);
      directory = mbtowc_next(directory);
    } while (*directory != '\0');
    if (local_18 == 0) {
      local_18 = 0x5c;
    }
    pbVar4 = (byte *)mb_get_last_char(local_14,path_buffer);
    if (*pbVar4 == local_18) {
      path_buffer = (char *)((byte *)path_buffer + -1);
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
      path_buffer = (char *)((byte *)path_buffer + 1);
    }
  }
  else {
    wVar2 = mbtowc_peek(filename);
    wVar2 = normalize_path_separator(wVar2,(wchar_t *)&local_18);
    if ((CONCAT22(extraout_var,wVar2) != local_18) && ((byte)*path_buffer == local_18)) {
      path_buffer = (char *)((byte *)path_buffer + 1);
    }
    for (; *filename != '\0'; filename = mbtowc_next(filename)) {
      pwVar8 = (wchar_t *)&local_18;
      wVar2 = mbtowc_peek(filename);
      wVar2 = normalize_path_separator(wVar2,pwVar8);
      wchar_to_bytes(wVar2,path_buffer);
      iVar3 = mblen(path_buffer);
      ((byte *)path_buffer)[iVar3] = 0;
      path_buffer = mbtowc_next(path_buffer);
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
