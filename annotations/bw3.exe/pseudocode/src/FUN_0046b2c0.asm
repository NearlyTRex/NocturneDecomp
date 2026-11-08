; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b2c0(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0053f940 at 0054085b
;   FUN_00548c70 at 00549401
;   FUN_00577760 at 00577cce
;
; Referenced Globals:
;   undefined4 DAT_01bdd818
;   undefined4 DAT_01bdd81c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046b2c0
        ;   Label: FUN_0046b2c0
    PUSH EDI                            ; 0046b2c1
    PUSH EBP                            ; 0046b2c2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0046b2c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0046b2c7
    CMP dword ptr [EDI + 0xc],0x0       ; 0046b2cb
    JNZ 0x0046b336                      ; 0046b2cf
        ;   XREF to: 0046b336 (CONDITIONAL_JUMP)  ; LAB_0046b336
    PUSH EBX                            ; 0046b2d1
        ;   Label: LAB_0046b2d1
    MOV ECX,dword ptr [ESI + 0x4]       ; 0046b2d2
    XOR EDX,EDX                         ; 0046b2d5
    TEST ECX,ECX                        ; 0046b2d7
    JLE 0x0046b300                      ; 0046b2d9
        ;   XREF to: 0046b300 (CONDITIONAL_JUMP)  ; LAB_0046b300
    MOV EAX,ESI                         ; 0046b2db
    XOR ECX,ECX                         ; 0046b2dd
    ADD ECX,0x4                         ; 0046b2df
        ;   Label: LAB_0046b2df
    MOV EBX,dword ptr [EAX + 0x18]      ; 0046b2e2
    MOV dword ptr [ECX + 0x1bdd814],EBX ; 0046b2e5 | DAT_01bdd818 | DAT_01bdd81c
    INC EDX                             ; 0046b2eb
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046b2ec
    ADD EAX,0xc                         ; 0046b2ef
    CMP EDX,EBX                         ; 0046b2f2
    JL 0x0046b2df                       ; 0046b2f4
        ;   XREF to: 0046b2df (CONDITIONAL_JUMP)  ; LAB_0046b2df
    LEA EAX,[EAX]                       ; 0046b2f6
    LEA EDX,[EDX]                       ; 0046b2fc
    CMP dword ptr [EDI + 0x4],0x0       ; 0046b300
        ;   Label: LAB_0046b300
    JZ 0x0046b348                       ; 0046b304
        ;   XREF to: 0046b348 (CONDITIONAL_JUMP)  ; LAB_0046b348
    XOR EBP,EBP                         ; 0046b306
    MOV EBX,0x46f9a6                    ; 0046b308 | LAB_0046f9a6
    MOV dword ptr [0x01c6e2b4],EBP      ; 0046b30d | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 0046b313 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EBX      ; 0046b319 | DAT_01c6b5cc
    PUSH 0x1bdd818                      ; 0046b31f | DAT_01bdd818
        ;   Label: LAB_0046b31f
    MOV EDX,dword ptr [ESI + 0x4]       ; 0046b324
    PUSH EDX                            ; 0046b327
    PUSH EDI                            ; 0046b328
    CALL FUN_0046b160                   ; 0046b329
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b160()
    ADD ESP,0xc                         ; 0046b32e
    POP EBX                             ; 0046b331
    POP EBP                             ; 0046b332
        ;   Label: LAB_0046b332
    POP EDI                             ; 0046b333
    POP ESI                             ; 0046b334
    RET                                 ; 0046b335
    LEA EAX,[ESI + 0x8]                 ; 0046b336
        ;   Label: LAB_0046b336
    PUSH EAX                            ; 0046b339
    CALL FUN_00403920                   ; 0046b33a
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 0046b33f
    TEST EAX,EAX                        ; 0046b342
    JZ 0x0046b332                       ; 0046b344
        ;   XREF to: 0046b332 (CONDITIONAL_JUMP)  ; LAB_0046b332
    JMP 0x0046b2d1                      ; 0046b346
        ;   XREF to: 0046b2d1 (UNCONDITIONAL_JUMP)  ; LAB_0046b2d1
    MOV EDX,0xc0                        ; 0046b348
        ;   Label: LAB_0046b348
    MOV ECX,0x6                         ; 0046b34d
    MOV EAX,0x46fcc8                    ; 0046b352 | LAB_0046fcc8
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046b357 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ECX      ; 0046b35d | DAT_01c6e2b8
    MOV [0x01c6b5cc],EAX                ; 0046b363 | DAT_01c6b5cc
    JMP 0x0046b31f                      ; 0046b368
        ;   XREF to: 0046b31f (UNCONDITIONAL_JUMP)  ; LAB_0046b31f

