; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister double crt_math.c_dmul_FUN_0060e0b9(double a, double b)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   crt_fpemu.c_staticInit_FUN_0060be80 at 0060bec7
;
; Referenced Globals:
;   byte BYTE_00684acd = 0x0
;
; Called Functions:
;   crt_unknown.c_FUN_0060eb3a
;   crt_unknown.c_FUN_0060eb57
;
; *****************************************************************************

section .text

    OR EAX,EAX                          ; 0060e0b9
        ;   Label: crt_math.c_dmul_FUN_0060e0b9
    JNZ 0x0060e0c4                      ; 0060e0bb
        ;   XREF to: 0060e0c4 (CONDITIONAL_JUMP)  ; LAB_0060e0c4
    ADD EDX,EDX                         ; 0060e0bd
    JNZ 0x0060e0c2                      ; 0060e0bf
        ;   XREF to: 0060e0c2 (CONDITIONAL_JUMP)  ; LAB_0060e0c2
    RET                                 ; 0060e0c1
    RCR EDX,0x1                         ; 0060e0c2
        ;   Label: LAB_0060e0c2
    OR EBX,EBX                          ; 0060e0c4
        ;   Label: LAB_0060e0c4
    JNZ 0x0060e0d3                      ; 0060e0c6
        ;   XREF to: 0060e0d3 (CONDITIONAL_JUMP)  ; LAB_0060e0d3
    ADD ECX,ECX                         ; 0060e0c8
    JNZ 0x0060e0d1                      ; 0060e0ca
        ;   XREF to: 0060e0d1 (CONDITIONAL_JUMP)  ; LAB_0060e0d1
    SUB EAX,EAX                         ; 0060e0cc
    SUB EDX,EDX                         ; 0060e0ce
    RET                                 ; 0060e0d0
    RCR ECX,0x1                         ; 0060e0d1
        ;   Label: LAB_0060e0d1
    CMP byte ptr [0x00684acd],0x0       ; 0060e0d3 | BYTE_00684acd
        ;   Label: LAB_0060e0d3
    JZ 0x0060e0eb                       ; 0060e0da
        ;   XREF to: 0060e0eb (CONDITIONAL_JUMP)  ; LAB_0060e0eb
    PUSH EDX                            ; 0060e0dc
    PUSH EAX                            ; 0060e0dd
    FLD double ptr [ESP]                ; 0060e0de
    PUSH ECX                            ; 0060e0e1
    PUSH EBX                            ; 0060e0e2
    FMUL double ptr [ESP]               ; 0060e0e3
    JMP 0x0060df2e                      ; 0060e0e6
        ;   XREF to: 0060df2e (UNCONDITIONAL_JUMP)  ; LAB_0060df2e
    PUSH EBP                            ; 0060e0eb
        ;   Label: LAB_0060e0eb
    PUSH EDI                            ; 0060e0ec
    PUSH ESI                            ; 0060e0ed
    MOV EDI,EDX                         ; 0060e0ee
    MOV ESI,ECX                         ; 0060e0f0
    SAR EDI,0x14                        ; 0060e0f2
    SAR ECX,0x14                        ; 0060e0f5
    AND EDI,0x800007ff                  ; 0060e0f8
    AND ECX,0x800007ff                  ; 0060e0fe
    ROL EDI,0x10                        ; 0060e104
    ROL ECX,0x10                        ; 0060e107
    ADD CX,DI                           ; 0060e10a
    ROL EDI,0x10                        ; 0060e10d
    ROL ECX,0x10                        ; 0060e110
    AND EDX,0xfffff                     ; 0060e113
    AND ESI,0xfffff                     ; 0060e119
    OR DI,DI                            ; 0060e11f
    JNZ 0x0060e134                      ; 0060e122
        ;   XREF to: 0060e134 (CONDITIONAL_JUMP)  ; LAB_0060e134
    INC DI                              ; 0060e124
    DEC DI                              ; 0060e126
        ;   Label: LAB_0060e126
    ADD EAX,EAX                         ; 0060e128
    ADC EDX,EDX                         ; 0060e12a
    TEST EDX,0x100000                   ; 0060e12c
    JZ 0x0060e126                       ; 0060e132
        ;   XREF to: 0060e126 (CONDITIONAL_JUMP)  ; LAB_0060e126
    OR EDX,0x100000                     ; 0060e134
        ;   Label: LAB_0060e134
    OR CX,CX                            ; 0060e13a
    JNZ 0x0060e14f                      ; 0060e13d
        ;   XREF to: 0060e14f (CONDITIONAL_JUMP)  ; LAB_0060e14f
    INC CX                              ; 0060e13f
    DEC CX                              ; 0060e141
        ;   Label: LAB_0060e141
    ADD EBX,EBX                         ; 0060e143
    ADC ESI,ESI                         ; 0060e145
    TEST ESI,0x100000                   ; 0060e147
    JZ 0x0060e141                       ; 0060e14d
        ;   XREF to: 0060e141 (CONDITIONAL_JUMP)  ; LAB_0060e141
    OR ESI,0x100000                     ; 0060e14f
        ;   Label: LAB_0060e14f
    ADD CX,DI                           ; 0060e155
    SUB CX,0x3ff                        ; 0060e158
    JS 0x0060e170                       ; 0060e15d
        ;   XREF to: 0060e170 (CONDITIONAL_JUMP)  ; LAB_0060e170
    CMP CX,0x7ff                        ; 0060e15f
    JC 0x0060e170                       ; 0060e164
        ;   XREF to: 0060e170 (CONDITIONAL_JUMP)  ; LAB_0060e170
    MOV EAX,ECX                         ; 0060e166
    POP ESI                             ; 0060e168
    POP EDI                             ; 0060e169
    POP EBP                             ; 0060e16a
    JMP 0x0060eb57                      ; 0060e16b
        ;   XREF to: 0060eb57 (UNCONDITIONAL_CALL)
    CMP CX,-0x35                        ; 0060e170
        ;   Label: LAB_0060e170
    JGE 0x0060e17e                      ; 0060e174
        ;   XREF to: 0060e17e (CONDITIONAL_JUMP)  ; LAB_0060e17e
    POP ESI                             ; 0060e176
    POP EDI                             ; 0060e177
    POP EBP                             ; 0060e178
    JMP 0x0060eb3a                      ; 0060e179
        ;   XREF to: 0060eb3a (UNCONDITIONAL_CALL)
    PUSH ECX                            ; 0060e17e
        ;   Label: LAB_0060e17e
    MOV CL,0xb                          ; 0060e17f
    SHLD EDX,EAX,CL                     ; 0060e181
    SHLD EAX,EBP,CL                     ; 0060e184
    AND EAX,0xfffff800                  ; 0060e187
    SHLD ESI,EBX,CL                     ; 0060e18c
    SHLD EBX,EBP,CL                     ; 0060e18f
    AND EBX,0xfffff800                  ; 0060e192
    SUB EBP,EBP                         ; 0060e198
    PUSH ESI                            ; 0060e19a
    PUSH EDX                            ; 0060e19b
    PUSH EAX                            ; 0060e19c
    MUL EBX                             ; 0060e19d
    XCHG EAX,ESI                        ; 0060e19f
    MOV ECX,EDX                         ; 0060e1a0
    POP EDX                             ; 0060e1a2
    MUL EDX                             ; 0060e1a3
    MOV EDI,EDX                         ; 0060e1a5
    ADD ECX,EAX                         ; 0060e1a7
    ADC EDI,EBP                         ; 0060e1a9
    ADC EBP,EBP                         ; 0060e1ab
    POP EAX                             ; 0060e1ad
    XCHG EAX,EBX                        ; 0060e1ae
    MUL EBX                             ; 0060e1af
    ADD ECX,EAX                         ; 0060e1b1
    ADC EDI,EDX                         ; 0060e1b3
    ADC EBP,0x0                         ; 0060e1b5
    MOV EAX,EBX                         ; 0060e1b8
    POP EDX                             ; 0060e1ba
    MUL EDX                             ; 0060e1bb
    ADD EAX,EDI                         ; 0060e1bd
    ADC EDX,EBP                         ; 0060e1bf
    SUB EBX,EBX                         ; 0060e1c1
    MOV CL,0xa                          ; 0060e1c3
    SHRD EBX,EAX,CL                     ; 0060e1c5
    SHRD EAX,EDX,CL                     ; 0060e1c8
    SHRD EDX,EBX,CL                     ; 0060e1cb
    POP ECX                             ; 0060e1ce
    TEST EDX,0x200000                   ; 0060e1cf
        ;   Label: LAB_0060e1cf
    JZ 0x0060e1e8                       ; 0060e1d5
        ;   XREF to: 0060e1e8 (CONDITIONAL_JUMP)  ; LAB_0060e1e8
    SHR EDX,0x1                         ; 0060e1d7
    RCR EAX,0x1                         ; 0060e1d9
    RCR EBX,0x1                         ; 0060e1db
    INC CX                              ; 0060e1dd
    CMP CX,0x7ff                        ; 0060e1df
    JZ 0x0060e24c                       ; 0060e1e4
        ;   XREF to: 0060e24c (CONDITIONAL_JUMP)  ; LAB_0060e24c
    JMP 0x0060e1cf                      ; 0060e1e6
        ;   XREF to: 0060e1cf (UNCONDITIONAL_JUMP)  ; LAB_0060e1cf
    ADD EBX,EBX                         ; 0060e1e8
        ;   Label: LAB_0060e1e8
    JNC 0x0060e216                      ; 0060e1ea
        ;   XREF to: 0060e216 (CONDITIONAL_JUMP)  ; LAB_0060e216
    JNZ 0x0060e1fb                      ; 0060e1ec
        ;   XREF to: 0060e1fb (CONDITIONAL_JUMP)  ; LAB_0060e1fb
    OR ESI,ESI                          ; 0060e1ee
    SETNZ BL                            ; 0060e1f0
    SHR EBX,0x1                         ; 0060e1f3
    JC 0x0060e1fb                       ; 0060e1f5
        ;   XREF to: 0060e1fb (CONDITIONAL_JUMP)  ; LAB_0060e1fb
    MOV ESI,EAX                         ; 0060e1f7
    SHR ESI,0x1                         ; 0060e1f9
    ADC EAX,0x0                         ; 0060e1fb
        ;   Label: LAB_0060e1fb
    ADC EDX,0x0                         ; 0060e1fe
    TEST EDX,0x200000                   ; 0060e201
    JZ 0x0060e216                       ; 0060e207
        ;   XREF to: 0060e216 (CONDITIONAL_JUMP)  ; LAB_0060e216
    SHR EDX,0x1                         ; 0060e209
    RCR EAX,0x1                         ; 0060e20b
    INC CX                              ; 0060e20d
    CMP CX,0x7ff                        ; 0060e20f
    JZ 0x0060e24c                       ; 0060e214
        ;   XREF to: 0060e24c (CONDITIONAL_JUMP)  ; LAB_0060e24c
    OR CX,CX                            ; 0060e216
        ;   Label: LAB_0060e216
    JG 0x0060e231                       ; 0060e219
        ;   XREF to: 0060e231 (CONDITIONAL_JUMP)  ; LAB_0060e231
    JNZ 0x0060e221                      ; 0060e21b
        ;   XREF to: 0060e221 (CONDITIONAL_JUMP)  ; LAB_0060e221
    MOV CL,0x1                          ; 0060e21d
    JMP 0x0060e226                      ; 0060e21f
        ;   XREF to: 0060e226 (UNCONDITIONAL_JUMP)  ; LAB_0060e226
    NEG CX                              ; 0060e221
        ;   Label: LAB_0060e221
    DEC CX                              ; 0060e224
    SUB EBX,EBX                         ; 0060e226
        ;   Label: LAB_0060e226
    SHRD EAX,EDX,CL                     ; 0060e228
    SHRD EDX,EBX,CL                     ; 0060e22b
    SUB CX,CX                           ; 0060e22e
    AND EDX,0xfffff                     ; 0060e231
        ;   Label: LAB_0060e231
    MOV ESI,ECX                         ; 0060e237
    ROR ECX,0xb                         ; 0060e239
    ADD ESI,ESI                         ; 0060e23c
    RCR ECX,0x1                         ; 0060e23e
    AND ECX,0xfff00000                  ; 0060e240
    OR EDX,ECX                          ; 0060e246
    POP ESI                             ; 0060e248
    POP EDI                             ; 0060e249
    POP EBP                             ; 0060e24a
    RET                                 ; 0060e24b
    MOV EAX,ECX                         ; 0060e24c
        ;   Label: LAB_0060e24c
    POP ESI                             ; 0060e24e
    POP EDI                             ; 0060e24f
    POP EBP                             ; 0060e250
    JMP 0x0060eb57                      ; 0060e251
        ;   XREF to: 0060eb57 (UNCONDITIONAL_CALL)

