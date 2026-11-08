; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00546fd0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 00546fd0
        ;   Label: FUN_00546fd0
    PUSH 0x1                            ; 00546fd5
    PUSH 0x604148                       ; 00546fd7
    PUSH 0x547000                       ; 00546fdc
    PUSH 0x5d1536                       ; 00546fe1
    PUSH 0x270f944                      ; 00546fe6
    CALL FUN_0040c3a0                   ; 00546feb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00546ff0
    RET                                 ; 00546ff3

