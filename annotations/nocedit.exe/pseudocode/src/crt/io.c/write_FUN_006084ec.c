// Name: crt_io.c_write_FUN_006084ec
// Address: 006084ec
// Address Range: [[006084ec, 006088a0]]
// Convention: __cdecl
// Signature: int crt_io.c_write_FUN_006084ec(int fd, void * buffer, SIZE_T count)
// Cross-references:
//   crt_fstream.cpp_filebuf_overflow_FUN_0060d881 (0060d881) at 0060d90b [UNCONDITIONAL_CALL]
//   crt_io.c_extend_file_for_append_FUN_00608410 (00608410) at 0060849e [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00600c80 (00600c80) at 00600cd4 [UNCONDITIONAL_CALL]
// Globals:
//   SetFilePointer* SetFilePointer = 002121b6
//   WriteFile* PTR_WriteFile_00611678 = 00212300
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   uint g_MaxHandleCount = 0x14
//   SIOControlBlock* g_IOControlBlock = 00000000
//   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
//   SPECIAL_DEVICE_WRITE_FUNC* g_SpecialDeviceWriteFuncPtr = 00000000
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_io.c_extend_file_for_append_FUN_00608410
//   crt_io.c_getFileTypeFlags_FUN_006088b0
//   crt_stack.c_GetStackUsage_FUN_0060c260
//   crt_stack.c_stack_overflow_handler_FUN_005ffa22
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   SetFilePointer
//   WriteFile

#include "nocturne.h"

