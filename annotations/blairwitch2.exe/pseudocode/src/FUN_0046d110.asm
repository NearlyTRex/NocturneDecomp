; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d110(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d1801
;   undefined4 DAT_005d1805
;   undefined4 DAT_005d180d
;   undefined4 DAT_005d1815
;   undefined4 DAT_00614d30
;   undefined4 DAT_0061b5a8
;
; Called Functions:
;   FUN_0040cf60
;   FUN_004222d0
;   FUN_0044fd20
;   FUN_00472b50
;   FUN_0049d230
;   FUN_0049d5b0
;   FUN_00534800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d110
        ;   Label: FUN_0046d110
    PUSH ESI                            ; 0046d111
    PUSH EDI                            ; 0046d112
    PUSH EBP                            ; 0046d113
    SUB ESP,0xc8                        ; 0046d114
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0046d11a
    CMP dword ptr [EBX + 0x448],0x0     ; 0046d121
    JZ 0x0046d16e                       ; 0046d128
        ;   XREF to: 0046d16e (CONDITIONAL_JUMP)  ; LAB_0046d16e
    TEST dword ptr [EBX + 0x438],0x7fffffff ; 0046d12a
        ;   Label: LAB_0046d12a
    JZ 0x0046d1d6                       ; 0046d134
        ;   XREF to: 0046d1d6 (CONDITIONAL_JUMP)  ; LAB_0046d1d6
    CMP dword ptr [EBX + 0x434],0x0     ; 0046d13a
    JZ 0x0046d163                       ; 0046d141
        ;   XREF to: 0046d163 (CONDITIONAL_JUMP)  ; LAB_0046d163
    FLD float ptr [EBX + 0x438]         ; 0046d143
    FSUB float ptr [ESP + 0xe0]         ; 0046d149
    FST float ptr [EBX + 0x438]         ; 0046d150
    FLDZ                                ; 0046d156
    FCOMPP                              ; 0046d158
    FNSTSW AX                           ; 0046d15a
    SAHF                                ; 0046d15c
    JA 0x0046d546                       ; 0046d15d
        ;   XREF to: 0046d546 (CONDITIONAL_JUMP)  ; LAB_0046d546
    ADD ESP,0xc8                        ; 0046d163
        ;   Label: LAB_0046d163
    POP EBP                             ; 0046d169
    POP EDI                             ; 0046d16a
    POP ESI                             ; 0046d16b
    POP EBX                             ; 0046d16c
    RET                                 ; 0046d16d
    LEA EDI,[ESP + 0x84]                ; 0046d16e
        ;   Label: LAB_0046d16e
    LEA ESI,[EBX + 0x454]               ; 0046d175
    LEA EAX,[ESP + 0x84]                ; 0046d17b
    MOVSD ES:EDI,ESI                    ; 0046d182
    MOVSD ES:EDI,ESI                    ; 0046d183
    MOVSD ES:EDI,ESI                    ; 0046d184
    PUSH EAX                            ; 0046d185
    FLD float ptr [ESP + 0x8c]          ; 0046d186
    LEA ESI,[ESP + 0x70]                ; 0046d18d
    LEA EAX,[EBX + 0x454]               ; 0046d191
    LEA EDI,[ESP + 0x7c]                ; 0046d197
    PUSH EAX                            ; 0046d19b
    FADD float ptr [0x005d1801]         ; 0046d19c | DAT_005d1801
    PUSH 0x1fc9c68                      ; 0046d1a2
    FSTP float ptr [ESP + 0x94]         ; 0046d1a7
    CALL FUN_00472b50                   ; 0046d1ae
        ;   XREF to: 00472b50 (UNCONDITIONAL_CALL)  ; undefined FUN_00472b50()
    LEA ESI,[ESP + 0x78]                ; 0046d1b3
    ADD ESP,0xc                         ; 0046d1b7
    MOVSD ES:EDI,ESI                    ; 0046d1ba
    MOVSD ES:EDI,ESI                    ; 0046d1bb
    MOVSD ES:EDI,ESI                    ; 0046d1bc
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046d1bd
    MOV dword ptr [EBX + 0x448],0x1     ; 0046d1c1
    MOV dword ptr [EBX + 0x44c],EAX     ; 0046d1cb
    JMP 0x0046d12a                      ; 0046d1d1
        ;   XREF to: 0046d12a (UNCONDITIONAL_JUMP)  ; LAB_0046d12a
    FLD float ptr [ESP + 0xe0]          ; 0046d1d6
        ;   Label: LAB_0046d1d6
    FLD ST0                             ; 0046d1dd
    FMUL double ptr [0x005d1805]        ; 0046d1df | DAT_005d1805
    FSUBR float ptr [EBX + 0x464]       ; 0046d1e5
    FST float ptr [EBX + 0x464]         ; 0046d1eb
    FMULP                               ; 0046d1f1
    LEA ESI,[ESP + 0x3c]                ; 0046d1f3
    LEA EDI,[ESP + 0x54]                ; 0046d1f7
    PUSH EBX                            ; 0046d1fb
    FADD float ptr [EBX + 0x24]         ; 0046d1fc
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0046d1ff
    FSTP float ptr [EBX + 0x24]         ; 0046d205
    CALL dword ptr [EAX + 0x24]         ; 0046d208
    MOV ECX,0x6                         ; 0046d20b
    LEA ESI,[ESP + 0x40]                ; 0046d210
    ADD ESP,0x4                         ; 0046d214
    MOVSD.REP ES:EDI,ESI                ; 0046d217
    FLD float ptr [ESP + 0x64]          ; 0046d219
    FSUB float ptr [ESP + 0x58]         ; 0046d21d
    FMUL double ptr [0x005d180d]        ; 0046d221 | DAT_005d180d
    FSUBR float ptr [EBX + 0x44c]       ; 0046d227
    FLD float ptr [EBX + 0x24]          ; 0046d22d
    FCOMPP                              ; 0046d230
    FNSTSW AX                           ; 0046d232
    SAHF                                ; 0046d234
    JC 0x0046d2a0                       ; 0046d235
        ;   XREF to: 0046d2a0 (CONDITIONAL_JUMP)  ; LAB_0046d2a0
    LEA EAX,[EBX + 0x20]                ; 0046d237
        ;   Label: LAB_0046d237
    XOR ESI,ESI                         ; 0046d23a
    XOR EDI,EDI                         ; 0046d23c
    MOV dword ptr [ESP + 0xb8],EAX      ; 0046d23e
    MOV EAX,[0x0061b5a8]                ; 0046d245 | DAT_0061b5a8
        ;   Label: LAB_0046d245
    CMP ESI,dword ptr [EAX + 0x14f0a8]  ; 0046d24a
    JGE 0x0046d163                      ; 0046d250
        ;   XREF to: 0046d163 (CONDITIONAL_JUMP)  ; LAB_0046d163
    MOV EBP,dword ptr [EDI + EAX*0x1 + 0x14f0ac] ; 0046d256
    MOV EAX,ESP                         ; 0046d25d
    PUSH EAX                            ; 0046d25f
    CALL FUN_004222d0                   ; 0046d260
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 0046d265
    MOV EDX,ESP                         ; 0046d268
    MOV EAX,dword ptr [EBX + 0x46c]     ; 0046d26a
    PUSH EDX                            ; 0046d270
    MOV dword ptr [ESP + 0x8],EAX       ; 0046d271
    MOV dword ptr [ESP + 0x38],EBX      ; 0046d275
    PUSH 0x3f800000                     ; 0046d279
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0046d27e
    MOV dword ptr [ESP + 0x40],EBX      ; 0046d285
    PUSH EDX                            ; 0046d289
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 0046d28a
    PUSH EBP                            ; 0046d290
    ADD EDI,0x4                         ; 0046d291
    INC ESI                             ; 0046d294
    CALL dword ptr [EAX + 0x108]        ; 0046d295
    ADD ESP,0x10                        ; 0046d29b
    JMP 0x0046d245                      ; 0046d29e
        ;   XREF to: 0046d245 (UNCONDITIONAL_JUMP)  ; LAB_0046d245
    CMP dword ptr [EBX + 0x494],0x0     ; 0046d2a0
        ;   Label: LAB_0046d2a0
    JZ 0x0046d2da                       ; 0046d2a7
        ;   XREF to: 0046d2da (CONDITIONAL_JUMP)  ; LAB_0046d2da
    PUSH 0x3f800000                     ; 0046d2a9
    PUSH 0x0                            ; 0046d2ae
    PUSH 0x0                            ; 0046d2b0
    MOV EBP,dword ptr [0x0061b5a8]      ; 0046d2b2 | DAT_0061b5a8
    PUSH 0x42c80000                     ; 0046d2b8
    PUSH EBP                            ; 0046d2bd
    CALL FUN_00534800                   ; 0046d2be
        ;   XREF to: 00534800 (UNCONDITIONAL_CALL)  ; undefined FUN_00534800()
    ADD ESP,0x14                        ; 0046d2c3
    LEA EAX,[EBX + 0x470]               ; 0046d2c6
    PUSH EAX                            ; 0046d2cc
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0046d2cd
    PUSH EBX                            ; 0046d2d3
    CALL dword ptr [EDX + 0x34]         ; 0046d2d4
    ADD ESP,0x8                         ; 0046d2d7
    FLD float ptr [EBX + 0x44c]         ; 0046d2da
        ;   Label: LAB_0046d2da
    MOV EAX,dword ptr [EBX + 0x490]     ; 0046d2e0
    FSTP float ptr [EBX + 0x24]         ; 0046d2e6
    TEST EAX,EAX                        ; 0046d2e9
    JNZ 0x0046d4a0                      ; 0046d2eb
        ;   XREF to: 0046d4a0 (CONDITIONAL_JUMP)  ; LAB_0046d4a0
    LEA ESI,[EBX + 0x20]                ; 0046d2f1
    XOR EDI,EDI                         ; 0046d2f4
    PUSH 0x3f000000                     ; 0046d2f6
        ;   Label: LAB_0046d2f6
    PUSH 0xbf000000                     ; 0046d2fb
    CALL FUN_0040cf60                   ; 0046d300
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046d305
    FLD float ptr [ESP + 0xcc]          ; 0046d30c
    ADD ESP,0x8                         ; 0046d313
    PUSH 0x3f000000                     ; 0046d316
    PUSH 0xbf000000                     ; 0046d31b
    FSTP float ptr [ESP + 0xa4]         ; 0046d320
    CALL FUN_0040cf60                   ; 0046d327
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046d32c
    FLD float ptr [ESP + 0xcc]          ; 0046d333
    ADD ESP,0x8                         ; 0046d33a
    PUSH 0x3f000000                     ; 0046d33d
    PUSH 0xbf000000                     ; 0046d342
    FSTP float ptr [ESP + 0xa8]         ; 0046d347
    CALL FUN_0040cf60                   ; 0046d34e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046d353
    MOV EDX,dword ptr [0x00614d30]      ; 0046d35a | DAT_00614d30
    FLD float ptr [ESP + 0xcc]          ; 0046d360
    ADD ESP,0x8                         ; 0046d367
    LEA EAX,[ESP + 0x9c]                ; 0046d36a
    FLD float ptr [ESP + 0x9c]          ; 0046d371
    FLD float ptr [ESP + 0xa0]          ; 0046d378
    FXCH ST2                            ; 0046d37f
    FSTP float ptr [ESP + 0xa4]         ; 0046d381
    PUSH 0xffff                         ; 0046d388
    FLD float ptr [ESP + 0xa8]          ; 0046d38d
    PUSH 0x0                            ; 0046d394
    FXCH                                ; 0046d396
    FADD float ptr [ESI]                ; 0046d398
    PUSH 0x3f000000                     ; 0046d39a
    FSTP float ptr [ESP + 0xa8]         ; 0046d39f
    FXCH                                ; 0046d3a6
    FADD float ptr [ESI + 0x4]          ; 0046d3a8
    PUSH EAX                            ; 0046d3ab
    FSTP float ptr [ESP + 0xb0]         ; 0046d3ac
    FADD float ptr [ESI + 0x8]          ; 0046d3b3
    PUSH EDX                            ; 0046d3b6
    FSTP float ptr [ESP + 0xb8]         ; 0046d3b7
    CALL FUN_0049d230                   ; 0046d3be
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d230()
    ADD ESP,0x14                        ; 0046d3c3
    PUSH 0x3fc90fdb                     ; 0046d3c6
    PUSH 0x3f490fdb                     ; 0046d3cb
    CALL FUN_0040cf60                   ; 0046d3d0
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046d3d5
    FLD float ptr [ESP + 0xcc]          ; 0046d3dc
    ADD ESP,0x8                         ; 0046d3e3
    PUSH 0x40c90fdb                     ; 0046d3e6
    PUSH 0x0                            ; 0046d3eb
    FSTP float ptr [ESP + 0xc8]         ; 0046d3ed
    CALL FUN_0040cf60                   ; 0046d3f4
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046d3f9
    FLD float ptr [ESP + 0xcc]          ; 0046d400
    ADD ESP,0x8                         ; 0046d407
    FLD ST0                             ; 0046d40a
    FCOS                                ; 0046d40c
    FLD float ptr [ESP + 0xc0]          ; 0046d40e
    FLD ST0                             ; 0046d415
    FCOS                                ; 0046d417
    FXCH ST3                            ; 0046d419
    FSIN                                ; 0046d41b
    FXCH                                ; 0046d41d
    FSIN                                ; 0046d41f
    FXCH ST2                            ; 0046d421
    FMUL float ptr [0x005d1815]         ; 0046d423 | DAT_005d1815
    FXCH                                ; 0046d429
    FMUL float ptr [0x005d1815]         ; 0046d42b | DAT_005d1815
    FXCH ST2                            ; 0046d431
    FMUL float ptr [0x005d1815]         ; 0046d433 | DAT_005d1815
    FXCH ST3                            ; 0046d439
    FSTP float ptr [ESP + 0xbc]         ; 0046d43b
    FMUL float ptr [ESP + 0xbc]         ; 0046d442
    FXCH                                ; 0046d449
    FMUL float ptr [ESP + 0xbc]         ; 0046d44b
    PUSH 0x1bd3848                      ; 0046d452
    FXCH ST2                            ; 0046d457
    FSTP float ptr [ESP + 0x98]         ; 0046d459
    FSTP float ptr [ESP + 0x94]         ; 0046d460
    FSTP float ptr [ESP + 0x9c]         ; 0046d467
    CALL FUN_0044fd20                   ; 0046d46e
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 0046d473
    PUSH EAX                            ; 0046d476
    LEA EAX,[ESP + 0x94]                ; 0046d477
    PUSH EAX                            ; 0046d47e
    PUSH ESI                            ; 0046d47f
    MOV ECX,dword ptr [0x00614d30]      ; 0046d480 | DAT_00614d30
    PUSH ECX                            ; 0046d486
    INC EDI                             ; 0046d487
    CALL FUN_0049d5b0                   ; 0046d488
        ;   XREF to: 0049d5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d5b0()
    ADD ESP,0x10                        ; 0046d48d
    CMP EDI,0xa                         ; 0046d490
    JL 0x0046d2f6                       ; 0046d493
        ;   XREF to: 0046d2f6 (CONDITIONAL_JUMP)  ; LAB_0046d2f6
    LEA EAX,[EAX]                       ; 0046d499
    NOP                                 ; 0046d49f
    PUSH 0x3f800000                     ; 0046d4a0
        ;   Label: LAB_0046d4a0
    FLD float ptr [EBX + 0x458]         ; 0046d4a5
    PUSH 0x0                            ; 0046d4ab
    FSTP float ptr [EBX + 0x24]         ; 0046d4ad
    CALL FUN_0040cf60                   ; 0046d4b0
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046d4b5
    FLD float ptr [ESP + 0xcc]          ; 0046d4bc
    ADD ESP,0x8                         ; 0046d4c3
    FMUL float ptr [EBX + 0x444]        ; 0046d4c6
    PUSH 0x3f800000                     ; 0046d4cc
    FADD float ptr [EBX + 0x454]        ; 0046d4d1
    PUSH 0x0                            ; 0046d4d7
    FSTP float ptr [EBX + 0x20]         ; 0046d4d9
    CALL FUN_0040cf60                   ; 0046d4dc
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046d4e1
    FLD float ptr [ESP + 0xcc]          ; 0046d4e8
    FMUL float ptr [EBX + 0x444]        ; 0046d4ef
    FADD float ptr [EBX + 0x45c]        ; 0046d4f5
    LEA EAX,[EBX + 0x460]               ; 0046d4fb
    FSTP float ptr [EBX + 0x28]         ; 0046d501
    MOV dword ptr [EAX + 0x8],0x0       ; 0046d504
    ADD ESP,0x8                         ; 0046d50b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046d50e
    MOV dword ptr [EAX + 0x4],EDX       ; 0046d511
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046d514
    MOV dword ptr [EAX],EDX             ; 0046d517
    PUSH dword ptr [EBX + 0x440]        ; 0046d519
    PUSH dword ptr [EBX + 0x43c]        ; 0046d51f
    CALL FUN_0040cf60                   ; 0046d525
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046d52a
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0046d531
    MOV dword ptr [EBX + 0x438],EAX     ; 0046d538
    ADD ESP,0x8                         ; 0046d53e
    JMP 0x0046d237                      ; 0046d541
        ;   XREF to: 0046d237 (UNCONDITIONAL_JUMP)  ; LAB_0046d237
    MOV dword ptr [EBX + 0x438],0x0     ; 0046d546
        ;   Label: LAB_0046d546
    ADD ESP,0xc8                        ; 0046d550
    POP EBP                             ; 0046d556
    POP EDI                             ; 0046d557
    POP ESI                             ; 0046d558
    POP EBX                             ; 0046d559
    RET                                 ; 0046d55a

