; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_xform.cpp_atan2Approximation_FUN_005f55c0(double sin_value, double cos_value)
;
; Parameters:
; double           Stack[0x4]:8   sin_value
; double           Stack[0xc]:8   cos_value
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   double g_Atan2SqrtTwoOverTwo = 0.707000000000000
;   double g_Atan2NegativeSqrtTwoOverTwo = -0.707000000000000
;   double g_Atan2NegativeOne = -1
;   double g_Atan2Pi = 3.14159265359000
;   double g_Atan2NegativePi = -3.14159265359000
;   float g_Atan2TwoPi = 6.283185
;   float g_Atan2NegativeTwoPi = -6.283185
;
; Called Functions:
;   crt_math.c_acos_FUN_00600162
;   crt_math.c_asin_FUN_00600b94
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005f55c0
        ;   Label: core_xform.cpp_atan2Approximation_FUN_005f55c0
    MOV EBP,ESP                         ; 005f55c1
    SUB ESP,0x4                         ; 005f55c3
    AND ESP,0xfffffff8                  ; 005f55c6
    FLD double ptr [EBP + 0x8]          ; 005f55c9
    FCOMP double ptr [0x006582ed]       ; 005f55cc | g_Atan2SqrtTwoOverTwo
    FNSTSW AX                           ; 005f55d2
    SAHF                                ; 005f55d4
    JNC 0x005f5637                      ; 005f55d5
        ;   XREF to: 005f5637 (CONDITIONAL_JUMP)  ; LAB_005f5637
    FLD double ptr [EBP + 0x8]          ; 005f55d7
    FCOMP double ptr [0x006582f5]       ; 005f55da | g_Atan2NegativeSqrtTwoOverTwo
    FNSTSW AX                           ; 005f55e0
    SAHF                                ; 005f55e2
    JBE 0x005f5637                      ; 005f55e3
        ;   XREF to: 005f5637 (CONDITIONAL_JUMP)  ; LAB_005f5637
    FLD double ptr [EBP + 0x8]          ; 005f55e5
    CALL crt_math.c_asin_FUN_00600b94   ; 005f55e8
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLDZ                                ; 005f55ed
    FXCH                                ; 005f55ef
    FSTP float ptr [ESP]                ; 005f55f1
    FCOMP double ptr [EBP + 0x10]       ; 005f55f4
    FNSTSW AX                           ; 005f55f7
    SAHF                                ; 005f55f9
    JBE 0x005f5608                      ; 005f55fa
        ;   XREF to: 005f5608 (CONDITIONAL_JUMP)  ; LAB_005f5608
    FLD float ptr [ESP]                 ; 005f55fc
    FSUBR double ptr [0x00658305]       ; 005f55ff | g_Atan2Pi
    FSTP float ptr [ESP]                ; 005f5605
    FLD float ptr [ESP]                 ; 005f5608
        ;   Label: LAB_005f5608
    FCOMP double ptr [0x0065830d]       ; 005f560b | g_Atan2NegativePi
    FNSTSW AX                           ; 005f5611
    SAHF                                ; 005f5613
    JNC 0x005f5622                      ; 005f5614
        ;   XREF to: 005f5622 (CONDITIONAL_JUMP)  ; LAB_005f5622
    FLD float ptr [ESP]                 ; 005f5616
    FADD float ptr [0x00658315]         ; 005f5619 | g_Atan2TwoPi
    FSTP float ptr [ESP]                ; 005f561f
    FLD float ptr [ESP]                 ; 005f5622
        ;   Label: LAB_005f5622
    FCOMP double ptr [0x00658305]       ; 005f5625 | g_Atan2Pi
    FNSTSW AX                           ; 005f562b
    SAHF                                ; 005f562d
    JA 0x005f567b                       ; 005f562e
        ;   XREF to: 005f567b (CONDITIONAL_JUMP)  ; LAB_005f567b
    MOV EAX,dword ptr [ESP]             ; 005f5630
    MOV ESP,EBP                         ; 005f5633
    POP EBP                             ; 005f5635
    RET                                 ; 005f5636
    FLD double ptr [EBP + 0x10]         ; 005f5637
        ;   Label: LAB_005f5637
    FCOMP double ptr [0x006582fd]       ; 005f563a | g_Atan2NegativeOne
    FNSTSW AX                           ; 005f5640
    SAHF                                ; 005f5642
    JA 0x005f565d                       ; 005f5643
        ;   XREF to: 005f565d (CONDITIONAL_JUMP)  ; LAB_005f565d
    MOV dword ptr [ESP],0x40490fdb      ; 005f5645
    FLDZ                                ; 005f564c
        ;   Label: LAB_005f564c
    FCOMP double ptr [EBP + 0x8]        ; 005f564e
    FNSTSW AX                           ; 005f5651
    SAHF                                ; 005f5653
    JBE 0x005f5608                      ; 005f5654
        ;   XREF to: 005f5608 (CONDITIONAL_JUMP)  ; LAB_005f5608
    XOR byte ptr [ESP + 0x3],0x80       ; 005f5656
    JMP 0x005f5608                      ; 005f565b
        ;   XREF to: 005f5608 (UNCONDITIONAL_JUMP)  ; LAB_005f5608
    FLD1                                ; 005f565d
        ;   Label: LAB_005f565d
    FCOMP double ptr [EBP + 0x10]       ; 005f565f
    FNSTSW AX                           ; 005f5662
    SAHF                                ; 005f5664
    JA 0x005f566e                       ; 005f5665
        ;   XREF to: 005f566e (CONDITIONAL_JUMP)  ; LAB_005f566e
    XOR EDX,EDX                         ; 005f5667
    MOV dword ptr [ESP],EDX             ; 005f5669
    JMP 0x005f564c                      ; 005f566c
        ;   XREF to: 005f564c (UNCONDITIONAL_JUMP)  ; LAB_005f564c
    FLD double ptr [EBP + 0x10]         ; 005f566e
        ;   Label: LAB_005f566e
    CALL crt_math.c_acos_FUN_00600162   ; 005f5671
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP]                ; 005f5676
    JMP 0x005f564c                      ; 005f5679
        ;   XREF to: 005f564c (UNCONDITIONAL_JUMP)  ; LAB_005f564c
    FLD float ptr [ESP]                 ; 005f567b
        ;   Label: LAB_005f567b
    FADD float ptr [0x00658319]         ; 005f567e | g_Atan2NegativeTwoPi
    FSTP float ptr [ESP]                ; 005f5684
    MOV EAX,dword ptr [ESP]             ; 005f5687
    MOV ESP,EBP                         ; 005f568a
    POP EBP                             ; 005f568c
    RET                                 ; 005f568d

