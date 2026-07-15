// Name: crt_signal.c__XcptFilter_FUN_1000a7b0
// Address: 1000a7b0
// Address Range: [[1000a7b0, 1000a8fe]]
// Convention: __cdecl
// Signature: int __cdecl crt_signal_c__XcptFilter_FUN_1000a7b0(uint xcpt_num,_EXCEPTION_POINTERS *pxcpt_ptrs)

#include "nocturne.h"

int __cdecl _XcptFilter(uint xcpt_num,_EXCEPTION_POINTERS *pxcpt_ptrs)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  _ptiddata p_Var4;
  int *piVar5;
  LONG LVar6;
  int iVar7;
  int iVar8;
  
  p_Var4 = _getptd();
  piVar5 = _xcptlookup((void *)xcpt_num,*(int *)(p_Var4->_con_ch_buf + 4))
  ;
  if ((piVar5 == (int *)0x0) || (pcVar1 = (code *)piVar5[2], pcVar1 == (code *)0x0)) {
    LVar6 = UnhandledExceptionFilter(pxcpt_ptrs);
    return LVar6;
  }
  if (pcVar1 == (code *)0x5) {
    piVar5[2] = 0;
    return 1;
  }
  if (pcVar1 == (code *)0x1) {
    return -1;
  }
  pvVar2 = p_Var4->_initaddr;
  p_Var4->_initaddr = pxcpt_ptrs;
  if (piVar5[1] == 8) {
    if (0x00000003 < 0x00000007 + 0x00000003) {
      iVar7 = 0x00000003 * 0xc;
      iVar8 = 0x00000003;
      do {
        iVar7 = iVar7 + 0xc;
        iVar8 = iVar8 + 1;
        *(uint *)(*(int *)(p_Var4->_con_ch_buf + 4) + -4 + iVar7) = 0;
      } while (iVar8 < 0x00000007 + 0x00000003);
    }
    pvVar3 = p_Var4->_initarg;
    iVar8 = *piVar5;
    if (iVar8 == -0x3fffff72) {
      p_Var4->_initarg = (void *)0x83;
    }
    else if (iVar8 == -0x3fffff70) {
      p_Var4->_initarg = (void *)0x81;
    }
    else if (iVar8 == -0x3fffff6f) {
      p_Var4->_initarg = (void *)0x84;
    }
    else if (iVar8 == -0x3fffff6d) {
      p_Var4->_initarg = (void *)0x85;
    }
    else if (iVar8 == -0x3fffff73) {
      p_Var4->_initarg = (void *)0x82;
    }
    else if (iVar8 == -0x3fffff71) {
      p_Var4->_initarg = (void *)0x86;
    }
    else if (iVar8 == -0x3fffff6e) {
      p_Var4->_initarg = (void *)0x8a;
    }
    (*pcVar1)(8,p_Var4->_initarg);
    p_Var4->_initarg = pvVar3;
  }
  else {
    piVar5[2] = 0;
    (*pcVar1)(piVar5[1]);
  }
  p_Var4->_initaddr = pvVar2;
  return -1;
}
