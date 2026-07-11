; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00417f90(float *param_1,float *param_2,float *param_3)
;
;
; XREF[1]:
;   FUN_004ff2c0 at 00504042
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00417f90
        ;   Label: FUN_00417f90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00417f94
    MOV ECX,dword ptr [ESP + 0xc]       ; 00417f98
    FLD float ptr [EDX]                 ; 00417f9c
    FSUB float ptr [ECX]                ; 00417f9e
    FSTP float ptr [EAX]                ; 00417fa0
    FLD float ptr [EDX + 0x4]           ; 00417fa2
    FSUB float ptr [ECX + 0x4]          ; 00417fa5
    FSTP float ptr [EAX + 0x4]          ; 00417fa8
    FLD float ptr [EDX + 0x8]           ; 00417fab
    FSUB float ptr [ECX + 0x8]          ; 00417fae
    FSTP float ptr [EAX + 0x8]          ; 00417fb1
    RET                                 ; 00417fb4

