; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005bb050(undefined4 param_1,char *param_2,int *param_3,code *param_4)
;
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x78]:4  local_78
; undefined2       Stack[-0x6c]:2  local_6c
; undefined2       Stack[-0x6a]:2  local_6a
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[2]:
;   FUN_005b7768 at 005b777d
;   FUN_005bcd10 at 005bcda0
;
; Called Functions:
;   FUN_005bb478
;   FUN_005bb8c0
;   FUN_005bb938
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb050
        ;   Label: FUN_005bb050
    PUSH ESI                            ; 005bb051
    PUSH EDI                            ; 005bb052
    PUSH ES                             ; 005bb053
    PUSH EBP                            ; 005bb054
    SUB ESP,0x74                        ; 005bb055
    MOV EAX,dword ptr [ESP + 0x90]      ; 005bb058
    MOV EBX,dword ptr [ESP + 0x94]      ; 005bb05f
    MOV ESI,dword ptr [ESP + 0x98]      ; 005bb066
    XOR DL,DL                           ; 005bb06d
    MOV byte ptr [ESP + 0x70],DL        ; 005bb06f
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005bb073
    MOV dword ptr [ESP],EDX             ; 005bb07a
    XOR EDX,EDX                         ; 005bb07d
    MOV ECX,0x64                        ; 005bb07f
    MOV word ptr [ESP + 0x1e],DX        ; 005bb084
    XOR EDX,EDX                         ; 005bb089
    MOV word ptr [ESP + 0x1c],CX        ; 005bb08b
    MOV dword ptr [ESP + 0x10],EDX      ; 005bb090
    MOV DH,byte ptr [EAX]               ; 005bb094
    MOV EBP,EAX                         ; 005bb096
    TEST DH,DH                          ; 005bb098
    JZ 0x005bb46a                       ; 005bb09a
        ;   XREF to: 005bb46a (CONDITIONAL_JUMP)  ; LAB_005bb46a
    MOV CH,byte ptr [EBP]               ; 005bb0a0
        ;   Label: LAB_005bb0a0
    LEA EDI,[EBP + 0x1]                 ; 005bb0a3
    CMP CH,0x25                         ; 005bb0a6
    JZ 0x005bb0c1                       ; 005bb0a9
        ;   XREF to: 005bb0c1 (CONDITIONAL_JUMP)  ; LAB_005bb0c1
    XOR EAX,EAX                         ; 005bb0ab
    MOV AL,CH                           ; 005bb0ad
    PUSH EAX                            ; 005bb0af
    LEA EAX,[ESP + 0x4]                 ; 005bb0b0
    PUSH EAX                            ; 005bb0b4
    MOV EBP,EDI                         ; 005bb0b5
    CALL ESI                            ; 005bb0b7
    ADD ESP,0x8                         ; 005bb0b9
    JMP 0x005bb441                      ; 005bb0bc
        ;   XREF to: 005bb441 (UNCONDITIONAL_JUMP)  ; LAB_005bb441
    MOV EAX,dword ptr [EBX]             ; 005bb0c1
        ;   Label: LAB_005bb0c1
    MOV dword ptr [ESP + 0x60],EAX      ; 005bb0c3
    MOV EAX,ESP                         ; 005bb0c7
    PUSH EAX                            ; 005bb0c9
    LEA EAX,[ESP + 0x64]                ; 005bb0ca
    PUSH EAX                            ; 005bb0ce
    PUSH EDI                            ; 005bb0cf
    CALL FUN_005bb478                   ; 005bb0d0
        ;   XREF to: 005bb478 (UNCONDITIONAL_CALL)  ; undefined FUN_005bb478()
    ADD ESP,0xc                         ; 005bb0d5
    MOV EBP,EAX                         ; 005bb0d8
    MOV EAX,dword ptr [ESP + 0x60]      ; 005bb0da
    MOV dword ptr [EBX],EAX             ; 005bb0de
    MOV AL,byte ptr [EBP]               ; 005bb0e0
    INC EBP                             ; 005bb0e3
    MOV byte ptr [ESP + 0x15],AL        ; 005bb0e4
    TEST AL,AL                          ; 005bb0e8
    JZ 0x005bb46a                       ; 005bb0ea
        ;   XREF to: 005bb46a (CONDITIONAL_JUMP)  ; LAB_005bb46a
    CMP AL,0x6e                         ; 005bb0f0
    JNZ 0x005bb271                      ; 005bb0f2
        ;   XREF to: 005bb271 (CONDITIONAL_JUMP)  ; LAB_005bb271
    MOV CL,byte ptr [ESP + 0x1e]        ; 005bb0f8
    TEST CL,0x20                        ; 005bb0fc
    JZ 0x005bb165                       ; 005bb0ff
        ;   XREF to: 005bb165 (CONDITIONAL_JUMP)  ; LAB_005bb165
    TEST CL,0x80                        ; 005bb101
    JZ 0x005bb122                       ; 005bb104
        ;   XREF to: 005bb122 (CONDITIONAL_JUMP)  ; LAB_005bb122
    MOV ECX,dword ptr [EBX]             ; 005bb106
    ADD ECX,0x8                         ; 005bb108
    MOV dword ptr [EBX],ECX             ; 005bb10b
    LES EDI,[ECX + -0x8]                ; 005bb10d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb110
    MOV dword ptr ES:[EDI],EAX          ; 005bb114
    CMP byte ptr [EBP],0x0              ; 005bb117
    JNZ 0x005bb0a0                      ; 005bb11b
        ;   XREF to: 005bb0a0 (CONDITIONAL_JUMP)  ; LAB_005bb0a0
    JMP 0x005bb46a                      ; 005bb11d
        ;   XREF to: 005bb46a (UNCONDITIONAL_JUMP)  ; LAB_005bb46a
    TEST CL,0x40                        ; 005bb122
        ;   Label: LAB_005bb122
    JZ 0x005bb146                       ; 005bb125
        ;   XREF to: 005bb146 (CONDITIONAL_JUMP)  ; LAB_005bb146
    MOV EDX,dword ptr [EBX]             ; 005bb127
    ADD EDX,0x4                         ; 005bb129
    MOV dword ptr [EBX],EDX             ; 005bb12c
    MOV EDI,dword ptr [EDX + -0x4]      ; 005bb12e
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb131
    MOV dword ptr [EDI],EAX             ; 005bb135
    CMP byte ptr [EBP],0x0              ; 005bb137
    JNZ 0x005bb0a0                      ; 005bb13b
        ;   XREF to: 005bb0a0 (CONDITIONAL_JUMP)  ; LAB_005bb0a0
    JMP 0x005bb46a                      ; 005bb141
        ;   XREF to: 005bb46a (UNCONDITIONAL_JUMP)  ; LAB_005bb46a
    MOV EAX,dword ptr [EBX]             ; 005bb146
        ;   Label: LAB_005bb146
    ADD EAX,0x4                         ; 005bb148
    MOV dword ptr [EBX],EAX             ; 005bb14b
    MOV EDI,dword ptr [EAX + -0x4]      ; 005bb14d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb150
    MOV dword ptr [EDI],EAX             ; 005bb154
    CMP byte ptr [EBP],0x0              ; 005bb156
    JNZ 0x005bb0a0                      ; 005bb15a
        ;   XREF to: 005bb0a0 (CONDITIONAL_JUMP)  ; LAB_005bb0a0
    JMP 0x005bb46a                      ; 005bb160
        ;   XREF to: 005bb46a (UNCONDITIONAL_JUMP)  ; LAB_005bb46a
    TEST CL,0x10                        ; 005bb165
        ;   Label: LAB_005bb165
    JZ 0x005bb1f1                       ; 005bb168
        ;   XREF to: 005bb1f1 (CONDITIONAL_JUMP)  ; LAB_005bb1f1
    TEST CL,0x80                        ; 005bb16e
    JZ 0x005bb19c                       ; 005bb171
        ;   XREF to: 005bb19c (CONDITIONAL_JUMP)  ; LAB_005bb19c
    MOV EDI,dword ptr [EBX]             ; 005bb173
    ADD EDI,0x8                         ; 005bb175
    MOV dword ptr [EBX],EDI             ; 005bb178
    LES EDI,[EDI + -0x8]                ; 005bb17a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb17d
    MOV word ptr ES:[EDI],AX            ; 005bb181
    CMP byte ptr [EBP],0x0              ; 005bb185
    JNZ 0x005bb0a0                      ; 005bb189
        ;   XREF to: 005bb0a0 (CONDITIONAL_JUMP)  ; LAB_005bb0a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb18f
    ADD ESP,0x74                        ; 005bb193
    POP EBP                             ; 005bb196
    POP ES                              ; 005bb197
    POP EDI                             ; 005bb198
    POP ESI                             ; 005bb199
    POP EBX                             ; 005bb19a
    RET                                 ; 005bb19b
    TEST CL,0x40                        ; 005bb19c
        ;   Label: LAB_005bb19c
    JZ 0x005bb1c9                       ; 005bb19f
        ;   XREF to: 005bb1c9 (CONDITIONAL_JUMP)  ; LAB_005bb1c9
    MOV ECX,dword ptr [EBX]             ; 005bb1a1
    ADD ECX,0x4                         ; 005bb1a3
    MOV dword ptr [EBX],ECX             ; 005bb1a6
    MOV EDI,dword ptr [ECX + -0x4]      ; 005bb1a8
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb1ab
    MOV word ptr [EDI],AX               ; 005bb1af
    CMP byte ptr [EBP],0x0              ; 005bb1b2
    JNZ 0x005bb0a0                      ; 005bb1b6
        ;   XREF to: 005bb0a0 (CONDITIONAL_JUMP)  ; LAB_005bb0a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb1bc
    ADD ESP,0x74                        ; 005bb1c0
    POP EBP                             ; 005bb1c3
    POP ES                              ; 005bb1c4
    POP EDI                             ; 005bb1c5
    POP ESI                             ; 005bb1c6
    POP EBX                             ; 005bb1c7
    RET                                 ; 005bb1c8
    MOV EDX,dword ptr [EBX]             ; 005bb1c9
        ;   Label: LAB_005bb1c9
    ADD EDX,0x4                         ; 005bb1cb
    MOV dword ptr [EBX],EDX             ; 005bb1ce
    MOV EDI,dword ptr [EDX + -0x4]      ; 005bb1d0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb1d3
    MOV word ptr [EDI],AX               ; 005bb1d7
    CMP byte ptr [EBP],0x0              ; 005bb1da
    JNZ 0x005bb0a0                      ; 005bb1de
        ;   XREF to: 005bb0a0 (CONDITIONAL_JUMP)  ; LAB_005bb0a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb1e4
    ADD ESP,0x74                        ; 005bb1e8
    POP EBP                             ; 005bb1eb
    POP ES                              ; 005bb1ec
    POP EDI                             ; 005bb1ed
    POP ESI                             ; 005bb1ee
    POP EBX                             ; 005bb1ef
    RET                                 ; 005bb1f0
    TEST CL,0x80                        ; 005bb1f1
        ;   Label: LAB_005bb1f1
    JZ 0x005bb21e                       ; 005bb1f4
        ;   XREF to: 005bb21e (CONDITIONAL_JUMP)  ; LAB_005bb21e
    MOV EAX,dword ptr [EBX]             ; 005bb1f6
    ADD EAX,0x8                         ; 005bb1f8
    MOV dword ptr [EBX],EAX             ; 005bb1fb
    LES EDI,[EAX + -0x8]                ; 005bb1fd
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb200
    MOV dword ptr ES:[EDI],EAX          ; 005bb204
    CMP byte ptr [EBP],0x0              ; 005bb207
    JNZ 0x005bb0a0                      ; 005bb20b
        ;   XREF to: 005bb0a0 (CONDITIONAL_JUMP)  ; LAB_005bb0a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb211
    ADD ESP,0x74                        ; 005bb215
    POP EBP                             ; 005bb218
    POP ES                              ; 005bb219
    POP EDI                             ; 005bb21a
    POP ESI                             ; 005bb21b
    POP EBX                             ; 005bb21c
    RET                                 ; 005bb21d
    TEST CL,0x40                        ; 005bb21e
        ;   Label: LAB_005bb21e
    JZ 0x005bb24a                       ; 005bb221
        ;   XREF to: 005bb24a (CONDITIONAL_JUMP)  ; LAB_005bb24a
    MOV EDI,dword ptr [EBX]             ; 005bb223
    ADD EDI,0x4                         ; 005bb225
    MOV dword ptr [EBX],EDI             ; 005bb228
    MOV EDI,dword ptr [EDI + -0x4]      ; 005bb22a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb22d
    MOV dword ptr [EDI],EAX             ; 005bb231
    CMP byte ptr [EBP],0x0              ; 005bb233
    JNZ 0x005bb0a0                      ; 005bb237
        ;   XREF to: 005bb0a0 (CONDITIONAL_JUMP)  ; LAB_005bb0a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb23d
    ADD ESP,0x74                        ; 005bb241
    POP EBP                             ; 005bb244
    POP ES                              ; 005bb245
    POP EDI                             ; 005bb246
    POP ESI                             ; 005bb247
    POP EBX                             ; 005bb248
    RET                                 ; 005bb249
    MOV ECX,dword ptr [EBX]             ; 005bb24a
        ;   Label: LAB_005bb24a
    ADD ECX,0x4                         ; 005bb24c
    MOV dword ptr [EBX],ECX             ; 005bb24f
    MOV EDI,dword ptr [ECX + -0x4]      ; 005bb251
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb254
    MOV dword ptr [EDI],EAX             ; 005bb258
    CMP byte ptr [EBP],0x0              ; 005bb25a
    JNZ 0x005bb0a0                      ; 005bb25e
        ;   XREF to: 005bb0a0 (CONDITIONAL_JUMP)  ; LAB_005bb0a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb264
    ADD ESP,0x74                        ; 005bb268
    POP EBP                             ; 005bb26b
    POP ES                              ; 005bb26c
    POP EDI                             ; 005bb26d
    POP ESI                             ; 005bb26e
    POP EBX                             ; 005bb26f
    RET                                 ; 005bb270
    MOV EAX,dword ptr [EBX]             ; 005bb271
        ;   Label: LAB_005bb271
    MOV dword ptr [ESP + 0x64],EAX      ; 005bb273
    LEA EAX,[ESP + 0x70]                ; 005bb277
    PUSH EAX                            ; 005bb27b
    LEA EAX,[ESP + 0x4]                 ; 005bb27c
    PUSH EAX                            ; 005bb280
    LEA EAX,[ESP + 0x6c]                ; 005bb281
    PUSH EAX                            ; 005bb285
    LEA EAX,[ESP + 0x44]                ; 005bb286
    PUSH EAX                            ; 005bb28a
    CALL FUN_005bb938                   ; 005bb28b
        ;   XREF to: 005bb938 (UNCONDITIONAL_CALL)  ; undefined FUN_005bb938()
    ADD ESP,0x10                        ; 005bb290
    MOV EDI,EAX                         ; 005bb293
    MOV EAX,dword ptr [ESP + 0x64]      ; 005bb295
    MOV dword ptr [EBX],EAX             ; 005bb299
    MOV dword ptr [ESP + 0x6c],EDX      ; 005bb29b
    MOV EAX,dword ptr [ESP + 0x20]      ; 005bb29f
    MOV ECX,dword ptr [ESP + 0x24]      ; 005bb2a3
    MOV EDX,dword ptr [ESP + 0x28]      ; 005bb2a7
    ADD EAX,ECX                         ; 005bb2ab
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005bb2ad
    ADD EAX,EDX                         ; 005bb2b1
    MOV EDX,dword ptr [ESP + 0x30]      ; 005bb2b3
    ADD EAX,ECX                         ; 005bb2b7
    MOV ECX,dword ptr [ESP + 0x34]      ; 005bb2b9
    ADD EAX,EDX                         ; 005bb2bd
    MOV EDX,dword ptr [ESP + 0x4]       ; 005bb2bf
    ADD EAX,ECX                         ; 005bb2c3
    SUB EDX,EAX                         ; 005bb2c5
    MOV dword ptr [ESP + 0x4],EDX       ; 005bb2c7
    TEST byte ptr [ESP + 0x1e],0x8      ; 005bb2cb
    JNZ 0x005bb2f2                      ; 005bb2d0
        ;   XREF to: 005bb2f2 (CONDITIONAL_JUMP)  ; LAB_005bb2f2
    CMP byte ptr [ESP + 0x16],0x20      ; 005bb2d2
    JNZ 0x005bb2f2                      ; 005bb2d7
        ;   XREF to: 005bb2f2 (CONDITIONAL_JUMP)  ; LAB_005bb2f2
    CMP dword ptr [ESP + 0x4],0x0       ; 005bb2d9
        ;   Label: LAB_005bb2d9
    JLE 0x005bb2f2                      ; 005bb2de
        ;   XREF to: 005bb2f2 (CONDITIONAL_JUMP)  ; LAB_005bb2f2
    PUSH 0x20                           ; 005bb2e0
    LEA EAX,[ESP + 0x4]                 ; 005bb2e2
    PUSH EAX                            ; 005bb2e6
    CALL ESI                            ; 005bb2e7
    ADD ESP,0x8                         ; 005bb2e9
    DEC dword ptr [ESP + 0x4]           ; 005bb2ec
    JMP 0x005bb2d9                      ; 005bb2f0
        ;   XREF to: 005bb2d9 (UNCONDITIONAL_JUMP)  ; LAB_005bb2d9
    LEA EAX,[ESP + 0x38]                ; 005bb2f2
        ;   Label: LAB_005bb2f2
    MOV ECX,dword ptr [ESP + 0x20]      ; 005bb2f6
    MOV dword ptr [ESP + 0x68],EAX      ; 005bb2fa
    TEST ECX,ECX                        ; 005bb2fe
    JLE 0x005bb32b                      ; 005bb300
        ;   XREF to: 005bb32b (CONDITIONAL_JUMP)  ; LAB_005bb32b
    MOV EDX,dword ptr [ESP + 0x68]      ; 005bb302
        ;   Label: LAB_005bb302
    XOR EAX,EAX                         ; 005bb306
    MOV AL,byte ptr [EDX]               ; 005bb308
    PUSH EAX                            ; 005bb30a
    LEA EAX,[ESP + 0x4]                 ; 005bb30b
    PUSH EAX                            ; 005bb30f
    CALL ESI                            ; 005bb310
    ADD ESP,0x8                         ; 005bb312
    MOV EAX,dword ptr [ESP + 0x68]      ; 005bb315
    MOV EDX,dword ptr [ESP + 0x20]      ; 005bb319
    INC EAX                             ; 005bb31d
    DEC EDX                             ; 005bb31e
    MOV dword ptr [ESP + 0x68],EAX      ; 005bb31f
    MOV dword ptr [ESP + 0x20],EDX      ; 005bb323
    TEST EDX,EDX                        ; 005bb327
    JG 0x005bb302                       ; 005bb329
        ;   XREF to: 005bb302 (CONDITIONAL_JUMP)  ; LAB_005bb302
    CMP dword ptr [ESP + 0x24],0x0      ; 005bb32b
        ;   Label: LAB_005bb32b
    JLE 0x005bb344                      ; 005bb330
        ;   XREF to: 005bb344 (CONDITIONAL_JUMP)  ; LAB_005bb344
    PUSH 0x30                           ; 005bb332
    LEA EAX,[ESP + 0x4]                 ; 005bb334
    PUSH EAX                            ; 005bb338
    CALL ESI                            ; 005bb339
    ADD ESP,0x8                         ; 005bb33b
    DEC dword ptr [ESP + 0x24]          ; 005bb33e
    JMP 0x005bb32b                      ; 005bb342
        ;   XREF to: 005bb32b (UNCONDITIONAL_JUMP)  ; LAB_005bb32b
    MOV AL,byte ptr [ESP + 0x15]        ; 005bb344
        ;   Label: LAB_005bb344
    CMP AL,0x73                         ; 005bb348
    JNZ 0x005bb396                      ; 005bb34a
        ;   XREF to: 005bb396 (CONDITIONAL_JUMP)  ; LAB_005bb396
    TEST byte ptr [ESP + 0x1e],0x20     ; 005bb34c
    JZ 0x005bb36f                       ; 005bb351
        ;   XREF to: 005bb36f (CONDITIONAL_JUMP)  ; LAB_005bb36f
    PUSH ESI                            ; 005bb353
    LEA EAX,[ESP + 0x4]                 ; 005bb354
    PUSH EAX                            ; 005bb358
    XOR EAX,EAX                         ; 005bb359
    MOV AX,word ptr [ESP + 0x74]        ; 005bb35b
    PUSH EAX                            ; 005bb360
    PUSH EDI                            ; 005bb361
    CALL FUN_005bb8c0                   ; 005bb362
        ;   XREF to: 005bb8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005bb8c0()
    ADD ESP,0x10                        ; 005bb367
    JMP 0x005bb3da                      ; 005bb36a
        ;   XREF to: 005bb3da (UNCONDITIONAL_JUMP)  ; LAB_005bb3da
    MOV ES,word ptr [ESP + 0x6c]        ; 005bb36f
        ;   Label: LAB_005bb36f
    CMP dword ptr [ESP + 0x28],0x0      ; 005bb373
        ;   Label: LAB_005bb373
    JLE 0x005bb3da                      ; 005bb378
        ;   XREF to: 005bb3da (CONDITIONAL_JUMP)  ; LAB_005bb3da
    XOR EAX,EAX                         ; 005bb37a
    MOV AL,byte ptr ES:[EDI]            ; 005bb37c
    PUSH EAX                            ; 005bb37f
    LEA EAX,[ESP + 0x4]                 ; 005bb380
    PUSH EAX                            ; 005bb384
    CALL ESI                            ; 005bb385
    ADD ESP,0x8                         ; 005bb387
    MOV ECX,dword ptr [ESP + 0x28]      ; 005bb38a
    DEC ECX                             ; 005bb38e
    INC EDI                             ; 005bb38f
    MOV dword ptr [ESP + 0x28],ECX      ; 005bb390
    JMP 0x005bb373                      ; 005bb394
        ;   XREF to: 005bb373 (UNCONDITIONAL_JUMP)  ; LAB_005bb373
    CMP AL,0x53                         ; 005bb396
        ;   Label: LAB_005bb396
    JNZ 0x005bb3b3                      ; 005bb398
        ;   XREF to: 005bb3b3 (CONDITIONAL_JUMP)  ; LAB_005bb3b3
    PUSH ESI                            ; 005bb39a
    LEA EAX,[ESP + 0x4]                 ; 005bb39b
    PUSH EAX                            ; 005bb39f
    XOR EAX,EAX                         ; 005bb3a0
    MOV AX,word ptr [ESP + 0x74]        ; 005bb3a2
    PUSH EAX                            ; 005bb3a7
    PUSH EDI                            ; 005bb3a8
    CALL FUN_005bb8c0                   ; 005bb3a9
        ;   XREF to: 005bb8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005bb8c0()
    ADD ESP,0x10                        ; 005bb3ae
    JMP 0x005bb3da                      ; 005bb3b1
        ;   XREF to: 005bb3da (UNCONDITIONAL_JUMP)  ; LAB_005bb3da
    MOV ES,word ptr [ESP + 0x6c]        ; 005bb3b3
        ;   Label: LAB_005bb3b3
    CMP dword ptr [ESP + 0x28],0x0      ; 005bb3b7
        ;   Label: LAB_005bb3b7
    JLE 0x005bb3da                      ; 005bb3bc
        ;   XREF to: 005bb3da (CONDITIONAL_JUMP)  ; LAB_005bb3da
    XOR EAX,EAX                         ; 005bb3be
    MOV AL,byte ptr ES:[EDI]            ; 005bb3c0
    PUSH EAX                            ; 005bb3c3
    LEA EAX,[ESP + 0x4]                 ; 005bb3c4
    PUSH EAX                            ; 005bb3c8
    CALL ESI                            ; 005bb3c9
    ADD ESP,0x8                         ; 005bb3cb
    MOV EAX,dword ptr [ESP + 0x28]      ; 005bb3ce
    DEC EAX                             ; 005bb3d2
    INC EDI                             ; 005bb3d3
    MOV dword ptr [ESP + 0x28],EAX      ; 005bb3d4
    JMP 0x005bb3b7                      ; 005bb3d8
        ;   XREF to: 005bb3b7 (UNCONDITIONAL_JUMP)  ; LAB_005bb3b7
    CMP dword ptr [ESP + 0x2c],0x0      ; 005bb3da
        ;   Label: LAB_005bb3da
    JLE 0x005bb3f3                      ; 005bb3df
        ;   XREF to: 005bb3f3 (CONDITIONAL_JUMP)  ; LAB_005bb3f3
    PUSH 0x30                           ; 005bb3e1
    LEA EAX,[ESP + 0x4]                 ; 005bb3e3
    PUSH EAX                            ; 005bb3e7
    CALL ESI                            ; 005bb3e8
    ADD ESP,0x8                         ; 005bb3ea
    DEC dword ptr [ESP + 0x2c]          ; 005bb3ed
    JMP 0x005bb3da                      ; 005bb3f1
        ;   XREF to: 005bb3da (UNCONDITIONAL_JUMP)  ; LAB_005bb3da
    MOV ES,word ptr [ESP + 0x6c]        ; 005bb3f3
        ;   Label: LAB_005bb3f3
    CMP dword ptr [ESP + 0x30],0x0      ; 005bb3f7
        ;   Label: LAB_005bb3f7
    JLE 0x005bb41a                      ; 005bb3fc
        ;   XREF to: 005bb41a (CONDITIONAL_JUMP)  ; LAB_005bb41a
    XOR EAX,EAX                         ; 005bb3fe
    MOV AL,byte ptr ES:[EDI]            ; 005bb400
    PUSH EAX                            ; 005bb403
    LEA EAX,[ESP + 0x4]                 ; 005bb404
    PUSH EAX                            ; 005bb408
    CALL ESI                            ; 005bb409
    ADD ESP,0x8                         ; 005bb40b
    MOV EAX,dword ptr [ESP + 0x30]      ; 005bb40e
    DEC EAX                             ; 005bb412
    INC EDI                             ; 005bb413
    MOV dword ptr [ESP + 0x30],EAX      ; 005bb414
    JMP 0x005bb3f7                      ; 005bb418
        ;   XREF to: 005bb3f7 (UNCONDITIONAL_JUMP)  ; LAB_005bb3f7
    CMP dword ptr [ESP + 0x34],0x0      ; 005bb41a
        ;   Label: LAB_005bb41a
    JLE 0x005bb433                      ; 005bb41f
        ;   XREF to: 005bb433 (CONDITIONAL_JUMP)  ; LAB_005bb433
    PUSH 0x30                           ; 005bb421
    LEA EAX,[ESP + 0x4]                 ; 005bb423
    PUSH EAX                            ; 005bb427
    CALL ESI                            ; 005bb428
    ADD ESP,0x8                         ; 005bb42a
    DEC dword ptr [ESP + 0x34]          ; 005bb42d
    JMP 0x005bb41a                      ; 005bb431
        ;   XREF to: 005bb41a (UNCONDITIONAL_JUMP)  ; LAB_005bb41a
    TEST byte ptr [ESP + 0x1e],0x8      ; 005bb433
        ;   Label: LAB_005bb433
    JZ 0x005bb441                       ; 005bb438
        ;   XREF to: 005bb441 (CONDITIONAL_JUMP)  ; LAB_005bb441
    CMP dword ptr [ESP + 0x4],0x0       ; 005bb43a
        ;   Label: LAB_005bb43a
    JG 0x005bb458                       ; 005bb43f
        ;   XREF to: 005bb458 (CONDITIONAL_JUMP)  ; LAB_005bb458
    CMP byte ptr [EBP],0x0              ; 005bb441
        ;   Label: LAB_005bb441
    JNZ 0x005bb0a0                      ; 005bb445
        ;   XREF to: 005bb0a0 (CONDITIONAL_JUMP)  ; LAB_005bb0a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb44b
    ADD ESP,0x74                        ; 005bb44f
    POP EBP                             ; 005bb452
    POP ES                              ; 005bb453
    POP EDI                             ; 005bb454
    POP ESI                             ; 005bb455
    POP EBX                             ; 005bb456
    RET                                 ; 005bb457
    PUSH 0x20                           ; 005bb458
        ;   Label: LAB_005bb458
    LEA EAX,[ESP + 0x4]                 ; 005bb45a
    PUSH EAX                            ; 005bb45e
    CALL ESI                            ; 005bb45f
    ADD ESP,0x8                         ; 005bb461
    DEC dword ptr [ESP + 0x4]           ; 005bb464
    JMP 0x005bb43a                      ; 005bb468
        ;   XREF to: 005bb43a (UNCONDITIONAL_JUMP)  ; LAB_005bb43a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb46a
        ;   Label: LAB_005bb46a
    ADD ESP,0x74                        ; 005bb46e
    POP EBP                             ; 005bb471
    POP ES                              ; 005bb472
        ;   Label: LAB_005bb472
    POP EDI                             ; 005bb473
    POP ESI                             ; 005bb474
    POP EBX                             ; 005bb475
    RET                                 ; 005bb476

