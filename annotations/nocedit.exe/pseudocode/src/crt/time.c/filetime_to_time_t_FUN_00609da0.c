// Name: crt_time.c_filetime_to_time_t_FUN_00609da0
// Address: 00609da0
// Address Range: [[00609da0, 00609e65]]
// Convention: __cdecl
// Signature: time_t crt_time.c_filetime_to_time_t_FUN_00609da0(FILETIME * filetime)
// Cross-references:
//   crt_io.c_convertFileInfo_FUN_00602264 (00602264) at 006022a1 [UNCONDITIONAL_CALL]
// Globals:
//   FileTimeToLocalFileTime* PTR_FileTimeToLocalFileTime_00611540 = 00211d46
//   FileTimeToSystemTime* PTR_FileTimeToSystemTime_00611544 = 00211d60
// Function calls:
//   crt_time.c_mktime_FUN_00600f80

#include "nocturne.h"

time_t __cdecl crt_time_c_filetime_to_time_t_FUN_00609da0(FILETIME *filetime)

{
  BOOL BVar1;
  time_t tVar2;
  BADSPACEBASE *in_ESP;
  uint unaff_ESI;
  ushort unaff_retaddr;
  ushort unaff_retaddr_00;
  ushort in_stack_00000008;
  undefined1 auStack_28 [32];
  int iStack_8;
  
  if ((filetime->dwLowDateTime == 0) && (filetime->dwHighDateTime == 0)) {
    return -1;
  }
  BVar1 = (*PTR_FileTimeToLocalFileTime_00611540)(filetime,(LPFILETIME)(auStack_28 + 0x1c));
  if (BVar1 == 0) {
    return -1;
  }
  BVar1 = (*PTR_FileTimeToSystemTime_00611544)
                    ((FILETIME *)&stack0x00000000,(LPSYSTEMTIME)(auStack_28 + 0x18));
  if (BVar1 == 0) {
    return -1;
  }
  auStack_28._20_4_ = (unaff_ESI & 0xffff) - 0x76c;
  auStack_28._16_4_ = (unaff_ESI >> 0x10) - 1;
  auStack_28._12_4_ = ZEXT24(unaff_retaddr_00);
  auStack_28._8_4_ = (uint)filetime & 0xffff;
  auStack_28._4_4_ = (uint)filetime >> 0x10;
  auStack_28._0_4_ = ZEXT24(in_stack_00000008);
  auStack_28._24_4_ = ZEXT24(unaff_retaddr);
  auStack_28._28_4_ = -1;
  iStack_8 = -1;
  tVar2 = crt_time_c_mktime_FUN_00600f80((tm *)auStack_28);
  return tVar2;
}


// Assembly code:
// 00609da0: PUSH ESI
//   Label: crt_time.c_filetime_to_time_t_FUN_00609da0
// 00609da1: SUB ESP,0x3c
// 00609da4: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00609da8: CMP dword ptr [EDX],0x0
// 00609dab: JNZ 0x00609dbd
//   XREF to: 00609dbd (CONDITIONAL_JUMP)
// 00609dad: CMP dword ptr [EDX + 0x4],0x0
// 00609db1: JNZ 0x00609dbd
//   XREF to: 00609dbd (CONDITIONAL_JUMP)
// 00609db3: MOV EAX,0xffffffff
// 00609db8: ADD ESP,0x3c
// 00609dbb: POP ESI
// 00609dbc: RET
// 00609dbd: LEA EAX,[ESP + 0x34]
//   Label: LAB_00609dbd
//   XREF to: Stack[-0xc] (DATA)
// 00609dc1: PUSH EAX
// 00609dc2: PUSH EDX
// 00609dc3: CALL dword ptr CS:[0x611540]
//   XREF to: 00611540 (READ)
// 00609dca: TEST EAX,EAX
// 00609dcc: JNZ 0x00609dd8
//   XREF to: 00609dd8 (CONDITIONAL_JUMP)
// 00609dce: MOV EAX,0xffffffff
// 00609dd3: ADD ESP,0x3c
// 00609dd6: POP ESI
// 00609dd7: RET
// 00609dd8: LEA EAX,[ESP + 0x24]
//   Label: LAB_00609dd8
// 00609ddc: PUSH EAX
// 00609ddd: LEA EAX,[ESP + 0x38]
// 00609de1: PUSH EAX
// 00609de2: CALL dword ptr CS:[0x611544]
//   XREF to: 00611544 (READ)
// 00609de9: TEST EAX,EAX
// 00609deb: JNZ 0x00609df7
//   XREF to: 00609df7 (CONDITIONAL_JUMP)
// 00609ded: MOV EAX,0xffffffff
// 00609df2: ADD ESP,0x3c
// 00609df5: POP ESI
// 00609df6: RET
// 00609df7: XOR EAX,EAX
//   Label: LAB_00609df7
// 00609df9: MOV AX,word ptr [ESP + 0x24]
// 00609dfe: SUB EAX,0x76c
// 00609e03: MOV dword ptr [ESP + 0x14],EAX
// 00609e07: XOR EAX,EAX
// 00609e09: MOV AX,word ptr [ESP + 0x26]
// 00609e0e: DEC EAX
// 00609e0f: MOV dword ptr [ESP + 0x10],EAX
// 00609e13: XOR EAX,EAX
// 00609e15: MOV AX,word ptr [ESP + 0x2a]
// 00609e1a: MOV dword ptr [ESP + 0xc],EAX
// 00609e1e: XOR EAX,EAX
// 00609e20: MOV AX,word ptr [ESP + 0x2c]
// 00609e25: MOV dword ptr [ESP + 0x8],EAX
// 00609e29: XOR EAX,EAX
// 00609e2b: MOV AX,word ptr [ESP + 0x2e]
// 00609e30: MOV dword ptr [ESP + 0x4],EAX
// 00609e34: XOR EAX,EAX
// 00609e36: MOV AX,word ptr [ESP + 0x30]
// 00609e3b: MOV dword ptr [ESP],EAX
// 00609e3e: XOR EAX,EAX
// 00609e40: MOV AX,word ptr [ESP + 0x28]
// 00609e45: MOV dword ptr [ESP + 0x18],EAX
// 00609e49: MOV EAX,ESP
// 00609e4b: MOV ESI,0xffffffff
// 00609e50: PUSH EAX
// 00609e51: MOV dword ptr [ESP + 0x20],ESI
// 00609e55: MOV dword ptr [ESP + 0x24],ESI
// 00609e59: CALL crt_time.c_mktime_FUN_00600f80
//   XREF to: 00600f80 (UNCONDITIONAL_CALL)
// 00609e5e: ADD ESP,0x4
// 00609e61: ADD ESP,0x3c
// 00609e64: POP ESI
// 00609e65: RET
