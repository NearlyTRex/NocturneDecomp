// Name: crt_stdio.c_CreateFileImpl_FUN_006090a0
// Address: 006090a0
// Address Range: [[006090a0, 006092e0]]
// Convention: __cdecl
// Signature: HANDLE crt_stdio.c_CreateFileImpl_FUN_006090a0(char * filename, dword access_mode, dword share_mode, va_list_t * extra_args)
// Cross-references:
//   crt_stdio.c_CreateFileVariadic_FUN_00609074 (00609074) at 00609091 [UNCONDITIONAL_CALL]
// Globals:
//   CloseHandle* CloseHandle = 00211c38
//   CreateFileA* PTR_CreateFileA_00611510 = 00211c6a
//   TerminatedCString s_con_006590a0
//   undefined4 DAT_00684ed0
//   REGISTER_HANDLE_FUNC* PTR_crt_sync.c_RegisterHandle_FUN_00602438_00684ef0 = 00602438
//   uint g_MaxHandleCount = 0x14
//   undefined4 DAT_0068528c
//   undefined4 DAT_006854ec
// Function calls:
//   CloseHandle
//   CreateFileA
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_io.c_CheckFileHandleAvailability_FUN_00608940
//   crt_io.c_ConvertAccessMode_FUN_0060c850
//   crt_io.c_ConvertCreationDisposition_FUN_0060c894
//   crt_io.c_CreateFallbackHandle_FUN_00608b88
//   crt_io.c_IsSpecialDevice_FUN_0060c270
//   crt_io.c_register_handler_wrapper_FUN_00602438
//   crt_io.c_setFileDescriptorFlags_FUN_00608908
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

HANDLE __cdecl
crt_stdio_c_CreateFileImpl_FUN_006090a0
          (char *filename,dword access_mode,dword share_mode,va_list_t *extra_args)

