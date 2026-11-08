; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c3148(void)
;
;
; XREF[2]:
;   FUN_005c3140 at 005c3140
;   FUN_005cd3b8 at 005cd3f0
;
; Referenced Globals:
;   TerminatedCString s_ABNORMAL_TERMINATION_005fab2c
;
; Called Functions:
;   FUN_005c9f70
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 005c3148
        ;   Label: FUN_005c3148
    PUSH 0x5fab2c                       ; 005c314d | = "ABNORMAL TERMINATION\r\n"
    CALL FUN_005c9f70                   ; 005c3152
        ;   XREF to: 005c9f70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9f70()
    ADD ESP,0x8                         ; 005c3157
    RET                                 ; 005c315a

