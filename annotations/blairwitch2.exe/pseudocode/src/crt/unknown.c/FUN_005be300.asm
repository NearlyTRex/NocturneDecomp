; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD crt_unknown_c_FUN_005be300(uint param_1,LPVOID param_2,DWORD param_3)
;
;
; XREF[2]:
;   crt_stdio.c_fread_FUN_005b87c0 at 005b88d9
;   crt_unknown.c_FUN_005b8280 at 005b830f
;
; Referenced Globals:
;   void* PTR_ReadFile_005c8604 = 001c90be
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;   undefined4 DAT_0061f414
;   undefined4 DAT_0061f43c
;   undefined4 DAT_0061f480
;   undefined4 DAT_0061f4d8
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005c036c
;   ReadFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be300
        ;   Label: crt_unknown.c_FUN_005be300
    PUSH ESI                            ; 005be301
    PUSH EDI                            ; 005be302
    PUSH EBP                            ; 005be303
    SUB ESP,0x4                         ; 005be304
    MOV EBX,dword ptr [ESP + 0x18]      ; 005be307
    TEST EBX,EBX                        ; 005be30b
    JL 0x005be317                       ; 005be30d
        ;   XREF to: 005be317 (CONDITIONAL_JUMP)  ; LAB_005be317
    CMP EBX,dword ptr [0x0061f480]      ; 005be30f | DAT_0061f480
    JBE 0x005be32b                      ; 005be315
        ;   XREF to: 005be32b (CONDITIONAL_JUMP)  ; LAB_005be32b
    PUSH 0x4                            ; 005be317
        ;   Label: LAB_005be317
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005be319
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005be31e
    ADD ESP,0x4                         ; 005be323
    JMP 0x005be3c1                      ; 005be326
        ;   XREF to: 005be3c1 (UNCONDITIONAL_JUMP)  ; LAB_005be3c1
    PUSH EBX                            ; 005be32b
        ;   Label: LAB_005be32b
    CALL dword ptr [0x0061f2a8]         ; 005be32c | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV ECX,dword ptr [0x0061f43c]      ; 005be332 | DAT_0061f43c
    ADD ESP,0x4                         ; 005be338
    TEST ECX,ECX                        ; 005be33b
    JZ 0x005be377                       ; 005be33d
        ;   XREF to: 005be377 (CONDITIONAL_JUMP)  ; LAB_005be377
    PUSH EBX                            ; 005be33f
    CALL dword ptr [0x0061f414]         ; 005be340 | DAT_0061f414
    ADD ESP,0x4                         ; 005be346
    TEST EAX,EAX                        ; 005be349
    JZ 0x005be377                       ; 005be34b
        ;   XREF to: 005be377 (CONDITIONAL_JUMP)  ; LAB_005be377
    MOV EDX,dword ptr [ESP + 0x20]      ; 005be34d
    PUSH EDX                            ; 005be351
    MOV ECX,dword ptr [ESP + 0x20]      ; 005be352
    PUSH ECX                            ; 005be356
    PUSH EAX                            ; 005be357
    CALL dword ptr [0x0061f43c]         ; 005be358 | DAT_0061f43c
    ADD ESP,0xc                         ; 005be35e
    PUSH EBX                            ; 005be361
    MOV ESI,EAX                         ; 005be362
    CALL dword ptr [0x0061f2ac]         ; 005be364 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005be36a
    MOV EAX,ESI                         ; 005be36d
    ADD ESP,0x4                         ; 005be36f
    POP EBP                             ; 005be372
    POP EDI                             ; 005be373
    POP ESI                             ; 005be374
    POP EBX                             ; 005be375
    RET                                 ; 005be376
    PUSH 0x0                            ; 005be377
        ;   Label: LAB_005be377
    LEA EAX,[ESP + 0x4]                 ; 005be379
    PUSH EAX                            ; 005be37d
    MOV EDI,dword ptr [ESP + 0x28]      ; 005be37e
    PUSH EDI                            ; 005be382
    MOV EBP,dword ptr [ESP + 0x28]      ; 005be383
    MOV ESI,dword ptr [0x0061f4d8]      ; 005be387 | DAT_0061f4d8
    PUSH EBP                            ; 005be38d
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 005be38e
    PUSH ESI                            ; 005be391
    CALL dword ptr CS:[0x5c8604]        ; 005be392 | PTR_ReadFile_005c8604
    TEST EAX,EAX                        ; 005be399
    JNZ 0x005be3b4                      ; 005be39b
        ;   XREF to: 005be3b4 (CONDITIONAL_JUMP)  ; LAB_005be3b4
    PUSH EBX                            ; 005be39d
    CALL dword ptr [0x0061f2ac]         ; 005be39e | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005be3a4
    CALL crt_unknown.c_FUN_005c036c     ; 005be3a7
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    ADD ESP,0x4                         ; 005be3ac
    POP EBP                             ; 005be3af
    POP EDI                             ; 005be3b0
    POP ESI                             ; 005be3b1
    POP EBX                             ; 005be3b2
    RET                                 ; 005be3b3
    PUSH EBX                            ; 005be3b4
        ;   Label: LAB_005be3b4
    CALL dword ptr [0x0061f2ac]         ; 005be3b5 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005be3bb
    MOV EAX,dword ptr [ESP]             ; 005be3be
    ADD ESP,0x4                         ; 005be3c1
        ;   Label: LAB_005be3c1
    POP EBP                             ; 005be3c4
    POP EDI                             ; 005be3c5
    POP ESI                             ; 005be3c6
    POP EBX                             ; 005be3c7
    RET                                 ; 005be3c8

