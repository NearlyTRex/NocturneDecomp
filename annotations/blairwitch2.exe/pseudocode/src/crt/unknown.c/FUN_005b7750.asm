; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b7750(int *param_1,undefined1 param_2)
;
;
; XREF[1]:
;   crt_stdio.c_vsprintf_FUN_005b7768 at 005b7769
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7750
        ;   Label: crt_unknown.c_FUN_005b7750
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b7751
    MOV EAX,dword ptr [EDX]             ; 005b7755
    LEA EBX,[EAX + 0x1]                 ; 005b7757
    MOV dword ptr [EDX],EBX             ; 005b775a
    MOV BL,byte ptr [ESP + 0xc]         ; 005b775c
    MOV byte ptr [EAX],BL               ; 005b7760
    INC dword ptr [EDX + 0x10]          ; 005b7762
    POP EBX                             ; 005b7765
    RET                                 ; 005b7766

