; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_005a1ab0(float *param_1,float *param_2)
;
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005a1ab0
        ;   Label: FUN_005a1ab0
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a1ab3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a1ab7
    FLD float ptr [EDX]                 ; 005a1abb
    FSUB float ptr [EAX]                ; 005a1abd
    FMUL ST0                            ; 005a1abf
    FLD float ptr [EDX + 0x8]           ; 005a1ac1
    FSUB float ptr [EAX + 0x8]          ; 005a1ac4
    FMUL ST0                            ; 005a1ac7
    FADDP                               ; 005a1ac9
    FSQRT                               ; 005a1acb
    FSTP float ptr [ESP + 0x4]          ; 005a1acd
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1ad1
    ADD ESP,0xc                         ; 005a1ad5
    RET                                 ; 005a1ad8

