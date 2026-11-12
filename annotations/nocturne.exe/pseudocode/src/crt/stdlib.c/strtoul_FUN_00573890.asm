; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ulong __cdecl crt_stdlib_c_strtoul_FUN_00573890(char *str,char **endptr,int base)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char * *         Stack[0x8]:4   endptr
; int              Stack[0xc]:4   base
;
; Called Functions:
;   crt_stdlib.c_strtol_internal_FUN_00573720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573890
        ;   Label: crt_stdlib.c_strtoul_FUN_00573890
    PUSH 0x0                            ; 00573891
    MOV EDX,dword ptr [ESP + 0x14]      ; 00573893
    PUSH EDX                            ; 00573897
    MOV EBX,dword ptr [ESP + 0x14]      ; 00573898
    PUSH EBX                            ; 0057389c
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057389d
    PUSH ECX                            ; 005738a1
    CALL crt_stdlib.c_strtol_internal_FUN_00573720 ; 005738a2
        ;   XREF to: 00573720 (UNCONDITIONAL_CALL)  ; long crt_stdlib.c_strtol_internal_FUN_00573720(char * str, char * * endptr, int base, int is_signed)
    ADD ESP,0x10                        ; 005738a7
    POP EBX                             ; 005738aa
    RET                                 ; 005738ab

