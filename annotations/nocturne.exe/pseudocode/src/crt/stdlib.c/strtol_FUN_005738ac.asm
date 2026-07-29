; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; long __cdecl crt_stdlib_c_strtol_FUN_005738ac(char *str,char **endptr,int base)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char * *         Stack[0x8]:4   endptr
; int              Stack[0xc]:4   base
;
; XREF[1]:
;   FUN_00572b70 at 00572bd8
;
; Called Functions:
;   crt_stdlib.c_strtol_internal_FUN_00573720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005738ac
        ;   Label: crt_stdlib.c_strtol_FUN_005738ac
    PUSH 0x1                            ; 005738ad
    MOV EDX,dword ptr [ESP + 0x14]      ; 005738af
    PUSH EDX                            ; 005738b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005738b4
    PUSH EBX                            ; 005738b8
    MOV ECX,dword ptr [ESP + 0x14]      ; 005738b9
    PUSH ECX                            ; 005738bd
    CALL crt_stdlib.c_strtol_internal_FUN_00573720 ; 005738be
        ;   XREF to: 00573720 (UNCONDITIONAL_CALL)  ; long crt_stdlib.c_strtol_internal_FUN_00573720(char * str, char * * endptr, int base, int is_signed)
    ADD ESP,0x10                        ; 005738c3
    POP EBX                             ; 005738c6
    RET                                 ; 005738c7

