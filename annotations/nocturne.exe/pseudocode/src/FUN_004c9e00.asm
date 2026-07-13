; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9e00(int param_1,float *param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c9e00
        ;   Label: FUN_004c9e00
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c9e04
    FLD float ptr [EDX + 0x1500]        ; 004c9e08
    MOV dword ptr [EAX + 0x4],0x0       ; 004c9e0e
    FCHS                                ; 004c9e15
    FSTP float ptr [EAX]                ; 004c9e17
    FLD float ptr [EDX + 0x1500]        ; 004c9e19
    FCHS                                ; 004c9e1f
    FSTP float ptr [EAX + 0x8]          ; 004c9e21
    MOV ECX,dword ptr [EDX + 0x1500]    ; 004c9e24
    MOV dword ptr [EAX + 0xc],ECX       ; 004c9e2a
    MOV ECX,dword ptr [EDX + 0x1508]    ; 004c9e2d
    MOV dword ptr [EAX + 0x10],ECX      ; 004c9e33
    MOV ECX,dword ptr [EDX + 0x1500]    ; 004c9e36
    MOV dword ptr [EAX + 0x14],ECX      ; 004c9e3c
    RET                                 ; 004c9e3f

