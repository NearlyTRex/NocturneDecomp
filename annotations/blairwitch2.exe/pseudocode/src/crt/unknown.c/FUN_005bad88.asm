; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bad88(void)
;
;
; XREF[2]:
;   crt_unknown.c_processSignal_FUN_005c50b8 at 005c50f0
;   crt_watcom.c_notifyAbnormalTermination_FUN_005bad80 at 005bad80
;
; Referenced Globals:
;   TerminatedCString s_ABNORMAL_TERMINATION_005f1984
;
; Called Functions:
;   crt_unknown.c_FUN_005c1c20
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 005bad88
        ;   Label: crt_unknown.c_FUN_005bad88
    PUSH 0x5f1984                       ; 005bad8d | = "ABNORMAL TERMINATION\r\n"
    CALL crt_unknown.c_FUN_005c1c20     ; 005bad92
        ;   XREF to: 005c1c20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1c20()
    ADD ESP,0x8                         ; 005bad97
    RET                                 ; 005bad9a

