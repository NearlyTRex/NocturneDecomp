; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown uint crt_unknown_c_ReadFileBytesMaybe_FUN_0060e930 (undefined4 param_1,undefined4 param_2,uint unaff_EBX,undefined4 param_4,uint param_5 ,char *param_6,DWORD param_7,undefined4 param_8,undefined4 param_9,int param_10)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_fstream.cpp_filebuf_underflow_FUN_0060da87 at 0060db7a
;
; Referenced Globals:
;   GET_LAST_ERROR_FUNC* g_GetLastErrorFunc = 00211f22
;   READ_FILE_FUNC* g_ReadFileFunc = 002120f2
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
;   SPECIAL_DEVICE_READ_FUNC* g_SpecialDeviceReadFuncPtr = 00000000
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_006083fc
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
    JL 0x0060e94f                       ; 0060e945
        ;   XREF to: 0060e94f (CONDITIONAL_JUMP)  ; LAB_0060e94f
    CMP EDX,dword ptr [0x00685214]      ; 0060e947 | g_MaxHandleCount
    JBE 0x0060e963                      ; 0060e94d
        ;   XREF to: 0060e963 (CONDITIONAL_JUMP)  ; LAB_0060e963
    PUSH 0x4                            ; 0060e94f
        ;   Label: LAB_0060e94f
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060e951
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV EAX,0xffffffff                  ; 0060e956
    ADD ESP,0x4                         ; 0060e95b
    JMP 0x0060eb31                      ; 0060e95e
        ;   XREF to: 0060eb31 (UNCONDITIONAL_JUMP)  ; LAB_0060eb31
    MOV EAX,[0x0068526c]                ; 0060e963 | g_IOControlBlock
        ;   Label: LAB_0060e963
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 0060e968
    PUSH EDX                            ; 0060e96b
    MOV dword ptr [ESP + 0x10],EAX      ; 0060e96c
    CALL crt_io.c_getFileTypeFlags_FUN_006088b0 ; 0060e970
        ;   XREF to: 006088b0 (UNCONDITIONAL_CALL)  ; uint crt_io.c_getFileTypeFlags_FUN_006088b0(int file_handle_index)
    ADD ESP,0x4                         ; 0060e975
    MOV EBX,EAX                         ; 0060e978
    MOV dword ptr [ESP + 0x8],EAX       ; 0060e97a
    TEST EAX,EAX                        ; 0060e97e
    JNZ 0x0060e999                      ; 0060e980
        ;   XREF to: 0060e999 (CONDITIONAL_JUMP)  ; LAB_0060e999
    PUSH 0x4                            ; 0060e982
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060e984
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
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
    CALL dword ptr [0x00684ee8]         ; 0060e99e | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 0060e9a4
    TEST BL,0x1                         ; 0060e9a7
    JNZ 0x0060e9cd                      ; 0060e9aa
        ;   XREF to: 0060e9cd (CONDITIONAL_JUMP)  ; LAB_0060e9cd
    PUSH 0x6                            ; 0060e9ac
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060e9ae
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 0060e9b3
    PUSH ESI                            ; 0060e9b6
    CALL dword ptr [0x00684eec]         ; 0060e9b7 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
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
    JZ 0x0060ea47                       ; 0060e9d0
        ;   XREF to: 0060ea47 (CONDITIONAL_JUMP)  ; LAB_0060ea47
    CMP dword ptr [0x006852ac],0x0      ; 0060e9d2 | g_SpecialDeviceReadFuncPtr
    JZ 0x0060e9fc                       ; 0060e9d9
        ;   XREF to: 0060e9fc (CONDITIONAL_JUMP)  ; LAB_0060e9fc
    PUSH ESI                            ; 0060e9db
    CALL dword ptr [0x00685284]         ; 0060e9dc | g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 0060e9e2
    TEST EAX,EAX                        ; 0060e9e5
    JZ 0x0060e9fc                       ; 0060e9e7
        ;   XREF to: 0060e9fc (CONDITIONAL_JUMP)  ; LAB_0060e9fc
    PUSH EDI                            ; 0060e9e9
    PUSH EBP                            ; 0060e9ea
    PUSH EAX                            ; 0060e9eb
    CALL dword ptr [0x006852ac]         ; 0060e9ec | g_SpecialDeviceReadFuncPtr
    ADD ESP,0xc                         ; 0060e9f2
    MOV ESI,EAX                         ; 0060e9f5
    JMP 0x0060eb21                      ; 0060e9f7
        ;   XREF to: 0060eb21 (UNCONDITIONAL_JUMP)  ; LAB_0060eb21
    PUSH 0x0                            ; 0060e9fc
        ;   Label: LAB_0060e9fc
    LEA EAX,[ESP + 0x4]                 ; 0060e9fe
    PUSH EAX                            ; 0060ea02
    PUSH EDI                            ; 0060ea03
    PUSH EBP                            ; 0060ea04
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0060ea05
    PUSH EBX                            ; 0060ea09
    CALL dword ptr CS:[0x611604]        ; 0060ea0a | g_ReadFileFunc
    MOV ESI,dword ptr [ESP]             ; 0060ea11
    TEST EAX,EAX                        ; 0060ea14
    JNZ 0x0060eb21                      ; 0060ea16
        ;   XREF to: 0060eb21 (CONDITIONAL_JUMP)  ; LAB_0060eb21
    MOV ECX,dword ptr [ESP + 0x24]      ; 0060ea1c
    PUSH ECX                            ; 0060ea20
    CALL dword ptr [0x00684eec]         ; 0060ea21 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060ea27
    CALL dword ptr CS:[0x6115a4]        ; 0060ea2a | g_GetLastErrorFunc
    CMP EAX,0x6d                        ; 0060ea31
    JZ 0x0060eb2f                       ; 0060ea34
        ;   XREF to: 0060eb2f (CONDITIONAL_JUMP)  ; LAB_0060eb2f
    CALL crt_errno.c___set_errno_FUN_006083fc ; 0060ea3a
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
        ;   Label: LAB_0060ea3a
    ADD ESP,0x10                        ; 0060ea3f
    POP EBP                             ; 0060ea42
    POP EDI                             ; 0060ea43
    POP ESI                             ; 0060ea44
    POP EBX                             ; 0060ea45
    RET                                 ; 0060ea46
    MOV dword ptr [ESP + 0x4],EDI       ; 0060ea47
        ;   Label: LAB_0060ea47
    XOR ESI,ESI                         ; 0060ea4b
    CMP dword ptr [0x006852ac],0x0      ; 0060ea4d | g_SpecialDeviceReadFuncPtr
        ;   Label: LAB_0060ea4d
    JZ 0x0060ea7d                       ; 0060ea54
        ;   XREF to: 0060ea7d (CONDITIONAL_JUMP)  ; LAB_0060ea7d
    MOV EAX,dword ptr [ESP + 0x24]      ; 0060ea56
    PUSH EAX                            ; 0060ea5a
    CALL dword ptr [0x00685284]         ; 0060ea5b | g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 0060ea61
    TEST EAX,EAX                        ; 0060ea64
    JZ 0x0060ea7d                       ; 0060ea66
        ;   XREF to: 0060ea7d (CONDITIONAL_JUMP)  ; LAB_0060ea7d
    MOV EDI,dword ptr [ESP + 0x4]       ; 0060ea68
    PUSH EDI                            ; 0060ea6c
    PUSH EBP                            ; 0060ea6d
    PUSH EAX                            ; 0060ea6e
    CALL dword ptr [0x006852ac]         ; 0060ea6f | g_SpecialDeviceReadFuncPtr
    ADD ESP,0xc                         ; 0060ea75
    MOV dword ptr [ESP],EAX             ; 0060ea78
    JMP 0x0060eab9                      ; 0060ea7b
        ;   XREF to: 0060eab9 (UNCONDITIONAL_JUMP)  ; LAB_0060eab9
    PUSH 0x0                            ; 0060ea7d
        ;   Label: LAB_0060ea7d
    LEA EAX,[ESP + 0x4]                 ; 0060ea7f
    PUSH EAX                            ; 0060ea83
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060ea84
    PUSH EDX                            ; 0060ea88
    PUSH EBP                            ; 0060ea89
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0060ea8a
    PUSH EBX                            ; 0060ea8e
    CALL dword ptr CS:[0x611604]        ; 0060ea8f | g_ReadFileFunc
    TEST EAX,EAX                        ; 0060ea96
    JNZ 0x0060eab9                      ; 0060ea98
        ;   XREF to: 0060eab9 (CONDITIONAL_JUMP)  ; LAB_0060eab9
    MOV ECX,dword ptr [ESP + 0x24]      ; 0060ea9a
    PUSH ECX                            ; 0060ea9e
    CALL dword ptr [0x00684eec]         ; 0060ea9f | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060eaa5
    CALL dword ptr CS:[0x6115a4]        ; 0060eaa8 | g_GetLastErrorFunc
    CMP EAX,0x6d                        ; 0060eaaf
    JNZ 0x0060ea3a                      ; 0060eab2
        ;   XREF to: 0060ea3a (CONDITIONAL_JUMP)  ; LAB_0060ea3a
    JMP 0x0060eb2f                      ; 0060eab4
        ;   XREF to: 0060eb2f (UNCONDITIONAL_JUMP)  ; LAB_0060eb2f
    CMP dword ptr [ESP],0x0             ; 0060eab9
        ;   Label: LAB_0060eab9
    JZ 0x0060eb21                       ; 0060eabd
        ;   XREF to: 0060eb21 (CONDITIONAL_JUMP)  ; LAB_0060eb21
    MOV ECX,dword ptr [ESP]             ; 0060eabf
    MOV EAX,EBP                         ; 0060eac2
    XOR EBX,EBX                         ; 0060eac4
    XOR EDX,EDX                         ; 0060eac6
    TEST ECX,ECX                        ; 0060eac8
    JBE 0x0060eb07                      ; 0060eaca
        ;   XREF to: 0060eb07 (CONDITIONAL_JUMP)  ; LAB_0060eb07
    MOV CL,byte ptr [EAX]               ; 0060eacc
        ;   Label: LAB_0060eacc
    CMP CL,0x1a                         ; 0060eace
    JNZ 0x0060eaee                      ; 0060ead1
        ;   XREF to: 0060eaee (CONDITIONAL_JUMP)  ; LAB_0060eaee
    MOV ECX,dword ptr [ESP]             ; 0060ead3
    MOV EAX,EBX                         ; 0060ead6
    SUB EAX,ECX                         ; 0060ead8
    PUSH 0x1                            ; 0060eada
    INC EAX                             ; 0060eadc
    PUSH EAX                            ; 0060eadd
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0060eade
    PUSH EDI                            ; 0060eae2
    CALL crt_stdio.c_lseek_FUN_00606690 ; 0060eae3
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 0060eae8
    PUSH EDI                            ; 0060eaeb
    JMP 0x0060eb26                      ; 0060eaec
        ;   XREF to: 0060eb26 (UNCONDITIONAL_JUMP)  ; LAB_0060eb26
    CMP CL,0xd                          ; 0060eaee
        ;   Label: LAB_0060eaee
    JZ 0x0060eafe                       ; 0060eaf1
        ;   XREF to: 0060eafe (CONDITIONAL_JUMP)  ; LAB_0060eafe
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
    JC 0x0060eacc                       ; 0060eb05
        ;   XREF to: 0060eacc (CONDITIONAL_JUMP)  ; LAB_0060eacc
    SUB dword ptr [ESP + 0x4],EDX       ; 0060eb07
        ;   Label: LAB_0060eb07
    MOV AH,byte ptr [ESP + 0x9]         ; 0060eb0b
    ADD EBP,EDX                         ; 0060eb0f
    TEST AH,0x20                        ; 0060eb11
    JNZ 0x0060eb21                      ; 0060eb14
        ;   XREF to: 0060eb21 (CONDITIONAL_JUMP)  ; LAB_0060eb21
    CMP dword ptr [ESP + 0x4],0x0       ; 0060eb16
    JNZ 0x0060ea4d                      ; 0060eb1b
        ;   XREF to: 0060ea4d (CONDITIONAL_JUMP)  ; LAB_0060ea4d
    MOV EAX,dword ptr [ESP + 0x24]      ; 0060eb21
        ;   Label: LAB_0060eb21
    PUSH EAX                            ; 0060eb25
    CALL dword ptr [0x00684eec]         ; 0060eb26 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
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

