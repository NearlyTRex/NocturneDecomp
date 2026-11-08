; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00460270(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00603b28
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_0046d460
;   FUN_0053b250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460270
        ;   Label: FUN_00460270
    PUSH ESI                            ; 00460271
    PUSH EDI                            ; 00460272
    PUSH EBP                            ; 00460273
    SUB ESP,0x28                        ; 00460274
    MOV EDX,0x4                         ; 00460277
    PUSH 0x1                            ; 0046027c
    MOV ESI,0x2                         ; 0046027e
    MOV EBP,dword ptr [0x005f2afc]      ; 00460283 | DAT_005f2afc
    XOR ECX,ECX                         ; 00460289
    XOR EBX,EBX                         ; 0046028b
    MOV dword ptr [ESP + 0x8],EDX       ; 0046028d
    MOV dword ptr [ESP + 0x18],ECX      ; 00460291
    MOV dword ptr [ESP + 0x14],ECX      ; 00460295
    PUSH EBP                            ; 00460299 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x14],ECX      ; 0046029a
    MOV dword ptr [ESP + 0x10],ECX      ; 0046029e
    CALL FUN_0046d460                   ; 004602a2
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    MOV EDX,0x4                         ; 004602a7
    MOV ECX,0x6                         ; 004602ac
    ADD ESP,0x8                         ; 004602b1
    MOV EAX,ESP                         ; 004602b4
    MOV EDI,dword ptr [0x00603b28]      ; 004602b6 | DAT_00603b28
    PUSH EAX                            ; 004602bc
    MOV dword ptr [ESP + 0x1c],EBX      ; 004602bd
    MOV dword ptr [ESP + 0x20],EDX      ; 004602c1
    PUSH EDI                            ; 004602c5 | DAT_01ed78c8
    MOV dword ptr [ESP + 0x28],ECX      ; 004602c6
    MOV dword ptr [ESP + 0x2c],ESI      ; 004602ca
    CALL FUN_0053b250                   ; 004602ce
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 004602d3
    TEST EAX,EAX                        ; 004602d6
    JZ 0x004602f9                       ; 004602d8
        ;   XREF to: 004602f9 (CONDITIONAL_JUMP)  ; LAB_004602f9
    MOV EBX,0x1                         ; 004602da
        ;   Label: LAB_004602da
    PUSH 0x0                            ; 004602df
        ;   Label: LAB_004602df
    MOV EAX,[0x005f2afc]                ; 004602e1 | DAT_005f2afc
    PUSH EAX                            ; 004602e6 | DAT_01bdd7e4
    CALL FUN_0046d460                   ; 004602e7
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    ADD ESP,0x8                         ; 004602ec
    MOV EAX,EBX                         ; 004602ef
    ADD ESP,0x28                        ; 004602f1
    POP EBP                             ; 004602f4
    POP EDI                             ; 004602f5
    POP ESI                             ; 004602f6
    POP EBX                             ; 004602f7
    RET                                 ; 004602f8
    MOV EBP,0x1                         ; 004602f9
        ;   Label: LAB_004602f9
    MOV EAX,0x3                         ; 004602fe
    MOV EDX,0x7                         ; 00460303
    MOV dword ptr [ESP + 0x1c],EAX      ; 00460308
    MOV EAX,ESP                         ; 0046030c
    MOV ECX,0x5                         ; 0046030e
    PUSH EAX                            ; 00460313
    MOV ESI,dword ptr [0x00603b28]      ; 00460314 | DAT_00603b28
    MOV dword ptr [ESP + 0x1c],EBP      ; 0046031a
    PUSH ESI                            ; 0046031e | DAT_01ed78c8
    MOV dword ptr [ESP + 0x28],EDX      ; 0046031f
    MOV dword ptr [ESP + 0x2c],ECX      ; 00460323
    CALL FUN_0053b250                   ; 00460327
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 0046032c
    TEST EAX,EAX                        ; 0046032f
    JZ 0x00460337                       ; 00460331
        ;   XREF to: 00460337 (CONDITIONAL_JUMP)  ; LAB_00460337
    MOV EBX,EBP                         ; 00460333
    JMP 0x004602df                      ; 00460335
        ;   XREF to: 004602df (UNCONDITIONAL_JUMP)  ; LAB_004602df
    MOV dword ptr [ESP + 0x20],0x5      ; 00460337
        ;   Label: LAB_00460337
    MOV EAX,ESP                         ; 0046033f
    MOV EDX,0x4                         ; 00460341
    PUSH EAX                            ; 00460346
    MOV ECX,dword ptr [0x00603b28]      ; 00460347 | DAT_00603b28
    MOV dword ptr [ESP + 0x1c],EBX      ; 0046034d
    PUSH ECX                            ; 00460351 | DAT_01ed78c8
    MOV dword ptr [ESP + 0x24],EBP      ; 00460352
    MOV dword ptr [ESP + 0x2c],EDX      ; 00460356
    CALL FUN_0053b250                   ; 0046035a
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 0046035f
    TEST EAX,EAX                        ; 00460362
    JZ 0x0046036d                       ; 00460364
        ;   XREF to: 0046036d (CONDITIONAL_JUMP)  ; LAB_0046036d
    MOV EBX,EBP                         ; 00460366
    JMP 0x004602df                      ; 00460368
        ;   XREF to: 004602df (UNCONDITIONAL_JUMP)  ; LAB_004602df
    MOV ESI,0x2                         ; 0046036d
        ;   Label: LAB_0046036d
    MOV EAX,0x3                         ; 00460372
    MOV EDI,0x6                         ; 00460377
    MOV dword ptr [ESP + 0x24],EAX      ; 0046037c
    MOV EAX,ESP                         ; 00460380
    MOV EBP,0x7                         ; 00460382
    PUSH EAX                            ; 00460387
    MOV EDX,dword ptr [0x00603b28]      ; 00460388 | DAT_00603b28
    MOV dword ptr [ESP + 0x1c],ESI      ; 0046038e
    PUSH EDX                            ; 00460392 | DAT_01ed78c8
    MOV dword ptr [ESP + 0x24],EDI      ; 00460393
    MOV dword ptr [ESP + 0x28],EBP      ; 00460397
    CALL FUN_0053b250                   ; 0046039b
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 004603a0
    TEST EAX,EAX                        ; 004603a3
    JNZ 0x004602da                      ; 004603a5
        ;   XREF to: 004602da (CONDITIONAL_JUMP)  ; LAB_004602da
    MOV EDI,0x3                         ; 004603ab
    MOV EBP,0x1                         ; 004603b0
    MOV EAX,ESP                         ; 004603b5
    MOV dword ptr [ESP + 0x18],EBX      ; 004603b7
    PUSH EAX                            ; 004603bb
    MOV EAX,[0x00603b28]                ; 004603bc | DAT_00603b28
    MOV dword ptr [ESP + 0x20],ESI      ; 004603c1
    PUSH EAX                            ; 004603c5 | DAT_01ed78c8
    MOV dword ptr [ESP + 0x28],EDI      ; 004603c6
    MOV dword ptr [ESP + 0x2c],EBP      ; 004603ca
    CALL FUN_0053b250                   ; 004603ce
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 004603d3
    TEST EAX,EAX                        ; 004603d6
    JZ 0x004603e1                       ; 004603d8
        ;   XREF to: 004603e1 (CONDITIONAL_JUMP)  ; LAB_004603e1
    MOV EBX,EBP                         ; 004603da
    JMP 0x004602df                      ; 004603dc
        ;   XREF to: 004602df (UNCONDITIONAL_JUMP)  ; LAB_004602df
    MOV EDX,0x4                         ; 004603e1
        ;   Label: LAB_004603e1
    MOV ECX,0x5                         ; 004603e6
    MOV ESI,0x7                         ; 004603eb
    MOV EDI,0x6                         ; 004603f0
    MOV EAX,ESP                         ; 004603f5
    MOV EBP,dword ptr [0x00603b28]      ; 004603f7 | DAT_00603b28
    PUSH EAX                            ; 004603fd
    MOV dword ptr [ESP + 0x1c],EDX      ; 004603fe
    MOV dword ptr [ESP + 0x20],ECX      ; 00460402
    PUSH EBP                            ; 00460406 | DAT_01ed78c8
    MOV dword ptr [ESP + 0x28],ESI      ; 00460407
    MOV dword ptr [ESP + 0x2c],EDI      ; 0046040b
    CALL FUN_0053b250                   ; 0046040f
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0x8                         ; 00460414
    TEST EAX,EAX                        ; 00460417
    JZ 0x004602df                       ; 00460419
        ;   XREF to: 004602df (CONDITIONAL_JUMP)  ; LAB_004602df
    JMP 0x004602da                      ; 0046041f
        ;   XREF to: 004602da (UNCONDITIONAL_JUMP)  ; LAB_004602da

