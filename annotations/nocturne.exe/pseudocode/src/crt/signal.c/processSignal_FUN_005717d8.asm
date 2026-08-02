; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_signal_c_processSignal_FUN_005717d8(int signal_number)
;
; Parameters:
; int              Stack[0x4]:4   signal_number
;
; XREF[2]:
;   crt_signal.c_consoleCtrlHandler_FUN_005715d0 at 005715f2
;   crt_unknown.c_FUN_00571858 at 00571886
;
; Referenced Globals:
;   undefined1* switchdataD_005717a8 = 0057180b
;
; Called Functions:
;   crt_signal.c_getSignalHandler_FUN_00571564
;   crt_signal.c_raiseFPE_FUN_005716d8
;   crt_signal.c_setSignalHandler_FUN_00571510
;   crt_signal.c_unregisterConsoleHandler_FUN_00571694
;   crt_unknown.c_FUN_00571630
;   crt_unknown.c_reportAbnormalTermination_FUN_00566f98
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005717d8
        ;   Label: crt_signal.c_processSignal_FUN_005717d8
    PUSH ESI                            ; 005717d9
    MOV ESI,dword ptr [ESP + 0xc]       ; 005717da
    PUSH ESI                            ; 005717de
    CALL crt_signal.c_getSignalHandler_FUN_00571564 ; 005717df
        ;   XREF to: 00571564 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_getSignalHandler_FUN_00571564(int signal_number)
    ADD ESP,0x4                         ; 005717e4
    LEA EDX,[ESI + -0x1]                ; 005717e7
    MOV EBX,EAX                         ; 005717ea
    CMP EDX,0xb                         ; 005717ec
    JA 0x00571848                       ; 005717ef
        ;   XREF to: 00571848 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EDX*0x4 + 0x5717a8] ; 005717f1 | caseD_1 | caseD_2 | caseD_c
        ;   Label: switchD
    PUSH 0x8c                           ; 005717f9
        ;   Label: caseD_2
    CALL crt_signal.c_raiseFPE_FUN_005716d8 ; 005717fe
        ;   XREF to: 005716d8 (UNCONDITIONAL_CALL)  ; int crt_signal.c_raiseFPE_FUN_005716d8(int fpe_code)
    ADD ESP,0x4                         ; 00571803
    XOR EAX,EAX                         ; 00571806
    POP ESI                             ; 00571808
    POP EBX                             ; 00571809
    RET                                 ; 0057180a
    CMP EAX,0x2                         ; 0057180b
        ;   Label: caseD_1
    JNZ 0x00571815                      ; 0057180e
        ;   XREF to: 00571815 (CONDITIONAL_JUMP)  ; caseD_c
    CALL crt_unknown.c_reportAbnormalTermination_FUN_00566f98 ; 00571810
        ;   XREF to: 00566f98 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_reportAbnormalTermination_FUN_00566f98()
    CMP EBX,0x1                         ; 00571815
        ;   Label: caseD_3
    JZ 0x00571835                       ; 00571818
        ;   XREF to: 00571835 (CONDITIONAL_JUMP)  ; LAB_00571835
    CMP EBX,0x2                         ; 0057181a
    JZ 0x00571835                       ; 0057181d
        ;   XREF to: 00571835 (CONDITIONAL_JUMP)  ; LAB_00571835
    CMP EBX,0x3                         ; 0057181f
    JZ 0x00571835                       ; 00571822
        ;   XREF to: 00571835 (CONDITIONAL_JUMP)  ; LAB_00571835
    PUSH 0x2                            ; 00571824
    PUSH ESI                            ; 00571826
    CALL crt_signal.c_setSignalHandler_FUN_00571510 ; 00571827
        ;   XREF to: 00571510 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_setSignalHandler_FUN_00571510(int signal_number, SIGNAL_HANDLER_TYPE new_handler_type)
    ADD ESP,0x8                         ; 0057182c
    PUSH ESI                            ; 0057182f
    CALL EBX                            ; 00571830
    ADD ESP,0x4                         ; 00571832
    CALL crt_unknown.c_FUN_00571630     ; 00571835
        ;   XREF to: 00571630 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00571630()
        ;   Label: LAB_00571835
    TEST EAX,EAX                        ; 0057183a
    JNZ 0x00571850                      ; 0057183c
        ;   XREF to: 00571850 (CONDITIONAL_JUMP)  ; LAB_00571850
    CALL crt_signal.c_unregisterConsoleHandler_FUN_00571694 ; 0057183e
        ;   XREF to: 00571694 (UNCONDITIONAL_CALL)  ; undefined1 crt_signal.c_unregisterConsoleHandler_FUN_00571694()
    XOR EAX,EAX                         ; 00571843
    POP ESI                             ; 00571845
    POP EBX                             ; 00571846
    RET                                 ; 00571847
    MOV EAX,0xffffffff                  ; 00571848
        ;   Label: default
    POP ESI                             ; 0057184d
    POP EBX                             ; 0057184e
    RET                                 ; 0057184f
    XOR EAX,EAX                         ; 00571850
        ;   Label: LAB_00571850
    POP ESI                             ; 00571852
    POP EBX                             ; 00571853
    RET                                 ; 00571854

