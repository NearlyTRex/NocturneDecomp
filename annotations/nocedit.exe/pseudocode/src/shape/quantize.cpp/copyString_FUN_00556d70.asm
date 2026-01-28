; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_quantize_cpp_copyString_FUN_00556d70(char *dest,char *src)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
;
; Called Functions:
;   crt_string.c_strncpy_FUN_00600f40
;
; *****************************************************************************

section .text

    PUSH 0x14                           ; 00556d70
        ;   Label: shape_quantize.cpp_copyString_FUN_00556d70
    MOV EDX,dword ptr [ESP + 0xc]       ; 00556d72
    PUSH EDX                            ; 00556d76
    MOV ECX,dword ptr [ESP + 0xc]       ; 00556d77
    PUSH ECX                            ; 00556d7b
    CALL crt_string.c_strncpy_FUN_00600f40 ; 00556d7c
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 00556d81
    RET                                 ; 00556d84

