; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl long __cdecl crt_stdlib_c_strtol_FUN_0060edfc(char *str,char **endptr,int base)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char * *         Stack[0x8]:4   endptr
; int              Stack[0xc]:4   base
;
; XREF[1]:
;   crt_io.c_parseFileInfo_FUN_0060e3b0 at 0060e463
;
; Called Functions:
;   crt_stdlib.c_strtol_internal_FUN_0060ec70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060edfc
        ;   Label: crt_stdlib.c_strtol_FUN_0060edfc
    PUSH 0x1                            ; 0060edfd
    MOV EDX,dword ptr [ESP + 0x14]      ; 0060edff
    PUSH EDX                            ; 0060ee03
    MOV EBX,dword ptr [ESP + 0x14]      ; 0060ee04
    PUSH EBX                            ; 0060ee08
    MOV ECX,dword ptr [ESP + 0x14]      ; 0060ee09
    PUSH ECX                            ; 0060ee0d
    CALL crt_stdlib.c_strtol_internal_FUN_0060ec70 ; 0060ee0e
        ;   XREF to: 0060ec70 (UNCONDITIONAL_CALL)  ; long crt_stdlib.c_strtol_internal_FUN_0060ec70(char * str, char * * endptr, int base, int is_signed)
    ADD ESP,0x10                        ; 0060ee13
    POP EBX                             ; 0060ee16
    RET                                 ; 0060ee17

