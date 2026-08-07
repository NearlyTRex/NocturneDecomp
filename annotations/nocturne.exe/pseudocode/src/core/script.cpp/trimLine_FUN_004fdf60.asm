; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_trimLine_FUN_004fdf60(char *input_line,char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   input_line
; char *           Stack[0x8]:4   output_buffer
;
; XREF[1]:
;   core_script.cpp_CScript_FUN_004fee30 at 004fee78
;
; Referenced Globals:
;   TerminatedCString s_anon_0058e01d
;   uchar[257] g_CharacterClassificationTable
;
; Called Functions:
;   crt_string.c_strstr_FUN_00566fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fdf60
        ;   Label: core_script.cpp_trimLine_FUN_004fdf60
    PUSH ESI                            ; 004fdf61
    PUSH EDI                            ; 004fdf62
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fdf63
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fdf67
    MOV byte ptr [EBX],0x0              ; 004fdf6b
    MOV AL,byte ptr [ESI]               ; 004fdf6e
        ;   Label: LAB_004fdf6e
    INC AL                              ; 004fdf70
    AND EAX,0xff                        ; 004fdf72
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 004fdf77 | g_CharacterClassificationTable
    JZ 0x004fdf83                       ; 004fdf7e
        ;   XREF to: 004fdf83 (CONDITIONAL_JUMP)  ; LAB_004fdf83
    INC ESI                             ; 004fdf80
    JMP 0x004fdf6e                      ; 004fdf81
        ;   XREF to: 004fdf6e (UNCONDITIONAL_JUMP)  ; LAB_004fdf6e
    MOV EDI,EBX                         ; 004fdf83
        ;   Label: LAB_004fdf83
    PUSH EDI                            ; 004fdf85
    MOV AL,byte ptr [ESI]               ; 004fdf86
        ;   Label: LAB_004fdf86
    MOV byte ptr [EDI],AL               ; 004fdf88
    CMP AL,0x0                          ; 004fdf8a
    JZ 0x004fdf9e                       ; 004fdf8c
        ;   XREF to: 004fdf9e (CONDITIONAL_JUMP)  ; LAB_004fdf9e
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdf8e
    ADD ESI,0x2                         ; 004fdf91
    MOV byte ptr [EDI + 0x1],AL         ; 004fdf94
    ADD EDI,0x2                         ; 004fdf97
    CMP AL,0x0                          ; 004fdf9a
    JNZ 0x004fdf86                      ; 004fdf9c
        ;   XREF to: 004fdf86 (CONDITIONAL_JUMP)  ; LAB_004fdf86
    POP EDI                             ; 004fdf9e
        ;   Label: LAB_004fdf9e
    PUSH 0x58e01d                       ; 004fdf9f | = "//"
    PUSH EBX                            ; 004fdfa4
    CALL crt_string.c_strstr_FUN_00566fe0 ; 004fdfa5
        ;   XREF to: 00566fe0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_00566fe0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 004fdfaa
    TEST EAX,EAX                        ; 004fdfad
    JZ 0x004fdfb4                       ; 004fdfaf
        ;   XREF to: 004fdfb4 (CONDITIONAL_JUMP)  ; LAB_004fdfb4
    MOV byte ptr [EAX],0x0              ; 004fdfb1
    MOV ESI,EBX                         ; 004fdfb4
        ;   Label: LAB_004fdfb4
    XOR DL,DL                           ; 004fdfb6
    MOV AL,byte ptr [ESI]               ; 004fdfb8
        ;   Label: LAB_004fdfb8
    CMP AL,DL                           ; 004fdfba
    JZ 0x004fdfd0                       ; 004fdfbc
        ;   XREF to: 004fdfd0 (CONDITIONAL_JUMP)  ; LAB_004fdfd0
    CMP AL,0x0                          ; 004fdfbe
    JZ 0x004fdfce                       ; 004fdfc0
        ;   XREF to: 004fdfce (CONDITIONAL_JUMP)  ; LAB_004fdfce
    INC ESI                             ; 004fdfc2
    MOV AL,byte ptr [ESI]               ; 004fdfc3
    CMP AL,DL                           ; 004fdfc5
    JZ 0x004fdfd0                       ; 004fdfc7
        ;   XREF to: 004fdfd0 (CONDITIONAL_JUMP)  ; LAB_004fdfd0
    INC ESI                             ; 004fdfc9
    CMP AL,0x0                          ; 004fdfca
    JNZ 0x004fdfb8                      ; 004fdfcc
        ;   XREF to: 004fdfb8 (CONDITIONAL_JUMP)  ; LAB_004fdfb8
    SUB ESI,ESI                         ; 004fdfce
        ;   Label: LAB_004fdfce
    MOV EAX,ESI                         ; 004fdfd0
        ;   Label: LAB_004fdfd0
    CMP ESI,EBX                         ; 004fdfd2
    JBE 0x004fdfef                      ; 004fdfd4
        ;   XREF to: 004fdfef (CONDITIONAL_JUMP)  ; LAB_004fdfef
    MOV DL,byte ptr [EAX + -0x1]        ; 004fdfd6
        ;   Label: LAB_004fdfd6
    INC DL                              ; 004fdfd9
    MOVZX ESI,DL                        ; 004fdfdb
    TEST byte ptr [ESI + 0x5c168c],0x2  ; 004fdfde | g_CharacterClassificationTable
    JZ 0x004fdfef                       ; 004fdfe5
        ;   XREF to: 004fdfef (CONDITIONAL_JUMP)  ; LAB_004fdfef
    DEC EAX                             ; 004fdfe7
    MOV byte ptr [EAX],0x0              ; 004fdfe8
    CMP EAX,EBX                         ; 004fdfeb
    JA 0x004fdfd6                       ; 004fdfed
        ;   XREF to: 004fdfd6 (CONDITIONAL_JUMP)  ; LAB_004fdfd6
    POP EDI                             ; 004fdfef
        ;   Label: LAB_004fdfef
    POP ESI                             ; 004fdff0
    POP EBX                             ; 004fdff1
    RET                                 ; 004fdff2

