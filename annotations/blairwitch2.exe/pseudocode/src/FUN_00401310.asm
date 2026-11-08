; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00401310(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; XREF[2]:
;   FUN_00407fc0 at 0040825b
;   FUN_0046b970 at 0046bc5d
;
; Called Functions:
;   FUN_00401280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401310
        ;   Label: FUN_00401310
    PUSH ESI                            ; 00401311
    PUSH EDI                            ; 00401312
    PUSH EBP                            ; 00401313
    SUB ESP,0x1c                        ; 00401314
    MOV EDI,dword ptr [ESP + 0x30]      ; 00401317
    MOV ESI,dword ptr [ESP + 0x34]      ; 0040131b
    MOV EBP,dword ptr [ESP + 0x38]      ; 0040131f
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00401323
    MOV EBX,dword ptr [ESP + 0x40]      ; 00401327
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040132b
    MOV dword ptr [ESP + 0x8],0x1       ; 0040132f
    CMP ESI,EBX                         ; 00401337
    JLE 0x0040134d                      ; 00401339
        ;   XREF to: 0040134d (CONDITIONAL_JUMP)  ; LAB_0040134d
    MOV EDX,EDI                         ; 0040133b
    MOV EDI,ECX                         ; 0040133d
    MOV ECX,EDX                         ; 0040133f
    MOV EDX,ESI                         ; 00401341
    MOV ESI,EBX                         ; 00401343
    MOV EBX,EDX                         ; 00401345
    MOV EDX,EBP                         ; 00401347
    MOV EBP,EAX                         ; 00401349
    MOV EAX,EDX                         ; 0040134b
    SUB ECX,EDI                         ; 0040134d
        ;   Label: LAB_0040134d
    SUB EBX,ESI                         ; 0040134f
    MOV dword ptr [ESP + 0x18],ECX      ; 00401351
    MOV dword ptr [ESP + 0x14],EBX      ; 00401355
    TEST ECX,ECX                        ; 00401359
    JL 0x004013d7                       ; 0040135b
        ;   XREF to: 004013d7 (CONDITIONAL_JUMP)  ; LAB_004013d7
    MOV ECX,dword ptr [ESP + 0x14]      ; 00401361
        ;   Label: LAB_00401361
    MOV EBX,EBP                         ; 00401365
    MOV EDX,EAX                         ; 00401367
    MOV EAX,dword ptr [ESP + 0x18]      ; 00401369
    SUB EDX,EBP                         ; 0040136d
    CMP EAX,ECX                         ; 0040136f
    JLE 0x004013ed                      ; 00401371
        ;   XREF to: 004013ed (CONDITIONAL_JUMP)  ; LAB_004013ed
    LEA EBP,[ECX + ECX*0x1]             ; 00401377
    SUB EBP,EAX                         ; 0040137a
    LEA ECX,[EAX + 0x1]                 ; 0040137c
    MOV EAX,EDX                         ; 0040137f
    SAR EDX,0x1f                        ; 00401381
    IDIV ECX                            ; 00401384
    MOV ECX,dword ptr [ESP + 0x18]      ; 00401386
    XOR EDX,EDX                         ; 0040138a
    MOV dword ptr [ESP],EAX             ; 0040138c
    MOV dword ptr [ESP + 0x10],EDX      ; 0040138f
    TEST ECX,ECX                        ; 00401393
    JL 0x004013cf                       ; 00401395
        ;   XREF to: 004013cf (CONDITIONAL_JUMP)  ; LAB_004013cf
    PUSH EBX                            ; 00401397
        ;   Label: LAB_00401397
    PUSH ESI                            ; 00401398
    PUSH EDI                            ; 00401399
    CALL FUN_00401280                   ; 0040139a
        ;   XREF to: 00401280 (UNCONDITIONAL_CALL)  ; undefined FUN_00401280()
    ADD ESP,0xc                         ; 0040139f
    TEST EBP,EBP                        ; 004013a2
    JLE 0x004013ad                      ; 004013a4
        ;   XREF to: 004013ad (CONDITIONAL_JUMP)  ; LAB_004013ad
    MOV EAX,dword ptr [ESP + 0x18]      ; 004013a6
    INC ESI                             ; 004013aa
    SUB EBP,EAX                         ; 004013ab
    MOV EDX,dword ptr [ESP + 0x8]       ; 004013ad
        ;   Label: LAB_004013ad
    MOV ECX,dword ptr [ESP + 0x14]      ; 004013b1
    MOV EAX,dword ptr [ESP]             ; 004013b5
    ADD EDI,EDX                         ; 004013b8
    ADD EBP,ECX                         ; 004013ba
    MOV EDX,dword ptr [ESP + 0x10]      ; 004013bc
    ADD EBX,EAX                         ; 004013c0
    INC EDX                             ; 004013c2
    MOV ECX,dword ptr [ESP + 0x18]      ; 004013c3
    MOV dword ptr [ESP + 0x10],EDX      ; 004013c7
    CMP EDX,ECX                         ; 004013cb
    JLE 0x00401397                      ; 004013cd
        ;   XREF to: 00401397 (CONDITIONAL_JUMP)  ; LAB_00401397
    ADD ESP,0x1c                        ; 004013cf
        ;   Label: LAB_004013cf
    POP EBP                             ; 004013d2
    POP EDI                             ; 004013d3
    POP ESI                             ; 004013d4
    POP EBX                             ; 004013d5
    RET                                 ; 004013d6
    MOV EBX,ECX                         ; 004013d7
        ;   Label: LAB_004013d7
    MOV EDX,0xffffffff                  ; 004013d9
    NEG EBX                             ; 004013de
    MOV dword ptr [ESP + 0x8],EDX       ; 004013e0
    MOV dword ptr [ESP + 0x18],EBX      ; 004013e4
    JMP 0x00401361                      ; 004013e8
        ;   XREF to: 00401361 (UNCONDITIONAL_JUMP)  ; LAB_00401361
    LEA EBP,[EAX + EAX*0x1]             ; 004013ed
        ;   Label: LAB_004013ed
    MOV EAX,EDX                         ; 004013f0
    SUB EBP,ECX                         ; 004013f2
    INC ECX                             ; 004013f4
    SAR EDX,0x1f                        ; 004013f5
    IDIV ECX                            ; 004013f8
    MOV ECX,dword ptr [ESP + 0x14]      ; 004013fa
    XOR EDX,EDX                         ; 004013fe
    MOV dword ptr [ESP + 0x4],EAX       ; 00401400
    MOV dword ptr [ESP + 0xc],EDX       ; 00401404
    TEST ECX,ECX                        ; 00401408
    JL 0x004013cf                       ; 0040140a
        ;   XREF to: 004013cf (CONDITIONAL_JUMP)  ; LAB_004013cf
    PUSH EBX                            ; 0040140c
        ;   Label: LAB_0040140c
    PUSH ESI                            ; 0040140d
    PUSH EDI                            ; 0040140e
    CALL FUN_00401280                   ; 0040140f
        ;   XREF to: 00401280 (UNCONDITIONAL_CALL)  ; undefined FUN_00401280()
    ADD ESP,0xc                         ; 00401414
    TEST EBP,EBP                        ; 00401417
    JLE 0x00401427                      ; 00401419
        ;   XREF to: 00401427 (CONDITIONAL_JUMP)  ; LAB_00401427
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040141b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040141f
    SUB EBP,EAX                         ; 00401423
    ADD EDI,ECX                         ; 00401425
    MOV EAX,dword ptr [ESP + 0x18]      ; 00401427
        ;   Label: LAB_00401427
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040142b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040142f
    INC ESI                             ; 00401433
    INC ECX                             ; 00401434
    ADD EBP,EAX                         ; 00401435
    ADD EBX,EDX                         ; 00401437
    MOV EDX,dword ptr [ESP + 0x14]      ; 00401439
    MOV dword ptr [ESP + 0xc],ECX       ; 0040143d
    CMP ECX,EDX                         ; 00401441
    JG 0x004013cf                       ; 00401443
        ;   XREF to: 004013cf (CONDITIONAL_JUMP)  ; LAB_004013cf
    JMP 0x0040140c                      ; 00401445
        ;   XREF to: 0040140c (UNCONDITIONAL_JUMP)  ; LAB_0040140c

