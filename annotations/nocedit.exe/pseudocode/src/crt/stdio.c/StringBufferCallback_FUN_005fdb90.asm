; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_StringBufferCallback_FUN_005fdb90(StringOutputContext *context,char character)
;
; Parameters:
; StringOutputContext * Stack[0x4]:4   context
; char             Stack[0x8]:1   character
;
; XREF[1]:
;   crt_stdio.c__vsprintf_FUN_005fdba8 at 005fdba9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fdb90
        ;   Label: crt_stdio.c_StringBufferCallback_FUN_005fdb90
    MOV EDX,dword ptr [ESP + 0x8]       ; 005fdb91
    MOV EAX,dword ptr [EDX]             ; 005fdb95
    LEA EBX,[EAX + 0x1]                 ; 005fdb97
    MOV dword ptr [EDX],EBX             ; 005fdb9a
    MOV BL,byte ptr [ESP + 0xc]         ; 005fdb9c
    MOV byte ptr [EAX],BL               ; 005fdba0
    INC dword ptr [EDX + 0x10]          ; 005fdba2
    POP EBX                             ; 005fdba5
    RET                                 ; 005fdba6

