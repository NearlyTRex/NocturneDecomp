; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005639f0(int *param_1,undefined1 param_2)
;
;
; XREF[1]:
;   crt_stdio.c_vsprintf_FUN_00563a08 at 00563a09
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005639f0
        ;   Label: crt_unknown.c_FUN_005639f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005639f1
    MOV EAX,dword ptr [EDX]             ; 005639f5
    LEA EBX,[EAX + 0x1]                 ; 005639f7
    MOV dword ptr [EDX],EBX             ; 005639fa
    MOV BL,byte ptr [ESP + 0xc]         ; 005639fc
    MOV byte ptr [EAX],BL               ; 00563a00
    INC dword ptr [EDX + 0x10]          ; 00563a02
    POP EBX                             ; 00563a05
    RET                                 ; 00563a06

