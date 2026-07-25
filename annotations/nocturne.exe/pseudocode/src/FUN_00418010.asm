; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00418010(float *param_1,float *param_2)
;
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00418010
        ;   Label: FUN_00418010
    MOV EDX,dword ptr [ESP + 0x8]       ; 00418014
    LEA EAX,[ECX + 0xc]                 ; 00418018
    FLD float ptr [EAX]                 ; 0041801b
    FSUB float ptr [ECX]                ; 0041801d
    FSTP float ptr [EDX]                ; 0041801f
    FLD float ptr [EAX + 0x4]           ; 00418021
    FSUB float ptr [ECX + 0x4]          ; 00418024
    FSTP float ptr [EDX + 0x4]          ; 00418027
    FLD float ptr [EAX + 0x8]           ; 0041802a
    FSUB float ptr [ECX + 0x8]          ; 0041802d
    MOV EAX,EDX                         ; 00418030
    FSTP float ptr [EDX + 0x8]          ; 00418032
    RET                                 ; 00418035

