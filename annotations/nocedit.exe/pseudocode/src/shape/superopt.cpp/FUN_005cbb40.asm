; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_superopt.cpp_FUN_005cbb40()
;
; Local Variables:
; undefined8       Stack[-0x110]:8  local_110
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_superopt.cpp_FUN_005cb3a0 at 005cb3c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cbb40
        ;   Label: shape_superopt.cpp_FUN_005cbb40
    PUSH ESI                            ; 005cbb41
    PUSH EDI                            ; 005cbb42
    PUSH EBP                            ; 005cbb43
    MOV EBP,ESP                         ; 005cbb44
    SUB ESP,0x100                       ; 005cbb46
    AND ESP,0xfffffff8                  ; 005cbb4c
    MOV EBX,dword ptr [EBP + 0x18]      ; 005cbb4f
    MOV ECX,0x3ff00000                  ; 005cbb52
    XOR EDX,EDX                         ; 005cbb57
    MOV EDI,dword ptr [EBP + 0x20]      ; 005cbb59
    MOV dword ptr [ESP + 0xf8],EDX      ; 005cbb5c
    MOV dword ptr [ESP + 0x10],EDX      ; 005cbb63
    MOV dword ptr [ESP + 0x14],ECX      ; 005cbb67
    TEST EDI,EDI                        ; 005cbb6b
    JBE 0x005cbdd0                      ; 005cbb6d
        ;   XREF to: 005cbdd0 (CONDITIONAL_JUMP)  ; LAB_005cbdd0
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005cbb73
    ADD EDX,0x10                        ; 005cbb76
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005cbb79
        ;   Label: LAB_005cbb79
    MOV ESI,dword ptr [EBP + 0x20]      ; 005cbb80
    INC EAX                             ; 005cbb83
    CMP EAX,ESI                         ; 005cbb84
    JC 0x005cbb8a                       ; 005cbb86
        ;   XREF to: 005cbb8a (CONDITIONAL_JUMP)  ; LAB_005cbb8a
    XOR EAX,EAX                         ; 005cbb88
    IMUL EAX,EAX,0x60                   ; 005cbb8a
        ;   Label: LAB_005cbb8a
    FLD double ptr [EDX + 0x18]         ; 005cbb8d
    FLD double ptr [EDX + 0x20]         ; 005cbb90
    FLD double ptr [EDX + 0x28]         ; 005cbb93
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005cbb96
    MOV ECX,0x6                         ; 005cbb99
    LEA ESI,[ESP + 0x68]                ; 005cbb9e
    FXCH ST2                            ; 005cbba2
    FSUB double ptr [EDX]               ; 005cbba4
    FXCH                                ; 005cbba6
    FSUB double ptr [EDX + 0x8]         ; 005cbba8
    FXCH ST2                            ; 005cbbab
    FSUB double ptr [EDX + 0x10]        ; 005cbbad
    FXCH                                ; 005cbbb0
    FSTP double ptr [ESP + 0x68]        ; 005cbbb2
    FXCH                                ; 005cbbb6
    FSTP double ptr [ESP + 0x70]        ; 005cbbb8
    ADD EAX,EDI                         ; 005cbbbc
    LEA EDI,[ESP + 0x80]                ; 005cbbbe
    FSTP double ptr [ESP + 0x78]        ; 005cbbc5
    MOVSD.REP ES:EDI,ESI                ; 005cbbc9
    FLD double ptr [ESP + 0x88]         ; 005cbbcb
    FMUL ST0                            ; 005cbbd2
    FLD double ptr [ESP + 0x80]         ; 005cbbd4
    FMUL ST0                            ; 005cbbdb
    FADDP                               ; 005cbbdd
    FLD double ptr [ESP + 0x90]         ; 005cbbdf
    FMUL ST0                            ; 005cbbe6
    ADD EAX,0x28                        ; 005cbbe8
    FADDP                               ; 005cbbeb
    MOV dword ptr [ESP + 0xfc],EAX      ; 005cbbed
    FSQRT                               ; 005cbbf4
    FLD double ptr [ESP + 0x80]         ; 005cbbf6
    FLD1                                ; 005cbbfd
    FDIVRP ST2,ST0                      ; 005cbbff
    FMUL ST1                            ; 005cbc01
    FLD double ptr [ESP + 0x88]         ; 005cbc03
    FMUL ST2                            ; 005cbc0a
    FLD double ptr [ESP + 0x90]         ; 005cbc0c
    FMULP ST3                           ; 005cbc13
    MOV ECX,0x6                         ; 005cbc15
    LEA EDI,[ESP + 0xb0]                ; 005cbc1a
    LEA ESI,[ESP + 0x50]                ; 005cbc21
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005cbc25
    FXCH                                ; 005cbc2c
    FSTP double ptr [ESP + 0x20]        ; 005cbc2e
    FSTP double ptr [ESP + 0x28]        ; 005cbc32
    FSTP double ptr [ESP + 0x30]        ; 005cbc36
    FLD double ptr [EAX]                ; 005cbc3a
    FLD double ptr [EAX + 0x8]          ; 005cbc3c
    FLD double ptr [EAX + 0x10]         ; 005cbc3f
    FXCH ST2                            ; 005cbc42
    FSUB double ptr [EDX + 0x18]        ; 005cbc44
    FXCH                                ; 005cbc47
    FSUB double ptr [EDX + 0x20]        ; 005cbc49
    FXCH ST2                            ; 005cbc4c
    FSUB double ptr [EDX + 0x28]        ; 005cbc4e
    FXCH                                ; 005cbc51
    FSTP double ptr [ESP + 0x50]        ; 005cbc53
    FXCH                                ; 005cbc57
    FSTP double ptr [ESP + 0x58]        ; 005cbc59
    FSTP double ptr [ESP + 0x60]        ; 005cbc5d
    MOVSD.REP ES:EDI,ESI                ; 005cbc61
    FLD double ptr [ESP + 0xb8]         ; 005cbc63
    FMUL ST0                            ; 005cbc6a
    FLD double ptr [ESP + 0xb0]         ; 005cbc6c
    FMUL ST0                            ; 005cbc73
    FADDP                               ; 005cbc75
    FLD double ptr [ESP + 0xc0]         ; 005cbc77
    FMUL ST0                            ; 005cbc7e
    FADDP                               ; 005cbc80
    FSQRT                               ; 005cbc82
    FLD double ptr [ESP + 0xb0]         ; 005cbc84
    FLD1                                ; 005cbc8b
    FDIVRP ST2,ST0                      ; 005cbc8d
    FMUL ST1                            ; 005cbc8f
    FLD double ptr [ESP + 0xb8]         ; 005cbc91
    FMUL ST2                            ; 005cbc98
    FLD double ptr [ESP + 0xc0]         ; 005cbc9a
    FMULP ST3                           ; 005cbca1
    FLD double ptr [ESP + 0x28]         ; 005cbca3
    FXCH                                ; 005cbca7
    FSTP double ptr [ESP + 0xa0]        ; 005cbca9
    FMUL double ptr [ESP + 0xa0]        ; 005cbcb0
    FLD double ptr [ESP + 0x30]         ; 005cbcb7
    FXCH ST3                            ; 005cbcbb
    FSTP double ptr [ESP + 0xa8]        ; 005cbcbd
    FXCH ST2                            ; 005cbcc4
    FMUL double ptr [ESP + 0xa8]        ; 005cbcc6
    FLD double ptr [ESP + 0x20]         ; 005cbccd
    FXCH ST2                            ; 005cbcd1
    FSTP double ptr [ESP + 0x98]        ; 005cbcd3
    FXCH                                ; 005cbcda
    FMUL double ptr [ESP + 0x98]        ; 005cbcdc
    FXCH                                ; 005cbce3
    FSTP double ptr [ESP + 0x18]        ; 005cbce5
    FADDP                               ; 005cbce9
    FADD double ptr [ESP + 0x18]        ; 005cbceb
    FLDZ                                ; 005cbcef
    FXCH                                ; 005cbcf1
    FSTP double ptr [ESP + 0x8]         ; 005cbcf3
    FCOMP double ptr [ESP + 0x8]        ; 005cbcf7
    FNSTSW AX                           ; 005cbcfb
    SAHF                                ; 005cbcfd
    JA 0x005cbe09                       ; 005cbcfe
        ;   XREF to: 005cbe09 (CONDITIONAL_JUMP)  ; LAB_005cbe09
    MOV EAX,dword ptr [ESP + 0x8]       ; 005cbd04
    MOV dword ptr [ESP],EAX             ; 005cbd08
    MOV EAX,dword ptr [ESP + 0xc]       ; 005cbd0b
    MOV dword ptr [ESP + 0x4],EAX       ; 005cbd0f
    FLD double ptr [ESP]                ; 005cbd13
        ;   Label: LAB_005cbd13
    FCOMP double ptr [ESP + 0x10]       ; 005cbd16
    FNSTSW AX                           ; 005cbd1a
    SAHF                                ; 005cbd1c
    JNC 0x005cbdb3                      ; 005cbd1d
        ;   XREF to: 005cbdb3 (CONDITIONAL_JUMP)  ; LAB_005cbdb3
    FLD double ptr [ESP + 0x28]         ; 005cbd23
    FMUL double ptr [ESP + 0xa8]        ; 005cbd27
    FLD double ptr [ESP + 0x30]         ; 005cbd2e
    FMUL double ptr [ESP + 0x98]        ; 005cbd32
    FLD double ptr [ESP + 0x20]         ; 005cbd39
    FMUL double ptr [ESP + 0xa0]        ; 005cbd3d
    FLD double ptr [ESP + 0x30]         ; 005cbd44
    FMUL double ptr [ESP + 0xa0]        ; 005cbd48
    MOV EAX,dword ptr [ESP]             ; 005cbd4f
    FLD double ptr [ESP + 0x20]         ; 005cbd52
    FMUL double ptr [ESP + 0xa8]        ; 005cbd56
    MOV dword ptr [ESP + 0x10],EAX      ; 005cbd5d
    FLD double ptr [ESP + 0x28]         ; 005cbd61
    MOV EAX,dword ptr [ESP + 0x4]       ; 005cbd65
    FMUL double ptr [ESP + 0x98]        ; 005cbd69
    MOV dword ptr [ESP + 0x14],EAX      ; 005cbd70
    FXCH ST2                            ; 005cbd74
    FSUBP ST5,ST0                       ; 005cbd76
    FSUBP ST3,ST0                       ; 005cbd78
    FSUBP                               ; 005cbd7a
    FXCH ST2                            ; 005cbd7c
    FSTP double ptr [ESP + 0x38]        ; 005cbd7e
    FSTP double ptr [ESP + 0x40]        ; 005cbd82
    MOV EAX,dword ptr [ESP + 0x38]      ; 005cbd86
    FSTP double ptr [ESP + 0x48]        ; 005cbd8a
    MOV dword ptr [EBX],EAX             ; 005cbd8e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005cbd90
    MOV dword ptr [EBX + 0x4],EAX       ; 005cbd94
    MOV EAX,dword ptr [ESP + 0x40]      ; 005cbd97
    MOV dword ptr [EBX + 0x8],EAX       ; 005cbd9b
    MOV EAX,dword ptr [ESP + 0x44]      ; 005cbd9e
    MOV dword ptr [EBX + 0xc],EAX       ; 005cbda2
    MOV EAX,dword ptr [ESP + 0x48]      ; 005cbda5
    MOV dword ptr [EBX + 0x10],EAX      ; 005cbda9
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005cbdac
    MOV dword ptr [EBX + 0x14],EAX      ; 005cbdb0
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005cbdb3
        ;   Label: LAB_005cbdb3
    MOV ECX,dword ptr [EBP + 0x20]      ; 005cbdba
    INC EAX                             ; 005cbdbd
    ADD EDX,0x60                        ; 005cbdbe
    MOV dword ptr [ESP + 0xf8],EAX      ; 005cbdc1
    CMP EAX,ECX                         ; 005cbdc8
    JC 0x005cbb79                       ; 005cbdca
        ;   XREF to: 005cbb79 (CONDITIONAL_JUMP)  ; LAB_005cbb79
    FLD double ptr [EBX + 0x8]          ; 005cbdd0
        ;   Label: LAB_005cbdd0
    FMUL ST0                            ; 005cbdd3
    FLD double ptr [EBX]                ; 005cbdd5
    FMUL ST0                            ; 005cbdd7
    FADDP                               ; 005cbdd9
    FLD double ptr [EBX + 0x10]         ; 005cbddb
    FMUL ST0                            ; 005cbdde
    FADDP                               ; 005cbde0
    FSQRT                               ; 005cbde2
    FLD double ptr [EBX]                ; 005cbde4
    FLD1                                ; 005cbde6
    FDIVRP ST2,ST0                      ; 005cbde8
    FMUL ST1                            ; 005cbdea
    FLD double ptr [EBX + 0x8]          ; 005cbdec
    FMUL ST2                            ; 005cbdef
    FLD double ptr [EBX + 0x10]         ; 005cbdf1
    FMULP ST3                           ; 005cbdf4
    MOV EAX,EBX                         ; 005cbdf6
    FXCH                                ; 005cbdf8
    FSTP double ptr [EBX]               ; 005cbdfa
    FSTP double ptr [EBX + 0x8]         ; 005cbdfc
    FSTP double ptr [EBX + 0x10]        ; 005cbdff
    MOV ESP,EBP                         ; 005cbe02
    POP EBP                             ; 005cbe04
    POP EDI                             ; 005cbe05
    POP ESI                             ; 005cbe06
    POP EBX                             ; 005cbe07
    RET                                 ; 005cbe08
    FLD double ptr [ESP + 0x8]          ; 005cbe09
        ;   Label: LAB_005cbe09
    FCHS                                ; 005cbe0d
    FSTP double ptr [ESP]               ; 005cbe0f
    JMP 0x005cbd13                      ; 005cbe12
        ;   XREF to: 005cbd13 (UNCONDITIONAL_JUMP)  ; LAB_005cbd13

