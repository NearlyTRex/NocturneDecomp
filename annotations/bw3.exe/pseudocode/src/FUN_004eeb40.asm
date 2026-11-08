; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eeb40(float *param_1,float *param_2)
;
;
; XREF[1]:
;   FUN_004f2490 at 004f24f0
;
; Referenced Globals:
;   undefined4 DAT_01d76c5c
;   undefined4 DAT_01d76c60
;   undefined4 DAT_01d76c64
;   undefined4 DAT_01d76c68
;   undefined4 DAT_01d76cfc
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004eeb40
        ;   Label: FUN_004eeb40
    MOV ECX,dword ptr [ESP + 0x10]      ; 004eeb43
    MOV EDX,dword ptr [ESP + 0x14]      ; 004eeb47
    MOV EAX,[0x01d76cfc]                ; 004eeb4b | DAT_01d76cfc
    FLD float ptr [ECX + 0x4]           ; 004eeb50
    FSUB float ptr [EAX + 0x28]         ; 004eeb53
    FLD ST0                             ; 004eeb56
    FMUL float ptr [EAX + 0xc]          ; 004eeb58
    FLD float ptr [ECX]                 ; 004eeb5b
    FSUB float ptr [EAX + 0x24]         ; 004eeb5d
    FLD ST0                             ; 004eeb60
    FMUL float ptr [EAX]                ; 004eeb62
    FLD float ptr [ECX + 0x8]           ; 004eeb64
    FXCH                                ; 004eeb67
    FADDP ST3,ST0                       ; 004eeb69
    FSUB float ptr [EAX + 0x2c]         ; 004eeb6b
    FLD ST0                             ; 004eeb6e
    FMUL float ptr [EAX + 0x18]         ; 004eeb70
    FADDP ST3,ST0                       ; 004eeb73
    FLD ST1                             ; 004eeb75
    FXCH ST3                            ; 004eeb77
    FSTP float ptr [EDX]                ; 004eeb79
    FXCH ST2                            ; 004eeb7b
    FMUL float ptr [EAX + 0x4]          ; 004eeb7d
    FLD ST3                             ; 004eeb80
    FMUL float ptr [EAX + 0x10]         ; 004eeb82
    FADDP                               ; 004eeb85
    FLD ST2                             ; 004eeb87
    FMUL float ptr [EAX + 0x1c]         ; 004eeb89
    FADDP                               ; 004eeb8c
    FSTP float ptr [EDX + 0x4]          ; 004eeb8e
    FMUL float ptr [EAX + 0x8]          ; 004eeb91
    FXCH ST2                            ; 004eeb94
    FMUL float ptr [EAX + 0x14]         ; 004eeb96
    FADDP ST2,ST0                       ; 004eeb99
    FMUL float ptr [EAX + 0x20]         ; 004eeb9b
    MOV dword ptr [EDX + 0x10],0x0      ; 004eeb9e
    FADDP                               ; 004eeba5
    FLD float ptr [EDX]                 ; 004eeba7
    FXCH                                ; 004eeba9
    FSTP float ptr [EDX + 0x8]          ; 004eebab
    FCOMP float ptr [EDX + 0x8]         ; 004eebae
    FNSTSW AX                           ; 004eebb1
    SAHF                                ; 004eebb3
    JA 0x004eebfa                       ; 004eebb4
        ;   XREF to: 004eebfa (CONDITIONAL_JUMP)  ; LAB_004eebfa
    FLD float ptr [EDX + 0x8]           ; 004eebb6
        ;   Label: LAB_004eebb6
    FCHS                                ; 004eebb9
    FCOMP float ptr [EDX]               ; 004eebbb
    FNSTSW AX                           ; 004eebbd
    SAHF                                ; 004eebbf
    JBE 0x004eebc6                      ; 004eebc0
        ;   XREF to: 004eebc6 (CONDITIONAL_JUMP)  ; LAB_004eebc6
    OR byte ptr [EDX + 0x10],0x2        ; 004eebc2
    FLD float ptr [EDX + 0x4]           ; 004eebc6
        ;   Label: LAB_004eebc6
    FCOMP float ptr [EDX + 0x8]         ; 004eebc9
    FNSTSW AX                           ; 004eebcc
    SAHF                                ; 004eebce
    JBE 0x004eebd5                      ; 004eebcf
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    OR byte ptr [EDX + 0x10],0x4        ; 004eebd1
    FLD float ptr [EDX + 0x8]           ; 004eebd5
        ;   Label: LAB_004eebd5
    FCHS                                ; 004eebd8
    FCOMP float ptr [EDX + 0x4]         ; 004eebda
    FNSTSW AX                           ; 004eebdd
    SAHF                                ; 004eebdf
    JBE 0x004eebe6                      ; 004eebe0
        ;   XREF to: 004eebe6 (CONDITIONAL_JUMP)  ; LAB_004eebe6
    OR byte ptr [EDX + 0x10],0x8        ; 004eebe2
    FLDZ                                ; 004eebe6
        ;   Label: LAB_004eebe6
    FCOMP float ptr [EDX + 0x8]         ; 004eebe8
    FNSTSW AX                           ; 004eebeb
    SAHF                                ; 004eebed
    JNC 0x004eec41                      ; 004eebee
        ;   XREF to: 004eec41 (CONDITIONAL_JUMP)  ; LAB_004eec41
    CMP dword ptr [EDX + 0x10],0x0      ; 004eebf0
    JZ 0x004eec00                       ; 004eebf4
        ;   XREF to: 004eec00 (CONDITIONAL_JUMP)  ; LAB_004eec00
    ADD ESP,0xc                         ; 004eebf6
    RET                                 ; 004eebf9
    OR byte ptr [EDX + 0x10],0x1        ; 004eebfa
        ;   Label: LAB_004eebfa
    JMP 0x004eebb6                      ; 004eebfe
        ;   XREF to: 004eebb6 (UNCONDITIONAL_JUMP)  ; LAB_004eebb6
    FLD float ptr [EDX + 0x8]           ; 004eec00
        ;   Label: LAB_004eec00
    FLD1                                ; 004eec03
    FDIVRP                              ; 004eec05
    FLD float ptr [EDX]                 ; 004eec07
    FMUL float ptr [0x01d76c5c]         ; 004eec09 | DAT_01d76c5c
    FLD float ptr [EDX + 0x4]           ; 004eec0f
    FMUL float ptr [0x01d76c60]         ; 004eec12 | DAT_01d76c60
    FXCH ST2                            ; 004eec18
    FSTP float ptr [EDX + 0xc]          ; 004eec1a
    FMUL float ptr [EDX + 0xc]          ; 004eec1d
    FXCH                                ; 004eec20
    FMUL float ptr [EDX + 0xc]          ; 004eec22
    FLD float ptr [0x01d76c68]          ; 004eec25 | DAT_01d76c68
    FLD float ptr [0x01d76c64]          ; 004eec2b | DAT_01d76c64
    FADDP ST3,ST0                       ; 004eec31
    FADDP                               ; 004eec33
    FXCH                                ; 004eec35
    FSTP float ptr [EDX + 0x14]         ; 004eec37
    FSTP float ptr [EDX + 0x18]         ; 004eec3a
    ADD ESP,0xc                         ; 004eec3d
    RET                                 ; 004eec40
    OR byte ptr [EDX + 0x10],0x10       ; 004eec41
        ;   Label: LAB_004eec41
    ADD ESP,0xc                         ; 004eec45
    RET                                 ; 004eec48

