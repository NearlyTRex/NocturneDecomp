; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004462d0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH 0x5db0f0                       ; 004462d0
        ;   Label: FUN_004462d0
    PUSH 0x64                           ; 004462d5
    PUSH 0x7f8fd0                       ; 004462d7
    CALL FUN_005a30d7                   ; 004462dc
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004462e1
    PUSH 0x5ddf50                       ; 004462e4
    PUSH 0x64                           ; 004462e9
    PUSH 0x7f9480                       ; 004462eb
    CALL FUN_005a30d7                   ; 004462f0
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004462f5
    PUSH 0x7df978                       ; 004462f8
    PUSH 0x6                            ; 004462fd
    PUSH 0x5f1784                       ; 004462ff
    PUSH 0x446320                       ; 00446304
    PUSH 0x5b9a29                       ; 00446309
    PUSH 0x7fa420                       ; 0044630e
    CALL FUN_0040c3a0                   ; 00446313
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00446318
    RET                                 ; 0044631b

