; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_stranger_cpp_FUN_005409c0(float *param_1,float *param_2)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005409c0
        ;   Label: core_stranger.cpp_FUN_005409c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005409c3
    MOV EAX,dword ptr [ESP + 0xc]       ; 005409c7
    FLD float ptr [EDX + 0x4]           ; 005409cb
    FMUL float ptr [EAX + 0x4]          ; 005409ce
    FLD float ptr [EDX]                 ; 005409d1
    FMUL float ptr [EAX]                ; 005409d3
    FADDP                               ; 005409d5
    FLD float ptr [EDX + 0x8]           ; 005409d7
    FMUL float ptr [EAX + 0x8]          ; 005409da
    FADDP                               ; 005409dd
    FSTP float ptr [ESP]                ; 005409df
    MOV EAX,dword ptr [ESP]             ; 005409e2
    ADD ESP,0x4                         ; 005409e5
    RET                                 ; 005409e8

