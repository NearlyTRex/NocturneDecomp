; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c232c(byte *param_1,byte *param_2,char *param_3,char *param_4,byte *param_5)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004795b0 at 004795cc
;   FUN_0051abf0 at 0051ac11
;
; Called Functions:
;   FUN_005c2310
;   FUN_005c9080
;   FUN_005c90c0
;   FUN_005c90f0
;   FUN_005c9110
;   FUN_005c9140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c232c
        ;   Label: FUN_005c232c
    PUSH ESI                            ; 005c232d
    PUSH EDI                            ; 005c232e
    PUSH EBP                            ; 005c232f
    SUB ESP,0x8                         ; 005c2330
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c2333
    MOV EDX,dword ptr [ESP + 0x20]      ; 005c2337
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005c233b
    XOR ECX,ECX                         ; 005c233f
    MOV dword ptr [ESP + 0x4],EBX       ; 005c2341
    MOV dword ptr [ESP],ECX             ; 005c2345
    TEST EDX,EDX                        ; 005c2348
    JZ 0x005c239a                       ; 005c234a
        ;   XREF to: 005c239a (CONDITIONAL_JUMP)  ; LAB_005c239a
    MOV AH,byte ptr [EDX]               ; 005c234c
    TEST AH,AH                          ; 005c234e
    JZ 0x005c239a                       ; 005c2350
        ;   XREF to: 005c239a (CONDITIONAL_JUMP)  ; LAB_005c239a
    CMP AH,0x5c                         ; 005c2352
    JNZ 0x005c2390                      ; 005c2355
        ;   XREF to: 005c2390 (CONDITIONAL_JUMP)  ; LAB_005c2390
    CMP AH,byte ptr [EDX + 0x1]         ; 005c2357
    JNZ 0x005c2390                      ; 005c235a
        ;   XREF to: 005c2390 (CONDITIONAL_JUMP)  ; LAB_005c2390
    MOV ESI,EDX                         ; 005c235c
    MOV EDI,EBX                         ; 005c235e
    PUSH EDI                            ; 005c2360
    MOV AL,byte ptr [ESI]               ; 005c2361
        ;   Label: LAB_005c2361
    MOV byte ptr [EDI],AL               ; 005c2363
    CMP AL,0x0                          ; 005c2365
    JZ 0x005c2379                       ; 005c2367
        ;   XREF to: 005c2379 (CONDITIONAL_JUMP)  ; LAB_005c2379
    MOV AL,byte ptr [ESI + 0x1]         ; 005c2369
    ADD ESI,0x2                         ; 005c236c
    MOV byte ptr [EDI + 0x1],AL         ; 005c236f
    ADD EDI,0x2                         ; 005c2372
    CMP AL,0x0                          ; 005c2375
    JNZ 0x005c2361                      ; 005c2377
        ;   XREF to: 005c2361 (CONDITIONAL_JUMP)  ; LAB_005c2361
    POP EDI                             ; 005c2379
        ;   Label: LAB_005c2379
    MOV EDI,EDX                         ; 005c237a
    PUSH ES                             ; 005c237c
    MOV AX,DS                           ; 005c237d
    MOV ES,AX                           ; 005c237f
    SUB ECX,ECX                         ; 005c2381
    DEC ECX                             ; 005c2383
    XOR EAX,EAX                         ; 005c2384
    SCASB.REPNE ES:EDI                  ; 005c2386
    NOT ECX                             ; 005c2388
    DEC ECX                             ; 005c238a
    POP ES                              ; 005c238b
    ADD EBX,ECX                         ; 005c238c
    JMP 0x005c239a                      ; 005c238e
        ;   XREF to: 005c239a (UNCONDITIONAL_JUMP)  ; LAB_005c239a
    INC EBX                             ; 005c2390
        ;   Label: LAB_005c2390
    MOV AL,byte ptr [EDX]               ; 005c2391
    MOV byte ptr [EBX + -0x1],AL        ; 005c2393
    MOV byte ptr [EBX],0x3a             ; 005c2396
    INC EBX                             ; 005c2399
    MOV ESI,dword ptr [ESP + 0x24]      ; 005c239a
        ;   Label: LAB_005c239a
    MOV byte ptr [EBX],0x0              ; 005c239e
    TEST ESI,ESI                        ; 005c23a1
    JZ 0x005c2431                       ; 005c23a3
        ;   XREF to: 005c2431 (CONDITIONAL_JUMP)  ; LAB_005c2431
    CMP byte ptr [ESI],0x0              ; 005c23a9
    JZ 0x005c2431                       ; 005c23ac
        ;   XREF to: 005c2431 (CONDITIONAL_JUMP)  ; LAB_005c2431
    MOV EAX,ESP                         ; 005c23b2
        ;   Label: LAB_005c23b2
    PUSH EAX                            ; 005c23b4
    MOV EDI,dword ptr [ESP + 0x28]      ; 005c23b5
    PUSH EDI                            ; 005c23b9
    CALL FUN_005c9080                   ; 005c23ba
        ;   XREF to: 005c9080 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9080()
    ADD ESP,0x4                         ; 005c23bf
    PUSH EAX                            ; 005c23c2
    CALL FUN_005c2310                   ; 005c23c3
        ;   XREF to: 005c2310 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2310()
    ADD ESP,0x8                         ; 005c23c8
    PUSH EBX                            ; 005c23cb
    PUSH EAX                            ; 005c23cc
    CALL FUN_005c90f0                   ; 005c23cd
        ;   XREF to: 005c90f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c90f0()
    ADD ESP,0x8                         ; 005c23d2
    PUSH EBX                            ; 005c23d5
    CALL FUN_005c9110                   ; 005c23d6
        ;   XREF to: 005c9110 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9110()
    ADD ESP,0x4                         ; 005c23db
    PUSH EBX                            ; 005c23de
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005c23df
    CALL FUN_005c90c0                   ; 005c23e3
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c90c0()
    ADD ESP,0x4                         ; 005c23e8
    PUSH EDI                            ; 005c23eb
    MOV EBX,EAX                         ; 005c23ec
    CALL FUN_005c90c0                   ; 005c23ee
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c90c0()
    ADD ESP,0x4                         ; 005c23f3
    MOV DH,byte ptr [EAX]               ; 005c23f6
    MOV dword ptr [ESP + 0x24],EAX      ; 005c23f8
    TEST DH,DH                          ; 005c23fc
    JNZ 0x005c23b2                      ; 005c23fe
        ;   XREF to: 005c23b2 (CONDITIONAL_JUMP)  ; LAB_005c23b2
    CMP dword ptr [ESP],0x0             ; 005c2400
    JNZ 0x005c240d                      ; 005c2404
        ;   XREF to: 005c240d (CONDITIONAL_JUMP)  ; LAB_005c240d
    MOV dword ptr [ESP],0x5c            ; 005c2406
    PUSH EBX                            ; 005c240d
        ;   Label: LAB_005c240d
    MOV ESI,dword ptr [ESP + 0x8]       ; 005c240e
    PUSH ESI                            ; 005c2412
    CALL FUN_005c9140                   ; 005c2413
        ;   XREF to: 005c9140 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9140()
    ADD ESP,0x8                         ; 005c2418
    MOV AL,byte ptr [EAX]               ; 005c241b
    MOV EDI,dword ptr [ESP]             ; 005c241d
    AND EAX,0xff                        ; 005c2420
    CMP EAX,EDI                         ; 005c2425
    JNZ 0x005c242c                      ; 005c2427
        ;   XREF to: 005c242c (CONDITIONAL_JUMP)  ; LAB_005c242c
    DEC EBX                             ; 005c2429
    JMP 0x005c2431                      ; 005c242a
        ;   XREF to: 005c2431 (UNCONDITIONAL_JUMP)  ; LAB_005c2431
    MOV AL,byte ptr [ESP]               ; 005c242c
        ;   Label: LAB_005c242c
    MOV byte ptr [EBX],AL               ; 005c242f
    CMP dword ptr [ESP],0x0             ; 005c2431
        ;   Label: LAB_005c2431
    JNZ 0x005c243e                      ; 005c2435
        ;   XREF to: 005c243e (CONDITIONAL_JUMP)  ; LAB_005c243e
    MOV dword ptr [ESP],0x5c            ; 005c2437
    MOV ECX,dword ptr [ESP + 0x28]      ; 005c243e
        ;   Label: LAB_005c243e
    LEA ESI,[EBX + 0x1]                 ; 005c2442
    TEST ECX,ECX                        ; 005c2445
    JZ 0x005c24c6                       ; 005c2447
        ;   XREF to: 005c24c6 (CONDITIONAL_JUMP)  ; LAB_005c24c6
    PUSH ECX                            ; 005c244d
    CALL FUN_005c9080                   ; 005c244e
        ;   XREF to: 005c9080 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9080()
    ADD ESP,0x4                         ; 005c2453
    MOV EDX,ESP                         ; 005c2456
    PUSH EDX                            ; 005c2458
    PUSH EAX                            ; 005c2459
    CALL FUN_005c2310                   ; 005c245a
        ;   XREF to: 005c2310 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2310()
    ADD ESP,0x8                         ; 005c245f
    MOV EDX,dword ptr [ESP]             ; 005c2462
    CMP EAX,EDX                         ; 005c2465
    JZ 0x005c2473                       ; 005c2467
        ;   XREF to: 005c2473 (CONDITIONAL_JUMP)  ; LAB_005c2473
    XOR EAX,EAX                         ; 005c2469
    MOV AL,byte ptr [EBX]               ; 005c246b
    CMP EAX,EDX                         ; 005c246d
    JNZ 0x005c2473                      ; 005c246f
        ;   XREF to: 005c2473 (CONDITIONAL_JUMP)  ; LAB_005c2473
    MOV EBX,ESI                         ; 005c2471
    MOV EAX,dword ptr [ESP + 0x28]      ; 005c2473
        ;   Label: LAB_005c2473
    CMP byte ptr [EAX],0x0              ; 005c2477
    JZ 0x005c24d3                       ; 005c247a
        ;   XREF to: 005c24d3 (CONDITIONAL_JUMP)  ; LAB_005c24d3
    MOV EAX,ESP                         ; 005c247c
    PUSH EAX                            ; 005c247e
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005c247f
    PUSH ESI                            ; 005c2483
    CALL FUN_005c9080                   ; 005c2484
        ;   XREF to: 005c9080 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9080()
    ADD ESP,0x4                         ; 005c2489
    PUSH EAX                            ; 005c248c
    CALL FUN_005c2310                   ; 005c248d
        ;   XREF to: 005c2310 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2310()
    ADD ESP,0x8                         ; 005c2492
    PUSH EBX                            ; 005c2495
    PUSH EAX                            ; 005c2496
    CALL FUN_005c90f0                   ; 005c2497
        ;   XREF to: 005c90f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c90f0()
    ADD ESP,0x8                         ; 005c249c
    PUSH EBX                            ; 005c249f
    CALL FUN_005c9110                   ; 005c24a0
        ;   XREF to: 005c9110 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9110()
    ADD ESP,0x4                         ; 005c24a5
    PUSH EBX                            ; 005c24a8
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005c24a9
    CALL FUN_005c90c0                   ; 005c24ad
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c90c0()
    ADD ESP,0x4                         ; 005c24b2
    PUSH ESI                            ; 005c24b5
    MOV EBX,EAX                         ; 005c24b6
    CALL FUN_005c90c0                   ; 005c24b8
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c90c0()
    ADD ESP,0x4                         ; 005c24bd
    MOV dword ptr [ESP + 0x28],EAX      ; 005c24c0
    JMP 0x005c2473                      ; 005c24c4
        ;   XREF to: 005c2473 (UNCONDITIONAL_JUMP)  ; LAB_005c2473
    XOR EAX,EAX                         ; 005c24c6
        ;   Label: LAB_005c24c6
    MOV EDI,dword ptr [ESP]             ; 005c24c8
    MOV AL,byte ptr [EBX]               ; 005c24cb
    CMP EAX,EDI                         ; 005c24cd
    JNZ 0x005c24d3                      ; 005c24cf
        ;   XREF to: 005c24d3 (CONDITIONAL_JUMP)  ; LAB_005c24d3
    MOV EBX,ESI                         ; 005c24d1
    TEST EBP,EBP                        ; 005c24d3
        ;   Label: LAB_005c24d3
    JZ 0x005c24f5                       ; 005c24d5
        ;   XREF to: 005c24f5 (CONDITIONAL_JUMP)  ; LAB_005c24f5
    MOV CH,byte ptr [EBP]               ; 005c24d7
    TEST CH,CH                          ; 005c24da
    JZ 0x005c24f5                       ; 005c24dc
        ;   XREF to: 005c24f5 (CONDITIONAL_JUMP)  ; LAB_005c24f5
    CMP CH,0x2e                         ; 005c24de
    JZ 0x005c24e7                       ; 005c24e1
        ;   XREF to: 005c24e7 (CONDITIONAL_JUMP)  ; LAB_005c24e7
    MOV byte ptr [EBX],0x2e             ; 005c24e3
    INC EBX                             ; 005c24e6
    MOV AH,byte ptr [EBP]               ; 005c24e7
        ;   Label: LAB_005c24e7
    TEST AH,AH                          ; 005c24ea
    JZ 0x005c24f5                       ; 005c24ec
        ;   XREF to: 005c24f5 (CONDITIONAL_JUMP)  ; LAB_005c24f5
    INC EBX                             ; 005c24ee
    INC EBP                             ; 005c24ef
    MOV byte ptr [EBX + -0x1],AH        ; 005c24f0
    JMP 0x005c24e7                      ; 005c24f3
        ;   XREF to: 005c24e7 (UNCONDITIONAL_JUMP)  ; LAB_005c24e7
    MOV byte ptr [EBX],0x0              ; 005c24f5
        ;   Label: LAB_005c24f5
    ADD ESP,0x8                         ; 005c24f8
    POP EBP                             ; 005c24fb
    POP EDI                             ; 005c24fc
    POP ESI                             ; 005c24fd
    POP EBX                             ; 005c24fe
    RET                                 ; 005c24ff

