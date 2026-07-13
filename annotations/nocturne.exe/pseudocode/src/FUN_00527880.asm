; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00527880(double param_1,double param_2,double param_3,double param_4)
;
;
; XREF[6]:
;   FUN_00411c40 at 00411dd8
;   FUN_00418a00 at 00418fd7
;   FUN_00462a60 at 00462bb9
;   FUN_00478790 at 00478814
;   FUN_004b3e00 at 004b3ea9
;   FUN_0054b460 at 0054bf60
;
; Referenced Globals:
;   undefined4 DAT_02dc78e0
;   undefined4 DAT_02dc78e8
;   undefined4 DAT_02dc78f0
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00526400
        ;   Label: LAB_00526400
    RET                                 ; 00526402
    FLD double ptr [ESP + 0xc]          ; 00527880
        ;   Label: FUN_00527880
    FLD double ptr [ESP + 0x4]          ; 00527884
    FSUB double ptr [0x02dc78e0]        ; 00527888 | DAT_02dc78e0
    FXCH                                ; 0052788e
    FSUB double ptr [0x02dc78e8]        ; 00527890 | DAT_02dc78e8
    FXCH                                ; 00527896
    FST double ptr [ESP + 0x4]          ; 00527898
    FMUL double ptr [ESP + 0x4]         ; 0052789c
    FXCH                                ; 005278a0
    FST double ptr [ESP + 0xc]          ; 005278a2
    FMUL double ptr [ESP + 0xc]         ; 005278a6
    FLD double ptr [ESP + 0x14]         ; 005278aa
    FSUB double ptr [0x02dc78f0]        ; 005278ae | DAT_02dc78f0
    FXCH                                ; 005278b4
    FADDP ST2,ST0                       ; 005278b6
    FST double ptr [ESP + 0x14]         ; 005278b8
    FMUL double ptr [ESP + 0x14]        ; 005278bc
    FADDP                               ; 005278c0
    FLD double ptr [ESP + 0x1c]         ; 005278c2
    FMUL ST0                            ; 005278c6
    FCOMPP                              ; 005278c8
    FNSTSW AX                           ; 005278ca
    SAHF                                ; 005278cc
    JC 0x00526400                       ; 005278cd
        ;   XREF to: 00526400 (CONDITIONAL_JUMP)  ; LAB_00526400
    MOV EAX,0x1                         ; 005278d3
    RET                                 ; 005278d8

