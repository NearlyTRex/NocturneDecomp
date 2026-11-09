; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_stranger_cpp_FUN_0045e040(float *param_1,float *param_2)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0045e040
        ;   Label: unkafter_stranger.cpp_FUN_0045e040
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045e043
    FLD1                                ; 0045e047
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045e049
    FLD float ptr [EAX]                 ; 0045e04d
    FXCH                                ; 0045e04f
    FDIV float ptr [EDX]                ; 0045e051
    FXCH                                ; 0045e053
    FMUL ST1                            ; 0045e055
    FLD float ptr [EAX + 0x4]           ; 0045e057
    FMUL ST2                            ; 0045e05a
    FLD float ptr [EAX + 0x8]           ; 0045e05c
    FMULP ST3                           ; 0045e05f
    FXCH                                ; 0045e061
    FSTP float ptr [EAX]                ; 0045e063
    FSTP float ptr [EAX + 0x4]          ; 0045e065
    FSTP float ptr [EAX + 0x8]          ; 0045e068
    ADD ESP,0x4                         ; 0045e06b
    RET                                 ; 0045e06e

