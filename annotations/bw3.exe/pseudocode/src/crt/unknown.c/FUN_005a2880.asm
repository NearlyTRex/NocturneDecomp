; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a2880(int *param_1,undefined1 param_2)
;
;
; XREF[1]:
;   crt_stdio.c_vsprintf_FUN_005a2898 at 005a2899
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2880
        ;   Label: crt_unknown.c_FUN_005a2880
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a2881
    MOV EAX,dword ptr [EDX]             ; 005a2885
    LEA EBX,[EAX + 0x1]                 ; 005a2887
    MOV dword ptr [EDX],EBX             ; 005a288a
    MOV BL,byte ptr [ESP + 0xc]         ; 005a288c
    MOV byte ptr [EAX],BL               ; 005a2890
    INC dword ptr [EDX + 0x10]          ; 005a2892
    POP EBX                             ; 005a2895
    RET                                 ; 005a2896

