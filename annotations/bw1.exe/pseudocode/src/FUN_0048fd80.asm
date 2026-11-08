; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048fd80(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_0048fed0 at 0048ff15
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0048fd80
        ;   Label: FUN_0048fd80
    MOV EBP,ESP                         ; 0048fd81
    SUB ESP,0x30                        ; 0048fd83
    AND ESP,0xfffffff8                  ; 0048fd86
    MOV EDX,dword ptr [EBP + 0x8]       ; 0048fd89
    FLD float ptr [EDX + 0x20]          ; 0048fd8c
    FLD float ptr [EDX + 0x10]          ; 0048fd8f
    FSUB float ptr [EDX + 0x4]          ; 0048fd92
    FXCH                                ; 0048fd95
    FSUB float ptr [EDX + 0x14]         ; 0048fd97
    FLD ST1                             ; 0048fd9a
    FXCH                                ; 0048fd9c
    FSTP float ptr [ESP + 0x24]         ; 0048fd9e
    FMUL float ptr [ESP + 0x24]         ; 0048fda2
    FLD float ptr [EDX + 0x18]          ; 0048fda6
    FLD float ptr [EDX + 0x14]          ; 0048fda9
    FSUB float ptr [EDX + 0x8]          ; 0048fdac
    FXCH                                ; 0048fdaf
    FSUB float ptr [EDX + 0xc]          ; 0048fdb1
    FST float ptr [ESP + 0x1c]          ; 0048fdb4
    FMUL ST1                            ; 0048fdb8
    FLD float ptr [EDX + 0x1c]          ; 0048fdba
    FLD float ptr [EDX + 0xc]           ; 0048fdbd
    FSUB float ptr [EDX]                ; 0048fdc0
    FXCH                                ; 0048fdc2
    FSUB float ptr [EDX + 0x10]         ; 0048fdc4
    FLD ST1                             ; 0048fdc7
    FMUL ST1                            ; 0048fdc9
    FXCH                                ; 0048fdcb
    FMULP ST4                           ; 0048fdcd
    FXCH                                ; 0048fdcf
    FMUL float ptr [ESP + 0x24]         ; 0048fdd1
    FLD float ptr [ESP + 0x1c]          ; 0048fdd5
    FMULP ST6                           ; 0048fdd9
    FXCH ST3                            ; 0048fddb
    FSUBP ST4,ST0                       ; 0048fddd
    FXCH ST2                            ; 0048fddf
    FSUBP                               ; 0048fde1
    FXCH ST2                            ; 0048fde3
    FST float ptr [EDX + 0x24]          ; 0048fde5
    FMUL float ptr [EDX + 0x24]         ; 0048fde8
    FXCH ST2                            ; 0048fdeb
    FST float ptr [EDX + 0x28]          ; 0048fded
    FMUL float ptr [EDX + 0x28]         ; 0048fdf0
    FXCH ST3                            ; 0048fdf3
    FSUBP                               ; 0048fdf5
    FXCH ST2                            ; 0048fdf7
    FADDP                               ; 0048fdf9
    FXCH                                ; 0048fdfb
    FST float ptr [EDX + 0x2c]          ; 0048fdfd
    FMUL float ptr [EDX + 0x2c]         ; 0048fe00
    FADDP                               ; 0048fe03
    FSQRT                               ; 0048fe05
    FSTP float ptr [ESP + 0x2c]         ; 0048fe07
    TEST dword ptr [ESP + 0x2c],0x7fffffff ; 0048fe0b
    JZ 0x0048fea9                       ; 0048fe13
        ;   XREF to: 0048fea9 (CONDITIONAL_JUMP)  ; LAB_0048fea9
    FLD float ptr [EDX + 0x24]          ; 0048fe19
        ;   Label: LAB_0048fe19
    FCHS                                ; 0048fe1c
    FLD1                                ; 0048fe1e
    FDIV float ptr [ESP + 0x2c]         ; 0048fe20
    FLD float ptr [EDX + 0x28]          ; 0048fe24
    FCHS                                ; 0048fe27
    FMUL ST1                            ; 0048fe29
    FST float ptr [EDX + 0x28]          ; 0048fe2b
    FABS                                ; 0048fe2e
    FXCH ST2                            ; 0048fe30
    FMUL ST1                            ; 0048fe32
    FST float ptr [EDX + 0x24]          ; 0048fe34
    FABS                                ; 0048fe37
    FLD float ptr [EDX + 0x4]           ; 0048fe39
    FMUL float ptr [EDX + 0x28]         ; 0048fe3c
    FLD float ptr [EDX]                 ; 0048fe3f
    FMUL float ptr [EDX + 0x24]         ; 0048fe41
    FLD float ptr [EDX + 0x2c]          ; 0048fe44
    FCHS                                ; 0048fe47
    FMULP ST4                           ; 0048fe49
    FCHS                                ; 0048fe4b
    FSUBRP                              ; 0048fe4d
    FXCH ST2                            ; 0048fe4f
    FSTP float ptr [EDX + 0x2c]         ; 0048fe51
    FLD float ptr [EDX + 0x8]           ; 0048fe54
    FMUL float ptr [EDX + 0x2c]         ; 0048fe57
    FSUBP ST2,ST0                       ; 0048fe5a
    FXCH                                ; 0048fe5c
    FSTP float ptr [EDX + 0x30]         ; 0048fe5e
    FSTP double ptr [ESP]               ; 0048fe61
    FCOMP double ptr [ESP]              ; 0048fe64
    FNSTSW AX                           ; 0048fe67
    SAHF                                ; 0048fe69
    JNC 0x0048fe79                      ; 0048fe6a
        ;   XREF to: 0048fe79 (CONDITIONAL_JUMP)  ; LAB_0048fe79
    FLD float ptr [EDX + 0x2c]          ; 0048fe6c
    FABS                                ; 0048fe6f
    FCOMP double ptr [ESP]              ; 0048fe71
    FNSTSW AX                           ; 0048fe74
    SAHF                                ; 0048fe76
    JC 0x0048feb6                       ; 0048fe77
        ;   XREF to: 0048feb6 (CONDITIONAL_JUMP)  ; LAB_0048feb6
    FLD float ptr [EDX + 0x24]          ; 0048fe79
        ;   Label: LAB_0048fe79
    FABS                                ; 0048fe7c
    FLD float ptr [EDX + 0x28]          ; 0048fe7e
    FABS                                ; 0048fe81
    FSTP double ptr [ESP + 0x8]         ; 0048fe83
    FCOMP double ptr [ESP + 0x8]        ; 0048fe87
    FNSTSW AX                           ; 0048fe8b
    SAHF                                ; 0048fe8d
    JNC 0x0048fec1                      ; 0048fe8e
        ;   XREF to: 0048fec1 (CONDITIONAL_JUMP)  ; LAB_0048fec1
    FLD float ptr [EDX + 0x2c]          ; 0048fe90
    FABS                                ; 0048fe93
    FCOMP double ptr [ESP + 0x8]        ; 0048fe95
    FNSTSW AX                           ; 0048fe99
    SAHF                                ; 0048fe9b
    JNC 0x0048fec1                      ; 0048fe9c
        ;   XREF to: 0048fec1 (CONDITIONAL_JUMP)  ; LAB_0048fec1
    MOV dword ptr [EDX + 0x34],0x1      ; 0048fe9e
    MOV ESP,EBP                         ; 0048fea5
    POP EBP                             ; 0048fea7
    RET                                 ; 0048fea8
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 0048fea9
        ;   Label: LAB_0048fea9
    JMP 0x0048fe19                      ; 0048feb1
        ;   XREF to: 0048fe19 (UNCONDITIONAL_JUMP)  ; LAB_0048fe19
    MOV dword ptr [EDX + 0x34],0x0      ; 0048feb6
        ;   Label: LAB_0048feb6
    MOV ESP,EBP                         ; 0048febd
    POP EBP                             ; 0048febf
    RET                                 ; 0048fec0
    MOV dword ptr [EDX + 0x34],0x2      ; 0048fec1
        ;   Label: LAB_0048fec1
    MOV ESP,EBP                         ; 0048fec8
    POP EBP                             ; 0048feca
    RET                                 ; 0048fecb

