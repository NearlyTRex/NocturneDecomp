; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c3148(void)
;
;
; XREF[2]:
;   crt_watcom.c_notifyAbnormalTermination_FUN_005c3140 at 005c3140
;   unkafter_2d.cpp_FUN_005cd3b8 at 005cd3f0
;
; Referenced Globals:
;   TerminatedCString s_ABNORMAL_TERMINATION_005fab2c
;
; Called Functions:
;   crt_unknown.c_FUN_005c9f70
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 005c3148
        ;   Label: crt_unknown.c_FUN_005c3148
    PUSH 0x5fab2c                       ; 005c314d | = "ABNORMAL TERMINATION\r\n"
    CALL crt_unknown.c_FUN_005c9f70     ; 005c3152
        ;   XREF to: 005c9f70 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9f70()
    ADD ESP,0x8                         ; 005c3157
    RET                                 ; 005c315a

