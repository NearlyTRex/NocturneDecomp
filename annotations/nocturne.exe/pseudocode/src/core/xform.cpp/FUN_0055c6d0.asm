; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_xform_cpp_FUN_0055c6d0(void)
;
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0055c6d0
        ;   Label: core_xform.cpp_FUN_0055c6d0
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055c6d3
    FLD float ptr [EAX + 0x14]          ; 0055c6d7
    FMUL float ptr [EAX + 0x28]         ; 0055c6da
    FLD float ptr [EAX + 0x18]          ; 0055c6dd
    FMUL float ptr [EAX + 0x20]         ; 0055c6e0
    FLD float ptr [EAX + 0x10]          ; 0055c6e3
    FMUL float ptr [EAX + 0x24]         ; 0055c6e6
    FLD float ptr [EAX + 0x18]          ; 0055c6e9
    FMUL float ptr [EAX + 0x24]         ; 0055c6ec
    FLD float ptr [EAX + 0x10]          ; 0055c6ef
    FMUL float ptr [EAX + 0x28]         ; 0055c6f2
    FLD float ptr [EAX + 0x4]           ; 0055c6f5
    FXCH                                ; 0055c6f8
    FSUBP ST4,ST0                       ; 0055c6fa
    FMULP ST3                           ; 0055c6fc
    FSUBP ST3,ST0                       ; 0055c6fe
    FLD float ptr [EAX]                 ; 0055c700
    FMULP ST3                           ; 0055c702
    FLD float ptr [EAX + 0x20]          ; 0055c704
    FMUL float ptr [EAX + 0x14]         ; 0055c707
    FXCH ST3                            ; 0055c70a
    FADDP ST2,ST0                       ; 0055c70c
    FSUBRP ST2,ST0                      ; 0055c70e
    FLD float ptr [EAX + 0x8]           ; 0055c710
    FMULP ST2                           ; 0055c713
    FADDP                               ; 0055c715
    FLDZ                                ; 0055c717
    FCOMPP                              ; 0055c719
    FNSTSW AX                           ; 0055c71b
    SAHF                                ; 0055c71d
    SETA AL                             ; 0055c71e
    AND EAX,0xff                        ; 0055c721
    ADD ESP,0xc                         ; 0055c726
    RET                                 ; 0055c729

