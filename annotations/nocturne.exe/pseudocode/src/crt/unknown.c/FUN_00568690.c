// Name: crt_unknown.c_FUN_00568690
// Address: 00568690
// Address Range: [[00568690, 005687bb]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_FUN_00568690(void)

#include "nocturne.h"

_FILE * FUN_00568690(void)

{
  int iVar1;
  int iVar2;
  _FILE *p_Var3;
  int *piVar4;
  uint file_handle;
  int file_handle_00;
  char acStack_238 [276];
  char acStack_124 [276];
  
  iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  iVar1 = *(int *)(iVar1 + 4);
  file_handle_00 = 0;
  do {
    while( true ) {
      do {
        _tempnam(acStack_124,file_handle_00);
        file_handle_00 = file_handle_00 + 1;
        iVar2 = FUN_0056f170(acStack_124,2);
      } while (iVar2 == 0);
      p_Var3 = _fopen(acStack_124,&DAT_00598b50);
      if (p_Var3 != (_FILE *)0x0) break;
      piVar4 = _errno();
      if ((*piVar4 == 0xb) || (piVar4 = _errno(), *piVar4 == 6)) {
        return (_FILE *)0x0;
      }
    }
    _fclose(p_Var3);
    file_handle = (uint)DAT_005c1a9c;
    do {
      _tempnam(acStack_238,file_handle);
      iVar2 = rename(acStack_124,acStack_238);
      if (iVar2 == 0) {
        p_Var3 = _fopen(acStack_238,&DAT_00598b50);
        if (p_Var3 != (_FILE *)0x0) {
          *(byte *)((int)&p_Var3->_flag + 1) = *(byte *)((int)&p_Var3->_flag + 1) | 8;
          DAT_005c1a9c = (byte)file_handle;
          *(byte *)&p_Var3->_link->__get_ptr = DAT_005c1a9c;
          setErrno(iVar1);
          return p_Var3;
        }
        piVar4 = _errno();
        if (*piVar4 == 0xb) {
          return (_FILE *)0x0;
        }
      }
      file_handle = file_handle + 1;
      iVar2 = FUN_0056f170(acStack_124,2);
    } while (iVar2 == 0);
  } while( true );
}
