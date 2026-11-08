; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056d490(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00605b04
;   undefined4 DAT_00605b08
;   undefined4 DAT_02c745e0
;
; Called Functions:
;   FUN_005c0357
;   FUN_005c1093
;
; *****************************************************************************

section .text

    FLD float ptr [0x00605b08]          ; 0056d490 | DAT_00605b08
        ;   Label: FUN_0056d490
    FDIV float ptr [0x00605b04]         ; 0056d496 | DAT_00605b04
    PUSH 0x605b20                       ; 0056d49c
    PUSH 0x40                           ; 0056d4a1
    PUSH 0x2c745ec                      ; 0056d4a3
    FSTP float ptr [0x02c745e0]         ; 0056d4a8 | DAT_02c745e0
    CALL FUN_005c0357                   ; 0056d4ae
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 0056d4b3
    PUSH 0x605b40                       ; 0056d4b6
    PUSH 0x8                            ; 0056d4bb
    PUSH 0x2c78cf0                      ; 0056d4bd
    CALL FUN_005c0357                   ; 0056d4c2
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 0056d4c7
    PUSH 0x605b60                       ; 0056d4ca
    PUSH 0x40                           ; 0056d4cf
    PUSH 0x2c78ff4                      ; 0056d4d1
    CALL FUN_005c0357                   ; 0056d4d6
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 0056d4db
    PUSH 0x6232b0                       ; 0056d4de
    CALL FUN_005c1093                   ; 0056d4e3
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 0056d4e8
    RET                                 ; 0056d4eb

