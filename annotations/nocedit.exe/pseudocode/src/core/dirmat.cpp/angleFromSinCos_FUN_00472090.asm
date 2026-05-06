; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_00472090(double y,double x)
;
; Parameters:
; double           Stack[0x4]:8   y
; double           Stack[0xc]:8   x
; Local Variables:
; float            Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   double g_Atan2SinCosThreshold = 0.707000000000000
;   double g_Atan2SinCosThresholdNeg = -0.707000000000000
;   double g_Atan2NegativeOne_0061edfb = -1
;   double g_Atan2Pi_0061ee03 = 3.14159265359000
;   double g_Atan2NegativePi_0061ee0b = -3.14159265359000
;   float g_Atan2TwoPi_0061ee13 = 6.283185
;   float g_Atan2NegativeTwoPi_0061ee17 = -6.283185
;
; Called Functions:
;   crt_math.c_acos_FUN_00600162
;   crt_math.c_asin_FUN_00600b94
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00472090
        ;   Label: core_dirmat.cpp_angleFromSinCos_FUN_00472090
    MOV EBP,ESP                         ; 00472091
    SUB ESP,0x4                         ; 00472093
    AND ESP,0xfffffff8                  ; 00472096
    FLD double ptr [EBP + 0x8]          ; 00472099
    FCOMP double ptr [0x0061edeb]       ; 0047209c | g_Atan2SinCosThreshold
    FNSTSW AX                           ; 004720a2
    SAHF                                ; 004720a4
    JNC 0x00472107                      ; 004720a5
        ;   XREF to: 00472107 (CONDITIONAL_JUMP)  ; LAB_00472107
    FLD double ptr [EBP + 0x8]          ; 004720a7
    FCOMP double ptr [0x0061edf3]       ; 004720aa | g_Atan2SinCosThresholdNeg
    FNSTSW AX                           ; 004720b0
    SAHF                                ; 004720b2
    JBE 0x00472107                      ; 004720b3
        ;   XREF to: 00472107 (CONDITIONAL_JUMP)  ; LAB_00472107
    FLD double ptr [EBP + 0x8]          ; 004720b5
    CALL crt_math.c_asin_FUN_00600b94   ; 004720b8
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLDZ                                ; 004720bd
    FXCH                                ; 004720bf
    FSTP float ptr [ESP]                ; 004720c1
    FCOMP double ptr [EBP + 0x10]       ; 004720c4
    FNSTSW AX                           ; 004720c7
    SAHF                                ; 004720c9
    JBE 0x004720d8                      ; 004720ca
        ;   XREF to: 004720d8 (CONDITIONAL_JUMP)  ; LAB_004720d8
    FLD float ptr [ESP]                 ; 004720cc
    FSUBR double ptr [0x0061ee03]       ; 004720cf | g_Atan2Pi_0061ee03
    FSTP float ptr [ESP]                ; 004720d5
    FLD float ptr [ESP]                 ; 004720d8
        ;   Label: LAB_004720d8
    FCOMP double ptr [0x0061ee0b]       ; 004720db | g_Atan2NegativePi_0061ee0b
    FNSTSW AX                           ; 004720e1
    SAHF                                ; 004720e3
    JNC 0x004720f2                      ; 004720e4
        ;   XREF to: 004720f2 (CONDITIONAL_JUMP)  ; LAB_004720f2
    FLD float ptr [ESP]                 ; 004720e6
    FADD float ptr [0x0061ee13]         ; 004720e9 | g_Atan2TwoPi_0061ee13
    FSTP float ptr [ESP]                ; 004720ef
    FLD float ptr [ESP]                 ; 004720f2
        ;   Label: LAB_004720f2
    FCOMP double ptr [0x0061ee03]       ; 004720f5 | g_Atan2Pi_0061ee03
    FNSTSW AX                           ; 004720fb
    SAHF                                ; 004720fd
    JA 0x0047214b                       ; 004720fe
        ;   XREF to: 0047214b (CONDITIONAL_JUMP)  ; LAB_0047214b
    MOV EAX,dword ptr [ESP]             ; 00472100
    MOV ESP,EBP                         ; 00472103
    POP EBP                             ; 00472105
    RET                                 ; 00472106
    FLD double ptr [EBP + 0x10]         ; 00472107
        ;   Label: LAB_00472107
    FCOMP double ptr [0x0061edfb]       ; 0047210a | g_Atan2NegativeOne_0061edfb
    FNSTSW AX                           ; 00472110
    SAHF                                ; 00472112
    JA 0x0047212d                       ; 00472113
        ;   XREF to: 0047212d (CONDITIONAL_JUMP)  ; LAB_0047212d
    MOV dword ptr [ESP],0x40490fdb      ; 00472115
    FLDZ                                ; 0047211c
        ;   Label: LAB_0047211c
    FCOMP double ptr [EBP + 0x8]        ; 0047211e
    FNSTSW AX                           ; 00472121
    SAHF                                ; 00472123
    JBE 0x004720d8                      ; 00472124
        ;   XREF to: 004720d8 (CONDITIONAL_JUMP)  ; LAB_004720d8
    XOR byte ptr [ESP + 0x3],0x80       ; 00472126
    JMP 0x004720d8                      ; 0047212b
        ;   XREF to: 004720d8 (UNCONDITIONAL_JUMP)  ; LAB_004720d8
    FLD1                                ; 0047212d
        ;   Label: LAB_0047212d
    FCOMP double ptr [EBP + 0x10]       ; 0047212f
    FNSTSW AX                           ; 00472132
    SAHF                                ; 00472134
    JA 0x0047213e                       ; 00472135
        ;   XREF to: 0047213e (CONDITIONAL_JUMP)  ; LAB_0047213e
    XOR EDX,EDX                         ; 00472137
    MOV dword ptr [ESP],EDX             ; 00472139
    JMP 0x0047211c                      ; 0047213c
        ;   XREF to: 0047211c (UNCONDITIONAL_JUMP)  ; LAB_0047211c
    FLD double ptr [EBP + 0x10]         ; 0047213e
        ;   Label: LAB_0047213e
    CALL crt_math.c_acos_FUN_00600162   ; 00472141
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP]                ; 00472146
    JMP 0x0047211c                      ; 00472149
        ;   XREF to: 0047211c (UNCONDITIONAL_JUMP)  ; LAB_0047211c
    FLD float ptr [ESP]                 ; 0047214b
        ;   Label: LAB_0047214b
    FADD float ptr [0x0061ee17]         ; 0047214e | g_Atan2NegativeTwoPi_0061ee17
    FSTP float ptr [ESP]                ; 00472154
    MOV EAX,dword ptr [ESP]             ; 00472157
    MOV ESP,EBP                         ; 0047215a
    POP EBP                             ; 0047215c
    RET                                 ; 0047215d

