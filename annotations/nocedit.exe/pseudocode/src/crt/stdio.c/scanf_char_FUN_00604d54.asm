; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdio_c_scanf_char_FUN_00604d54(scanf_state_t *state,va_list_t *args)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
; va_list_t *      Stack[0x8]:4   args
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x17]:1  local_17
;
; XREF[1]:
;   crt_stdio.c_doscan_FUN_00604950 at 00604b76
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; Called Functions:
;   crt_locale.c_mbtowc_FUN_0060b1c0
;   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00604d54
        ;   Label: crt_stdio.c_scanf_char_FUN_00604d54
    PUSH ESI                            ; 00604d55
    PUSH EDI                            ; 00604d56
    PUSH ES                             ; 00604d57
    PUSH EBP                            ; 00604d58
    SUB ESP,0x8                         ; 00604d59
    MOV ESI,dword ptr [ESP + 0x20]      ; 00604d5c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00604d60
    MOV DL,byte ptr [ESI + 0x10]        ; 00604d64
    TEST DL,0x1                         ; 00604d67
    JZ 0x00604da0                       ; 00604d6a
        ;   XREF to: 00604da0 (CONDITIONAL_JUMP)  ; LAB_00604da0
    TEST DL,0x4                         ; 00604d6c
    JZ 0x00604d7d                       ; 00604d6f
        ;   XREF to: 00604d7d (CONDITIONAL_JUMP)  ; LAB_00604d7d
    MOV ECX,dword ptr [EAX]             ; 00604d71
    ADD ECX,0x8                         ; 00604d73
    MOV dword ptr [EAX],ECX             ; 00604d76
    LES EBX,[ECX + -0x8]                ; 00604d78
    JMP 0x00604da0                      ; 00604d7b
        ;   XREF to: 00604da0 (UNCONDITIONAL_JUMP)  ; LAB_00604da0
    TEST DL,0x8                         ; 00604d7d
        ;   Label: LAB_00604d7d
    JZ 0x00604d92                       ; 00604d80
        ;   XREF to: 00604d92 (CONDITIONAL_JUMP)  ; LAB_00604d92
    MOV EBX,dword ptr [EAX]             ; 00604d82
    ADD EBX,0x4                         ; 00604d84
    MOV dword ptr [EAX],EBX             ; 00604d87
    MOV AX,DS                           ; 00604d89
    MOV ES,AX                           ; 00604d8b
    MOV EBX,dword ptr [EBX + -0x4]      ; 00604d8d
    JMP 0x00604da0                      ; 00604d90
        ;   XREF to: 00604da0 (UNCONDITIONAL_JUMP)  ; LAB_00604da0
    MOV EDX,dword ptr [EAX]             ; 00604d92
        ;   Label: LAB_00604d92
    ADD EDX,0x4                         ; 00604d94
    MOV dword ptr [EAX],EDX             ; 00604d97
    MOV AX,DS                           ; 00604d99
    MOV ES,AX                           ; 00604d9b
    MOV EBX,dword ptr [EDX + -0x4]      ; 00604d9d
    MOV EDI,dword ptr [ESI + 0xc]       ; 00604da0
        ;   Label: LAB_00604da0
    XOR EBP,EBP                         ; 00604da3
    CMP EDI,-0x1                        ; 00604da5
    JNZ 0x00604daf                      ; 00604da8
        ;   XREF to: 00604daf (CONDITIONAL_JUMP)  ; LAB_00604daf
    MOV EDI,0x1                         ; 00604daa
    TEST EDI,EDI                        ; 00604daf
        ;   Label: LAB_00604daf
    JLE 0x00604e3e                      ; 00604db1
        ;   XREF to: 00604e3e (CONDITIONAL_JUMP)  ; LAB_00604e3e
    PUSH ESI                            ; 00604db7
    CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930 ; 00604db8
        ;   XREF to: 00604930 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
    MOV CL,byte ptr [ESI + 0x10]        ; 00604dbd
    ADD ESP,0x4                         ; 00604dc0
    TEST CL,0x2                         ; 00604dc3
    JNZ 0x00604e3e                      ; 00604dc6
        ;   XREF to: 00604e3e (CONDITIONAL_JUMP)  ; LAB_00604e3e
    INC EBP                             ; 00604dcc
    DEC EDI                             ; 00604dcd
    TEST CL,0x1                         ; 00604dce
    JZ 0x00604daf                       ; 00604dd1
        ;   XREF to: 00604daf (CONDITIONAL_JUMP)  ; LAB_00604daf
    TEST CL,0x20                        ; 00604dd3
    JZ 0x00604e34                       ; 00604dd6
        ;   XREF to: 00604e34 (CONDITIONAL_JUMP)  ; LAB_00604e34
    MOV EDX,dword ptr [0x03f9c020]      ; 00604dd8 | g_MultibyteLocaleActive
    MOV byte ptr [ESP + 0x4],AL         ; 00604dde
    TEST EDX,EDX                        ; 00604de2
    JZ 0x00604e07                       ; 00604de4
        ;   XREF to: 00604e07 (CONDITIONAL_JUMP)  ; LAB_00604e07
    AND EAX,0xff                        ; 00604de6
    MOV AL,byte ptr [EAX + 0x3f9c031]   ; 00604deb | g_LeadByteTable
    AND AL,0x1                          ; 00604df1
    AND EAX,0xff                        ; 00604df3
    JZ 0x00604e07                       ; 00604df8
        ;   XREF to: 00604e07 (CONDITIONAL_JUMP)  ; LAB_00604e07
    PUSH ESI                            ; 00604dfa
    CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930 ; 00604dfb
        ;   XREF to: 00604930 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
    ADD ESP,0x4                         ; 00604e00
    MOV byte ptr [ESP + 0x5],AL         ; 00604e03
    PUSH 0x2                            ; 00604e07
        ;   Label: LAB_00604e07
    LEA EAX,[ESP + 0x8]                 ; 00604e09
    PUSH EAX                            ; 00604e0d
    LEA EAX,[ESP + 0x8]                 ; 00604e0e
    PUSH EAX                            ; 00604e12
    CALL crt_locale.c_mbtowc_FUN_0060b1c0 ; 00604e13
        ;   XREF to: 0060b1c0 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mbtowc_FUN_0060b1c0(wchar_t * wide_char, char * mb_string, SIZE_T max_bytes)
    ADD ESP,0xc                         ; 00604e18
    CMP EAX,-0x1                        ; 00604e1b
    JNZ 0x00604e24                      ; 00604e1e
        ;   XREF to: 00604e24 (CONDITIONAL_JUMP)  ; LAB_00604e24
    XOR EAX,EAX                         ; 00604e20
    JMP 0x00604e40                      ; 00604e22
        ;   XREF to: 00604e40 (UNCONDITIONAL_JUMP)  ; LAB_00604e40
    ADD EBX,0x2                         ; 00604e24
        ;   Label: LAB_00604e24
    MOV EAX,dword ptr [ESP]             ; 00604e27
    MOV word ptr ES:[EBX + -0x2],AX     ; 00604e2a
    JMP 0x00604daf                      ; 00604e2f
        ;   XREF to: 00604daf (UNCONDITIONAL_JUMP)  ; LAB_00604daf
    INC EBX                             ; 00604e34
        ;   Label: LAB_00604e34
    MOV byte ptr ES:[EBX + -0x1],AL     ; 00604e35
    JMP 0x00604daf                      ; 00604e39
        ;   XREF to: 00604daf (UNCONDITIONAL_JUMP)  ; LAB_00604daf
    MOV EAX,EBP                         ; 00604e3e
        ;   Label: LAB_00604e3e
    ADD ESP,0x8                         ; 00604e40
        ;   Label: LAB_00604e40
    POP EBP                             ; 00604e43
    POP ES                              ; 00604e44
    POP EDI                             ; 00604e45
    POP ESI                             ; 00604e46
    POP EBX                             ; 00604e47
    RET                                 ; 00604e48

