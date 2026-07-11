; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044d7a0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[35]:
;   FUN_0040a000 at 0040a052
;   FUN_00417320 at 00417341
;   FUN_00417730 at 004177b2
;   FUN_0041aaa0 at 0041aada
;   FUN_0041ad10 at 0041b118
;   FUN_00422050 at 004221d1
;   FUN_00422370 at 00422658
;   FUN_00427b60 at 00427d17
;   FUN_0042af70 at 0042b135
;   FUN_00436e80 at 0043718c
;   ... and 25 more
;
; *****************************************************************************

section .text

    SUB ESP,0x34                        ; 0044d7a0
        ;   Label: FUN_0044d7a0
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044d7a3
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0044d7a7
    FLD float ptr [ECX]                 ; 0044d7ab
    FLD ST0                             ; 0044d7ad
    FSIN                                ; 0044d7af
    FLD float ptr [ECX + 0x8]           ; 0044d7b1
    FLD ST0                             ; 0044d7b4
    FSIN                                ; 0044d7b6
    FLD float ptr [ECX + 0x4]           ; 0044d7b8
    FLD ST0                             ; 0044d7bb
    FSIN                                ; 0044d7bd
    FXCH ST5                            ; 0044d7bf
    FCOS                                ; 0044d7c1
    FXCH ST3                            ; 0044d7c3
    FCOS                                ; 0044d7c5
    FXCH                                ; 0044d7c7
    FCOS                                ; 0044d7c9
    FXCH ST5                            ; 0044d7cb
    FST float ptr [ESP + 0x24]          ; 0044d7cd
    FXCH ST4                            ; 0044d7d1
    FSTP float ptr [ESP + 0x28]         ; 0044d7d3
    FXCH ST3                            ; 0044d7d7
    FMUL float ptr [ESP + 0x28]         ; 0044d7d9
    FLD float ptr [ESP + 0x24]          ; 0044d7dd
    FMUL ST3                            ; 0044d7e1
    FXCH ST2                            ; 0044d7e3
    FST float ptr [ESP + 0x1c]          ; 0044d7e5
    FMUL ST3                            ; 0044d7e9
    FXCH ST4                            ; 0044d7eb
    FST float ptr [ESP + 0x20]          ; 0044d7ed
    FMUL ST3                            ; 0044d7f1
    FXCH ST5                            ; 0044d7f3
    FST float ptr [ESP + 0x18]          ; 0044d7f5
    FMUL float ptr [ESP + 0x28]         ; 0044d7f9
    FLD float ptr [ESP + 0x18]          ; 0044d7fd
    FMULP ST4                           ; 0044d801
    FLD ST1                             ; 0044d803
    FMUL float ptr [ESP + 0x1c]         ; 0044d805
    FXCH ST2                            ; 0044d809
    FMUL float ptr [ESP + 0x20]         ; 0044d80b
    FXCH ST3                            ; 0044d80f
    FSTP float ptr [EDX + 0x8]          ; 0044d811
    FLD float ptr [ESP + 0x28]          ; 0044d814
    FCHS                                ; 0044d818
    FSTP float ptr [EDX + 0x14]         ; 0044d81a
    FLD ST0                             ; 0044d81d
    FMUL float ptr [ESP + 0x1c]         ; 0044d81f
    FXCH ST5                            ; 0044d823
    FSTP float ptr [EDX + 0xc]          ; 0044d825
    FLD float ptr [ESP + 0x18]          ; 0044d828
    FMUL float ptr [ESP + 0x20]         ; 0044d82c
    FXCH ST6                            ; 0044d830
    FSTP float ptr [EDX + 0x10]         ; 0044d832
    FLD float ptr [ESP + 0x18]          ; 0044d835
    FCHS                                ; 0044d839
    FMUL float ptr [ESP + 0x1c]         ; 0044d83b
    FXCH ST6                            ; 0044d83f
    FADDP ST2,ST0                       ; 0044d841
    FMUL float ptr [ESP + 0x20]         ; 0044d843
    FXCH ST5                            ; 0044d847
    FADDP ST2,ST0                       ; 0044d849
    FLD float ptr [ESP + 0x1c]          ; 0044d84b
    FMUL float ptr [ESP + 0x24]         ; 0044d84f
    FLD float ptr [ESP + 0x24]          ; 0044d853
    FCHS                                ; 0044d857
    FMUL float ptr [ESP + 0x20]         ; 0044d859
    FXCH ST4                            ; 0044d85d
    FSTP float ptr [EDX + 0x20]         ; 0044d85f
    FADDP ST5,ST0                       ; 0044d862
    FSTP float ptr [EDX]                ; 0044d864
    FXCH                                ; 0044d866
    FADDP ST2,ST0                       ; 0044d868
    FSTP float ptr [EDX + 0x4]          ; 0044d86a
    FXCH                                ; 0044d86d
    FSTP float ptr [EDX + 0x1c]         ; 0044d86f
    FSTP float ptr [EDX + 0x18]         ; 0044d872
    ADD ESP,0x34                        ; 0044d875
    RET                                 ; 0044d878

