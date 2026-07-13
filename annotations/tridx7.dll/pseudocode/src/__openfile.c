// Name: __openfile
// Address: 10006a30
// Address Range: [[10006a30, 10006bca]]
// Convention: __cdecl
// Signature: FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  
  bVar3 = false;
  cVar1 = *_Mode;
  bVar4 = false;
  if (cVar1 == 'a') {
    uVar7 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar7 = 0;
      uVar8 = DAT_1001768c | 1;
      goto LAB_10006a7d;
    }
    if (cVar1 != 'w') {
      return (FILE *)0x0;
    }
    uVar7 = 0x301;
  }
  uVar8 = DAT_1001768c | 2;
LAB_10006a7d:
  bVar2 = true;
  pcVar6 = _Mode + 1;
  cVar1 = *pcVar6;
  while ((cVar1 != '\0' && (bVar2))) {
    switch(*pcVar6) {
    case '+':
      if ((uVar7 & 2) == 0) {
        uVar7 = uVar7 & 0xfffffffe | 2;
        uVar8 = uVar8 & 0xfffffffc | 0x80;
      }
      else {
        bVar2 = false;
      }
      break;
    default:
      bVar2 = false;
      break;
    case 'D':
      if ((uVar7 & 0x40) == 0) {
        uVar7 = uVar7 | 0x40;
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
        uVar7 = uVar7 | 0x10;
      }
      break;
    case 'S':
      if (bVar3) {
        bVar2 = false;
      }
      else {
        bVar3 = true;
        uVar7 = uVar7 | 0x20;
      }
      break;
    case 'T':
      if ((uVar7 & 0x1000) == 0) {
        uVar7 = uVar7 | 0x1000;
      }
      else {
        bVar2 = false;
      }
      break;
    case 'b':
      if ((uVar7 & 0xc000) == 0) {
        uVar7 = uVar7 | 0x8000;
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
        uVar8 = uVar8 | 0x4000;
      }
      break;
    case 'n':
      if (bVar4) {
        bVar2 = false;
      }
      else {
        bVar4 = true;
        uVar8 = uVar8 & 0xffffbfff;
      }
      break;
    case 't':
      if ((uVar7 & 0xc000) == 0) {
        uVar7 = uVar7 | 0x4000;
      }
      else {
        bVar2 = false;
      }
    }
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  iVar5 = FUN_100093f0(_Filename,uVar7,_ShFlag,0x1a4);
  if (-1 < iVar5) {
    _DAT_10017308 = _DAT_10017308 + 1;
    _File->_flag = uVar8;
    _File->_cnt = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_tmpfname = (char *)0x0;
    _File->_file = iVar5;
    return _File;
  }
  return (FILE *)0x0;
}
