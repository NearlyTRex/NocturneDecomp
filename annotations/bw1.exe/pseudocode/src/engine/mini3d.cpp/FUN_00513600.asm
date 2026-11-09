; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_mini3d_cpp_FUN_00513600(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d2253c
;   undefined4 DAT_01d22574
;   undefined4 DAT_01d2257c
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 00513600
        ;   Label: engine_mini3d.cpp_FUN_00513600
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00513603
    MOV EAX,[0x01d2257c]                ; 00513607 | DAT_01d2257c
    FLD float ptr [EDX + 0x4]           ; 0051360c
    FSUB float ptr [EAX + 0x28]         ; 0051360f
    FLD ST0                             ; 00513612
    FMUL float ptr [EAX + 0xc]          ; 00513614
    FLD float ptr [EDX]                 ; 00513617
    FSUB float ptr [EAX + 0x24]         ; 00513619
    FLD ST0                             ; 0051361c
    FMUL float ptr [EAX + 0x4]          ; 0051361e
    FLD ST1                             ; 00513621
    FMUL float ptr [EAX + 0x8]          ; 00513623
    FXCH ST2                            ; 00513626
    FMUL float ptr [EAX]                ; 00513628
    FLD ST4                             ; 0051362a
    FMUL float ptr [EAX + 0x10]         ; 0051362c
    FXCH ST5                            ; 0051362f
    FMUL float ptr [EAX + 0x14]         ; 00513631
    FLD float ptr [EDX + 0x8]           ; 00513634
    FXCH ST2                            ; 00513637
    FADDP ST5,ST0                       ; 00513639
    FXCH                                ; 0051363b
    FSUB float ptr [EAX + 0x2c]         ; 0051363d
    FLD ST0                             ; 00513640
    FMUL float ptr [EAX + 0x18]         ; 00513642
    FXCH ST6                            ; 00513645
    FADDP ST3,ST0                       ; 00513647
    FXCH                                ; 00513649
    FADDP ST3,ST0                       ; 0051364b
    FLD ST0                             ; 0051364d
    FMUL float ptr [EAX + 0x1c]         ; 0051364f
    FXCH                                ; 00513652
    FMUL float ptr [EAX + 0x20]         ; 00513654
    XOR DL,DL                           ; 00513657
    FXCH ST5                            ; 00513659
    FADDP ST4,ST0                       ; 0051365b
    FADDP                               ; 0051365d
    FXCH ST3                            ; 0051365f
    FADDP                               ; 00513661
    FXCH                                ; 00513663
    FSTP float ptr [ESP + 0x10]         ; 00513665
    FXCH                                ; 00513669
    FSTP float ptr [ESP + 0xc]          ; 0051366b
    FSTP float ptr [ESP + 0x14]         ; 0051366f
    FLD float ptr [ESP + 0x10]          ; 00513673
    FCOMP float ptr [ESP + 0x14]        ; 00513677
    FNSTSW AX                           ; 0051367b
    SAHF                                ; 0051367d
    JBE 0x00513682                      ; 0051367e
        ;   XREF to: 00513682 (CONDITIONAL_JUMP)  ; LAB_00513682
    MOV DL,0x1                          ; 00513680
    FLD float ptr [ESP + 0x14]          ; 00513682
        ;   Label: LAB_00513682
    FCHS                                ; 00513686
    FCOMP float ptr [ESP + 0x10]        ; 00513688
    FNSTSW AX                           ; 0051368c
    SAHF                                ; 0051368e
    JBE 0x00513694                      ; 0051368f
        ;   XREF to: 00513694 (CONDITIONAL_JUMP)  ; LAB_00513694
    OR DL,0x2                           ; 00513691
    FLD float ptr [ESP + 0xc]           ; 00513694
        ;   Label: LAB_00513694
    FCOMP float ptr [ESP + 0x14]        ; 00513698
    FNSTSW AX                           ; 0051369c
    SAHF                                ; 0051369e
    JBE 0x005136a4                      ; 0051369f
        ;   XREF to: 005136a4 (CONDITIONAL_JUMP)  ; LAB_005136a4
    OR DL,0x4                           ; 005136a1
    FLD float ptr [ESP + 0x14]          ; 005136a4
        ;   Label: LAB_005136a4
    FCHS                                ; 005136a8
    FCOMP float ptr [ESP + 0xc]         ; 005136aa
    FNSTSW AX                           ; 005136ae
    SAHF                                ; 005136b0
    JBE 0x005136b6                      ; 005136b1
        ;   XREF to: 005136b6 (CONDITIONAL_JUMP)  ; LAB_005136b6
    OR DL,0x8                           ; 005136b3
    FLD float ptr [ESP + 0x14]          ; 005136b6
        ;   Label: LAB_005136b6
    FCOMP float ptr [0x01d2253c]        ; 005136ba | DAT_01d2253c
    FNSTSW AX                           ; 005136c0
    SAHF                                ; 005136c2
    JA 0x005136c8                       ; 005136c3
        ;   XREF to: 005136c8 (CONDITIONAL_JUMP)  ; LAB_005136c8
    OR DL,0x10                          ; 005136c5
    FLD float ptr [ESP + 0x14]          ; 005136c8
        ;   Label: LAB_005136c8
    FCOMP float ptr [0x01d22574]        ; 005136cc | DAT_01d22574
    FNSTSW AX                           ; 005136d2
    SAHF                                ; 005136d4
    JC 0x005136da                       ; 005136d5
        ;   XREF to: 005136da (CONDITIONAL_JUMP)  ; LAB_005136da
    OR DL,0x20                          ; 005136d7
    MOV AL,DL                           ; 005136da
        ;   Label: LAB_005136da
    ADD ESP,0x18                        ; 005136dc
    RET                                 ; 005136df