{
  uint *puVar1;
  int iVar2;
  HANDLE pvVar3;
  HANDLE handle_index;
  DWORD dwCreationDisposition;
  DWORD unaff_EBX;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  DWORD dwFlagsAndAttributes;
  uint access_mode_00;
  DWORD creation_disposition;
  DWORD flags_and_attributes;
  DWORD share_mode_windows;
  DWORD desired_access;
  DWORD extra_parameter;
  
  iVar2 = crt_io_c_CheckFileHandleAvailability_FUN_00608940();
  if (iVar2 != 0) {
    crt_errno_c_setErrno_FUN_00602790(0xb);
    return (HANDLE)0xffffffff;
  }
  access_mode_00 = access_mode & 7;
  crt_io_c_ConvertAccessMode_FUN_0060c850(access_mode_00,&desired_access,&extra_parameter);
  dwFlagsAndAttributes = 0x80;
  crt_io_c_ConvertCreationDisposition_FUN_0060c894(share_mode | access_mode_00,&share_mode_windows);
  if ((DAT_0068528c == (code *)0x0) ||
     (iVar2 = crt_string_c_stricmp_FUN_005fe7f0(filename,"con"), iVar2 != 0)) {
    if ((access_mode & 0x20) == 0) {
      if ((access_mode & 0x40) == 0) {
LAB_006091db:
        dwCreationDisposition = 3;
      }
      else {
        dwCreationDisposition = 5;
      }
    }
    else {
      puVar1 = (uint *)*extra_args;
      *extra_args = (va_list_t)(puVar1 + 1);
      uVar4 = *puVar1;
      *extra_args = (va_list_t)0x0;
      extra_parameter = uVar4 & ~DAT_006854ec;
      if (((extra_parameter & 0x100) != 0) && ((extra_parameter & 0x80) == 0)) {
        dwFlagsAndAttributes = 1;
      }
      if ((access_mode & 0x400) == 0) {
        if ((access_mode & 0x40) == 0) {
          unaff_EBX = 4;
          goto LAB_006091db;
        }
        unaff_EBX = 2;
        dwCreationDisposition = 1;
      }
      else {
        unaff_EBX = 1;
        dwCreationDisposition = 1;
      }
    }
    pvVar3 = (*PTR_CreateFileA_00611510)
                       (filename,desired_access,share_mode_windows,
                        (LPSECURITY_ATTRIBUTES)&stack0xffffffd8,dwCreationDisposition,
                        dwFlagsAndAttributes,(HANDLE)0x0);
    if (pvVar3 == (HANDLE)0xffffffff) {
      if ((access_mode & 0x20) != 0) {
        pvVar3 = (*PTR_CreateFileA_00611510)
                           (filename,desired_access,share_mode_windows,(LPSECURITY_ATTRIBUTES)0x0,
                            unaff_EBX,dwFlagsAndAttributes,(HANDLE)0x0);
      }
      if (pvVar3 == (HANDLE)0xffffffff) {
        pvVar3 = (HANDLE)crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return pvVar3;
      }
    }
    handle_index = (HANDLE)(*PTR_crt_sync_c_RegisterHandle_FUN_00602438_00684ef0)(pvVar3);
    uVar4 = 0;
    if (g_MaxHandleCount <= handle_index) {
      (*CloseHandle)(pvVar3);
      crt_errno_c_setErrno_FUN_00602790(5);
      return (HANDLE)0xffffffff;
    }
    iVar2 = crt_io_c_IsSpecialDevice_FUN_0060c270((int)handle_index);
    if (iVar2 != 0) {
      uVar4 = 0x2000;
    }
  }
  else {
    pvVar3 = crt_io_c_CreateFallbackHandle_FUN_00608b88();
    handle_index = (HANDLE)(*PTR_crt_sync_c_RegisterHandle_FUN_00602438_00684ef0)(pvVar3);
    uVar4 = 0x2000;
    (*DAT_0068528c)();
  }
  if (access_mode_00 == 2) {
    uVar4 = uVar4 | 3;
  }
  else if (access_mode_00 == 0) {
    uVar4 = uVar4 | 1;
  }
  else if (access_mode_00 == 1) {
    uVar4 = uVar4 | 2;
  }
  if ((share_mode & 0x10) != 0) {
    uVar4 = uVar4 | 0x80;
  }
  if ((share_mode & 0x300) == 0) {
    if (DAT_00684ed0 != 0x200) goto LAB_006092cd;
  }
  else if ((share_mode & 0x200) == 0) goto LAB_006092cd;
  uVar4 = uVar4 | 0x40;
LAB_006092cd:
  crt_io_c_setFileDescriptorFlags_FUN_00608908((int)handle_index,uVar4);
  return handle_index;
}


