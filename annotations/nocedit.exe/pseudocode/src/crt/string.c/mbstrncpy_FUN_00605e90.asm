; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack char * __watcallStack crt_string_c_mbstrncpy_FUN_00605e90(char *dest,char *src,int char_count)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
; int              Stack[0xc]:4   char_count
;
; XREF[2]:
;   crt_file.c_extract_path_component_FUN_00610400 at 00610437
;   crt_string.c_strncpy_safe_FUN_005ff130 at 005ff15f
;
; Called Functions:
;   crt_string.c_mbstrnbytes_FUN_00605ec0
;   crt_unknown.c_FUN_0060b670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00605e90
        ;   Label: crt_string.c_mbstrncpy_FUN_00605e90
    PUSH ESI                            ; 00605e91
    MOV EBX,dword ptr [ESP + 0xc]       ; 00605e92
    MOV EDX,dword ptr [ESP + 0x14]      ; 00605e96
    PUSH EDX                            ; 00605e9a
    MOV ECX,dword ptr [ESP + 0x14]      ; 00605e9b
    PUSH ECX                            ; 00605e9f
    CALL crt_string.c_mbstrnbytes_FUN_00605ec0 ; 00605ea0
        ;   XREF to: 00605ec0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstrnbytes_FUN_00605ec0(char * str, int char_count)
    ADD ESP,0x8                         ; 00605ea5
    INC EAX                             ; 00605ea8
    PUSH EAX                            ; 00605ea9
    MOV ESI,dword ptr [ESP + 0x14]      ; 00605eaa
    PUSH ESI                            ; 00605eae
    PUSH EBX                            ; 00605eaf
    CALL crt_unknown.c_FUN_0060b670     ; 00605eb0
        ;   XREF to: 0060b670 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060b670()
    ADD ESP,0xc                         ; 00605eb5
    MOV EAX,EBX                         ; 00605eb8
    POP ESI                             ; 00605eba
    POP EBX                             ; 00605ebb
    RET                                 ; 00605ebc

