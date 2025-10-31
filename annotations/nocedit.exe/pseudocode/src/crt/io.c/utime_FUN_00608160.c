// Name: crt_io.c_utime_FUN_00608160
// Address: 00608160
// Address Range: [[00608160, 006082d5]]
// Convention: __cdecl
// Signature: int crt_io.c_utime_FUN_00608160(char * filename, utimbuf * timestamps)
// Cross-references:
//   crt_io.c_utime_thunk_00600c1e (00600c1e) at 00600c1e [UNCONDITIONAL_JUMP]
// Globals:
//   CloseHandle* CloseHandle = 00211c38
//   CreateFileA* PTR_CreateFileA_00611510 = 00211c6a
//   GetFileTime* PTR_GetFileTime_00611598 = 00211ef2
//   LocalFileTimeToFileTime* PTR_LocalFileTimeToFileTime_006115ec = 0021206c
//   SetFileTime* PTR_SetFileTime_00611630 = 002121c8
//   SystemTimeToFileTime* PTR_SystemTimeToFileTime_00611648 = 00212230
// Function calls:
//   CloseHandle
//   CreateFileA
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_time.c_localtime_FUN_00600288
//   crt_time.c_time_with_rounding_FUN_006001f0
//   GetFileTime
//   LocalFileTimeToFileTime
//   SetFileTime
//   SystemTimeToFileTime

#include "nocturne.h"

int __cdecl crt_io_c_utime_FUN_00608160(char *filename,utimbuf *timestamps)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  tm *ptVar3;
  BADSPACEBASE *in_ESP;
  DWORD in_stack_0000001c;
  DWORD in_stack_00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000030;
  undefined4 uStack_18;
  
  hFile = (*PTR_CreateFileA_00611510)
                    (filename,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
  }
  else {
    BVar2 = (*PTR_GetFileTime_00611598)
                      (hFile,(LPFILETIME)&stack0xfffffffc,(LPFILETIME)&stack0x0000000c,
                       (LPFILETIME)&stack0xffffffec);
    if (BVar2 == 0) {
      (*CloseHandle)(hFile);
      DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar1;
    }
    if (timestamps == (utimbuf *)0x0) {
      in_stack_0000001c = crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
      timestamps = (utimbuf *)&stack0x0000001c;
      in_stack_00000020 = in_stack_0000001c;
    }
    ptVar3 = crt_time_c_localtime_FUN_00600288(&timestamps->modtime);
    uStack_18._2_2_ = (short)ptVar3->tm_mon + 1;
    uStack_18._0_2_ = (short)ptVar3->tm_year + 0x76c;
    (*PTR_SystemTimeToFileTime_00611648)((SYSTEMTIME *)&uStack_18,(LPFILETIME)&stack0x00000010);
    uStack_18._0_2_ = 0x8274;
    uStack_18._2_2_ = 0x60;
    (*PTR_LocalFileTimeToFileTime_006115ec)
              ((FILETIME *)&stack0x0000001c,(LPFILETIME)&stack0x00000014);
    (*PTR_SystemTimeToFileTime_00611648)
              ((SYSTEMTIME *)&stack0x00000010,(LPFILETIME)&stack0x00000028);
    (*PTR_LocalFileTimeToFileTime_006115ec)
              ((FILETIME *)&stack0x00000034,(LPFILETIME)&stack0x0000004c);
    BVar2 = (*PTR_SetFileTime_00611630)
                      (hFile,(FILETIME *)&stack0x00000048,(FILETIME *)&stack0x00000058,
                       (FILETIME *)&stack0x00000038);
    if (BVar2 == 0) {
      uStack00000024 = 0x6082b9;
      (*CloseHandle)(hFile);
      uStack00000030 = 0x6082be;
      DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar1;
    }
    uStack00000024 = 0x6082cd;
    (*CloseHandle)(hFile);
    DVar1 = 0;
  }
  return DVar1;
}


