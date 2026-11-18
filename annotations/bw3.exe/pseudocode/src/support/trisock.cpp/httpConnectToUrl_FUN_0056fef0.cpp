// Name: support_trisock.cpp_httpConnectToUrl_FUN_0056fef0
// Address: 0056fef0
// Address Range: [[0056fef0, 00570150]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpConnectToUrl_FUN_0056fef0(char *url,char *host_out,ushort *port_out,char *path_out,int path_size,CSocket *socket,void *status_callback)

#include "nocturne.h"

int __cdecl support_trisock_cpp_httpConnectToUrl_FUN_0056fef0(char *url,char *host_out,ushort *port_out,char *path_out,int path_size,CSocket *socket,void *status_callback)

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
  iVar3 = support_trisock_cpp_parseUrl_FUN_005709c0(url,host_out,port_out,path_out,path_size);
  if (iVar3 == 0) {
    (*pvVar2)(1,"Invalid web address");
  }
  else {
    __arrinit(auStack_58,0xc,&g_IpAddrTypeInfo);
    _sprintf(&stack0xfffff420,"Looking up %s");
    iVar3 = (*pvVar2)(0,&stack0xfffff420);
    if (iVar3 != 0) {
      iVar3 = support_trisock_cpp_lookupHostByName_FUN_00572190(host_name,auStack_2e0);
      if (iVar3 == 0) {
        _sprintf(&stack0xfffff428,"Can't find %s.  (DNS error)");
        (*pvVar2)();
        return 0;
      }
      support_trisock_cpp_CSocket_ctor_FUN_0056f8d0((CSocket *)&host_out);
      support_trisock_cpp_createNetworkAddr_FUN_0056f730((SNetworkAddr *)&url,puStack_4c,*puVar1);
      support_trisock_cpp_formatSocketAddress_FUN_0056f820((SNetworkAddr *)&url,acStack_1c);
      _sprintf(acStack_bd4,"Connecting to site %s");
      iVar3 = (*pvVar2)();
      if (iVar3 != 0) {
        support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30(this_ptr);
        support_trisock_cpp_CSocket_createSocket_FUN_0056f900(this_ptr);
        support_trisock_cpp_CSocket_setSocketBlocking_FUN_0056fd60(this_ptr,0);
        support_trisock_cpp_CSocket_bindSocket_FUN_0056f970(this_ptr,0);
        iVar3 = support_trisock_cpp_CSocket_connectSocket_FUN_0056f9c0
                          (this_ptr,(SNetworkAddr *)&url);
        if (iVar3 == 0) {
LAB_005700c8:
          _sprintf(acStack_bd4,"Error connecting to %s");
          (*pvVar2)();
          support_trisock_cpp_CSocket_dtor_FUN_0056f8e0((CSocket *)&port_out,0);
          return 0;
        }
        do {
          uVar4 = support_trisock_cpp_CSocket_pollSocketStatus_FUN_0056fa20(this_ptr);
          if ((uVar4 & 4) != 0) goto LAB_005700c8;
          if ((uVar4 & 2) != 0) {
            _sprintf(acStack_bd4,"Connected to %s OK.");
            iVar3 = (*pvVar2)();
            support_trisock_cpp_CSocket_dtor_FUN_0056f8e0((CSocket *)&port_out,0);
            return iVar3;
          }
          iVar3 = (*pvVar2)();
        } while (iVar3 != 0);
      }
      support_trisock_cpp_CSocket_dtor_FUN_0056f8e0((CSocket *)&port_out,0);
      return 0;
    }
  }
  return 0;
}
