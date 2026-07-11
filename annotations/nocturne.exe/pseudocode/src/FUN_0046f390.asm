; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046f390(int param_1)
;
;
; XREF[2]:
;   FUN_0046f7e0 at 0046f8d6
;   FUN_00470eb0 at 0047110e
;
; Referenced Globals:
;   undefined4 DAT_005bac64
;   undefined4 DAT_01cc30e4
;
; Called Functions:
;   FUN_0046f130
;   FUN_0046f1e0
;   FUN_0046f250
;   FUN_0046f2e0
;   FUN_0046f330
;   FUN_00558ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f390
        ;   Label: FUN_0046f390
    PUSH ESI                            ; 0046f391
    PUSH EDI                            ; 0046f392
    PUSH EBP                            ; 0046f393
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046f394
    PUSH 0x4b                           ; 0046f398
    MOV EAX,[0x005bac64]                ; 0046f39a | DAT_005bac64
    PUSH EAX                            ; 0046f39f | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0046f3a0 | DAT_01cc30e4
    XOR ESI,ESI                         ; 0046f3a2
    CALL dword ptr [EDX + 0x4]          ; 0046f3a4
    ADD ESP,0x8                         ; 0046f3a7
    TEST EAX,EAX                        ; 0046f3aa
    JZ 0x0046f3c7                       ; 0046f3ac
        ;   XREF to: 0046f3c7 (CONDITIONAL_JUMP)  ; LAB_0046f3c7
    MOV EDX,dword ptr [EBX + 0x134]     ; 0046f3ae
    MOV ESI,0x1                         ; 0046f3b4
    TEST EDX,EDX                        ; 0046f3b9
    JLE 0x0046f3c7                      ; 0046f3bb
        ;   XREF to: 0046f3c7 (CONDITIONAL_JUMP)  ; LAB_0046f3c7
    MOV ECX,EDX                         ; 0046f3bd
    SUB ECX,ESI                         ; 0046f3bf
    MOV dword ptr [EBX + 0x134],ECX     ; 0046f3c1
    PUSH 0x4d                           ; 0046f3c7
        ;   Label: LAB_0046f3c7
    MOV EAX,[0x005bac64]                ; 0046f3c9 | DAT_005bac64
    PUSH EAX                            ; 0046f3ce | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0046f3cf | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0046f3d1
    ADD ESP,0x8                         ; 0046f3d4
    TEST EAX,EAX                        ; 0046f3d7
    JZ 0x0046f3f9                       ; 0046f3d9
        ;   XREF to: 0046f3f9 (CONDITIONAL_JUMP)  ; LAB_0046f3f9
    MOV EAX,dword ptr [EBX + 0x134]     ; 0046f3db
    MOV EDI,dword ptr [EBX + 0x130]     ; 0046f3e1
    MOV ESI,0x1                         ; 0046f3e7
    CMP EAX,EDI                         ; 0046f3ec
    JGE 0x0046f3f9                      ; 0046f3ee
        ;   XREF to: 0046f3f9 (CONDITIONAL_JUMP)  ; LAB_0046f3f9
    LEA EBP,[EAX + ESI*0x1]             ; 0046f3f0
    MOV dword ptr [EBX + 0x134],EBP     ; 0046f3f3
    PUSH 0x47                           ; 0046f3f9
        ;   Label: LAB_0046f3f9
    MOV EAX,[0x005bac64]                ; 0046f3fb | DAT_005bac64
    PUSH EAX                            ; 0046f400 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0046f401 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0046f403
    ADD ESP,0x8                         ; 0046f406
    TEST EAX,EAX                        ; 0046f409
    JZ 0x0046f41c                       ; 0046f40b
        ;   XREF to: 0046f41c (CONDITIONAL_JUMP)  ; LAB_0046f41c
    MOV ESI,0x1                         ; 0046f40d
    MOV dword ptr [EBX + 0x134],0x0     ; 0046f412
    PUSH 0x4f                           ; 0046f41c
        ;   Label: LAB_0046f41c
    MOV EAX,[0x005bac64]                ; 0046f41e | DAT_005bac64
    PUSH EAX                            ; 0046f423 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0046f424 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0046f426
    ADD ESP,0x8                         ; 0046f429
    TEST EAX,EAX                        ; 0046f42c
    JZ 0x0046f441                       ; 0046f42e
        ;   XREF to: 0046f441 (CONDITIONAL_JUMP)  ; LAB_0046f441
    MOV EAX,dword ptr [EBX + 0x130]     ; 0046f430
    MOV ESI,0x1                         ; 0046f436
    MOV dword ptr [EBX + 0x134],EAX     ; 0046f43b
    PUSH 0x1d                           ; 0046f441
        ;   Label: LAB_0046f441
    MOV EAX,[0x005bac64]                ; 0046f443 | DAT_005bac64
    PUSH EAX                            ; 0046f448 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0046f449 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0046f44b
    ADD ESP,0x8                         ; 0046f44d
    TEST EAX,EAX                        ; 0046f450
    JZ 0x0046f507                       ; 0046f452
        ;   XREF to: 0046f507 (CONDITIONAL_JUMP)  ; LAB_0046f507
    PUSH 0x2d                           ; 0046f458
    MOV ESI,dword ptr [0x005bac64]      ; 0046f45a | DAT_005bac64
    PUSH ESI                            ; 0046f460 | DAT_01cc30e4
    MOV EAX,dword ptr [ESI]             ; 0046f461 | DAT_01cc30e4
    CALL dword ptr [EAX + 0x4]          ; 0046f463
    ADD ESP,0x8                         ; 0046f466
    TEST EAX,EAX                        ; 0046f469
    JZ 0x0046f47f                       ; 0046f46b
        ;   XREF to: 0046f47f (CONDITIONAL_JUMP)  ; LAB_0046f47f
    PUSH EBX                            ; 0046f46d
    CALL FUN_0046f2e0                   ; 0046f46e
        ;   XREF to: 0046f2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f2e0()
    ADD ESP,0x4                         ; 0046f473
    PUSH EBX                            ; 0046f476
    CALL FUN_0046f250                   ; 0046f477
        ;   XREF to: 0046f250 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f250()
    ADD ESP,0x4                         ; 0046f47c
    PUSH 0x52                           ; 0046f47f
        ;   Label: LAB_0046f47f
    MOV EAX,[0x005bac64]                ; 0046f481 | DAT_005bac64
    PUSH EAX                            ; 0046f486 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0046f487 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0046f489
    ADD ESP,0x8                         ; 0046f48c
    TEST EAX,EAX                        ; 0046f48f
    JZ 0x0046f49c                       ; 0046f491
        ;   XREF to: 0046f49c (CONDITIONAL_JUMP)  ; LAB_0046f49c
    PUSH EBX                            ; 0046f493
    CALL FUN_0046f2e0                   ; 0046f494
        ;   XREF to: 0046f2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f2e0()
    ADD ESP,0x4                         ; 0046f499
    PUSH 0x2e                           ; 0046f49c
        ;   Label: LAB_0046f49c
    MOV EAX,[0x005bac64]                ; 0046f49e | DAT_005bac64
    PUSH EAX                            ; 0046f4a3 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0046f4a4 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0046f4a6
    ADD ESP,0x8                         ; 0046f4a9
    TEST EAX,EAX                        ; 0046f4ac
    JZ 0x0046f4b9                       ; 0046f4ae
        ;   XREF to: 0046f4b9 (CONDITIONAL_JUMP)  ; LAB_0046f4b9
    PUSH EBX                            ; 0046f4b0
    CALL FUN_0046f2e0                   ; 0046f4b1
        ;   XREF to: 0046f2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f2e0()
    ADD ESP,0x4                         ; 0046f4b6
    PUSH 0x2f                           ; 0046f4b9
        ;   Label: LAB_0046f4b9
    MOV EAX,[0x005bac64]                ; 0046f4bb | DAT_005bac64
    PUSH EAX                            ; 0046f4c0 | DAT_01cc30e4
    MOV ESI,dword ptr [EAX]             ; 0046f4c1 | DAT_01cc30e4
    CALL dword ptr [ESI + 0x4]          ; 0046f4c3
    ADD ESP,0x8                         ; 0046f4c6
    TEST EAX,EAX                        ; 0046f4c9
    JZ 0x0046f4df                       ; 0046f4cb
        ;   XREF to: 0046f4df (CONDITIONAL_JUMP)  ; LAB_0046f4df
    PUSH EBX                            ; 0046f4cd
    CALL FUN_0046f250                   ; 0046f4ce
        ;   XREF to: 0046f250 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f250()
    ADD ESP,0x4                         ; 0046f4d3
    PUSH EBX                            ; 0046f4d6
    CALL FUN_0046f330                   ; 0046f4d7
        ;   XREF to: 0046f330 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f330()
    ADD ESP,0x4                         ; 0046f4dc
    PUSH 0x53                           ; 0046f4df
        ;   Label: LAB_0046f4df
    MOV ESI,dword ptr [0x005bac64]      ; 0046f4e1 | DAT_005bac64
    PUSH ESI                            ; 0046f4e7 | DAT_01cc30e4
    MOV EAX,dword ptr [ESI]             ; 0046f4e8 | DAT_01cc30e4
    CALL dword ptr [EAX + 0x4]          ; 0046f4ea
    ADD ESP,0x8                         ; 0046f4ed
    TEST EAX,EAX                        ; 0046f4f0
    JZ 0x0046f4fd                       ; 0046f4f2
        ;   XREF to: 0046f4fd (CONDITIONAL_JUMP)  ; LAB_0046f4fd
    PUSH EBX                            ; 0046f4f4
    CALL FUN_0046f250                   ; 0046f4f5
        ;   XREF to: 0046f250 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f250()
    ADD ESP,0x4                         ; 0046f4fa
    CALL FUN_00558ae0                   ; 0046f4fd
        ;   XREF to: 00558ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00558ae0()
        ;   Label: LAB_0046f4fd
    POP EBP                             ; 0046f502
        ;   Label: LAB_0046f502
    POP EDI                             ; 0046f503
    POP ESI                             ; 0046f504
    POP EBX                             ; 0046f505
    RET                                 ; 0046f506
    PUSH 0x2a                           ; 0046f507
        ;   Label: LAB_0046f507
    MOV EAX,[0x005bac64]                ; 0046f509 | DAT_005bac64
    PUSH EAX                            ; 0046f50e | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0046f50f | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0046f511
    ADD ESP,0x8                         ; 0046f513
    TEST EAX,EAX                        ; 0046f516
    JZ 0x0046f56b                       ; 0046f518
        ;   XREF to: 0046f56b (CONDITIONAL_JUMP)  ; LAB_0046f56b
    PUSH 0x52                           ; 0046f51a
    MOV EAX,[0x005bac64]                ; 0046f51c | DAT_005bac64
    PUSH EAX                            ; 0046f521 | DAT_01cc30e4
    MOV ESI,dword ptr [EAX]             ; 0046f522 | DAT_01cc30e4
    CALL dword ptr [ESI + 0x4]          ; 0046f524
    ADD ESP,0x8                         ; 0046f527
    TEST EAX,EAX                        ; 0046f52a
    JZ 0x0046f540                       ; 0046f52c
        ;   XREF to: 0046f540 (CONDITIONAL_JUMP)  ; LAB_0046f540
    PUSH EBX                            ; 0046f52e
    CALL FUN_0046f250                   ; 0046f52f
        ;   XREF to: 0046f250 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f250()
    ADD ESP,0x4                         ; 0046f534
    PUSH EBX                            ; 0046f537
    CALL FUN_0046f330                   ; 0046f538
        ;   XREF to: 0046f330 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f330()
    ADD ESP,0x4                         ; 0046f53d
    PUSH 0x53                           ; 0046f540
        ;   Label: LAB_0046f540
    MOV EAX,[0x005bac64]                ; 0046f542 | DAT_005bac64
    PUSH EAX                            ; 0046f547 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0046f548 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0046f54a
    ADD ESP,0x8                         ; 0046f54d
    TEST EAX,EAX                        ; 0046f550
    JZ 0x0046f502                       ; 0046f552
        ;   XREF to: 0046f502 (CONDITIONAL_JUMP)  ; LAB_0046f502
    PUSH EBX                            ; 0046f554
    CALL FUN_0046f2e0                   ; 0046f555
        ;   XREF to: 0046f2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f2e0()
    ADD ESP,0x4                         ; 0046f55a
    PUSH EBX                            ; 0046f55d
    CALL FUN_0046f250                   ; 0046f55e
        ;   XREF to: 0046f250 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f250()
    ADD ESP,0x4                         ; 0046f563
    POP EBP                             ; 0046f566
    POP EDI                             ; 0046f567
    POP ESI                             ; 0046f568
    POP EBX                             ; 0046f569
    RET                                 ; 0046f56a
    TEST ESI,ESI                        ; 0046f56b
        ;   Label: LAB_0046f56b
    JZ 0x0046f578                       ; 0046f56d
        ;   XREF to: 0046f578 (CONDITIONAL_JUMP)  ; LAB_0046f578
    PUSH EBX                            ; 0046f56f
    CALL FUN_0046f130                   ; 0046f570
        ;   XREF to: 0046f130 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f130()
    ADD ESP,0x4                         ; 0046f575
    PUSH 0x53                           ; 0046f578
        ;   Label: LAB_0046f578
    MOV ESI,dword ptr [0x005bac64]      ; 0046f57a | DAT_005bac64
    PUSH ESI                            ; 0046f580 | DAT_01cc30e4
    MOV EAX,dword ptr [ESI]             ; 0046f581 | DAT_01cc30e4
    CALL dword ptr [EAX + 0x4]          ; 0046f583
    ADD ESP,0x8                         ; 0046f586
    TEST EAX,EAX                        ; 0046f589
    JZ 0x0046f502                       ; 0046f58b
        ;   XREF to: 0046f502 (CONDITIONAL_JUMP)  ; LAB_0046f502
    MOV EDX,dword ptr [EBX + 0x134]     ; 0046f591
    CMP EDX,dword ptr [EBX + 0x138]     ; 0046f597
    JZ 0x0046f5ad                       ; 0046f59d
        ;   XREF to: 0046f5ad (CONDITIONAL_JUMP)  ; LAB_0046f5ad
    PUSH EBX                            ; 0046f59f
    CALL FUN_0046f250                   ; 0046f5a0
        ;   XREF to: 0046f250 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f250()
    ADD ESP,0x4                         ; 0046f5a5
    POP EBP                             ; 0046f5a8
    POP EDI                             ; 0046f5a9
    POP ESI                             ; 0046f5aa
    POP EBX                             ; 0046f5ab
    RET                                 ; 0046f5ac
    LEA EAX,[EDX + 0x1]                 ; 0046f5ad
        ;   Label: LAB_0046f5ad
    PUSH EAX                            ; 0046f5b0
    PUSH EDX                            ; 0046f5b1
    PUSH EBX                            ; 0046f5b2
    CALL FUN_0046f1e0                   ; 0046f5b3
        ;   XREF to: 0046f1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f1e0()
    ADD ESP,0xc                         ; 0046f5b8
    POP EBP                             ; 0046f5bb
    POP EDI                             ; 0046f5bc
    POP ESI                             ; 0046f5bd
    POP EBX                             ; 0046f5be
    RET                                 ; 0046f5bf

