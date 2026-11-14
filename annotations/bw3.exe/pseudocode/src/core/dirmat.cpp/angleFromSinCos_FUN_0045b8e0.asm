; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_0045b8e0(double y,double x)
;
; Parameters:
; double           Stack[0x4]:8   y
; double           Stack[0xc]:8   x
;
; Referenced Globals:
;   undefined4 DAT_005bb13e
;   undefined4 DAT_005bb146
;   undefined4 DAT_005bb14e
;   undefined4 DAT_005bb156
;   undefined4 DAT_005bb15e
;   undefined4 DAT_005bb166
;   undefined4 DAT_005bb16a
;
; Called Functions:
;   crt_math.c_acos_FUN_005a4b74
;   crt_math.c_asin_FUN_005a4b46
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0045b8e0
        ;   Label: core_dirmat.cpp_angleFromSinCos_FUN_0045b8e0
    MOV EBP,ESP                         ; 0045b8e1
    SUB ESP,0x4                         ; 0045b8e3
    AND ESP,0xfffffff8                  ; 0045b8e6
    FLD double ptr [EBP + 0x8]          ; 0045b8e9
    FCOMP double ptr [0x005bb13e]       ; 0045b8ec | DAT_005bb13e
    FNSTSW AX                           ; 0045b8f2
    SAHF                                ; 0045b8f4
    JNC 0x0045b957                      ; 0045b8f5
        ;   XREF to: 0045b957 (CONDITIONAL_JUMP)  ; LAB_0045b957
    FLD double ptr [EBP + 0x8]          ; 0045b8f7
    FCOMP double ptr [0x005bb146]       ; 0045b8fa | DAT_005bb146
    FNSTSW AX                           ; 0045b900
    SAHF                                ; 0045b902
    JBE 0x0045b957                      ; 0045b903
        ;   XREF to: 0045b957 (CONDITIONAL_JUMP)  ; LAB_0045b957
    FLD double ptr [EBP + 0x8]          ; 0045b905
    CALL crt_math.c_asin_FUN_005a4b46   ; 0045b908
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005a4b46()
    FLDZ                                ; 0045b90d
    FXCH                                ; 0045b90f
    FSTP float ptr [ESP]                ; 0045b911
    FCOMP double ptr [EBP + 0x10]       ; 0045b914
    FNSTSW AX                           ; 0045b917
    SAHF                                ; 0045b919
    JBE 0x0045b928                      ; 0045b91a
        ;   XREF to: 0045b928 (CONDITIONAL_JUMP)  ; LAB_0045b928
    FLD float ptr [ESP]                 ; 0045b91c
    FSUBR double ptr [0x005bb156]       ; 0045b91f | DAT_005bb156
    FSTP float ptr [ESP]                ; 0045b925
    FLD float ptr [ESP]                 ; 0045b928
        ;   Label: LAB_0045b928
    FCOMP double ptr [0x005bb15e]       ; 0045b92b | DAT_005bb15e
    FNSTSW AX                           ; 0045b931
    SAHF                                ; 0045b933
    JNC 0x0045b942                      ; 0045b934
        ;   XREF to: 0045b942 (CONDITIONAL_JUMP)  ; LAB_0045b942
    FLD float ptr [ESP]                 ; 0045b936
    FADD float ptr [0x005bb166]         ; 0045b939 | DAT_005bb166
    FSTP float ptr [ESP]                ; 0045b93f
    FLD float ptr [ESP]                 ; 0045b942
        ;   Label: LAB_0045b942
    FCOMP double ptr [0x005bb156]       ; 0045b945 | DAT_005bb156
    FNSTSW AX                           ; 0045b94b
    SAHF                                ; 0045b94d
    JA 0x0045b99b                       ; 0045b94e
        ;   XREF to: 0045b99b (CONDITIONAL_JUMP)  ; LAB_0045b99b
    MOV EAX,dword ptr [ESP]             ; 0045b950
    MOV ESP,EBP                         ; 0045b953
    POP EBP                             ; 0045b955
    RET                                 ; 0045b956
    FLD double ptr [EBP + 0x10]         ; 0045b957
        ;   Label: LAB_0045b957
    FCOMP double ptr [0x005bb14e]       ; 0045b95a | DAT_005bb14e
    FNSTSW AX                           ; 0045b960
    SAHF                                ; 0045b962
    JA 0x0045b97d                       ; 0045b963
        ;   XREF to: 0045b97d (CONDITIONAL_JUMP)  ; LAB_0045b97d
    MOV dword ptr [ESP],0x40490fdb      ; 0045b965
    FLDZ                                ; 0045b96c
        ;   Label: LAB_0045b96c
    FCOMP double ptr [EBP + 0x8]        ; 0045b96e
    FNSTSW AX                           ; 0045b971
    SAHF                                ; 0045b973
    JBE 0x0045b928                      ; 0045b974
        ;   XREF to: 0045b928 (CONDITIONAL_JUMP)  ; LAB_0045b928
    XOR byte ptr [ESP + 0x3],0x80       ; 0045b976
    JMP 0x0045b928                      ; 0045b97b
        ;   XREF to: 0045b928 (UNCONDITIONAL_JUMP)  ; LAB_0045b928
    FLD1                                ; 0045b97d
        ;   Label: LAB_0045b97d
    FCOMP double ptr [EBP + 0x10]       ; 0045b97f
    FNSTSW AX                           ; 0045b982
    SAHF                                ; 0045b984
    JA 0x0045b98e                       ; 0045b985
        ;   XREF to: 0045b98e (CONDITIONAL_JUMP)  ; LAB_0045b98e
    XOR EDX,EDX                         ; 0045b987
    MOV dword ptr [ESP],EDX             ; 0045b989
    JMP 0x0045b96c                      ; 0045b98c
        ;   XREF to: 0045b96c (UNCONDITIONAL_JUMP)  ; LAB_0045b96c
    FLD double ptr [EBP + 0x10]         ; 0045b98e
        ;   Label: LAB_0045b98e
    CALL crt_math.c_acos_FUN_005a4b74   ; 0045b991
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FSTP float ptr [ESP]                ; 0045b996
    JMP 0x0045b96c                      ; 0045b999
        ;   XREF to: 0045b96c (UNCONDITIONAL_JUMP)  ; LAB_0045b96c
    FLD float ptr [ESP]                 ; 0045b99b
        ;   Label: LAB_0045b99b
    FADD float ptr [0x005bb16a]         ; 0045b99e | DAT_005bb16a
    FSTP float ptr [ESP]                ; 0045b9a4
    MOV EAX,dword ptr [ESP]             ; 0045b9a7
    MOV ESP,EBP                         ; 0045b9aa
    POP EBP                             ; 0045b9ac
    RET                                 ; 0045b9ad

