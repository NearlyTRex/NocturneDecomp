// Name: support_trisock.cpp_FUN_0056fef0
// Address: 0056fef0
// Address Range: [[0056fef0, 00570150]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_0056fef0(undefined4 param_1,undefined4 param_2,uint16_t *param_3,undefined4 param_4,undefined4 param_5,CSocket *param_6,code *param_7)

#include "nocturne.h"

uint support_trisock_cpp_FUN_0056fef0(uint param_1,uint param_2,uint16_t *param_3,uint param_4,uint param_5,CSocket *param_6,code *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char acStack_bf0 [2300];
  byte auStack_2f4 [648];
  byte auStack_6c [4];
  uint32_t *puStack_68;
  char acStack_38 [32];
  ulonglong uStack_18;
  
  iVar1 = support_trisock_cpp_FUN_005709c0(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    (*param_7)(1,"Invalid web address");
  }
  else {
    __arrinit(auStack_6c,0xc,&g_IpAddrTypeInfo);
    _sprintf(&stack0xfffff40c,"Looking up %s");
    iVar1 = (*param_7)(0,&stack0xfffff40c);
    if (iVar1 != 0) {
      iVar1 = support_trisock_cpp_FUN_00572190(param_2,auStack_2f4);
      if (iVar1 == 0) {
        _sprintf(&stack0xfffff40c,"Can't find %s.  (DNS error)");
        (*param_7)(1,&stack0xfffff40c);
        return 0;
      }
      support_trisock_cpp_CSocket_ctor_FUN_0056f8d0((CSocket *)((int)&uStack_18 + 4));
      support_trisock_cpp_createNetworkAddr_FUN_0056f730
                ((SNetworkAddr *)&uStack_18,puStack_68,*param_3);
      support_trisock_cpp_formatSocketAddress_FUN_0056f820((SNetworkAddr *)&uStack_18,acStack_38);
      _sprintf(acStack_bf0,"Connecting to site %s");
      iVar1 = (*param_7)(0);
      if (iVar1 != 0) {
        support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30(param_6);
        support_trisock_cpp_CSocket_createSocket_FUN_0056f900(param_6);
        support_trisock_cpp_CSocket_setSocketBlocking_FUN_0056fd60(param_6,0);
        support_trisock_cpp_CSocket_bindSocket_FUN_0056f970(param_6,0);
        iVar1 = support_trisock_cpp_FUN_0056f9c0(param_6);
        if (iVar1 == 0) {
LAB_005700c8:
          _sprintf(acStack_bf0,"Error connecting to %s");
          (*param_7)(1);
          support_trisock_cpp_CSocket_dtor_FUN_0056f8e0((CSocket *)&stack0xfffffff0,0);
          return 0;
        }
        do {
          uVar2 = support_trisock_cpp_FUN_0056fa20();
          if ((uVar2 & 4) != 0) goto LAB_005700c8;
          if ((uVar2 & 2) != 0) {
            _sprintf(acStack_bf0,"Connected to %s OK.");
            uVar3 = (*param_7)(0);
            support_trisock_cpp_CSocket_dtor_FUN_0056f8e0((CSocket *)&stack0xfffffff0,0);
            return uVar3;
          }
          iVar1 = (*param_7)(0);
        } while (iVar1 != 0);
      }
      support_trisock_cpp_CSocket_dtor_FUN_0056f8e0((CSocket *)&stack0xfffffff0,0);
      return 0;
    }
  }
  return 0;
}
