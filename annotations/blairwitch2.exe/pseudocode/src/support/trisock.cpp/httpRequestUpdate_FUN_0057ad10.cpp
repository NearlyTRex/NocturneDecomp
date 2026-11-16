// Name: support_trisock.cpp_httpRequestUpdate_FUN_0057ad10
// Address: 0057ad10
// Address Range: [[0057ad10, 0057b601]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpRequestUpdate_FUN_0057ad10(void *request,char *status_text)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl support_trisock_cpp_httpRequestUpdate_FUN_0057ad10(void *request,char *status_text)

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
  switch(*(int *)((int)request + 0xd28)) {
  case 1:
    __arrinit(auStack_180,0xc,&g_IpAddrTypeInfo);
    iVar6 = support_trisock_cpp_dnsRequestGetResult_FUN_0057a7c0
                      ((void *)((int)request + 0xd30),acStack_408);
    pcVar8 = (char *)((int)request + 0x400);
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
      this_ptr = (CSocket *)((int)request + 0xd2c);
      *(uint *)((int)request + 0xd28) = 2;
      *(uint *)((int)request + 0x600) = auStack_180[0];
      support_trisock_cpp_CSocket_closeSocket_FUN_00579360(this_ptr);
      support_trisock_cpp_CSocket_createSocket_FUN_00579030(this_ptr);
      support_trisock_cpp_CSocket_setSocketBlocking_FUN_00579490(this_ptr,0);
      support_trisock_cpp_CSocket_bindSocket_FUN_005790a0(this_ptr,0);
      iVar6 = support_trisock_cpp_CSocket_connectSocket_FUN_005790f0
                        (this_ptr,(SNetworkAddr *)((int)request + 0x600));
      if (iVar6 == 0) {
        *(uint *)((int)request + 0xd28) = 0xfffffffd;
        _sprintf((char *)((int)request + 0xa18),"Error connecting socket to %s");
      }
    }
    else if (iVar6 != 1) {
      _sprintf((char *)((int)request + 0xa18),"DNS error resolving %s");
      *(uint *)((int)request + 0xd28) = 0xfffffffe;
    }
    break;
  case 2:
    uStack_28 = 4;
    iVar6 = support_trisock_cpp_CSocket_isSocketValid_FUN_00579090
                      ((CSocket *)((int)request + 0xd2c));
    if (iVar6 != 0) {
      uStack_28 = support_trisock_cpp_CSocket_pollSocketStatus_FUN_00579150
                            ((CSocket *)((int)request + 0xd2c));
    }
    if ((uStack_28 & 4) != 0) {
      *(uint *)((int)request + 0xd28) = 0xfffffffd;
      _sprintf((char *)((int)request + 0xa18),"Error contacting %s");
      break;
    }
    if ((uStack_28 & 2) == 0) break;
    *(uint *)((int)request + 0xd18) = 0;
    piVar2 = *(int **)((int)request + 0xd20);
    *(uint *)((int)request + 0xd28) = 3;
    if ((piVar2 == (int *)0x0) || (iVar6 = (**(code **)(*piVar2 + 0x18))(piVar2), iVar6 < 0)) {
LAB_0057af77:
      if (*(int *)((int)request + 0xd18) < 1) goto LAB_0057b03d;
      _sprintf(acStack_808,"POST %s HTTP/1.0\r\nHost: %s:%d\r\nContent-length: %d\r\n\r\n");
    }
    else {
      (**(code **)(**(int **)((int)request + 0xd20) + 0x14))(*(int **)((int)request + 0xd20),0,2);
      uVar3 = (**(code **)(**(int **)((int)request + 0xd20) + 0x18))
                        (*(int **)((int)request + 0xd20));
      *(uint *)((int)request + 0xd18) = uVar3;
      (**(code **)(**(int **)((int)request + 0xd20) + 0x14))
                (*(int **)((int)request + 0xd20),iVar6,0);
      if (-1 < *(int *)((int)request + 0xd18)) {
        *(int *)((int)request + 0xd18) = *(int *)((int)request + 0xd18) - iVar6;
        goto LAB_0057af77;
      }
      *(uint *)((int)request + 0xd18) = 0;
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
                      ((CSocket *)((int)request + 0xd2c),acStack_808,~uVar7 - 1,(SNetworkAddr *)0x0)
    ;
    if (iVar6 == 0) {
      *(uint *)((int)request + 0xd28) = 0xfffffffc;
      _sprintf((char *)((int)request + 0xa18),"Error requesting %s");
    }
    break;
  case 3:
    uStack_20 = 4;
    iVar6 = support_trisock_cpp_CSocket_isSocketValid_FUN_00579090
                      ((CSocket *)((int)request + 0xd2c));
    if (iVar6 != 0) {
      uStack_20 = support_trisock_cpp_CSocket_pollSocketStatus_FUN_00579150
                            ((CSocket *)((int)request + 0xd2c));
    }
    if ((uStack_20 & 4) == 0) {
      iVar6 = *(int *)((int)request + 0xd18);
      if (iVar6 < 1) {
        *(byte *)((int)request + 0x810) = 0;
        *(uint *)((int)request + 0xd1c) = 0;
        *(uint *)((int)request + 0xd28) = 4;
      }
      else if ((uStack_20 & 2) != 0) {
        iVar5 = 0x200;
        if (iVar6 < 0x200) {
          iVar5 = iVar6;
        }
        iVar6 = (**(code **)(**(int **)((int)request + 0xd20) + 0x10))
                          (*(int **)((int)request + 0xd20),(char *)((int)request + 0x610),iVar5);
        if (iVar6 == iVar5) {
          iVar4 = support_trisock_cpp_CSocket_sendSocketData_FUN_005792e0
                            ((CSocket *)((int)request + 0xd2c),(char *)((int)request + 0x610),iVar5,
                             (SNetworkAddr *)0x0);
          if (iVar4 == 0) {
            iVar6 = -1;
          }
          else {
            *(int *)((int)request + 0xd18) = *(int *)((int)request + 0xd18) - iVar5;
          }
        }
        if (iVar6 != iVar5) {
          *(uint *)((int)request + 0xd28) = 0xfffffffc;
          _sprintf((char *)((int)request + 0xa18),"Error requesting %s");
        }
      }
    }
    else {
      *(uint *)((int)request + 0xd28) = 0xfffffffc;
      _sprintf((char *)((int)request + 0xa18),"Error requesting %s");
    }
    break;
  case 4:
    if (*(int *)((int)request + 0xd28) == 4) {
      pcStack_1c = (char *)((int)request + 0x610);
      pcStack_24 = (char *)((int)request + 0xa18);
      iStack_14 = (int)request + 0x60c;
      pcStack_18 = (char *)((int)request + 0x81f);
      pCStack_2c = (CSocket *)((int)request + 0xd2c);
      do {
        while (*(int *)((int)request + 0xd1c) < 2) {
          uVar7 = 0xffffffff;
          pcVar8 = (char *)((int)request + 0x810);
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7 - 1;
          iVar6 = uVar7 + (int)request;
          while( true ) {
            do {
              *(byte *)(iVar6 + 0x810) = 0;
              iVar5 = support_trisock_cpp_httpRequestGetByte_FUN_0057b680(request,0);
              if (iVar5 < 0) goto switchD_0057ad33_default;
            } while (iVar5 == 0xd);
            if (iVar5 == 10) break;
            if (uVar7 < 0x1ff) {
              uVar7 = uVar7 + 1;
              *(char *)(iVar6 + 0x810) = (char)iVar5;
              iVar6 = iVar6 + 1;
            }
          }
          if ((int)uVar7 < 0) goto switchD_0057ad33_default;
          if (*(int *)((int)request + 0xd1c) == 0) {
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
              *(uint *)((int)request + 0xd28) = 0xfffffffb;
            }
            else if (iStack_30 < 400) {
              if (iStack_30 < 300) {
                *(uint *)((int)request + 0x60c) = 0xffffffff;
                *(byte *)((int)request + 0x810) = 0;
                *(uint *)((int)request + 0xd1c) = 1;
                goto LAB_0057b2ca;
              }
              _sprintf(pcStack_24,"Not implemented: %d: %s");
              *(uint *)((int)request + 0xd28) = 0xfffffffb;
            }
            else {
              _sprintf(pcStack_24,"%d: %s");
              *(uint *)((int)request + 0xd28) = 0xfffffffb;
            }
            goto switchD_0057ad33_default;
          }
          if (*(int *)((int)request + 0xd1c) != 1) goto LAB_0057b2ca;
          if (*(char *)((int)request + 0x810) != '\0') {
            iVar6 = _strnicmp
                              ((char *)((int)request + 0x810),"Content-length:",0xf);
            if (iVar6 == 0) {
              sscanf(pcStack_18,&DAT_005ed4bb);
            }
            *(byte *)((int)request + 0x810) = 0;
            iVar6 = *(int *)((int)request + 0xd28);
            goto joined_r0x0057b4a2;
          }
          *(uint *)((int)request + 0xd1c) = 2;
          *(uint *)((int)request + 0x608) = 0;
          iVar6 = *(int *)((int)request + 0xd28);
joined_r0x0057b476:
          if (iVar6 != 4) goto switchD_0057ad33_default;
        }
        while( true ) {
          if ((*(uint *)((int)request + 0x60c) < 0x80000000) &&
             ((int)*(uint *)((int)request + 0x60c) <= *(int *)((int)request + 0x608))) {
            *(uint *)((int)request + 0xd28) = 5;
            support_trisock_cpp_CSocket_closeSocket_FUN_00579360(pCStack_2c);
            iVar6 = *(int *)((int)request + 0xd28);
            goto joined_r0x0057b476;
          }
          uVar7 = support_trisock_cpp_httpRequestGetByte_FUN_0057b680
                            (request,(uint)(0x7fffffff < *(uint *)((int)request + 0x60c)));
          if (uVar7 == 0xfffffffe) {
            *(uint *)((int)request + 0xd28) = 5;
            support_trisock_cpp_CSocket_closeSocket_FUN_00579360(pCStack_2c);
            iVar6 = *(int *)((int)request + 0xd28);
            goto joined_r0x0057b4a2;
          }
          if ((int)uVar7 < 0) break;
          (**(code **)(**(int **)((int)request + 0xd24) + 4))
                    (*(int **)((int)request + 0xd24),uVar7 & 0xff);
          *(int *)((int)request + 0x608) = *(int *)((int)request + 0x608) + 1;
        }
LAB_0057b2ca:
        iVar6 = *(int *)((int)request + 0xd28);
joined_r0x0057b4a2:
      } while (iVar6 == 4);
    }
  }
