// Name: crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930
// Address: 0060e930
// Address Range: [[0060e930, 0060eb38]]
// Convention: unknown
// Signature: undefined crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930()
// Cross-references:
//   crt_fstream.cpp_filebuf_underflow_FUN_0060da87 (0060da87) at 0060db7a [UNCONDITIONAL_CALL]
// Globals:
//   GetLastError* GetLastError = 00211f22
//   ReadFile* PTR_ReadFile_00611604 = 002120f2
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   uint g_MaxHandleCount = 0x14
//   SIOControlBlock* g_IOControlBlock = 00000000
//   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
//   SPECIAL_DEVICE_READ_FUNC* g_SpecialDeviceReadFuncPtr = 00000000
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_io.c_getFileTypeFlags_FUN_006088b0
//   crt_stdio.c_lseek_FUN_00606690
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   GetLastError
//   ReadFile

#include "nocturne.h"

/* Signature: undefined1 unk_ReadFileBytesMaybe(undefined4 param_1, undefined4 param_2, undefined4
   param_3) */

uint crt_unknown_c_ReadFileBytesMaybe_FUN_0060e930
               (undefined4 param_1,undefined4 param_2,uint unaff_EBX,undefined4 param_4,uint param_5
               ,char *param_6,DWORD param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  char *pcVar6;
  uint uVar7;
  BADSPACEBASE *in_ESP;
  DWORD unaff_ESI;
  uint unaff_EDI;
  HANDLE unaff_retaddr;
  
  if (((int)param_5 < 0) || (g_MaxHandleCount < param_5)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = crt_io_c_getFileTypeFlags_FUN_006088b0(param_5);
    if (uVar2 == 0) {
      crt_errno_c_setErrno_FUN_00602790(4);
      return 0xffffffff;
    }
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(param_5);
    if ((uVar2 & 1) == 0) {
      crt_errno_c_setErrno_FUN_00602790(6);
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(param_5);
      return 0xffffffff;
    }
    if ((uVar2 & 0x40) == 0) {
      uVar2 = 0;
      while( true ) {
        if ((g_SpecialDeviceReadFuncPtr == (SPECIAL_DEVICE_READ_FUNC *)0x0) ||
           (iVar3 = (*g_IsSpecialDeviceFuncPtr)(param_10), iVar3 == 0)) {
          BVar4 = (*PTR_ReadFile_00611604)
                            (unaff_retaddr,param_6,unaff_ESI,(LPDWORD)&stack0xfffffff4,
                             (LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(param_10);
            DVar5 = (*GetLastError)();
            if (DVar5 == 0x6d) {
              return uVar2;
            }
            goto LAB_0060ea3a;
          }
        }
        else {
          unaff_EDI = (*g_SpecialDeviceReadFuncPtr)(iVar3,param_6,unaff_EBX);
        }
        if (unaff_EDI == 0) break;
        uVar7 = 0;
        iVar3 = 0;
        pcVar6 = param_6;
        if (unaff_EDI != 0) {
          do {
            if (*pcVar6 == '\x1a') {
              crt_stdio_c_lseek_FUN_00606690(param_10,(uVar7 - unaff_EDI) + 1,1);
              goto LAB_0060eb26;
            }
            if (*pcVar6 != '\r') {
              uVar2 = uVar2 + 1;
              pcVar1 = param_6 + iVar3;
              iVar3 = iVar3 + 1;
              *pcVar1 = *pcVar6;
            }
            uVar7 = uVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar7 < unaff_EDI);
        }
        unaff_ESI = unaff_ESI - iVar3;
        param_6 = param_6 + iVar3;
        if (((unaff_EBX & 0x2000) != 0) || (unaff_ESI == 0)) break;
      }
    }
    else {
      uVar2 = unaff_EDI;
      if ((g_SpecialDeviceReadFuncPtr == (SPECIAL_DEVICE_READ_FUNC *)0x0) ||
         (iVar3 = (*g_IsSpecialDeviceFuncPtr)(param_5), uVar2 = unaff_EDI, iVar3 == 0)) {
        BVar4 = (*PTR_ReadFile_00611604)
                          (unaff_retaddr,param_6,param_7,(LPDWORD)&stack0xfffffff4,(LPOVERLAPPED)0x0
                          );
        if (BVar4 == 0) {
          (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(param_10);
          DVar5 = (*GetLastError)();
          if (DVar5 == 0x6d) {
            return uVar2;
          }
LAB_0060ea3a:
          uVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
          return uVar2;
        }
      }
      else {
        uVar2 = (*g_SpecialDeviceReadFuncPtr)(iVar3,param_6,param_7);
      }
    }
LAB_0060eb26:
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(param_10);
  }
  return uVar2;
}


// Assembly code:
// 0060e930: PUSH EBX
//   Label: crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930
// 0060e931: PUSH ESI
// 0060e932: PUSH EDI
// 0060e933: PUSH EBP
// 0060e934: SUB ESP,0x10
// 0060e937: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0060e93b: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0060e93f: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0060e943: TEST EDX,EDX
// 0060e945: JL 0x0060e94f
//   XREF to: 0060e94f (CONDITIONAL_JUMP)
// 0060e947: CMP EDX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 0060e94d: JBE 0x0060e963
//   XREF to: 0060e963 (CONDITIONAL_JUMP)
// 0060e94f: PUSH 0x4
//   Label: LAB_0060e94f
// 0060e951: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060e956: MOV EAX,0xffffffff
// 0060e95b: ADD ESP,0x4
// 0060e95e: JMP 0x0060eb31
//   XREF to: 0060eb31 (UNCONDITIONAL_JUMP)
// 0060e963: MOV EAX,[0x0068526c]
//   Label: LAB_0060e963
//   XREF to: 0068526c (READ)
// 0060e968: MOV EAX,dword ptr [EAX + EDX*0x4]
// 0060e96b: PUSH EDX
// 0060e96c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060e970: CALL crt_io.c_getFileTypeFlags_FUN_006088b0
//   XREF to: 006088b0 (UNCONDITIONAL_CALL)
// 0060e975: ADD ESP,0x4
// 0060e978: MOV EBX,EAX
// 0060e97a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0060e97e: TEST EAX,EAX
// 0060e980: JNZ 0x0060e999
//   XREF to: 0060e999 (CONDITIONAL_JUMP)
// 0060e982: PUSH 0x4
// 0060e984: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060e989: MOV EAX,0xffffffff
// 0060e98e: ADD ESP,0x4
// 0060e991: ADD ESP,0x10
// 0060e994: POP EBP
// 0060e995: POP EDI
// 0060e996: POP ESI
// 0060e997: POP EBX
// 0060e998: RET
// 0060e999: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_0060e999
//   XREF to: Stack[0x4] (READ)
// 0060e99d: PUSH ESI
// 0060e99e: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 0060e9a4: ADD ESP,0x4
// 0060e9a7: TEST BL,0x1
// 0060e9aa: JNZ 0x0060e9cd
//   XREF to: 0060e9cd (CONDITIONAL_JUMP)
// 0060e9ac: PUSH 0x6
// 0060e9ae: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060e9b3: ADD ESP,0x4
// 0060e9b6: PUSH ESI
// 0060e9b7: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060e9bd: MOV EAX,0xffffffff
// 0060e9c2: ADD ESP,0x4
// 0060e9c5: ADD ESP,0x10
// 0060e9c8: POP EBP
// 0060e9c9: POP EDI
// 0060e9ca: POP ESI
// 0060e9cb: POP EBX
// 0060e9cc: RET
// 0060e9cd: TEST BL,0x40
//   Label: LAB_0060e9cd
// 0060e9d0: JZ 0x0060ea47
//   XREF to: 0060ea47 (CONDITIONAL_JUMP)
// 0060e9d2: CMP dword ptr [0x006852ac],0x0
//   XREF to: 006852ac (READ)
// 0060e9d9: JZ 0x0060e9fc
//   XREF to: 0060e9fc (CONDITIONAL_JUMP)
// 0060e9db: PUSH ESI
// 0060e9dc: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 0060e9e2: ADD ESP,0x4
// 0060e9e5: TEST EAX,EAX
// 0060e9e7: JZ 0x0060e9fc
//   XREF to: 0060e9fc (CONDITIONAL_JUMP)
// 0060e9e9: PUSH EDI
// 0060e9ea: PUSH EBP
// 0060e9eb: PUSH EAX
// 0060e9ec: CALL dword ptr [g_SpecialDeviceReadFuncPtr]
//   XREF to: 006852ac (READ)
// 0060e9f2: ADD ESP,0xc
// 0060e9f5: MOV ESI,EAX
// 0060e9f7: JMP 0x0060eb21
//   XREF to: 0060eb21 (UNCONDITIONAL_JUMP)
// 0060e9fc: PUSH 0x0
//   Label: LAB_0060e9fc
// 0060e9fe: LEA EAX,[ESP + 0x4]
// 0060ea02: PUSH EAX
// 0060ea03: PUSH EDI
// 0060ea04: PUSH EBP
// 0060ea05: MOV EBX,dword ptr [ESP + 0x1c]
// 0060ea09: PUSH EBX
// 0060ea0a: CALL dword ptr CS:[0x611604]
//   XREF to: EXTERNAL:0000008c (COMPUTED_CALL)
//   XREF to: 00611604 (READ)
// 0060ea11: MOV ESI,dword ptr [ESP]
// 0060ea14: TEST EAX,EAX
// 0060ea16: JNZ 0x0060eb21
//   XREF to: 0060eb21 (CONDITIONAL_JUMP)
// 0060ea1c: MOV ECX,dword ptr [ESP + 0x24]
// 0060ea20: PUSH ECX
// 0060ea21: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060ea27: ADD ESP,0x4
// 0060ea2a: CALL dword ptr CS:[0x6115a4]
//   XREF to: EXTERNAL:00000074 (COMPUTED_CALL)
//   XREF to: 006115a4 (READ)
// 0060ea31: CMP EAX,0x6d
// 0060ea34: JZ 0x0060eb2f
//   XREF to: 0060eb2f (CONDITIONAL_JUMP)
// 0060ea3a: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   Label: LAB_0060ea3a
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 0060ea3f: ADD ESP,0x10
// 0060ea42: POP EBP
// 0060ea43: POP EDI
// 0060ea44: POP ESI
// 0060ea45: POP EBX
// 0060ea46: RET
// 0060ea47: MOV dword ptr [ESP + 0x4],EDI
//   Label: LAB_0060ea47
// 0060ea4b: XOR ESI,ESI
// 0060ea4d: CMP dword ptr [0x006852ac],0x0
//   Label: LAB_0060ea4d
//   XREF to: 006852ac (READ)
// 0060ea54: JZ 0x0060ea7d
//   XREF to: 0060ea7d (CONDITIONAL_JUMP)
// 0060ea56: MOV EAX,dword ptr [ESP + 0x24]
// 0060ea5a: PUSH EAX
// 0060ea5b: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 0060ea61: ADD ESP,0x4
// 0060ea64: TEST EAX,EAX
// 0060ea66: JZ 0x0060ea7d
//   XREF to: 0060ea7d (CONDITIONAL_JUMP)
// 0060ea68: MOV EDI,dword ptr [ESP + 0x4]
// 0060ea6c: PUSH EDI
// 0060ea6d: PUSH EBP
// 0060ea6e: PUSH EAX
// 0060ea6f: CALL dword ptr [g_SpecialDeviceReadFuncPtr]
//   XREF to: 006852ac (READ)
// 0060ea75: ADD ESP,0xc
// 0060ea78: MOV dword ptr [ESP],EAX
// 0060ea7b: JMP 0x0060eab9
//   XREF to: 0060eab9 (UNCONDITIONAL_JUMP)
// 0060ea7d: PUSH 0x0
//   Label: LAB_0060ea7d
// 0060ea7f: LEA EAX,[ESP + 0x4]
// 0060ea83: PUSH EAX
// 0060ea84: MOV EDX,dword ptr [ESP + 0xc]
// 0060ea88: PUSH EDX
// 0060ea89: PUSH EBP
// 0060ea8a: MOV EBX,dword ptr [ESP + 0x1c]
// 0060ea8e: PUSH EBX
// 0060ea8f: CALL dword ptr CS:[0x611604]
//   XREF to: EXTERNAL:0000008c (COMPUTED_CALL)
//   XREF to: 00611604 (READ)
// 0060ea96: TEST EAX,EAX
// 0060ea98: JNZ 0x0060eab9
//   XREF to: 0060eab9 (CONDITIONAL_JUMP)
// 0060ea9a: MOV ECX,dword ptr [ESP + 0x24]
// 0060ea9e: PUSH ECX
// 0060ea9f: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060eaa5: ADD ESP,0x4
// 0060eaa8: CALL dword ptr CS:[0x6115a4]
//   XREF to: EXTERNAL:00000074 (COMPUTED_CALL)
//   XREF to: 006115a4 (READ)
// 0060eaaf: CMP EAX,0x6d
// 0060eab2: JNZ 0x0060ea3a
//   XREF to: 0060ea3a (CONDITIONAL_JUMP)
// 0060eab4: JMP 0x0060eb2f
//   XREF to: 0060eb2f (UNCONDITIONAL_JUMP)
// 0060eab9: CMP dword ptr [ESP],0x0
//   Label: LAB_0060eab9
// 0060eabd: JZ 0x0060eb21
//   XREF to: 0060eb21 (CONDITIONAL_JUMP)
// 0060eabf: MOV ECX,dword ptr [ESP]
// 0060eac2: MOV EAX,EBP
// 0060eac4: XOR EBX,EBX
// 0060eac6: XOR EDX,EDX
// 0060eac8: TEST ECX,ECX
// 0060eaca: JBE 0x0060eb07
//   XREF to: 0060eb07 (CONDITIONAL_JUMP)
// 0060eacc: MOV CL,byte ptr [EAX]
//   Label: LAB_0060eacc
// 0060eace: CMP CL,0x1a
// 0060ead1: JNZ 0x0060eaee
//   XREF to: 0060eaee (CONDITIONAL_JUMP)
// 0060ead3: MOV ECX,dword ptr [ESP]
// 0060ead6: MOV EAX,EBX
// 0060ead8: SUB EAX,ECX
// 0060eada: PUSH 0x1
// 0060eadc: INC EAX
// 0060eadd: PUSH EAX
// 0060eade: MOV EDI,dword ptr [ESP + 0x2c]
// 0060eae2: PUSH EDI
// 0060eae3: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 0060eae8: ADD ESP,0xc
// 0060eaeb: PUSH EDI
// 0060eaec: JMP 0x0060eb26
//   XREF to: 0060eb26 (UNCONDITIONAL_JUMP)
// 0060eaee: CMP CL,0xd
//   Label: LAB_0060eaee
// 0060eaf1: JZ 0x0060eafe
//   XREF to: 0060eafe (CONDITIONAL_JUMP)
// 0060eaf3: MOV ECX,EDX
// 0060eaf5: INC ESI
// 0060eaf6: LEA EDI,[ECX + EBP*0x1]
// 0060eaf9: MOV CL,byte ptr [EAX]
// 0060eafb: INC EDX
// 0060eafc: MOV byte ptr [EDI],CL
// 0060eafe: MOV EDI,dword ptr [ESP]
//   Label: LAB_0060eafe
// 0060eb01: INC EBX
// 0060eb02: INC EAX
// 0060eb03: CMP EBX,EDI
// 0060eb05: JC 0x0060eacc
//   XREF to: 0060eacc (CONDITIONAL_JUMP)
// 0060eb07: SUB dword ptr [ESP + 0x4],EDX
//   Label: LAB_0060eb07
// 0060eb0b: MOV AH,byte ptr [ESP + 0x9]
// 0060eb0f: ADD EBP,EDX
// 0060eb11: TEST AH,0x20
// 0060eb14: JNZ 0x0060eb21
//   XREF to: 0060eb21 (CONDITIONAL_JUMP)
// 0060eb16: CMP dword ptr [ESP + 0x4],0x0
// 0060eb1b: JNZ 0x0060ea4d
//   XREF to: 0060ea4d (CONDITIONAL_JUMP)
// 0060eb21: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0060eb21
// 0060eb25: PUSH EAX
// 0060eb26: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   Label: LAB_0060eb26
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060eb2c: ADD ESP,0x4
// 0060eb2f: MOV EAX,ESI
//   Label: LAB_0060eb2f
// 0060eb31: ADD ESP,0x10
//   Label: LAB_0060eb31
// 0060eb34: POP EBP
// 0060eb35: POP EDI
// 0060eb36: POP ESI
// 0060eb37: POP EBX
// 0060eb38: RET
