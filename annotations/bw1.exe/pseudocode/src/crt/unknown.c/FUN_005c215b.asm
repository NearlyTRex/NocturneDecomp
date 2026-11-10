; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005c215b(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c2106 at 005c210e
;   crt_unknown.c_FUN_005ca500 at 005ca54f
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 005c215b
        ;   Label: crt_unknown.c_FUN_005c215b
    JNZ 0x005c2179                      ; 005c215d
        ;   XREF to: 005c2179 (CONDITIONAL_JUMP)  ; LAB_005c2179
    DEC EBX                             ; 005c215f
    JZ 0x005c2178                       ; 005c2160
        ;   XREF to: 005c2178 (CONDITIONAL_JUMP)  ; LAB_005c2178
    INC EBX                             ; 005c2162
    CMP EBX,EDX                         ; 005c2163
    JA 0x005c2170                       ; 005c2165
        ;   XREF to: 005c2170 (CONDITIONAL_JUMP)  ; LAB_005c2170
    MOV ECX,EAX                         ; 005c2167
    MOV EAX,EDX                         ; 005c2169
    SUB EDX,EDX                         ; 005c216b
    DIV EBX                             ; 005c216d
    XCHG EAX,ECX                        ; 005c216f
    DIV EBX                             ; 005c2170
        ;   Label: LAB_005c2170
    MOV EBX,EDX                         ; 005c2172
    MOV EDX,ECX                         ; 005c2174
    SUB ECX,ECX                         ; 005c2176
    RET                                 ; 005c2178
        ;   Label: LAB_005c2178
    CMP ECX,EDX                         ; 005c2179
        ;   Label: LAB_005c2179
    JC 0x005c2199                       ; 005c217b
        ;   XREF to: 005c2199 (CONDITIONAL_JUMP)  ; LAB_005c2199
    JNZ 0x005c2191                      ; 005c217d
        ;   XREF to: 005c2191 (CONDITIONAL_JUMP)  ; LAB_005c2191
    CMP EBX,EAX                         ; 005c217f
    JA 0x005c2191                       ; 005c2181
        ;   XREF to: 005c2191 (CONDITIONAL_JUMP)  ; LAB_005c2191
    SUB EAX,EBX                         ; 005c2183
    MOV EBX,EAX                         ; 005c2185
    SUB ECX,ECX                         ; 005c2187
    SUB EDX,EDX                         ; 005c2189
    MOV EAX,0x1                         ; 005c218b
    RET                                 ; 005c2190
    SUB ECX,ECX                         ; 005c2191
        ;   Label: LAB_005c2191
    SUB EBX,EBX                         ; 005c2193
    XCHG EAX,EBX                        ; 005c2195
    XCHG EDX,ECX                        ; 005c2196
    RET                                 ; 005c2198
    PUSH EBP                            ; 005c2199
        ;   Label: LAB_005c2199
    PUSH ESI                            ; 005c219a
    PUSH EDI                            ; 005c219b
    SUB ESI,ESI                         ; 005c219c
    MOV EDI,ESI                         ; 005c219e
    MOV EBP,ESI                         ; 005c21a0
    ADD EBX,EBX                         ; 005c21a2
        ;   Label: LAB_005c21a2
    ADC ECX,ECX                         ; 005c21a4
    JC 0x005c21bb                       ; 005c21a6
        ;   XREF to: 005c21bb (CONDITIONAL_JUMP)  ; LAB_005c21bb
    INC EBP                             ; 005c21a8
    CMP ECX,EDX                         ; 005c21a9
    JC 0x005c21a2                       ; 005c21ab
        ;   XREF to: 005c21a2 (CONDITIONAL_JUMP)  ; LAB_005c21a2
    JA 0x005c21b3                       ; 005c21ad
        ;   XREF to: 005c21b3 (CONDITIONAL_JUMP)  ; LAB_005c21b3
    CMP EBX,EAX                         ; 005c21af
    JBE 0x005c21a2                      ; 005c21b1
        ;   XREF to: 005c21a2 (CONDITIONAL_JUMP)  ; LAB_005c21a2
    CLC                                 ; 005c21b3
        ;   Label: LAB_005c21b3
    ADC ESI,ESI                         ; 005c21b4
        ;   Label: LAB_005c21b4
    ADC EDI,EDI                         ; 005c21b6
    DEC EBP                             ; 005c21b8
    JS 0x005c21dd                       ; 005c21b9
        ;   XREF to: 005c21dd (CONDITIONAL_JUMP)  ; LAB_005c21dd
    RCR ECX,0x1                         ; 005c21bb
        ;   Label: LAB_005c21bb
    RCR EBX,0x1                         ; 005c21bd
    SUB EAX,EBX                         ; 005c21bf
    SBB EDX,ECX                         ; 005c21c1
    CMC                                 ; 005c21c3
    JC 0x005c21b4                       ; 005c21c4
        ;   XREF to: 005c21b4 (CONDITIONAL_JUMP)  ; LAB_005c21b4
    ADD ESI,ESI                         ; 005c21c6
        ;   Label: LAB_005c21c6
    ADC EDI,EDI                         ; 005c21c8
    DEC EBP                             ; 005c21ca
    JS 0x005c21d9                       ; 005c21cb
        ;   XREF to: 005c21d9 (CONDITIONAL_JUMP)  ; LAB_005c21d9
    SHR ECX,0x1                         ; 005c21cd
    RCR EBX,0x1                         ; 005c21cf
    ADD EAX,EBX                         ; 005c21d1
    ADC EDX,ECX                         ; 005c21d3
    JNC 0x005c21c6                      ; 005c21d5
        ;   XREF to: 005c21c6 (CONDITIONAL_JUMP)  ; LAB_005c21c6
    JMP 0x005c21b4                      ; 005c21d7
        ;   XREF to: 005c21b4 (UNCONDITIONAL_JUMP)  ; LAB_005c21b4
    ADD EAX,EBX                         ; 005c21d9
        ;   Label: LAB_005c21d9
    ADC EDX,ECX                         ; 005c21db
    MOV EBX,EAX                         ; 005c21dd
        ;   Label: LAB_005c21dd
    MOV ECX,EDX                         ; 005c21df
    MOV EAX,ESI                         ; 005c21e1
    MOV EDX,EDI                         ; 005c21e3
    POP EDI                             ; 005c21e5
    POP ESI                             ; 005c21e6
    POP EBP                             ; 005c21e7
    RET                                 ; 005c21e8

