; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b28b0(void)
;
;
; Called Functions:
;   FUN_004477f0
;   FUN_00449c70
;   FUN_00481fc0
;   FUN_004b2d80
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004b28b0
        ;   Label: FUN_004b28b0
    PUSH 0x100                          ; 004b28b5
    PUSH 0x1cb3950                      ; 004b28ba
    CALL FUN_00449c70                   ; 004b28bf
        ;   XREF to: 00449c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00449c70()
    ADD ESP,0xc                         ; 004b28c4
    PUSH 0x6163f0                       ; 004b28c7
    CALL FUN_005b8d8c                   ; 004b28cc
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004b28d1
    PUSH 0x1cb6900                      ; 004b28d4
    CALL FUN_004b2d80                   ; 004b28d9
        ;   XREF to: 004b2d80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2d80()
    ADD ESP,0x4                         ; 004b28de
    PUSH 0x616400                       ; 004b28e1
    CALL FUN_005b8d8c                   ; 004b28e6
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004b28eb
    PUSH 0x1cb778c                      ; 004b28ee
    CALL FUN_00481fc0                   ; 004b28f3
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481fc0()
    ADD ESP,0x4                         ; 004b28f8
    PUSH 0x616410                       ; 004b28fb
    CALL FUN_005b8d8c                   ; 004b2900
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004b2905
    PUSH 0x1cb8080                      ; 004b2908
    CALL FUN_004477f0                   ; 004b290d
        ;   XREF to: 004477f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004477f0()
    ADD ESP,0x4                         ; 004b2912
    PUSH 0x616420                       ; 004b2915
    CALL FUN_005b8d8c                   ; 004b291a
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004b291f
    RET                                 ; 004b2922

