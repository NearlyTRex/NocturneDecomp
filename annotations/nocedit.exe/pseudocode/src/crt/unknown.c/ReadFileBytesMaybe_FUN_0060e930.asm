; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930()
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_fstream.cpp_filebuf_underflow_FUN_0060da87 at 0060db7a
;
; Referenced Globals:
;   GetLastError* GetLastError = 00211f22
;   ReadFile* PTR_ReadFile_00611604 = 002120f2
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
;   SPECIAL_DEVICE_READ_FUNC* g_SpecialDeviceReadFuncPtr = 00000000
;
; Called Functions:
;   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_io.c_getFileTypeFlags_FUN_006088b0
;   crt_stdio.c_lseek_FUN_00606690
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   GetLastError
;   ReadFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060e930
        ;   Label: crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930
    PUSH ESI                            ; 0060e931
    PUSH EDI                            ; 0060e932
    PUSH EBP                            ; 0060e933
    SUB ESP,0x10                        ; 0060e934
    MOV EBP,dword ptr [ESP + 0x28]      ; 0060e937
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0060e93b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0060e93f
    TEST EDX,EDX                        ; 0060e943
    JL 0x0060e94f                       ; 0060e945 | LAB_0060e94f
        ;   XREF to: 0060e94f (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00685214]      ; 0060e947 | uint g_MaxHandleCount
    JBE 0x0060e963                      ; 0060e94d | LAB_0060e963
        ;   XREF to: 0060e963 (CONDITIONAL_JUMP)
    PUSH 0x4                            ; 0060e94f
        ;   Label: LAB_0060e94f
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060e951 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    MOV EAX,0xffffffff                  ; 0060e956
    ADD ESP,0x4                         ; 0060e95b
    JMP 0x0060eb31                      ; 0060e95e | LAB_0060eb31
        ;   XREF to: 0060eb31 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0068526c]                ; 0060e963 | SIOControlBlock * g_IOControlBlock
        ;   Label: LAB_0060e963
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 0060e968
    PUSH EDX                            ; 0060e96b
    MOV dword ptr [ESP + 0x10],EAX      ; 0060e96c
    CALL crt_io.c_getFileTypeFlags_FUN_006088b0 ; 0060e970 | uint crt_io.c_getFileTypeFlags_FUN_006088b0(int file_handle_index)
        ;   XREF to: 006088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060e975
    MOV EBX,EAX                         ; 0060e978
    MOV dword ptr [ESP + 0x8],EAX       ; 0060e97a
    TEST EAX,EAX                        ; 0060e97e
    JNZ 0x0060e999                      ; 0060e980 | LAB_0060e999
        ;   XREF to: 0060e999 (CONDITIONAL_JUMP)
    PUSH 0x4                            ; 0060e982
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060e984 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    MOV EAX,0xffffffff                  ; 0060e989
    ADD ESP,0x4                         ; 0060e98e
    ADD ESP,0x10                        ; 0060e991
    POP EBP                             ; 0060e994
    POP EDI                             ; 0060e995
    POP ESI                             ; 0060e996
    POP EBX                             ; 0060e997
    RET                                 ; 0060e998
    MOV ESI,dword ptr [ESP + 0x24]      ; 0060e999
        ;   Label: LAB_0060e999
    PUSH ESI                            ; 0060e99d
    CALL dword ptr [0x00684ee8]         ; 0060e99e | ENTER_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 0060e9a4
    TEST BL,0x1                         ; 0060e9a7
    JNZ 0x0060e9cd                      ; 0060e9aa | LAB_0060e9cd
        ;   XREF to: 0060e9cd (CONDITIONAL_JUMP)
    PUSH 0x6                            ; 0060e9ac
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060e9ae | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060e9b3
    PUSH ESI                            ; 0060e9b6
    CALL dword ptr [0x00684eec]         ; 0060e9b7 | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 0060e9bd
    ADD ESP,0x4                         ; 0060e9c2
    ADD ESP,0x10                        ; 0060e9c5
    POP EBP                             ; 0060e9c8
    POP EDI                             ; 0060e9c9
    POP ESI                             ; 0060e9ca
    POP EBX                             ; 0060e9cb
    RET                                 ; 0060e9cc
    TEST BL,0x40                        ; 0060e9cd
        ;   Label: LAB_0060e9cd
    JZ 0x0060ea47                       ; 0060e9d0 | LAB_0060ea47
        ;   XREF to: 0060ea47 (CONDITIONAL_JUMP)
    CMP dword ptr [0x006852ac],0x0      ; 0060e9d2 | SPECIAL_DEVICE_READ_FUNC * g_SpecialDeviceReadFuncPtr
    JZ 0x0060e9fc                       ; 0060e9d9 | LAB_0060e9fc
        ;   XREF to: 0060e9fc (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0060e9db
    CALL dword ptr [0x00685284]         ; 0060e9dc | IS_SPECIAL_DEVICE_FUNC * g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 0060e9e2
    TEST EAX,EAX                        ; 0060e9e5
    JZ 0x0060e9fc                       ; 0060e9e7 | LAB_0060e9fc
        ;   XREF to: 0060e9fc (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0060e9e9
    PUSH EBP                            ; 0060e9ea
    PUSH EAX                            ; 0060e9eb
    CALL dword ptr [0x006852ac]         ; 0060e9ec | SPECIAL_DEVICE_READ_FUNC * g_SpecialDeviceReadFuncPtr
    ADD ESP,0xc                         ; 0060e9f2
    MOV ESI,EAX                         ; 0060e9f5
    JMP 0x0060eb21                      ; 0060e9f7 | LAB_0060eb21
        ;   XREF to: 0060eb21 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0060e9fc
        ;   Label: LAB_0060e9fc
    LEA EAX,[ESP + 0x4]                 ; 0060e9fe
    PUSH EAX                            ; 0060ea02
    PUSH EDI                            ; 0060ea03
    PUSH EBP                            ; 0060ea04
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0060ea05
    PUSH EBX                            ; 0060ea09
    CALL dword ptr CS:[0x611604]        ; 0060ea0a | ReadFile * PTR_ReadFile_00611604
    MOV ESI,dword ptr [ESP]             ; 0060ea11
    TEST EAX,EAX                        ; 0060ea14
    JNZ 0x0060eb21                      ; 0060ea16 | LAB_0060eb21
        ;   XREF to: 0060eb21 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x24]      ; 0060ea1c
    PUSH ECX                            ; 0060ea20
    CALL dword ptr [0x00684eec]         ; 0060ea21 | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060ea27
    CALL dword ptr CS:[0x6115a4]        ; 0060ea2a | GetLastError * GetLastError
    CMP EAX,0x6d                        ; 0060ea31
    JZ 0x0060eb2f                       ; 0060ea34 | LAB_0060eb2f
        ;   XREF to: 0060eb2f (CONDITIONAL_JUMP)
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 0060ea3a | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   Label: LAB_0060ea3a
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0060ea3f
    POP EBP                             ; 0060ea42
    POP EDI                             ; 0060ea43
    POP ESI                             ; 0060ea44
    POP EBX                             ; 0060ea45
    RET                                 ; 0060ea46
    MOV dword ptr [ESP + 0x4],EDI       ; 0060ea47
        ;   Label: LAB_0060ea47
    XOR ESI,ESI                         ; 0060ea4b
    CMP dword ptr [0x006852ac],0x0      ; 0060ea4d | SPECIAL_DEVICE_READ_FUNC * g_SpecialDeviceReadFuncPtr
        ;   Label: LAB_0060ea4d
    JZ 0x0060ea7d                       ; 0060ea54 | LAB_0060ea7d
        ;   XREF to: 0060ea7d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x24]      ; 0060ea56
    PUSH EAX                            ; 0060ea5a
    CALL dword ptr [0x00685284]         ; 0060ea5b | IS_SPECIAL_DEVICE_FUNC * g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 0060ea61
    TEST EAX,EAX                        ; 0060ea64
    JZ 0x0060ea7d                       ; 0060ea66 | LAB_0060ea7d
        ;   XREF to: 0060ea7d (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x4]       ; 0060ea68
    PUSH EDI                            ; 0060ea6c
    PUSH EBP                            ; 0060ea6d
    PUSH EAX                            ; 0060ea6e
    CALL dword ptr [0x006852ac]         ; 0060ea6f | SPECIAL_DEVICE_READ_FUNC * g_SpecialDeviceReadFuncPtr
    ADD ESP,0xc                         ; 0060ea75
    MOV dword ptr [ESP],EAX             ; 0060ea78
    JMP 0x0060eab9                      ; 0060ea7b | LAB_0060eab9
        ;   XREF to: 0060eab9 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0060ea7d
        ;   Label: LAB_0060ea7d
    LEA EAX,[ESP + 0x4]                 ; 0060ea7f
    PUSH EAX                            ; 0060ea83
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060ea84
    PUSH EDX                            ; 0060ea88
    PUSH EBP                            ; 0060ea89
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0060ea8a
    PUSH EBX                            ; 0060ea8e
    CALL dword ptr CS:[0x611604]        ; 0060ea8f | ReadFile * PTR_ReadFile_00611604
    TEST EAX,EAX                        ; 0060ea96
    JNZ 0x0060eab9                      ; 0060ea98 | LAB_0060eab9
        ;   XREF to: 0060eab9 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x24]      ; 0060ea9a
    PUSH ECX                            ; 0060ea9e
    CALL dword ptr [0x00684eec]         ; 0060ea9f | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060eaa5
    CALL dword ptr CS:[0x6115a4]        ; 0060eaa8 | GetLastError * GetLastError
    CMP EAX,0x6d                        ; 0060eaaf
    JNZ 0x0060ea3a                      ; 0060eab2 | LAB_0060ea3a
        ;   XREF to: 0060ea3a (CONDITIONAL_JUMP)
    JMP 0x0060eb2f                      ; 0060eab4 | LAB_0060eb2f
        ;   XREF to: 0060eb2f (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP],0x0             ; 0060eab9
        ;   Label: LAB_0060eab9
    JZ 0x0060eb21                       ; 0060eabd | LAB_0060eb21
        ;   XREF to: 0060eb21 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP]             ; 0060eabf
    MOV EAX,EBP                         ; 0060eac2
    XOR EBX,EBX                         ; 0060eac4
    XOR EDX,EDX                         ; 0060eac6
    TEST ECX,ECX                        ; 0060eac8
    JBE 0x0060eb07                      ; 0060eaca | LAB_0060eb07
        ;   XREF to: 0060eb07 (CONDITIONAL_JUMP)
    MOV CL,byte ptr [EAX]               ; 0060eacc
        ;   Label: LAB_0060eacc
    CMP CL,0x1a                         ; 0060eace
    JNZ 0x0060eaee                      ; 0060ead1 | LAB_0060eaee
        ;   XREF to: 0060eaee (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP]             ; 0060ead3
    MOV EAX,EBX                         ; 0060ead6
    SUB EAX,ECX                         ; 0060ead8
    PUSH 0x1                            ; 0060eada
    INC EAX                             ; 0060eadc
    PUSH EAX                            ; 0060eadd
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0060eade
    PUSH EDI                            ; 0060eae2
    CALL crt_stdio.c_lseek_FUN_00606690 ; 0060eae3 | int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060eae8
    PUSH EDI                            ; 0060eaeb
    JMP 0x0060eb26                      ; 0060eaec | LAB_0060eb26
        ;   XREF to: 0060eb26 (UNCONDITIONAL_JUMP)
    CMP CL,0xd                          ; 0060eaee
        ;   Label: LAB_0060eaee
    JZ 0x0060eafe                       ; 0060eaf1 | LAB_0060eafe
        ;   XREF to: 0060eafe (CONDITIONAL_JUMP)
    MOV ECX,EDX                         ; 0060eaf3
    INC ESI                             ; 0060eaf5
    LEA EDI,[ECX + EBP*0x1]             ; 0060eaf6
    MOV CL,byte ptr [EAX]               ; 0060eaf9
    INC EDX                             ; 0060eafb
    MOV byte ptr [EDI],CL               ; 0060eafc
    MOV EDI,dword ptr [ESP]             ; 0060eafe
        ;   Label: LAB_0060eafe
    INC EBX                             ; 0060eb01
    INC EAX                             ; 0060eb02
    CMP EBX,EDI                         ; 0060eb03
    JC 0x0060eacc                       ; 0060eb05 | LAB_0060eacc
        ;   XREF to: 0060eacc (CONDITIONAL_JUMP)
    SUB dword ptr [ESP + 0x4],EDX       ; 0060eb07
        ;   Label: LAB_0060eb07
    MOV AH,byte ptr [ESP + 0x9]         ; 0060eb0b
    ADD EBP,EDX                         ; 0060eb0f
    TEST AH,0x20                        ; 0060eb11
    JNZ 0x0060eb21                      ; 0060eb14 | LAB_0060eb21
        ;   XREF to: 0060eb21 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x4],0x0       ; 0060eb16
    JNZ 0x0060ea4d                      ; 0060eb1b | LAB_0060ea4d
        ;   XREF to: 0060ea4d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x24]      ; 0060eb21
        ;   Label: LAB_0060eb21
    PUSH EAX                            ; 0060eb25
    CALL dword ptr [0x00684eec]         ; 0060eb26 | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
        ;   Label: LAB_0060eb26
    ADD ESP,0x4                         ; 0060eb2c
    MOV EAX,ESI                         ; 0060eb2f
        ;   Label: LAB_0060eb2f
    ADD ESP,0x10                        ; 0060eb31
        ;   Label: LAB_0060eb31
    POP EBP                             ; 0060eb34
    POP EDI                             ; 0060eb35
    POP ESI                             ; 0060eb36
    POP EBX                             ; 0060eb37
    RET                                 ; 0060eb38

