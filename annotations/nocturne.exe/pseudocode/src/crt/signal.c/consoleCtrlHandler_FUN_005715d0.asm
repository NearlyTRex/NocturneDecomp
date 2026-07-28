; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL __stdcall crt_signal_c_consoleCtrlHandler_FUN_005715d0(DWORD dwCtrlType)
;
; Parameters:
; DWORD            Stack[0x4]:4   dwCtrlType
;
; XREF[1]:
;   crt_signal.c_unregisterConsoleHandler_FUN_00571694 at 0057169f
;
; Called Functions:
;   crt_signal.c_getSignalHandler_FUN_00571564
;   crt_signal.c_processSignal_FUN_005717d8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005715d0
        ;   Label: crt_signal.c_consoleCtrlHandler_FUN_005715d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005715d1
    TEST EAX,EAX                        ; 005715d5
    JBE 0x005715e0                      ; 005715d7
        ;   XREF to: 005715e0 (CONDITIONAL_JUMP)  ; LAB_005715e0
    CMP EAX,0x1                         ; 005715d9
    JZ 0x005715fc                       ; 005715dc
        ;   XREF to: 005715fc (CONDITIONAL_JUMP)  ; LAB_005715fc
    JMP 0x00571620                      ; 005715de
        ;   XREF to: 00571620 (UNCONDITIONAL_JUMP)  ; LAB_00571620
    PUSH 0x4                            ; 005715e0
        ;   Label: LAB_005715e0
    CALL crt_signal.c_getSignalHandler_FUN_00571564 ; 005715e2
        ;   XREF to: 00571564 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_getSignalHandler_FUN_00571564(int signal_number)
    ADD ESP,0x4                         ; 005715e7
    MOV EBX,EAX                         ; 005715ea
    TEST EAX,EAX                        ; 005715ec
    JZ 0x0057162b                       ; 005715ee
        ;   XREF to: 0057162b (CONDITIONAL_JUMP)  ; LAB_0057162b
    PUSH 0x4                            ; 005715f0
    CALL crt_signal.c_processSignal_FUN_005717d8 ; 005715f2
        ;   XREF to: 005717d8 (UNCONDITIONAL_CALL)  ; int crt_signal.c_processSignal_FUN_005717d8(int signal_number)
    ADD ESP,0x4                         ; 005715f7
    JMP 0x00571616                      ; 005715fa
        ;   XREF to: 00571616 (UNCONDITIONAL_JUMP)  ; LAB_00571616
    PUSH 0x7                            ; 005715fc
        ;   Label: LAB_005715fc
    CALL crt_signal.c_getSignalHandler_FUN_00571564 ; 005715fe
        ;   XREF to: 00571564 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_getSignalHandler_FUN_00571564(int signal_number)
    ADD ESP,0x4                         ; 00571603
    MOV EBX,EAX                         ; 00571606
    TEST EAX,EAX                        ; 00571608
    JZ 0x0057162b                       ; 0057160a
        ;   XREF to: 0057162b (CONDITIONAL_JUMP)  ; LAB_0057162b
    PUSH 0x7                            ; 0057160c
    CALL crt_signal.c_processSignal_FUN_005717d8 ; 0057160e
        ;   XREF to: 005717d8 (UNCONDITIONAL_CALL)  ; int crt_signal.c_processSignal_FUN_005717d8(int signal_number)
    ADD ESP,0x4                         ; 00571613
    CMP EBX,0x2                         ; 00571616
        ;   Label: LAB_00571616
    JZ 0x00571620                       ; 00571619
        ;   XREF to: 00571620 (CONDITIONAL_JUMP)  ; LAB_00571620
    CMP EBX,0x3                         ; 0057161b
    JNZ 0x00571626                      ; 0057161e
        ;   XREF to: 00571626 (CONDITIONAL_JUMP)  ; LAB_00571626
    XOR EAX,EAX                         ; 00571620
        ;   Label: LAB_00571620
    POP EBX                             ; 00571622
    RET 0x4                             ; 00571623
    MOV EAX,0x1                         ; 00571626
        ;   Label: LAB_00571626
    POP EBX                             ; 0057162b
        ;   Label: LAB_0057162b
    RET 0x4                             ; 0057162c

