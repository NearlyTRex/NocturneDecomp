// Name: support_trisock.cpp_FUN_0057ad10
// Address: 0057ad10
// Address Range: [[0057ad10, 0057ad39] [0057adfb, 0057ae56] [0057b4ad, 0057b601]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_0057ad10(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint support_trisock_cpp_FUN_0057ad10(int param_1,char *param_2)

{
  CSocket *this_ptr;
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  char acStack_808 [1024];
  char acStack_408 [648];
  uint auStack_180 [12];
  char acStack_150 [256];
  char acStack_50 [32];
  int iStack_30;
  CSocket *pCStack_2c;
  uint uStack_28;
  char *pcStack_24;
  uint uStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  int iStack_14;
  
  bVar10 = 0;
  switch(*(int *)(param_1 + 0xd28)) {
  case 1:
    __arrinit(auStack_180,0xc,&g_IpAddrTypeInfo);
    iVar6 = support_trisock_cpp_FUN_0057a7c0(param_1 + 0xd30,acStack_408);
    pcVar8 = (char *)(param_1 + 0x400);
    if (iVar6 == 2) {
      if (acStack_408[0] != '\0') {
        pcVar9 = acStack_408;
        do {
          cVar1 = *pcVar9;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      this_ptr = (CSocket *)(param_1 + 0xd2c);
      *(uint *)(param_1 + 0xd28) = 2;
      *(uint *)(param_1 + 0x600) = auStack_180[0];
      support_trisock_cpp_CSocket_closeSocket_FUN_00579360(this_ptr);
      support_trisock_cpp_CSocket_createSocket_FUN_00579030(this_ptr);
      support_trisock_cpp_CSocket_setSocketBlocking_FUN_00579490(this_ptr,0);
      support_trisock_cpp_CSocket_bindSocket_FUN_005790a0(this_ptr,0);
      iVar6 = support_trisock_cpp_FUN_005790f0(this_ptr,param_1 + 0x600);
      if (iVar6 == 0) {
        *(uint *)(param_1 + 0xd28) = 0xfffffffd;
        _sprintf((char *)(param_1 + 0xa18),"Error connecting socket to %s");
      }
    }
    else if (iVar6 != 1) {
      _sprintf((char *)(param_1 + 0xa18),"DNS error resolving %s")
      ;
      *(uint *)(param_1 + 0xd28) = 0xfffffffe;
    }
    break;
  case 2:
    uStack_28 = 4;
    iVar6 = support_trisock_cpp_CSocket_isSocketValid_FUN_00579090((CSocket *)(param_1 + 0xd2c));
    if (iVar6 != 0) {
      uStack_28 = support_trisock_cpp_FUN_00579150((CSocket *)(param_1 + 0xd2c));
    }
    if ((uStack_28 & 4) != 0) {
      *(uint *)(param_1 + 0xd28) = 0xfffffffd;
      _sprintf((char *)(param_1 + 0xa18),"Error contacting %s");
      break;
    }
    if ((uStack_28 & 2) == 0) break;
    *(uint *)(param_1 + 0xd18) = 0;
    piVar2 = *(int **)(param_1 + 0xd20);
    *(uint *)(param_1 + 0xd28) = 3;
    if ((piVar2 == (int *)0x0) || (iVar6 = (**(code **)(*piVar2 + 0x18))(piVar2), iVar6 < 0)) {
LAB_0057af77:
      if (*(int *)(param_1 + 0xd18) < 1) goto LAB_0057b03d;
      _sprintf(acStack_808,"POST %s HTTP/1.0\r\nHost: %s:%d\r\nContent-length: %d\r\n\r\n");
    }
    else {
      (**(code **)(**(int **)(param_1 + 0xd20) + 0x14))(*(int **)(param_1 + 0xd20),0,2);
      uVar3 = (**(code **)(**(int **)(param_1 + 0xd20) + 0x18))(*(int **)(param_1 + 0xd20));
      *(uint *)(param_1 + 0xd18) = uVar3;
      (**(code **)(**(int **)(param_1 + 0xd20) + 0x14))(*(int **)(param_1 + 0xd20),iVar6,0);
      if (-1 < *(int *)(param_1 + 0xd18)) {
        *(int *)(param_1 + 0xd18) = *(int *)(param_1 + 0xd18) - iVar6;
        goto LAB_0057af77;
      }
      *(uint *)(param_1 + 0xd18) = 0;
LAB_0057b03d:
      _sprintf(acStack_808,"GET %s HTTP/1.0\r\nHost: %s:%d\r\nConnection: close\r\n\r\n");
    }
    uVar7 = 0xffffffff;
    pcVar8 = acStack_808;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    iVar6 = support_trisock_cpp_CSocket_sendSocketData_FUN_005792e0
                      ((CSocket *)(param_1 + 0xd2c),acStack_808,~uVar7 - 1,(SNetworkAddr *)0x0);
    if (iVar6 == 0) {
      *(uint *)(param_1 + 0xd28) = 0xfffffffc;
      _sprintf((char *)(param_1 + 0xa18),"Error requesting %s");
    }
    break;
  case 3:
    uStack_20 = 4;
    iVar6 = support_trisock_cpp_CSocket_isSocketValid_FUN_00579090((CSocket *)(param_1 + 0xd2c));
    if (iVar6 != 0) {
      uStack_20 = support_trisock_cpp_FUN_00579150((CSocket *)(param_1 + 0xd2c));
    }
    if ((uStack_20 & 4) == 0) {
      iVar6 = *(int *)(param_1 + 0xd18);
      if (iVar6 < 1) {
        *(byte *)(param_1 + 0x810) = 0;
        *(uint *)(param_1 + 0xd1c) = 0;
        *(uint *)(param_1 + 0xd28) = 4;
      }
      else if ((uStack_20 & 2) != 0) {
        iVar5 = 0x200;
        if (iVar6 < 0x200) {
          iVar5 = iVar6;
        }
        iVar6 = (**(code **)(**(int **)(param_1 + 0xd20) + 0x10))
                          (*(int **)(param_1 + 0xd20),(char *)(param_1 + 0x610),iVar5);
        if (iVar6 == iVar5) {
          iVar4 = support_trisock_cpp_CSocket_sendSocketData_FUN_005792e0
                            ((CSocket *)(param_1 + 0xd2c),(char *)(param_1 + 0x610),iVar5,
                             (SNetworkAddr *)0x0);
          if (iVar4 == 0) {
            iVar6 = -1;
          }
          else {
            *(int *)(param_1 + 0xd18) = *(int *)(param_1 + 0xd18) - iVar5;
          }
        }
        if (iVar6 != iVar5) {
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
      pcStack_1c = (char *)(param_1 + 0x610);
      pcStack_24 = (char *)(param_1 + 0xa18);
      iStack_14 = param_1 + 0x60c;
      pcStack_18 = (char *)(param_1 + 0x81f);
      pCStack_2c = (CSocket *)(param_1 + 0xd2c);
      do {
        while (*(int *)(param_1 + 0xd1c) < 2) {
          uVar7 = 0xffffffff;
          pcVar8 = (char *)(param_1 + 0x810);
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7 - 1;
          iVar6 = uVar7 + param_1;
          while( true ) {
            do {
              *(byte *)(iVar6 + 0x810) = 0;
              iVar5 = support_trisock_cpp_FUN_0057b680(param_1,0);
              if (iVar5 < 0) goto LAB_0057adfb;
            } while (iVar5 == 0xd);
            if (iVar5 == 10) break;
            if (uVar7 < 0x1ff) {
              uVar7 = uVar7 + 1;
              *(char *)(iVar6 + 0x810) = (char)iVar5;
              iVar6 = iVar6 + 1;
            }
          }
          if ((int)uVar7 < 0) goto LAB_0057adfb;
          if (*(int *)(param_1 + 0xd1c) == 0) {
            pcVar9 = "Unknown error";
            pcVar8 = acStack_150;
            iStack_30 = -1;
            do {
              cVar1 = *pcVar9;
              *pcVar8 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar9[1];
              pcVar9 = pcVar9 + 2;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 2;
            } while (cVar1 != '\0');
            sscanf(pcStack_1c,"%*[^ ]%d %255[^\n]");
            if (iStack_30 == -1) {
              _sprintf(pcStack_24,"Invalid HTTP header returned by server");
              *(uint *)(param_1 + 0xd28) = 0xfffffffb;
            }
            else if (iStack_30 < 400) {
              if (iStack_30 < 300) {
                *(uint *)(param_1 + 0x60c) = 0xffffffff;
                *(byte *)(param_1 + 0x810) = 0;
                *(uint *)(param_1 + 0xd1c) = 1;
                goto LAB_0057b2ca;
              }
              _sprintf(pcStack_24,"Not implemented: %d: %s");
              *(uint *)(param_1 + 0xd28) = 0xfffffffb;
            }
            else {
              _sprintf(pcStack_24,"%d: %s");
              *(uint *)(param_1 + 0xd28) = 0xfffffffb;
            }
            goto LAB_0057adfb;
          }
          if (*(int *)(param_1 + 0xd1c) != 1) goto LAB_0057b2ca;
          if (*(char *)(param_1 + 0x810) != '\0') {
            iVar6 = _strnicmp
                              ((char *)(param_1 + 0x810),"Content-length:",0xf);
            if (iVar6 == 0) {
              sscanf(pcStack_18,&DAT_005ed4bb);
            }
            *(byte *)(param_1 + 0x810) = 0;
            iVar6 = *(int *)(param_1 + 0xd28);
            goto joined_r0x0057b4a2;
          }
          *(uint *)(param_1 + 0xd1c) = 2;
          *(uint *)(param_1 + 0x608) = 0;
          iVar6 = *(int *)(param_1 + 0xd28);
joined_r0x0057b476:
          if (iVar6 != 4) goto LAB_0057adfb;
        }
        while( true ) {
          if ((*(uint *)(param_1 + 0x60c) < 0x80000000) &&
             ((int)*(uint *)(param_1 + 0x60c) <= *(int *)(param_1 + 0x608))) {
            *(uint *)(param_1 + 0xd28) = 5;
            support_trisock_cpp_CSocket_closeSocket_FUN_00579360(pCStack_2c);
            iVar6 = *(int *)(param_1 + 0xd28);
            goto joined_r0x0057b476;
          }
          uVar7 = support_trisock_cpp_FUN_0057b680(param_1,0x7fffffff < *(uint *)(param_1 + 0x60c));
          if (uVar7 == 0xfffffffe) {
            *(uint *)(param_1 + 0xd28) = 5;
            support_trisock_cpp_CSocket_closeSocket_FUN_00579360(pCStack_2c);
            iVar6 = *(int *)(param_1 + 0xd28);
            goto joined_r0x0057b4a2;
          }
          if ((int)uVar7 < 0) break;
          (**(code **)(**(int **)(param_1 + 0xd24) + 4))(*(int **)(param_1 + 0xd24),uVar7 & 0xff);
          *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + 1;
        }
LAB_0057b2ca:
        iVar6 = *(int *)(param_1 + 0xd28);
joined_r0x0057b4a2:
      } while (iVar6 == 4);
    }
  }
LAB_0057adfb:
  switch(*(uint *)(param_1 + 0xd28)) {
  case 0:
    *param_2 = '\0';
    return *(uint *)(param_1 + 0xd28);
  case 1:
    _sprintf(param_2,"Looking up %s...");
    return *(uint *)(param_1 + 0xd28);
  case 2:
    support_trisock_cpp_formatSocketAddress_FUN_00578f50
              ((SNetworkAddr *)(param_1 + 0x600),acStack_50);
    _sprintf(param_2,"Contacting %s...");
    return *(uint *)(param_1 + 0xd28);
  case 3:
    _sprintf(param_2,"Requesting %s...");
    return *(uint *)(param_1 + 0xd28);
  case 4:
    iVar6 = -1;
    if (0 < *(int *)(param_1 + 0x60c)) {
      iVar6 = (*(int *)(param_1 + 0x608) * 100) / *(int *)(param_1 + 0x60c);
    }
    if ((0 < iVar6) && (iVar6 < 100)) {
      _sprintf(param_2,"Received %d%% of %s... ");
      return *(uint *)(param_1 + 0xd28);
    }
    _sprintf(param_2,"Receiving %s...");
    return *(uint *)(param_1 + 0xd28);
  case 5:
    pcVar8 = &DAT_005ed519;
    break;
  default:
    support_trisock_cpp_CSocket_closeSocket_FUN_00579360((CSocket *)(param_1 + 0xd2c));
    pcVar8 = (char *)(param_1 + 0xa18);
  }
  do {
    cVar1 = *pcVar8;
    *param_2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
  } while (cVar1 != '\0');
  return *(uint *)(param_1 + 0xd28);
}
