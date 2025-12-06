; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_io.c_close_FUN_00609bd0(int fd)
;
; Parameters:
; int              Stack[0x4]:4   fd
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_io.c_close_handle_safe_FUN_0060c2e0 at 0060c30f
;   crt_stdio.c_fclose_FUN_00601fd0 at 0060203e
;
; Referenced Globals:
;   CloseHandle* CloseHandle = 00211c38
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
;   SPECIAL_DEVICE_CLEANUP_FUNC* g_SpecialDeviceCleanupFunc = 00000000
;   SPECIAL_DEVICE_CLOSE_FUNC* g_SpecialDeviceCloseFunc = 00000000
;
; Called Functions:
;   CloseHandle
;   crt_errno.c_setErrno_FUN_00602790
;   crt_io.c_setFileDescriptorFlags_FUN_00608908
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609bd0
        ;   Label: crt_io.c_close_FUN_00609bd0
    PUSH ESI                            ; 00609bd1
    PUSH EDI                            ; 00609bd2
    PUSH EBP                            ; 00609bd3
    SUB ESP,0x4                         ; 00609bd4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00609bd7
    TEST EBX,EBX                        ; 00609bdb
    JL 0x00609be7                       ; 00609bdd | LAB_00609be7
        ;   XREF to: 00609be7 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [0x00685214]      ; 00609bdf | uint g_MaxHandleCount
    JBE 0x00609bfb                      ; 00609be5 | LAB_00609bfb
        ;   XREF to: 00609bfb (CONDITIONAL_JUMP)
    PUSH 0x4                            ; 00609be7
        ;   Label: LAB_00609be7
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00609be9 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    MOV EAX,0xffffffff                  ; 00609bee
    ADD ESP,0x4                         ; 00609bf3
    JMP 0x00609c6c                      ; 00609bf6 | LAB_00609c6c
        ;   XREF to: 00609c6c (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x0068526c]      ; 00609bfb | SIOControlBlock * g_IOControlBlock
        ;   Label: LAB_00609bfb
    MOV ECX,dword ptr [0x00685290]      ; 00609c01 | SPECIAL_DEVICE_CLOSE_FUNC * g_SpecialDeviceCloseFunc
    XOR EBP,EBP                         ; 00609c07
    MOV EAX,dword ptr [ESI + EBX*0x4]   ; 00609c09
    XOR EDI,EDI                         ; 00609c0c
    MOV dword ptr [ESP],EAX             ; 00609c0e
    TEST ECX,ECX                        ; 00609c11
    JZ 0x00609c3b                       ; 00609c13 | LAB_00609c3b
        ;   XREF to: 00609c3b (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00609c15
    CALL dword ptr [0x00685284]         ; 00609c16 | IS_SPECIAL_DEVICE_FUNC * g_IsSpecialDeviceFuncPtr
    MOV ESI,EAX                         ; 00609c1c
    ADD ESP,0x4                         ; 00609c1e
    TEST EAX,EAX                        ; 00609c21
    JZ 0x00609c3b                       ; 00609c23 | LAB_00609c3b
        ;   XREF to: 00609c3b (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00609c25
    CALL dword ptr [0x00685288]         ; 00609c26 | SPECIAL_DEVICE_CLEANUP_FUNC * g_SpecialDeviceCleanupFunc
    ADD ESP,0x4                         ; 00609c2c
    PUSH ESI                            ; 00609c2f
    CALL dword ptr [0x00685290]         ; 00609c30 | SPECIAL_DEVICE_CLOSE_FUNC * g_SpecialDeviceCloseFunc
    ADD ESP,0x4                         ; 00609c36
    JMP 0x00609c5f                      ; 00609c39 | LAB_00609c5f
        ;   XREF to: 00609c5f (UNCONDITIONAL_JUMP)
    TEST EBP,EBP                        ; 00609c3b
        ;   Label: LAB_00609c3b
    JNZ 0x00609c5f                      ; 00609c3d | LAB_00609c5f
        ;   XREF to: 00609c5f (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP]             ; 00609c3f
    PUSH ESI                            ; 00609c42
    CALL dword ptr CS:[0x611504]        ; 00609c43 | CloseHandle * CloseHandle
    TEST EAX,EAX                        ; 00609c4a
    JNZ 0x00609c5f                      ; 00609c4c | LAB_00609c5f
        ;   XREF to: 00609c5f (CONDITIONAL_JUMP)
    PUSH 0x4                            ; 00609c4e
    MOV EDI,0xffffffff                  ; 00609c50
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00609c55 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00609c5a
    JMP 0x00609c6a                      ; 00609c5d | LAB_00609c6a
        ;   XREF to: 00609c6a (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00609c5f
        ;   Label: LAB_00609c5f
    PUSH EBX                            ; 00609c61
    CALL crt_io.c_setFileDescriptorFlags_FUN_00608908 ; 00609c62 | void crt_io.c_setFileDescriptorFlags_FUN_00608908(int file_handle_index, uint flags)
        ;   XREF to: 00608908 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00609c67
    MOV EAX,EDI                         ; 00609c6a
        ;   Label: LAB_00609c6a
    ADD ESP,0x4                         ; 00609c6c
        ;   Label: LAB_00609c6c
    POP EBP                             ; 00609c6f
    POP EDI                             ; 00609c70
    POP ESI                             ; 00609c71
    POP EBX                             ; 00609c72
    RET                                 ; 00609c73

