; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ca0c0(byte *param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   crt_unknown.c_FUN_005ca282 at 005ca297
;
; Called Functions:
;   crt_unknown.c_FUN_005c44f0
;   unkafter_zombie.cpp_FUN_005cca6c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ca0c0
        ;   Label: crt_unknown.c_FUN_005ca0c0
    MOV EBP,ESP                         ; 005ca0c1
    PUSH EBX                            ; 005ca0c3
    PUSH ESI                            ; 005ca0c4
    PUSH EDI                            ; 005ca0c5
    SUB ESP,0x30                        ; 005ca0c6
    MOV EAX,dword ptr [EBP + 0x8]       ; 005ca0c9
    MOV dword ptr [EBP + -0x1c],EAX     ; 005ca0cc
    MOV DL,byte ptr [EAX]               ; 005ca0cf
        ;   Label: LAB_005ca0cf
    CMP DL,0x20                         ; 005ca0d1
    JZ 0x005ca0e0                       ; 005ca0d4
        ;   XREF to: 005ca0e0 (CONDITIONAL_JUMP)  ; LAB_005ca0e0
    CMP DL,0x9                          ; 005ca0d6
    JC 0x005ca0e3                       ; 005ca0d9
        ;   XREF to: 005ca0e3 (CONDITIONAL_JUMP)  ; LAB_005ca0e3
    CMP DL,0xd                          ; 005ca0db
    JA 0x005ca0e3                       ; 005ca0de
        ;   XREF to: 005ca0e3 (CONDITIONAL_JUMP)  ; LAB_005ca0e3
    INC EAX                             ; 005ca0e0
        ;   Label: LAB_005ca0e0
    JMP 0x005ca0cf                      ; 005ca0e1
        ;   XREF to: 005ca0cf (UNCONDITIONAL_JUMP)  ; LAB_005ca0cf
    XOR DH,DH                           ; 005ca0e3
        ;   Label: LAB_005ca0e3
    LEA EBX,[EAX + 0x1]                 ; 005ca0e5
    MOV byte ptr [EBP + -0x10],DH       ; 005ca0e8
    CMP DL,0x2b                         ; 005ca0eb
    JNZ 0x005ca0f4                      ; 005ca0ee
        ;   XREF to: 005ca0f4 (CONDITIONAL_JUMP)  ; LAB_005ca0f4
    MOV EAX,EBX                         ; 005ca0f0
    JMP 0x005ca100                      ; 005ca0f2
        ;   XREF to: 005ca100 (UNCONDITIONAL_JUMP)  ; LAB_005ca100
    CMP DL,0x2d                         ; 005ca0f4
        ;   Label: LAB_005ca0f4
    JNZ 0x005ca100                      ; 005ca0f7
        ;   XREF to: 005ca100 (CONDITIONAL_JUMP)  ; LAB_005ca100
    MOV CL,0x1                          ; 005ca0f9
    MOV EAX,EBX                         ; 005ca0fb
    MOV byte ptr [EBP + -0x10],CL       ; 005ca0fd
    MOV DH,0x30                         ; 005ca100
        ;   Label: LAB_005ca100
    XOR EBX,EBX                         ; 005ca102
    XOR EDI,EDI                         ; 005ca104
    MOV DL,byte ptr [EAX]               ; 005ca106
        ;   Label: LAB_005ca106
    INC EAX                             ; 005ca108
    CMP DL,0x2e                         ; 005ca109
    JNZ 0x005ca120                      ; 005ca10c
        ;   XREF to: 005ca120 (CONDITIONAL_JUMP)  ; LAB_005ca120
    MOV CL,byte ptr [EBP + -0x10]       ; 005ca10e
    TEST CL,0x8                         ; 005ca111
    JNZ 0x005ca148                      ; 005ca114
        ;   XREF to: 005ca148 (CONDITIONAL_JUMP)  ; LAB_005ca148
    MOV CH,CL                           ; 005ca116
    OR CH,0x8                           ; 005ca118
    MOV byte ptr [EBP + -0x10],CH       ; 005ca11b
    JMP 0x005ca106                      ; 005ca11e
        ;   XREF to: 005ca106 (UNCONDITIONAL_JUMP)  ; LAB_005ca106
    CMP DL,0x30                         ; 005ca120
        ;   Label: LAB_005ca120
    JC 0x005ca148                       ; 005ca123
        ;   XREF to: 005ca148 (CONDITIONAL_JUMP)  ; LAB_005ca148
    CMP DL,0x39                         ; 005ca125
    JA 0x005ca148                       ; 005ca128
        ;   XREF to: 005ca148 (CONDITIONAL_JUMP)  ; LAB_005ca148
    TEST byte ptr [EBP + -0x10],0x8     ; 005ca12a
    JZ 0x005ca131                       ; 005ca12e
        ;   XREF to: 005ca131 (CONDITIONAL_JUMP)  ; LAB_005ca131
    INC EDI                             ; 005ca130
    OR DH,DL                            ; 005ca131
        ;   Label: LAB_005ca131
    CMP DH,0x30                         ; 005ca133
    JZ 0x005ca142                       ; 005ca136
        ;   XREF to: 005ca142 (CONDITIONAL_JUMP)  ; LAB_005ca142
    CMP EBX,0x13                        ; 005ca138
    JGE 0x005ca141                      ; 005ca13b
        ;   XREF to: 005ca141 (CONDITIONAL_JUMP)  ; LAB_005ca141
    MOV byte ptr [EBX + EBP*0x1 + -0x3c],DL ; 005ca13d
    INC EBX                             ; 005ca141
        ;   Label: LAB_005ca141
    OR byte ptr [EBP + -0x10],0x4       ; 005ca142
        ;   Label: LAB_005ca142
    JMP 0x005ca106                      ; 005ca146
        ;   XREF to: 005ca106 (UNCONDITIONAL_JUMP)  ; LAB_005ca106
    MOV DH,byte ptr [EBP + -0x10]       ; 005ca148
        ;   Label: LAB_005ca148
    XOR ESI,ESI                         ; 005ca14b
    TEST DH,0x4                         ; 005ca14d
    JZ 0x005ca1d2                       ; 005ca150
        ;   XREF to: 005ca1d2 (CONDITIONAL_JUMP)  ; LAB_005ca1d2
    CMP DL,0x65                         ; 005ca156
    JZ 0x005ca164                       ; 005ca159
        ;   XREF to: 005ca164 (CONDITIONAL_JUMP)  ; LAB_005ca164
    CMP DL,0x45                         ; 005ca15b
    JNZ 0x005ca1ce                      ; 005ca15e
        ;   XREF to: 005ca1ce (CONDITIONAL_JUMP)  ; LAB_005ca1ce
    LEA EDX,[EAX + -0x1]                ; 005ca164
        ;   Label: LAB_005ca164
    MOV CL,byte ptr [EAX]               ; 005ca167
    MOV dword ptr [EBP + -0x18],EDX     ; 005ca169
    LEA EDX,[EAX + 0x1]                 ; 005ca16c
    CMP CL,0x2b                         ; 005ca16f
    JNZ 0x005ca178                      ; 005ca172
        ;   XREF to: 005ca178 (CONDITIONAL_JUMP)  ; LAB_005ca178
    MOV EAX,EDX                         ; 005ca174
    JMP 0x005ca188                      ; 005ca176
        ;   XREF to: 005ca188 (UNCONDITIONAL_JUMP)  ; LAB_005ca188
    CMP CL,0x2d                         ; 005ca178
        ;   Label: LAB_005ca178
    JNZ 0x005ca188                      ; 005ca17b
        ;   XREF to: 005ca188 (CONDITIONAL_JUMP)  ; LAB_005ca188
    MOV CL,byte ptr [EBP + -0x10]       ; 005ca17d
    OR CL,0x2                           ; 005ca180
    MOV EAX,EDX                         ; 005ca183
    MOV byte ptr [EBP + -0x10],CL       ; 005ca185
    AND byte ptr [EBP + -0x10],0xfb     ; 005ca188
        ;   Label: LAB_005ca188
    MOV DL,byte ptr [EAX]               ; 005ca18c
        ;   Label: LAB_005ca18c
    CMP DL,0x30                         ; 005ca18e
    JC 0x005ca1bb                       ; 005ca191
        ;   XREF to: 005ca1bb (CONDITIONAL_JUMP)  ; LAB_005ca1bb
    CMP DL,0x39                         ; 005ca193
    JA 0x005ca1bb                       ; 005ca196
        ;   XREF to: 005ca1bb (CONDITIONAL_JUMP)  ; LAB_005ca1bb
    CMP ESI,0x3e8                       ; 005ca198
    JGE 0x005ca1af                      ; 005ca19e
        ;   XREF to: 005ca1af (CONDITIONAL_JUMP)  ; LAB_005ca1af
    IMUL ESI,ESI,0xa                    ; 005ca1a0
    MOV dword ptr [EBP + -0x14],ESI     ; 005ca1a3
    MOVZX ESI,DL                        ; 005ca1a6
    ADD ESI,dword ptr [EBP + -0x14]     ; 005ca1a9
    SUB ESI,0x30                        ; 005ca1ac
    MOV DL,byte ptr [EBP + -0x10]       ; 005ca1af
        ;   Label: LAB_005ca1af
    OR DL,0x4                           ; 005ca1b2
    INC EAX                             ; 005ca1b5
    MOV byte ptr [EBP + -0x10],DL       ; 005ca1b6
    JMP 0x005ca18c                      ; 005ca1b9
        ;   XREF to: 005ca18c (UNCONDITIONAL_JUMP)  ; LAB_005ca18c
    TEST byte ptr [EBP + -0x10],0x2     ; 005ca1bb
        ;   Label: LAB_005ca1bb
    JZ 0x005ca1c3                       ; 005ca1bf
        ;   XREF to: 005ca1c3 (CONDITIONAL_JUMP)  ; LAB_005ca1c3
    NEG ESI                             ; 005ca1c1
    TEST byte ptr [EBP + -0x10],0x4     ; 005ca1c3
        ;   Label: LAB_005ca1c3
    JNZ 0x005ca1cf                      ; 005ca1c7
        ;   XREF to: 005ca1cf (CONDITIONAL_JUMP)  ; LAB_005ca1cf
    MOV EAX,dword ptr [EBP + -0x18]     ; 005ca1c9
    JMP 0x005ca1cf                      ; 005ca1cc
        ;   XREF to: 005ca1cf (UNCONDITIONAL_JUMP)  ; LAB_005ca1cf
    DEC EAX                             ; 005ca1ce
        ;   Label: LAB_005ca1ce
    MOV dword ptr [EBP + -0x1c],EAX     ; 005ca1cf
        ;   Label: LAB_005ca1cf
    MOV ECX,dword ptr [EBP + 0x10]      ; 005ca1d2
        ;   Label: LAB_005ca1d2
    TEST ECX,ECX                        ; 005ca1d5
    JZ 0x005ca1de                       ; 005ca1d7
        ;   XREF to: 005ca1de (CONDITIONAL_JUMP)  ; LAB_005ca1de
    MOV EAX,dword ptr [EBP + -0x1c]     ; 005ca1d9
    MOV dword ptr [ECX],EAX             ; 005ca1dc
    SUB ESI,EDI                         ; 005ca1de
        ;   Label: LAB_005ca1de
    CMP EBX,0x13                        ; 005ca1e0
    JLE 0x005ca1ef                      ; 005ca1e3
        ;   XREF to: 005ca1ef (CONDITIONAL_JUMP)  ; LAB_005ca1ef
    SUB EBX,0x13                        ; 005ca1e5
    ADD ESI,EBX                         ; 005ca1e8
    MOV EBX,0x13                        ; 005ca1ea
    TEST EBX,EBX                        ; 005ca1ef
        ;   Label: LAB_005ca1ef
    JLE 0x005ca1fe                      ; 005ca1f1
        ;   XREF to: 005ca1fe (CONDITIONAL_JUMP)  ; LAB_005ca1fe
    CMP byte ptr [EBX + EBP*0x1 + -0x3d],0x30 ; 005ca1f3
    JNZ 0x005ca1fe                      ; 005ca1f8
        ;   XREF to: 005ca1fe (CONDITIONAL_JUMP)  ; LAB_005ca1fe
    INC ESI                             ; 005ca1fa
    DEC EBX                             ; 005ca1fb
    JMP 0x005ca1ef                      ; 005ca1fc
        ;   XREF to: 005ca1ef (UNCONDITIONAL_JUMP)  ; LAB_005ca1ef
    TEST EBX,EBX                        ; 005ca1fe
        ;   Label: LAB_005ca1fe
    JNZ 0x005ca214                      ; 005ca200
        ;   XREF to: 005ca214 (CONDITIONAL_JUMP)  ; LAB_005ca214
    MOV EAX,dword ptr [EBP + 0xc]       ; 005ca202
    MOV word ptr [EAX + 0x8],0x0        ; 005ca205
    MOV dword ptr [EAX + 0x4],EBX       ; 005ca20b
    MOV dword ptr [EAX],EBX             ; 005ca20e
    XOR EAX,EAX                         ; 005ca210
    JMP 0x005ca27a                      ; 005ca212
        ;   XREF to: 005ca27a (UNCONDITIONAL_JUMP)  ; LAB_005ca27a
    XOR AL,AL                           ; 005ca214
        ;   Label: LAB_005ca214
    LEA EDX,[EBP + -0x28]               ; 005ca216
    MOV byte ptr [EBX + EBP*0x1 + -0x3c],AL ; 005ca219
    LEA EAX,[EBP + -0x3c]               ; 005ca21d
    CALL unkafter_zombie.cpp_FUN_005cca6c ; 005ca220
        ;   XREF to: 005cca6c (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cca6c()
    TEST ESI,ESI                        ; 005ca225
    JZ 0x005ca236                       ; 005ca227
        ;   XREF to: 005ca236 (CONDITIONAL_JUMP)  ; LAB_005ca236
    PUSH ESI                            ; 005ca229
    LEA EAX,[EBP + -0x28]               ; 005ca22a
    PUSH EAX                            ; 005ca22d
    CALL crt_unknown.c_FUN_005c44f0     ; 005ca22e
        ;   XREF to: 005c44f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c44f0()
    ADD ESP,0x8                         ; 005ca233
    TEST byte ptr [EBP + -0x10],0x1     ; 005ca236
        ;   Label: LAB_005ca236
    JZ 0x005ca240                       ; 005ca23a
        ;   XREF to: 005ca240 (CONDITIONAL_JUMP)  ; LAB_005ca240
    OR byte ptr [EBP + -0x1f],0x80      ; 005ca23c
    MOV EDX,dword ptr [EBP + 0xc]       ; 005ca240
        ;   Label: LAB_005ca240
    MOV EAX,dword ptr [EBP + -0x20]     ; 005ca243
    MOV word ptr [EDX + 0x8],AX         ; 005ca246
    MOV EAX,dword ptr [EBP + -0x24]     ; 005ca24a
    MOV dword ptr [EDX + 0x4],EAX       ; 005ca24d
    MOV EAX,dword ptr [EBP + -0x28]     ; 005ca250
    MOV dword ptr [EDX],EAX             ; 005ca253
    LEA EAX,[ESI + EBX*0x1 + -0x1]      ; 005ca255
    CMP EAX,0x134                       ; 005ca259
    JLE 0x005ca267                      ; 005ca25e
        ;   XREF to: 005ca267 (CONDITIONAL_JUMP)  ; LAB_005ca267
    MOV EAX,0x3                         ; 005ca260
    JMP 0x005ca27a                      ; 005ca265
        ;   XREF to: 005ca27a (UNCONDITIONAL_JUMP)  ; LAB_005ca27a
    CMP EAX,0xfffffecc                  ; 005ca267
        ;   Label: LAB_005ca267
    JGE 0x005ca275                      ; 005ca26c
        ;   XREF to: 005ca275 (CONDITIONAL_JUMP)  ; LAB_005ca275
    MOV EAX,0x2                         ; 005ca26e
    JMP 0x005ca27a                      ; 005ca273
        ;   XREF to: 005ca27a (UNCONDITIONAL_JUMP)  ; LAB_005ca27a
    MOV EAX,0x1                         ; 005ca275
        ;   Label: LAB_005ca275
    LEA ESP,[EBP + -0xc]                ; 005ca27a
        ;   Label: LAB_005ca27a
    POP EDI                             ; 005ca27d
    POP ESI                             ; 005ca27e
    POP EBX                             ; 005ca27f
    POP EBP                             ; 005ca280
    RET                                 ; 005ca281

