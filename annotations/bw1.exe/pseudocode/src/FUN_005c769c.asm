; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005c769c(int param_1,uint param_2,ushort param_3,undefined4 param_4,uint param_5,uint param_6)
;
;
; XREF[45]:
;   FUN_005c77eb at 005c77f8
;   FUN_005c7807 at 005c7813
;   FUN_005c7822 at 005c7836
;   FUN_005c7843 at 005c784a
;   FUN_005c7853 at 005c785a
;   FUN_005c7867 at 005c786e
;   FUN_005c7877 at 005c7886
;   FUN_005c7897 at 005c78a5
;   FUN_005c78b6 at 005c78cc
;   FUN_005c78db at 005c78e4
;   ... and 35 more
;
; Referenced Globals:
;   undefined4 DAT_00628bb0
;   undefined4 DAT_00628bc0
;   undefined4 DAT_00628bc4
;   undefined4 DAT_00628bc8
;
; *****************************************************************************

section .text

    FLD extended double ptr [ESP + 0x10] ; 005c769c
        ;   Label: FUN_005c769c
    FLD extended double ptr [ESP + 0x4] ; 005c76a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c76a4
        ;   Label: LAB_005c76a4
    ADD EAX,EAX                         ; 005c76a8
    JNC 0x005c7736                      ; 005c76aa
        ;   XREF to: 005c7736 (CONDITIONAL_JUMP)  ; LAB_005c7736
    XOR EAX,0xe000000                   ; 005c76b0
    TEST EAX,0xe000000                  ; 005c76b5
    JZ 0x005c76bf                       ; 005c76ba
        ;   XREF to: 005c76bf (CONDITIONAL_JUMP)  ; LAB_005c76bf
    FDIVP                               ; 005c76bc
    RET                                 ; 005c76be
    SHR EAX,0x1c                        ; 005c76bf
        ;   Label: LAB_005c76bf
    CMP byte ptr [EAX + 0x628bb0],0x0   ; 005c76c2 | DAT_00628bb0
    JNZ 0x005c76ce                      ; 005c76c9
        ;   XREF to: 005c76ce (CONDITIONAL_JUMP)  ; LAB_005c76ce
    FDIVP                               ; 005c76cb
    RET                                 ; 005c76cd
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c76ce
        ;   Label: LAB_005c76ce
    AND EAX,0x7fff                      ; 005c76d2
    JZ 0x005c7740                       ; 005c76d7
        ;   XREF to: 005c7740 (CONDITIONAL_JUMP)  ; LAB_005c7740
    CMP EAX,0x7fff                      ; 005c76d9
    JZ 0x005c7740                       ; 005c76de
        ;   XREF to: 005c7740 (CONDITIONAL_JUMP)  ; LAB_005c7740
    FNSTCW word ptr [ESP + 0x1c]        ; 005c76e0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c76e4
    OR EAX,0x33f                        ; 005c76e8
    AND EAX,0xf3ff                      ; 005c76ed
    MOV dword ptr [ESP + 0x20],EAX      ; 005c76f2
    FLDCW word ptr [ESP + 0x20]         ; 005c76f6
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c76fa
    AND EAX,0x7fff                      ; 005c76fe
    CMP EAX,0x1                         ; 005c7703
    JZ 0x005c771f                       ; 005c7706
        ;   XREF to: 005c771f (CONDITIONAL_JUMP)  ; LAB_005c771f
    FMUL float ptr [0x00628bc0]         ; 005c7708 | DAT_00628bc0
    FXCH                                ; 005c770e
    FMUL float ptr [0x00628bc0]         ; 005c7710 | DAT_00628bc0
    FXCH                                ; 005c7716
    FLDCW word ptr [ESP + 0x1c]         ; 005c7718
    FDIVP                               ; 005c771c
    RET                                 ; 005c771e
    FMUL float ptr [0x00628bc4]         ; 005c771f | DAT_00628bc4
        ;   Label: LAB_005c771f
    FXCH                                ; 005c7725
    FMUL float ptr [0x00628bc4]         ; 005c7727 | DAT_00628bc4
    FXCH                                ; 005c772d
    FLDCW word ptr [ESP + 0x1c]         ; 005c772f
    FDIVP                               ; 005c7733
    RET                                 ; 005c7735
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c7736
        ;   Label: LAB_005c7736
    OR EAX,dword ptr [ESP + 0x8]        ; 005c773a
    JNZ 0x005c7743                      ; 005c773e
        ;   XREF to: 005c7743 (CONDITIONAL_JUMP)  ; LAB_005c7743
    FDIVP                               ; 005c7740
        ;   Label: LAB_005c7740
    RET                                 ; 005c7742
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c7743
        ;   Label: LAB_005c7743
    AND EAX,0x7fff                      ; 005c7747
    JNZ 0x005c7740                      ; 005c774c
        ;   XREF to: 005c7740 (CONDITIONAL_JUMP)  ; LAB_005c7740
    FNSTCW word ptr [ESP + 0x1c]        ; 005c774e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c7752
    OR EAX,0x33f                        ; 005c7756
    AND EAX,0xf3ff                      ; 005c775b
    MOV dword ptr [ESP + 0x20],EAX      ; 005c7760
    FLDCW word ptr [ESP + 0x20]         ; 005c7764
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c7768
    AND EAX,0x7fff                      ; 005c776c
    JZ 0x005c7784                       ; 005c7771
        ;   XREF to: 005c7784 (CONDITIONAL_JUMP)  ; LAB_005c7784
    CMP EAX,0x7fff                      ; 005c7773
    JZ 0x005c77ac                       ; 005c7778
        ;   XREF to: 005c77ac (CONDITIONAL_JUMP)  ; LAB_005c77ac
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c777a
    ADD EAX,EAX                         ; 005c777e
    JNC 0x005c77ac                      ; 005c7780
        ;   XREF to: 005c77ac (CONDITIONAL_JUMP)  ; LAB_005c77ac
    JMP 0x005c778c                      ; 005c7782
        ;   XREF to: 005c778c (UNCONDITIONAL_JUMP)  ; LAB_005c778c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c7784
        ;   Label: LAB_005c7784
    ADD EAX,EAX                         ; 005c7788
    JC 0x005c77ac                       ; 005c778a
        ;   XREF to: 005c77ac (CONDITIONAL_JUMP)  ; LAB_005c77ac
    FXCH                                ; 005c778c
        ;   Label: LAB_005c778c
    FSTP ST0                            ; 005c778e
    FLD ST0                             ; 005c7790
    FMUL float ptr [0x00628bc8]         ; 005c7792 | DAT_00628bc8
    FSTP extended double ptr [ESP + 0x4] ; 005c7798
    FLD extended double ptr [ESP + 0x10] ; 005c779c
    FXCH                                ; 005c77a0
    WAIT                                ; 005c77a2
    FLDCW word ptr [ESP + 0x1c]         ; 005c77a3
    JMP 0x005c76a4                      ; 005c77a7
        ;   XREF to: 005c76a4 (UNCONDITIONAL_JUMP)  ; LAB_005c76a4
    FLDCW word ptr [ESP + 0x1c]         ; 005c77ac
        ;   Label: LAB_005c77ac
    FDIVP                               ; 005c77b0
    RET                                 ; 005c77b2

