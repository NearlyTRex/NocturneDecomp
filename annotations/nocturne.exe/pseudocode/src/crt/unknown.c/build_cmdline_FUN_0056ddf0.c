// Name: crt_unknown.c_build_cmdline_FUN_0056ddf0
// Address: 0056ddf0
// Address Range: [[0056ddf0, 0056de8b]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_build_cmdline_FUN_0056ddf0(int argc,char **argv,char *program,char **out_cmdline,char **out_environment,char **out_buffer,int *out_bufsize,int copy_program_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl build_cmdline(int argc,char **argv,char *program,char **out_cmdline,char **out_environment,char **out_buffer,int *out_bufsize,int copy_program_flag)

{
  uint uVar1;
  _FILE *p_Var2;
  uint in_EAX;
  streambuf *psVar3;
  streambuf *psVar4;
  _FILE **pp_Var5;
  
  psVar3 = (streambuf *)
           (CONCAT22((short)((uint)in_EAX >> 0x10),
                     CONCAT11(g_FILE_005c18c8._flag._1_1_,(char)in_EAX)) & 0xfffff8ff);
  g_FILE_005c18c8._flag._1_1_ = (byte)((uint)psVar3 >> 8) | 4;
  pp_Var5 = &g_StaticFilePoolStart;
  uVar1 = _DAT_005c18a0;
  while (uVar1 != 0) {
    psVar4 = InternalHeapAlloc(0x1d);
    if ((psVar4 == (streambuf *)0x0) &&
       (psVar4 = malloc(0x1d), psVar4 == (streambuf *)0x0)) {
      HandleRuntimeError("Not enough memory to allocate file structures\r\n",1);
    }
    psVar4->__reserve_base = (char *)pp_Var5;
    psVar4->__b_lock = g_AllocatedListHead;
    ((_FILE *)pp_Var5)->_link = psVar4;
    psVar4->__reserve_end = (char *)0x0;
    *(byte *)&((_FILE *)pp_Var5)->_link->__get_ptr = 0;
    psVar3 = ((_FILE *)pp_Var5)->_link;
    psVar3->__get_base = (char *)0x0;
    p_Var2 = (_FILE *)((int)pp_Var5 + 0x1a);
    pp_Var5 = (_FILE **)((int)pp_Var5 + 0x1a);
    g_AllocatedListHead = (FileListNode *)psVar4;
    uVar1 = p_Var2->_flag;
  }
  g_FreeListHeadPointer = (FileListNode *)0x0;
  return (int)psVar3;
}