switchD_0057ad33_default:
  switch(*(uint *)((int)request + 0xd28)) {
  case 0:
    *status_text = '\0';
    return *(int *)((int)request + 0xd28);
  case 1:
    _sprintf(status_text,"Looking up %s...");
    return *(int *)((int)request + 0xd28);
  case 2:
    support_trisock_cpp_formatSocketAddress_FUN_00578f50
              ((SNetworkAddr *)((int)request + 0x600),acStack_50);
    _sprintf(status_text,"Contacting %s...");
    return *(int *)((int)request + 0xd28);
  case 3:
    _sprintf(status_text,"Requesting %s...");
    return *(int *)((int)request + 0xd28);
  case 4:
    iVar6 = -1;
    if (0 < *(int *)((int)request + 0x60c)) {
      iVar6 = (*(int *)((int)request + 0x608) * 100) / *(int *)((int)request + 0x60c);
    }
    if ((0 < iVar6) && (iVar6 < 100)) {
      _sprintf(status_text,"Received %d%% of %s... ");
      return *(int *)((int)request + 0xd28);
    }
    _sprintf(status_text,"Receiving %s...");
    return *(int *)((int)request + 0xd28);
  case 5:
    pcVar8 = &DAT_005ed519;
    break;
  default:
    support_trisock_cpp_CSocket_closeSocket_FUN_00579360((CSocket *)((int)request + 0xd2c));
    pcVar8 = (char *)((int)request + 0xa18);
  }
  do {
    cVar1 = *pcVar8;
    *status_text = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    status_text[1] = cVar1;
    status_text = status_text + 2;
  } while (cVar1 != '\0');
  return *(int *)((int)request + 0xd28);
}
