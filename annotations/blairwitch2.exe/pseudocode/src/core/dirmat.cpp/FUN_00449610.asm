; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dirmat_cpp_FUN_00449610(double param_1,double param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005cf167
;   undefined4 DAT_005cf16f
;   undefined4 DAT_005cf177
;   undefined4 DAT_005cf17f
;   undefined4 DAT_005cf187
;   undefined4 DAT_005cf18f
;   undefined4 DAT_005cf193
;
; Called Functions:
;   crt_math.c_acos_FUN_005b9924
;   crt_math.c_asin_FUN_005b98f6
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00449610
        ;   Label: core_dirmat.cpp_FUN_00449610
    MOV EBP,ESP                         ; 00449611
    SUB ESP,0x4                         ; 00449613
    AND ESP,0xfffffff8                  ; 00449616
    FLD double ptr [EBP + 0x8]          ; 00449619
    FCOMP double ptr [0x005cf167]       ; 0044961c | DAT_005cf167
    FNSTSW AX                           ; 00449622
    SAHF                                ; 00449624
    JNC 0x00449687                      ; 00449625
        ;   XREF to: 00449687 (CONDITIONAL_JUMP)  ; LAB_00449687
    FLD double ptr [EBP + 0x8]          ; 00449627
    FCOMP double ptr [0x005cf16f]       ; 0044962a | DAT_005cf16f
    FNSTSW AX                           ; 00449630
    SAHF                                ; 00449632
    JBE 0x00449687                      ; 00449633
        ;   XREF to: 00449687 (CONDITIONAL_JUMP)  ; LAB_00449687
    FLD double ptr [EBP + 0x8]          ; 00449635
    CALL crt_math.c_asin_FUN_005b98f6   ; 00449638
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FLDZ                                ; 0044963d
    FXCH                                ; 0044963f
    FSTP float ptr [ESP]                ; 00449641
    FCOMP double ptr [EBP + 0x10]       ; 00449644
    FNSTSW AX                           ; 00449647
    SAHF                                ; 00449649
    JBE 0x00449658                      ; 0044964a
        ;   XREF to: 00449658 (CONDITIONAL_JUMP)  ; LAB_00449658
    FLD float ptr [ESP]                 ; 0044964c
    FSUBR double ptr [0x005cf17f]       ; 0044964f | DAT_005cf17f
    FSTP float ptr [ESP]                ; 00449655
    FLD float ptr [ESP]                 ; 00449658
        ;   Label: LAB_00449658
    FCOMP double ptr [0x005cf187]       ; 0044965b | DAT_005cf187
    FNSTSW AX                           ; 00449661
    SAHF                                ; 00449663
    JNC 0x00449672                      ; 00449664
        ;   XREF to: 00449672 (CONDITIONAL_JUMP)  ; LAB_00449672
    FLD float ptr [ESP]                 ; 00449666
    FADD float ptr [0x005cf18f]         ; 00449669 | DAT_005cf18f
    FSTP float ptr [ESP]                ; 0044966f
    FLD float ptr [ESP]                 ; 00449672
        ;   Label: LAB_00449672
    FCOMP double ptr [0x005cf17f]       ; 00449675 | DAT_005cf17f
    FNSTSW AX                           ; 0044967b
    SAHF                                ; 0044967d
    JA 0x004496cb                       ; 0044967e
        ;   XREF to: 004496cb (CONDITIONAL_JUMP)  ; LAB_004496cb
    MOV EAX,dword ptr [ESP]             ; 00449680
    MOV ESP,EBP                         ; 00449683
    POP EBP                             ; 00449685
    RET                                 ; 00449686
    FLD double ptr [EBP + 0x10]         ; 00449687
        ;   Label: LAB_00449687
    FCOMP double ptr [0x005cf177]       ; 0044968a | DAT_005cf177
    FNSTSW AX                           ; 00449690
    SAHF                                ; 00449692
    JA 0x004496ad                       ; 00449693
        ;   XREF to: 004496ad (CONDITIONAL_JUMP)  ; LAB_004496ad
    MOV dword ptr [ESP],0x40490fdb      ; 00449695
    FLDZ                                ; 0044969c
        ;   Label: LAB_0044969c
    FCOMP double ptr [EBP + 0x8]        ; 0044969e
    FNSTSW AX                           ; 004496a1
    SAHF                                ; 004496a3
    JBE 0x00449658                      ; 004496a4
        ;   XREF to: 00449658 (CONDITIONAL_JUMP)  ; LAB_00449658
    XOR byte ptr [ESP + 0x3],0x80       ; 004496a6
    JMP 0x00449658                      ; 004496ab
        ;   XREF to: 00449658 (UNCONDITIONAL_JUMP)  ; LAB_00449658
    FLD1                                ; 004496ad
        ;   Label: LAB_004496ad
    FCOMP double ptr [EBP + 0x10]       ; 004496af
    FNSTSW AX                           ; 004496b2
    SAHF                                ; 004496b4
    JA 0x004496be                       ; 004496b5
        ;   XREF to: 004496be (CONDITIONAL_JUMP)  ; LAB_004496be
    XOR EDX,EDX                         ; 004496b7
    MOV dword ptr [ESP],EDX             ; 004496b9
    JMP 0x0044969c                      ; 004496bc
        ;   XREF to: 0044969c (UNCONDITIONAL_JUMP)  ; LAB_0044969c
    FLD double ptr [EBP + 0x10]         ; 004496be
        ;   Label: LAB_004496be
    CALL crt_math.c_acos_FUN_005b9924   ; 004496c1
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FSTP float ptr [ESP]                ; 004496c6
    JMP 0x0044969c                      ; 004496c9
        ;   XREF to: 0044969c (UNCONDITIONAL_JUMP)  ; LAB_0044969c
    FLD float ptr [ESP]                 ; 004496cb
        ;   Label: LAB_004496cb
    FADD float ptr [0x005cf193]         ; 004496ce | DAT_005cf193
    FSTP float ptr [ESP]                ; 004496d4
    MOV EAX,dword ptr [ESP]             ; 004496d7
    MOV ESP,EBP                         ; 004496da
    POP EBP                             ; 004496dc
    RET                                 ; 004496dd

