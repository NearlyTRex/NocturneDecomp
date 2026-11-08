; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a74f0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004a74f0
        ;   Label: FUN_004a74f0
    PUSH 0x1                            ; 004a74f5
    PUSH 0x5fe264                       ; 004a74f7
    PUSH 0x4a7520                       ; 004a74fc
    PUSH 0x5c0ce7                       ; 004a7501
    PUSH 0x1d0cf64                      ; 004a7506
    CALL FUN_0040c3a0                   ; 004a750b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004a7510
    RET                                 ; 004a7513

