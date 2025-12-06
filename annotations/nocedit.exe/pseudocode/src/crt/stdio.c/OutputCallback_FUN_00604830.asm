; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void crt_stdio.c_OutputCallback_FUN_00604830(FORMAT_OUTPUT_CONTEXT * context, int character)
;
; Parameters:
; FORMAT_OUTPUT_CONTEXT * Stack[0x4]:4   context
; int              Stack[0x8]:4   character
;
; XREF[1]:
;   crt_stdio.c_vfprintf_FUN_00604850 at 006048d0
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_006007a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00604830
        ;   Label: crt_stdio.c_OutputCallback_FUN_00604830
    PUSH ESI                            ; 00604831
    MOV EBX,dword ptr [ESP + 0xc]       ; 00604832
    MOV EDX,dword ptr [EBX]             ; 00604836
    PUSH EDX                            ; 00604838
    MOV ECX,dword ptr [ESP + 0x14]      ; 00604839
    PUSH ECX                            ; 0060483d
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0060483e | int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBX + 0x10]      ; 00604843
    INC ESI                             ; 00604846
    ADD ESP,0x8                         ; 00604847
    MOV dword ptr [EBX + 0x10],ESI      ; 0060484a
    POP ESI                             ; 0060484d
    POP EBX                             ; 0060484e
    RET                                 ; 0060484f

