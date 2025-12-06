; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_io.c_write_FUN_006084ec(int fd, void * buffer, SIZE_T count)
;
; Parameters:
; int              Stack[0x4]:4   fd
; void *           Stack[0x8]:4   buffer
; typedef SIZE_T ULONG_PTR Stack[0xc]:4   count
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   crt_fstream.cpp_filebuf_overflow_FUN_0060d881 at 0060d90b
;   crt_io.c_extend_file_for_append_FUN_00608410 at 0060849e
;   crt_unknown.c_FUN_00600c80 at 00600cd4
;
; Referenced Globals:
;   SetFilePointer* SetFilePointer = 002121b6
;   WriteFile* PTR_WriteFile_00611678 = 00212300
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
;   SPECIAL_DEVICE_WRITE_FUNC* g_SpecialDeviceWriteFuncPtr = 00000000
;
; Called Functions:
;   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_io.c_extend_file_for_append_FUN_00608410
;   crt_io.c_getFileTypeFlags_FUN_006088b0
;   crt_stack.c_GetStackUsage_FUN_0060c260
;   crt_stack.c_stack_overflow_handler_FUN_005ffa22
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   SetFilePointer
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006084ec
        ;   Label: crt_io.c_write_FUN_006084ec
    PUSH ESI                            ; 006084ed
    PUSH EDI                            ; 006084ee
    PUSH EBP                            ; 006084ef
    MOV EBP,ESP                         ; 006084f0
    SUB ESP,0x14                        ; 006084f2
    MOV EDI,dword ptr [EBP + 0x14]      ; 006084f5
    TEST EDI,EDI                        ; 006084f8
    JL 0x00608504                       ; 006084fa | LAB_00608504
        ;   XREF to: 00608504 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x00685214]      ; 006084fc | uint g_MaxHandleCount
    JBE 0x00608515                      ; 00608502 | LAB_00608515
        ;   XREF to: 00608515 (CONDITIONAL_JUMP)
    PUSH 0x4                            ; 00608504
        ;   Label: LAB_00608504
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00608506 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    MOV EAX,0xffffffff                  ; 0060850b
    JMP 0x00608656                      ; 00608510 | LAB_00608656
        ;   XREF to: 00608656 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0068526c]      ; 00608515 | SIOControlBlock * g_IOControlBlock
        ;   Label: LAB_00608515
    MOV EAX,dword ptr [EDX + EDI*0x4]   ; 0060851b
    PUSH EDI                            ; 0060851e
    MOV dword ptr [EBP + -0x8],EAX      ; 0060851f
    CALL crt_io.c_getFileTypeFlags_FUN_006088b0 ; 00608522 | uint crt_io.c_getFileTypeFlags_FUN_006088b0(int file_handle_index)
        ;   XREF to: 006088b0 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 00608527
    ADD ESP,0x4                         ; 00608529
    MOV dword ptr [EBP + -0x4],EAX      ; 0060852c
    TEST EAX,EAX                        ; 0060852f
    JNZ 0x00608549                      ; 00608531 | LAB_00608549
        ;   XREF to: 00608549 (CONDITIONAL_JUMP)
    PUSH 0x4                            ; 00608533
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00608535 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    MOV EAX,0xffffffff                  ; 0060853a
    ADD ESP,0x4                         ; 0060853f
    MOV ESP,EBP                         ; 00608542
    POP EBP                             ; 00608544
    POP EDI                             ; 00608545
    POP ESI                             ; 00608546
    POP EBX                             ; 00608547
    RET                                 ; 00608548
    TEST AL,0x2                         ; 00608549
        ;   Label: LAB_00608549
    JNZ 0x00608563                      ; 0060854b | LAB_00608563
        ;   XREF to: 00608563 (CONDITIONAL_JUMP)
    PUSH 0x6                            ; 0060854d
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060854f | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    MOV EAX,0xffffffff                  ; 00608554
    ADD ESP,0x4                         ; 00608559
    MOV ESP,EBP                         ; 0060855c
    POP EBP                             ; 0060855e
    POP EDI                             ; 0060855f
    POP ESI                             ; 00608560
    POP EBX                             ; 00608561
    RET                                 ; 00608562
    PUSH EDI                            ; 00608563
        ;   Label: LAB_00608563
    CALL dword ptr [0x00684ee8]         ; 00608564 | ENTER_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 0060856a
    TEST BL,0x80                        ; 0060856d
    JZ 0x0060859c                       ; 00608570 | LAB_0060859c
        ;   XREF to: 0060859c (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 00608572
    PUSH 0x0                            ; 00608574
    PUSH 0x0                            ; 00608576
    MOV EBX,dword ptr [EBP + -0x8]      ; 00608578
    PUSH EBX                            ; 0060857b
    CALL dword ptr CS:[0x61162c]        ; 0060857c | SetFilePointer * SetFilePointer
    CMP EAX,-0x1                        ; 00608583
    JNZ 0x0060859c                      ; 00608586 | LAB_0060859c
        ;   XREF to: 0060859c (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00608588
    CALL dword ptr [0x00684eec]         ; 00608589 | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060858f
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00608592 | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    JMP 0x00608659                      ; 00608597 | LAB_00608659
        ;   XREF to: 00608659 (UNCONDITIONAL_JUMP)
    TEST byte ptr [EBP + -0x3],0x80     ; 0060859c
        ;   Label: LAB_0060859c
    JZ 0x006085c5                       ; 006085a0 | LAB_006085c5
        ;   XREF to: 006085c5 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 006085a2
    CALL crt_io.c_extend_file_for_append_FUN_00608410 ; 006085a3 | int crt_io.c_extend_file_for_append_FUN_00608410(int fd)
        ;   XREF to: 00608410 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006085a8
    TEST EAX,EAX                        ; 006085ab
    JZ 0x006085c5                       ; 006085ad | LAB_006085c5
        ;   XREF to: 006085c5 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 006085af
    CALL dword ptr [0x00684eec]         ; 006085b0 | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 006085b6
    ADD ESP,0x4                         ; 006085bb
    MOV ESP,EBP                         ; 006085be
    POP EBP                             ; 006085c0
    POP EDI                             ; 006085c1
    POP ESI                             ; 006085c2
    POP EBX                             ; 006085c3
    RET                                 ; 006085c4
    TEST byte ptr [EBP + -0x4],0x40     ; 006085c5
        ;   Label: LAB_006085c5
    JZ 0x00608660                       ; 006085c9 | LAB_00608660
        ;   XREF to: 00608660 (CONDITIONAL_JUMP)
    CMP dword ptr [0x006852b0],0x0      ; 006085cf | SPECIAL_DEVICE_WRITE_FUNC * g_SpecialDeviceWriteFuncPtr
    JZ 0x006085fd                       ; 006085d6 | LAB_006085fd
        ;   XREF to: 006085fd (CONDITIONAL_JUMP)
    PUSH EDI                            ; 006085d8
    CALL dword ptr [0x00685284]         ; 006085d9 | IS_SPECIAL_DEVICE_FUNC * g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 006085df
    TEST EAX,EAX                        ; 006085e2
    JZ 0x006085fd                       ; 006085e4 | LAB_006085fd
        ;   XREF to: 006085fd (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x1c]      ; 006085e6
    PUSH EDX                            ; 006085e9
    MOV EBX,dword ptr [EBP + 0x18]      ; 006085ea
    PUSH EBX                            ; 006085ed
    PUSH EAX                            ; 006085ee
    CALL dword ptr [0x006852b0]         ; 006085ef | SPECIAL_DEVICE_WRITE_FUNC * g_SpecialDeviceWriteFuncPtr
    ADD ESP,0xc                         ; 006085f5
    MOV dword ptr [EBP + -0xc],EAX      ; 006085f8
    JMP 0x00608630                      ; 006085fb | LAB_00608630
        ;   XREF to: 00608630 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 006085fd
        ;   Label: LAB_006085fd
    LEA EAX,[EBP + -0xc]                ; 006085ff
    PUSH EAX                            ; 00608602
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00608603
    PUSH EBX                            ; 00608606
    MOV ECX,dword ptr [EBP + 0x18]      ; 00608607
    PUSH ECX                            ; 0060860a
    MOV ESI,dword ptr [EBP + -0x8]      ; 0060860b
    PUSH ESI                            ; 0060860e
    CALL dword ptr CS:[0x611678]        ; 0060860f | WriteFile * PTR_WriteFile_00611678
    TEST EAX,EAX                        ; 00608616
    JNZ 0x00608630                      ; 00608618 | LAB_00608630
        ;   XREF to: 00608630 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0060861a
    CALL dword ptr [0x00684eec]         ; 0060861b | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00608621
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00608624 | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 00608629
    POP EBP                             ; 0060862b
    POP EDI                             ; 0060862c
    POP ESI                             ; 0060862d
    POP EBX                             ; 0060862e
    RET                                 ; 0060862f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00608630
        ;   Label: LAB_00608630
    CMP EAX,dword ptr [EBP + 0x1c]      ; 00608633
    JZ 0x0060864c                       ; 00608636 | LAB_0060864c
        ;   XREF to: 0060864c (CONDITIONAL_JUMP)
    PUSH 0xc                            ; 0060863c
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060863e | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + -0xc]      ; 00608643
    ADD ESP,0x4                         ; 00608646
    MOV dword ptr [EBP + 0x1c],EAX      ; 00608649
    PUSH EDI                            ; 0060864c
        ;   Label: LAB_0060864c
    CALL dword ptr [0x00684eec]         ; 0060864d | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00608653
    ADD ESP,0x4                         ; 00608656
        ;   Label: LAB_00608656
    MOV ESP,EBP                         ; 00608659
        ;   Label: LAB_00608659
    POP EBP                             ; 0060865b
    POP EDI                             ; 0060865c
    POP ESI                             ; 0060865d
    POP EBX                             ; 0060865e
    RET                                 ; 0060865f
    CALL crt_stack.c_GetStackUsage_FUN_0060c260 ; 00608660 | int crt_stack.c_GetStackUsage_FUN_0060c260()
        ;   Label: LAB_00608660
        ;   XREF to: 0060c260 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x10],EAX     ; 00608665
    CMP EAX,0xb0                        ; 00608668
    JNC 0x00608674                      ; 0060866d | LAB_00608674
        ;   XREF to: 00608674 (CONDITIONAL_JUMP)
    CALL crt_stack.c_stack_overflow_handler_FUN_005ffa22 ; 0060866f | void crt_stack.c_stack_overflow_handler_FUN_005ffa22(SIZE_T required_bytes)
        ;   XREF to: 005ffa22 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBP + -0x10]     ; 00608674
        ;   Label: LAB_00608674
    MOV EBX,0x200                       ; 00608677
    CMP ECX,0x230                       ; 0060867c
    JNC 0x00608689                      ; 00608682 | LAB_00608689
        ;   XREF to: 00608689 (CONDITIONAL_JUMP)
    MOV EBX,0x80                        ; 00608684
    LEA EAX,[EBX + 0x3]                 ; 00608689
        ;   Label: LAB_00608689
    AND AL,0xfc                         ; 0060868c
    SUB ESP,EAX                         ; 0060868e
    XOR EAX,EAX                         ; 00608690
    MOV dword ptr [EBP + -0x10],EAX     ; 00608692
    MOV dword ptr [EBP + -0x14],EAX     ; 00608695
    MOV dword ptr [EBP + -0xc],EAX      ; 00608698
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0060869b
    MOV ESI,ESP                         ; 0060869e
    TEST EAX,EAX                        ; 006086a0
    JBE 0x0060880d                      ; 006086a2 | LAB_0060880d
        ;   XREF to: 0060880d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x18]      ; 006086a8
        ;   Label: LAB_006086a8
    ADD EAX,dword ptr [EBP + -0x10]     ; 006086ab
    CMP byte ptr [EAX],0xa              ; 006086ae
    JNZ 0x00608755                      ; 006086b1 | LAB_00608755
        ;   XREF to: 00608755 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x14]     ; 006086b7
    MOV byte ptr [ESI + EAX*0x1],0xd    ; 006086ba
    MOV ECX,dword ptr [EBP + -0x14]     ; 006086be
    INC ECX                             ; 006086c1
    MOV dword ptr [EBP + -0x14],ECX     ; 006086c2
    CMP EBX,ECX                         ; 006086c5
    JNZ 0x00608755                      ; 006086c7 | LAB_00608755
        ;   XREF to: 00608755 (CONDITIONAL_JUMP)
    CMP dword ptr [0x006852b0],0x0      ; 006086cd | SPECIAL_DEVICE_WRITE_FUNC * g_SpecialDeviceWriteFuncPtr
    JZ 0x006086f5                       ; 006086d4 | LAB_006086f5
        ;   XREF to: 006086f5 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 006086d6
    CALL dword ptr [0x00685284]         ; 006086d7 | IS_SPECIAL_DEVICE_FUNC * g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 006086dd
    TEST EAX,EAX                        ; 006086e0
    JZ 0x006086f5                       ; 006086e2 | LAB_006086f5
        ;   XREF to: 006086f5 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 006086e4
    PUSH ESI                            ; 006086e5
    PUSH EAX                            ; 006086e6
    CALL dword ptr [0x006852b0]         ; 006086e7 | SPECIAL_DEVICE_WRITE_FUNC * g_SpecialDeviceWriteFuncPtr
    ADD ESP,0xc                         ; 006086ed
    MOV dword ptr [EBP + -0x14],EAX     ; 006086f0
    JMP 0x00608722                      ; 006086f3 | LAB_00608722
        ;   XREF to: 00608722 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 006086f5
        ;   Label: LAB_006086f5
    LEA EAX,[EBP + -0x14]               ; 006086f7
    PUSH EAX                            ; 006086fa
    PUSH EBX                            ; 006086fb
    PUSH ESI                            ; 006086fc
    MOV ECX,dword ptr [EBP + -0x8]      ; 006086fd
    PUSH ECX                            ; 00608700
    CALL dword ptr CS:[0x611678]        ; 00608701 | WriteFile * PTR_WriteFile_00611678
    TEST EAX,EAX                        ; 00608708
    JNZ 0x00608722                      ; 0060870a | LAB_00608722
        ;   XREF to: 00608722 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0060870c
    CALL dword ptr [0x00684eec]         ; 0060870d | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00608713
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00608716 | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 0060871b
    POP EBP                             ; 0060871d
    POP EDI                             ; 0060871e
    POP ESI                             ; 0060871f
    POP EBX                             ; 00608720
    RET                                 ; 00608721
    CMP EBX,dword ptr [EBP + -0x14]     ; 00608722
        ;   Label: LAB_00608722
    JZ 0x0060874a                       ; 00608725 | LAB_0060874a
        ;   XREF to: 0060874a (CONDITIONAL_JUMP)
    PUSH 0xc                            ; 00608727
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00608729 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060872e
    PUSH EDI                            ; 00608731
    CALL dword ptr [0x00684eec]         ; 00608732 | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,dword ptr [EBP + -0xc]      ; 00608738
    MOV EBX,dword ptr [EBP + -0x14]     ; 0060873b
    ADD ESP,0x4                         ; 0060873e
    ADD EAX,EBX                         ; 00608741
    MOV ESP,EBP                         ; 00608743
    POP EBP                             ; 00608745
    POP EDI                             ; 00608746
    POP ESI                             ; 00608747
    POP EBX                             ; 00608748
    RET                                 ; 00608749
    MOV EAX,dword ptr [EBP + -0x10]     ; 0060874a
        ;   Label: LAB_0060874a
    XOR EDX,EDX                         ; 0060874d
    MOV dword ptr [EBP + -0xc],EAX      ; 0060874f
    MOV dword ptr [EBP + -0x14],EDX     ; 00608752
    MOV EAX,dword ptr [EBP + 0x18]      ; 00608755
        ;   Label: LAB_00608755
    ADD EAX,dword ptr [EBP + -0x10]     ; 00608758
    MOV EDX,dword ptr [EBP + -0x14]     ; 0060875b
    MOV AL,byte ptr [EAX]               ; 0060875e
    MOV byte ptr [EDX + ESI*0x1],AL     ; 00608760
    MOV EAX,dword ptr [EBP + -0x10]     ; 00608763
    MOV EDX,dword ptr [EBP + -0x14]     ; 00608766
    INC EAX                             ; 00608769
    INC EDX                             ; 0060876a
    MOV dword ptr [EBP + -0x10],EAX     ; 0060876b
    MOV dword ptr [EBP + -0x14],EDX     ; 0060876e
    CMP EBX,EDX                         ; 00608771
    JNZ 0x00608801                      ; 00608773 | LAB_00608801
        ;   XREF to: 00608801 (CONDITIONAL_JUMP)
    CMP dword ptr [0x006852b0],0x0      ; 00608779 | SPECIAL_DEVICE_WRITE_FUNC * g_SpecialDeviceWriteFuncPtr
    JZ 0x006087a1                       ; 00608780 | LAB_006087a1
        ;   XREF to: 006087a1 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00608782
    CALL dword ptr [0x00685284]         ; 00608783 | IS_SPECIAL_DEVICE_FUNC * g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 00608789
    TEST EAX,EAX                        ; 0060878c
    JZ 0x006087a1                       ; 0060878e | LAB_006087a1
        ;   XREF to: 006087a1 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00608790
    PUSH ESI                            ; 00608791
    PUSH EAX                            ; 00608792
    CALL dword ptr [0x006852b0]         ; 00608793 | SPECIAL_DEVICE_WRITE_FUNC * g_SpecialDeviceWriteFuncPtr
    ADD ESP,0xc                         ; 00608799
    MOV dword ptr [EBP + -0x14],EAX     ; 0060879c
    JMP 0x006087ce                      ; 0060879f | LAB_006087ce
        ;   XREF to: 006087ce (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 006087a1
        ;   Label: LAB_006087a1
    LEA EAX,[EBP + -0x14]               ; 006087a3
    PUSH EAX                            ; 006087a6
    PUSH EBX                            ; 006087a7
    PUSH ESI                            ; 006087a8
    MOV EDX,dword ptr [EBP + -0x8]      ; 006087a9
    PUSH EDX                            ; 006087ac
    CALL dword ptr CS:[0x611678]        ; 006087ad | WriteFile * PTR_WriteFile_00611678
    TEST EAX,EAX                        ; 006087b4
    JNZ 0x006087ce                      ; 006087b6 | LAB_006087ce
        ;   XREF to: 006087ce (CONDITIONAL_JUMP)
    PUSH EDI                            ; 006087b8
    CALL dword ptr [0x00684eec]         ; 006087b9 | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 006087bf
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 006087c2 | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 006087c7
    POP EBP                             ; 006087c9
    POP EDI                             ; 006087ca
    POP ESI                             ; 006087cb
    POP EBX                             ; 006087cc
    RET                                 ; 006087cd
    CMP EBX,dword ptr [EBP + -0x14]     ; 006087ce
        ;   Label: LAB_006087ce
    JZ 0x006087f6                       ; 006087d1 | LAB_006087f6
        ;   XREF to: 006087f6 (CONDITIONAL_JUMP)
    PUSH 0xc                            ; 006087d3
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006087d5 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006087da
    PUSH EDI                            ; 006087dd
    CALL dword ptr [0x00684eec]         ; 006087de | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,dword ptr [EBP + -0xc]      ; 006087e4
    MOV EDX,dword ptr [EBP + -0x14]     ; 006087e7
    ADD ESP,0x4                         ; 006087ea
    ADD EAX,EDX                         ; 006087ed
    MOV ESP,EBP                         ; 006087ef
    POP EBP                             ; 006087f1
    POP EDI                             ; 006087f2
    POP ESI                             ; 006087f3
    POP EBX                             ; 006087f4
    RET                                 ; 006087f5
    MOV EAX,dword ptr [EBP + -0x10]     ; 006087f6
        ;   Label: LAB_006087f6
    MOV dword ptr [EBP + -0xc],EAX      ; 006087f9
    XOR EAX,EAX                         ; 006087fc
    MOV dword ptr [EBP + -0x14],EAX     ; 006087fe
    MOV EAX,dword ptr [EBP + -0x10]     ; 00608801
        ;   Label: LAB_00608801
    CMP EAX,dword ptr [EBP + 0x1c]      ; 00608804
    JC 0x006086a8                       ; 00608807 | LAB_006086a8
        ;   XREF to: 006086a8 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x14],0x0     ; 0060880d
        ;   Label: LAB_0060880d
    JZ 0x0060864c                       ; 00608811 | LAB_0060864c
        ;   XREF to: 0060864c (CONDITIONAL_JUMP)
    CMP dword ptr [0x006852b0],0x0      ; 00608817 | SPECIAL_DEVICE_WRITE_FUNC * g_SpecialDeviceWriteFuncPtr
    JZ 0x00608842                       ; 0060881e | LAB_00608842
        ;   XREF to: 00608842 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00608820
    CALL dword ptr [0x00685284]         ; 00608821 | IS_SPECIAL_DEVICE_FUNC * g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 00608827
    TEST EAX,EAX                        ; 0060882a
    JZ 0x00608842                       ; 0060882c | LAB_00608842
        ;   XREF to: 00608842 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EBP + -0x14]     ; 0060882e
    PUSH EBX                            ; 00608831
    PUSH ESI                            ; 00608832
    PUSH EAX                            ; 00608833
    CALL dword ptr [0x006852b0]         ; 00608834 | SPECIAL_DEVICE_WRITE_FUNC * g_SpecialDeviceWriteFuncPtr
    ADD ESP,0xc                         ; 0060883a
    MOV dword ptr [EBP + -0x10],EAX     ; 0060883d
    JMP 0x00608872                      ; 00608840 | LAB_00608872
        ;   XREF to: 00608872 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00608842
        ;   Label: LAB_00608842
    LEA EAX,[EBP + -0x10]               ; 00608844
    PUSH EAX                            ; 00608847
    MOV EAX,dword ptr [EBP + -0x14]     ; 00608848
    PUSH EAX                            ; 0060884b
    PUSH ESI                            ; 0060884c
    MOV EDX,dword ptr [EBP + -0x8]      ; 0060884d
    PUSH EDX                            ; 00608850
    CALL dword ptr CS:[0x611678]        ; 00608851 | WriteFile * PTR_WriteFile_00611678
    TEST EAX,EAX                        ; 00608858
    JNZ 0x00608872                      ; 0060885a | LAB_00608872
        ;   XREF to: 00608872 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0060885c
    CALL dword ptr [0x00684eec]         ; 0060885d | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00608863
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00608866 | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 0060886b
    POP EBP                             ; 0060886d
    POP EDI                             ; 0060886e
    POP ESI                             ; 0060886f
    POP EBX                             ; 00608870
    RET                                 ; 00608871
    MOV EAX,dword ptr [EBP + -0x10]     ; 00608872
        ;   Label: LAB_00608872
    CMP EAX,dword ptr [EBP + -0x14]     ; 00608875
    JZ 0x0060864c                       ; 00608878 | LAB_0060864c
        ;   XREF to: 0060864c (CONDITIONAL_JUMP)
    PUSH 0xc                            ; 0060887e
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00608880 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00608885
    PUSH EDI                            ; 00608888
    CALL dword ptr [0x00684eec]         ; 00608889 | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,dword ptr [EBP + -0xc]      ; 0060888f
    MOV ESI,dword ptr [EBP + -0x10]     ; 00608892
    ADD ESP,0x4                         ; 00608895
    ADD EAX,ESI                         ; 00608898
    MOV ESP,EBP                         ; 0060889a
    POP EBP                             ; 0060889c
    POP EDI                             ; 0060889d
    POP ESI                             ; 0060889e
    POP EBX                             ; 0060889f
    RET                                 ; 006088a0

