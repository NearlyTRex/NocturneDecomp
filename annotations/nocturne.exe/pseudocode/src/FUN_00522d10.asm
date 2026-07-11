; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00522d10(void)
;
;
; XREF[2]:
;   FUN_005294f0 at 00529559
;   FUN_00529810 at 00529824
;
; Referenced Globals:
;   undefined4 DAT_005927c6
;   undefined4 DAT_005bea68
;   undefined4 DAT_005bea88
;   undefined4 DAT_02dc78e0
;   undefined4 DAT_02dc78e8
;   undefined4 DAT_02dc78f0
;   undefined4 DAT_02dc7910
;   undefined4 DAT_02dc7918
;   undefined4 DAT_02dc7920
;   undefined4 DAT_02dc83d8
;   undefined4 DAT_02dc83e0
;   undefined4 DAT_02dc8418
;   undefined4 DAT_02dc8420
;   undefined4 DAT_02dc8458
;   undefined4 DAT_02dc8460
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 00522d10
        ;   Label: FUN_00522d10
    MOV ECX,dword ptr [0x005bea68]      ; 00522d13 | DAT_005bea68
    CMP ECX,0x2                         ; 00522d19
    JZ 0x00522d6e                       ; 00522d1c
        ;   XREF to: 00522d6e (CONDITIONAL_JUMP)  ; LAB_00522d6e
    TEST ECX,ECX                        ; 00522d1e
    JLE 0x00522d64                      ; 00522d20
        ;   XREF to: 00522d64 (CONDITIONAL_JUMP)  ; LAB_00522d64
    FLD double ptr [0x02dc78f0]         ; 00522d22 | DAT_02dc78f0
    FLD double ptr [0x02dc78e8]         ; 00522d28 | DAT_02dc78e8
    LEA EDX,[ECX*0x8 + 0x0]             ; 00522d2e
    XOR EAX,EAX                         ; 00522d35
    FLD double ptr [0x02dc78e0]         ; 00522d37 | DAT_02dc78e0
    FLD ST0                             ; 00522d3d
        ;   Label: LAB_00522d3d
    FLD ST2                             ; 00522d3f
    ADD EAX,0x8                         ; 00522d41
    FLD ST4                             ; 00522d44
    FXCH ST2                            ; 00522d46
    FSTP double ptr [EAX + 0x2dc83d0]   ; 00522d48 | DAT_02dc83d8 | DAT_02dc83e0
    FSTP double ptr [EAX + 0x2dc8410]   ; 00522d4e | DAT_02dc8418 | DAT_02dc8420
    FSTP double ptr [EAX + 0x2dc8450]   ; 00522d54 | DAT_02dc8458 | DAT_02dc8460
    CMP EAX,EDX                         ; 00522d5a
    JL 0x00522d3d                       ; 00522d5c
        ;   XREF to: 00522d3d (CONDITIONAL_JUMP)  ; LAB_00522d3d
    FSTP ST0                            ; 00522d5e
    FSTP ST0                            ; 00522d60
    FSTP ST0                            ; 00522d62
    MOV dword ptr [0x005bea68],ECX      ; 00522d64 | DAT_005bea68
        ;   Label: LAB_00522d64
    ADD ESP,0x10                        ; 00522d6a
    RET                                 ; 00522d6d
    FLD double ptr [0x005bea88]         ; 00522d6e | DAT_005bea88
        ;   Label: LAB_00522d6e
    FMUL double ptr [0x005927c6]        ; 00522d74 | DAT_005927c6
    FLD double ptr [0x02dc7910]         ; 00522d7a | DAT_02dc7910
    FMUL ST1                            ; 00522d80
    FLD double ptr [0x02dc7918]         ; 00522d82 | DAT_02dc7918
    FMUL ST2                            ; 00522d88
    FLD double ptr [0x02dc7920]         ; 00522d8a | DAT_02dc7920
    FMULP ST3                           ; 00522d90
    FLD double ptr [0x02dc78e0]         ; 00522d92 | DAT_02dc78e0
    FLD double ptr [0x02dc78e8]         ; 00522d98 | DAT_02dc78e8
    FLD double ptr [0x02dc78f0]         ; 00522d9e | DAT_02dc78f0
    FXCH ST2                            ; 00522da4
    FSUB ST0,ST4                        ; 00522da6
    FXCH                                ; 00522da8
    FSUB ST0,ST3                        ; 00522daa
    FXCH ST2                            ; 00522dac
    FSUB ST0,ST5                        ; 00522dae
    FLD double ptr [0x02dc78e0]         ; 00522db0 | DAT_02dc78e0
    FADDP ST5,ST0                       ; 00522db6
    FLD double ptr [0x02dc78e8]         ; 00522db8 | DAT_02dc78e8
    FADDP ST4,ST0                       ; 00522dbe
    FLD double ptr [0x02dc78f0]         ; 00522dc0 | DAT_02dc78f0
    FADDP ST6,ST0                       ; 00522dc6
    FXCH                                ; 00522dc8
    FSTP double ptr [0x02dc83d8]        ; 00522dca | DAT_02dc83d8
    FXCH                                ; 00522dd0
    FSTP double ptr [0x02dc8418]        ; 00522dd2 | DAT_02dc8418
    FSTP double ptr [0x02dc8458]        ; 00522dd8 | DAT_02dc8458
    FXCH                                ; 00522dde
    FSTP double ptr [0x02dc83e0]        ; 00522de0 | DAT_02dc83e0
    FSTP double ptr [0x02dc8420]        ; 00522de6 | DAT_02dc8420
    FSTP double ptr [0x02dc8460]        ; 00522dec | DAT_02dc8460
    MOV dword ptr [0x005bea68],ECX      ; 00522df2 | DAT_005bea68
    ADD ESP,0x10                        ; 00522df8
    RET                                 ; 00522dfb

