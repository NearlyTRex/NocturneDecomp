; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c__i10_output_FUN_1000cf50(int man_lo,uint man_hi,ushort exp_sign,int ndigits,byte flags,short *out)
;
; Parameters:
; int              Stack[0x4]:4   man_lo
; uint             Stack[0x8]:4   man_hi
; ushort           Stack[0xc]:2   exp_sign
; int              Stack[0x10]:4   ndigits
; byte             Stack[0x14]:1   flags
; short *          Stack[0x18]:4   out
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined2       Stack[-0x1e]:2  local_1e
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x17]:1  local_17
; undefined1       Stack[-0x16]:1  local_16
; undefined1       Stack[-0x15]:1  local_15
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x13]:1  local_13
; undefined1       Stack[-0x12]:1  local_12
; undefined1       Stack[-0x11]:1  local_11
; undefined1       Stack[-0x10]:1  local_10
; undefined1       Stack[-0xf]:1  local_f
; undefined1       Stack[-0xe]:1  local_e
; undefined1       Stack[-0xd]:1  local_d
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_stdio.c__fltout2_FUN_1000a350 at 1000a380
;
; Referenced Globals:
;   undefined4 DAT_10012774
;   undefined2 DAT_10012778
;   undefined1 DAT_1001277a
;   undefined4 DAT_1001277c
;   undefined2 DAT_10012780
;   undefined4 DAT_10012784
;   undefined2 DAT_10012788
;   undefined4 DAT_1001278c
;   undefined2 DAT_10012790
;   undefined1 DAT_10012792
;
; Called Functions:
;   crt_math.c___multtwelve_FUN_1000e8f0
;   crt_math.c__add_12_FUN_1000c5d0
;   crt_math.c__multtenpow12_FUN_1000eba0
;   crt_math.c__shl_12_FUN_1000c640
;   crt_math.c__shr_12_FUN_1000c680
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 1000cf50
        ;   Label: crt_stdio.c__i10_output_FUN_1000cf50
    MOV EAX,0xcc                        ; 1000cf53
    MOV byte ptr [ESP + 0x10],AL        ; 1000cf58
    PUSH EBX                            ; 1000cf5c
    MOV byte ptr [ESP + 0x15],AL        ; 1000cf5d
    PUSH ESI                            ; 1000cf61
    MOV byte ptr [ESP + 0x1a],AL        ; 1000cf62
    PUSH EDI                            ; 1000cf66
    MOV byte ptr [ESP + 0x1f],AL        ; 1000cf67
    PUSH EBP                            ; 1000cf6b
    MOV byte ptr [ESP + 0x24],AL        ; 1000cf6c
    MOV byte ptr [ESP + 0x25],AL        ; 1000cf70
    MOV byte ptr [ESP + 0x26],AL        ; 1000cf74
    MOV byte ptr [ESP + 0x27],AL        ; 1000cf78
    MOV byte ptr [ESP + 0x28],AL        ; 1000cf7c
    MOV byte ptr [ESP + 0x29],AL        ; 1000cf80
    MOV byte ptr [ESP + 0x2a],0xfb      ; 1000cf84
    MOV byte ptr [ESP + 0x2b],0x3f      ; 1000cf89
    MOV AX,word ptr [ESP + 0x44]        ; 1000cf8e
    MOV EDI,dword ptr [ESP + 0x50]      ; 1000cf93
    MOV dword ptr [ESP + 0x1c],0x1      ; 1000cf97
    AND AX,0x8000                       ; 1000cf9f
    MOV CX,word ptr [ESP + 0x44]        ; 1000cfa3
    AND CX,0x7fff                       ; 1000cfa8
    TEST AX,AX                          ; 1000cfad
    JZ 0x1000cfb8                       ; 1000cfb0
        ;   XREF to: 1000cfb8 (CONDITIONAL_JUMP)  ; LAB_1000cfb8
    MOV byte ptr [EDI + 0x2],0x2d       ; 1000cfb2
    JMP 0x1000cfbc                      ; 1000cfb6
        ;   XREF to: 1000cfbc (UNCONDITIONAL_JUMP)  ; LAB_1000cfbc
    MOV byte ptr [EDI + 0x2],0x20       ; 1000cfb8
        ;   Label: LAB_1000cfb8
    TEST CX,CX                          ; 1000cfbc
        ;   Label: LAB_1000cfbc
    JNZ 0x1000cff1                      ; 1000cfbf
        ;   XREF to: 1000cff1 (CONDITIONAL_JUMP)  ; LAB_1000cff1
    CMP dword ptr [ESP + 0x40],0x0      ; 1000cfc1
    JNZ 0x1000cff1                      ; 1000cfc6
        ;   XREF to: 1000cff1 (CONDITIONAL_JUMP)  ; LAB_1000cff1
    CMP dword ptr [ESP + 0x3c],0x0      ; 1000cfc8
    JNZ 0x1000cff1                      ; 1000cfcd
        ;   XREF to: 1000cff1 (CONDITIONAL_JUMP)  ; LAB_1000cff1
    MOV byte ptr [EDI + 0x2],0x20       ; 1000cfcf
    MOV word ptr [EDI],0x0              ; 1000cfd3
    MOV EAX,0x1                         ; 1000cfd8
    MOV byte ptr [EDI + 0x3],0x1        ; 1000cfdd
    MOV byte ptr [EDI + 0x4],0x30       ; 1000cfe1
    MOV byte ptr [EDI + 0x5],0x0        ; 1000cfe5
    POP EBP                             ; 1000cfe9
    POP EDI                             ; 1000cfea
    POP ESI                             ; 1000cfeb
    POP EBX                             ; 1000cfec
    ADD ESP,0x28                        ; 1000cfed
    RET                                 ; 1000cff0
    CMP CX,0x7fff                       ; 1000cff1
        ;   Label: LAB_1000cff1
    JNZ 0x1000d0ee                      ; 1000cff6
        ;   XREF to: 1000d0ee (CONDITIONAL_JUMP)  ; LAB_1000d0ee
    CMP dword ptr [ESP + 0x40],0x80000000 ; 1000cffc
    MOV word ptr [EDI],0x1              ; 1000d004
    JNZ 0x1000d012                      ; 1000d009
        ;   XREF to: 1000d012 (CONDITIONAL_JUMP)  ; LAB_1000d012
    CMP dword ptr [ESP + 0x3c],0x0      ; 1000d00b
    JZ 0x1000d047                       ; 1000d010
        ;   XREF to: 1000d047 (CONDITIONAL_JUMP)  ; LAB_1000d047
    TEST byte ptr [ESP + 0x43],0x40     ; 1000d012
        ;   Label: LAB_1000d012
    JNZ 0x1000d047                      ; 1000d017
        ;   XREF to: 1000d047 (CONDITIONAL_JUMP)  ; LAB_1000d047
    MOV EAX,[0x1001278c]                ; 1000d019 | DAT_1001278c
    MOV ECX,0x1001278c                  ; 1000d01e | DAT_1001278c
    LEA EDX,[EDI + 0x4]                 ; 1000d023
    MOV dword ptr [ESP + 0x1c],0x0      ; 1000d026
    MOV dword ptr [EDX],EAX             ; 1000d02e
    MOV BX,word ptr [ECX + 0x4]         ; 1000d030 | DAT_10012790
    MOV word ptr [EDX + 0x4],BX         ; 1000d034
    MOV CL,byte ptr [ECX + 0x6]         ; 1000d038 | DAT_10012792
    MOV byte ptr [EDX + 0x6],CL         ; 1000d03b
    MOV byte ptr [EDI + 0x3],0x6        ; 1000d03e
    JMP 0x1000d2ab                      ; 1000d042
        ;   XREF to: 1000d2ab (UNCONDITIONAL_JUMP)  ; LAB_1000d2ab
    TEST AX,AX                          ; 1000d047
        ;   Label: LAB_1000d047
    JZ 0x1000d086                       ; 1000d04a
        ;   XREF to: 1000d086 (CONDITIONAL_JUMP)  ; LAB_1000d086
    CMP dword ptr [ESP + 0x40],0xc0000000 ; 1000d04c
    JNZ 0x1000d086                      ; 1000d054
        ;   XREF to: 1000d086 (CONDITIONAL_JUMP)  ; LAB_1000d086
    CMP dword ptr [ESP + 0x3c],0x0      ; 1000d056
    JNZ 0x1000d086                      ; 1000d05b
        ;   XREF to: 1000d086 (CONDITIONAL_JUMP)  ; LAB_1000d086
    MOV ECX,dword ptr [0x10012784]      ; 1000d05d | DAT_10012784
    MOV EAX,0x10012784                  ; 1000d063 | DAT_10012784
    LEA EDX,[EDI + 0x4]                 ; 1000d068
    MOV dword ptr [ESP + 0x1c],0x0      ; 1000d06b
    MOV dword ptr [EDX],ECX             ; 1000d073
    MOV AX,word ptr [EAX + 0x4]         ; 1000d075 | DAT_10012788
    MOV word ptr [EDX + 0x4],AX         ; 1000d079
    MOV byte ptr [EDI + 0x3],0x5        ; 1000d07d
    JMP 0x1000d2ab                      ; 1000d081
        ;   XREF to: 1000d2ab (UNCONDITIONAL_JUMP)  ; LAB_1000d2ab
    CMP dword ptr [ESP + 0x40],0x80000000 ; 1000d086
        ;   Label: LAB_1000d086
    JNZ 0x1000d0c0                      ; 1000d08e
        ;   XREF to: 1000d0c0 (CONDITIONAL_JUMP)  ; LAB_1000d0c0
    CMP dword ptr [ESP + 0x3c],0x0      ; 1000d090
    JNZ 0x1000d0c0                      ; 1000d095
        ;   XREF to: 1000d0c0 (CONDITIONAL_JUMP)  ; LAB_1000d0c0
    MOV ECX,dword ptr [0x1001277c]      ; 1000d097 | DAT_1001277c
    MOV EAX,0x1001277c                  ; 1000d09d | DAT_1001277c
    LEA EDX,[EDI + 0x4]                 ; 1000d0a2
    MOV dword ptr [ESP + 0x1c],0x0      ; 1000d0a5
    MOV dword ptr [EDX],ECX             ; 1000d0ad
    MOV AX,word ptr [EAX + 0x4]         ; 1000d0af | DAT_10012780
    MOV word ptr [EDX + 0x4],AX         ; 1000d0b3
    MOV byte ptr [EDI + 0x3],0x5        ; 1000d0b7
    JMP 0x1000d2ab                      ; 1000d0bb
        ;   XREF to: 1000d2ab (UNCONDITIONAL_JUMP)  ; LAB_1000d2ab
    MOV EAX,[0x10012774]                ; 1000d0c0 | DAT_10012774
        ;   Label: LAB_1000d0c0
    MOV EDX,0x10012774                  ; 1000d0c5 | DAT_10012774
    LEA ECX,[EDI + 0x4]                 ; 1000d0ca
    MOV dword ptr [ESP + 0x1c],0x0      ; 1000d0cd
    MOV dword ptr [ECX],EAX             ; 1000d0d5
    MOV BX,word ptr [EDX + 0x4]         ; 1000d0d7 | DAT_10012778
    MOV word ptr [ECX + 0x4],BX         ; 1000d0db
    MOV DL,byte ptr [EDX + 0x6]         ; 1000d0df | DAT_1001277a
    MOV byte ptr [ECX + 0x6],DL         ; 1000d0e2
    MOV byte ptr [EDI + 0x3],0x6        ; 1000d0e5
    JMP 0x1000d2ab                      ; 1000d0e9
        ;   XREF to: 1000d2ab (UNCONDITIONAL_JUMP)  ; LAB_1000d2ab
    MOV EAX,dword ptr [ESP + 0x40]      ; 1000d0ee
        ;   Label: LAB_1000d0ee
    SHR EAX,0x18                        ; 1000d0f2
    MOVZX ESI,AX                        ; 1000d0f5
    MOV AX,CX                           ; 1000d0f8
    SHR AX,0x8                          ; 1000d0fb
    MOVZX EDX,AX                        ; 1000d0ff
    LEA ESI,[EDX + ESI*0x2]             ; 1000d102
    MOV EAX,ESI                         ; 1000d105
    LEA EDX,[ESI + ESI*0x8]             ; 1000d107
    LEA ESI,[EAX + EDX*0x2]             ; 1000d10a
    MOVZX EDX,CX                        ; 1000d10d
    LEA ESI,[EAX + ESI*0x4]             ; 1000d110
    MOV EAX,EDX                         ; 1000d113
    SHL EDX,0x4                         ; 1000d115
    ADD EDX,EAX                         ; 1000d118
    MOV word ptr [ESP + 0x1a],CX        ; 1000d11a
    LEA EAX,[EAX + EDX*0x8]             ; 1000d11f
    LEA EDX,[EAX + EAX*0x8]             ; 1000d122
    MOV EAX,dword ptr [ESP + 0x40]      ; 1000d125
    SHL EDX,0x4                         ; 1000d129
    MOV ECX,dword ptr [ESP + 0x3c]      ; 1000d12c
    ADD ESI,EDX                         ; 1000d130
    PUSH 0x1                            ; 1000d132
    SUB ESI,0x134312f4                  ; 1000d134
    MOV dword ptr [ESP + 0x1a],EAX      ; 1000d13a
    SAR ESI,0x10                        ; 1000d13e
    MOV dword ptr [ESP + 0x16],ECX      ; 1000d141
    MOVSX EAX,SI                        ; 1000d145
    MOV word ptr [ESP + 0x14],0x0       ; 1000d148
    NEG EAX                             ; 1000d14f
    LEA ECX,[ESP + 0x14]                ; 1000d151
    PUSH EAX                            ; 1000d155
    PUSH ECX                            ; 1000d156
    CALL crt_math.c__multtenpow12_FUN_1000eba0 ; 1000d157
        ;   XREF to: 1000eba0 (UNCONDITIONAL_CALL)  ; void crt_math.c__multtenpow12_FUN_1000eba0(_LDBL12 * ld12, uint pow, int flag)
    ADD ESP,0xc                         ; 1000d15c
    CMP word ptr [ESP + 0x1a],0x3fff    ; 1000d15f
    JC 0x1000d17c                       ; 1000d166
        ;   XREF to: 1000d17c (CONDITIONAL_JUMP)  ; LAB_1000d17c
    INC SI                              ; 1000d168
    LEA EAX,[ESP + 0x20]                ; 1000d16a
    LEA ECX,[ESP + 0x10]                ; 1000d16e
    PUSH EAX                            ; 1000d172
    PUSH ECX                            ; 1000d173
    CALL crt_math.c___multtwelve_FUN_1000e8f0 ; 1000d174
        ;   XREF to: 1000e8f0 (UNCONDITIONAL_CALL)  ; void crt_math.c___multtwelve_FUN_1000e8f0(_LDBL12 * a, _LDBL12 * b)
    ADD ESP,0x8                         ; 1000d179
    TEST byte ptr [ESP + 0x4c],0x1      ; 1000d17c
        ;   Label: LAB_1000d17c
    MOV word ptr [EDI],SI               ; 1000d181
    JZ 0x1000d1b5                       ; 1000d184
        ;   XREF to: 1000d1b5 (CONDITIONAL_JUMP)  ; LAB_1000d1b5
    MOVSX EAX,SI                        ; 1000d186
    MOV ESI,dword ptr [ESP + 0x48]      ; 1000d189
    ADD ESI,EAX                         ; 1000d18d
    TEST ESI,ESI                        ; 1000d18f
    JG 0x1000d1b9                       ; 1000d191
        ;   XREF to: 1000d1b9 (CONDITIONAL_JUMP)  ; LAB_1000d1b9
    MOV byte ptr [EDI + 0x2],0x20       ; 1000d193
    MOV word ptr [EDI],0x0              ; 1000d197
    MOV EAX,0x1                         ; 1000d19c
    MOV byte ptr [EDI + 0x3],0x1        ; 1000d1a1
    MOV byte ptr [EDI + 0x4],0x30       ; 1000d1a5
    MOV byte ptr [EDI + 0x5],0x0        ; 1000d1a9
    POP EBP                             ; 1000d1ad
    POP EDI                             ; 1000d1ae
    POP ESI                             ; 1000d1af
    POP EBX                             ; 1000d1b0
    ADD ESP,0x28                        ; 1000d1b1
    RET                                 ; 1000d1b4
    MOV ESI,dword ptr [ESP + 0x48]      ; 1000d1b5
        ;   Label: LAB_1000d1b5
    CMP ESI,0x15                        ; 1000d1b9
        ;   Label: LAB_1000d1b9
    JLE 0x1000d1c3                      ; 1000d1bc
        ;   XREF to: 1000d1c3 (CONDITIONAL_JUMP)  ; LAB_1000d1c3
    MOV ESI,0x15                        ; 1000d1be
    XOR EBX,EBX                         ; 1000d1c3
        ;   Label: LAB_1000d1c3
    MOV EBP,0x8                         ; 1000d1c5
    MOV BX,word ptr [ESP + 0x1a]        ; 1000d1ca
    MOV word ptr [ESP + 0x1a],0x0       ; 1000d1cf
    SUB EBX,0x3ffe                      ; 1000d1d6
    LEA EAX,[ESP + 0x10]                ; 1000d1dc
        ;   Label: LAB_1000d1dc
    PUSH EAX                            ; 1000d1e0
    CALL crt_math.c__shl_12_FUN_1000c640 ; 1000d1e1
        ;   XREF to: 1000c640 (UNCONDITIONAL_CALL)  ; void crt_math.c__shl_12_FUN_1000c640(uint * p)
    ADD ESP,0x4                         ; 1000d1e6
    DEC EBP                             ; 1000d1e9
    JNZ 0x1000d1dc                      ; 1000d1ea
        ;   XREF to: 1000d1dc (CONDITIONAL_JUMP)  ; LAB_1000d1dc
    TEST EBX,EBX                        ; 1000d1ec
    JGE 0x1000d20a                      ; 1000d1ee
        ;   XREF to: 1000d20a (CONDITIONAL_JUMP)  ; LAB_1000d20a
    NEG EBX                             ; 1000d1f0
    AND EBX,0xff                        ; 1000d1f2
    JLE 0x1000d20a                      ; 1000d1f8
        ;   XREF to: 1000d20a (CONDITIONAL_JUMP)  ; LAB_1000d20a
    LEA EAX,[ESP + 0x10]                ; 1000d1fa
        ;   Label: LAB_1000d1fa
    PUSH EAX                            ; 1000d1fe
    CALL crt_math.c__shr_12_FUN_1000c680 ; 1000d1ff
        ;   XREF to: 1000c680 (UNCONDITIONAL_CALL)  ; void crt_math.c__shr_12_FUN_1000c680(uint * p)
    ADD ESP,0x4                         ; 1000d204
    DEC EBX                             ; 1000d207
    JNZ 0x1000d1fa                      ; 1000d208
        ;   XREF to: 1000d1fa (CONDITIONAL_JUMP)  ; LAB_1000d1fa
    LEA EBP,[EDI + 0x4]                 ; 1000d20a
        ;   Label: LAB_1000d20a
    INC ESI                             ; 1000d20d
    MOV EBX,EBP                         ; 1000d20e
    TEST ESI,ESI                        ; 1000d210
    JLE 0x1000d277                      ; 1000d212
        ;   XREF to: 1000d277 (CONDITIONAL_JUMP)  ; LAB_1000d277
    LEA EDX,[ESP + 0x10]                ; 1000d214
        ;   Label: LAB_1000d214
    LEA ECX,[ESP + 0x2c]                ; 1000d218
    INC EBX                             ; 1000d21c
    MOV EAX,dword ptr [EDX]             ; 1000d21d
    MOV dword ptr [ECX],EAX             ; 1000d21f
    MOV EAX,dword ptr [EDX + 0x4]       ; 1000d221
    MOV EDX,dword ptr [EDX + 0x8]       ; 1000d224
    MOV dword ptr [ECX + 0x4],EAX       ; 1000d227
    MOV dword ptr [ECX + 0x8],EDX       ; 1000d22a
    LEA ECX,[ESP + 0x10]                ; 1000d22d
    PUSH ECX                            ; 1000d231
    CALL crt_math.c__shl_12_FUN_1000c640 ; 1000d232
        ;   XREF to: 1000c640 (UNCONDITIONAL_CALL)  ; void crt_math.c__shl_12_FUN_1000c640(uint * p)
    LEA ECX,[ESP + 0x14]                ; 1000d237
    ADD ESP,0x4                         ; 1000d23b
    PUSH ECX                            ; 1000d23e
    CALL crt_math.c__shl_12_FUN_1000c640 ; 1000d23f
        ;   XREF to: 1000c640 (UNCONDITIONAL_CALL)  ; void crt_math.c__shl_12_FUN_1000c640(uint * p)
    LEA ECX,[ESP + 0x30]                ; 1000d244
    LEA EDX,[ESP + 0x14]                ; 1000d248
    ADD ESP,0x4                         ; 1000d24c
    PUSH ECX                            ; 1000d24f
    PUSH EDX                            ; 1000d250
    CALL crt_math.c__add_12_FUN_1000c5d0 ; 1000d251
        ;   XREF to: 1000c5d0 (UNCONDITIONAL_CALL)  ; void crt_math.c__add_12_FUN_1000c5d0(uint * a, uint * b)
    LEA ECX,[ESP + 0x18]                ; 1000d256
    ADD ESP,0x8                         ; 1000d25a
    PUSH ECX                            ; 1000d25d
    CALL crt_math.c__shl_12_FUN_1000c640 ; 1000d25e
        ;   XREF to: 1000c640 (UNCONDITIONAL_CALL)  ; void crt_math.c__shl_12_FUN_1000c640(uint * p)
    MOV AL,byte ptr [ESP + 0x1f]        ; 1000d263
    ADD ESP,0x4                         ; 1000d267
    ADD AL,0x30                         ; 1000d26a
    DEC ESI                             ; 1000d26c
    MOV byte ptr [EBX + -0x1],AL        ; 1000d26d
    MOV byte ptr [ESP + 0x1b],0x0       ; 1000d270
    JNZ 0x1000d214                      ; 1000d275
        ;   XREF to: 1000d214 (CONDITIONAL_JUMP)  ; LAB_1000d214
    MOV AL,byte ptr [EBX + -0x1]        ; 1000d277
        ;   Label: LAB_1000d277
    DEC EBX                             ; 1000d27a
    DEC EBX                             ; 1000d27b
    CMP AL,0x35                         ; 1000d27c
    JL 0x1000d2b7                       ; 1000d27e
        ;   XREF to: 1000d2b7 (CONDITIONAL_JUMP)  ; LAB_1000d2b7
    CMP EBX,EBP                         ; 1000d280
    JC 0x1000d295                       ; 1000d282
        ;   XREF to: 1000d295 (CONDITIONAL_JUMP)  ; LAB_1000d295
    CMP byte ptr [EBX],0x39             ; 1000d284
        ;   Label: LAB_1000d284
    JNZ 0x1000d291                      ; 1000d287
        ;   XREF to: 1000d291 (CONDITIONAL_JUMP)  ; LAB_1000d291
    MOV byte ptr [EBX],0x30             ; 1000d289
    DEC EBX                             ; 1000d28c
    CMP EBX,EBP                         ; 1000d28d
    JNC 0x1000d284                      ; 1000d28f
        ;   XREF to: 1000d284 (CONDITIONAL_JUMP)  ; LAB_1000d284
    CMP EBX,EBP                         ; 1000d291
        ;   Label: LAB_1000d291
    JNC 0x1000d299                      ; 1000d293
        ;   XREF to: 1000d299 (CONDITIONAL_JUMP)  ; LAB_1000d299
    INC word ptr [EDI]                  ; 1000d295
        ;   Label: LAB_1000d295
    INC EBX                             ; 1000d298
    INC byte ptr [EBX]                  ; 1000d299
        ;   Label: LAB_1000d299
    SUB EBX,EDI                         ; 1000d29b
        ;   Label: LAB_1000d29b
    SUB BL,0x3                          ; 1000d29d
    MOVSX EAX,BL                        ; 1000d2a0
    MOV byte ptr [EDI + 0x3],BL         ; 1000d2a3
    MOV byte ptr [EAX + EDI*0x1 + 0x4],0x0 ; 1000d2a6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000d2ab
        ;   Label: LAB_1000d2ab
    POP EBP                             ; 1000d2af
    POP EDI                             ; 1000d2b0
    POP ESI                             ; 1000d2b1
    POP EBX                             ; 1000d2b2
    ADD ESP,0x28                        ; 1000d2b3
    RET                                 ; 1000d2b6
    CMP EBX,EBP                         ; 1000d2b7
        ;   Label: LAB_1000d2b7
    JC 0x1000d2c9                       ; 1000d2b9
        ;   XREF to: 1000d2c9 (CONDITIONAL_JUMP)  ; LAB_1000d2c9
    CMP byte ptr [EBX],0x30             ; 1000d2bb
        ;   Label: LAB_1000d2bb
    JNZ 0x1000d2c5                      ; 1000d2be
        ;   XREF to: 1000d2c5 (CONDITIONAL_JUMP)  ; LAB_1000d2c5
    DEC EBX                             ; 1000d2c0
    CMP EBX,EBP                         ; 1000d2c1
    JNC 0x1000d2bb                      ; 1000d2c3
        ;   XREF to: 1000d2bb (CONDITIONAL_JUMP)  ; LAB_1000d2bb
    CMP EBX,EBP                         ; 1000d2c5
        ;   Label: LAB_1000d2c5
    JNC 0x1000d29b                      ; 1000d2c7
        ;   XREF to: 1000d29b (CONDITIONAL_JUMP)  ; LAB_1000d29b
    MOV word ptr [EDI],0x0              ; 1000d2c9
        ;   Label: LAB_1000d2c9
    MOV byte ptr [EBP],0x30             ; 1000d2ce
    MOV EAX,0x1                         ; 1000d2d2
    POP EBP                             ; 1000d2d7
    MOV byte ptr [EDI + 0x2],0x20       ; 1000d2d8
    MOV byte ptr [EDI + 0x3],0x1        ; 1000d2dc
    MOV byte ptr [EDI + 0x5],0x0        ; 1000d2e0
    POP EDI                             ; 1000d2e4
    POP ESI                             ; 1000d2e5
    POP EBX                             ; 1000d2e6
    ADD ESP,0x28                        ; 1000d2e7
    RET                                 ; 1000d2ea

