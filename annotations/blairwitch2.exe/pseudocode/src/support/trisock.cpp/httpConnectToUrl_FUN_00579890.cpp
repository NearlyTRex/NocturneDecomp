// Name: support_trisock.cpp_httpConnectToUrl_FUN_00579890
// Address: 00579890
// Address Range: [[00579890, 00579af0]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpConnectToUrl_FUN_00579890(char *url,char *host_out,ushort *port_out,char *path_out,int path_size,CSocket *socket,void *status_callback)

#include "nocturne.h"

int __cdecl support_trisock_cpp_httpConnectToUrl_FUN_00579890(char *url,char *host_out,ushort *port_out,char *path_out,int path_size,CSocket *socket,void *status_callback)

{
  char *host_name;
  ushort *puVar1;
  CSocket *this_ptr;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  char acStack_bd4 [2292];
  byte auStack_2e0 [648];
  byte auStack_58 [12];
  uint32_t *puStack_4c;
  char acStack_1c [12];
  
  pvVar2 = status_callback;
  this_ptr = socket;
  puVar1 = port_out;
  host_name = host_out;
  iVar3 = support_trisock_cpp_parseUrl_FUN_0057a360(url,host_out,port_out,path_out,path_size);
  if (iVar3 == 0) {
    (*pvVar2)(1,"Invalid web address");
  }
  else {
    __arrinit(auStack_58,0xc,&g_IpAddrTypeInfo);
    _sprintf(&stack0xfffff420,"Looking up %s");
    iVar3 = (*pvVar2)(0,&stack0xfffff420);
    if (iVar3 != 0) {
      iVar3 = support_trisock_cpp_lookupHostByName_FUN_00579720(host_name,auStack_2e0);
      if (iVar3 == 0) {
        _sprintf(&stack0xfffff428,"Can't find %s.  (DNS error)");
        (*pvVar2)();
        return 0;
      }
      support_trisock_cpp_CSocket_ctor_FUN_00579000((CSocket *)&host_out);
      support_trisock_cpp_createNetworkAddr_FUN_00578e60((SNetworkAddr *)&url,puStack_4c,*puVar1);
      support_trisock_cpp_formatSocketAddress_FUN_00578f50((SNetworkAddr *)&url,acStack_1c);
      _sprintf(acStack_bd4,"Connecting to site %s");
      iVar3 = (*pvVar2)();
      if (iVar3 != 0) {
        support_trisock_cpp_CSocket_closeSocket_FUN_00579360(this_ptr);
        support_trisock_cpp_CSocket_createSocket_FUN_00579030(this_ptr);
        support_trisock_cpp_CSocket_setSocketBlocking_FUN_00579490(this_ptr,0);
        support_trisock_cpp_CSocket_bindSocket_FUN_005790a0(this_ptr,0);
        iVar3 = support_trisock_cpp_CSocket_connectSocket_FUN_005790f0
                          (this_ptr,(SNetworkAddr *)&url);
        if (iVar3 == 0) {
LAB_00579a68:
          _sprintf(acStack_bd4,"Error connecting to %s");
          (*pvVar2)();
          support_trisock_cpp_CSocket_dtor_FUN_00579010((CSocket *)&port_out,0);
          return 0;
        }
        do {
          uVar4 = support_trisock_cpp_CSocket_pollSocketStatus_FUN_00579150(this_ptr);
          if ((uVar4 & 4) != 0) goto LAB_00579a68;
          if ((uVar4 & 2) != 0) {
            _sprintf(acStack_bd4,"Connected to %s OK.");
            iVar3 = (*pvVar2)();
            support_trisock_cpp_CSocket_dtor_FUN_00579010((CSocket *)&port_out,0);
            return iVar3;
          }
          iVar3 = (*pvVar2)();
        } while (iVar3 != 0);
      }
      support_trisock_cpp_CSocket_dtor_FUN_00579010((CSocket *)&port_out,0);
      return 0;
    }
  }
  return 0;
}
