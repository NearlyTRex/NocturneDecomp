; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_00511980(float *param_1,float *param_2,float *param_3,float *param_4)
;
;
; XREF[2]:
;   shape_edittool.cpp_FUN_00496920 at 00496cc0
;   shape_edittool.cpp_FUN_00496ee0 at 00496f89
;
; Referenced Globals:
;   undefined4 DAT_01d224cc
;   undefined4 DAT_01d224d0
;   undefined4 DAT_01d224d4
;   undefined4 DAT_01d224d8
;   undefined4 DAT_01d22544
;   undefined4 DAT_01d25f14
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00511980
        ;   Label: unkafter_minecar.cpp_FUN_00511980
    MOV EDX,dword ptr [ESP + 0x8]       ; 00511983
    MOV ECX,dword ptr [ESP + 0xc]       ; 00511987
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051198b
    CMP dword ptr [0x01d25f14],0x0      ; 0051198f | DAT_01d25f14
    JZ 0x005119c4                       ; 00511996
        ;   XREF to: 005119c4 (CONDITIONAL_JUMP)  ; LAB_005119c4
    FLD float ptr [0x01d224cc]          ; 00511998 | DAT_01d224cc
    FLD float ptr [0x01d224d0]          ; 0051199e | DAT_01d224d0
    FLD float ptr [0x01d224d4]          ; 005119a4 | DAT_01d224d4
    FLD float ptr [0x01d224d8]          ; 005119aa | DAT_01d224d8
    FXCH ST3                            ; 005119b0
    FSTP float ptr [EDX]                ; 005119b2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005119b4
    FXCH                                ; 005119b8
    FSTP float ptr [ECX]                ; 005119ba
    FSTP float ptr [EDX]                ; 005119bc
    FSTP float ptr [EAX]                ; 005119be
    ADD ESP,0x4                         ; 005119c0
    RET                                 ; 005119c3
    FLD1                                ; 005119c4
        ;   Label: LAB_005119c4
    FLD float ptr [0x01d224cc]          ; 005119c6 | DAT_01d224cc
    FXCH                                ; 005119cc
    FDIV float ptr [0x01d22544]         ; 005119ce | DAT_01d22544
    FXCH                                ; 005119d4
    FMUL ST1                            ; 005119d6
    FLD float ptr [0x01d224d0]          ; 005119d8 | DAT_01d224d0
    FMUL ST2                            ; 005119de
    FLD float ptr [0x01d224d4]          ; 005119e0 | DAT_01d224d4
    FMUL ST3                            ; 005119e6
    FLD float ptr [0x01d224d8]          ; 005119e8 | DAT_01d224d8
    FMULP ST4                           ; 005119ee
    FXCH ST2                            ; 005119f0
    FSTP float ptr [EDX]                ; 005119f2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005119f4
    FSTP float ptr [ECX]                ; 005119f8
    FSTP float ptr [EDX]                ; 005119fa
    FSTP float ptr [EAX]                ; 005119fc
    ADD ESP,0x4                         ; 005119fe
    RET                                 ; 00511a01

