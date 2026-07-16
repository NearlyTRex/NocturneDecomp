// Name: crt_time.c__expand_locale_picture_FUN_1000f3c0
// Address: 1000f3c0
// Address Range: [[1000f3c0, 1000f630]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c__expand_locale_picture_FUN_1000f3c0(char *picture,uint flags,char **buf,size_t *count)

#include "nocturne.h"

void __cdecl _expand_locale_picture(char *picture,uint flags,char **buf,size_t *count)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uchar local_9;
  
  bVar1 = *picture;
  do {
    if ((bVar1 == 0) || (*count == 0)) {
      return;
    }
    local_9 = '\0';
    DAT_10018214 = 0;
    uVar5 = 0;
    pbVar2 = (byte *)(picture + 1);
    do {
      pbVar6 = pbVar2;
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
      pbVar2 = pbVar6 + 1;
    } while (*pbVar6 == *picture);
    switch(*picture) {
    case '\'':
      if ((uVar5 & 1) == 0) {
        pbVar6 = (byte *)(picture + uVar5);
      }
      else {
        pbVar6 = (byte *)(picture + uVar5);
        if (*pbVar6 == 0) {
          DAT_10018214 = 0;
          return;
        }
        do {
          if (*count == 0) break;
          bVar1 = *pbVar6;
          if (bVar1 == 0x27) {
            pbVar6 = pbVar6 + 1;
            break;
          }
          if ((PTR_DAT_10017480[(uint)bVar1 * 2 + 1] & 0x80) != 0) {
            pbVar6 = pbVar6 + 1;
            **buf = bVar1;
            *buf = *buf + 1;
            *count = *count - 1;
          }
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          **buf = bVar1;
          *buf = *buf + 1;
          *count = *count - 1;
        } while (*pbVar6 != 0);
      }
      goto LAB_1000f620;
    case 'A':
    case 'a':
      iVar3 = _stricmp(picture,"am/pm");
      if (iVar3 == 0) {
        local_9 = 'p';
        pbVar6 = (byte *)(picture + 5);
      }
      else {
        iVar3 = _stricmp(picture,"a/p");
        if (iVar3 == 0) {
          pbVar6 = (byte *)(picture + 3);
        }
        local_9 = 'p';
      }
      break;
    case 'H':
      if (uVar5 == 1) {
        DAT_10018214 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'H';
      break;
    case 'M':
      switch(uVar4) {
      case 0:
        DAT_10018214 = 1;
      case 1:
        local_9 = 'm';
        break;
      case 2:
        local_9 = 'b';
        break;
      case 3:
        local_9 = 'B';
      }
      break;
    case 'd':
      switch(uVar4) {
      case 0:
        DAT_10018214 = 1;
      case 1:
        local_9 = 'd';
        break;
      case 2:
        local_9 = 'a';
        break;
      case 3:
        local_9 = 'A';
      }
      break;
    case 'h':
      if (uVar5 == 1) {
        DAT_10018214 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'I';
      break;
    case 'm':
      if (uVar5 == 1) {
        DAT_10018214 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'M';
      break;
    case 's':
      if (uVar5 == 1) {
        DAT_10018214 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'S';
      break;
    case 'y':
      if (uVar5 == 2) {
        local_9 = 'y';
      }
      else if (uVar5 == 4) {
        local_9 = 'Y';
      }
    }
    if (local_9 == '\0') {
      if ((PTR_DAT_10017480[(uint)(byte)*picture * 2 + 1] & 0x80) != 0) {
        **buf = *picture;
        *buf = *buf + 1;
        *count = *count - 1;
        picture = picture + 1;
      }
      pbVar6 = (byte *)(picture + 1);
      **buf = *picture;
      *buf = *buf + 1;
      *count = *count - 1;
    }
    else {
      _expandtime(local_9,(_tm *)flags,buf,count);
    }
LAB_1000f620:
    bVar1 = *pbVar6;
    picture = (char *)pbVar6;
  } while( true );
}
