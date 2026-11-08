; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510f20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00603c94
;   undefined4 DAT_01d25f34
;
; Called Functions:
;   FUN_00510f60
;   FUN_005c0357
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1d224b0                      ; 00510f20
        ;   Label: FUN_00510f20
    CALL FUN_00510f60                   ; 00510f25
        ;   XREF to: 00510f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00510f60()
    ADD ESP,0x4                         ; 00510f2a
    PUSH 0x61f5c8                       ; 00510f2d
    CALL FUN_005c1093                   ; 00510f32
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00510f37
    PUSH 0x603cc0                       ; 00510f3a
    PUSH 0x32                           ; 00510f3f
    PUSH 0x1d25008                      ; 00510f41
    CALL FUN_005c0357                   ; 00510f46
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    FLD float ptr [0x00603c94]          ; 00510f4b | DAT_00603c94
    ADD ESP,0xc                         ; 00510f51
    FSTP float ptr [0x01d25f34]         ; 00510f54 | DAT_01d25f34
    RET                                 ; 00510f5a

