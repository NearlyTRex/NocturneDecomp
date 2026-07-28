; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_signal_c_raiseFPE_FUN_005716d8(int fpe_code)
;
; Parameters:
; int              Stack[0x4]:4   fpe_code
;
; XREF[2]:
;   crt_exception.c_ExceptionHandler_FUN_0056ed08 at 0056ee20
;   crt_signal.c_processSignal_FUN_005717d8 at 005717fe
;
; Called Functions:
;   crt_signal.c_getSignalHandler_FUN_00571564
;   crt_signal.c_setSignalHandler_FUN_00571510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005716d8
        ;   Label: crt_signal.c_raiseFPE_FUN_005716d8
    PUSH 0x2                            ; 005716d9
    CALL crt_signal.c_getSignalHandler_FUN_00571564 ; 005716db
        ;   XREF to: 00571564 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_getSignalHandler_FUN_00571564(int signal_number)
    ADD ESP,0x4                         ; 005716e0
    MOV EBX,EAX                         ; 005716e3
    CMP EAX,0x1                         ; 005716e5
    JZ 0x00571710                       ; 005716e8
        ;   XREF to: 00571710 (CONDITIONAL_JUMP)  ; LAB_00571710
    CMP EAX,0x2                         ; 005716ea
    JZ 0x00571710                       ; 005716ed
        ;   XREF to: 00571710 (CONDITIONAL_JUMP)  ; LAB_00571710
    CMP EAX,0x3                         ; 005716ef
    JZ 0x00571710                       ; 005716f2
        ;   XREF to: 00571710 (CONDITIONAL_JUMP)  ; LAB_00571710
    PUSH 0x2                            ; 005716f4
    PUSH 0x2                            ; 005716f6
    CALL crt_signal.c_setSignalHandler_FUN_00571510 ; 005716f8
        ;   XREF to: 00571510 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_setSignalHandler_FUN_00571510(int signal_number, SIGNAL_HANDLER_TYPE new_handler_type)
    ADD ESP,0x8                         ; 005716fd
    MOV EDX,dword ptr [ESP + 0x8]       ; 00571700
    PUSH EDX                            ; 00571704
    PUSH 0x2                            ; 00571705
    CALL EBX                            ; 00571707
    ADD ESP,0x8                         ; 00571709
    XOR EAX,EAX                         ; 0057170c
    POP EBX                             ; 0057170e
    RET                                 ; 0057170f
    MOV EAX,0xffffffff                  ; 00571710
        ;   Label: LAB_00571710
    POP EBX                             ; 00571715
    RET                                 ; 00571716

