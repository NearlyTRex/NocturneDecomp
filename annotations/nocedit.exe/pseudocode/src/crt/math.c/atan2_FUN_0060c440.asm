; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __fpustack crt_math_c_atan2_FUN_0060c440(float10 y,float10 x)
;
; Local Variables:
; uint             Stack[-0x2c]:4  uStack_2c
; ushort           Stack[-0x28]:2  uStack_28
; uint             Stack[-0x20]:4  uStack_20
; ushort           Stack[-0x1c]:2  uStack_1c
;
; XREF[1]:
;   crt_math.c_atan2_FUN_00608e14 at 00608e27
;
; Referenced Globals:
;   undefined4 DAT_006874d4
;   void* PTR_FUN_006874e4 = 0060c5a0
;   float FLOAT_00687518 = 16
;   float FLOAT_0068751c = 0.0625
;   float10 FLOAT10_00687520 = -0.3333333333333333333
;   float10 FLOAT10_0068752a = 0.1999999999999994471
;   float10 FLOAT10_00687534 = -0.1428571428555127940
;   float10 FLOAT10_0068753e = 0.1111111089064621512
;   float10 FLOAT10_00687548 = -0.09090758475228815823
;   float10 FLOAT10_00687552 = 0.07641690805844016167
;   undefined4 DAT_0068755c
;
; Called Functions:
;   crt_math.c_function_dispatch_FUN_00606a77
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 0060c440
        ;   Label: crt_math.c_atan2_FUN_0060c440
    PUSH ECX                            ; 0060c441
    PUSH EDX                            ; 0060c442
    SUB ESP,0x24                        ; 0060c443
    FSTP extended double ptr [ESP + 0xc] ; 0060c446
    FSTP extended double ptr [ESP]      ; 0060c44a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0060c44d
    ADD ECX,ECX                         ; 0060c451
    JNC 0x0060c630                      ; 0060c453
        ;   XREF to: 0060c630 (CONDITIONAL_JUMP)  ; LAB_0060c630
    MOV EAX,dword ptr [ESP + 0x10]      ; 0060c459
    ADD EAX,EAX                         ; 0060c45d
    JNC 0x0060c630                      ; 0060c45f
        ;   XREF to: 0060c630 (CONDITIONAL_JUMP)  ; LAB_0060c630
    MOV ECX,dword ptr [ESP + 0x8]       ; 0060c465
    MOV EAX,dword ptr [ESP + 0x14]      ; 0060c469
    AND ECX,0x7fff                      ; 0060c46d
    JZ 0x0060c630                       ; 0060c473
        ;   XREF to: 0060c630 (CONDITIONAL_JUMP)  ; LAB_0060c630
    AND EAX,0x7fff                      ; 0060c479
    JZ 0x0060c630                       ; 0060c47e
        ;   XREF to: 0060c630 (CONDITIONAL_JUMP)  ; LAB_0060c630
    CMP ECX,0x7fff                      ; 0060c484
    JZ 0x0060c630                       ; 0060c48a
        ;   XREF to: 0060c630 (CONDITIONAL_JUMP)  ; LAB_0060c630
    CMP EAX,0x7fff                      ; 0060c490
    JZ 0x0060c630                       ; 0060c495
        ;   XREF to: 0060c630 (CONDITIONAL_JUMP)  ; LAB_0060c630
    FLD extended double ptr [ESP + 0xc] ; 0060c49b
    FABS                                ; 0060c49f
    FLD extended double ptr [ESP]       ; 0060c4a1
    FABS                                ; 0060c4a4
    FNSTCW word ptr [ESP + 0x18]        ; 0060c4a6
    MOV EDX,dword ptr [ESP + 0x18]      ; 0060c4aa
    OR EDX,0x33f                        ; 0060c4ae
    AND EDX,0xf3ff                      ; 0060c4b4
    MOV dword ptr [ESP + 0x1c],EDX      ; 0060c4ba
    FLDCW word ptr [ESP + 0x1c]         ; 0060c4be
    XOR EDX,EDX                         ; 0060c4c2
    FCOM                                ; 0060c4c4
    PUSH EAX                            ; 0060c4c6
    FNSTSW AX                           ; 0060c4c7
    SAHF                                ; 0060c4c9
    POP EAX                             ; 0060c4ca
    JC 0x0060c4d0                       ; 0060c4cb
        ;   XREF to: 0060c4d0 (CONDITIONAL_JUMP)  ; LAB_0060c4d0
    FXCH                                ; 0060c4cd
    INC EDX                             ; 0060c4cf
    PUSH EAX                            ; 0060c4d0
        ;   Label: LAB_0060c4d0
    MOV EAX,0xf                         ; 0060c4d1
    CALL crt_math.c_function_dispatch_FUN_00606a77 ; 0060c4d6
        ;   XREF to: 00606a77 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_function_dispatch_FUN_00606a77(int function_index)
    POP EAX                             ; 0060c4db
    FLD float ptr [0x00687518]          ; 0060c4dc | FLOAT_00687518
    FMUL ST1                            ; 0060c4e2
    FISTP dword ptr [ESP + 0x20]        ; 0060c4e4
    MOV ECX,dword ptr [ESP + 0x20]      ; 0060c4e8
    SHL ECX,0x4                         ; 0060c4ec
    FILD dword ptr [ESP + 0x20]         ; 0060c4ef
    FMUL float ptr [0x0068751c]         ; 0060c4f3 | FLOAT_0068751c
    FLD ST1                             ; 0060c4f9
    FSUB ST0,ST1                        ; 0060c4fb
    FXCH                                ; 0060c4fd
    FMULP ST2                           ; 0060c4ff
    FLD double ptr [0x006874d4]         ; 0060c501 | DAT_006874d4
    FADDP ST2,ST0                       ; 0060c507
    PUSH EAX                            ; 0060c509
    MOV EAX,0xf                         ; 0060c50a
    CALL crt_math.c_function_dispatch_FUN_00606a77 ; 0060c50f
        ;   XREF to: 00606a77 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_function_dispatch_FUN_00606a77(int function_index)
    POP EAX                             ; 0060c514
    FLD ST0                             ; 0060c515
    FMUL ST1                            ; 0060c517
    FLD ST0                             ; 0060c519
    FMUL ST1                            ; 0060c51b
    FLD ST0                             ; 0060c51d
    FMUL ST1                            ; 0060c51f
    FLD extended double ptr [0x00687552] ; 0060c521 | FLOAT10_00687552
    FLD extended double ptr [0x00687548] ; 0060c527 | FLOAT10_00687548
    FXCH                                ; 0060c52d
    FMUL ST2                            ; 0060c52f
    FLD extended double ptr [0x0068753e] ; 0060c531 | FLOAT10_0068753e
    FXCH ST2                            ; 0060c537
    FMUL ST3                            ; 0060c539
    FLD extended double ptr [0x00687534] ; 0060c53b | FLOAT10_00687534
    FXCH ST2                            ; 0060c541
    FMUL ST5                            ; 0060c543
    FXCH ST3                            ; 0060c545
    FMULP ST4                           ; 0060c547
    FLD extended double ptr [0x0068752a] ; 0060c549 | FLOAT10_0068752a
    FXCH ST3                            ; 0060c54f
    FADDP ST4,ST0                       ; 0060c551
    MOV EAX,dword ptr [ESP + 0x14]      ; 0060c553
    FLD extended double ptr [0x00687520] ; 0060c557 | FLOAT10_00687520
    FXCH                                ; 0060c55d
    SHL EAX,0x10                        ; 0060c55f
    FMUL ST6                            ; 0060c562
    FXCH ST2                            ; 0060c564
    ADD EAX,EAX                         ; 0060c566
    FMUL ST5                            ; 0060c568
    FXCH ST3                            ; 0060c56a
    ADC EDX,EDX                         ; 0060c56c
    FMULP ST5                           ; 0060c56e
    FXCH ST2                            ; 0060c570
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060c572
    FMUL ST5                            ; 0060c576
    FXCH ST2                            ; 0060c578
    SHL EAX,0x10                        ; 0060c57a
    FMULP ST5                           ; 0060c57d
    FXCH ST2                            ; 0060c57f
    FADDP ST3,ST0                       ; 0060c581
    ADD EAX,EAX                         ; 0060c583
    FADDP                               ; 0060c585
    ADC EDX,EDX                         ; 0060c587
    FADDP ST2,ST0                       ; 0060c589
    FADDP                               ; 0060c58b
    FMUL ST1                            ; 0060c58d
    FADDP                               ; 0060c58f
    FLD extended double ptr [ECX + 0x68755c] ; 0060c591 | DAT_0068755c
    FADDP                               ; 0060c597
    JMP dword ptr [EDX*0x4 + 0x6874e4]  ; 0060c599 | PTR_FUN_006874e4

