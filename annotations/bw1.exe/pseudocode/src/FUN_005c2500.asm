; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPSTR FUN_005c2500(LPSTR param_1,LPCSTR param_2,uint param_3)
;
;
; XREF[3]:
;   FUN_00479720 at 00479731
;   FUN_005c6c7c at 005c6cc7
;   FUN_005c8094 at 005c80fd
;
; Referenced Globals:
;   void* PTR_GetFullPathNameA_005d05ac = 001d0eec
;   undefined4 DAT_005faa1c
;   undefined4 DAT_006e6f63
;
; Called Functions:
;   FUN_005c04e0
;   FUN_005c08d0
;   FUN_005c09f0
;   FUN_005c6450
;   FUN_005c862c
;   FUN_005c91d0
;   GetFullPathNameA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2500
        ;   Label: FUN_005c2500
    PUSH ESI                            ; 005c2501
    PUSH EDI                            ; 005c2502
    PUSH EBP                            ; 005c2503
    SUB ESP,0x4                         ; 005c2504
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c2507
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005c250b
    MOV EDI,dword ptr [ESP + 0x20]      ; 005c250f
    TEST EBX,EBX                        ; 005c2513
    JNZ 0x005c253e                      ; 005c2515
        ;   XREF to: 005c253e (CONDITIONAL_JUMP)  ; LAB_005c253e
    MOV EDI,0x104                       ; 005c2517
    PUSH EDI                            ; 005c251c
    CALL FUN_005c08d0                   ; 005c251d
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 005c2522
    MOV EBP,EAX                         ; 005c2525
    TEST EAX,EAX                        ; 005c2527
    JNZ 0x005c253c                      ; 005c2529
        ;   XREF to: 005c253c (CONDITIONAL_JUMP)  ; LAB_005c253c
    PUSH 0x5                            ; 005c252b
    CALL FUN_005c6450                   ; 005c252d
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    ADD ESP,0x4                         ; 005c2532
    XOR EAX,EAX                         ; 005c2535
    JMP 0x005c25b8                      ; 005c2537
        ;   XREF to: 005c25b8 (UNCONDITIONAL_JUMP)  ; LAB_005c25b8
    MOV EBX,EAX                         ; 005c253c
        ;   Label: LAB_005c253c
    TEST ESI,ESI                        ; 005c253e
        ;   Label: LAB_005c253e
    JZ 0x005c2547                       ; 005c2540
        ;   XREF to: 005c2547 (CONDITIONAL_JUMP)  ; LAB_005c2547
    CMP byte ptr [ESI],0x0              ; 005c2542
    JNZ 0x005c2559                      ; 005c2545
        ;   XREF to: 005c2559 (CONDITIONAL_JUMP)  ; LAB_005c2559
    PUSH EDI                            ; 005c2547
        ;   Label: LAB_005c2547
    PUSH EBX                            ; 005c2548
    CALL FUN_005c91d0                   ; 005c2549
        ;   XREF to: 005c91d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c91d0()
    ADD ESP,0x8                         ; 005c254e
    ADD ESP,0x4                         ; 005c2551
    POP EBP                             ; 005c2554
    POP EDI                             ; 005c2555
    POP ESI                             ; 005c2556
    POP EBX                             ; 005c2557
    RET                                 ; 005c2558
    PUSH 0x5faa1c                       ; 005c2559 | DAT_005faa1c
        ;   Label: LAB_005c2559
    PUSH ESI                            ; 005c255e
    CALL FUN_005c04e0                   ; 005c255f
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005c2564
    TEST EAX,EAX                        ; 005c2567
    JNZ 0x005c2596                      ; 005c2569
        ;   XREF to: 005c2596 (CONDITIONAL_JUMP)  ; LAB_005c2596
    CMP EDI,0x4                         ; 005c256b
    JNC 0x005c258d                      ; 005c256e
        ;   XREF to: 005c258d (CONDITIONAL_JUMP)  ; LAB_005c258d
    PUSH EBP                            ; 005c2570
    CALL FUN_005c09f0                   ; 005c2571
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 005c2576
    PUSH 0xe                            ; 005c2579
    CALL FUN_005c6450                   ; 005c257b
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    ADD ESP,0x4                         ; 005c2580
    XOR EAX,EAX                         ; 005c2583
    ADD ESP,0x4                         ; 005c2585
    POP EBP                             ; 005c2588
    POP EDI                             ; 005c2589
    POP ESI                             ; 005c258a
    POP EBX                             ; 005c258b
    RET                                 ; 005c258c
    MOV EAX,[0x005faa1c]                ; 005c258d | DAT_005faa1c
        ;   Label: LAB_005c258d
    MOV dword ptr [EBX],EAX             ; 005c2592 | DAT_006e6f63
    JMP 0x005c25b6                      ; 005c2594
        ;   XREF to: 005c25b6 (UNCONDITIONAL_JUMP)  ; LAB_005c25b6
    MOV EAX,ESP                         ; 005c2596
        ;   Label: LAB_005c2596
    PUSH EAX                            ; 005c2598
    PUSH EBX                            ; 005c2599
    PUSH EDI                            ; 005c259a
    PUSH ESI                            ; 005c259b
    CALL dword ptr CS:[0x5d05ac]        ; 005c259c | PTR_GetFullPathNameA_005d05ac
    TEST EAX,EAX                        ; 005c25a3
    JNZ 0x005c25b6                      ; 005c25a5
        ;   XREF to: 005c25b6 (CONDITIONAL_JUMP)  ; LAB_005c25b6
    CALL FUN_005c862c                   ; 005c25a7
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined FUN_005c862c()
    XOR EAX,EAX                         ; 005c25ac
    ADD ESP,0x4                         ; 005c25ae
    POP EBP                             ; 005c25b1
    POP EDI                             ; 005c25b2
    POP ESI                             ; 005c25b3
    POP EBX                             ; 005c25b4
    RET                                 ; 005c25b5
    MOV EAX,EBX                         ; 005c25b6
        ;   Label: LAB_005c25b6
    ADD ESP,0x4                         ; 005c25b8
        ;   Label: LAB_005c25b8
    POP EBP                             ; 005c25bb
    POP EDI                             ; 005c25bc
    POP ESI                             ; 005c25bd
    POP EBX                             ; 005c25be
    RET                                 ; 005c25bf

