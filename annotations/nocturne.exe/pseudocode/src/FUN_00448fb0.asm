; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00448fb0(undefined4 *param_1)
;
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00449120 at 00449139
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00448fb0
        ;   Label: FUN_00448fb0
    MOV EBP,ESP                         ; 00448fb1
    SUB ESP,0x38                        ; 00448fb3
    AND ESP,0xfffffff8                  ; 00448fb6
    MOV EDX,dword ptr [EBP + 0x8]       ; 00448fb9
    MOV EAX,dword ptr [EDX + 0x4]       ; 00448fbc
    MOV ECX,dword ptr [EDX]             ; 00448fbf
    FLD float ptr [EAX]                 ; 00448fc1
    FLD float ptr [EAX + 0x4]           ; 00448fc3
    FLD float ptr [EAX + 0x8]           ; 00448fc6
    FXCH ST2                            ; 00448fc9
    FSUB float ptr [ECX]                ; 00448fcb
    FXCH ST2                            ; 00448fcd
    FSUB float ptr [ECX + 0x8]          ; 00448fcf
    FXCH                                ; 00448fd2
    FSUB float ptr [ECX + 0x4]          ; 00448fd4
    MOV ECX,dword ptr [EDX + 0x8]       ; 00448fd7
    FST float ptr [ESP + 0x2c]          ; 00448fda
    FLD float ptr [ECX + 0x8]           ; 00448fde
    FSUB float ptr [EAX + 0x8]          ; 00448fe1
    FSTP float ptr [ESP + 0x24]         ; 00448fe4
    FMUL float ptr [ESP + 0x24]         ; 00448fe8
    FLD float ptr [ECX + 0x4]           ; 00448fec
    FSUB float ptr [EAX + 0x4]          ; 00448fef
    FXCH ST3                            ; 00448ff2
    FST float ptr [ESP + 0x18]          ; 00448ff4
    FMUL ST3                            ; 00448ff8
    FLD float ptr [ECX]                 ; 00448ffa
    FSUB float ptr [EAX]                ; 00448ffc
    FLD ST0                             ; 00448ffe
    FMUL ST4                            ; 00449000
    FXCH ST5                            ; 00449002
    FMULP ST4                           ; 00449004
    FMUL float ptr [ESP + 0x2c]         ; 00449006
    FLD float ptr [ESP + 0x18]          ; 0044900a
    FMUL float ptr [ESP + 0x24]         ; 0044900e
    FXCH ST4                            ; 00449012
    FSUBP ST3,ST0                       ; 00449014
    FXCH ST3                            ; 00449016
    FSUBP ST4,ST0                       ; 00449018
    FXCH                                ; 0044901a
    FST float ptr [EDX + 0xc]           ; 0044901c
    FMUL float ptr [EDX + 0xc]          ; 0044901f
    FXCH ST3                            ; 00449022
    FST float ptr [EDX + 0x10]          ; 00449024
    FMUL float ptr [EDX + 0x10]         ; 00449027
    FXCH ST2                            ; 0044902a
    FSUBP                               ; 0044902c
    FXCH                                ; 0044902e
    FADDP ST2,ST0                       ; 00449030
    FST float ptr [EDX + 0x14]          ; 00449032
    FMUL float ptr [EDX + 0x14]         ; 00449035
    FADDP                               ; 00449038
    FSQRT                               ; 0044903a
    FSTP float ptr [ESP + 0x30]         ; 0044903c
    TEST dword ptr [ESP + 0x30],0x7fffffff ; 00449040
    JZ 0x004490f2                       ; 00449048
        ;   XREF to: 004490f2 (CONDITIONAL_JUMP)  ; LAB_004490f2
    FLD float ptr [EDX + 0xc]           ; 0044904e
        ;   Label: LAB_0044904e
    FCHS                                ; 00449051
    FLD1                                ; 00449053
    FDIV float ptr [ESP + 0x30]         ; 00449055
    FXCH                                ; 00449059
    FMUL ST1                            ; 0044905b
    FLD float ptr [EDX + 0x10]          ; 0044905d
    FCHS                                ; 00449060
    FMUL ST2                            ; 00449062
    FLD float ptr [EDX + 0x14]          ; 00449064
    FCHS                                ; 00449067
    FMULP ST3                           ; 00449069
    MOV EAX,dword ptr [EDX]             ; 0044906b
    FXCH                                ; 0044906d
    FSTP float ptr [EDX + 0xc]          ; 0044906f
    FSTP float ptr [EDX + 0x10]         ; 00449072
    FSTP float ptr [EDX + 0x14]         ; 00449075
    FLD float ptr [EAX + 0x4]           ; 00449078
    FMUL float ptr [EDX + 0x10]         ; 0044907b
    FLD float ptr [EAX]                 ; 0044907e
    FMUL float ptr [EDX + 0xc]          ; 00449080
    FLD float ptr [EDX + 0xc]           ; 00449083
    FSTP double ptr [ESP + 0x10]        ; 00449086
    FCHS                                ; 0044908a
    FSUBRP                              ; 0044908c
    FLD float ptr [EAX + 0x8]           ; 0044908e
    FLD double ptr [ESP + 0x10]         ; 00449091
    FABS                                ; 00449095
    FLD float ptr [EDX + 0x10]          ; 00449097
    FABS                                ; 0044909a
    FXCH ST2                            ; 0044909c
    FMUL float ptr [EDX + 0x14]         ; 0044909e
    FSUBP ST3,ST0                       ; 004490a1
    FXCH ST2                            ; 004490a3
    FSTP float ptr [EDX + 0x18]         ; 004490a5
    FXCH                                ; 004490a8
    FSTP double ptr [ESP]               ; 004490aa
    FCOMP double ptr [ESP]              ; 004490ad
    FNSTSW AX                           ; 004490b0
    SAHF                                ; 004490b2
    JNC 0x004490c2                      ; 004490b3
        ;   XREF to: 004490c2 (CONDITIONAL_JUMP)  ; LAB_004490c2
    FLD float ptr [EDX + 0x14]          ; 004490b5
    FABS                                ; 004490b8
    FCOMP double ptr [ESP]              ; 004490ba
    FNSTSW AX                           ; 004490bd
    SAHF                                ; 004490bf
    JC 0x004490ff                       ; 004490c0
        ;   XREF to: 004490ff (CONDITIONAL_JUMP)  ; LAB_004490ff
    FLD float ptr [EDX + 0xc]           ; 004490c2
        ;   Label: LAB_004490c2
    FABS                                ; 004490c5
    FLD float ptr [EDX + 0x10]          ; 004490c7
    FABS                                ; 004490ca
    FSTP double ptr [ESP + 0x8]         ; 004490cc
    FCOMP double ptr [ESP + 0x8]        ; 004490d0
    FNSTSW AX                           ; 004490d4
    SAHF                                ; 004490d6
    JNC 0x0044910a                      ; 004490d7
        ;   XREF to: 0044910a (CONDITIONAL_JUMP)  ; LAB_0044910a
    FLD float ptr [EDX + 0x14]          ; 004490d9
    FABS                                ; 004490dc
    FCOMP double ptr [ESP + 0x8]        ; 004490de
    FNSTSW AX                           ; 004490e2
    SAHF                                ; 004490e4
    JNC 0x0044910a                      ; 004490e5
        ;   XREF to: 0044910a (CONDITIONAL_JUMP)  ; LAB_0044910a
    MOV dword ptr [EDX + 0x1c],0x1      ; 004490e7
    MOV ESP,EBP                         ; 004490ee
    POP EBP                             ; 004490f0
    RET                                 ; 004490f1
    MOV dword ptr [ESP + 0x30],0x3f800000 ; 004490f2
        ;   Label: LAB_004490f2
    JMP 0x0044904e                      ; 004490fa
        ;   XREF to: 0044904e (UNCONDITIONAL_JUMP)  ; LAB_0044904e
    MOV dword ptr [EDX + 0x1c],0x0      ; 004490ff
        ;   Label: LAB_004490ff
    MOV ESP,EBP                         ; 00449106
    POP EBP                             ; 00449108
    RET                                 ; 00449109
    MOV dword ptr [EDX + 0x1c],0x2      ; 0044910a
        ;   Label: LAB_0044910a
    MOV ESP,EBP                         ; 00449111
    POP EBP                             ; 00449113
    RET                                 ; 00449114

