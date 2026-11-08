; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005571e0(double param_1,double param_2,double param_3)
;
;
; XREF[1]:
;   FUN_00554430 at 0055450a
;
; Referenced Globals:
;   undefined4 DAT_02cf2828
;   undefined4 DAT_02cf2830
;   undefined4 DAT_02cf2838
;   undefined4 DAT_02cf2840
;   undefined4 DAT_02cf2848
;   undefined4 DAT_02cf2850
;   undefined4 DAT_02cf28bc
;
; *****************************************************************************

section .text

    SUB ESP,0x30                        ; 005571e0
        ;   Label: FUN_005571e0
    CMP dword ptr [0x02cf28bc],0x0      ; 005571e3 | DAT_02cf28bc
    JZ 0x00557249                       ; 005571ea
        ;   XREF to: 00557249 (CONDITIONAL_JUMP)  ; LAB_00557249
    FLD double ptr [ESP + 0x34]         ; 005571ec
    FLD ST0                             ; 005571f0
    FSUB double ptr [0x02cf2828]        ; 005571f2 | DAT_02cf2828
    FMUL ST0                            ; 005571f8
    FLD double ptr [ESP + 0x3c]         ; 005571fa
    FLD ST0                             ; 005571fe
    FSUB double ptr [0x02cf2838]        ; 00557200 | DAT_02cf2838
    FMUL ST0                            ; 00557206
    FLD double ptr [ESP + 0x44]         ; 00557208
    FLD ST0                             ; 0055720c
    FXCH ST2                            ; 0055720e
    FADDP ST4,ST0                       ; 00557210
    FXCH                                ; 00557212
    FSUB double ptr [0x02cf2848]        ; 00557214 | DAT_02cf2848
    FMUL ST0                            ; 0055721a
    FADDP ST3,ST0                       ; 0055721c
    FXCH ST3                            ; 0055721e
    FSUB double ptr [0x02cf2830]        ; 00557220 | DAT_02cf2830
    FMUL ST0                            ; 00557226
    FXCH                                ; 00557228
    FSUB double ptr [0x02cf2840]        ; 0055722a | DAT_02cf2840
    FMUL ST0                            ; 00557230
    FADDP                               ; 00557232
    FXCH ST2                            ; 00557234
    FSUB double ptr [0x02cf2850]        ; 00557236 | DAT_02cf2850
    FMUL ST0                            ; 0055723c
    FADDP ST2,ST0                       ; 0055723e
    FXCH                                ; 00557240
    FCOMPP                              ; 00557242
    FNSTSW AX                           ; 00557244
    SAHF                                ; 00557246
    JBE 0x0055724f                      ; 00557247
        ;   XREF to: 0055724f (CONDITIONAL_JUMP)  ; LAB_0055724f
    XOR EAX,EAX                         ; 00557249
        ;   Label: LAB_00557249
    ADD ESP,0x30                        ; 0055724b
    RET                                 ; 0055724e
    MOV EAX,0x1                         ; 0055724f
        ;   Label: LAB_0055724f
    ADD ESP,0x30                        ; 00557254
    RET                                 ; 00557257

