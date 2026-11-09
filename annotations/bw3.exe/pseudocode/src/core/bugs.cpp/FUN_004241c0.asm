; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_004241c0(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004241c0
        ;   Label: core_bugs.cpp_FUN_004241c0
    MOV EBP,ESP                         ; 004241c1
    SUB ESP,0x8                         ; 004241c3
    AND ESP,0xfffffff8                  ; 004241c6
    MOV EDX,dword ptr [EBP + 0x8]       ; 004241c9
    FLD float ptr [EDX + 0x4]           ; 004241cc
    FMUL ST0                            ; 004241cf
    FLD float ptr [EDX]                 ; 004241d1
    FMUL ST0                            ; 004241d3
    FADDP                               ; 004241d5
    FLD float ptr [EDX + 0x8]           ; 004241d7
    FMUL ST0                            ; 004241da
    FADDP                               ; 004241dc
    FSQRT                               ; 004241de
    FLDZ                                ; 004241e0
    FXCH                                ; 004241e2
    FSTP float ptr [ESP + 0x4]          ; 004241e4
    FCOMP float ptr [ESP + 0x4]         ; 004241e8
    FNSTSW AX                           ; 004241ec
    SAHF                                ; 004241ee
    JNC 0x00424217                      ; 004241ef
        ;   XREF to: 00424217 (CONDITIONAL_JUMP)  ; LAB_00424217
    FLD1                                ; 004241f1
    FLD float ptr [EDX]                 ; 004241f3
    FXCH                                ; 004241f5
    FDIV float ptr [ESP + 0x4]          ; 004241f7
    FXCH                                ; 004241fb
    FMUL ST1                            ; 004241fd
    FLD float ptr [EDX + 0x4]           ; 004241ff
    FMUL ST2                            ; 00424202
    FLD float ptr [EDX + 0x8]           ; 00424204
    FMULP ST3                           ; 00424207
    FXCH                                ; 00424209
    FSTP float ptr [EDX]                ; 0042420b
    FSTP float ptr [EDX + 0x4]          ; 0042420d
    FSTP float ptr [EDX + 0x8]          ; 00424210
    MOV ESP,EBP                         ; 00424213
    POP EBP                             ; 00424215
    RET                                 ; 00424216
    MOV dword ptr [EDX + 0x8],0x0       ; 00424217
        ;   Label: LAB_00424217
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042421e
    MOV dword ptr [EDX + 0x4],EAX       ; 00424221
    MOV EAX,dword ptr [EDX + 0x4]       ; 00424224
    MOV dword ptr [EDX],EAX             ; 00424227
    MOV ESP,EBP                         ; 00424229
    POP EBP                             ; 0042422b
    RET                                 ; 0042422c

