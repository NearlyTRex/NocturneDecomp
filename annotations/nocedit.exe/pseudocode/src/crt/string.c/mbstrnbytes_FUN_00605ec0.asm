; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_string.c_mbstrnbytes_FUN_00605ec0(char * str, int char_count)
;
; Parameters:
; char *           Stack[0x4]:4   str
; int              Stack[0x8]:4   char_count
;
; XREF[3]:
;   crt_file.c_extract_path_component_FUN_00610400 at 00610441
;   crt_string.c_mbstrncpy_FUN_00605e90 at 00605ea0
;   crt_string.c_strncpy_safe_FUN_005ff130 at 005ff169
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; Called Functions:
;   crt_locale.c_mblen_FUN_00605a40
;   crt_string.c_mbstring_termination_check_FUN_0060b630
;   crt_string.c_mbtowc_next_FUN_00605a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00605ec0
        ;   Label: crt_string.c_mbstrnbytes_FUN_00605ec0
    PUSH ESI                            ; 00605ec1
    PUSH EDI                            ; 00605ec2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00605ec3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00605ec7
    XOR ESI,ESI                         ; 00605ecb
    PUSH EBX                            ; 00605ecd
        ;   Label: LAB_00605ecd
    CALL crt_string.c_mbstring_termination_check_FUN_0060b630 ; 00605ece | int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
        ;   XREF to: 0060b630 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00605ed3
    TEST EAX,EAX                        ; 00605ed6
    JNZ 0x00605f1a                      ; 00605ed8 | LAB_00605f1a
        ;   XREF to: 00605f1a (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 00605eda
    JBE 0x00605f1a                      ; 00605edc | LAB_00605f1a
        ;   XREF to: 00605f1a (CONDITIONAL_JUMP)
    CMP dword ptr [0x03f9c020],0x0      ; 00605ede | int g_MultibyteLocaleActive
    JZ 0x00605f0b                       ; 00605ee5 | LAB_00605f0b
        ;   XREF to: 00605f0b (CONDITIONAL_JUMP)
    MOV AL,byte ptr [EBX]               ; 00605ee7
    MOV AL,byte ptr [EAX + 0x3f9c031]   ; 00605ee9 | char[256] g_LeadByteTable
    AND AL,0x1                          ; 00605eef
    AND EAX,0xff                        ; 00605ef1
    JZ 0x00605f0b                       ; 00605ef6 | LAB_00605f0b
        ;   XREF to: 00605f0b (CONDITIONAL_JUMP)
    CMP byte ptr [EBX + 0x1],0x0        ; 00605ef8
    JZ 0x00605f1a                       ; 00605efc | LAB_00605f1a
        ;   XREF to: 00605f1a (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00605efe
    CALL crt_locale.c_mblen_FUN_00605a40 ; 00605eff | int crt_locale.c_mblen_FUN_00605a40(char * mb_string)
        ;   XREF to: 00605a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00605f04
    ADD ESI,EAX                         ; 00605f07
    JMP 0x00605f0c                      ; 00605f09 | LAB_00605f0c
        ;   XREF to: 00605f0c (UNCONDITIONAL_JUMP)
    INC ESI                             ; 00605f0b
        ;   Label: LAB_00605f0b
    PUSH EBX                            ; 00605f0c
        ;   Label: LAB_00605f0c
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 00605f0d | char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)
    DEC EDI                             ; 00605f12
    MOV EBX,EAX                         ; 00605f13
    ADD ESP,0x4                         ; 00605f15
    JMP 0x00605ecd                      ; 00605f18 | LAB_00605ecd
        ;   XREF to: 00605ecd (UNCONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 00605f1a
        ;   Label: LAB_00605f1a
    POP EDI                             ; 00605f1c
    POP ESI                             ; 00605f1d
    POP EBX                             ; 00605f1e
    RET                                 ; 00605f1f

