; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_xform_cpp_FUN_005b5860(float param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa0b0
;   undefined4 DAT_005fa0b4
;   undefined4 DAT_005fa0b8
;   undefined4 DAT_005fa0bc
;   undefined4 DAT_005fa0c0
;   undefined4 DAT_005fa0c4
;   undefined4 DAT_005fa0c8
;
; Called Functions:
;   crt_math.c_acos_FUN_005c1d04
;   crt_math.c_asin_FUN_005c1cd6
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005b5860
        ;   Label: core_xform.cpp_FUN_005b5860
    FLD float ptr [ESP + 0x8]           ; 005b5863
    FCOMP float ptr [0x005fa0b0]        ; 005b5867 | DAT_005fa0b0
    FNSTSW AX                           ; 005b586d
    SAHF                                ; 005b586f
    JNC 0x005b58d5                      ; 005b5870
        ;   XREF to: 005b58d5 (CONDITIONAL_JUMP)  ; LAB_005b58d5
    FLD float ptr [ESP + 0x8]           ; 005b5872
    FCOMP float ptr [0x005fa0b4]        ; 005b5876 | DAT_005fa0b4
    FNSTSW AX                           ; 005b587c
    SAHF                                ; 005b587e
    JBE 0x005b58d5                      ; 005b587f
        ;   XREF to: 005b58d5 (CONDITIONAL_JUMP)  ; LAB_005b58d5
    FLD float ptr [ESP + 0x8]           ; 005b5881
    CALL crt_math.c_asin_FUN_005c1cd6   ; 005b5885
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLDZ                                ; 005b588a
    FXCH                                ; 005b588c
    FSTP float ptr [ESP]                ; 005b588e
    FCOMP float ptr [ESP + 0xc]         ; 005b5891
    FNSTSW AX                           ; 005b5895
    SAHF                                ; 005b5897
    JBE 0x005b58a6                      ; 005b5898
        ;   XREF to: 005b58a6 (CONDITIONAL_JUMP)  ; LAB_005b58a6
    FLD float ptr [0x005fa0bc]          ; 005b589a | DAT_005fa0bc
    FSUB float ptr [ESP]                ; 005b58a0
    FSTP float ptr [ESP]                ; 005b58a3
    FLD float ptr [ESP]                 ; 005b58a6
        ;   Label: LAB_005b58a6
    FCOMP float ptr [0x005fa0c0]        ; 005b58a9 | DAT_005fa0c0
    FNSTSW AX                           ; 005b58af
    SAHF                                ; 005b58b1
    JNC 0x005b58c0                      ; 005b58b2
        ;   XREF to: 005b58c0 (CONDITIONAL_JUMP)  ; LAB_005b58c0
    FLD float ptr [ESP]                 ; 005b58b4
    FADD float ptr [0x005fa0c4]         ; 005b58b7 | DAT_005fa0c4
    FSTP float ptr [ESP]                ; 005b58bd
    FLD float ptr [ESP]                 ; 005b58c0
        ;   Label: LAB_005b58c0
    FCOMP float ptr [0x005fa0bc]        ; 005b58c3 | DAT_005fa0bc
    FNSTSW AX                           ; 005b58c9
    SAHF                                ; 005b58cb
    JA 0x005b591c                       ; 005b58cc
        ;   XREF to: 005b591c (CONDITIONAL_JUMP)  ; LAB_005b591c
    MOV EAX,dword ptr [ESP]             ; 005b58ce
    ADD ESP,0x4                         ; 005b58d1
    RET                                 ; 005b58d4
    FLD float ptr [ESP + 0xc]           ; 005b58d5
        ;   Label: LAB_005b58d5
    FCOMP float ptr [0x005fa0b8]        ; 005b58d9 | DAT_005fa0b8
    FNSTSW AX                           ; 005b58df
    SAHF                                ; 005b58e1
    JA 0x005b58fd                       ; 005b58e2
        ;   XREF to: 005b58fd (CONDITIONAL_JUMP)  ; LAB_005b58fd
    MOV dword ptr [ESP],0x40490fdb      ; 005b58e4
    FLDZ                                ; 005b58eb
        ;   Label: LAB_005b58eb
    FCOMP float ptr [ESP + 0x8]         ; 005b58ed
    FNSTSW AX                           ; 005b58f1
    SAHF                                ; 005b58f3
    JBE 0x005b58a6                      ; 005b58f4
        ;   XREF to: 005b58a6 (CONDITIONAL_JUMP)  ; LAB_005b58a6
    XOR byte ptr [ESP + 0x3],0x80       ; 005b58f6
    JMP 0x005b58a6                      ; 005b58fb
        ;   XREF to: 005b58a6 (UNCONDITIONAL_JUMP)  ; LAB_005b58a6
    CMP dword ptr [ESP + 0xc],0x3f800000 ; 005b58fd
        ;   Label: LAB_005b58fd
    JL 0x005b590e                       ; 005b5905
        ;   XREF to: 005b590e (CONDITIONAL_JUMP)  ; LAB_005b590e
    XOR ECX,ECX                         ; 005b5907
    MOV dword ptr [ESP],ECX             ; 005b5909
    JMP 0x005b58eb                      ; 005b590c
        ;   XREF to: 005b58eb (UNCONDITIONAL_JUMP)  ; LAB_005b58eb
    FLD float ptr [ESP + 0xc]           ; 005b590e
        ;   Label: LAB_005b590e
    CALL crt_math.c_acos_FUN_005c1d04   ; 005b5912
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP]                ; 005b5917
    JMP 0x005b58eb                      ; 005b591a
        ;   XREF to: 005b58eb (UNCONDITIONAL_JUMP)  ; LAB_005b58eb
    FLD float ptr [ESP]                 ; 005b591c
        ;   Label: LAB_005b591c
    FADD float ptr [0x005fa0c8]         ; 005b591f | DAT_005fa0c8
    FSTP float ptr [ESP]                ; 005b5925
    MOV EAX,dword ptr [ESP]             ; 005b5928
    ADD ESP,0x4                         ; 005b592b
    RET                                 ; 005b592e

