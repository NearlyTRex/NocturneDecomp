; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f2190(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa164
;   undefined4 DAT_01d0d2d4
;
; Called Functions:
;   FUN_004f21d0
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1d09850                      ; 004f2190
        ;   Label: FUN_004f2190
    CALL FUN_004f21d0                   ; 004f2195
        ;   XREF to: 004f21d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f21d0()
    ADD ESP,0x4                         ; 004f219a
    PUSH 0x6180e0                       ; 004f219d
    CALL FUN_005b8d8c                   ; 004f21a2
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004f21a7
    PUSH 0x5fa190                       ; 004f21aa
    PUSH 0x32                           ; 004f21af
    PUSH 0x1d0c3a4                      ; 004f21b1
    CALL FUN_005b7f5f                   ; 004f21b6
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    FLD float ptr [0x005fa164]          ; 004f21bb | DAT_005fa164
    ADD ESP,0xc                         ; 004f21c1
    FSTP float ptr [0x01d0d2d4]         ; 004f21c4 | DAT_01d0d2d4
    RET                                 ; 004f21ca

