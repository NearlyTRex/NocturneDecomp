; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c_wcstombs_FUN_0060c0c0(char *dest,wchar_t *src,SIZE_T dest_size)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; wchar_t *        Stack[0x8]:4   src
; SIZE_T           Stack[0xc]:4   dest_size
; Local Variables:
; char[4]          Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_time.c_tzset_FUN_006072f8 at 006072a0
;
; Called Functions:
;   crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c0c0
        ;   Label: crt_string.c_wcstombs_FUN_0060c0c0
    PUSH ESI                            ; 0060c0c1
    PUSH EDI                            ; 0060c0c2
    PUSH EBP                            ; 0060c0c3
    SUB ESP,0x4                         ; 0060c0c4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0060c0c7
    MOV EDX,dword ptr [ESP + 0x18]      ; 0060c0cb
    XOR EBP,EBP                         ; 0060c0cf
    TEST EDX,EDX                        ; 0060c0d1
    JZ 0x0060c150                       ; 0060c0d3
        ;   XREF to: 0060c150 (CONDITIONAL_JUMP)  ; LAB_0060c150
    CMP dword ptr [ESP + 0x20],0x0      ; 0060c0d9
        ;   Label: LAB_0060c0d9
    JBE 0x0060c177                      ; 0060c0de
        ;   XREF to: 0060c177 (CONDITIONAL_JUMP)  ; LAB_0060c177
    MOV CX,word ptr [EBX]               ; 0060c0e4
    TEST CX,CX                          ; 0060c0e7
    JZ 0x0060c112                       ; 0060c0ea
        ;   XREF to: 0060c112 (CONDITIONAL_JUMP)  ; LAB_0060c112
    XOR EAX,EAX                         ; 0060c0ec
    MOV AX,CX                           ; 0060c0ee
    PUSH EAX                            ; 0060c0f1
    LEA EAX,[ESP + 0x4]                 ; 0060c0f2
    PUSH EAX                            ; 0060c0f6
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0 ; 0060c0f7
        ;   XREF to: 0060acf0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char, char * output_buffer)
    MOV EDX,EAX                         ; 0060c0fc
    ADD ESP,0x8                         ; 0060c0fe
    CMP EAX,-0x1                        ; 0060c101
    JZ 0x0060c179                       ; 0060c104
        ;   XREF to: 0060c179 (CONDITIONAL_JUMP)  ; LAB_0060c179
    CMP EAX,dword ptr [ESP + 0x20]      ; 0060c10a
    JA 0x0060c177                       ; 0060c10e
        ;   XREF to: 0060c177 (CONDITIONAL_JUMP)  ; LAB_0060c177
    JMP 0x0060c11b                      ; 0060c110
        ;   XREF to: 0060c11b (UNCONDITIONAL_JUMP)  ; LAB_0060c11b
    MOV EAX,dword ptr [ESP + 0x18]      ; 0060c112
        ;   Label: LAB_0060c112
    MOV byte ptr [EAX],0x0              ; 0060c116
    JMP 0x0060c177                      ; 0060c119
        ;   XREF to: 0060c177 (UNCONDITIONAL_JUMP)  ; LAB_0060c177
    MOV ESI,ESP                         ; 0060c11b
        ;   Label: LAB_0060c11b
    MOV EDI,dword ptr [ESP + 0x18]      ; 0060c11d
    MOV ECX,EAX                         ; 0060c121
    PUSH ES                             ; 0060c123
    MOV AX,DS                           ; 0060c124
    MOV ES,AX                           ; 0060c126
    PUSH EDI                            ; 0060c128
    MOV EAX,ECX                         ; 0060c129
    SHR ECX,0x2                         ; 0060c12b
    MOVSD.REP ES:EDI,ESI                ; 0060c12e
    MOV CL,AL                           ; 0060c130
    AND CL,0x3                          ; 0060c132
    MOVSB.REP ES:EDI,ESI                ; 0060c135
    POP EDI                             ; 0060c137
    POP ES                              ; 0060c138
    ADD EBX,0x2                         ; 0060c139
    ADD EBP,EDX                         ; 0060c13c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0060c13e
    ADD EDI,EDX                         ; 0060c142
    SUB EAX,EDX                         ; 0060c144
    MOV dword ptr [ESP + 0x18],EDI      ; 0060c146
    MOV dword ptr [ESP + 0x20],EAX      ; 0060c14a
    JMP 0x0060c0d9                      ; 0060c14e
        ;   XREF to: 0060c0d9 (UNCONDITIONAL_JUMP)  ; LAB_0060c0d9
    MOV DX,word ptr [EBX]               ; 0060c150
        ;   Label: LAB_0060c150
    TEST DX,DX                          ; 0060c153
    JZ 0x0060c177                       ; 0060c156
        ;   XREF to: 0060c177 (CONDITIONAL_JUMP)  ; LAB_0060c177
    XOR EAX,EAX                         ; 0060c158
    MOV AX,DX                           ; 0060c15a
    PUSH EAX                            ; 0060c15d
    LEA EAX,[ESP + 0x4]                 ; 0060c15e
    PUSH EAX                            ; 0060c162
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0 ; 0060c163
        ;   XREF to: 0060acf0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char, char * output_buffer)
    ADD ESP,0x8                         ; 0060c168
    CMP EAX,-0x1                        ; 0060c16b
    JZ 0x0060c179                       ; 0060c16e
        ;   XREF to: 0060c179 (CONDITIONAL_JUMP)  ; LAB_0060c179
    ADD EBX,0x2                         ; 0060c170
    ADD EBP,EAX                         ; 0060c173
    JMP 0x0060c150                      ; 0060c175
        ;   XREF to: 0060c150 (UNCONDITIONAL_JUMP)  ; LAB_0060c150
    MOV EAX,EBP                         ; 0060c177
        ;   Label: LAB_0060c177
    ADD ESP,0x4                         ; 0060c179
        ;   Label: LAB_0060c179
    POP EBP                             ; 0060c17c
    POP EDI                             ; 0060c17d
    POP ESI                             ; 0060c17e
    POP EBX                             ; 0060c17f
    RET                                 ; 0060c180

