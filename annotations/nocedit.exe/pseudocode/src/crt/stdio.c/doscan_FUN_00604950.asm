; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_doscan_FUN_00604950(scanf_state_t * state, char * * format_ptr, va_list_t * args)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
; char * *         Stack[0x8]:4   format_ptr
; va_list_t *      Stack[0xc]:4   args
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_stdio.c_vfscanf_FUN_005fe738 at 005fe79c
;   crt_stdio.c_vsscanf_FUN_00600100 at 0060012e
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_stdio.c_parse_format_spec_FUN_00604c1c
;   crt_stdio.c_scanf_char_FUN_00604d54
;   crt_stdio.c_scanf_float_FUN_00605178
;   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
;   crt_stdio.c_scanf_integer_FUN_0060547c
;   crt_stdio.c_scanf_scanset_FUN_00605064
;   crt_stdio.c_scanf_string_FUN_00604e4c
;   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
;   crt_stdio.c_skip_whitespace_FUN_00604d18
;   crt_stdio.c_store_count_FUN_00604fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00604950
        ;   Label: crt_stdio.c_doscan_FUN_00604950
    PUSH ESI                            ; 00604951
    PUSH EDI                            ; 00604952
    PUSH EBP                            ; 00604953
    SUB ESP,0x4                         ; 00604954
    MOV ESI,dword ptr [ESP + 0x18]      ; 00604957
    MOV EAX,dword ptr [ESP + 0x20]      ; 0060495b
    MOV EAX,dword ptr [EAX]             ; 0060495f
    MOV dword ptr [ESP],EAX             ; 00604961
    MOV AH,byte ptr [ESI + 0x10]        ; 00604964
    XOR EBP,EBP                         ; 00604967
    AND AH,0xfd                         ; 00604969
    XOR EDI,EDI                         ; 0060496c
    MOV byte ptr [ESI + 0x10],AH        ; 0060496e
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00604971
        ;   Label: LAB_00604971
    LEA EDX,[EBX + 0x1]                 ; 00604975
    MOV dword ptr [ESP + 0x1c],EDX      ; 00604978
    MOV BL,byte ptr [EBX]               ; 0060497c
    AND EBX,0xff                        ; 0060497e
    JZ 0x00604c00                       ; 00604984
        ;   XREF to: 00604c00 (CONDITIONAL_JUMP)  ; LAB_00604c00
    MOV AL,BL                           ; 0060498a
    INC AL                              ; 0060498c
    AND EAX,0xff                        ; 0060498e
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 00604993 | g_CharacterClassificationTable
    JZ 0x006049ac                       ; 0060499a
        ;   XREF to: 006049ac (CONDITIONAL_JUMP)  ; LAB_006049ac
    PUSH ESI                            ; 0060499c
    CALL crt_stdio.c_skip_whitespace_FUN_00604d18 ; 0060499d
        ;   XREF to: 00604d18 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_skip_whitespace_FUN_00604d18(scanf_state_t * state)
    ADD ESP,0x4                         ; 006049a2
    ADD EDI,EAX                         ; 006049a5
    JMP 0x00604bc4                      ; 006049a7
        ;   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)  ; LAB_00604bc4
    CMP EBX,0x25                        ; 006049ac
        ;   Label: LAB_006049ac
    JZ 0x006049db                       ; 006049af
        ;   XREF to: 006049db (CONDITIONAL_JUMP)  ; LAB_006049db
    PUSH ESI                            ; 006049b1
    CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930 ; 006049b2
        ;   XREF to: 00604930 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
    ADD ESP,0x4                         ; 006049b7
    CMP EAX,EBX                         ; 006049ba
    JZ 0x00604bc3                       ; 006049bc
        ;   XREF to: 00604bc3 (CONDITIONAL_JUMP)  ; LAB_00604bc3
    TEST byte ptr [ESI + 0x10],0x2      ; 006049c2
    JNZ 0x00604c00                      ; 006049c6
        ;   XREF to: 00604c00 (CONDITIONAL_JUMP)  ; LAB_00604c00
    PUSH ESI                            ; 006049cc
    PUSH EAX                            ; 006049cd
    CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c ; 006049ce
        ;   XREF to: 0060493c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c(int character, scanf_state_t * state)
    ADD ESP,0x8                         ; 006049d3
    JMP 0x00604c00                      ; 006049d6
        ;   XREF to: 00604c00 (UNCONDITIONAL_JUMP)  ; LAB_00604c00
    PUSH ESI                            ; 006049db
        ;   Label: LAB_006049db
    MOV EBX,dword ptr [ESP + 0x20]      ; 006049dc
    PUSH EBX                            ; 006049e0
    CALL crt_stdio.c_parse_format_spec_FUN_00604c1c ; 006049e1
        ;   XREF to: 00604c1c (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_parse_format_spec_FUN_00604c1c(char * format_ptr, scanf_state_t * state)
    ADD ESP,0x8                         ; 006049e6
    XOR EBX,EBX                         ; 006049e9
    MOV dword ptr [ESP + 0x1c],EAX      ; 006049eb
    MOV BL,byte ptr [EAX]               ; 006049ef
    TEST EBX,EBX                        ; 006049f1
    JZ 0x006049fa                       ; 006049f3
        ;   XREF to: 006049fa (CONDITIONAL_JUMP)  ; LAB_006049fa
    INC EAX                             ; 006049f5
    MOV dword ptr [ESP + 0x1c],EAX      ; 006049f6
    CMP EBX,0x64                        ; 006049fa
        ;   Label: LAB_006049fa
    JC 0x00604a6d                       ; 006049fd
        ;   XREF to: 00604a6d (CONDITIONAL_JUMP)  ; LAB_00604a6d
    JBE 0x00604ad5                      ; 006049ff
        ;   XREF to: 00604ad5 (CONDITIONAL_JUMP)  ; LAB_00604ad5
    CMP EBX,0x6f                        ; 00604a05
    JC 0x00604a46                       ; 00604a08
        ;   XREF to: 00604a46 (CONDITIONAL_JUMP)  ; LAB_00604a46
    JBE 0x00604b03                      ; 00604a0a
        ;   XREF to: 00604b03 (CONDITIONAL_JUMP)  ; LAB_00604b03
    CMP EBX,0x73                        ; 00604a10
    JC 0x00604a38                       ; 00604a13
        ;   XREF to: 00604a38 (CONDITIONAL_JUMP)  ; LAB_00604a38
    JBE 0x00604b4e                      ; 00604a15
        ;   XREF to: 00604b4e (CONDITIONAL_JUMP)  ; LAB_00604b4e
    CMP EBX,0x75                        ; 00604a1b
    JC 0x00604bc4                       ; 00604a1e
        ;   XREF to: 00604bc4 (CONDITIONAL_JUMP)  ; LAB_00604bc4
    JBE 0x00604b17                      ; 00604a24
        ;   XREF to: 00604b17 (CONDITIONAL_JUMP)  ; LAB_00604b17
    CMP EBX,0x78                        ; 00604a2a
    JZ 0x00604b2b                       ; 00604a2d
        ;   XREF to: 00604b2b (CONDITIONAL_JUMP)  ; LAB_00604b2b
    JMP 0x00604bc4                      ; 00604a33
        ;   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)  ; LAB_00604bc4
    CMP EBX,0x70                        ; 00604a38
        ;   Label: LAB_00604a38
    JZ 0x00604b2b                       ; 00604a3b
        ;   XREF to: 00604b2b (CONDITIONAL_JUMP)  ; LAB_00604b2b
    JMP 0x00604bc4                      ; 00604a41
        ;   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)  ; LAB_00604bc4
    CMP EBX,0x69                        ; 00604a46
        ;   Label: LAB_00604a46
    JC 0x00604a5f                       ; 00604a49
        ;   XREF to: 00604a5f (CONDITIONAL_JUMP)  ; LAB_00604a5f
    JBE 0x00604aec                      ; 00604a4b
        ;   XREF to: 00604aec (CONDITIONAL_JUMP)  ; LAB_00604aec
    CMP EBX,0x6e                        ; 00604a51
    JZ 0x00604b93                       ; 00604a54
        ;   XREF to: 00604b93 (CONDITIONAL_JUMP)  ; LAB_00604b93
    JMP 0x00604bc4                      ; 00604a5a
        ;   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)  ; LAB_00604bc4
    CMP EBX,0x67                        ; 00604a5f
        ;   Label: LAB_00604a5f
    JBE 0x00604b3f                      ; 00604a62
        ;   XREF to: 00604b3f (CONDITIONAL_JUMP)  ; LAB_00604b3f
    JMP 0x00604bc4                      ; 00604a68
        ;   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)  ; LAB_00604bc4
    CMP EBX,0x47                        ; 00604a6d
        ;   Label: LAB_00604a6d
    JC 0x00604aae                       ; 00604a70
        ;   XREF to: 00604aae (CONDITIONAL_JUMP)  ; LAB_00604aae
    JBE 0x00604b3f                      ; 00604a72
        ;   XREF to: 00604b3f (CONDITIONAL_JUMP)  ; LAB_00604b3f
    CMP EBX,0x58                        ; 00604a78
    JC 0x00604aa0                       ; 00604a7b
        ;   XREF to: 00604aa0 (CONDITIONAL_JUMP)  ; LAB_00604aa0
    JBE 0x00604b2b                      ; 00604a7d
        ;   XREF to: 00604b2b (CONDITIONAL_JUMP)  ; LAB_00604b2b
    CMP EBX,0x5b                        ; 00604a83
    JC 0x00604bc4                       ; 00604a86
        ;   XREF to: 00604bc4 (CONDITIONAL_JUMP)  ; LAB_00604bc4
    JBE 0x00604b59                      ; 00604a8c
        ;   XREF to: 00604b59 (CONDITIONAL_JUMP)  ; LAB_00604b59
    CMP EBX,0x63                        ; 00604a92
    JZ 0x00604b72                       ; 00604a95
        ;   XREF to: 00604b72 (CONDITIONAL_JUMP)  ; LAB_00604b72
    JMP 0x00604bc4                      ; 00604a9b
        ;   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)  ; LAB_00604bc4
    CMP EBX,0x53                        ; 00604aa0
        ;   Label: LAB_00604aa0
    JZ 0x00604b4a                       ; 00604aa3
        ;   XREF to: 00604b4a (CONDITIONAL_JUMP)  ; LAB_00604b4a
    JMP 0x00604bc4                      ; 00604aa9
        ;   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)  ; LAB_00604bc4
    CMP EBX,0x43                        ; 00604aae
        ;   Label: LAB_00604aae
    JC 0x00604ac7                       ; 00604ab1
        ;   XREF to: 00604ac7 (CONDITIONAL_JUMP)  ; LAB_00604ac7
    JBE 0x00604b6e                      ; 00604ab3
        ;   XREF to: 00604b6e (CONDITIONAL_JUMP)  ; LAB_00604b6e
    CMP EBX,0x45                        ; 00604ab9
    JZ 0x00604b3f                       ; 00604abc
        ;   XREF to: 00604b3f (CONDITIONAL_JUMP)  ; LAB_00604b3f
    JMP 0x00604bc4                      ; 00604ac2
        ;   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)  ; LAB_00604bc4
    CMP EBX,0x25                        ; 00604ac7
        ;   Label: LAB_00604ac7
    JZ 0x00604ba4                       ; 00604aca
        ;   XREF to: 00604ba4 (CONDITIONAL_JUMP)  ; LAB_00604ba4
    JMP 0x00604bc4                      ; 00604ad0
        ;   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)  ; LAB_00604bc4
    PUSH 0x1                            ; 00604ad5
        ;   Label: LAB_00604ad5
    PUSH 0xa                            ; 00604ad7
    LEA EAX,[ESP + 0x8]                 ; 00604ad9
    PUSH EAX                            ; 00604add
    PUSH ESI                            ; 00604ade
    CALL crt_stdio.c_scanf_integer_FUN_0060547c ; 00604adf
        ;   XREF to: 0060547c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_integer_FUN_0060547c(scanf_state_t * state, va_list_t * args, int base, int is_signed)
    ADD ESP,0x10                        ; 00604ae4
    JMP 0x00604b7e                      ; 00604ae7
        ;   XREF to: 00604b7e (UNCONDITIONAL_JUMP)  ; LAB_00604b7e
    PUSH 0x1                            ; 00604aec
        ;   Label: LAB_00604aec
    PUSH 0x0                            ; 00604aee
    LEA EAX,[ESP + 0x8]                 ; 00604af0
    PUSH EAX                            ; 00604af4
    PUSH ESI                            ; 00604af5
    CALL crt_stdio.c_scanf_integer_FUN_0060547c ; 00604af6
        ;   XREF to: 0060547c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_integer_FUN_0060547c(scanf_state_t * state, va_list_t * args, int base, int is_signed)
    ADD ESP,0x10                        ; 00604afb
    JMP 0x00604b7e                      ; 00604afe
        ;   XREF to: 00604b7e (UNCONDITIONAL_JUMP)  ; LAB_00604b7e
    PUSH 0x1                            ; 00604b03
        ;   Label: LAB_00604b03
    PUSH 0x8                            ; 00604b05
    LEA EAX,[ESP + 0x8]                 ; 00604b07
    PUSH EAX                            ; 00604b0b
    PUSH ESI                            ; 00604b0c
    CALL crt_stdio.c_scanf_integer_FUN_0060547c ; 00604b0d
        ;   XREF to: 0060547c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_integer_FUN_0060547c(scanf_state_t * state, va_list_t * args, int base, int is_signed)
    ADD ESP,0x10                        ; 00604b12
    JMP 0x00604b7e                      ; 00604b15
        ;   XREF to: 00604b7e (UNCONDITIONAL_JUMP)  ; LAB_00604b7e
    PUSH 0x0                            ; 00604b17
        ;   Label: LAB_00604b17
    PUSH 0xa                            ; 00604b19
    LEA EAX,[ESP + 0x8]                 ; 00604b1b
    PUSH EAX                            ; 00604b1f
    PUSH ESI                            ; 00604b20
    CALL crt_stdio.c_scanf_integer_FUN_0060547c ; 00604b21
        ;   XREF to: 0060547c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_integer_FUN_0060547c(scanf_state_t * state, va_list_t * args, int base, int is_signed)
    ADD ESP,0x10                        ; 00604b26
    JMP 0x00604b7e                      ; 00604b29
        ;   XREF to: 00604b7e (UNCONDITIONAL_JUMP)  ; LAB_00604b7e
    PUSH 0x1                            ; 00604b2b
        ;   Label: LAB_00604b2b
    PUSH 0x10                           ; 00604b2d
    LEA EAX,[ESP + 0x8]                 ; 00604b2f
    PUSH EAX                            ; 00604b33
    PUSH ESI                            ; 00604b34
    CALL crt_stdio.c_scanf_integer_FUN_0060547c ; 00604b35
        ;   XREF to: 0060547c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_integer_FUN_0060547c(scanf_state_t * state, va_list_t * args, int base, int is_signed)
    ADD ESP,0x10                        ; 00604b3a
    JMP 0x00604b7e                      ; 00604b3d
        ;   XREF to: 00604b7e (UNCONDITIONAL_JUMP)  ; LAB_00604b7e
    MOV EAX,ESP                         ; 00604b3f
        ;   Label: LAB_00604b3f
    PUSH EAX                            ; 00604b41
    PUSH ESI                            ; 00604b42
    CALL crt_stdio.c_scanf_float_FUN_00605178 ; 00604b43
        ;   XREF to: 00605178 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_float_FUN_00605178(scanf_state_t * state, va_list_t * args)
    JMP 0x00604b7b                      ; 00604b48
        ;   XREF to: 00604b7b (UNCONDITIONAL_JUMP)  ; LAB_00604b7b
    OR byte ptr [ESI + 0x10],0x20       ; 00604b4a
        ;   Label: LAB_00604b4a
    MOV EAX,ESP                         ; 00604b4e
        ;   Label: LAB_00604b4e
    PUSH EAX                            ; 00604b50
    PUSH ESI                            ; 00604b51
    CALL crt_stdio.c_scanf_string_FUN_00604e4c ; 00604b52
        ;   XREF to: 00604e4c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_string_FUN_00604e4c(scanf_state_t * state, va_list_t * args)
    JMP 0x00604b7b                      ; 00604b57
        ;   XREF to: 00604b7b (UNCONDITIONAL_JUMP)  ; LAB_00604b7b
    LEA EAX,[ESP + 0x1c]                ; 00604b59
        ;   Label: LAB_00604b59
    PUSH EAX                            ; 00604b5d
    LEA EAX,[ESP + 0x4]                 ; 00604b5e
    PUSH EAX                            ; 00604b62
    PUSH ESI                            ; 00604b63
    CALL crt_stdio.c_scanf_scanset_FUN_00605064 ; 00604b64
        ;   XREF to: 00605064 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_scanset_FUN_00605064(scanf_state_t * state, va_list_t * args, char * * format_ptr)
    ADD ESP,0xc                         ; 00604b69
    JMP 0x00604b7e                      ; 00604b6c
        ;   XREF to: 00604b7e (UNCONDITIONAL_JUMP)  ; LAB_00604b7e
    OR byte ptr [ESI + 0x10],0x20       ; 00604b6e
        ;   Label: LAB_00604b6e
    MOV EAX,ESP                         ; 00604b72
        ;   Label: LAB_00604b72
    PUSH EAX                            ; 00604b74
    PUSH ESI                            ; 00604b75
    CALL crt_stdio.c_scanf_char_FUN_00604d54 ; 00604b76
        ;   XREF to: 00604d54 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_char_FUN_00604d54(scanf_state_t * state, va_list_t * args)
    ADD ESP,0x8                         ; 00604b7b
        ;   Label: LAB_00604b7b
    MOV EBX,EAX                         ; 00604b7e
        ;   Label: LAB_00604b7e
    TEST EBX,EBX                        ; 00604b80
    JLE 0x00604c00                      ; 00604b82
        ;   XREF to: 00604c00 (CONDITIONAL_JUMP)  ; LAB_00604c00
    ADD EDI,EBX                         ; 00604b88
    TEST byte ptr [ESI + 0x10],0x1      ; 00604b8a
    JZ 0x00604bc4                       ; 00604b8e
        ;   XREF to: 00604bc4 (CONDITIONAL_JUMP)  ; LAB_00604bc4
    INC EBP                             ; 00604b90
    JMP 0x00604bc4                      ; 00604b91
        ;   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)  ; LAB_00604bc4
    PUSH EDI                            ; 00604b93
        ;   Label: LAB_00604b93
    LEA EAX,[ESP + 0x4]                 ; 00604b94
    PUSH EAX                            ; 00604b98
    PUSH ESI                            ; 00604b99
    CALL crt_stdio.c_store_count_FUN_00604fb0 ; 00604b9a
        ;   XREF to: 00604fb0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_store_count_FUN_00604fb0(scanf_state_t * state, va_list_t * args, int chars_consumed)
    ADD ESP,0xc                         ; 00604b9f
    JMP 0x00604bc4                      ; 00604ba2
        ;   XREF to: 00604bc4 (UNCONDITIONAL_JUMP)  ; LAB_00604bc4
    PUSH ESI                            ; 00604ba4
        ;   Label: LAB_00604ba4
    CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930 ; 00604ba5
        ;   XREF to: 00604930 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
    ADD ESP,0x4                         ; 00604baa
    CMP EAX,EBX                         ; 00604bad
    JZ 0x00604bc3                       ; 00604baf
        ;   XREF to: 00604bc3 (CONDITIONAL_JUMP)  ; LAB_00604bc3
    TEST byte ptr [ESI + 0x10],0x2      ; 00604bb1
    JNZ 0x00604c00                      ; 00604bb5
        ;   XREF to: 00604c00 (CONDITIONAL_JUMP)  ; LAB_00604c00
    PUSH ESI                            ; 00604bb7
    PUSH EAX                            ; 00604bb8
    CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c ; 00604bb9
        ;   XREF to: 0060493c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c(int character, scanf_state_t * state)
    ADD ESP,0x8                         ; 00604bbe
    JMP 0x00604c00                      ; 00604bc1
        ;   XREF to: 00604c00 (UNCONDITIONAL_JUMP)  ; LAB_00604c00
    INC EDI                             ; 00604bc3
        ;   Label: LAB_00604bc3
    TEST byte ptr [ESI + 0x10],0x2      ; 00604bc4
        ;   Label: LAB_00604bc4
    JZ 0x00604971                       ; 00604bc8
        ;   XREF to: 00604971 (CONDITIONAL_JUMP)  ; LAB_00604971
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00604bce
    CMP byte ptr [EAX],0x25             ; 00604bd2
    JNZ 0x00604c00                      ; 00604bd5
        ;   XREF to: 00604c00 (CONDITIONAL_JUMP)  ; LAB_00604c00
    PUSH ESI                            ; 00604bd7
    LEA ECX,[EAX + 0x1]                 ; 00604bd8
    PUSH ECX                            ; 00604bdb
    MOV dword ptr [ESP + 0x24],ECX      ; 00604bdc
    CALL crt_stdio.c_parse_format_spec_FUN_00604c1c ; 00604be0
        ;   XREF to: 00604c1c (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_parse_format_spec_FUN_00604c1c(char * format_ptr, scanf_state_t * state)
    ADD ESP,0x8                         ; 00604be5
    MOV dword ptr [ESP + 0x1c],EAX      ; 00604be8
    CMP byte ptr [EAX],0x6e             ; 00604bec
    JNZ 0x00604c00                      ; 00604bef
        ;   XREF to: 00604c00 (CONDITIONAL_JUMP)  ; LAB_00604c00
    PUSH EDI                            ; 00604bf1
    LEA EAX,[ESP + 0x4]                 ; 00604bf2
    PUSH EAX                            ; 00604bf6
    PUSH ESI                            ; 00604bf7
    CALL crt_stdio.c_store_count_FUN_00604fb0 ; 00604bf8
        ;   XREF to: 00604fb0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_store_count_FUN_00604fb0(scanf_state_t * state, va_list_t * args, int chars_consumed)
    ADD ESP,0xc                         ; 00604bfd
    TEST EBP,EBP                        ; 00604c00
        ;   Label: LAB_00604c00
    JNZ 0x00604c11                      ; 00604c02
        ;   XREF to: 00604c11 (CONDITIONAL_JUMP)  ; LAB_00604c11
    TEST byte ptr [ESI + 0x10],0x2      ; 00604c04
    JZ 0x00604c11                       ; 00604c08
        ;   XREF to: 00604c11 (CONDITIONAL_JUMP)  ; LAB_00604c11
    MOV EAX,0xffffffff                  ; 00604c0a
    JMP 0x00604c13                      ; 00604c0f
        ;   XREF to: 00604c13 (UNCONDITIONAL_JUMP)  ; LAB_00604c13
    MOV EAX,EBP                         ; 00604c11
        ;   Label: LAB_00604c11
    ADD ESP,0x4                         ; 00604c13
        ;   Label: LAB_00604c13
    POP EBP                             ; 00604c16
    POP EDI                             ; 00604c17
    POP ESI                             ; 00604c18
    POP EBX                             ; 00604c19
    RET                                 ; 00604c1a

