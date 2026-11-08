; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dacc0(void)
;
;
; XREF[1]:
;   FUN_004b6170 at 004b6826
;
; Called Functions:
;   FUN_0040d540
;
; *****************************************************************************

section .text

    PUSH 0x1cf01b0                      ; 004dacc0
        ;   Label: FUN_004dacc0
    CALL FUN_0040d540                   ; 004dacc5
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dacca
    PUSH 0x1cf01c4                      ; 004daccd
    CALL FUN_0040d540                   ; 004dacd2
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dacd7
    PUSH 0x1cf01d8                      ; 004dacda
    CALL FUN_0040d540                   ; 004dacdf
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dace4
    PUSH 0x1cf01ec                      ; 004dace7
    CALL FUN_0040d540                   ; 004dacec
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dacf1
    PUSH 0x1d02e08                      ; 004dacf4
    CALL FUN_0040d540                   ; 004dacf9
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dacfe
    PUSH 0x1d02e1c                      ; 004dad01
    CALL FUN_0040d540                   ; 004dad06
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dad0b
    PUSH 0x1d02e30                      ; 004dad0e
    CALL FUN_0040d540                   ; 004dad13
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dad18
    PUSH 0x1d02e44                      ; 004dad1b
    CALL FUN_0040d540                   ; 004dad20
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dad25
    PUSH 0x1d02e58                      ; 004dad28
    CALL FUN_0040d540                   ; 004dad2d
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dad32
    PUSH 0x1d02e6c                      ; 004dad35
    CALL FUN_0040d540                   ; 004dad3a
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dad3f
    PUSH 0x1d02e80                      ; 004dad42
    CALL FUN_0040d540                   ; 004dad47
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dad4c
    PUSH 0x1d02e94                      ; 004dad4f
    CALL FUN_0040d540                   ; 004dad54
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dad59
    PUSH 0x1d02ea8                      ; 004dad5c
    CALL FUN_0040d540                   ; 004dad61
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dad66
    PUSH 0x1d02ebc                      ; 004dad69
    CALL FUN_0040d540                   ; 004dad6e
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004dad73
    RET                                 ; 004dad76

