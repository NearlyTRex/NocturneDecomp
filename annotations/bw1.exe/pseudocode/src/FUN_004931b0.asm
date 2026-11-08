; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004931b0(int param_1)
;
;
; XREF[2]:
;   FUN_00493720 at 00493b2d
;   FUN_004958d0 at 00495b48
;
; Referenced Globals:
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_01d1bca0
;
; Called Functions:
;   FUN_00492f50
;   FUN_00493000
;   FUN_00493070
;   FUN_00493100
;   FUN_00493150
;   FUN_005b24f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004931b0
        ;   Label: FUN_004931b0
    PUSH ESI                            ; 004931b1
    PUSH EDI                            ; 004931b2
    PUSH EBP                            ; 004931b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004931b4
    PUSH 0x4b                           ; 004931b8
    MOV EAX,[0x0061f2a4]                ; 004931ba | DAT_0061f2a4
    PUSH EAX                            ; 004931bf | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004931c0 | DAT_01d1bca0
    XOR ESI,ESI                         ; 004931c2
    CALL dword ptr [EDX + 0x4]          ; 004931c4
    ADD ESP,0x8                         ; 004931c7
    TEST EAX,EAX                        ; 004931ca
    JZ 0x004931e7                       ; 004931cc
        ;   XREF to: 004931e7 (CONDITIONAL_JUMP)  ; LAB_004931e7
    MOV EDX,dword ptr [EBX + 0x134]     ; 004931ce
    MOV ESI,0x1                         ; 004931d4
    TEST EDX,EDX                        ; 004931d9
    JLE 0x004931e7                      ; 004931db
        ;   XREF to: 004931e7 (CONDITIONAL_JUMP)  ; LAB_004931e7
    MOV ECX,EDX                         ; 004931dd
    SUB ECX,ESI                         ; 004931df
    MOV dword ptr [EBX + 0x134],ECX     ; 004931e1
    PUSH 0x4d                           ; 004931e7
        ;   Label: LAB_004931e7
    MOV EAX,[0x0061f2a4]                ; 004931e9 | DAT_0061f2a4
    PUSH EAX                            ; 004931ee | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004931ef | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004931f1
    ADD ESP,0x8                         ; 004931f4
    TEST EAX,EAX                        ; 004931f7
    JZ 0x00493219                       ; 004931f9
        ;   XREF to: 00493219 (CONDITIONAL_JUMP)  ; LAB_00493219
    MOV EAX,dword ptr [EBX + 0x134]     ; 004931fb
    MOV EDI,dword ptr [EBX + 0x130]     ; 00493201
    MOV ESI,0x1                         ; 00493207
    CMP EAX,EDI                         ; 0049320c
    JGE 0x00493219                      ; 0049320e
        ;   XREF to: 00493219 (CONDITIONAL_JUMP)  ; LAB_00493219
    LEA EBP,[EAX + ESI*0x1]             ; 00493210
    MOV dword ptr [EBX + 0x134],EBP     ; 00493213
    PUSH 0x47                           ; 00493219
        ;   Label: LAB_00493219
    MOV EAX,[0x0061f2a4]                ; 0049321b | DAT_0061f2a4
    PUSH EAX                            ; 00493220 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 00493221 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 00493223
    ADD ESP,0x8                         ; 00493226
    TEST EAX,EAX                        ; 00493229
    JZ 0x0049323c                       ; 0049322b
        ;   XREF to: 0049323c (CONDITIONAL_JUMP)  ; LAB_0049323c
    MOV ESI,0x1                         ; 0049322d
    MOV dword ptr [EBX + 0x134],0x0     ; 00493232
    PUSH 0x4f                           ; 0049323c
        ;   Label: LAB_0049323c
    MOV EAX,[0x0061f2a4]                ; 0049323e | DAT_0061f2a4
    PUSH EAX                            ; 00493243 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 00493244 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 00493246
    ADD ESP,0x8                         ; 00493249
    TEST EAX,EAX                        ; 0049324c
    JZ 0x00493261                       ; 0049324e
        ;   XREF to: 00493261 (CONDITIONAL_JUMP)  ; LAB_00493261
    MOV EAX,dword ptr [EBX + 0x130]     ; 00493250
    MOV ESI,0x1                         ; 00493256
    MOV dword ptr [EBX + 0x134],EAX     ; 0049325b
    PUSH 0x1d                           ; 00493261
        ;   Label: LAB_00493261
    MOV EAX,[0x0061f2a4]                ; 00493263 | DAT_0061f2a4
    PUSH EAX                            ; 00493268 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 00493269 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0049326b
    ADD ESP,0x8                         ; 0049326d
    TEST EAX,EAX                        ; 00493270
    JZ 0x00493327                       ; 00493272
        ;   XREF to: 00493327 (CONDITIONAL_JUMP)  ; LAB_00493327
    PUSH 0x2d                           ; 00493278
    MOV ESI,dword ptr [0x0061f2a4]      ; 0049327a | DAT_0061f2a4
    PUSH ESI                            ; 00493280 | DAT_01d1bca0
    MOV EAX,dword ptr [ESI]             ; 00493281 | DAT_01d1bca0
    CALL dword ptr [EAX + 0x4]          ; 00493283
    ADD ESP,0x8                         ; 00493286
    TEST EAX,EAX                        ; 00493289
    JZ 0x0049329f                       ; 0049328b
        ;   XREF to: 0049329f (CONDITIONAL_JUMP)  ; LAB_0049329f
    PUSH EBX                            ; 0049328d
    CALL FUN_00493100                   ; 0049328e
        ;   XREF to: 00493100 (UNCONDITIONAL_CALL)  ; undefined FUN_00493100()
    ADD ESP,0x4                         ; 00493293
    PUSH EBX                            ; 00493296
    CALL FUN_00493070                   ; 00493297
        ;   XREF to: 00493070 (UNCONDITIONAL_CALL)  ; undefined FUN_00493070()
    ADD ESP,0x4                         ; 0049329c
    PUSH 0x52                           ; 0049329f
        ;   Label: LAB_0049329f
    MOV EAX,[0x0061f2a4]                ; 004932a1 | DAT_0061f2a4
    PUSH EAX                            ; 004932a6 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004932a7 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004932a9
    ADD ESP,0x8                         ; 004932ac
    TEST EAX,EAX                        ; 004932af
    JZ 0x004932bc                       ; 004932b1
        ;   XREF to: 004932bc (CONDITIONAL_JUMP)  ; LAB_004932bc
    PUSH EBX                            ; 004932b3
    CALL FUN_00493100                   ; 004932b4
        ;   XREF to: 00493100 (UNCONDITIONAL_CALL)  ; undefined FUN_00493100()
    ADD ESP,0x4                         ; 004932b9
    PUSH 0x2e                           ; 004932bc
        ;   Label: LAB_004932bc
    MOV EAX,[0x0061f2a4]                ; 004932be | DAT_0061f2a4
    PUSH EAX                            ; 004932c3 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004932c4 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004932c6
    ADD ESP,0x8                         ; 004932c9
    TEST EAX,EAX                        ; 004932cc
    JZ 0x004932d9                       ; 004932ce
        ;   XREF to: 004932d9 (CONDITIONAL_JUMP)  ; LAB_004932d9
    PUSH EBX                            ; 004932d0
    CALL FUN_00493100                   ; 004932d1
        ;   XREF to: 00493100 (UNCONDITIONAL_CALL)  ; undefined FUN_00493100()
    ADD ESP,0x4                         ; 004932d6
    PUSH 0x2f                           ; 004932d9
        ;   Label: LAB_004932d9
    MOV EAX,[0x0061f2a4]                ; 004932db | DAT_0061f2a4
    PUSH EAX                            ; 004932e0 | DAT_01d1bca0
    MOV ESI,dword ptr [EAX]             ; 004932e1 | DAT_01d1bca0
    CALL dword ptr [ESI + 0x4]          ; 004932e3
    ADD ESP,0x8                         ; 004932e6
    TEST EAX,EAX                        ; 004932e9
    JZ 0x004932ff                       ; 004932eb
        ;   XREF to: 004932ff (CONDITIONAL_JUMP)  ; LAB_004932ff
    PUSH EBX                            ; 004932ed
    CALL FUN_00493070                   ; 004932ee
        ;   XREF to: 00493070 (UNCONDITIONAL_CALL)  ; undefined FUN_00493070()
    ADD ESP,0x4                         ; 004932f3
    PUSH EBX                            ; 004932f6
    CALL FUN_00493150                   ; 004932f7
        ;   XREF to: 00493150 (UNCONDITIONAL_CALL)  ; undefined FUN_00493150()
    ADD ESP,0x4                         ; 004932fc
    PUSH 0x53                           ; 004932ff
        ;   Label: LAB_004932ff
    MOV ESI,dword ptr [0x0061f2a4]      ; 00493301 | DAT_0061f2a4
    PUSH ESI                            ; 00493307 | DAT_01d1bca0
    MOV EAX,dword ptr [ESI]             ; 00493308 | DAT_01d1bca0
    CALL dword ptr [EAX + 0x4]          ; 0049330a
    ADD ESP,0x8                         ; 0049330d
    TEST EAX,EAX                        ; 00493310
    JZ 0x0049331d                       ; 00493312
        ;   XREF to: 0049331d (CONDITIONAL_JUMP)  ; LAB_0049331d
    PUSH EBX                            ; 00493314
    CALL FUN_00493070                   ; 00493315
        ;   XREF to: 00493070 (UNCONDITIONAL_CALL)  ; undefined FUN_00493070()
    ADD ESP,0x4                         ; 0049331a
    CALL FUN_005b24f0                   ; 0049331d
        ;   XREF to: 005b24f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b24f0()
        ;   Label: LAB_0049331d
    POP EBP                             ; 00493322
        ;   Label: LAB_00493322
    POP EDI                             ; 00493323
    POP ESI                             ; 00493324
    POP EBX                             ; 00493325
    RET                                 ; 00493326
    PUSH 0x2a                           ; 00493327
        ;   Label: LAB_00493327
    MOV EAX,[0x0061f2a4]                ; 00493329 | DAT_0061f2a4
    PUSH EAX                            ; 0049332e | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049332f | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 00493331
    ADD ESP,0x8                         ; 00493333
    TEST EAX,EAX                        ; 00493336
    JZ 0x0049338b                       ; 00493338
        ;   XREF to: 0049338b (CONDITIONAL_JUMP)  ; LAB_0049338b
    PUSH 0x52                           ; 0049333a
    MOV EAX,[0x0061f2a4]                ; 0049333c | DAT_0061f2a4
    PUSH EAX                            ; 00493341 | DAT_01d1bca0
    MOV ESI,dword ptr [EAX]             ; 00493342 | DAT_01d1bca0
    CALL dword ptr [ESI + 0x4]          ; 00493344
    ADD ESP,0x8                         ; 00493347
    TEST EAX,EAX                        ; 0049334a
    JZ 0x00493360                       ; 0049334c
        ;   XREF to: 00493360 (CONDITIONAL_JUMP)  ; LAB_00493360
    PUSH EBX                            ; 0049334e
    CALL FUN_00493070                   ; 0049334f
        ;   XREF to: 00493070 (UNCONDITIONAL_CALL)  ; undefined FUN_00493070()
    ADD ESP,0x4                         ; 00493354
    PUSH EBX                            ; 00493357
    CALL FUN_00493150                   ; 00493358
        ;   XREF to: 00493150 (UNCONDITIONAL_CALL)  ; undefined FUN_00493150()
    ADD ESP,0x4                         ; 0049335d
    PUSH 0x53                           ; 00493360
        ;   Label: LAB_00493360
    MOV EAX,[0x0061f2a4]                ; 00493362 | DAT_0061f2a4
    PUSH EAX                            ; 00493367 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 00493368 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049336a
    ADD ESP,0x8                         ; 0049336d
    TEST EAX,EAX                        ; 00493370
    JZ 0x00493322                       ; 00493372
        ;   XREF to: 00493322 (CONDITIONAL_JUMP)  ; LAB_00493322
    PUSH EBX                            ; 00493374
    CALL FUN_00493100                   ; 00493375
        ;   XREF to: 00493100 (UNCONDITIONAL_CALL)  ; undefined FUN_00493100()
    ADD ESP,0x4                         ; 0049337a
    PUSH EBX                            ; 0049337d
    CALL FUN_00493070                   ; 0049337e
        ;   XREF to: 00493070 (UNCONDITIONAL_CALL)  ; undefined FUN_00493070()
    ADD ESP,0x4                         ; 00493383
    POP EBP                             ; 00493386
    POP EDI                             ; 00493387
    POP ESI                             ; 00493388
    POP EBX                             ; 00493389
    RET                                 ; 0049338a
    TEST ESI,ESI                        ; 0049338b
        ;   Label: LAB_0049338b
    JZ 0x00493398                       ; 0049338d
        ;   XREF to: 00493398 (CONDITIONAL_JUMP)  ; LAB_00493398
    PUSH EBX                            ; 0049338f
    CALL FUN_00492f50                   ; 00493390
        ;   XREF to: 00492f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00492f50()
    ADD ESP,0x4                         ; 00493395
    PUSH 0x53                           ; 00493398
        ;   Label: LAB_00493398
    MOV ESI,dword ptr [0x0061f2a4]      ; 0049339a | DAT_0061f2a4
    PUSH ESI                            ; 004933a0 | DAT_01d1bca0
    MOV EAX,dword ptr [ESI]             ; 004933a1 | DAT_01d1bca0
    CALL dword ptr [EAX + 0x4]          ; 004933a3
    ADD ESP,0x8                         ; 004933a6
    TEST EAX,EAX                        ; 004933a9
    JZ 0x00493322                       ; 004933ab
        ;   XREF to: 00493322 (CONDITIONAL_JUMP)  ; LAB_00493322
    MOV EDX,dword ptr [EBX + 0x134]     ; 004933b1
    CMP EDX,dword ptr [EBX + 0x138]     ; 004933b7
    JZ 0x004933cd                       ; 004933bd
        ;   XREF to: 004933cd (CONDITIONAL_JUMP)  ; LAB_004933cd
    PUSH EBX                            ; 004933bf
    CALL FUN_00493070                   ; 004933c0
        ;   XREF to: 00493070 (UNCONDITIONAL_CALL)  ; undefined FUN_00493070()
    ADD ESP,0x4                         ; 004933c5
    POP EBP                             ; 004933c8
    POP EDI                             ; 004933c9
    POP ESI                             ; 004933ca
    POP EBX                             ; 004933cb
    RET                                 ; 004933cc
    LEA EAX,[EDX + 0x1]                 ; 004933cd
        ;   Label: LAB_004933cd
    PUSH EAX                            ; 004933d0
    PUSH EDX                            ; 004933d1
    PUSH EBX                            ; 004933d2
    CALL FUN_00493000                   ; 004933d3
        ;   XREF to: 00493000 (UNCONDITIONAL_CALL)  ; undefined FUN_00493000()
    ADD ESP,0xc                         ; 004933d8
    POP EBP                             ; 004933db
    POP EDI                             ; 004933dc
    POP ESI                             ; 004933dd
    POP EBX                             ; 004933de
    RET                                 ; 004933df