// Assembly code:
// 00608160: PUSH EBX
//   Label: crt_io.c_utime_FUN_00608160
// 00608161: PUSH ESI
// 00608162: PUSH EDI
// 00608163: SUB ESP,0x48
// 00608166: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0060816a: PUSH 0x0
// 0060816c: PUSH 0x0
// 0060816e: PUSH 0x3
// 00608170: PUSH 0x0
// 00608172: PUSH 0x0
// 00608174: PUSH 0xc0000000
// 00608179: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 0060817d: PUSH EDX
// 0060817e: CALL dword ptr CS:[0x611510]
//   XREF to: EXTERNAL:0000004f (COMPUTED_CALL)
//   XREF to: 00611510 (READ)
// 00608185: MOV EBX,EAX
// 00608187: MOV ESI,EAX
// 00608189: CMP EAX,-0x1
// 0060818c: JNZ 0x00608198
//   XREF to: 00608198 (CONDITIONAL_JUMP)
// 0060818e: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00608193: JMP 0x006082cf
//   XREF to: 006082cf (UNCONDITIONAL_JUMP)
// 00608198: LEA EAX,[ESP + 0x20]
//   Label: LAB_00608198
// 0060819c: PUSH EAX
// 0060819d: LEA EAX,[ESP + 0x44]
// 006081a1: PUSH EAX
// 006081a2: LEA EAX,[ESP + 0x38]
// 006081a6: PUSH EAX
// 006081a7: PUSH EBX
// 006081a8: CALL dword ptr CS:[0x611598]
//   XREF to: EXTERNAL:00000071 (COMPUTED_CALL)
//   XREF to: 00611598 (READ)
// 006081af: TEST EAX,EAX
// 006081b1: JNZ 0x006081c7
//   XREF to: 006081c7 (CONDITIONAL_JUMP)
// 006081b3: PUSH EBX
// 006081b4: CALL dword ptr CS:[0x611504]
//   XREF to: EXTERNAL:0000004c (COMPUTED_CALL)
//   XREF to: 00611504 (READ)
// 006081bb: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 006081c0: ADD ESP,0x48
// 006081c3: POP EDI
// 006081c4: POP ESI
// 006081c5: POP EBX
// 006081c6: RET
// 006081c7: TEST EDI,EDI
//   Label: LAB_006081c7
// 006081c9: JNZ 0x006081e0
//   XREF to: 006081e0 (CONDITIONAL_JUMP)
// 006081cb: PUSH EDI
// 006081cc: CALL crt_time.c_time_with_rounding_FUN_006001f0
//   XREF to: 006001f0 (UNCONDITIONAL_CALL)
// 006081d1: ADD ESP,0x4
// 006081d4: LEA EDI,[ESP + 0x38]
// 006081d8: MOV dword ptr [ESP + 0x3c],EAX
// 006081dc: MOV dword ptr [ESP + 0x38],EAX
// 006081e0: LEA EAX,[EDI + 0x4]
//   Label: LAB_006081e0
// 006081e3: PUSH EAX
// 006081e4: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 006081e9: MOV EDX,EAX
// 006081eb: MOV AX,word ptr [EAX + 0x14]
// 006081ef: ADD ESP,0x4
// 006081f2: ADD EAX,0x76c
// 006081f7: MOV word ptr [ESP + 0x10],AX
// 006081fc: MOV word ptr [ESP],AX
// 00608200: MOV AX,word ptr [EDX + 0x10]
// 00608204: INC EAX
// 00608205: MOV word ptr [ESP + 0x12],AX
// 0060820a: MOV word ptr [ESP + 0x2],AX
// 0060820f: MOV AX,word ptr [EDX + 0xc]
// 00608213: MOV word ptr [ESP + 0x16],AX
// 00608218: MOV word ptr [ESP + 0x6],AX
// 0060821d: MOV AX,word ptr [EDX + 0x8]
// 00608221: MOV word ptr [ESP + 0x18],AX
// 00608226: MOV word ptr [ESP + 0x8],AX
// 0060822b: MOV AX,word ptr [EDX + 0x4]
// 0060822f: MOV word ptr [ESP + 0x1a],AX
// 00608234: MOV word ptr [ESP + 0xa],AX
// 00608239: MOV AX,word ptr [EDX]
// 0060823c: MOV word ptr [ESP + 0x1c],AX
// 00608241: MOV word ptr [ESP + 0xc],AX
// 00608246: LEA EAX,[ESP + 0x28]
// 0060824a: PUSH EAX
// 0060824b: LEA EAX,[ESP + 0x4]
// 0060824f: XOR EDX,EDX
// 00608251: PUSH EAX
// 00608252: MOV word ptr [ESP + 0x26],DX
// 00608257: MOV word ptr [ESP + 0x16],DX
// 0060825c: CALL dword ptr CS:[0x611648]
//   XREF to: EXTERNAL:0000009d (COMPUTED_CALL)
//   XREF to: 00611648 (READ)
// 00608263: LEA EAX,[ESP + 0x20]
// 00608267: PUSH EAX
// 00608268: LEA EAX,[ESP + 0x2c]
// 0060826c: PUSH EAX
// 0060826d: CALL dword ptr CS:[0x6115ec]
//   XREF to: EXTERNAL:00000086 (COMPUTED_CALL)
//   XREF to: 006115ec (READ)
// 00608274: LEA EAX,[ESP + 0x28]
// 00608278: PUSH EAX
// 00608279: LEA EAX,[ESP + 0x14]
// 0060827d: PUSH EAX
// 0060827e: CALL dword ptr CS:[0x611648]
//   XREF to: EXTERNAL:0000009d (COMPUTED_CALL)
//   XREF to: 00611648 (READ)
// 00608285: LEA EAX,[ESP + 0x40]
// 00608289: PUSH EAX
// 0060828a: LEA EAX,[ESP + 0x2c]
// 0060828e: PUSH EAX
// 0060828f: CALL dword ptr CS:[0x6115ec]
//   XREF to: EXTERNAL:00000086 (COMPUTED_CALL)
//   XREF to: 006115ec (READ)
// 00608296: LEA EAX,[ESP + 0x20]
// 0060829a: PUSH EAX
// 0060829b: LEA EAX,[ESP + 0x44]
// 0060829f: PUSH EAX
// 006082a0: LEA EAX,[ESP + 0x38]
// 006082a4: PUSH EAX
// 006082a5: PUSH ESI
// 006082a6: CALL dword ptr CS:[0x611630]
//   XREF to: EXTERNAL:00000097 (COMPUTED_CALL)
//   XREF to: 00611630 (READ)
// 006082ad: TEST EAX,EAX
// 006082af: JNZ 0x006082c5
//   XREF to: 006082c5 (CONDITIONAL_JUMP)
// 006082b1: PUSH ESI
// 006082b2: CALL dword ptr CS:[0x611504]
//   XREF to: EXTERNAL:0000004c (COMPUTED_CALL)
//   XREF to: 00611504 (READ)
// 006082b9: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 006082be: ADD ESP,0x48
// 006082c1: POP EDI
// 006082c2: POP ESI
// 006082c3: POP EBX
// 006082c4: RET
// 006082c5: PUSH ESI
//   Label: LAB_006082c5
// 006082c6: CALL dword ptr CS:[0x611504]
//   XREF to: EXTERNAL:0000004c (COMPUTED_CALL)
//   XREF to: 00611504 (READ)
// 006082cd: XOR EAX,EAX
// 006082cf: ADD ESP,0x48
//   Label: LAB_006082cf
// 006082d2: POP EDI
// 006082d3: POP ESI
// 006082d4: POP EBX
// 006082d5: RET
