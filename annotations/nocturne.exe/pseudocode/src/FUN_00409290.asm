; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409290(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
;
; Referenced Globals:
;   undefined4 DAT_006af5b4
;   undefined4 DAT_006af5b8
;   undefined4 DAT_006af5c4
;   undefined4 DAT_006af5c8
;   undefined4 DAT_006af5e4
;   undefined4 DAT_006af5e8
;   undefined4 DAT_006af5f4
;   undefined4 DAT_006af5f8
;
; Called Functions:
;   FUN_004015a0
;   FUN_00431530
;   FUN_00431630
;   FUN_00431730
;   FUN_00431830
;   FUN_004cd300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409290
        ;   Label: FUN_00409290
    PUSH ESI                            ; 00409291
    PUSH EDI                            ; 00409292
    PUSH EBP                            ; 00409293
    SUB ESP,0x30                        ; 00409294
    MOV EAX,dword ptr [ESP + 0x54]      ; 00409297
    AND EAX,dword ptr [ESP + 0x84]      ; 0040929b
    TEST EAX,0x80000000                 ; 004092a2
    JNZ 0x00409497                      ; 004092a7
        ;   XREF to: 00409497 (CONDITIONAL_JUMP)  ; LAB_00409497
    XOR EBX,EBX                         ; 004092ad
        ;   Label: LAB_004092ad
    MOV EAX,dword ptr [ESP + 0x74]      ; 004092af
        ;   Label: LAB_004092af
    CMP EAX,dword ptr [ESP + 0x7c]      ; 004092b3
    JLE 0x004092e0                      ; 004092b7
        ;   XREF to: 004092e0 (CONDITIONAL_JUMP)  ; LAB_004092e0
    MOV EAX,ESP                         ; 004092b9
    PUSH EAX                            ; 004092bb
    LEA EAX,[ESP + 0x78]                ; 004092bc
    PUSH EAX                            ; 004092c0
    LEA EAX,[ESP + 0x4c]                ; 004092c1
    PUSH EAX                            ; 004092c5
    LEA EDI,[ESP + 0x80]                ; 004092c6
    LEA ESI,[ESP + 0xc]                 ; 004092cd
    CALL FUN_00431530                   ; 004092d1
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; undefined FUN_00431530()
    MOV ECX,0xc                         ; 004092d6
    ADD ESP,0xc                         ; 004092db
    MOVSD.REP ES:EDI,ESI                ; 004092de
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004092e0
        ;   Label: LAB_004092e0
    MOV ESI,dword ptr [ESP + 0x74]      ; 004092e4
    NEG EAX                             ; 004092e8
    CMP EAX,ESI                         ; 004092ea
    JLE 0x00409315                      ; 004092ec
        ;   XREF to: 00409315 (CONDITIONAL_JUMP)  ; LAB_00409315
    MOV EAX,ESP                         ; 004092ee
    PUSH EAX                            ; 004092f0
    LEA EAX,[ESP + 0x78]                ; 004092f1
    PUSH EAX                            ; 004092f5
    LEA EAX,[ESP + 0x4c]                ; 004092f6
    PUSH EAX                            ; 004092fa
    LEA EDI,[ESP + 0x80]                ; 004092fb
    LEA ESI,[ESP + 0xc]                 ; 00409302
    CALL FUN_00431630                   ; 00409306
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; undefined FUN_00431630()
    MOV ECX,0xc                         ; 0040930b
    ADD ESP,0xc                         ; 00409310
    MOVSD.REP ES:EDI,ESI                ; 00409313
    MOV EAX,dword ptr [ESP + 0x78]      ; 00409315
        ;   Label: LAB_00409315
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00409319
    JLE 0x00409346                      ; 0040931d
        ;   XREF to: 00409346 (CONDITIONAL_JUMP)  ; LAB_00409346
    MOV EAX,ESP                         ; 0040931f
    PUSH EAX                            ; 00409321
    LEA EAX,[ESP + 0x78]                ; 00409322
    PUSH EAX                            ; 00409326
    LEA EAX,[ESP + 0x4c]                ; 00409327
    PUSH EAX                            ; 0040932b
    LEA EDI,[ESP + 0x80]                ; 0040932c
    LEA ESI,[ESP + 0xc]                 ; 00409333
    CALL FUN_00431730                   ; 00409337
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; undefined FUN_00431730()
    MOV ECX,0xc                         ; 0040933c
    ADD ESP,0xc                         ; 00409341
    MOVSD.REP ES:EDI,ESI                ; 00409344
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00409346
        ;   Label: LAB_00409346
    MOV EBP,dword ptr [ESP + 0x78]      ; 0040934a
    NEG EAX                             ; 0040934e
    CMP EAX,EBP                         ; 00409350
    JLE 0x0040937b                      ; 00409352
        ;   XREF to: 0040937b (CONDITIONAL_JUMP)  ; LAB_0040937b
    MOV EAX,ESP                         ; 00409354
    PUSH EAX                            ; 00409356
    LEA EAX,[ESP + 0x78]                ; 00409357
    PUSH EAX                            ; 0040935b
    LEA EAX,[ESP + 0x4c]                ; 0040935c
    PUSH EAX                            ; 00409360
    LEA EDI,[ESP + 0x80]                ; 00409361
    LEA ESI,[ESP + 0xc]                 ; 00409368
    CALL FUN_00431830                   ; 0040936c
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; undefined FUN_00431830()
    MOV ECX,0xc                         ; 00409371
    ADD ESP,0xc                         ; 00409376
    MOVSD.REP ES:EDI,ESI                ; 00409379
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040937b
        ;   Label: LAB_0040937b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 0040937f
    JLE 0x004093a9                      ; 00409383
        ;   XREF to: 004093a9 (CONDITIONAL_JUMP)  ; LAB_004093a9
    MOV EAX,ESP                         ; 00409385
    PUSH EAX                            ; 00409387
    LEA EAX,[ESP + 0x48]                ; 00409388
    PUSH EAX                            ; 0040938c
    LEA EAX,[ESP + 0x7c]                ; 0040938d
    PUSH EAX                            ; 00409391
    LEA EDI,[ESP + 0x50]                ; 00409392
    LEA ESI,[ESP + 0xc]                 ; 00409396
    CALL FUN_00431530                   ; 0040939a
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; undefined FUN_00431530()
    MOV ECX,0xc                         ; 0040939f
    ADD ESP,0xc                         ; 004093a4
    MOVSD.REP ES:EDI,ESI                ; 004093a7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004093a9
        ;   Label: LAB_004093a9
    MOV ECX,dword ptr [ESP + 0x44]      ; 004093ad
    NEG EAX                             ; 004093b1
    CMP EAX,ECX                         ; 004093b3
    JLE 0x004093db                      ; 004093b5
        ;   XREF to: 004093db (CONDITIONAL_JUMP)  ; LAB_004093db
    MOV EAX,ESP                         ; 004093b7
    PUSH EAX                            ; 004093b9
    LEA EAX,[ESP + 0x48]                ; 004093ba
    PUSH EAX                            ; 004093be
    LEA EAX,[ESP + 0x7c]                ; 004093bf
    PUSH EAX                            ; 004093c3
    LEA EDI,[ESP + 0x50]                ; 004093c4
    LEA ESI,[ESP + 0xc]                 ; 004093c8
    CALL FUN_00431630                   ; 004093cc
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; undefined FUN_00431630()
    MOV ECX,0xc                         ; 004093d1
    ADD ESP,0xc                         ; 004093d6
    MOVSD.REP ES:EDI,ESI                ; 004093d9
    MOV EAX,dword ptr [ESP + 0x48]      ; 004093db
        ;   Label: LAB_004093db
    CMP EAX,dword ptr [ESP + 0x4c]      ; 004093df
    JLE 0x00409409                      ; 004093e3
        ;   XREF to: 00409409 (CONDITIONAL_JUMP)  ; LAB_00409409
    MOV EAX,ESP                         ; 004093e5
    PUSH EAX                            ; 004093e7
    LEA EAX,[ESP + 0x48]                ; 004093e8
    PUSH EAX                            ; 004093ec
    LEA EAX,[ESP + 0x7c]                ; 004093ed
    PUSH EAX                            ; 004093f1
    LEA EDI,[ESP + 0x50]                ; 004093f2
    LEA ESI,[ESP + 0xc]                 ; 004093f6
    CALL FUN_00431730                   ; 004093fa
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; undefined FUN_00431730()
    MOV ECX,0xc                         ; 004093ff
    ADD ESP,0xc                         ; 00409404
    MOVSD.REP ES:EDI,ESI                ; 00409407
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00409409
        ;   Label: LAB_00409409
    MOV EDI,dword ptr [ESP + 0x48]      ; 0040940d
    NEG EAX                             ; 00409411
    CMP EAX,EDI                         ; 00409413
    JLE 0x0040943b                      ; 00409415
        ;   XREF to: 0040943b (CONDITIONAL_JUMP)  ; LAB_0040943b
    MOV EAX,ESP                         ; 00409417
    PUSH EAX                            ; 00409419
    LEA EAX,[ESP + 0x48]                ; 0040941a
    PUSH EAX                            ; 0040941e
    LEA EAX,[ESP + 0x7c]                ; 0040941f
    PUSH EAX                            ; 00409423
    LEA EDI,[ESP + 0x50]                ; 00409424
    LEA ESI,[ESP + 0xc]                 ; 00409428
    CALL FUN_00431830                   ; 0040942c
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; undefined FUN_00431830()
    MOV ECX,0xc                         ; 00409431
    ADD ESP,0xc                         ; 00409436
    MOVSD.REP ES:EDI,ESI                ; 00409439
    INC EBX                             ; 0040943b
        ;   Label: LAB_0040943b
    CMP EBX,0x2                         ; 0040943c
    JL 0x004092af                       ; 0040943f
        ;   XREF to: 004092af (CONDITIONAL_JUMP)  ; LAB_004092af
    MOV EAX,dword ptr [ESP + 0x44]      ; 00409445
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00409449
    CMP EAX,EBP                         ; 0040944d
    JG 0x0040948f                       ; 0040944f
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    MOV EBX,EBP                         ; 00409451
    NEG EBX                             ; 00409453
    CMP EBX,EAX                         ; 00409455
    JG 0x0040948f                       ; 00409457
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00409459
    CMP EAX,EBP                         ; 0040945d
    JG 0x0040948f                       ; 0040945f
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    CMP EBX,EAX                         ; 00409461
    JG 0x0040948f                       ; 00409463
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    MOV EAX,dword ptr [ESP + 0x74]      ; 00409465
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00409469
    CMP EAX,EBX                         ; 0040946d
    JG 0x0040948f                       ; 0040946f
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    NEG EBX                             ; 00409471
    CMP EBX,EAX                         ; 00409473
    JG 0x0040948f                       ; 00409475
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    MOV EAX,dword ptr [ESP + 0x78]      ; 00409477
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0040947b
    CMP EAX,EDI                         ; 0040947f
    JG 0x0040948f                       ; 00409481
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    CMP EBX,EAX                         ; 00409483
    JG 0x0040948f                       ; 00409485
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    TEST EBP,EBP                        ; 00409487
    JLE 0x0040948f                      ; 00409489
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    TEST EDI,EDI                        ; 0040948b
    JG 0x004094a0                       ; 0040948d
        ;   XREF to: 004094a0 (CONDITIONAL_JUMP)  ; LAB_004094a0
    ADD ESP,0x30                        ; 0040948f
        ;   Label: LAB_0040948f
    POP EBP                             ; 00409492
    POP EDI                             ; 00409493
    POP ESI                             ; 00409494
    POP EBX                             ; 00409495
    RET                                 ; 00409496
    TEST AL,0xff                        ; 00409497
        ;   Label: LAB_00409497
    JNZ 0x0040948f                      ; 00409499
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    JMP 0x004092ad                      ; 0040949b
        ;   XREF to: 004092ad (UNCONDITIONAL_JUMP)  ; LAB_004092ad
    MOV ECX,0xc                         ; 004094a0
        ;   Label: LAB_004094a0
    LEA ESI,[ESP + 0x44]                ; 004094a5
    MOV EDI,0x6af5b4                    ; 004094a9 | DAT_006af5b4
    MOVSD.REP ES:EDI,ESI                ; 004094ae | DAT_006af5b4 | DAT_006af5b8
    MOV ECX,0xc                         ; 004094b0
    LEA ESI,[ESP + 0x74]                ; 004094b5
    MOV EDI,0x6af5e4                    ; 004094b9 | DAT_006af5e4
    PUSH 0x4e1e                         ; 004094be
    MOVSD.REP ES:EDI,ESI                ; 004094c3 | DAT_006af5e4 | DAT_006af5e8
    CALL FUN_004cd300                   ; 004094c5
        ;   XREF to: 004cd300 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd300()
    ADD ESP,0x4                         ; 004094ca
    PUSH 0x4e1f                         ; 004094cd
    CALL FUN_004cd300                   ; 004094d2
        ;   XREF to: 004cd300 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd300()
    MOV EAX,[0x006af5f8]                ; 004094d7 | DAT_006af5f8
    ADD ESP,0x4                         ; 004094dc
    SAR EAX,0x10                        ; 004094df
    PUSH EAX                            ; 004094e2
    MOV EAX,[0x006af5f4]                ; 004094e3 | DAT_006af5f4
    SAR EAX,0x10                        ; 004094e8
    PUSH EAX                            ; 004094eb
    MOV EAX,[0x006af5c8]                ; 004094ec | DAT_006af5c8
    SAR EAX,0x10                        ; 004094f1
    PUSH EAX                            ; 004094f4
    MOV EAX,[0x006af5c4]                ; 004094f5 | DAT_006af5c4
    SAR EAX,0x10                        ; 004094fa
    PUSH EAX                            ; 004094fd
    CALL FUN_004015a0                   ; 004094fe
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004015a0()
    ADD ESP,0x10                        ; 00409503
    ADD ESP,0x30                        ; 00409506
    POP EBP                             ; 00409509
    POP EDI                             ; 0040950a
    POP ESI                             ; 0040950b
    POP EBX                             ; 0040950c
    RET                                 ; 0040950d

