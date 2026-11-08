; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00463130(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00551a50 at 00551a86
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf590
;
; Called Functions:
;   FUN_00402710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463130
        ;   Label: FUN_00463130
    PUSH ESI                            ; 00463131
    PUSH EDI                            ; 00463132
    PUSH EBP                            ; 00463133
    SUB ESP,0x1c                        ; 00463134
    MOV EBX,dword ptr [ESP + 0x30]      ; 00463137
    MOV EDX,dword ptr [ESP + 0x34]      ; 0046313b
    TEST EDX,EDX                        ; 0046313f
    JL 0x00463323                       ; 00463141
        ;   XREF to: 00463323 (CONDITIONAL_JUMP)  ; LAB_00463323
    MOV ECX,dword ptr [ESP + 0x38]      ; 00463147
    TEST ECX,ECX                        ; 0046314b
    JL 0x00463323                       ; 0046314d
        ;   XREF to: 00463323 (CONDITIONAL_JUMP)  ; LAB_00463323
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00463153
    MOV EDI,dword ptr [0x0061b498]      ; 00463157 | DAT_0061b498
    LEA EAX,[EDX + ESI*0x1]             ; 0046315d
    CMP EAX,EDI                         ; 00463160
    JG 0x00463323                       ; 00463162
        ;   XREF to: 00463323 (CONDITIONAL_JUMP)  ; LAB_00463323
    MOV EDX,dword ptr [0x0061b49c]      ; 00463168 | DAT_0061b49c
    LEA EAX,[ECX + ESI*0x1]             ; 0046316e
    CMP EAX,EDX                         ; 00463171
    JG 0x00463323                       ; 00463173
        ;   XREF to: 00463323 (CONDITIONAL_JUMP)  ; LAB_00463323
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 00463179
    SHL EDX,0x8                         ; 0046317f
    MOV EAX,EDX                         ; 00463182
    SAR EDX,0x1f                        ; 00463184
    IDIV ESI                            ; 00463187
    MOV dword ptr [ESP + 0x18],0x20000  ; 00463189
    XOR ESI,ESI                         ; 00463191
    MOV EBP,EAX                         ; 00463193
    MOV dword ptr [ESP + 0x8],ESI       ; 00463195
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 00463199
        ;   Label: LAB_00463199
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046319f
    SHL EAX,0x8                         ; 004631a3
    CMP EAX,EDX                         ; 004631a6
    JG 0x00463201                       ; 004631a8
        ;   XREF to: 00463201 (CONDITIONAL_JUMP)  ; LAB_00463201
    MOV ECX,dword ptr [ESP + 0x18]      ; 004631aa
    CMP ESI,ECX                         ; 004631ae
    JZ 0x0046326f                       ; 004631b0
        ;   XREF to: 0046326f (CONDITIONAL_JUMP)  ; LAB_0046326f
    SUB ESI,dword ptr [ESP + 0x18]      ; 004631b6
        ;   Label: LAB_004631b6
    XOR EDI,EDI                         ; 004631ba
    MOV dword ptr [ESP + 0xc],ESI       ; 004631bc
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 004631c0
        ;   Label: LAB_004631c0
    SHL EAX,0x8                         ; 004631c6
    CMP EDI,EAX                         ; 004631c9
    JGE 0x00463315                      ; 004631cb
        ;   XREF to: 00463315 (CONDITIONAL_JUMP)  ; LAB_00463315
    MOV EDX,EDI                         ; 004631d1
    MOV EAX,EDI                         ; 004631d3
    SAR EDX,0x1f                        ; 004631d5
    SHL EDX,0x8                         ; 004631d8
    SBB EAX,EDX                         ; 004631db
    SAR EAX,0x8                         ; 004631dd
    XOR ECX,ECX                         ; 004631e0
    MOV dword ptr [ESP + 0x10],EAX      ; 004631e2
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 004631e6
        ;   Label: LAB_004631e6
    SHL EAX,0x8                         ; 004631ec
    CMP ECX,EAX                         ; 004631ef
    JL 0x00463277                       ; 004631f1
        ;   XREF to: 00463277 (CONDITIONAL_JUMP)  ; LAB_00463277
    ADD EDI,EBP                         ; 004631f7
    JMP 0x004631c0                      ; 004631f9
        ;   XREF to: 004631c0 (UNCONDITIONAL_JUMP)  ; LAB_004631c0
    ADD dword ptr [ESP + 0x8],EBP       ; 004631fb
        ;   Label: LAB_004631fb
    JMP 0x00463199                      ; 004631ff
        ;   XREF to: 00463199 (UNCONDITIONAL_JUMP)  ; LAB_00463199
    MOV EAX,EDX                         ; 00463201
        ;   Label: LAB_00463201
    SAR EDX,0x1f                        ; 00463203
    SHL EDX,0x8                         ; 00463206
    SBB EAX,EDX                         ; 00463209
    SAR EAX,0x8                         ; 0046320b
    XOR ECX,ECX                         ; 0046320e
    MOV dword ptr [ESP + 0x14],EAX      ; 00463210
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 00463214
        ;   Label: LAB_00463214
    SHL EAX,0x8                         ; 0046321a
    CMP ECX,EAX                         ; 0046321d
    JGE 0x004631fb                      ; 0046321f
        ;   XREF to: 004631fb (CONDITIONAL_JUMP)  ; LAB_004631fb
    MOV EDI,dword ptr [ESP + 0x14]      ; 00463221
    IMUL EDI,dword ptr [EBX + 0x1cc0]   ; 00463225
    MOV EDX,ECX                         ; 0046322c
    SAR EDX,0x1f                        ; 0046322e
    MOV EAX,ECX                         ; 00463231
    SHL EDX,0x8                         ; 00463233
    SBB EAX,EDX                         ; 00463236
    SAR EAX,0x8                         ; 00463238
    MOV EDX,dword ptr [EBX + 0x2f94]    ; 0046323b
    ADD EAX,EDI                         ; 00463241
    MOV AX,word ptr [EDX + EAX*0x2]     ; 00463243
    AND EAX,0xffff                      ; 00463247
    TEST EAX,EAX                        ; 0046324c
    JLE 0x00463257                      ; 0046324e
        ;   XREF to: 00463257 (CONDITIONAL_JUMP)  ; LAB_00463257
    CMP EAX,0xffff                      ; 00463250
    JL 0x0046325b                       ; 00463255
        ;   XREF to: 0046325b (CONDITIONAL_JUMP)  ; LAB_0046325b
    ADD ECX,EBP                         ; 00463257
        ;   Label: LAB_00463257
    JMP 0x00463214                      ; 00463259
        ;   XREF to: 00463214 (UNCONDITIONAL_JUMP)  ; LAB_00463214
    CMP EAX,dword ptr [ESP + 0x18]      ; 0046325b
        ;   Label: LAB_0046325b
    JGE 0x00463265                      ; 0046325f
        ;   XREF to: 00463265 (CONDITIONAL_JUMP)  ; LAB_00463265
    MOV dword ptr [ESP + 0x18],EAX      ; 00463261
    CMP EAX,ESI                         ; 00463265
        ;   Label: LAB_00463265
    JLE 0x00463257                      ; 00463267
        ;   XREF to: 00463257 (CONDITIONAL_JUMP)  ; LAB_00463257
    MOV ESI,EAX                         ; 00463269
    ADD ECX,EBP                         ; 0046326b
    JMP 0x00463214                      ; 0046326d
        ;   XREF to: 00463214 (UNCONDITIONAL_JUMP)  ; LAB_00463214
    LEA ESI,[ECX + 0x1]                 ; 0046326f
        ;   Label: LAB_0046326f
    JMP 0x004631b6                      ; 00463272
        ;   XREF to: 004631b6 (UNCONDITIONAL_JUMP)  ; LAB_004631b6
    MOV ESI,dword ptr [ESP + 0x10]      ; 00463277
        ;   Label: LAB_00463277
    IMUL ESI,dword ptr [EBX + 0x1cc0]   ; 0046327b
    MOV EDX,ECX                         ; 00463282
    SAR EDX,0x1f                        ; 00463284
    MOV EAX,ECX                         ; 00463287
    SHL EDX,0x8                         ; 00463289
    SBB EAX,EDX                         ; 0046328c
    SAR EAX,0x8                         ; 0046328e
    ADD EAX,ESI                         ; 00463291
    LEA EDX,[EAX + EAX*0x1]             ; 00463293
    MOV EAX,dword ptr [EBX + 0x2f94]    ; 00463296
    MOV AX,word ptr [EDX + EAX*0x1]     ; 0046329c
    AND EAX,0xffff                      ; 004632a0
    CMP EAX,0xffff                      ; 004632a5
    JGE 0x0046330e                      ; 004632aa
        ;   XREF to: 0046330e (CONDITIONAL_JUMP)  ; LAB_0046330e
    TEST EAX,EAX                        ; 004632ac
    JLE 0x0046330e                      ; 004632ae
        ;   XREF to: 0046330e (CONDITIONAL_JUMP)  ; LAB_0046330e
    SUB EAX,dword ptr [ESP + 0x18]      ; 004632b0
    IMUL EDX,EAX,0xff                   ; 004632b4
    MOV ESI,dword ptr [ESP + 0xc]       ; 004632ba
    MOV EAX,EDX                         ; 004632be
    SAR EDX,0x1f                        ; 004632c0
    IDIV ESI                            ; 004632c3
    MOV ESI,EAX                         ; 004632c5
    MOV EDX,EDI                         ; 004632c7
    MOV EAX,EDI                         ; 004632c9
    SAR EDX,0x1f                        ; 004632cb
    IDIV EBP                            ; 004632ce
    MOV EDX,dword ptr [ESP + 0x38]      ; 004632d0
    ADD EDX,EAX                         ; 004632d4
    MOV dword ptr [ESP],EDX             ; 004632d6
    MOV EDX,ECX                         ; 004632d9
    MOV EAX,ECX                         ; 004632db
    SAR EDX,0x1f                        ; 004632dd
    IDIV EBP                            ; 004632e0
    MOV EDX,dword ptr [ESP + 0x34]      ; 004632e2
    ADD EDX,EAX                         ; 004632e6
    MOV EAX,dword ptr [ESP]             ; 004632e8
    SHL EDX,0x2                         ; 004632eb
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4354c] ; 004632ee | DAT_01c4354c
    ADD EDX,EAX                         ; 004632f5
    MOV EAX,ESI                         ; 004632f7
    SHL EAX,0x8                         ; 004632f9
    ADD EAX,ESI                         ; 004632fc
    SHL ESI,0x10                        ; 004632fe
    MOV dword ptr [ESP + 0x4],EDX       ; 00463301
    LEA EDX,[ESI + EAX*0x1]             ; 00463305
    MOV EAX,dword ptr [ESP + 0x4]       ; 00463308
    MOV dword ptr [EAX],EDX             ; 0046330c
    ADD ECX,EBP                         ; 0046330e
        ;   Label: LAB_0046330e
    JMP 0x004631e6                      ; 00463310
        ;   XREF to: 004631e6 (UNCONDITIONAL_JUMP)  ; LAB_004631e6
    MOV EAX,[0x0061d95c]                ; 00463315 | DAT_0061d95c | DAT_01ccf390
        ;   Label: LAB_00463315
    CMP dword ptr [EAX + 0x200],0x0     ; 0046331a | DAT_01ccf590
    JNZ 0x0046332b                      ; 00463321
        ;   XREF to: 0046332b (CONDITIONAL_JUMP)  ; LAB_0046332b
    ADD ESP,0x1c                        ; 00463323
        ;   Label: LAB_00463323
    POP EBP                             ; 00463326
        ;   Label: LAB_00463326
    POP EDI                             ; 00463327
    POP ESI                             ; 00463328
    POP EBX                             ; 00463329
    RET                                 ; 0046332a
    ADD EBX,0x40                        ; 0046332b
        ;   Label: LAB_0046332b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0046332e
    PUSH EBX                            ; 00463332
    MOV EBX,dword ptr [ESP + 0x40]      ; 00463333
    ADD EAX,EBX                         ; 00463337
    SUB EAX,0xb                         ; 00463339
    PUSH EAX                            ; 0046333c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0046333d
    ADD EAX,EBX                         ; 00463341
    PUSH EAX                            ; 00463343
    MOV EDI,dword ptr [ESP + 0x40]      ; 00463344
    PUSH EDI                            ; 00463348
    CALL FUN_00402710                   ; 00463349
        ;   XREF to: 00402710 (UNCONDITIONAL_CALL)  ; undefined FUN_00402710()
    ADD ESP,0x10                        ; 0046334e
    ADD ESP,0x1c                        ; 00463351
    POP EBP                             ; 00463354
    POP EDI                             ; 00463355
    POP ESI                             ; 00463356
    POP EBX                             ; 00463357
    RET                                 ; 00463358

