; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dirmat_cpp_FUN_0045f770(double param_1,double param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d8a60
;   undefined4 DAT_005d8a68
;   undefined4 DAT_005d8a70
;   undefined4 DAT_005d8a78
;   undefined4 DAT_005d8a80
;   undefined4 DAT_005d8a88
;   undefined4 DAT_005d8a8c
;
; Called Functions:
;   crt_math.c_acos_FUN_005c1d04
;   crt_math.c_asin_FUN_005c1cd6
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0045f770
        ;   Label: core_dirmat.cpp_FUN_0045f770
    MOV EBP,ESP                         ; 0045f771
    SUB ESP,0x4                         ; 0045f773
    AND ESP,0xfffffff8                  ; 0045f776
    FLD double ptr [EBP + 0x8]          ; 0045f779
    FCOMP double ptr [0x005d8a60]       ; 0045f77c | DAT_005d8a60
    FNSTSW AX                           ; 0045f782
    SAHF                                ; 0045f784
    JNC 0x0045f7e7                      ; 0045f785
        ;   XREF to: 0045f7e7 (CONDITIONAL_JUMP)  ; LAB_0045f7e7
    FLD double ptr [EBP + 0x8]          ; 0045f787
    FCOMP double ptr [0x005d8a68]       ; 0045f78a | DAT_005d8a68
    FNSTSW AX                           ; 0045f790
    SAHF                                ; 0045f792
    JBE 0x0045f7e7                      ; 0045f793
        ;   XREF to: 0045f7e7 (CONDITIONAL_JUMP)  ; LAB_0045f7e7
    FLD double ptr [EBP + 0x8]          ; 0045f795
    CALL crt_math.c_asin_FUN_005c1cd6   ; 0045f798
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLDZ                                ; 0045f79d
    FXCH                                ; 0045f79f
    FSTP float ptr [ESP]                ; 0045f7a1
    FCOMP double ptr [EBP + 0x10]       ; 0045f7a4
    FNSTSW AX                           ; 0045f7a7
    SAHF                                ; 0045f7a9
    JBE 0x0045f7b8                      ; 0045f7aa
        ;   XREF to: 0045f7b8 (CONDITIONAL_JUMP)  ; LAB_0045f7b8
    FLD float ptr [ESP]                 ; 0045f7ac
    FSUBR double ptr [0x005d8a78]       ; 0045f7af | DAT_005d8a78
    FSTP float ptr [ESP]                ; 0045f7b5
    FLD float ptr [ESP]                 ; 0045f7b8
        ;   Label: LAB_0045f7b8
    FCOMP double ptr [0x005d8a80]       ; 0045f7bb | DAT_005d8a80
    FNSTSW AX                           ; 0045f7c1
    SAHF                                ; 0045f7c3
    JNC 0x0045f7d2                      ; 0045f7c4
        ;   XREF to: 0045f7d2 (CONDITIONAL_JUMP)  ; LAB_0045f7d2
    FLD float ptr [ESP]                 ; 0045f7c6
    FADD float ptr [0x005d8a88]         ; 0045f7c9 | DAT_005d8a88
    FSTP float ptr [ESP]                ; 0045f7cf
    FLD float ptr [ESP]                 ; 0045f7d2
        ;   Label: LAB_0045f7d2
    FCOMP double ptr [0x005d8a78]       ; 0045f7d5 | DAT_005d8a78
    FNSTSW AX                           ; 0045f7db
    SAHF                                ; 0045f7dd
    JA 0x0045f82b                       ; 0045f7de
        ;   XREF to: 0045f82b (CONDITIONAL_JUMP)  ; LAB_0045f82b
    MOV EAX,dword ptr [ESP]             ; 0045f7e0
    MOV ESP,EBP                         ; 0045f7e3
    POP EBP                             ; 0045f7e5
    RET                                 ; 0045f7e6
    FLD double ptr [EBP + 0x10]         ; 0045f7e7
        ;   Label: LAB_0045f7e7
    FCOMP double ptr [0x005d8a70]       ; 0045f7ea | DAT_005d8a70
    FNSTSW AX                           ; 0045f7f0
    SAHF                                ; 0045f7f2
    JA 0x0045f80d                       ; 0045f7f3
        ;   XREF to: 0045f80d (CONDITIONAL_JUMP)  ; LAB_0045f80d
    MOV dword ptr [ESP],0x40490fdb      ; 0045f7f5
    FLDZ                                ; 0045f7fc
        ;   Label: LAB_0045f7fc
    FCOMP double ptr [EBP + 0x8]        ; 0045f7fe
    FNSTSW AX                           ; 0045f801
    SAHF                                ; 0045f803
    JBE 0x0045f7b8                      ; 0045f804
        ;   XREF to: 0045f7b8 (CONDITIONAL_JUMP)  ; LAB_0045f7b8
    XOR byte ptr [ESP + 0x3],0x80       ; 0045f806
    JMP 0x0045f7b8                      ; 0045f80b
        ;   XREF to: 0045f7b8 (UNCONDITIONAL_JUMP)  ; LAB_0045f7b8
    FLD1                                ; 0045f80d
        ;   Label: LAB_0045f80d
    FCOMP double ptr [EBP + 0x10]       ; 0045f80f
    FNSTSW AX                           ; 0045f812
    SAHF                                ; 0045f814
    JA 0x0045f81e                       ; 0045f815
        ;   XREF to: 0045f81e (CONDITIONAL_JUMP)  ; LAB_0045f81e
    XOR EDX,EDX                         ; 0045f817
    MOV dword ptr [ESP],EDX             ; 0045f819
    JMP 0x0045f7fc                      ; 0045f81c
        ;   XREF to: 0045f7fc (UNCONDITIONAL_JUMP)  ; LAB_0045f7fc
    FLD double ptr [EBP + 0x10]         ; 0045f81e
        ;   Label: LAB_0045f81e
    CALL crt_math.c_acos_FUN_005c1d04   ; 0045f821
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP]                ; 0045f826
    JMP 0x0045f7fc                      ; 0045f829
        ;   XREF to: 0045f7fc (UNCONDITIONAL_JUMP)  ; LAB_0045f7fc
    FLD float ptr [ESP]                 ; 0045f82b
        ;   Label: LAB_0045f82b
    FADD float ptr [0x005d8a8c]         ; 0045f82e | DAT_005d8a8c
    FSTP float ptr [ESP]                ; 0045f834
    MOV EAX,dword ptr [ESP]             ; 0045f837
    MOV ESP,EBP                         ; 0045f83a
    POP EBP                             ; 0045f83c
    RET                                 ; 0045f83d

