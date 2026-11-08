; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00477890(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004779e0 at 00477a25
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00477890
        ;   Label: FUN_00477890
    MOV EBP,ESP                         ; 00477891
    SUB ESP,0x30                        ; 00477893
    AND ESP,0xfffffff8                  ; 00477896
    MOV EDX,dword ptr [EBP + 0x8]       ; 00477899
    FLD float ptr [EDX + 0x20]          ; 0047789c
    FLD float ptr [EDX + 0x10]          ; 0047789f
    FSUB float ptr [EDX + 0x4]          ; 004778a2
    FXCH                                ; 004778a5
    FSUB float ptr [EDX + 0x14]         ; 004778a7
    FLD ST1                             ; 004778aa
    FXCH                                ; 004778ac
    FSTP float ptr [ESP + 0x24]         ; 004778ae
    FMUL float ptr [ESP + 0x24]         ; 004778b2
    FLD float ptr [EDX + 0x18]          ; 004778b6
    FLD float ptr [EDX + 0x14]          ; 004778b9
    FSUB float ptr [EDX + 0x8]          ; 004778bc
    FXCH                                ; 004778bf
    FSUB float ptr [EDX + 0xc]          ; 004778c1
    FST float ptr [ESP + 0x1c]          ; 004778c4
    FMUL ST1                            ; 004778c8
    FLD float ptr [EDX + 0x1c]          ; 004778ca
    FLD float ptr [EDX + 0xc]           ; 004778cd
    FSUB float ptr [EDX]                ; 004778d0
    FXCH                                ; 004778d2
    FSUB float ptr [EDX + 0x10]         ; 004778d4
    FLD ST1                             ; 004778d7
    FMUL ST1                            ; 004778d9
    FXCH                                ; 004778db
    FMULP ST4                           ; 004778dd
    FXCH                                ; 004778df
    FMUL float ptr [ESP + 0x24]         ; 004778e1
    FLD float ptr [ESP + 0x1c]          ; 004778e5
    FMULP ST6                           ; 004778e9
    FXCH ST3                            ; 004778eb
    FSUBP ST4,ST0                       ; 004778ed
    FXCH ST2                            ; 004778ef
    FSUBP                               ; 004778f1
    FXCH ST2                            ; 004778f3
    FST float ptr [EDX + 0x24]          ; 004778f5
    FMUL float ptr [EDX + 0x24]         ; 004778f8
    FXCH ST2                            ; 004778fb
    FST float ptr [EDX + 0x28]          ; 004778fd
    FMUL float ptr [EDX + 0x28]         ; 00477900
    FXCH ST3                            ; 00477903
    FSUBP                               ; 00477905
    FXCH ST2                            ; 00477907
    FADDP                               ; 00477909
    FXCH                                ; 0047790b
    FST float ptr [EDX + 0x2c]          ; 0047790d
    FMUL float ptr [EDX + 0x2c]         ; 00477910
    FADDP                               ; 00477913
    FSQRT                               ; 00477915
    FSTP float ptr [ESP + 0x2c]         ; 00477917
    TEST dword ptr [ESP + 0x2c],0x7fffffff ; 0047791b
    JZ 0x004779b9                       ; 00477923
        ;   XREF to: 004779b9 (CONDITIONAL_JUMP)  ; LAB_004779b9
    FLD float ptr [EDX + 0x24]          ; 00477929
        ;   Label: LAB_00477929
    FCHS                                ; 0047792c
    FLD1                                ; 0047792e
    FDIV float ptr [ESP + 0x2c]         ; 00477930
    FLD float ptr [EDX + 0x28]          ; 00477934
    FCHS                                ; 00477937
    FMUL ST1                            ; 00477939
    FST float ptr [EDX + 0x28]          ; 0047793b
    FABS                                ; 0047793e
    FXCH ST2                            ; 00477940
    FMUL ST1                            ; 00477942
    FST float ptr [EDX + 0x24]          ; 00477944
    FABS                                ; 00477947
    FLD float ptr [EDX + 0x4]           ; 00477949
    FMUL float ptr [EDX + 0x28]         ; 0047794c
    FLD float ptr [EDX]                 ; 0047794f
    FMUL float ptr [EDX + 0x24]         ; 00477951
    FLD float ptr [EDX + 0x2c]          ; 00477954
    FCHS                                ; 00477957
    FMULP ST4                           ; 00477959
    FCHS                                ; 0047795b
    FSUBRP                              ; 0047795d
    FXCH ST2                            ; 0047795f
    FSTP float ptr [EDX + 0x2c]         ; 00477961
    FLD float ptr [EDX + 0x8]           ; 00477964
    FMUL float ptr [EDX + 0x2c]         ; 00477967
    FSUBP ST2,ST0                       ; 0047796a
    FXCH                                ; 0047796c
    FSTP float ptr [EDX + 0x30]         ; 0047796e
    FSTP double ptr [ESP]               ; 00477971
    FCOMP double ptr [ESP]              ; 00477974
    FNSTSW AX                           ; 00477977
    SAHF                                ; 00477979
    JNC 0x00477989                      ; 0047797a
        ;   XREF to: 00477989 (CONDITIONAL_JUMP)  ; LAB_00477989
    FLD float ptr [EDX + 0x2c]          ; 0047797c
    FABS                                ; 0047797f
    FCOMP double ptr [ESP]              ; 00477981
    FNSTSW AX                           ; 00477984
    SAHF                                ; 00477986
    JC 0x004779c6                       ; 00477987
        ;   XREF to: 004779c6 (CONDITIONAL_JUMP)  ; LAB_004779c6
    FLD float ptr [EDX + 0x24]          ; 00477989
        ;   Label: LAB_00477989
    FABS                                ; 0047798c
    FLD float ptr [EDX + 0x28]          ; 0047798e
    FABS                                ; 00477991
    FSTP double ptr [ESP + 0x8]         ; 00477993
    FCOMP double ptr [ESP + 0x8]        ; 00477997
    FNSTSW AX                           ; 0047799b
    SAHF                                ; 0047799d
    JNC 0x004779d1                      ; 0047799e
        ;   XREF to: 004779d1 (CONDITIONAL_JUMP)  ; LAB_004779d1
    FLD float ptr [EDX + 0x2c]          ; 004779a0
    FABS                                ; 004779a3
    FCOMP double ptr [ESP + 0x8]        ; 004779a5
    FNSTSW AX                           ; 004779a9
    SAHF                                ; 004779ab
    JNC 0x004779d1                      ; 004779ac
        ;   XREF to: 004779d1 (CONDITIONAL_JUMP)  ; LAB_004779d1
    MOV dword ptr [EDX + 0x34],0x1      ; 004779ae
    MOV ESP,EBP                         ; 004779b5
    POP EBP                             ; 004779b7
    RET                                 ; 004779b8
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 004779b9
        ;   Label: LAB_004779b9
    JMP 0x00477929                      ; 004779c1
        ;   XREF to: 00477929 (UNCONDITIONAL_JUMP)  ; LAB_00477929
    MOV dword ptr [EDX + 0x34],0x0      ; 004779c6
        ;   Label: LAB_004779c6
    MOV ESP,EBP                         ; 004779cd
    POP EBP                             ; 004779cf
    RET                                 ; 004779d0
    MOV dword ptr [EDX + 0x34],0x2      ; 004779d1
        ;   Label: LAB_004779d1
    MOV ESP,EBP                         ; 004779d8
    POP EBP                             ; 004779da
    RET                                 ; 004779db

