; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00574080(double param_1,double param_2,double param_3)
;
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30 at 0057100a
;
; Referenced Globals:
;   undefined4 DAT_02c7fbf8
;   undefined4 DAT_02c7fc00
;   undefined4 DAT_02c7fc08
;   undefined4 DAT_02c7fc10
;   undefined4 DAT_02c7fc18
;   undefined4 DAT_02c7fc20
;   undefined4 DAT_02c7fc8c
;
; *****************************************************************************

section .text

    SUB ESP,0x30                        ; 00574080
        ;   Label: sound_sndmain.cpp_FUN_00574080
    CMP dword ptr [0x02c7fc8c],0x0      ; 00574083 | DAT_02c7fc8c
    JZ 0x005740e9                       ; 0057408a
        ;   XREF to: 005740e9 (CONDITIONAL_JUMP)  ; LAB_005740e9
    FLD double ptr [ESP + 0x34]         ; 0057408c
    FLD ST0                             ; 00574090
    FSUB double ptr [0x02c7fbf8]        ; 00574092 | DAT_02c7fbf8
    FMUL ST0                            ; 00574098
    FLD double ptr [ESP + 0x3c]         ; 0057409a
    FLD ST0                             ; 0057409e
    FSUB double ptr [0x02c7fc08]        ; 005740a0 | DAT_02c7fc08
    FMUL ST0                            ; 005740a6
    FLD double ptr [ESP + 0x44]         ; 005740a8
    FLD ST0                             ; 005740ac
    FXCH ST2                            ; 005740ae
    FADDP ST4,ST0                       ; 005740b0
    FXCH                                ; 005740b2
    FSUB double ptr [0x02c7fc18]        ; 005740b4 | DAT_02c7fc18
    FMUL ST0                            ; 005740ba
    FADDP ST3,ST0                       ; 005740bc
    FXCH ST3                            ; 005740be
    FSUB double ptr [0x02c7fc00]        ; 005740c0 | DAT_02c7fc00
    FMUL ST0                            ; 005740c6
    FXCH                                ; 005740c8
    FSUB double ptr [0x02c7fc10]        ; 005740ca | DAT_02c7fc10
    FMUL ST0                            ; 005740d0
    FADDP                               ; 005740d2
    FXCH ST2                            ; 005740d4
    FSUB double ptr [0x02c7fc20]        ; 005740d6 | DAT_02c7fc20
    FMUL ST0                            ; 005740dc
    FADDP ST2,ST0                       ; 005740de
    FXCH                                ; 005740e0
    FCOMPP                              ; 005740e2
    FNSTSW AX                           ; 005740e4
    SAHF                                ; 005740e6
    JBE 0x005740ef                      ; 005740e7
        ;   XREF to: 005740ef (CONDITIONAL_JUMP)  ; LAB_005740ef
    XOR EAX,EAX                         ; 005740e9
        ;   Label: LAB_005740e9
    ADD ESP,0x30                        ; 005740eb
    RET                                 ; 005740ee
    MOV EAX,0x1                         ; 005740ef
        ;   Label: LAB_005740ef
    ADD ESP,0x30                        ; 005740f4
    RET                                 ; 005740f7

