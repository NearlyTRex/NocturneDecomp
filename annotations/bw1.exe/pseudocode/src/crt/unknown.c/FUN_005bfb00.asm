; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bfb00(int *param_1,undefined1 param_2)
;
;
; XREF[1]:
;   crt_stdio.c_vsprintf_FUN_005bfb18 at 005bfb19
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfb00
        ;   Label: crt_unknown.c_FUN_005bfb00
    MOV EDX,dword ptr [ESP + 0x8]       ; 005bfb01
    MOV EAX,dword ptr [EDX]             ; 005bfb05
    LEA EBX,[EAX + 0x1]                 ; 005bfb07
    MOV dword ptr [EDX],EBX             ; 005bfb0a
    MOV BL,byte ptr [ESP + 0xc]         ; 005bfb0c
    MOV byte ptr [EAX],BL               ; 005bfb10
    INC dword ptr [EDX + 0x10]          ; 005bfb12
    POP EBX                             ; 005bfb15
    RET                                 ; 005bfb16

