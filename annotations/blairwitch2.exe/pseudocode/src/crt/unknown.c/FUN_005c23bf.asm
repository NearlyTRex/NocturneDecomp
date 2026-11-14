; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005c23bf(int param_1,int *param_2,int param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bc288
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c23bf
        ;   Label: crt_unknown.c_FUN_005c23bf
    MOV EBP,ESP                         ; 005c23c0
    PUSH EBX                            ; 005c23c2
    PUSH ESI                            ; 005c23c3
    PUSH EDI                            ; 005c23c4
    SUB ESP,0x40                        ; 005c23c5
    MOV EDI,dword ptr [EBP + 0x8]       ; 005c23c8
    MOV EDX,dword ptr [EBP + 0xc]       ; 005c23cb
    MOV EBX,dword ptr [EBP + 0x10]      ; 005c23ce
    XOR EAX,EAX                         ; 005c23d1
    MOV AL,byte ptr [EBX + 0x15]        ; 005c23d3
    MOV dword ptr [EBP + -0x40],EAX     ; 005c23d6
    AND AL,0x5f                         ; 005c23d9
    MOV ESI,dword ptr [EBX + 0x8]       ; 005c23db
    AND EAX,0xff                        ; 005c23de
    CMP EAX,0x47                        ; 005c23e3
    JNZ 0x005c240b                      ; 005c23e6
        ;   XREF to: 005c240b (CONDITIONAL_JUMP)  ; LAB_005c240b
    TEST ESI,ESI                        ; 005c23e8
    JNZ 0x005c23f1                      ; 005c23ea
        ;   XREF to: 005c23f1 (CONDITIONAL_JUMP)  ; LAB_005c23f1
    MOV ESI,0x1                         ; 005c23ec
    MOV dword ptr [EBP + -0x44],0x4     ; 005c23f1
        ;   Label: LAB_005c23f1
    MOV ECX,dword ptr [EBP + -0x40]     ; 005c23f8
    MOV EAX,0x1                         ; 005c23fb
    SUB ECX,0x2                         ; 005c2400
    MOV dword ptr [EBP + -0x48],EAX     ; 005c2403
    MOV dword ptr [EBP + -0x40],ECX     ; 005c2406
    JMP 0x005c242a                      ; 005c2409
        ;   XREF to: 005c242a (UNCONDITIONAL_JUMP)  ; LAB_005c242a
    CMP EAX,0x45                        ; 005c240b
        ;   Label: LAB_005c240b
    JNZ 0x005c241d                      ; 005c240e
        ;   XREF to: 005c241d (CONDITIONAL_JUMP)  ; LAB_005c241d
    MOV ECX,0x1                         ; 005c2410
    MOV dword ptr [EBP + -0x44],ECX     ; 005c2415
    MOV dword ptr [EBP + -0x48],ECX     ; 005c2418
    JMP 0x005c242a                      ; 005c241b
        ;   XREF to: 005c242a (UNCONDITIONAL_JUMP)  ; LAB_005c242a
    MOV ECX,0x2                         ; 005c241d
        ;   Label: LAB_005c241d
    XOR EAX,EAX                         ; 005c2422
    MOV dword ptr [EBP + -0x44],ECX     ; 005c2424
    MOV dword ptr [EBP + -0x48],EAX     ; 005c2427
    TEST byte ptr [EBX + 0x1e],0x1      ; 005c242a
        ;   Label: LAB_005c242a
    JZ 0x005c2434                       ; 005c242e
        ;   XREF to: 005c2434 (CONDITIONAL_JUMP)  ; LAB_005c2434
    OR byte ptr [EBP + -0x44],0x10      ; 005c2430
    MOV EAX,dword ptr [EDX]             ; 005c2434
        ;   Label: LAB_005c2434
    ADD EAX,0x8                         ; 005c2436
    MOV dword ptr [EDX],EAX             ; 005c2439
    MOV EDX,EAX                         ; 005c243b
    MOV EAX,dword ptr [EAX + -0x8]      ; 005c243d
    MOV dword ptr [EBP + -0x14],EAX     ; 005c2440
    MOV EAX,dword ptr [EDX + -0x4]      ; 005c2443
    LEA EDX,[EBP + -0x20]               ; 005c2446
    MOV dword ptr [EBP + -0x10],EAX     ; 005c2449
    LEA EAX,[EBP + -0x14]               ; 005c244c
    FLD double ptr [EAX]                ; 005c244f
    FSTP extended double ptr [EDX]      ; 005c2451
    CMP ESI,-0x1                        ; 005c2453
    JNZ 0x005c245d                      ; 005c2456
        ;   XREF to: 005c245d (CONDITIONAL_JUMP)  ; LAB_005c245d
    MOV ESI,0x6                         ; 005c2458
    LEA EAX,[EDI + 0x1]                 ; 005c245d
        ;   Label: LAB_005c245d
    PUSH EAX                            ; 005c2460
    LEA EAX,[EBP + -0x4c]               ; 005c2461
    PUSH EAX                            ; 005c2464
    LEA EAX,[EBP + -0x20]               ; 005c2465
    XOR EDX,EDX                         ; 005c2468
    PUSH EAX                            ; 005c246a
    MOV dword ptr [EBP + -0x4c],ESI     ; 005c246b
    MOV dword ptr [EBP + -0x3c],EDX     ; 005c246e
    CALL crt_unknown.c_FUN_005bc288     ; 005c2471
        ;   XREF to: 005bc288 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bc288()
    MOV EAX,dword ptr [EBP + -0x30]     ; 005c2476
    MOV dword ptr [EBX + 0x28],EAX      ; 005c2479
    MOV EAX,dword ptr [EBP + -0x2c]     ; 005c247c
    MOV dword ptr [EBX + 0x2c],EAX      ; 005c247f
    MOV EAX,dword ptr [EBP + -0x28]     ; 005c2482
    MOV dword ptr [EBX + 0x30],EAX      ; 005c2485
    MOV EAX,dword ptr [EBP + -0x24]     ; 005c2488
    MOV dword ptr [EBX + 0x34],EAX      ; 005c248b
    MOV ECX,dword ptr [EBP + -0x38]     ; 005c248e
    ADD ESP,0xc                         ; 005c2491
    TEST ECX,ECX                        ; 005c2494
    JGE 0x005c24a7                      ; 005c2496
        ;   XREF to: 005c24a7 (CONDITIONAL_JUMP)  ; LAB_005c24a7
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c2498
    LEA EDX,[EAX + 0x1]                 ; 005c249b
    MOV dword ptr [EBX + 0x20],EDX      ; 005c249e
    MOV byte ptr [EDI + EAX*0x1],0x2d   ; 005c24a1
    JMP 0x005c24d0                      ; 005c24a5
        ;   XREF to: 005c24d0 (UNCONDITIONAL_JUMP)  ; LAB_005c24d0
    MOV CH,byte ptr [EBX + 0x1e]        ; 005c24a7
        ;   Label: LAB_005c24a7
    TEST CH,0x4                         ; 005c24aa
    JZ 0x005c24be                       ; 005c24ad
        ;   XREF to: 005c24be (CONDITIONAL_JUMP)  ; LAB_005c24be
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c24af
    LEA EDX,[EAX + 0x1]                 ; 005c24b2
    MOV dword ptr [EBX + 0x20],EDX      ; 005c24b5
    MOV byte ptr [EDI + EAX*0x1],0x2b   ; 005c24b8
    JMP 0x005c24d0                      ; 005c24bc
        ;   XREF to: 005c24d0 (UNCONDITIONAL_JUMP)  ; LAB_005c24d0
    TEST CH,0x2                         ; 005c24be
        ;   Label: LAB_005c24be
    JZ 0x005c24d0                       ; 005c24c1
        ;   XREF to: 005c24d0 (CONDITIONAL_JUMP)  ; LAB_005c24d0
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c24c3
    LEA EDX,[EAX + 0x1]                 ; 005c24c6
    MOV dword ptr [EBX + 0x20],EDX      ; 005c24c9
    MOV byte ptr [EDI + EAX*0x1],0x20   ; 005c24cc
    MOV DX,DS                           ; 005c24d0
        ;   Label: LAB_005c24d0
    MOV EAX,EDI                         ; 005c24d2
    LEA ESP,[EBP + -0xc]                ; 005c24d4
    POP EDI                             ; 005c24d7
    POP ESI                             ; 005c24d8
    POP EBX                             ; 005c24d9
    POP EBP                             ; 005c24da
    RET                                 ; 005c24db

