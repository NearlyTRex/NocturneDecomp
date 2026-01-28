; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_string_c_mbstrnlen_FUN_00605e50(char *str,int max_bytes)
;
; Parameters:
; char *           Stack[0x4]:4   str
; int              Stack[0x8]:4   max_bytes
;
; XREF[2]:
;   crt_file.c_extract_path_component_FUN_00610400 at 0061042a
;   crt_string.c_strncpy_safe_FUN_005ff130 at 005ff14e
;
; Called Functions:
;   crt_locale.c_mblen_FUN_00605a40
;   crt_string.c_mbstring_termination_check_FUN_0060b630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00605e50
        ;   Label: crt_string.c_mbstrnlen_FUN_00605e50
    PUSH ESI                            ; 00605e51
    PUSH EDI                            ; 00605e52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00605e53
    MOV ESI,dword ptr [ESP + 0x14]      ; 00605e57
    XOR EDI,EDI                         ; 00605e5b
    PUSH EBX                            ; 00605e5d
        ;   Label: LAB_00605e5d
    CALL crt_string.c_mbstring_termination_check_FUN_0060b630 ; 00605e5e
        ;   XREF to: 0060b630 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
    ADD ESP,0x4                         ; 00605e63
    TEST EAX,EAX                        ; 00605e66
    JNZ 0x00605e82                      ; 00605e68
        ;   XREF to: 00605e82 (CONDITIONAL_JUMP)  ; LAB_00605e82
    TEST ESI,ESI                        ; 00605e6a
    JBE 0x00605e82                      ; 00605e6c
        ;   XREF to: 00605e82 (CONDITIONAL_JUMP)  ; LAB_00605e82
    PUSH EBX                            ; 00605e6e
    CALL crt_locale.c_mblen_FUN_00605a40 ; 00605e6f
        ;   XREF to: 00605a40 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mblen_FUN_00605a40(char * mb_string)
    ADD ESP,0x4                         ; 00605e74
    CMP ESI,EAX                         ; 00605e77
    JC 0x00605e82                       ; 00605e79
        ;   XREF to: 00605e82 (CONDITIONAL_JUMP)  ; LAB_00605e82
    INC EDI                             ; 00605e7b
    SUB ESI,EAX                         ; 00605e7c
    ADD EBX,EAX                         ; 00605e7e
    JMP 0x00605e5d                      ; 00605e80
        ;   XREF to: 00605e5d (UNCONDITIONAL_JUMP)  ; LAB_00605e5d
    MOV EAX,EDI                         ; 00605e82
        ;   Label: LAB_00605e82
    POP EDI                             ; 00605e84
    POP ESI                             ; 00605e85
    POP EBX                             ; 00605e86
    RET                                 ; 00605e87

