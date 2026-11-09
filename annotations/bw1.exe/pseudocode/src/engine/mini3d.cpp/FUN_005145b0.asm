; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_005145b0(float *param_1)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_00517660 at 00517a12
;
; Referenced Globals:
;   undefined4 DAT_01d224dc
;   undefined4 DAT_01d224e0
;   undefined4 DAT_01d224e4
;   undefined4 DAT_01d224e8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005145b0
        ;   Label: engine_mini3d.cpp_FUN_005145b0
    MOV dword ptr [EDX + 0x10],0x0      ; 005145b4
    FLD float ptr [EDX]                 ; 005145bb
    FCOMP float ptr [EDX + 0x8]         ; 005145bd
    FNSTSW AX                           ; 005145c0
    SAHF                                ; 005145c2
    JA 0x00514606                       ; 005145c3
        ;   XREF to: 00514606 (CONDITIONAL_JUMP)  ; LAB_00514606
    FLD float ptr [EDX + 0x8]           ; 005145c5
        ;   Label: LAB_005145c5
    FCHS                                ; 005145c8
    FCOMP float ptr [EDX]               ; 005145ca
    FNSTSW AX                           ; 005145cc
    SAHF                                ; 005145ce
    JBE 0x005145d5                      ; 005145cf
        ;   XREF to: 005145d5 (CONDITIONAL_JUMP)  ; LAB_005145d5
    OR byte ptr [EDX + 0x10],0x2        ; 005145d1
    FLD float ptr [EDX + 0x4]           ; 005145d5
        ;   Label: LAB_005145d5
    FCOMP float ptr [EDX + 0x8]         ; 005145d8
    FNSTSW AX                           ; 005145db
    SAHF                                ; 005145dd
    JBE 0x005145e4                      ; 005145de
        ;   XREF to: 005145e4 (CONDITIONAL_JUMP)  ; LAB_005145e4
    OR byte ptr [EDX + 0x10],0x4        ; 005145e0
    FLD float ptr [EDX + 0x8]           ; 005145e4
        ;   Label: LAB_005145e4
    FCHS                                ; 005145e7
    FCOMP float ptr [EDX + 0x4]         ; 005145e9
    FNSTSW AX                           ; 005145ec
    SAHF                                ; 005145ee
    JBE 0x005145f5                      ; 005145ef
        ;   XREF to: 005145f5 (CONDITIONAL_JUMP)  ; LAB_005145f5
    OR byte ptr [EDX + 0x10],0x8        ; 005145f1
    FLDZ                                ; 005145f5
        ;   Label: LAB_005145f5
    FCOMP float ptr [EDX + 0x8]         ; 005145f7
    FNSTSW AX                           ; 005145fa
    SAHF                                ; 005145fc
    JNC 0x0051464a                      ; 005145fd
        ;   XREF to: 0051464a (CONDITIONAL_JUMP)  ; LAB_0051464a
    CMP dword ptr [EDX + 0x10],0x0      ; 005145ff
    JZ 0x0051460c                       ; 00514603
        ;   XREF to: 0051460c (CONDITIONAL_JUMP)  ; LAB_0051460c
    RET                                 ; 00514605
    OR byte ptr [EDX + 0x10],0x1        ; 00514606
        ;   Label: LAB_00514606
    JMP 0x005145c5                      ; 0051460a
        ;   XREF to: 005145c5 (UNCONDITIONAL_JUMP)  ; LAB_005145c5
    FLD float ptr [EDX + 0x8]           ; 0051460c
        ;   Label: LAB_0051460c
    FLD1                                ; 0051460f
    FDIVRP                              ; 00514611
    FLD float ptr [EDX]                 ; 00514613
    FMUL float ptr [0x01d224dc]         ; 00514615 | DAT_01d224dc
    FLD float ptr [EDX + 0x4]           ; 0051461b
    FMUL float ptr [0x01d224e0]         ; 0051461e | DAT_01d224e0
    FXCH ST2                            ; 00514624
    FSTP float ptr [EDX + 0xc]          ; 00514626
    FMUL float ptr [EDX + 0xc]          ; 00514629
    FXCH                                ; 0051462c
    FMUL float ptr [EDX + 0xc]          ; 0051462e
    FLD float ptr [0x01d224e8]          ; 00514631 | DAT_01d224e8
    FLD float ptr [0x01d224e4]          ; 00514637 | DAT_01d224e4
    FADDP ST3,ST0                       ; 0051463d
    FADDP                               ; 0051463f
    FXCH                                ; 00514641
    FSTP float ptr [EDX + 0x14]         ; 00514643
    FSTP float ptr [EDX + 0x18]         ; 00514646
    RET                                 ; 00514649
    OR byte ptr [EDX + 0x10],0x10       ; 0051464a
        ;   Label: LAB_0051464a
    RET                                 ; 0051464e

