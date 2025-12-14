; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ulong crt_stdlib.c_strtoul_FUN_0060ede0(char * str, char * * endptr, int base)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char * *         Stack[0x8]:4   endptr
; int              Stack[0xc]:4   base
;
; Called Functions:
;   crt_stdlib.c_strtol_internal_FUN_0060ec70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ede0
        ;   Label: crt_stdlib.c_strtoul_FUN_0060ede0
    PUSH 0x0                            ; 0060ede1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0060ede3
    PUSH EDX                            ; 0060ede7
    MOV EBX,dword ptr [ESP + 0x14]      ; 0060ede8
    PUSH EBX                            ; 0060edec
    MOV ECX,dword ptr [ESP + 0x14]      ; 0060eded
    PUSH ECX                            ; 0060edf1
    CALL crt_stdlib.c_strtol_internal_FUN_0060ec70 ; 0060edf2
        ;   XREF to: 0060ec70 (UNCONDITIONAL_CALL)  ; long crt_stdlib.c_strtol_internal_FUN_0060ec70(char * str, char * * endptr, int base, int is_signed)
    ADD ESP,0x10                        ; 0060edf7
    POP EBX                             ; 0060edfa
    RET                                 ; 0060edfb