int __cdecl crt_io_c_write_FUN_006084ec(int fd,void *buffer,SIZE_T count)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  BADSPACEBASE *in_ESP;
  undefined4 uStack00000020;
  undefined4 uStack00000028;
  undefined4 uStack00000038;
  DWORD nNumberOfBytesToWrite;
  DWORD DVar5;
  SIZE_T in_stack_ffffffe4;
  DWORD DVar6;
  undefined1 *hFile;
  undefined1 *hFile_00;
  uint uVar7;
  
  if ((fd < 0) || (g_MaxHandleCount < (uint)fd)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    count = 0xffffffff;
  }
  else {
    hFile = (undefined1 *)g_IOControlBlock->standard_handles[fd];
    uVar1 = crt_io_c_getFileTypeFlags_FUN_006088b0(fd);
    if (uVar1 == 0) {
      crt_errno_c_setErrno_FUN_00602790(4);
      return -1;
    }
    if ((uVar1 & 2) == 0) {
      crt_errno_c_setErrno_FUN_00602790(6);
      return -1;
    }
    uVar7 = uVar1;
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(fd);
    if ((uVar1 & 0x80) != 0) {
      hFile = &DAT_00000002;
      in_stack_ffffffe4 = 0;
      DVar2 = (*SetFilePointer)(&DAT_00000002,0,(PLONG)0x0,2);
      if (DVar2 == 0xffffffff) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
        DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return DVar2;
      }
    }
    if (((uVar7 & 0x8000) != 0) &&
       (iVar3 = crt_io_c_extend_file_for_append_FUN_00608410(fd), iVar3 != 0)) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
      return -1;
    }
    if ((uVar7 & 0x40) == 0) {
      uVar1 = crt_stack_c_GetStackUsage_FUN_0060c260();
      if (uVar1 < 0xb0) {
                    /* WARNING: Subroutine does not return */
        crt_stack_c_stack_overflow_handler_FUN_005ffa22(fd);
      }
      DVar2 = 0x200;
      if (uVar1 < 0x230) {
        DVar2 = 0x80;
      }
      DVar5 = 0;
      nNumberOfBytesToWrite = 0;
      DVar6 = 0;
      if (count != 0) {
        do {
          if (*(char *)((int)buffer + DVar5) == '\n') {
            (&stack0x00000018)[nNumberOfBytesToWrite] = 0xd;
            nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
            if (DVar2 == nNumberOfBytesToWrite) {
              if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
                 (buffer = (void *)(*g_IsSpecialDeviceFuncPtr)(fd), buffer == (void *)0x0)) {
                BVar4 = (*PTR_WriteFile_00611678)
                                  (hFile,&stack0x00000018,DVar2,(LPDWORD)&stack0xffffffdc,
                                   (LPOVERLAPPED)0x0);
                buffer = &stack0x00000018;
                count = DVar2;
                if (BVar4 == 0) {
                  uStack00000028 = 0x608713;
                  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                  uStack00000038 = 0x60871b;
                  DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
                  return DVar2;
                }
              }
              else {
                nNumberOfBytesToWrite =
                     (*g_SpecialDeviceWriteFuncPtr)((int)buffer,&stack0x00000018,DVar2);
                count = (SIZE_T)&stack0x00000018;
              }
              if (DVar2 != nNumberOfBytesToWrite) {
                uStack00000028 = 0x60872e;
                crt_errno_c_setErrno_FUN_00602790(0xc);
                (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                return DVar6 + nNumberOfBytesToWrite;
              }
              nNumberOfBytesToWrite = 0;
              DVar6 = DVar5;
            }
          }
          (&stack0x00000018)[nNumberOfBytesToWrite] = *(undefined1 *)((int)buffer + DVar5);
          DVar5 = DVar5 + 1;
          nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
          if (DVar2 == nNumberOfBytesToWrite) {
            hFile_00 = hFile;
            if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
               (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), hFile_00 = hFile, iVar3 == 0)) {
              hFile = (undefined1 *)0x6087b4;
              BVar4 = (*PTR_WriteFile_00611678)
                                (hFile_00,&stack0x00000018,DVar2,(LPDWORD)&stack0xffffffdc,
                                 (LPOVERLAPPED)0x0);
              if (BVar4 == 0) {
                (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                uStack00000020 = 0x6087c7;
                DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
                return DVar2;
              }
            }
            else {
              nNumberOfBytesToWrite = (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0x00000018,DVar2);
            }
            if (DVar2 != nNumberOfBytesToWrite) {
              crt_errno_c_setErrno_FUN_00602790(0xc);
              (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
              return DVar6 + nNumberOfBytesToWrite;
            }
            nNumberOfBytesToWrite = 0;
            DVar6 = DVar5;
          }
        } while (DVar5 < count);
      }
      if (nNumberOfBytesToWrite != 0) {
        if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
           (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
          BVar4 = (*PTR_WriteFile_00611678)
                            (hFile,&stack0x00000018,nNumberOfBytesToWrite,(LPDWORD)&stack0xffffffe0,
                             (LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
            uStack00000020 = 0x60886b;
            DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
            return DVar2;
          }
        }
        else {
          DVar5 = (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0x00000018,nNumberOfBytesToWrite);
        }
        if (DVar5 != nNumberOfBytesToWrite) {
          crt_errno_c_setErrno_FUN_00602790(0xc);
          (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
          return DVar6 + DVar5;
        }
      }
    }
    else {
      if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
         (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
        BVar4 = (*PTR_WriteFile_00611678)
                          (hFile,buffer,count,(LPDWORD)&stack0xffffffe4,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
          uStack00000020 = 0x608629;
          DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
          return DVar2;
        }
      }
      else {
        in_stack_ffffffe4 = (*g_SpecialDeviceWriteFuncPtr)(iVar3,buffer,count);
      }
      if (in_stack_ffffffe4 != count) {
        count = in_stack_ffffffe4;
        crt_errno_c_setErrno_FUN_00602790(0xc);
      }
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
  }
  return count;
}


// Assembly code:
// 006084ec: PUSH EBX
//   Label: crt_io.c_write_FUN_006084ec
// 006084ed: PUSH ESI
// 006084ee: PUSH EDI
// 006084ef: PUSH EBP
// 006084f0: MOV EBP,ESP
// 006084f2: SUB ESP,0x14
// 006084f5: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 006084f8: TEST EDI,EDI
// 006084fa: JL 0x00608504
//   XREF to: 00608504 (CONDITIONAL_JUMP)
// 006084fc: CMP EDI,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 00608502: JBE 0x00608515
//   XREF to: 00608515 (CONDITIONAL_JUMP)
// 00608504: PUSH 0x4
//   Label: LAB_00608504
// 00608506: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060850b: MOV EAX,0xffffffff
// 00608510: JMP 0x00608656
//   XREF to: 00608656 (UNCONDITIONAL_JUMP)
// 00608515: MOV EDX,dword ptr [0x0068526c]
//   Label: LAB_00608515
//   XREF to: 0068526c (READ)
// 0060851b: MOV EAX,dword ptr [EDX + EDI*0x4]
// 0060851e: PUSH EDI
// 0060851f: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00608522: CALL crt_io.c_getFileTypeFlags_FUN_006088b0
//   XREF to: 006088b0 (UNCONDITIONAL_CALL)
// 00608527: MOV EBX,EAX
// 00608529: ADD ESP,0x4
// 0060852c: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060852f: TEST EAX,EAX
// 00608531: JNZ 0x00608549
//   XREF to: 00608549 (CONDITIONAL_JUMP)
// 00608533: PUSH 0x4
// 00608535: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060853a: MOV EAX,0xffffffff
// 0060853f: ADD ESP,0x4
// 00608542: MOV ESP,EBP
// 00608544: POP EBP
// 00608545: POP EDI
// 00608546: POP ESI
// 00608547: POP EBX
// 00608548: RET
// 00608549: TEST AL,0x2
//   Label: LAB_00608549
// 0060854b: JNZ 0x00608563
//   XREF to: 00608563 (CONDITIONAL_JUMP)
// 0060854d: PUSH 0x6
// 0060854f: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00608554: MOV EAX,0xffffffff
// 00608559: ADD ESP,0x4
// 0060855c: MOV ESP,EBP
// 0060855e: POP EBP
// 0060855f: POP EDI
// 00608560: POP ESI
// 00608561: POP EBX
// 00608562: RET
// 00608563: PUSH EDI
//   Label: LAB_00608563
// 00608564: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 0060856a: ADD ESP,0x4
// 0060856d: TEST BL,0x80
// 00608570: JZ 0x0060859c
//   XREF to: 0060859c (CONDITIONAL_JUMP)
// 00608572: PUSH 0x2
// 00608574: PUSH 0x0
// 00608576: PUSH 0x0
// 00608578: MOV EBX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0060857b: PUSH EBX
// 0060857c: CALL dword ptr CS:[0x61162c]
//   XREF to: EXTERNAL:00000096 (COMPUTED_CALL)
//   XREF to: 0061162c (READ)
// 00608583: CMP EAX,-0x1
// 00608586: JNZ 0x0060859c
//   XREF to: 0060859c (CONDITIONAL_JUMP)
// 00608588: PUSH EDI
// 00608589: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060858f: ADD ESP,0x4
// 00608592: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00608597: JMP 0x00608659
//   XREF to: 00608659 (UNCONDITIONAL_JUMP)
// 0060859c: TEST byte ptr [EBP + -0x3],0x80
//   Label: LAB_0060859c
//   XREF to: Stack[-0x13] (READ)
// 006085a0: JZ 0x006085c5
//   XREF to: 006085c5 (CONDITIONAL_JUMP)
// 006085a2: PUSH EDI
// 006085a3: CALL crt_io.c_extend_file_for_append_FUN_00608410
//   XREF to: 00608410 (UNCONDITIONAL_CALL)
// 006085a8: ADD ESP,0x4
// 006085ab: TEST EAX,EAX
// 006085ad: JZ 0x006085c5
//   XREF to: 006085c5 (CONDITIONAL_JUMP)
// 006085af: PUSH EDI
// 006085b0: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 006085b6: MOV EAX,0xffffffff
// 006085bb: ADD ESP,0x4
// 006085be: MOV ESP,EBP
// 006085c0: POP EBP
// 006085c1: POP EDI
// 006085c2: POP ESI
// 006085c3: POP EBX
// 006085c4: RET
// 006085c5: TEST byte ptr [EBP + -0x4],0x40
//   Label: LAB_006085c5
//   XREF to: Stack[-0x14] (READ)
// 006085c9: JZ 0x00608660
//   XREF to: 00608660 (CONDITIONAL_JUMP)
// 006085cf: CMP dword ptr [0x006852b0],0x0
//   XREF to: 006852b0 (READ)
// 006085d6: JZ 0x006085fd
//   XREF to: 006085fd (CONDITIONAL_JUMP)
// 006085d8: PUSH EDI
// 006085d9: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 006085df: ADD ESP,0x4
// 006085e2: TEST EAX,EAX
// 006085e4: JZ 0x006085fd
//   XREF to: 006085fd (CONDITIONAL_JUMP)
// 006085e6: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 006085e9: PUSH EDX
// 006085ea: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 006085ed: PUSH EBX
// 006085ee: PUSH EAX
// 006085ef: CALL dword ptr [g_SpecialDeviceWriteFuncPtr]
//   XREF to: 006852b0 (READ)
// 006085f5: ADD ESP,0xc
// 006085f8: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 006085fb: JMP 0x00608630
//   XREF to: 00608630 (UNCONDITIONAL_JUMP)
// 006085fd: PUSH 0x0
//   Label: LAB_006085fd
// 006085ff: LEA EAX,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 00608602: PUSH EAX
// 00608603: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00608606: PUSH EBX
// 00608607: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060860a: PUSH ECX
// 0060860b: MOV ESI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0060860e: PUSH ESI
// 0060860f: CALL dword ptr CS:[0x611678]
//   XREF to: EXTERNAL:000000a9 (COMPUTED_CALL)
//   XREF to: 00611678 (READ)
// 00608616: TEST EAX,EAX
// 00608618: JNZ 0x00608630
//   XREF to: 00608630 (CONDITIONAL_JUMP)
// 0060861a: PUSH EDI
// 0060861b: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00608621: ADD ESP,0x4
// 00608624: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00608629: MOV ESP,EBP
// 0060862b: POP EBP
// 0060862c: POP EDI
// 0060862d: POP ESI
// 0060862e: POP EBX
// 0060862f: RET
// 00608630: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00608630
//   XREF to: Stack[-0x1c] (READ)
// 00608633: CMP EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00608636: JZ 0x0060864c
//   XREF to: 0060864c (CONDITIONAL_JUMP)
// 0060863c: PUSH 0xc
// 0060863e: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00608643: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00608646: ADD ESP,0x4
// 00608649: MOV dword ptr [EBP + 0x1c],EAX
//   XREF to: Stack[0xc] (WRITE)
// 0060864c: PUSH EDI
//   Label: LAB_0060864c
// 0060864d: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00608653: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00608656: ADD ESP,0x4
//   Label: LAB_00608656
// 00608659: MOV ESP,EBP
//   Label: LAB_00608659
// 0060865b: POP EBP
// 0060865c: POP EDI
// 0060865d: POP ESI
// 0060865e: POP EBX
// 0060865f: RET
// 00608660: CALL crt_stack.c_GetStackUsage_FUN_0060c260
//   Label: LAB_00608660
//   XREF to: 0060c260 (UNCONDITIONAL_CALL)
// 00608665: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00608668: CMP EAX,0xb0
// 0060866d: JNC 0x00608674
//   XREF to: 00608674 (CONDITIONAL_JUMP)
// 0060866f: CALL crt_stack.c_stack_overflow_handler_FUN_005ffa22
//   XREF to: 005ffa22 (UNCONDITIONAL_CALL)
// 00608674: MOV ECX,dword ptr [EBP + -0x10]
//   Label: LAB_00608674
//   XREF to: Stack[-0x20] (READ)
// 00608677: MOV EBX,0x200
// 0060867c: CMP ECX,0x230
// 00608682: JNC 0x00608689
//   XREF to: 00608689 (CONDITIONAL_JUMP)
// 00608684: MOV EBX,0x80
// 00608689: LEA EAX,[EBX + 0x3]
//   Label: LAB_00608689
// 0060868c: AND AL,0xfc
// 0060868e: SUB ESP,EAX
// 00608690: XOR EAX,EAX
// 00608692: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00608695: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00608698: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0060869b: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0060869e: MOV ESI,ESP
// 006086a0: TEST EAX,EAX
// 006086a2: JBE 0x0060880d
//   XREF to: 0060880d (CONDITIONAL_JUMP)
// 006086a8: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_006086a8
//   XREF to: Stack[0x8] (READ)
// 006086ab: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 006086ae: CMP byte ptr [EAX],0xa
// 006086b1: JNZ 0x00608755
//   XREF to: 00608755 (CONDITIONAL_JUMP)
// 006086b7: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 006086ba: MOV byte ptr [ESI + EAX*0x1],0xd
// 006086be: MOV ECX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 006086c1: INC ECX
// 006086c2: MOV dword ptr [EBP + -0x14],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 006086c5: CMP EBX,ECX
// 006086c7: JNZ 0x00608755
//   XREF to: 00608755 (CONDITIONAL_JUMP)
// 006086cd: CMP dword ptr [0x006852b0],0x0
//   XREF to: 006852b0 (READ)
// 006086d4: JZ 0x006086f5
//   XREF to: 006086f5 (CONDITIONAL_JUMP)
// 006086d6: PUSH EDI
// 006086d7: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 006086dd: ADD ESP,0x4
// 006086e0: TEST EAX,EAX
// 006086e2: JZ 0x006086f5
//   XREF to: 006086f5 (CONDITIONAL_JUMP)
// 006086e4: PUSH EBX
// 006086e5: PUSH ESI
// 006086e6: PUSH EAX
// 006086e7: CALL dword ptr [g_SpecialDeviceWriteFuncPtr]
//   XREF to: 006852b0 (READ)
// 006086ed: ADD ESP,0xc
// 006086f0: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 006086f3: JMP 0x00608722
//   XREF to: 00608722 (UNCONDITIONAL_JUMP)
// 006086f5: PUSH 0x0
//   Label: LAB_006086f5
// 006086f7: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x24] (DATA)
// 006086fa: PUSH EAX
// 006086fb: PUSH EBX
// 006086fc: PUSH ESI
// 006086fd: MOV ECX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00608700: PUSH ECX
// 00608701: CALL dword ptr CS:[0x611678]
//   XREF to: EXTERNAL:000000a9 (COMPUTED_CALL)
//   XREF to: 00611678 (READ)
// 00608708: TEST EAX,EAX
// 0060870a: JNZ 0x00608722
//   XREF to: 00608722 (CONDITIONAL_JUMP)
// 0060870c: PUSH EDI
// 0060870d: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00608713: ADD ESP,0x4
// 00608716: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 0060871b: MOV ESP,EBP
// 0060871d: POP EBP
// 0060871e: POP EDI
// 0060871f: POP ESI
// 00608720: POP EBX
// 00608721: RET
// 00608722: CMP EBX,dword ptr [EBP + -0x14]
//   Label: LAB_00608722
//   XREF to: Stack[-0x24] (READ)
// 00608725: JZ 0x0060874a
//   XREF to: 0060874a (CONDITIONAL_JUMP)
// 00608727: PUSH 0xc
// 00608729: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060872e: ADD ESP,0x4
// 00608731: PUSH EDI
// 00608732: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00608738: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0060873b: MOV EBX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0060873e: ADD ESP,0x4
// 00608741: ADD EAX,EBX
// 00608743: MOV ESP,EBP
// 00608745: POP EBP
// 00608746: POP EDI
// 00608747: POP ESI
// 00608748: POP EBX
// 00608749: RET
// 0060874a: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0060874a
//   XREF to: Stack[-0x20] (READ)
// 0060874d: XOR EDX,EDX
// 0060874f: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00608752: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00608755: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00608755
//   XREF to: Stack[0x8] (READ)
// 00608758: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0060875b: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0060875e: MOV AL,byte ptr [EAX]
// 00608760: MOV byte ptr [EDX + ESI*0x1],AL
// 00608763: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00608766: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00608769: INC EAX
// 0060876a: INC EDX
// 0060876b: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0060876e: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00608771: CMP EBX,EDX
// 00608773: JNZ 0x00608801
//   XREF to: 00608801 (CONDITIONAL_JUMP)
// 00608779: CMP dword ptr [0x006852b0],0x0
//   XREF to: 006852b0 (READ)
// 00608780: JZ 0x006087a1
//   XREF to: 006087a1 (CONDITIONAL_JUMP)
// 00608782: PUSH EDI
// 00608783: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 00608789: ADD ESP,0x4
// 0060878c: TEST EAX,EAX
// 0060878e: JZ 0x006087a1
//   XREF to: 006087a1 (CONDITIONAL_JUMP)
// 00608790: PUSH EBX
// 00608791: PUSH ESI
// 00608792: PUSH EAX
// 00608793: CALL dword ptr [g_SpecialDeviceWriteFuncPtr]
//   XREF to: 006852b0 (READ)
// 00608799: ADD ESP,0xc
// 0060879c: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0060879f: JMP 0x006087ce
//   XREF to: 006087ce (UNCONDITIONAL_JUMP)
// 006087a1: PUSH 0x0
//   Label: LAB_006087a1
// 006087a3: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x24] (DATA)
// 006087a6: PUSH EAX
// 006087a7: PUSH EBX
// 006087a8: PUSH ESI
// 006087a9: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 006087ac: PUSH EDX
// 006087ad: CALL dword ptr CS:[0x611678]
//   XREF to: EXTERNAL:000000a9 (COMPUTED_CALL)
//   XREF to: 00611678 (READ)
// 006087b4: TEST EAX,EAX
// 006087b6: JNZ 0x006087ce
//   XREF to: 006087ce (CONDITIONAL_JUMP)
// 006087b8: PUSH EDI
// 006087b9: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 006087bf: ADD ESP,0x4
// 006087c2: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 006087c7: MOV ESP,EBP
// 006087c9: POP EBP
// 006087ca: POP EDI
// 006087cb: POP ESI
// 006087cc: POP EBX
// 006087cd: RET
// 006087ce: CMP EBX,dword ptr [EBP + -0x14]
//   Label: LAB_006087ce
//   XREF to: Stack[-0x24] (READ)
// 006087d1: JZ 0x006087f6
//   XREF to: 006087f6 (CONDITIONAL_JUMP)
// 006087d3: PUSH 0xc
// 006087d5: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006087da: ADD ESP,0x4
// 006087dd: PUSH EDI
// 006087de: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 006087e4: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 006087e7: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 006087ea: ADD ESP,0x4
// 006087ed: ADD EAX,EDX
// 006087ef: MOV ESP,EBP
// 006087f1: POP EBP
// 006087f2: POP EDI
// 006087f3: POP ESI
// 006087f4: POP EBX
// 006087f5: RET
// 006087f6: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_006087f6
//   XREF to: Stack[-0x20] (READ)
// 006087f9: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 006087fc: XOR EAX,EAX
// 006087fe: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00608801: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00608801
//   XREF to: Stack[-0x20] (READ)
// 00608804: CMP EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00608807: JC 0x006086a8
//   XREF to: 006086a8 (CONDITIONAL_JUMP)
// 0060880d: CMP dword ptr [EBP + -0x14],0x0
//   Label: LAB_0060880d
//   XREF to: Stack[-0x24] (READ)
// 00608811: JZ 0x0060864c
//   XREF to: 0060864c (CONDITIONAL_JUMP)
// 00608817: CMP dword ptr [0x006852b0],0x0
//   XREF to: 006852b0 (READ)
// 0060881e: JZ 0x00608842
//   XREF to: 00608842 (CONDITIONAL_JUMP)
// 00608820: PUSH EDI
// 00608821: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 00608827: ADD ESP,0x4
// 0060882a: TEST EAX,EAX
// 0060882c: JZ 0x00608842
//   XREF to: 00608842 (CONDITIONAL_JUMP)
// 0060882e: MOV EBX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00608831: PUSH EBX
// 00608832: PUSH ESI
// 00608833: PUSH EAX
// 00608834: CALL dword ptr [g_SpecialDeviceWriteFuncPtr]
//   XREF to: 006852b0 (READ)
// 0060883a: ADD ESP,0xc
// 0060883d: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00608840: JMP 0x00608872
//   XREF to: 00608872 (UNCONDITIONAL_JUMP)
// 00608842: PUSH 0x0
//   Label: LAB_00608842
// 00608844: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 00608847: PUSH EAX
// 00608848: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0060884b: PUSH EAX
// 0060884c: PUSH ESI
// 0060884d: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00608850: PUSH EDX
// 00608851: CALL dword ptr CS:[0x611678]
//   XREF to: EXTERNAL:000000a9 (COMPUTED_CALL)
//   XREF to: 00611678 (READ)
// 00608858: TEST EAX,EAX
// 0060885a: JNZ 0x00608872
//   XREF to: 00608872 (CONDITIONAL_JUMP)
// 0060885c: PUSH EDI
// 0060885d: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00608863: ADD ESP,0x4
// 00608866: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 0060886b: MOV ESP,EBP
// 0060886d: POP EBP
// 0060886e: POP EDI
// 0060886f: POP ESI
// 00608870: POP EBX
// 00608871: RET
// 00608872: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00608872
//   XREF to: Stack[-0x20] (READ)
// 00608875: CMP EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00608878: JZ 0x0060864c
//   XREF to: 0060864c (CONDITIONAL_JUMP)
// 0060887e: PUSH 0xc
// 00608880: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00608885: ADD ESP,0x4
// 00608888: PUSH EDI
// 00608889: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060888f: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00608892: MOV ESI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00608895: ADD ESP,0x4
// 00608898: ADD EAX,ESI
// 0060889a: MOV ESP,EBP
// 0060889c: POP EBP
// 0060889d: POP EDI
// 0060889e: POP ESI
// 0060889f: POP EBX
// 006088a0: RET
