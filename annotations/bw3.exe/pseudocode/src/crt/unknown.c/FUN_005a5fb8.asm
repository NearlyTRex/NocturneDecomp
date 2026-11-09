; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a5fb8(void)
;
;
; XREF[2]:
;   crt_watcom.c_notifyAbnormalTermination_FUN_005a5fb0 at 005a5fb0
;   unkafter_2d.cpp_FUN_005b0148 at 005b0180
;
; Referenced Globals:
;   TerminatedCString s_ABNORMAL_TERMINATION_005da7e8
;
; Called Functions:
;   crt_unknown.c_FUN_005acde0
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 005a5fb8
        ;   Label: crt_unknown.c_FUN_005a5fb8
    PUSH 0x5da7e8                       ; 005a5fbd | = "ABNORMAL TERMINATION\r\n"
    CALL crt_unknown.c_FUN_005acde0     ; 005a5fc2
        ;   XREF to: 005acde0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acde0()
    ADD ESP,0x8                         ; 005a5fc7
    RET                                 ; 005a5fca

