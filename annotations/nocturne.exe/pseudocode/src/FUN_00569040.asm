; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00569040(undefined4 param_1,char *param_2,int *param_3,code *param_4)
;
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x78]:4  local_78
; undefined2       Stack[-0x6c]:2  local_6c
; undefined2       Stack[-0x6a]:2  local_6a
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[2]:
;   FUN_0056ae10 at 0056aea0
;   crt_stdio.c_vsprintf_FUN_00563a08 at 00563a1d
;
; Called Functions:
;   FUN_00569468
;   FUN_005698b0
;   FUN_00569928
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569040
        ;   Label: FUN_00569040
    PUSH ESI                            ; 00569041
    PUSH EDI                            ; 00569042
    PUSH ES                             ; 00569043
    PUSH EBP                            ; 00569044
    SUB ESP,0x74                        ; 00569045
    MOV EAX,dword ptr [ESP + 0x90]      ; 00569048
    MOV EBX,dword ptr [ESP + 0x94]      ; 0056904f
    MOV ESI,dword ptr [ESP + 0x98]      ; 00569056
    XOR DL,DL                           ; 0056905d
    MOV byte ptr [ESP + 0x70],DL        ; 0056905f
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00569063
    MOV dword ptr [ESP],EDX             ; 0056906a
    XOR EDX,EDX                         ; 0056906d
    MOV ECX,0x64                        ; 0056906f
    MOV word ptr [ESP + 0x1e],DX        ; 00569074
    XOR EDX,EDX                         ; 00569079
    MOV word ptr [ESP + 0x1c],CX        ; 0056907b
    MOV dword ptr [ESP + 0x10],EDX      ; 00569080
    MOV DH,byte ptr [EAX]               ; 00569084
    MOV EBP,EAX                         ; 00569086
    TEST DH,DH                          ; 00569088
    JZ 0x0056945a                       ; 0056908a
        ;   XREF to: 0056945a (CONDITIONAL_JUMP)  ; LAB_0056945a
    MOV CH,byte ptr [EBP]               ; 00569090
        ;   Label: LAB_00569090
    LEA EDI,[EBP + 0x1]                 ; 00569093
    CMP CH,0x25                         ; 00569096
    JZ 0x005690b1                       ; 00569099
        ;   XREF to: 005690b1 (CONDITIONAL_JUMP)  ; LAB_005690b1
    XOR EAX,EAX                         ; 0056909b
    MOV AL,CH                           ; 0056909d
    PUSH EAX                            ; 0056909f
    LEA EAX,[ESP + 0x4]                 ; 005690a0
    PUSH EAX                            ; 005690a4
    MOV EBP,EDI                         ; 005690a5
    CALL ESI                            ; 005690a7
    ADD ESP,0x8                         ; 005690a9
    JMP 0x00569431                      ; 005690ac
        ;   XREF to: 00569431 (UNCONDITIONAL_JUMP)  ; LAB_00569431
    MOV EAX,dword ptr [EBX]             ; 005690b1
        ;   Label: LAB_005690b1
    MOV dword ptr [ESP + 0x60],EAX      ; 005690b3
    MOV EAX,ESP                         ; 005690b7
    PUSH EAX                            ; 005690b9
    LEA EAX,[ESP + 0x64]                ; 005690ba
    PUSH EAX                            ; 005690be
    PUSH EDI                            ; 005690bf
    CALL FUN_00569468                   ; 005690c0
        ;   XREF to: 00569468 (UNCONDITIONAL_CALL)  ; undefined FUN_00569468()
    ADD ESP,0xc                         ; 005690c5
    MOV EBP,EAX                         ; 005690c8
    MOV EAX,dword ptr [ESP + 0x60]      ; 005690ca
    MOV dword ptr [EBX],EAX             ; 005690ce
    MOV AL,byte ptr [EBP]               ; 005690d0
    INC EBP                             ; 005690d3
    MOV byte ptr [ESP + 0x15],AL        ; 005690d4
    TEST AL,AL                          ; 005690d8
    JZ 0x0056945a                       ; 005690da
        ;   XREF to: 0056945a (CONDITIONAL_JUMP)  ; LAB_0056945a
    CMP AL,0x6e                         ; 005690e0
    JNZ 0x00569261                      ; 005690e2
        ;   XREF to: 00569261 (CONDITIONAL_JUMP)  ; LAB_00569261
    MOV CL,byte ptr [ESP + 0x1e]        ; 005690e8
    TEST CL,0x20                        ; 005690ec
    JZ 0x00569155                       ; 005690ef
        ;   XREF to: 00569155 (CONDITIONAL_JUMP)  ; LAB_00569155
    TEST CL,0x80                        ; 005690f1
    JZ 0x00569112                       ; 005690f4
        ;   XREF to: 00569112 (CONDITIONAL_JUMP)  ; LAB_00569112
    MOV ECX,dword ptr [EBX]             ; 005690f6
    ADD ECX,0x8                         ; 005690f8
    MOV dword ptr [EBX],ECX             ; 005690fb
    LES EDI,[ECX + -0x8]                ; 005690fd
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569100
    MOV dword ptr ES:[EDI],EAX          ; 00569104
    CMP byte ptr [EBP],0x0              ; 00569107
    JNZ 0x00569090                      ; 0056910b
        ;   XREF to: 00569090 (CONDITIONAL_JUMP)  ; LAB_00569090
    JMP 0x0056945a                      ; 0056910d
        ;   XREF to: 0056945a (UNCONDITIONAL_JUMP)  ; LAB_0056945a
    TEST CL,0x40                        ; 00569112
        ;   Label: LAB_00569112
    JZ 0x00569136                       ; 00569115
        ;   XREF to: 00569136 (CONDITIONAL_JUMP)  ; LAB_00569136
    MOV EDX,dword ptr [EBX]             ; 00569117
    ADD EDX,0x4                         ; 00569119
    MOV dword ptr [EBX],EDX             ; 0056911c
    MOV EDI,dword ptr [EDX + -0x4]      ; 0056911e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569121
    MOV dword ptr [EDI],EAX             ; 00569125
    CMP byte ptr [EBP],0x0              ; 00569127
    JNZ 0x00569090                      ; 0056912b
        ;   XREF to: 00569090 (CONDITIONAL_JUMP)  ; LAB_00569090
    JMP 0x0056945a                      ; 00569131
        ;   XREF to: 0056945a (UNCONDITIONAL_JUMP)  ; LAB_0056945a
    MOV EAX,dword ptr [EBX]             ; 00569136
        ;   Label: LAB_00569136
    ADD EAX,0x4                         ; 00569138
    MOV dword ptr [EBX],EAX             ; 0056913b
    MOV EDI,dword ptr [EAX + -0x4]      ; 0056913d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569140
    MOV dword ptr [EDI],EAX             ; 00569144
    CMP byte ptr [EBP],0x0              ; 00569146
    JNZ 0x00569090                      ; 0056914a
        ;   XREF to: 00569090 (CONDITIONAL_JUMP)  ; LAB_00569090
    JMP 0x0056945a                      ; 00569150
        ;   XREF to: 0056945a (UNCONDITIONAL_JUMP)  ; LAB_0056945a
    TEST CL,0x10                        ; 00569155
        ;   Label: LAB_00569155
    JZ 0x005691e1                       ; 00569158
        ;   XREF to: 005691e1 (CONDITIONAL_JUMP)  ; LAB_005691e1
    TEST CL,0x80                        ; 0056915e
    JZ 0x0056918c                       ; 00569161
        ;   XREF to: 0056918c (CONDITIONAL_JUMP)  ; LAB_0056918c
    MOV EDI,dword ptr [EBX]             ; 00569163
    ADD EDI,0x8                         ; 00569165
    MOV dword ptr [EBX],EDI             ; 00569168
    LES EDI,[EDI + -0x8]                ; 0056916a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056916d
    MOV word ptr ES:[EDI],AX            ; 00569171
    CMP byte ptr [EBP],0x0              ; 00569175
    JNZ 0x00569090                      ; 00569179
        ;   XREF to: 00569090 (CONDITIONAL_JUMP)  ; LAB_00569090
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056917f
    ADD ESP,0x74                        ; 00569183
    POP EBP                             ; 00569186
    POP ES                              ; 00569187
    POP EDI                             ; 00569188
    POP ESI                             ; 00569189
    POP EBX                             ; 0056918a
    RET                                 ; 0056918b
    TEST CL,0x40                        ; 0056918c
        ;   Label: LAB_0056918c
    JZ 0x005691b9                       ; 0056918f
        ;   XREF to: 005691b9 (CONDITIONAL_JUMP)  ; LAB_005691b9
    MOV ECX,dword ptr [EBX]             ; 00569191
    ADD ECX,0x4                         ; 00569193
    MOV dword ptr [EBX],ECX             ; 00569196
    MOV EDI,dword ptr [ECX + -0x4]      ; 00569198
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056919b
    MOV word ptr [EDI],AX               ; 0056919f
    CMP byte ptr [EBP],0x0              ; 005691a2
    JNZ 0x00569090                      ; 005691a6
        ;   XREF to: 00569090 (CONDITIONAL_JUMP)  ; LAB_00569090
    MOV EAX,dword ptr [ESP + 0x10]      ; 005691ac
    ADD ESP,0x74                        ; 005691b0
    POP EBP                             ; 005691b3
    POP ES                              ; 005691b4
    POP EDI                             ; 005691b5
    POP ESI                             ; 005691b6
    POP EBX                             ; 005691b7
    RET                                 ; 005691b8
    MOV EDX,dword ptr [EBX]             ; 005691b9
        ;   Label: LAB_005691b9
    ADD EDX,0x4                         ; 005691bb
    MOV dword ptr [EBX],EDX             ; 005691be
    MOV EDI,dword ptr [EDX + -0x4]      ; 005691c0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005691c3
    MOV word ptr [EDI],AX               ; 005691c7
    CMP byte ptr [EBP],0x0              ; 005691ca
    JNZ 0x00569090                      ; 005691ce
        ;   XREF to: 00569090 (CONDITIONAL_JUMP)  ; LAB_00569090
    MOV EAX,dword ptr [ESP + 0x10]      ; 005691d4
    ADD ESP,0x74                        ; 005691d8
    POP EBP                             ; 005691db
    POP ES                              ; 005691dc
    POP EDI                             ; 005691dd
    POP ESI                             ; 005691de
    POP EBX                             ; 005691df
    RET                                 ; 005691e0
    TEST CL,0x80                        ; 005691e1
        ;   Label: LAB_005691e1
    JZ 0x0056920e                       ; 005691e4
        ;   XREF to: 0056920e (CONDITIONAL_JUMP)  ; LAB_0056920e
    MOV EAX,dword ptr [EBX]             ; 005691e6
    ADD EAX,0x8                         ; 005691e8
    MOV dword ptr [EBX],EAX             ; 005691eb
    LES EDI,[EAX + -0x8]                ; 005691ed
    MOV EAX,dword ptr [ESP + 0x10]      ; 005691f0
    MOV dword ptr ES:[EDI],EAX          ; 005691f4
    CMP byte ptr [EBP],0x0              ; 005691f7
    JNZ 0x00569090                      ; 005691fb
        ;   XREF to: 00569090 (CONDITIONAL_JUMP)  ; LAB_00569090
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569201
    ADD ESP,0x74                        ; 00569205
    POP EBP                             ; 00569208
    POP ES                              ; 00569209
    POP EDI                             ; 0056920a
    POP ESI                             ; 0056920b
    POP EBX                             ; 0056920c
    RET                                 ; 0056920d
    TEST CL,0x40                        ; 0056920e
        ;   Label: LAB_0056920e
    JZ 0x0056923a                       ; 00569211
        ;   XREF to: 0056923a (CONDITIONAL_JUMP)  ; LAB_0056923a
    MOV EDI,dword ptr [EBX]             ; 00569213
    ADD EDI,0x4                         ; 00569215
    MOV dword ptr [EBX],EDI             ; 00569218
    MOV EDI,dword ptr [EDI + -0x4]      ; 0056921a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056921d
    MOV dword ptr [EDI],EAX             ; 00569221
    CMP byte ptr [EBP],0x0              ; 00569223
    JNZ 0x00569090                      ; 00569227
        ;   XREF to: 00569090 (CONDITIONAL_JUMP)  ; LAB_00569090
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056922d
    ADD ESP,0x74                        ; 00569231
    POP EBP                             ; 00569234
    POP ES                              ; 00569235
    POP EDI                             ; 00569236
    POP ESI                             ; 00569237
    POP EBX                             ; 00569238
    RET                                 ; 00569239
    MOV ECX,dword ptr [EBX]             ; 0056923a
        ;   Label: LAB_0056923a
    ADD ECX,0x4                         ; 0056923c
    MOV dword ptr [EBX],ECX             ; 0056923f
    MOV EDI,dword ptr [ECX + -0x4]      ; 00569241
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569244
    MOV dword ptr [EDI],EAX             ; 00569248
    CMP byte ptr [EBP],0x0              ; 0056924a
    JNZ 0x00569090                      ; 0056924e
        ;   XREF to: 00569090 (CONDITIONAL_JUMP)  ; LAB_00569090
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569254
    ADD ESP,0x74                        ; 00569258
    POP EBP                             ; 0056925b
    POP ES                              ; 0056925c
    POP EDI                             ; 0056925d
    POP ESI                             ; 0056925e
    POP EBX                             ; 0056925f
    RET                                 ; 00569260
    MOV EAX,dword ptr [EBX]             ; 00569261
        ;   Label: LAB_00569261
    MOV dword ptr [ESP + 0x64],EAX      ; 00569263
    LEA EAX,[ESP + 0x70]                ; 00569267
    PUSH EAX                            ; 0056926b
    LEA EAX,[ESP + 0x4]                 ; 0056926c
    PUSH EAX                            ; 00569270
    LEA EAX,[ESP + 0x6c]                ; 00569271
    PUSH EAX                            ; 00569275
    LEA EAX,[ESP + 0x44]                ; 00569276
    PUSH EAX                            ; 0056927a
    CALL FUN_00569928                   ; 0056927b
        ;   XREF to: 00569928 (UNCONDITIONAL_CALL)  ; undefined FUN_00569928()
    ADD ESP,0x10                        ; 00569280
    MOV EDI,EAX                         ; 00569283
    MOV EAX,dword ptr [ESP + 0x64]      ; 00569285
    MOV dword ptr [EBX],EAX             ; 00569289
    MOV dword ptr [ESP + 0x6c],EDX      ; 0056928b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056928f
    MOV ECX,dword ptr [ESP + 0x24]      ; 00569293
    MOV EDX,dword ptr [ESP + 0x28]      ; 00569297
    ADD EAX,ECX                         ; 0056929b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0056929d
    ADD EAX,EDX                         ; 005692a1
    MOV EDX,dword ptr [ESP + 0x30]      ; 005692a3
    ADD EAX,ECX                         ; 005692a7
    MOV ECX,dword ptr [ESP + 0x34]      ; 005692a9
    ADD EAX,EDX                         ; 005692ad
    MOV EDX,dword ptr [ESP + 0x4]       ; 005692af
    ADD EAX,ECX                         ; 005692b3
    SUB EDX,EAX                         ; 005692b5
    MOV dword ptr [ESP + 0x4],EDX       ; 005692b7
    TEST byte ptr [ESP + 0x1e],0x8      ; 005692bb
    JNZ 0x005692e2                      ; 005692c0
        ;   XREF to: 005692e2 (CONDITIONAL_JUMP)  ; LAB_005692e2
    CMP byte ptr [ESP + 0x16],0x20      ; 005692c2
    JNZ 0x005692e2                      ; 005692c7
        ;   XREF to: 005692e2 (CONDITIONAL_JUMP)  ; LAB_005692e2
    CMP dword ptr [ESP + 0x4],0x0       ; 005692c9
        ;   Label: LAB_005692c9
    JLE 0x005692e2                      ; 005692ce
        ;   XREF to: 005692e2 (CONDITIONAL_JUMP)  ; LAB_005692e2
    PUSH 0x20                           ; 005692d0
    LEA EAX,[ESP + 0x4]                 ; 005692d2
    PUSH EAX                            ; 005692d6
    CALL ESI                            ; 005692d7
    ADD ESP,0x8                         ; 005692d9
    DEC dword ptr [ESP + 0x4]           ; 005692dc
    JMP 0x005692c9                      ; 005692e0
        ;   XREF to: 005692c9 (UNCONDITIONAL_JUMP)  ; LAB_005692c9
    LEA EAX,[ESP + 0x38]                ; 005692e2
        ;   Label: LAB_005692e2
    MOV ECX,dword ptr [ESP + 0x20]      ; 005692e6
    MOV dword ptr [ESP + 0x68],EAX      ; 005692ea
    TEST ECX,ECX                        ; 005692ee
    JLE 0x0056931b                      ; 005692f0
        ;   XREF to: 0056931b (CONDITIONAL_JUMP)  ; LAB_0056931b
    MOV EDX,dword ptr [ESP + 0x68]      ; 005692f2
        ;   Label: LAB_005692f2
    XOR EAX,EAX                         ; 005692f6
    MOV AL,byte ptr [EDX]               ; 005692f8
    PUSH EAX                            ; 005692fa
    LEA EAX,[ESP + 0x4]                 ; 005692fb
    PUSH EAX                            ; 005692ff
    CALL ESI                            ; 00569300
    ADD ESP,0x8                         ; 00569302
    MOV EAX,dword ptr [ESP + 0x68]      ; 00569305
    MOV EDX,dword ptr [ESP + 0x20]      ; 00569309
    INC EAX                             ; 0056930d
    DEC EDX                             ; 0056930e
    MOV dword ptr [ESP + 0x68],EAX      ; 0056930f
    MOV dword ptr [ESP + 0x20],EDX      ; 00569313
    TEST EDX,EDX                        ; 00569317
    JG 0x005692f2                       ; 00569319
        ;   XREF to: 005692f2 (CONDITIONAL_JUMP)  ; LAB_005692f2
    CMP dword ptr [ESP + 0x24],0x0      ; 0056931b
        ;   Label: LAB_0056931b
    JLE 0x00569334                      ; 00569320
        ;   XREF to: 00569334 (CONDITIONAL_JUMP)  ; LAB_00569334
    PUSH 0x30                           ; 00569322
    LEA EAX,[ESP + 0x4]                 ; 00569324
    PUSH EAX                            ; 00569328
    CALL ESI                            ; 00569329
    ADD ESP,0x8                         ; 0056932b
    DEC dword ptr [ESP + 0x24]          ; 0056932e
    JMP 0x0056931b                      ; 00569332
        ;   XREF to: 0056931b (UNCONDITIONAL_JUMP)  ; LAB_0056931b
    MOV AL,byte ptr [ESP + 0x15]        ; 00569334
        ;   Label: LAB_00569334
    CMP AL,0x73                         ; 00569338
    JNZ 0x00569386                      ; 0056933a
        ;   XREF to: 00569386 (CONDITIONAL_JUMP)  ; LAB_00569386
    TEST byte ptr [ESP + 0x1e],0x20     ; 0056933c
    JZ 0x0056935f                       ; 00569341
        ;   XREF to: 0056935f (CONDITIONAL_JUMP)  ; LAB_0056935f
    PUSH ESI                            ; 00569343
    LEA EAX,[ESP + 0x4]                 ; 00569344
    PUSH EAX                            ; 00569348
    XOR EAX,EAX                         ; 00569349
    MOV AX,word ptr [ESP + 0x74]        ; 0056934b
    PUSH EAX                            ; 00569350
    PUSH EDI                            ; 00569351
    CALL FUN_005698b0                   ; 00569352
        ;   XREF to: 005698b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005698b0()
    ADD ESP,0x10                        ; 00569357
    JMP 0x005693ca                      ; 0056935a
        ;   XREF to: 005693ca (UNCONDITIONAL_JUMP)  ; LAB_005693ca
    MOV ES,word ptr [ESP + 0x6c]        ; 0056935f
        ;   Label: LAB_0056935f
    CMP dword ptr [ESP + 0x28],0x0      ; 00569363
        ;   Label: LAB_00569363
    JLE 0x005693ca                      ; 00569368
        ;   XREF to: 005693ca (CONDITIONAL_JUMP)  ; LAB_005693ca
    XOR EAX,EAX                         ; 0056936a
    MOV AL,byte ptr ES:[EDI]            ; 0056936c
    PUSH EAX                            ; 0056936f
    LEA EAX,[ESP + 0x4]                 ; 00569370
    PUSH EAX                            ; 00569374
    CALL ESI                            ; 00569375
    ADD ESP,0x8                         ; 00569377
    MOV ECX,dword ptr [ESP + 0x28]      ; 0056937a
    DEC ECX                             ; 0056937e
    INC EDI                             ; 0056937f
    MOV dword ptr [ESP + 0x28],ECX      ; 00569380
    JMP 0x00569363                      ; 00569384
        ;   XREF to: 00569363 (UNCONDITIONAL_JUMP)  ; LAB_00569363
    CMP AL,0x53                         ; 00569386
        ;   Label: LAB_00569386
    JNZ 0x005693a3                      ; 00569388
        ;   XREF to: 005693a3 (CONDITIONAL_JUMP)  ; LAB_005693a3
    PUSH ESI                            ; 0056938a
    LEA EAX,[ESP + 0x4]                 ; 0056938b
    PUSH EAX                            ; 0056938f
    XOR EAX,EAX                         ; 00569390
    MOV AX,word ptr [ESP + 0x74]        ; 00569392
    PUSH EAX                            ; 00569397
    PUSH EDI                            ; 00569398
    CALL FUN_005698b0                   ; 00569399
        ;   XREF to: 005698b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005698b0()
    ADD ESP,0x10                        ; 0056939e
    JMP 0x005693ca                      ; 005693a1
        ;   XREF to: 005693ca (UNCONDITIONAL_JUMP)  ; LAB_005693ca
    MOV ES,word ptr [ESP + 0x6c]        ; 005693a3
        ;   Label: LAB_005693a3
    CMP dword ptr [ESP + 0x28],0x0      ; 005693a7
        ;   Label: LAB_005693a7
    JLE 0x005693ca                      ; 005693ac
        ;   XREF to: 005693ca (CONDITIONAL_JUMP)  ; LAB_005693ca
    XOR EAX,EAX                         ; 005693ae
    MOV AL,byte ptr ES:[EDI]            ; 005693b0
    PUSH EAX                            ; 005693b3
    LEA EAX,[ESP + 0x4]                 ; 005693b4
    PUSH EAX                            ; 005693b8
    CALL ESI                            ; 005693b9
    ADD ESP,0x8                         ; 005693bb
    MOV EAX,dword ptr [ESP + 0x28]      ; 005693be
    DEC EAX                             ; 005693c2
    INC EDI                             ; 005693c3
    MOV dword ptr [ESP + 0x28],EAX      ; 005693c4
    JMP 0x005693a7                      ; 005693c8
        ;   XREF to: 005693a7 (UNCONDITIONAL_JUMP)  ; LAB_005693a7
    CMP dword ptr [ESP + 0x2c],0x0      ; 005693ca
        ;   Label: LAB_005693ca
    JLE 0x005693e3                      ; 005693cf
        ;   XREF to: 005693e3 (CONDITIONAL_JUMP)  ; LAB_005693e3
    PUSH 0x30                           ; 005693d1
    LEA EAX,[ESP + 0x4]                 ; 005693d3
    PUSH EAX                            ; 005693d7
    CALL ESI                            ; 005693d8
    ADD ESP,0x8                         ; 005693da
    DEC dword ptr [ESP + 0x2c]          ; 005693dd
    JMP 0x005693ca                      ; 005693e1
        ;   XREF to: 005693ca (UNCONDITIONAL_JUMP)  ; LAB_005693ca
    MOV ES,word ptr [ESP + 0x6c]        ; 005693e3
        ;   Label: LAB_005693e3
    CMP dword ptr [ESP + 0x30],0x0      ; 005693e7
        ;   Label: LAB_005693e7
    JLE 0x0056940a                      ; 005693ec
        ;   XREF to: 0056940a (CONDITIONAL_JUMP)  ; LAB_0056940a
    XOR EAX,EAX                         ; 005693ee
    MOV AL,byte ptr ES:[EDI]            ; 005693f0
    PUSH EAX                            ; 005693f3
    LEA EAX,[ESP + 0x4]                 ; 005693f4
    PUSH EAX                            ; 005693f8
    CALL ESI                            ; 005693f9
    ADD ESP,0x8                         ; 005693fb
    MOV EAX,dword ptr [ESP + 0x30]      ; 005693fe
    DEC EAX                             ; 00569402
    INC EDI                             ; 00569403
    MOV dword ptr [ESP + 0x30],EAX      ; 00569404
    JMP 0x005693e7                      ; 00569408
        ;   XREF to: 005693e7 (UNCONDITIONAL_JUMP)  ; LAB_005693e7
    CMP dword ptr [ESP + 0x34],0x0      ; 0056940a
        ;   Label: LAB_0056940a
    JLE 0x00569423                      ; 0056940f
        ;   XREF to: 00569423 (CONDITIONAL_JUMP)  ; LAB_00569423
    PUSH 0x30                           ; 00569411
    LEA EAX,[ESP + 0x4]                 ; 00569413
    PUSH EAX                            ; 00569417
    CALL ESI                            ; 00569418
    ADD ESP,0x8                         ; 0056941a
    DEC dword ptr [ESP + 0x34]          ; 0056941d
    JMP 0x0056940a                      ; 00569421
        ;   XREF to: 0056940a (UNCONDITIONAL_JUMP)  ; LAB_0056940a
    TEST byte ptr [ESP + 0x1e],0x8      ; 00569423
        ;   Label: LAB_00569423
    JZ 0x00569431                       ; 00569428
        ;   XREF to: 00569431 (CONDITIONAL_JUMP)  ; LAB_00569431
    CMP dword ptr [ESP + 0x4],0x0       ; 0056942a
        ;   Label: LAB_0056942a
    JG 0x00569448                       ; 0056942f
        ;   XREF to: 00569448 (CONDITIONAL_JUMP)  ; LAB_00569448
    CMP byte ptr [EBP],0x0              ; 00569431
        ;   Label: LAB_00569431
    JNZ 0x00569090                      ; 00569435
        ;   XREF to: 00569090 (CONDITIONAL_JUMP)  ; LAB_00569090
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056943b
    ADD ESP,0x74                        ; 0056943f
    POP EBP                             ; 00569442
    POP ES                              ; 00569443
    POP EDI                             ; 00569444
    POP ESI                             ; 00569445
    POP EBX                             ; 00569446
    RET                                 ; 00569447
    PUSH 0x20                           ; 00569448
        ;   Label: LAB_00569448
    LEA EAX,[ESP + 0x4]                 ; 0056944a
    PUSH EAX                            ; 0056944e
    CALL ESI                            ; 0056944f
    ADD ESP,0x8                         ; 00569451
    DEC dword ptr [ESP + 0x4]           ; 00569454
    JMP 0x0056942a                      ; 00569458
        ;   XREF to: 0056942a (UNCONDITIONAL_JUMP)  ; LAB_0056942a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056945a
        ;   Label: LAB_0056945a
    ADD ESP,0x74                        ; 0056945e
    POP EBP                             ; 00569461
    POP ES                              ; 00569462
        ;   Label: LAB_00569462
    POP EDI                             ; 00569463
    POP ESI                             ; 00569464
    POP EBX                             ; 00569465
    RET                                 ; 00569466

