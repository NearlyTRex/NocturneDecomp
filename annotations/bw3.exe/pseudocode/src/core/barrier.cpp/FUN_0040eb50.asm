; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_barrier_cpp_FUN_0040eb50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b61e7
;   undefined4 DAT_005b61ef
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0040eb50
        ;   Label: core_barrier.cpp_FUN_0040eb50
    SUB ESP,0x18                        ; 0040eb51
    MOV EDX,dword ptr [ESP + 0x20]      ; 0040eb54
    MOV EAX,ESI                         ; 0040eb58
    FLD double ptr [0x005b61e7]         ; 0040eb5a | DAT_005b61e7
    FLD float ptr [EDX + 0x158]         ; 0040eb60
    FMUL ST1                            ; 0040eb66
    FLD float ptr [EDX + 0x160]         ; 0040eb68
    FMUL ST2                            ; 0040eb6e
    FLD float ptr [EDX + 0x158]         ; 0040eb70
    FCHS                                ; 0040eb76
    FMUL ST3                            ; 0040eb78
    FLD float ptr [EDX + 0x160]         ; 0040eb7a
    FCHS                                ; 0040eb80
    FMULP ST4                           ; 0040eb82
    FLD float ptr [EDX + 0x15c]         ; 0040eb84
    MOV ECX,0xbdcccccd                  ; 0040eb8a
    MOV EDI,ESI                         ; 0040eb8f
    MOV ESI,ESP                         ; 0040eb91
    MOV dword ptr [ESP + 0x4],ECX       ; 0040eb93
    FADD double ptr [0x005b61ef]        ; 0040eb97 | DAT_005b61ef
    FXCH ST3                            ; 0040eb9d
    FSTP float ptr [ESP + 0xc]          ; 0040eb9f
    FXCH ST2                            ; 0040eba3
    FSTP float ptr [ESP + 0x10]         ; 0040eba5
    FSTP float ptr [ESP + 0x14]         ; 0040eba9
    MOV ECX,0x6                         ; 0040ebad
    FXCH                                ; 0040ebb2
    FSTP float ptr [ESP + 0x8]          ; 0040ebb4
    FSTP float ptr [ESP]                ; 0040ebb8
    MOVSD.REP ES:EDI,ESI                ; 0040ebbb
    ADD ESP,0x18                        ; 0040ebbd
    POP EDI                             ; 0040ebc0
    RET                                 ; 0040ebc1