// Assembly code:
// 006090a0: PUSH EBX
//   Label: crt_stdio.c_CreateFileImpl_FUN_006090a0
// 006090a1: PUSH ESI
// 006090a2: PUSH EDI
// 006090a3: PUSH EBP
// 006090a4: SUB ESP,0x18
// 006090a7: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 006090ab: CALL crt_io.c_CheckFileHandleAvailability_FUN_00608940
//   XREF to: 00608940 (UNCONDITIONAL_CALL)
// 006090b0: TEST EAX,EAX
// 006090b2: JZ 0x006090c8
//   XREF to: 006090c8 (CONDITIONAL_JUMP)
// 006090b4: PUSH 0xb
// 006090b6: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006090bb: MOV EAX,0xffffffff
// 006090c0: ADD ESP,0x4
// 006090c3: JMP 0x006092d9
//   XREF to: 006092d9 (UNCONDITIONAL_JUMP)
// 006090c8: LEA EAX,[ESP + 0x14]
//   Label: LAB_006090c8
//   XREF to: Stack[-0x14] (DATA)
// 006090cc: PUSH EAX
// 006090cd: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x18] (DATA)
// 006090d1: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 006090d5: PUSH EAX
// 006090d6: AND ESI,0x7
// 006090d9: PUSH ESI
// 006090da: CALL crt_io.c_ConvertAccessMode_FUN_0060c850
//   XREF to: 0060c850 (UNCONDITIONAL_CALL)
// 006090df: ADD ESP,0xc
// 006090e2: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 006090e6: PUSH EAX
// 006090e7: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 006090eb: OR EAX,ESI
// 006090ed: PUSH EAX
// 006090ee: MOV EBP,0x80
// 006090f3: CALL crt_io.c_ConvertCreationDisposition_FUN_0060c894
//   XREF to: 0060c894 (UNCONDITIONAL_CALL)
// 006090f8: MOV EDX,0xc
// 006090fd: ADD ESP,0x8
// 00609100: XOR ECX,ECX
// 00609102: MOV AH,byte ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 00609106: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x28] (DATA)
// 00609109: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0060910d: TEST AH,0x80
// 00609110: SETZ AL
// 00609113: AND EAX,0xff
// 00609118: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0060911c: CMP dword ptr [0x0068528c],0x0
//   XREF to: 0068528c (READ)
// 00609123: JZ 0x00609164
//   XREF to: 00609164 (CONDITIONAL_JUMP)
// 00609125: PUSH 0x6590a0
//   XREF to: 006590a0 (DATA)
// 0060912a: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0060912e: PUSH EDX
// 0060912f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00609134: ADD ESP,0x8
// 00609137: TEST EAX,EAX
// 00609139: JNZ 0x00609164
//   XREF to: 00609164 (CONDITIONAL_JUMP)
// 0060913b: CALL crt_io.c_CreateFallbackHandle_FUN_00608b88
//   XREF to: 00608b88 (UNCONDITIONAL_CALL)
// 00609140: PUSH EAX
// 00609141: CALL dword ptr [PTR_crt_sync.c_RegisterHandle_FUN_00602438_00684ef0]
//   XREF to: 00602438 (COMPUTED_CALL)
//   XREF to: 00684ef0 (READ)
// 00609147: ADD ESP,0x4
// 0060914a: PUSH -0x1
// 0060914c: PUSH EAX
// 0060914d: PUSH 0x0
// 0060914f: MOV EBX,0x2000
// 00609154: MOV EBP,EAX
// 00609156: CALL dword ptr [DAT_0068528c]
//   XREF to: 0068528c (READ)
// 0060915c: ADD ESP,0xc
// 0060915f: JMP 0x00609286
//   XREF to: 00609286 (UNCONDITIONAL_JUMP)
// 00609164: MOV DL,byte ptr [ESP + 0x30]
//   Label: LAB_00609164
//   XREF to: Stack[0x8] (READ)
// 00609168: TEST DL,0x20
// 0060916b: JZ 0x006091cf
//   XREF to: 006091cf (CONDITIONAL_JUMP)
// 0060916d: MOV EBX,dword ptr [EDI]
// 0060916f: ADD EBX,0x4
// 00609172: MOV dword ptr [EDI],EBX
// 00609174: MOV EAX,dword ptr [EBX + -0x4]
// 00609177: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060917b: MOV dword ptr [EDI],0x0
// 00609181: MOV EAX,[0x006854ec]
//   XREF to: 006854ec (READ)
// 00609186: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0060918a: NOT EAX
// 0060918c: AND ECX,EAX
// 0060918e: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00609192: TEST byte ptr [ESP + 0x15],0x1
//   XREF to: Stack[-0x13] (READ)
// 00609197: JZ 0x006091a5
//   XREF to: 006091a5 (CONDITIONAL_JUMP)
// 00609199: TEST byte ptr [ESP + 0x14],0x80
//   XREF to: Stack[-0x14] (READ)
// 0060919e: JNZ 0x006091a5
//   XREF to: 006091a5 (CONDITIONAL_JUMP)
// 006091a0: MOV EBP,0x1
// 006091a5: TEST byte ptr [ESP + 0x31],0x4
//   Label: LAB_006091a5
//   XREF to: Stack[0x9] (READ)
// 006091aa: JZ 0x006091b5
//   XREF to: 006091b5 (CONDITIONAL_JUMP)
// 006091ac: MOV EBX,0x1
// 006091b1: MOV EAX,EBX
// 006091b3: JMP 0x006091e0
//   XREF to: 006091e0 (UNCONDITIONAL_JUMP)
// 006091b5: TEST byte ptr [ESP + 0x30],0x40
//   Label: LAB_006091b5
//   XREF to: Stack[0x8] (READ)
// 006091ba: JZ 0x006091c8
//   XREF to: 006091c8 (CONDITIONAL_JUMP)
// 006091bc: MOV EBX,0x2
// 006091c1: MOV EAX,0x1
// 006091c6: JMP 0x006091e0
//   XREF to: 006091e0 (UNCONDITIONAL_JUMP)
// 006091c8: MOV EBX,0x4
//   Label: LAB_006091c8
// 006091cd: JMP 0x006091db
//   XREF to: 006091db (UNCONDITIONAL_JUMP)
// 006091cf: TEST DL,0x40
//   Label: LAB_006091cf
// 006091d2: JZ 0x006091db
//   XREF to: 006091db (CONDITIONAL_JUMP)
// 006091d4: MOV EAX,0x5
// 006091d9: JMP 0x006091e0
//   XREF to: 006091e0 (UNCONDITIONAL_JUMP)
// 006091db: MOV EAX,0x3
//   Label: LAB_006091db
// 006091e0: PUSH 0x0
//   Label: LAB_006091e0
// 006091e2: PUSH EBP
// 006091e3: PUSH EAX
// 006091e4: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x28] (DATA)
// 006091e8: PUSH EAX
// 006091e9: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 006091ed: PUSH EDI
// 006091ee: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 006091f2: PUSH EAX
// 006091f3: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 006091f7: PUSH EDX
// 006091f8: CALL dword ptr CS:[0x611510]
//   XREF to: EXTERNAL:0000004f (COMPUTED_CALL)
//   XREF to: 00611510 (READ)
// 006091ff: MOV EDI,EAX
// 00609201: CMP EAX,-0x1
// 00609204: JNZ 0x0060923d
//   XREF to: 0060923d (CONDITIONAL_JUMP)
// 00609206: TEST byte ptr [ESP + 0x30],0x20
// 0060920b: JZ 0x0060922b
//   XREF to: 0060922b (CONDITIONAL_JUMP)
// 0060920d: PUSH 0x0
// 0060920f: PUSH EBP
// 00609210: PUSH EBX
// 00609211: PUSH 0x0
// 00609213: MOV EBX,dword ptr [ESP + 0x1c]
// 00609217: PUSH EBX
// 00609218: MOV ECX,dword ptr [ESP + 0x24]
// 0060921c: PUSH ECX
// 0060921d: MOV EDI,dword ptr [ESP + 0x44]
// 00609221: PUSH EDI
// 00609222: CALL dword ptr CS:[0x611510]
//   XREF to: EXTERNAL:0000004f (COMPUTED_CALL)
//   XREF to: 00611510 (READ)
// 00609229: MOV EDI,EAX
// 0060922b: CMP EDI,-0x1
//   Label: LAB_0060922b
// 0060922e: JNZ 0x0060923d
//   XREF to: 0060923d (CONDITIONAL_JUMP)
// 00609230: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00609235: ADD ESP,0x18
// 00609238: POP EBP
// 00609239: POP EDI
// 0060923a: POP ESI
// 0060923b: POP EBX
// 0060923c: RET
// 0060923d: PUSH EDI
//   Label: LAB_0060923d
// 0060923e: CALL dword ptr [PTR_crt_sync.c_RegisterHandle_FUN_00602438_00684ef0]
//   XREF to: 00602438 (COMPUTED_CALL)
//   XREF to: 00684ef0 (READ)
// 00609244: XOR EBX,EBX
// 00609246: MOV EDX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 0060924c: ADD ESP,0x4
// 0060924f: MOV EBP,EAX
// 00609251: CMP EAX,EDX
// 00609253: JC 0x00609274
//   XREF to: 00609274 (CONDITIONAL_JUMP)
// 00609255: PUSH EDI
// 00609256: CALL dword ptr CS:[0x611504]
//   XREF to: EXTERNAL:0000004c (COMPUTED_CALL)
//   XREF to: 00611504 (READ)
// 0060925d: PUSH 0x5
// 0060925f: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00609264: MOV EAX,0xffffffff
// 00609269: ADD ESP,0x4
// 0060926c: ADD ESP,0x18
// 0060926f: POP EBP
// 00609270: POP EDI
// 00609271: POP ESI
// 00609272: POP EBX
// 00609273: RET
// 00609274: PUSH EAX
//   Label: LAB_00609274
// 00609275: CALL crt_io.c_IsSpecialDevice_FUN_0060c270
//   XREF to: 0060c270 (UNCONDITIONAL_CALL)
// 0060927a: ADD ESP,0x4
// 0060927d: TEST EAX,EAX
// 0060927f: JZ 0x00609286
//   XREF to: 00609286 (CONDITIONAL_JUMP)
// 00609281: MOV EBX,0x2000
// 00609286: CMP ESI,0x2
//   Label: LAB_00609286
// 00609289: JNZ 0x00609290
//   XREF to: 00609290 (CONDITIONAL_JUMP)
// 0060928b: OR BL,0x3
// 0060928e: JMP 0x006092a1
//   XREF to: 006092a1 (UNCONDITIONAL_JUMP)
// 00609290: TEST ESI,ESI
//   Label: LAB_00609290
// 00609292: JNZ 0x00609299
//   XREF to: 00609299 (CONDITIONAL_JUMP)
// 00609294: OR BL,0x1
// 00609297: JMP 0x006092a1
//   XREF to: 006092a1 (UNCONDITIONAL_JUMP)
// 00609299: CMP ESI,0x1
//   Label: LAB_00609299
// 0060929c: JNZ 0x006092a1
//   XREF to: 006092a1 (CONDITIONAL_JUMP)
// 0060929e: OR BL,0x2
// 006092a1: TEST byte ptr [ESP + 0x30],0x10
//   Label: LAB_006092a1
// 006092a6: JZ 0x006092ab
//   XREF to: 006092ab (CONDITIONAL_JUMP)
// 006092a8: OR BL,0x80
// 006092ab: MOV EAX,EBX
//   Label: LAB_006092ab
// 006092ad: MOV DL,byte ptr [ESP + 0x31]
// 006092b1: OR AL,0x40
// 006092b3: TEST DL,0x3
// 006092b6: JZ 0x006092bf
//   XREF to: 006092bf (CONDITIONAL_JUMP)
// 006092b8: TEST DL,0x2
// 006092bb: JZ 0x006092cd
//   XREF to: 006092cd (CONDITIONAL_JUMP)
// 006092bd: JMP 0x006092cb
//   XREF to: 006092cb (UNCONDITIONAL_JUMP)
// 006092bf: CMP dword ptr [0x00684ed0],0x200
//   Label: LAB_006092bf
//   XREF to: 00684ed0 (READ)
// 006092c9: JNZ 0x006092cd
//   XREF to: 006092cd (CONDITIONAL_JUMP)
// 006092cb: MOV EBX,EAX
//   Label: LAB_006092cb
// 006092cd: PUSH EBX
//   Label: LAB_006092cd
// 006092ce: PUSH EBP
// 006092cf: CALL crt_io.c_setFileDescriptorFlags_FUN_00608908
//   XREF to: 00608908 (UNCONDITIONAL_CALL)
// 006092d4: ADD ESP,0x8
// 006092d7: MOV EAX,EBP
// 006092d9: ADD ESP,0x18
//   Label: LAB_006092d9
// 006092dc: POP EBP
// 006092dd: POP EDI
// 006092de: POP ESI
// 006092df: POP EBX
// 006092e0: RET
