; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flies.cpp_FUN_004cc700()
;
;
; Referenced Globals:
;   double DOUBLE_0062a446 = -0.5
;   double DOUBLE_0062a44e = 0.5
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cc700
        ;   Label: core_flies.cpp_FUN_004cc700
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cc704
    MOV dword ptr [EAX + 0x4],0x0       ; 004cc708
    MOV ECX,dword ptr [EDX + 0x15c]     ; 004cc70f
    MOV dword ptr [EAX + 0x10],ECX      ; 004cc715
    FLD double ptr [0x0062a446]         ; 004cc718 | DOUBLE_0062a446
    FLD float ptr [EDX + 0x158]         ; 004cc71e
    FMUL ST1                            ; 004cc724
    FSTP float ptr [EAX]                ; 004cc726
    FLD double ptr [0x0062a44e]         ; 004cc728 | DOUBLE_0062a44e
    FLD float ptr [EDX + 0x158]         ; 004cc72e
    FMUL ST1                            ; 004cc734
    FSTP float ptr [EAX + 0xc]          ; 004cc736
    FLD float ptr [EDX + 0x160]         ; 004cc739
    FMULP ST2                           ; 004cc73f
    FXCH                                ; 004cc741
    FSTP float ptr [EAX + 0x8]          ; 004cc743
    FMUL float ptr [EDX + 0x160]        ; 004cc746
    FSTP float ptr [EAX + 0x14]         ; 004cc74c
    RET                                 ; 004cc74f

