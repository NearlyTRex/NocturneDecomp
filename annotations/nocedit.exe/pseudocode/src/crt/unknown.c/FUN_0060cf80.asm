; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_0060cf80(void)
;
;
; XREF[3]:
;   crt_signal.c_processSignal_FUN_0060d128 at 0060d185
;   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 at 0060d0da
;   crt_unknown.c_FUN_0060d1ec at 0060d1ec
;
; Called Functions:
;   crt_signal.c_getSignalHandler_FUN_0060ceb4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060cf80
        ;   Label: crt_unknown.c_FUN_0060cf80
    PUSH 0x4                            ; 0060cf81
    CALL crt_signal.c_getSignalHandler_FUN_0060ceb4 ; 0060cf83
        ;   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_getSignalHandler_FUN_0060ceb4(int signal_number)
    ADD ESP,0x4                         ; 0060cf88
    PUSH 0x7                            ; 0060cf8b
    MOV EBX,EAX                         ; 0060cf8d
    CALL crt_signal.c_getSignalHandler_FUN_0060ceb4 ; 0060cf8f
        ;   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_getSignalHandler_FUN_0060ceb4(int signal_number)
    ADD ESP,0x4                         ; 0060cf94
    CMP EBX,0x2                         ; 0060cf97
    JZ 0x0060cfa1                       ; 0060cf9a
        ;   XREF to: 0060cfa1 (CONDITIONAL_JUMP)  ; LAB_0060cfa1
    CMP EBX,0x3                         ; 0060cf9c
    JNZ 0x0060cfab                      ; 0060cf9f
        ;   XREF to: 0060cfab (CONDITIONAL_JUMP)  ; LAB_0060cfab
    CMP EAX,0x2                         ; 0060cfa1
        ;   Label: LAB_0060cfa1
    JZ 0x0060cfb2                       ; 0060cfa4
        ;   XREF to: 0060cfb2 (CONDITIONAL_JUMP)  ; LAB_0060cfb2
    CMP EAX,0x3                         ; 0060cfa6
    JZ 0x0060cfb2                       ; 0060cfa9
        ;   XREF to: 0060cfb2 (CONDITIONAL_JUMP)  ; LAB_0060cfb2
    MOV EAX,0x1                         ; 0060cfab
        ;   Label: LAB_0060cfab
    POP EBX                             ; 0060cfb0
    RET                                 ; 0060cfb1
    XOR EAX,EAX                         ; 0060cfb2
        ;   Label: LAB_0060cfb2
    POP EBX                             ; 0060cfb4
    RET                                 ; 0060cfb5

