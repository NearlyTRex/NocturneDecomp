; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0056d340(int param_1,uint param_2,int param_3,undefined4 *param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_0056d488 at 0056d4a2
;   crt_time.c__mktime_FUN_00565fb0 at 005660c3
;   crt_unknown.c_FUN_00566590 at 005665af
;
; Referenced Globals:
;   undefined4 DAT_005a4a78
;   undefined4 DAT_005a4a92
;
; Called Functions:
;   FUN_0056cea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d340
        ;   Label: FUN_0056d340
    PUSH ESI                            ; 0056d341
    PUSH EDI                            ; 0056d342
    PUSH EBP                            ; 0056d343
    SUB ESP,0x4                         ; 0056d344
    MOV EBP,dword ptr [ESP + 0x18]      ; 0056d347
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0056d34b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056d34f
    MOV EDI,dword ptr [ESP + 0x24]      ; 0056d353
    CMP EBX,0xa8c0                      ; 0056d357
    JNC 0x0056d37b                      ; 0056d35d
        ;   XREF to: 0056d37b (CONDITIONAL_JUMP)  ; LAB_0056d37b
    TEST EAX,EAX                        ; 0056d35f
    JLE 0x0056d37b                      ; 0056d361
        ;   XREF to: 0056d37b (CONDITIONAL_JUMP)  ; LAB_0056d37b
    ADD EBX,0x15180                     ; 0056d363
    MOV ESI,0x15180                     ; 0056d369
    SUB EBX,EAX                         ; 0056d36e
    XOR EDX,EDX                         ; 0056d370
    MOV EAX,EBX                         ; 0056d372
    DIV ESI                             ; 0056d374
    ADD EBP,EAX                         ; 0056d376
    DEC EBP                             ; 0056d378
    JMP 0x0056d38a                      ; 0056d379
        ;   XREF to: 0056d38a (UNCONDITIONAL_JUMP)  ; LAB_0056d38a
    MOV ESI,0x15180                     ; 0056d37b
        ;   Label: LAB_0056d37b
    SUB EBX,EAX                         ; 0056d380
    XOR EDX,EDX                         ; 0056d382
    MOV EAX,EBX                         ; 0056d384
    DIV ESI                             ; 0056d386
    ADD EBP,EAX                         ; 0056d388
    MOV ESI,0x15180                     ; 0056d38a
        ;   Label: LAB_0056d38a
    MOV EAX,EBX                         ; 0056d38f
    XOR EDX,EDX                         ; 0056d391
    DIV ESI                             ; 0056d393
    MOV EBX,EDX                         ; 0056d395
    MOV ESI,0xe10                       ; 0056d397
    MOV EAX,EBX                         ; 0056d39c
    XOR EDX,EDX                         ; 0056d39e
    DIV ESI                             ; 0056d3a0
    XOR EDX,EDX                         ; 0056d3a2
    MOV dword ptr [EDI + 0x8],EAX       ; 0056d3a4
    MOV EAX,EBX                         ; 0056d3a7
    DIV ESI                             ; 0056d3a9
    MOV EBX,EDX                         ; 0056d3ab
    MOV ESI,0x3c                        ; 0056d3ad
    MOV EAX,EBX                         ; 0056d3b2
    XOR EDX,EDX                         ; 0056d3b4
    DIV ESI                             ; 0056d3b6
    XOR EDX,EDX                         ; 0056d3b8
    MOV dword ptr [EDI + 0x4],EAX       ; 0056d3ba
    MOV EAX,EBX                         ; 0056d3bd
    DIV ESI                             ; 0056d3bf
    MOV EBX,0x16e                       ; 0056d3c1
    MOV EAX,EBP                         ; 0056d3c6
    MOV dword ptr [EDI],EDX             ; 0056d3c8
    XOR EDX,EDX                         ; 0056d3ca
    DIV EBX                             ; 0056d3cc
    MOV ESI,EAX                         ; 0056d3ce
    SHL EAX,0x3                         ; 0056d3d0
    ADD EAX,ESI                         ; 0056d3d3
    SHL EAX,0x3                         ; 0056d3d5
    ADD EAX,ESI                         ; 0056d3d8
    MOV EBX,EAX                         ; 0056d3da
    SHL EAX,0x2                         ; 0056d3dc
    ADD EAX,EBX                         ; 0056d3df
    MOV EBX,EBP                         ; 0056d3e1
    SUB EBX,EAX                         ; 0056d3e3
    TEST ESI,ESI                        ; 0056d3e5
    JBE 0x0056d3f1                      ; 0056d3e7
        ;   XREF to: 0056d3f1 (CONDITIONAL_JUMP)  ; LAB_0056d3f1
    LEA EAX,[ESI + -0x1]                ; 0056d3e9
    SHR EAX,0x2                         ; 0056d3ec
    SUB EBX,EAX                         ; 0056d3ef
    LEA EAX,[ESI + 0x76c]               ; 0056d3f1
        ;   Label: LAB_0056d3f1
    PUSH EAX                            ; 0056d3f7
    CALL FUN_0056cea0                   ; 0056d3f8
        ;   XREF to: 0056cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056cea0()
    ADD EAX,0x16d                       ; 0056d3fd
    ADD ESP,0x4                         ; 0056d402
    CMP EBX,EAX                         ; 0056d405
    JC 0x0056d410                       ; 0056d407
        ;   XREF to: 0056d410 (CONDITIONAL_JUMP)  ; LAB_0056d410
    SUB EBX,EAX                         ; 0056d409
        ;   Label: LAB_0056d409
    INC ESI                             ; 0056d40b
    CMP EBX,EAX                         ; 0056d40c
    JNC 0x0056d409                      ; 0056d40e
        ;   XREF to: 0056d409 (CONDITIONAL_JUMP)  ; LAB_0056d409
    MOV dword ptr [EDI + 0x14],ESI      ; 0056d410
        ;   Label: LAB_0056d410
    ADD ESI,0x76c                       ; 0056d413
    MOV EDX,0x5a4a78                    ; 0056d419 | DAT_005a4a78
    PUSH ESI                            ; 0056d41e
    MOV dword ptr [EDI + 0x1c],EBX      ; 0056d41f
    MOV dword ptr [ESP + 0x4],EDX       ; 0056d422 | DAT_005a4a78
    CALL FUN_0056cea0                   ; 0056d426
        ;   XREF to: 0056cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056cea0()
    ADD ESP,0x4                         ; 0056d42b
    TEST EAX,EAX                        ; 0056d42e
    JZ 0x0056d439                       ; 0056d430
        ;   XREF to: 0056d439 (CONDITIONAL_JUMP)  ; LAB_0056d439
    MOV dword ptr [ESP],0x5a4a92        ; 0056d432 | DAT_005a4a92
    MOV ESI,0x1f                        ; 0056d439
        ;   Label: LAB_0056d439
    MOV EAX,EBX                         ; 0056d43e
    XOR EDX,EDX                         ; 0056d440
    DIV ESI                             ; 0056d442
    MOV EDX,dword ptr [ESP]             ; 0056d444
    LEA ESI,[EAX*0x2 + 0x0]             ; 0056d447
    ADD ESI,EDX                         ; 0056d44e
    MOV ESI,dword ptr [ESI]             ; 0056d450 | DAT_005a4a92 | DAT_005a4a78
    SAR ESI,0x10                        ; 0056d452
    CMP EBX,ESI                         ; 0056d455
    JC 0x0056d45a                       ; 0056d457
        ;   XREF to: 0056d45a (CONDITIONAL_JUMP)  ; LAB_0056d45a
    INC EAX                             ; 0056d459
    MOV ECX,dword ptr [ESP]             ; 0056d45a
        ;   Label: LAB_0056d45a
    MOV dword ptr [EDI + 0x10],EAX      ; 0056d45d
    ADD EAX,EAX                         ; 0056d460
    ADD EAX,ECX                         ; 0056d462
    MOVSX EAX,word ptr [EAX]            ; 0056d464 | DAT_005a4a92 | DAT_005a4a78
    SUB EBX,EAX                         ; 0056d467
    XOR EDX,EDX                         ; 0056d469
    INC EBX                             ; 0056d46b
    LEA EAX,[EBP + 0x1]                 ; 0056d46c
    MOV dword ptr [EDI + 0xc],EBX       ; 0056d46f
    MOV EBX,0x7                         ; 0056d472
    DIV EBX                             ; 0056d477
    MOV EAX,EDI                         ; 0056d479
    MOV dword ptr [EDI + 0x18],EDX      ; 0056d47b
    ADD ESP,0x4                         ; 0056d47e
    POP EBP                             ; 0056d481
    POP EDI                             ; 0056d482
    POP ESI                             ; 0056d483
    POP EBX                             ; 0056d484
    RET                                 ; 0056d485

