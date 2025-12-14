; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_scanf_string_FUN_00604e4c(scanf_state_t * state, va_list_t * args)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
; va_list_t *      Stack[0x8]:4   args
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x1b]:1  local_1b
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   crt_stdio.c_doscan_FUN_00604950 at 00604b52
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; Called Functions:
;   crt_locale.c_mbtowc_FUN_0060b1c0
;   crt_stdio.c_scanf_getc_with_width_FUN_00605918
;   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
;   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00604e4c
        ;   Label: crt_stdio.c_scanf_string_FUN_00604e4c
    PUSH ESI                            ; 00604e4d
    PUSH EDI                            ; 00604e4e
    PUSH ES                             ; 00604e4f
    PUSH EBP                            ; 00604e50
    SUB ESP,0xc                         ; 00604e51
    MOV ESI,dword ptr [ESP + 0x24]      ; 00604e54
    MOV EAX,dword ptr [ESP + 0x28]      ; 00604e58
    MOV DL,byte ptr [ESI + 0x10]        ; 00604e5c
    TEST DL,0x20                        ; 00604e5f
    JZ 0x00604e6b                       ; 00604e62
        ;   XREF to: 00604e6b (CONDITIONAL_JUMP)  ; LAB_00604e6b
    MOV byte ptr [ESP + 0x8],0x2        ; 00604e64
    JMP 0x00604e73                      ; 00604e69
        ;   XREF to: 00604e73 (UNCONDITIONAL_JUMP)  ; LAB_00604e73
    TEST DL,0x10                        ; 00604e6b
        ;   Label: LAB_00604e6b
    MOV byte ptr [ESP + 0x8],0x1        ; 00604e6e
    MOV CH,byte ptr [ESI + 0x10]        ; 00604e73
        ;   Label: LAB_00604e73
    TEST CH,0x1                         ; 00604e76
    JZ 0x00604eaf                       ; 00604e79
        ;   XREF to: 00604eaf (CONDITIONAL_JUMP)  ; LAB_00604eaf
    TEST CH,0x4                         ; 00604e7b
    JZ 0x00604e8c                       ; 00604e7e
        ;   XREF to: 00604e8c (CONDITIONAL_JUMP)  ; LAB_00604e8c
    MOV ECX,dword ptr [EAX]             ; 00604e80
    ADD ECX,0x8                         ; 00604e82
    MOV dword ptr [EAX],ECX             ; 00604e85
    LES EDI,[ECX + -0x8]                ; 00604e87
    JMP 0x00604eaf                      ; 00604e8a
        ;   XREF to: 00604eaf (UNCONDITIONAL_JUMP)  ; LAB_00604eaf
    TEST CH,0x8                         ; 00604e8c
        ;   Label: LAB_00604e8c
    JZ 0x00604ea1                       ; 00604e8f
        ;   XREF to: 00604ea1 (CONDITIONAL_JUMP)  ; LAB_00604ea1
    MOV EBX,dword ptr [EAX]             ; 00604e91
    ADD EBX,0x4                         ; 00604e93
    MOV dword ptr [EAX],EBX             ; 00604e96
    MOV AX,DS                           ; 00604e98
    MOV ES,AX                           ; 00604e9a
    MOV EDI,dword ptr [EBX + -0x4]      ; 00604e9c
    JMP 0x00604eaf                      ; 00604e9f
        ;   XREF to: 00604eaf (UNCONDITIONAL_JUMP)  ; LAB_00604eaf
    MOV EDX,dword ptr [EAX]             ; 00604ea1
        ;   Label: LAB_00604ea1
    ADD EDX,0x4                         ; 00604ea3
    MOV dword ptr [EAX],EDX             ; 00604ea6
    MOV AX,DS                           ; 00604ea8
    MOV ES,AX                           ; 00604eaa
    MOV EDI,dword ptr [EDX + -0x4]      ; 00604eac
    XOR EBP,EBP                         ; 00604eaf
        ;   Label: LAB_00604eaf
    PUSH ESI                            ; 00604eb1
        ;   Label: LAB_00604eb1
    CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930 ; 00604eb2
        ;   XREF to: 00604930 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
    ADD ESP,0x4                         ; 00604eb7
    MOV EBX,EAX                         ; 00604eba
    INC AL                              ; 00604ebc
    AND EAX,0xff                        ; 00604ebe
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 00604ec3 | g_CharacterClassificationTable
    JZ 0x00604ecf                       ; 00604eca
        ;   XREF to: 00604ecf (CONDITIONAL_JUMP)  ; LAB_00604ecf
    INC EBP                             ; 00604ecc
    JMP 0x00604eb1                      ; 00604ecd
        ;   XREF to: 00604eb1 (UNCONDITIONAL_JUMP)  ; LAB_00604eb1
    TEST byte ptr [ESI + 0x10],0x2      ; 00604ecf
        ;   Label: LAB_00604ecf
    JZ 0x00604edc                       ; 00604ed3
        ;   XREF to: 00604edc (CONDITIONAL_JUMP)  ; LAB_00604edc
    XOR EBP,EBP                         ; 00604ed5
    JMP 0x00604f88                      ; 00604ed7
        ;   XREF to: 00604f88 (UNCONDITIONAL_JUMP)  ; LAB_00604f88
    MOV EAX,dword ptr [ESI + 0xc]       ; 00604edc
        ;   Label: LAB_00604edc
    LEA EDX,[EAX + -0x1]                ; 00604edf
    MOV dword ptr [ESI + 0xc],EDX       ; 00604ee2
    TEST EAX,EAX                        ; 00604ee5
    JZ 0x00604f7e                       ; 00604ee7
        ;   XREF to: 00604f7e (CONDITIONAL_JUMP)  ; LAB_00604f7e
    MOV AL,byte ptr [ESI + 0x10]        ; 00604eed
        ;   Label: LAB_00604eed
    INC EBP                             ; 00604ef0
    TEST AL,0x1                         ; 00604ef1
    JZ 0x00604f5a                       ; 00604ef3
        ;   XREF to: 00604f5a (CONDITIONAL_JUMP)  ; LAB_00604f5a
    CMP byte ptr [ESP + 0x8],0x1        ; 00604ef5
    JNZ 0x00604f01                      ; 00604efa
        ;   XREF to: 00604f01 (CONDITIONAL_JUMP)  ; LAB_00604f01
    MOV byte ptr ES:[EDI],BL            ; 00604efc
    JMP 0x00604f52                      ; 00604eff
        ;   XREF to: 00604f52 (UNCONDITIONAL_JUMP)  ; LAB_00604f52
    MOV EAX,[0x03f9c020]                ; 00604f01 | g_MultibyteLocaleActive
        ;   Label: LAB_00604f01
    MOV byte ptr [ESP + 0x4],BL         ; 00604f06
    TEST EAX,EAX                        ; 00604f0a
    JZ 0x00604f2e                       ; 00604f0c
        ;   XREF to: 00604f2e (CONDITIONAL_JUMP)  ; LAB_00604f2e
    XOR EAX,EAX                         ; 00604f0e
    MOV AL,BL                           ; 00604f10
    MOV AL,byte ptr [EAX + 0x3f9c031]   ; 00604f12 | g_LeadByteTable
    AND AL,0x1                          ; 00604f18
    AND EAX,0xff                        ; 00604f1a
    JZ 0x00604f2e                       ; 00604f1f
        ;   XREF to: 00604f2e (CONDITIONAL_JUMP)  ; LAB_00604f2e
    PUSH ESI                            ; 00604f21
    CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930 ; 00604f22
        ;   XREF to: 00604930 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
    ADD ESP,0x4                         ; 00604f27
    MOV byte ptr [ESP + 0x5],AL         ; 00604f2a
    PUSH 0x2                            ; 00604f2e
        ;   Label: LAB_00604f2e
    LEA EAX,[ESP + 0x8]                 ; 00604f30
    PUSH EAX                            ; 00604f34
    LEA EAX,[ESP + 0x8]                 ; 00604f35
    PUSH EAX                            ; 00604f39
    CALL crt_locale.c_mbtowc_FUN_0060b1c0 ; 00604f3a
        ;   XREF to: 0060b1c0 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mbtowc_FUN_0060b1c0(wchar_t * wide_char, char * mb_string, SIZE_T max_bytes)
    ADD ESP,0xc                         ; 00604f3f
    CMP EAX,-0x1                        ; 00604f42
    JNZ 0x00604f4b                      ; 00604f45
        ;   XREF to: 00604f4b (CONDITIONAL_JUMP)  ; LAB_00604f4b
    XOR EAX,EAX                         ; 00604f47
    JMP 0x00604fa7                      ; 00604f49
        ;   XREF to: 00604fa7 (UNCONDITIONAL_JUMP)  ; LAB_00604fa7
    MOV EAX,dword ptr [ESP]             ; 00604f4b
        ;   Label: LAB_00604f4b
    MOV word ptr ES:[EDI],AX            ; 00604f4e
    XOR EAX,EAX                         ; 00604f52
        ;   Label: LAB_00604f52
    MOV AL,byte ptr [ESP + 0x8]         ; 00604f54
    ADD EDI,EAX                         ; 00604f58
    PUSH ESI                            ; 00604f5a
        ;   Label: LAB_00604f5a
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 00604f5b
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
    ADD ESP,0x4                         ; 00604f60
    MOV EBX,EAX                         ; 00604f63
    CMP EAX,-0x1                        ; 00604f65
    JZ 0x00604f88                       ; 00604f68
        ;   XREF to: 00604f88 (CONDITIONAL_JUMP)  ; LAB_00604f88
    INC AL                              ; 00604f6a
    AND EAX,0xff                        ; 00604f6c
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 00604f71 | g_CharacterClassificationTable
    JZ 0x00604eed                       ; 00604f78
        ;   XREF to: 00604eed (CONDITIONAL_JUMP)  ; LAB_00604eed
    PUSH ESI                            ; 00604f7e
        ;   Label: LAB_00604f7e
    PUSH EBX                            ; 00604f7f
    CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c ; 00604f80
        ;   XREF to: 0060493c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c(int character, scanf_state_t * state)
    ADD ESP,0x8                         ; 00604f85
    TEST byte ptr [ESI + 0x10],0x1      ; 00604f88
        ;   Label: LAB_00604f88
    JZ 0x00604fa5                       ; 00604f8c
        ;   XREF to: 00604fa5 (CONDITIONAL_JUMP)  ; LAB_00604fa5
    TEST EBP,EBP                        ; 00604f8e
    JLE 0x00604fa5                      ; 00604f90
        ;   XREF to: 00604fa5 (CONDITIONAL_JUMP)  ; LAB_00604fa5
    CMP byte ptr [ESP + 0x8],0x1        ; 00604f92
    JNZ 0x00604f9f                      ; 00604f97
        ;   XREF to: 00604f9f (CONDITIONAL_JUMP)  ; LAB_00604f9f
    MOV byte ptr ES:[EDI],0x0           ; 00604f99
    JMP 0x00604fa5                      ; 00604f9d
        ;   XREF to: 00604fa5 (UNCONDITIONAL_JUMP)  ; LAB_00604fa5
    MOV word ptr ES:[EDI],0x0           ; 00604f9f
        ;   Label: LAB_00604f9f
    MOV EAX,EBP                         ; 00604fa5
        ;   Label: LAB_00604fa5
    ADD ESP,0xc                         ; 00604fa7
        ;   Label: LAB_00604fa7
    POP EBP                             ; 00604faa
    POP ES                              ; 00604fab
    POP EDI                             ; 00604fac
    POP ESI                             ; 00604fad
    POP EBX                             ; 00604fae
    RET                                 ; 00604faf

