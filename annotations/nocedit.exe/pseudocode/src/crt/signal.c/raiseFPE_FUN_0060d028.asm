; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_signal.c_raiseFPE_FUN_0060d028(int fpe_code)
;
; Parameters:
; int              Stack[0x4]:4   fpe_code
;
; XREF[2]:
;   crt_exception.c_ExceptionHandler_FUN_0060a9d8 at 0060aaf0
;   crt_signal.c_processSignal_FUN_0060d128 at 0060d14e
;
; Called Functions:
;   crt_signal.c_getSignalHandler_FUN_0060ceb4
;   crt_signal.c_setSignalHandler_FUN_0060ce60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d028
        ;   Label: crt_signal.c_raiseFPE_FUN_0060d028
    PUSH 0x2                            ; 0060d029
    CALL crt_signal.c_getSignalHandler_FUN_0060ceb4 ; 0060d02b | SIGNAL_HANDLER crt_signal.c_getSignalHandler_FUN_0060ceb4(int signal_number)
        ;   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060d030
    MOV EBX,EAX                         ; 0060d033
    CMP EAX,0x1                         ; 0060d035
    JZ 0x0060d060                       ; 0060d038 | LAB_0060d060
        ;   XREF to: 0060d060 (CONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 0060d03a
    JZ 0x0060d060                       ; 0060d03d | LAB_0060d060
        ;   XREF to: 0060d060 (CONDITIONAL_JUMP)
    CMP EAX,0x3                         ; 0060d03f
    JZ 0x0060d060                       ; 0060d042 | LAB_0060d060
        ;   XREF to: 0060d060 (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 0060d044
    PUSH 0x2                            ; 0060d046
    CALL crt_signal.c_setSignalHandler_FUN_0060ce60 ; 0060d048 | SIGNAL_HANDLER crt_signal.c_setSignalHandler_FUN_0060ce60(int signal_number, SIGNAL_HANDLER new_handler)
        ;   XREF to: 0060ce60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060d04d
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060d050
    PUSH EDX                            ; 0060d054
    PUSH 0x2                            ; 0060d055
    CALL EBX                            ; 0060d057
    ADD ESP,0x8                         ; 0060d059
    XOR EAX,EAX                         ; 0060d05c
    POP EBX                             ; 0060d05e
    RET                                 ; 0060d05f
    MOV EAX,0xffffffff                  ; 0060d060
        ;   Label: LAB_0060d060
    POP EBX                             ; 0060d065
    RET                                 ; 0060d066

