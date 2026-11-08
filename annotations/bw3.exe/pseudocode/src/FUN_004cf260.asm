; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cf260(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004cf260
        ;   Label: FUN_004cf260
    PUSH 0x4                            ; 004cf265
    PUSH 0x5fff28                       ; 004cf267
    PUSH 0x4cf290                       ; 004cf26c
    PUSH 0x5c47af                       ; 004cf271
    PUSH 0x1d5b86c                      ; 004cf276
    CALL FUN_0040c3a0                   ; 004cf27b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004cf280
    RET                                 ; 004cf283

