; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_signal_c_processSignal_FUN_0060d128(int signal_number)
;
; Parameters:
; int              Stack[0x4]:4   signal_number
;
; XREF[1]:
;   crt_signal.c_consoleCtrlHandler_FUN_0060cf20 at 0060cf42
;
; Referenced Globals:
;   void* switchdataD_0060d0f8 = 0060d15b
;
; Called Functions:
;   crt_signal.c_getSignalHandler_FUN_0060ceb4
;   crt_signal.c_raiseFPE_FUN_0060d028
;   crt_signal.c_setSignalHandler_FUN_0060ce60
;   crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
;   crt_startup.c_reportAbnormalTermination_FUN_00601628
;   crt_unknown.c_FUN_0060cf80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d128
        ;   Label: crt_signal.c_processSignal_FUN_0060d128
    PUSH ESI                            ; 0060d129
    MOV ESI,dword ptr [ESP + 0xc]       ; 0060d12a
    PUSH ESI                            ; 0060d12e
    CALL crt_signal.c_getSignalHandler_FUN_0060ceb4 ; 0060d12f
        ;   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_getSignalHandler_FUN_0060ceb4(int signal_number)
    ADD ESP,0x4                         ; 0060d134
    LEA EDX,[ESI + -0x1]                ; 0060d137
    MOV EBX,EAX                         ; 0060d13a
    CMP EDX,0xb                         ; 0060d13c
    JA 0x0060d198                       ; 0060d13f
        ;   XREF to: 0060d198 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EDX*0x4 + 0x60d0f8] ; 0060d141 | caseD_2 | caseD_1 | caseD_b
        ;   Label: switchD
    PUSH 0x8c                           ; 0060d149
        ;   Label: caseD_2
    CALL crt_signal.c_raiseFPE_FUN_0060d028 ; 0060d14e
        ;   XREF to: 0060d028 (UNCONDITIONAL_CALL)  ; int crt_signal.c_raiseFPE_FUN_0060d028(int fpe_code)
    ADD ESP,0x4                         ; 0060d153
    XOR EAX,EAX                         ; 0060d156
    POP ESI                             ; 0060d158
    POP EBX                             ; 0060d159
    RET                                 ; 0060d15a
    CMP EAX,0x2                         ; 0060d15b
        ;   Label: caseD_1
    JNZ 0x0060d165                      ; 0060d15e
        ;   XREF to: 0060d165 (CONDITIONAL_JUMP)  ; caseD_b
    CALL crt_startup.c_reportAbnormalTermination_FUN_00601628 ; 0060d160
        ;   XREF to: 00601628 (UNCONDITIONAL_CALL)  ; void crt_startup.c_reportAbnormalTermination_FUN_00601628()
    CMP EBX,0x1                         ; 0060d165
        ;   Label: caseD_c
    JZ 0x0060d185                       ; 0060d168
        ;   XREF to: 0060d185 (CONDITIONAL_JUMP)  ; LAB_0060d185
    CMP EBX,0x2                         ; 0060d16a
    JZ 0x0060d185                       ; 0060d16d
        ;   XREF to: 0060d185 (CONDITIONAL_JUMP)  ; LAB_0060d185
    CMP EBX,0x3                         ; 0060d16f
    JZ 0x0060d185                       ; 0060d172
        ;   XREF to: 0060d185 (CONDITIONAL_JUMP)  ; LAB_0060d185
    PUSH 0x2                            ; 0060d174
    PUSH ESI                            ; 0060d176
    CALL crt_signal.c_setSignalHandler_FUN_0060ce60 ; 0060d177
        ;   XREF to: 0060ce60 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_setSignalHandler_FUN_0060ce60(int signal_number, SIGNAL_HANDLER_TYPE new_handler_type)
    ADD ESP,0x8                         ; 0060d17c
    PUSH ESI                            ; 0060d17f
    CALL EBX                            ; 0060d180
    ADD ESP,0x4                         ; 0060d182
    CALL crt_unknown.c_FUN_0060cf80     ; 0060d185
        ;   XREF to: 0060cf80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060cf80()
        ;   Label: LAB_0060d185
    TEST EAX,EAX                        ; 0060d18a
    JNZ 0x0060d1a0                      ; 0060d18c
        ;   XREF to: 0060d1a0 (CONDITIONAL_JUMP)  ; LAB_0060d1a0
    CALL crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4 ; 0060d18e
        ;   XREF to: 0060cfe4 (UNCONDITIONAL_CALL)  ; undefined crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4()
    XOR EAX,EAX                         ; 0060d193
    POP ESI                             ; 0060d195
    POP EBX                             ; 0060d196
    RET                                 ; 0060d197
    MOV EAX,0xffffffff                  ; 0060d198
        ;   Label: default
    POP ESI                             ; 0060d19d
    POP EBX                             ; 0060d19e
    RET                                 ; 0060d19f
    XOR EAX,EAX                         ; 0060d1a0
        ;   Label: LAB_0060d1a0
    POP ESI                             ; 0060d1a2
    POP EBX                             ; 0060d1a3
    RET                                 ; 0060d1a4

