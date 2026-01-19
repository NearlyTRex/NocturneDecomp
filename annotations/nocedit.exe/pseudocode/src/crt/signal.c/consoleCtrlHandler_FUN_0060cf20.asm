; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stdcall BOOL crt_signal.c_consoleCtrlHandler_FUN_0060cf20(DWORD dwCtrlType)
;
; Parameters:
; typedef DWORD ulong Stack[0x4]:4   dwCtrlType
;
; XREF[2]:
;   crt_signal.c_registerConsoleHandler_FUN_0060cfb8 at 0060cfc3
;   crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4 at 0060cfef
;
; Called Functions:
;   crt_signal.c_getSignalHandler_FUN_0060ceb4
;   crt_signal.c_processSignal_FUN_0060d128
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060cf20
        ;   Label: crt_signal.c_consoleCtrlHandler_FUN_0060cf20
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060cf21
    TEST EAX,EAX                        ; 0060cf25
    JBE 0x0060cf30                      ; 0060cf27
        ;   XREF to: 0060cf30 (CONDITIONAL_JUMP)  ; LAB_0060cf30
    CMP EAX,0x1                         ; 0060cf29
    JZ 0x0060cf4c                       ; 0060cf2c
        ;   XREF to: 0060cf4c (CONDITIONAL_JUMP)  ; LAB_0060cf4c
    JMP 0x0060cf70                      ; 0060cf2e
        ;   XREF to: 0060cf70 (UNCONDITIONAL_JUMP)  ; LAB_0060cf70
    PUSH 0x4                            ; 0060cf30
        ;   Label: LAB_0060cf30
    CALL crt_signal.c_getSignalHandler_FUN_0060ceb4 ; 0060cf32
        ;   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_getSignalHandler_FUN_0060ceb4(int signal_number)
    ADD ESP,0x4                         ; 0060cf37
    MOV EBX,EAX                         ; 0060cf3a
    TEST EAX,EAX                        ; 0060cf3c
    JZ 0x0060cf7b                       ; 0060cf3e
        ;   XREF to: 0060cf7b (CONDITIONAL_JUMP)  ; LAB_0060cf7b
    PUSH 0x4                            ; 0060cf40
    CALL crt_signal.c_processSignal_FUN_0060d128 ; 0060cf42
        ;   XREF to: 0060d128 (UNCONDITIONAL_CALL)  ; int crt_signal.c_processSignal_FUN_0060d128(int signal_number)
    ADD ESP,0x4                         ; 0060cf47
    JMP 0x0060cf66                      ; 0060cf4a
        ;   XREF to: 0060cf66 (UNCONDITIONAL_JUMP)  ; LAB_0060cf66
    PUSH 0x7                            ; 0060cf4c
        ;   Label: LAB_0060cf4c
    CALL crt_signal.c_getSignalHandler_FUN_0060ceb4 ; 0060cf4e
        ;   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_getSignalHandler_FUN_0060ceb4(int signal_number)
    ADD ESP,0x4                         ; 0060cf53
    MOV EBX,EAX                         ; 0060cf56
    TEST EAX,EAX                        ; 0060cf58
    JZ 0x0060cf7b                       ; 0060cf5a
        ;   XREF to: 0060cf7b (CONDITIONAL_JUMP)  ; LAB_0060cf7b
    PUSH 0x7                            ; 0060cf5c
    CALL crt_signal.c_processSignal_FUN_0060d128 ; 0060cf5e
        ;   XREF to: 0060d128 (UNCONDITIONAL_CALL)  ; int crt_signal.c_processSignal_FUN_0060d128(int signal_number)
    ADD ESP,0x4                         ; 0060cf63
    CMP EBX,0x2                         ; 0060cf66
        ;   Label: LAB_0060cf66
    JZ 0x0060cf70                       ; 0060cf69
        ;   XREF to: 0060cf70 (CONDITIONAL_JUMP)  ; LAB_0060cf70
    CMP EBX,0x3                         ; 0060cf6b
    JNZ 0x0060cf76                      ; 0060cf6e
        ;   XREF to: 0060cf76 (CONDITIONAL_JUMP)  ; LAB_0060cf76
    XOR EAX,EAX                         ; 0060cf70
        ;   Label: LAB_0060cf70
    POP EBX                             ; 0060cf72
    RET 0x4                             ; 0060cf73
    MOV EAX,0x1                         ; 0060cf76
        ;   Label: LAB_0060cf76
    POP EBX                             ; 0060cf7b
        ;   Label: LAB_0060cf7b
    RET 0x4                             ; 0060cf7c

