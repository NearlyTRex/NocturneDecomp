; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068()
;
;
; Referenced Globals:
;   VOID_FUNC* PTR_crt_startup.c_reportAbnormalTermination_FUN_00684c84 = 00601628
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_signal.c_getSignalHandler_FUN_0060ceb4
;   crt_signal.c_registerConsoleHandler_FUN_0060cfb8
;   crt_signal.c_setSignalHandler_FUN_0060ce60
;   crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
;   crt_unknown.c_FUN_0060ced8
;   crt_unknown.c_FUN_0060cf80
;   crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d068
        ;   Label: crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068
    PUSH ESI                            ; 0060d069
    PUSH EDI                            ; 0060d06a
    MOV EBX,dword ptr [ESP + 0x10]      ; 0060d06b
    MOV EDI,dword ptr [ESP + 0x14]      ; 0060d06f
    CMP EBX,0x1                         ; 0060d073
    JL 0x0060d07d                       ; 0060d076 | LAB_0060d07d
        ;   XREF to: 0060d07d (CONDITIONAL_JUMP)
    CMP EBX,0xc                         ; 0060d078
    JLE 0x0060d090                      ; 0060d07b | LAB_0060d090
        ;   XREF to: 0060d090 (CONDITIONAL_JUMP)
    PUSH 0x9                            ; 0060d07d
        ;   Label: LAB_0060d07d
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060d07f | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    MOV EAX,0x3                         ; 0060d084
    ADD ESP,0x4                         ; 0060d089
    POP EDI                             ; 0060d08c
    POP ESI                             ; 0060d08d
    POP EBX                             ; 0060d08e
    RET                                 ; 0060d08f
    MOV dword ptr [0x00684c84],0x60d01c ; 0060d090 | VOID_FUNC * PTR_crt_startup.c_reportAbnormalTermination_FUN_00684c84 | LAB_0060d01c
        ;   Label: LAB_0060d090
    CMP EDI,0x2                         ; 0060d09a
    JZ 0x0060d0c5                       ; 0060d09d | LAB_0060d0c5
        ;   XREF to: 0060d0c5 (CONDITIONAL_JUMP)
    CMP EDI,0x3                         ; 0060d09f
    JZ 0x0060d0c5                       ; 0060d0a2 | LAB_0060d0c5
        ;   XREF to: 0060d0c5 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0060d0a4
    CALL crt_unknown.c_FUN_0060ced8     ; 0060d0a5 | undefined crt_unknown.c_FUN_0060ced8()
        ;   XREF to: 0060ced8 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060d0aa
    TEST EAX,EAX                        ; 0060d0ad
    JZ 0x0060d0c5                       ; 0060d0af | LAB_0060d0c5
        ;   XREF to: 0060d0c5 (CONDITIONAL_JUMP)
    CMP EBX,0x2                         ; 0060d0b1
    JNZ 0x0060d0c5                      ; 0060d0b4 | LAB_0060d0c5
        ;   XREF to: 0060d0c5 (CONDITIONAL_JUMP)
    PUSH 0x9f                           ; 0060d0b6
    PUSH 0x0                            ; 0060d0bb
    CALL crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0 ; 0060d0bd | undefined crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0()
        ;   XREF to: 0060e8e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060d0c2
    PUSH EBX                            ; 0060d0c5
        ;   Label: LAB_0060d0c5
    CALL crt_signal.c_getSignalHandler_FUN_0060ceb4 ; 0060d0c6 | SIGNAL_HANDLER crt_signal.c_getSignalHandler_FUN_0060ceb4(int signal_number)
        ;   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060d0cb
    PUSH EDI                            ; 0060d0ce
    PUSH EBX                            ; 0060d0cf
    MOV ESI,EAX                         ; 0060d0d0
    CALL crt_signal.c_setSignalHandler_FUN_0060ce60 ; 0060d0d2 | SIGNAL_HANDLER crt_signal.c_setSignalHandler_FUN_0060ce60(int signal_number, SIGNAL_HANDLER new_handler)
        ;   XREF to: 0060ce60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060d0d7
    CALL crt_unknown.c_FUN_0060cf80     ; 0060d0da | undefined crt_unknown.c_FUN_0060cf80()
        ;   XREF to: 0060cf80 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 0060d0df
    JZ 0x0060d0ea                       ; 0060d0e1 | LAB_0060d0ea
        ;   XREF to: 0060d0ea (CONDITIONAL_JUMP)
    CALL crt_signal.c_registerConsoleHandler_FUN_0060cfb8 ; 0060d0e3 | bool crt_signal.c_registerConsoleHandler_FUN_0060cfb8()
        ;   XREF to: 0060cfb8 (UNCONDITIONAL_CALL)
    JMP 0x0060d0ef                      ; 0060d0e8 | LAB_0060d0ef
        ;   XREF to: 0060d0ef (UNCONDITIONAL_JUMP)
    CALL crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4 ; 0060d0ea | undefined crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4()
        ;   Label: LAB_0060d0ea
        ;   XREF to: 0060cfe4 (UNCONDITIONAL_CALL)
    MOV EAX,ESI                         ; 0060d0ef
        ;   Label: LAB_0060d0ef
    POP EDI                             ; 0060d0f1
    POP ESI                             ; 0060d0f2
    POP EBX                             ; 0060d0f3
    RET                                 ; 0060d0f4

