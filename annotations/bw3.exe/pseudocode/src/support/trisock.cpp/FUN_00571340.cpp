// Name: support_trisock.cpp_FUN_00571340
// Address: 00571340
// Address Range: [[00571340, 00571369] [0057142b, 00571486] [00571bb9, 00571d0d]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_00571340(int param_1,char *param_2)

#include "nocturne.h"

uint support_trisock_cpp_FUN_00571340(int param_1,char *param_2)

{
  CSocket *this_ptr;
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  char *pcVar11;
  byte bVar12;
  char acStack_a00 [1024];
  char acStack_600 [648];
  uint auStack_378 [12];
  char acStack_348 [256];
  char acStack_248 [256];
  char acStack_148 [256];
  char acStack_48 [32];
  int iStack_28;
  int iStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  int iStack_18;
  char *pcStack_14;
  
  bVar12 = 0;
  switch(*(int *)(param_1 + 0xd28)) {
  case 1:
    __arrinit(auStack_378,0xc,&g_IpAddrTypeInfo);
    iVar5 = support_trisock_cpp_FUN_00570e20(param_1 + 0xd30,acStack_600);
    pcVar9 = (char *)(param_1 + 0x400);
    if (iVar5 == 2) {
      if (acStack_600[0] != '\0') {
        pcVar11 = acStack_600;
        do {
          cVar1 = *pcVar11;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
      this_ptr = (CSocket *)(param_1 + 0xd2c);
      *(uint *)(param_1 + 0xd28) = 2;
      *(uint *)(param_1 + 0x600) = auStack_378[0];
      support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30(this_ptr);
      support_trisock_cpp_CSocket_createSocket_FUN_0056f900(this_ptr);
      support_trisock_cpp_CSocket_setSocketBlocking_FUN_0056fd60(this_ptr,0);
      support_trisock_cpp_CSocket_bindSocket_FUN_0056f970(this_ptr,0);
      iVar5 = support_trisock_cpp_FUN_0056f9c0(this_ptr,param_1 + 0x600);
      if (iVar5 == 0) {
        *(uint *)(param_1 + 0xd28) = 0xfffffffd;
        _sprintf((char *)(param_1 + 0xa18),"Error connecting socket to %s");
      }
    }
    else if (iVar5 != 1) {
      _sprintf((char *)(param_1 + 0xa18),"DNS error resolving %s")
      ;
      *(uint *)(param_1 + 0xd28) = 0xfffffffe;
    }
    break;
  case 2:
    uVar7 = 4;
    iVar5 = support_trisock_cpp_CSocket_isSocketValid_FUN_0056f960((CSocket *)(param_1 + 0xd2c));
    if (iVar5 != 0) {
      uVar7 = support_trisock_cpp_FUN_0056fa20((CSocket *)(param_1 + 0xd2c));
    }
    if ((uVar7 & 4) == 0) {
      if ((uVar7 & 2) != 0) {
        *(uint *)(param_1 + 0xd18) = 0;
        piVar2 = *(int **)(param_1 + 0xd20);
        *(uint *)(param_1 + 0xd28) = 3;
        if ((piVar2 != (int *)0x0) && (iVar5 = (**(code **)(*piVar2 + 0x18))(piVar2), -1 < iVar5)) {
          (**(code **)(**(int **)(param_1 + 0xd20) + 0x14))(*(int **)(param_1 + 0xd20),0,2);
          uVar3 = (**(code **)(**(int **)(param_1 + 0xd20) + 0x18))(*(int **)(param_1 + 0xd20));
          *(uint *)(param_1 + 0xd18) = uVar3;
          (**(code **)(**(int **)(param_1 + 0xd20) + 0x14))(*(int **)(param_1 + 0xd20),iVar5,0);
          if (*(int *)(param_1 + 0xd18) < 0) {
            *(uint *)(param_1 + 0xd18) = 0;
          }
          else {
            *(int *)(param_1 + 0xd18) = *(int *)(param_1 + 0xd18) - iVar5;
          }
        }
        puVar10 = &DAT_00606980;
        pcVar9 = acStack_248;
        for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(uint *)pcVar9 = *puVar10;
          puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
          pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
        }
        engine_dosio_cpp_splitPath_FUN_00465e50
                  ((char *)(param_1 + 0x500),(char *)0x0,(char *)0x0,(char *)0x0,acStack_348);
        iVar5 = _stricmp(acStack_348,&DAT_005d6bfe);
        if ((iVar5 == 0) ||
           (iVar5 = _stricmp(acStack_348,&DAT_005d6c03), iVar5 == 0)) {
          pcVar11 = "Cache-Control: no-cache\r\n";
          pcVar9 = acStack_248;
          do {
            cVar1 = *pcVar11;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
        }
        if (*(int *)(param_1 + 0xd18) < 1) {
          _sprintf(acStack_a00,"GET %s HTTP/1.0\r\nHost: %s:%d\r\n%sConnection: close\r\n\r\n");
        }
        else {
          _sprintf(acStack_a00,"POST %s HTTP/1.0\r\nHost: %s:%d\r\n%sContent-length: %d\r\n\r\n");
        }
        uVar7 = 0xffffffff;
        pcVar9 = acStack_a00;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        iVar5 = support_trisock_cpp_CSocket_sendSocketData_FUN_0056fbb0
                          ((CSocket *)(param_1 + 0xd2c),acStack_a00,~uVar7 - 1,(SNetworkAddr *)0x0);
        if (iVar5 == 0) {
          *(uint *)(param_1 + 0xd28) = 0xfffffffc;
          _sprintf((char *)(param_1 + 0xa18),"Error requesting %s");
        }
      }
    }
    else {
      *(uint *)(param_1 + 0xd28) = 0xfffffffd;
      _sprintf((char *)(param_1 + 0xa18),"Error contacting %s");
    }
    break;
  case 3:
    uVar7 = 4;
    iVar5 = support_trisock_cpp_CSocket_isSocketValid_FUN_0056f960((CSocket *)(param_1 + 0xd2c));
    if (iVar5 != 0) {
      uVar7 = support_trisock_cpp_FUN_0056fa20((CSocket *)(param_1 + 0xd2c));
    }
    if ((uVar7 & 4) == 0) {
      iVar5 = *(int *)(param_1 + 0xd18);
      if (iVar5 < 1) {
        *(byte *)(param_1 + 0x810) = 0;
        *(uint *)(param_1 + 0xd1c) = 0;
        *(uint *)(param_1 + 0xd28) = 4;
      }
      else if ((uVar7 & 2) != 0) {
        iVar4 = 0x200;
        if (iVar5 < 0x200) {
          iVar4 = iVar5;
        }
        iVar5 = (**(code **)(**(int **)(param_1 + 0xd20) + 0x10))
                          (*(int **)(param_1 + 0xd20),(char *)(param_1 + 0x610),iVar4);
        if (iVar5 == iVar4) {
          iVar8 = support_trisock_cpp_CSocket_sendSocketData_FUN_0056fbb0
                            ((CSocket *)(param_1 + 0xd2c),(char *)(param_1 + 0x610),iVar4,
                             (SNetworkAddr *)0x0);
          if (iVar8 == 0) {
            iVar5 = -1;
          }
          else {
            *(int *)(param_1 + 0xd18) = *(int *)(param_1 + 0xd18) - iVar4;
          }
        }
        if (iVar5 != iVar4) {
          *(uint *)(param_1 + 0xd28) = 0xfffffffc;
          _sprintf((char *)(param_1 + 0xa18),"Error requesting %s");
        }
      }
    }
    else {
      *(uint *)(param_1 + 0xd28) = 0xfffffffc;
      _sprintf((char *)(param_1 + 0xa18),"Error requesting %s");
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0xd28) == 4) {
      pcStack_20 = (char *)(param_1 + 0xa18);
      iStack_24 = param_1 + 0x60c;
      pcStack_1c = (char *)(param_1 + 0x81f);
      pcStack_14 = (char *)(param_1 + 0x810);
LAB_0057186b:
      do {
        if (1 < *(int *)(param_1 + 0xd1c)) {
          iVar5 = wincore_winrun_cpp_getTime_FUN_005806a0();
          iStack_18 = param_1 + 0x610;
          iVar4 = 0;
          goto LAB_00571aa8;
        }
        uVar7 = 0xffffffff;
        pcVar9 = pcStack_14;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7 - 1;
        iVar5 = uVar7 + param_1;
        while( true ) {
          do {
            *(byte *)(iVar5 + 0x810) = 0;
            iVar4 = support_trisock_cpp_FUN_00571e50(param_1,0);
            if (iVar4 < 0) goto LAB_0057142b;
          } while (iVar4 == 0xd);
          if (iVar4 == 10) break;
          if (uVar7 < 0x1ff) {
            uVar7 = uVar7 + 1;
            *(char *)(iVar5 + 0x810) = (char)iVar4;
            iVar5 = iVar5 + 1;
          }
        }
        if ((int)uVar7 < 0) break;
        if (*(int *)(param_1 + 0xd1c) == 0) {
          pcVar11 = "Unknown error";
          pcVar9 = acStack_148;
          iStack_28 = -1;
          do {
            cVar1 = *pcVar11;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
          sscanf(pcStack_14,"%*[^ ]%d %255[^\n]");
          if (iStack_28 == -1) {
            _sprintf(pcStack_20,"Invalid HTTP header returned by server");
            *(uint *)(param_1 + 0xd28) = 0xfffffffb;
            break;
          }
          if (399 < iStack_28) {
            _sprintf(pcStack_20,"%d: %s");
            *(uint *)(param_1 + 0xd28) = 0xfffffffb;
            break;
          }
          if (299 < iStack_28) {
            _sprintf(pcStack_20,"Not implemented: %d: %s");
            *(uint *)(param_1 + 0xd28) = 0xfffffffb;
            break;
          }
          *(uint *)(param_1 + 0x60c) = 0xffffffff;
          *(byte *)(param_1 + 0x810) = 0;
          *(uint *)(param_1 + 0xd1c) = 1;
LAB_00571960:
          iVar5 = *(int *)(param_1 + 0xd28);
        }
        else {
          if (*(int *)(param_1 + 0xd1c) != 1) goto LAB_00571960;
          if (*(char *)(param_1 + 0x810) == '\0') {
            *(uint *)(param_1 + 0xd1c) = 2;
            *(uint *)(param_1 + 0x608) = 0;
            if (*(int *)(param_1 + 0xd28) != 4) break;
            goto LAB_0057186b;
          }
          iVar5 = _strnicmp(pcStack_14,"Content-length:",0xf);
          if (iVar5 == 0) {
            sscanf(pcStack_1c,&DAT_005d6d42);
          }
          *(byte *)(param_1 + 0x810) = 0;
          iVar5 = *(int *)(param_1 + 0xd28);
        }
      } while (iVar5 == 4);
    }
  }
LAB_0057142b:
  switch(*(uint *)(param_1 + 0xd28)) {
  case 0:
    *param_2 = '\0';
    return *(uint *)(param_1 + 0xd28);
  case 1:
    _sprintf(param_2,"Looking up %s...");
    return *(uint *)(param_1 + 0xd28);
  case 2:
    support_trisock_cpp_formatSocketAddress_FUN_0056f820
              ((SNetworkAddr *)(param_1 + 0x600),acStack_48);
    _sprintf(param_2,"Contacting %s...");
    return *(uint *)(param_1 + 0xd28);
  case 3:
    _sprintf(param_2,"Requesting %s...");
    return *(uint *)(param_1 + 0xd28);
  case 4:
    iVar5 = -1;
    if (0 < *(int *)(param_1 + 0x60c)) {
      iVar5 = (*(int *)(param_1 + 0x608) * 100) / *(int *)(param_1 + 0x60c);
    }
    if ((0 < iVar5) && (iVar5 < 100)) {
      _sprintf(param_2,"Received %d%% of %s... ");
      return *(uint *)(param_1 + 0xd28);
    }
    _sprintf(param_2,"Receiving %s...");
    return *(uint *)(param_1 + 0xd28);
  case 5:
    pcVar9 = &DAT_005d6da0;
    break;
  default:
    support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30((CSocket *)(param_1 + 0xd2c));
    pcVar9 = (char *)(param_1 + 0xa18);
  }
  do {
    cVar1 = *pcVar9;
    *param_2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
  } while (cVar1 != '\0');
  return *(uint *)(param_1 + 0xd28);
LAB_00571aa8:
  if (*(int *)(param_1 + 0xa10) < *(int *)(param_1 + 0xa14)) {
    iVar8 = *(int *)(param_1 + 0xa14) - *(int *)(param_1 + 0xa10);
    if ((-1 < *(int *)(param_1 + 0x60c)) &&
       (iVar6 = *(int *)(param_1 + 0x60c) - *(int *)(param_1 + 0x608), iVar6 < iVar8)) {
      iVar8 = iVar6;
    }
    if (0 < iVar8) {
      iVar6 = (**(code **)(**(int **)(param_1 + 0xd24) + 8))
                        (*(int **)(param_1 + 0xd24),iStack_18 + *(int *)(param_1 + 0xa10),iVar8);
      if (iVar6 != iVar8) {
        *(uint *)(param_1 + 0xd28) = 0xfffffffa;
        support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30((CSocket *)(param_1 + 0xd2c));
        goto LAB_0057142b;
      }
      *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + iVar8;
      *(int *)(param_1 + 0xa10) = *(int *)(param_1 + 0xa10) + iVar8;
    }
  }
  if (((-1 < *(int *)(param_1 + 0x60c)) && (*(int *)(param_1 + 0x60c) <= *(int *)(param_1 + 0x608)))
     || (iVar8 = support_trisock_cpp_FUN_00571d80(param_1,*(int *)(param_1 + 0x60c) < 0),
        iVar8 == -2)) {
    *(uint *)(param_1 + 0xd28) = 5;
    support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30((CSocket *)(param_1 + 0xd2c));
    goto LAB_0057142b;
  }
  iVar6 = wincore_winrun_cpp_getTime_FUN_005806a0();
  if (0 < iVar6 - iVar5) {
    iVar4 = iVar4 + (iVar6 - iVar5);
  }
  if ((0x1cccc < iVar4) || ((iVar5 = iVar6, iVar8 < 0 && (iVar8 != -4)))) goto LAB_0057142b;
  goto LAB_00571aa8;
}
