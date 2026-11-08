; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047c050(undefined1 *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x420]:1  local_420
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0047c2c0 at 0047c4b8
;   FUN_0047e470 at 0047e6bc
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcdb5
;   TerminatedCString s_CInputString_draw_string_005bcdcb
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5bb10
;   undefined4 DAT_01c5bb14
;   undefined4 DAT_01c5bb18
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004011a0
;   FUN_004031c0
;   FUN_00406bf0
;   FUN_0047bf80
;   FUN_004b0a20
;   FUN_004e4330
;   FUN_004edaf0
;   FUN_004f3520
;   FUN_004f37e0
;   FUN_005806a0
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c050
        ;   Label: FUN_0047c050
    PUSH ESI                            ; 0047c051
    PUSH EDI                            ; 0047c052
    PUSH EBP                            ; 0047c053
    SUB ESP,0x410                       ; 0047c054
    MOV EBX,dword ptr [ESP + 0x424]     ; 0047c05a
    MOV EDI,dword ptr [ESP + 0x42c]     ; 0047c061
    MOV EBP,dword ptr [0x01c5bae4]      ; 0047c068 | DAT_01c5bae4
    MOV EAX,dword ptr [EBX + 0x138]     ; 0047c06e
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047c074
    ADD EBP,EDI                         ; 0047c07a
    CMP EAX,EDX                         ; 0047c07c
    JNZ 0x0047c176                      ; 0047c07e
        ;   XREF to: 0047c176 (CONDITIONAL_JUMP)  ; LAB_0047c176
    PUSH 0xffff                         ; 0047c084
        ;   Label: LAB_0047c084
    CALL FUN_00406bf0                   ; 0047c089
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bf0()
    ADD ESP,0x4                         ; 0047c08e
    PUSH 0x3f800000                     ; 0047c091
    CALL FUN_004edaf0                   ; 0047c096
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004edaf0()
    MOV EAX,dword ptr [EBX + 0x13c]     ; 0047c09b
    ADD ESP,0x4                         ; 0047c0a1
    TEST EAX,EAX                        ; 0047c0a4
    JZ 0x0047c25e                       ; 0047c0a6
        ;   XREF to: 0047c25e (CONDITIONAL_JUMP)  ; LAB_0047c25e
    CMP dword ptr [EBX + 0x130],0x400   ; 0047c0ac
    JC 0x0047c0db                       ; 0047c0b6
        ;   XREF to: 0047c0db (CONDITIONAL_JUMP)  ; LAB_0047c0db
    MOV EDX,0x5bcdb5                    ; 0047c0b8 | = "..\\shape\\edittool.cpp"
    MOV ECX,0x231                       ; 0047c0bd
    PUSH 0x5bcdcb                       ; 0047c0c2 | = "CInputString::draw - string too big f..."
    MOV dword ptr [0x01d71de0],EDX      ; 0047c0c7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0047c0cd | DAT_01d71de4
    CALL FUN_004e4330                   ; 0047c0d3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0047c0d8
    MOV ESI,dword ptr [EBX + 0x130]     ; 0047c0db
        ;   Label: LAB_0047c0db
    PUSH ESI                            ; 0047c0e1
    PUSH 0x2a                           ; 0047c0e2
    LEA EAX,[ESP + 0x8]                 ; 0047c0e4
    PUSH EAX                            ; 0047c0e8
    CALL FUN_005a28f0                   ; 0047c0e9
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0047c0ee
    MOV EAX,dword ptr [EBX + 0x130]     ; 0047c0f1
    XOR DL,DL                           ; 0047c0f7
    PUSH -0x1                           ; 0047c0f9
    MOV byte ptr [ESP + EAX*0x1 + 0x4],DL ; 0047c0fb
    MOV EAX,[0x01c5bb14]                ; 0047c0ff | DAT_01c5bb14
    PUSH EAX                            ; 0047c104
    PUSH EDI                            ; 0047c105
    MOV EDX,dword ptr [ESP + 0x434]     ; 0047c106
    PUSH EDX                            ; 0047c10d
    LEA EAX,[ESP + 0x10]                ; 0047c10e
    PUSH EAX                            ; 0047c112
    MOV ECX,dword ptr [0x01c5b0e0]      ; 0047c113 | DAT_01c5b0e0
    PUSH ECX                            ; 0047c119
    CALL FUN_004b0a20                   ; 0047c11a
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0a20()
        ;   Label: LAB_0047c11a
    ADD ESP,0x18                        ; 0047c11f
    CALL FUN_005806a0                   ; 0047c122
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
    TEST EAX,0x40000                    ; 0047c127
    JZ 0x0047c16b                       ; 0047c12c
        ;   XREF to: 0047c16b (CONDITIONAL_JUMP)  ; LAB_0047c16b
    MOV ESI,dword ptr [0x01c5baec]      ; 0047c12e | DAT_01c5baec
    MOV EAX,[0x01c5bb18]                ; 0047c134 | DAT_01c5bb18
    TEST ESI,ESI                        ; 0047c139
    JNZ 0x0047c27d                      ; 0047c13b
        ;   XREF to: 0047c27d (CONDITIONAL_JUMP)  ; LAB_0047c27d
    MOV [0x01c6b5c0],EAX                ; 0047c141 | DAT_01c6b5c0
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047c146
        ;   Label: LAB_0047c146
    PUSH EAX                            ; 0047c14c
    PUSH EBX                            ; 0047c14d
    CALL FUN_0047bf80                   ; 0047c14e
        ;   XREF to: 0047bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bf80()
    ADD ESP,0x8                         ; 0047c153
    MOV EDX,dword ptr [ESP + 0x428]     ; 0047c156
    PUSH EBP                            ; 0047c15d
    ADD EAX,EDX                         ; 0047c15e
    PUSH EAX                            ; 0047c160
    PUSH EDI                            ; 0047c161
    PUSH EAX                            ; 0047c162
    CALL FUN_004011a0                   ; 0047c163
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    ADD ESP,0x10                        ; 0047c168
    ADD ESP,0x410                       ; 0047c16b
        ;   Label: LAB_0047c16b
    POP EBP                             ; 0047c171
    POP EDI                             ; 0047c172
    POP ESI                             ; 0047c173
    POP EBX                             ; 0047c174
    RET                                 ; 0047c175
    PUSH EAX                            ; 0047c176
        ;   Label: LAB_0047c176
    PUSH EBX                            ; 0047c177
    CALL FUN_0047bf80                   ; 0047c178
        ;   XREF to: 0047bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bf80()
    ADD ESP,0x8                         ; 0047c17d
    MOV ESI,dword ptr [ESP + 0x428]     ; 0047c180
    ADD ESI,EAX                         ; 0047c187
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047c189
    PUSH EAX                            ; 0047c18f
    PUSH EBX                            ; 0047c190
    CALL FUN_0047bf80                   ; 0047c191
        ;   XREF to: 0047bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bf80()
    ADD ESP,0x8                         ; 0047c196
    ADD EAX,dword ptr [ESP + 0x428]     ; 0047c199
    CMP ESI,EAX                         ; 0047c1a0
    JLE 0x0047c1aa                      ; 0047c1a2
        ;   XREF to: 0047c1aa (CONDITIONAL_JUMP)  ; LAB_0047c1aa
    MOV EDX,ESI                         ; 0047c1a4
    MOV ESI,EAX                         ; 0047c1a6
    MOV EAX,EDX                         ; 0047c1a8
    MOV EDX,dword ptr [0x01c5bb10]      ; 0047c1aa | DAT_01c5bb10
        ;   Label: LAB_0047c1aa
    MOV ECX,dword ptr [0x01c5baec]      ; 0047c1b0 | DAT_01c5baec
    MOV dword ptr [ESP + 0x40c],EDI     ; 0047c1b6
    MOV dword ptr [ESP + 0x408],EAX     ; 0047c1bd
    MOV dword ptr [ESP + 0x400],EBP     ; 0047c1c4
    MOV dword ptr [ESP + 0x404],ESI     ; 0047c1cb
    TEST ECX,ECX                        ; 0047c1d2
    JZ 0x0047c24c                       ; 0047c1d4
        ;   XREF to: 0047c24c (CONDITIONAL_JUMP)  ; LAB_0047c24c
    JNZ 0x0047c20b                      ; 0047c1d6
        ;   XREF to: 0047c20b (CONDITIONAL_JUMP)  ; LAB_0047c20b
    MOV dword ptr [0x01c6b5c0],EDX      ; 0047c1d8 | DAT_01c6b5c0
    MOV EAX,dword ptr [ESP + 0x400]     ; 0047c1de
        ;   Label: LAB_0047c1de
    PUSH EAX                            ; 0047c1e5
    MOV EDX,dword ptr [ESP + 0x40c]     ; 0047c1e6
    PUSH EDX                            ; 0047c1ed
    MOV ECX,dword ptr [ESP + 0x414]     ; 0047c1ee
    PUSH ECX                            ; 0047c1f5
    MOV ESI,dword ptr [ESP + 0x410]     ; 0047c1f6
    PUSH ESI                            ; 0047c1fd
    CALL FUN_004f37e0                   ; 0047c1fe
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f37e0()
    ADD ESP,0x10                        ; 0047c203
    JMP 0x0047c084                      ; 0047c206
        ;   XREF to: 0047c084 (UNCONDITIONAL_JUMP)  ; LAB_0047c084
    AND EDX,0xff                        ; 0047c20b
        ;   Label: LAB_0047c20b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047c211
    SUB EAX,EDX                         ; 0047c218
    XOR EDX,EDX                         ; 0047c21a
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047c21c | DAT_01c6af99
    MOV ESI,EDX                         ; 0047c222
    XOR EDX,EDX                         ; 0047c224
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047c226 | DAT_01c6af98
    SHL ESI,0x8                         ; 0047c22c
    SHL EDX,0x10                        ; 0047c22f
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047c232 | DAT_01c6af9a
    OR EDX,ESI                          ; 0047c238
    AND EAX,0xff                        ; 0047c23a
    OR EDX,EAX                          ; 0047c23f
    PUSH EDX                            ; 0047c241
    CALL FUN_004f3520                   ; 0047c242
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3520()
    ADD ESP,0x4                         ; 0047c247
    JMP 0x0047c1de                      ; 0047c24a
        ;   XREF to: 0047c1de (UNCONDITIONAL_JUMP)  ; LAB_0047c1de
    PUSH EDX                            ; 0047c24c
        ;   Label: LAB_0047c24c
    PUSH EBP                            ; 0047c24d
    PUSH EAX                            ; 0047c24e
    PUSH EDI                            ; 0047c24f
    PUSH ESI                            ; 0047c250
    CALL FUN_004031c0                   ; 0047c251
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 0047c256
    JMP 0x0047c084                      ; 0047c259
        ;   XREF to: 0047c084 (UNCONDITIONAL_JUMP)  ; LAB_0047c084
    PUSH -0x1                           ; 0047c25e
        ;   Label: LAB_0047c25e
    MOV EDX,dword ptr [0x01c5bb14]      ; 0047c260 | DAT_01c5bb14
    PUSH EDX                            ; 0047c266
    PUSH EDI                            ; 0047c267
    MOV ECX,dword ptr [ESP + 0x434]     ; 0047c268
    PUSH ECX                            ; 0047c26f
    PUSH EBX                            ; 0047c270
    MOV ESI,dword ptr [0x01c5b0e0]      ; 0047c271 | DAT_01c5b0e0
    PUSH ESI                            ; 0047c277
    JMP 0x0047c11a                      ; 0047c278
        ;   XREF to: 0047c11a (UNCONDITIONAL_JUMP)  ; LAB_0047c11a
    AND EAX,0xff                        ; 0047c27d
        ;   Label: LAB_0047c27d
    MOV EDX,EAX                         ; 0047c282
    SHL EAX,0x2                         ; 0047c284
    SUB EAX,EDX                         ; 0047c287
    XOR EDX,EDX                         ; 0047c289
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047c28b | DAT_01c6af99
    MOV ESI,EDX                         ; 0047c291
    XOR EDX,EDX                         ; 0047c293
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047c295 | DAT_01c6af98
    SHL ESI,0x8                         ; 0047c29b
    SHL EDX,0x10                        ; 0047c29e
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047c2a1 | DAT_01c6af9a
    OR EDX,ESI                          ; 0047c2a7
    AND EAX,0xff                        ; 0047c2a9
    OR EAX,EDX                          ; 0047c2ae
    PUSH EAX                            ; 0047c2b0
    CALL FUN_004f3520                   ; 0047c2b1
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3520()
    ADD ESP,0x4                         ; 0047c2b6
    JMP 0x0047c146                      ; 0047c2b9
        ;   XREF to: 0047c146 (UNCONDITIONAL_JUMP)  ; LAB_0047c146

