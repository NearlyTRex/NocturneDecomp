// Name: crt_stdio.c__openfile_FUN_10006a30
// Address: 10006a30
// Address Range: [[10006a30, 10006bca]]
// Convention: __cdecl
// Signature: FILE * __cdecl crt_stdio_c__openfile_FUN_10006a30(char *filename,char *mode,int sh_flag,FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FILE * __cdecl _openfile(char *filename,char *mode,int sh_flag,FILE *file)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  uint oflag;
  uint uVar7;
  
  bVar3 = false;
  cVar1 = *mode;
  bVar4 = false;
  if (cVar1 == 'a') {
    oflag = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      oflag = 0;
      uVar7 = DAT_1001768c | 1;
      goto LAB_10006a7d;
    }
    if (cVar1 != 'w') {
      return (FILE *)0x0;
    }
    oflag = 0x301;
  }
  uVar7 = DAT_1001768c | 2;
LAB_10006a7d:
  bVar2 = true;
  pcVar6 = mode + 1;
  cVar1 = *pcVar6;
  while ((cVar1 != '\0' && (bVar2))) {
    switch(*pcVar6) {
    case '+':
      if ((oflag & 2) == 0) {
        oflag = oflag & 0xfffffffe | 2;
        uVar7 = uVar7 & 0xfffffffc | 0x80;
      }
      else {
        bVar2 = false;
      }
      break;
    default:
      bVar2 = false;
      break;
    case 'D':
      if ((oflag & 0x40) == 0) {
        oflag = oflag | 0x40;
      }
      else {
        bVar2 = false;
      }
      break;
    case 'R':
      if (bVar3) {
        bVar2 = false;
      }
      else {
        bVar3 = true;
        oflag = oflag | 0x10;
      }
      break;
    case 'S':
      if (bVar3) {
        bVar2 = false;
      }
      else {
        bVar3 = true;
        oflag = oflag | 0x20;
      }
      break;
    case 'T':
      if ((oflag & 0x1000) == 0) {
        oflag = oflag | 0x1000;
      }
      else {
        bVar2 = false;
      }
      break;
    case 'b':
      if ((oflag & 0xc000) == 0) {
        oflag = oflag | 0x8000;
      }
      else {
        bVar2 = false;
      }
      break;
    case 'c':
      if (bVar4) {
        bVar2 = false;
      }
      else {
        bVar4 = true;
        uVar7 = uVar7 | 0x4000;
      }
      break;
    case 'n':
      if (bVar4) {
        bVar2 = false;
      }
      else {
        bVar4 = true;
        uVar7 = uVar7 & 0xffffbfff;
      }
      break;
    case 't':
      if ((oflag & 0xc000) == 0) {
        oflag = oflag | 0x4000;
      }
      else {
        bVar2 = false;
      }
    }
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  iVar5 = _sopen(filename,oflag,sh_flag,0x1a4);
  if (-1 < iVar5) {
    _DAT_10017308 = _DAT_10017308 + 1;
    file->_flag = uVar7;
    file->_cnt = 0;
    file->_ptr = (char *)0x0;
    file->_base = (char *)0x0;
    file->_tmpfname = (char *)0x0;
    file->_file = iVar5;
    return file;
  }
  return (FILE *)0x0;
}
