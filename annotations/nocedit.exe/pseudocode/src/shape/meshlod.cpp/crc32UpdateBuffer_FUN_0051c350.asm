; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_crc32UpdateBuffer_FUN_0051c350(uint * crc_ptr, uchar * data_ptr, int byte_count)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_ptr
; uchar *          Stack[0x8]:4   data_ptr
; int              Stack[0xc]:4   byte_count
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c350
        ;   Label: shape_meshlod.cpp_crc32UpdateBuffer_FUN_0051c350
    PUSH ESI                            ; 0051c351
    PUSH EDI                            ; 0051c352
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051c353
    MOV EDI,dword ptr [ESP + 0x18]      ; 0051c357
    MOV ECX,dword ptr [ESP + 0x14]      ; 0051c35b
    TEST EDI,EDI                        ; 0051c35f
    JLE 0x0051c427                      ; 0051c361
        ;   XREF to: 0051c427 (CONDITIONAL_JUMP)  ; LAB_0051c427
    MOV EAX,EDX                         ; 0051c367
    MOV BL,byte ptr [ECX]               ; 0051c369
        ;   Label: LAB_0051c369
    AND EBX,0xff                        ; 0051c36b
    MOV ESI,dword ptr [EDX]             ; 0051c371
    SHL EBX,0x18                        ; 0051c373
    XOR ESI,EBX                         ; 0051c376
    MOV dword ptr [EDX],ESI             ; 0051c378
    TEST byte ptr [EDX + 0x3],0x80      ; 0051c37a
    JZ 0x0051c42b                       ; 0051c37e
        ;   XREF to: 0051c42b (CONDITIONAL_JUMP)  ; LAB_0051c42b
    LEA EBX,[ESI + ESI*0x1]             ; 0051c384
    XOR EBX,0x4c11db7                   ; 0051c387
    MOV dword ptr [EAX],EBX             ; 0051c38d
        ;   Label: LAB_0051c38d
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c38f
    JZ 0x0051c433                       ; 0051c393
        ;   XREF to: 0051c433 (CONDITIONAL_JUMP)  ; LAB_0051c433
    MOV EBX,dword ptr [EAX]             ; 0051c399
    ADD EBX,EBX                         ; 0051c39b
    XOR EBX,0x4c11db7                   ; 0051c39d
    MOV dword ptr [EAX],EBX             ; 0051c3a3
        ;   Label: LAB_0051c3a3
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c3a5
    JZ 0x0051c43c                       ; 0051c3a9
        ;   XREF to: 0051c43c (CONDITIONAL_JUMP)  ; LAB_0051c43c
    MOV EBX,dword ptr [EAX]             ; 0051c3af
    ADD EBX,EBX                         ; 0051c3b1
    XOR EBX,0x4c11db7                   ; 0051c3b3
    MOV dword ptr [EAX],EBX             ; 0051c3b9
        ;   Label: LAB_0051c3b9
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c3bb
    JZ 0x0051c445                       ; 0051c3bf
        ;   XREF to: 0051c445 (CONDITIONAL_JUMP)  ; LAB_0051c445
    MOV EBX,dword ptr [EAX]             ; 0051c3c5
    ADD EBX,EBX                         ; 0051c3c7
    XOR EBX,0x4c11db7                   ; 0051c3c9
    MOV dword ptr [EAX],EBX             ; 0051c3cf
        ;   Label: LAB_0051c3cf
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c3d1
    JZ 0x0051c44b                       ; 0051c3d5
        ;   XREF to: 0051c44b (CONDITIONAL_JUMP)  ; LAB_0051c44b
    MOV EBX,dword ptr [EAX]             ; 0051c3db
    ADD EBX,EBX                         ; 0051c3dd
    XOR EBX,0x4c11db7                   ; 0051c3df
    MOV dword ptr [EAX],EBX             ; 0051c3e5
        ;   Label: LAB_0051c3e5
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c3e7
    JZ 0x0051c451                       ; 0051c3eb
        ;   XREF to: 0051c451 (CONDITIONAL_JUMP)  ; LAB_0051c451
    MOV EBX,dword ptr [EAX]             ; 0051c3ed
    ADD EBX,EBX                         ; 0051c3ef
    XOR EBX,0x4c11db7                   ; 0051c3f1
    MOV dword ptr [EAX],EBX             ; 0051c3f7
        ;   Label: LAB_0051c3f7
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c3f9
    JZ 0x0051c457                       ; 0051c3fd
        ;   XREF to: 0051c457 (CONDITIONAL_JUMP)  ; LAB_0051c457
    MOV EBX,dword ptr [EAX]             ; 0051c3ff
    ADD EBX,EBX                         ; 0051c401
    XOR EBX,0x4c11db7                   ; 0051c403
    MOV dword ptr [EAX],EBX             ; 0051c409
        ;   Label: LAB_0051c409
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c40b
    JZ 0x0051c45d                       ; 0051c40f
        ;   XREF to: 0051c45d (CONDITIONAL_JUMP)  ; LAB_0051c45d
    MOV ESI,dword ptr [EAX]             ; 0051c411
    ADD ESI,ESI                         ; 0051c413
    XOR ESI,0x4c11db7                   ; 0051c415
    INC ECX                             ; 0051c41b
    DEC EDI                             ; 0051c41c
    MOV dword ptr [EAX],ESI             ; 0051c41d
    TEST EDI,EDI                        ; 0051c41f
    JG 0x0051c369                       ; 0051c421
        ;   XREF to: 0051c369 (CONDITIONAL_JUMP)  ; LAB_0051c369
    POP EDI                             ; 0051c427
        ;   Label: LAB_0051c427
    POP ESI                             ; 0051c428
    POP EBX                             ; 0051c429
    RET                                 ; 0051c42a
    LEA EBX,[ESI + ESI*0x1]             ; 0051c42b
        ;   Label: LAB_0051c42b
    JMP 0x0051c38d                      ; 0051c42e
        ;   XREF to: 0051c38d (UNCONDITIONAL_JUMP)  ; LAB_0051c38d
    MOV EBX,dword ptr [EAX]             ; 0051c433
        ;   Label: LAB_0051c433
    ADD EBX,EBX                         ; 0051c435
    JMP 0x0051c3a3                      ; 0051c437
        ;   XREF to: 0051c3a3 (UNCONDITIONAL_JUMP)  ; LAB_0051c3a3
    MOV EBX,dword ptr [EAX]             ; 0051c43c
        ;   Label: LAB_0051c43c
    ADD EBX,EBX                         ; 0051c43e
    JMP 0x0051c3b9                      ; 0051c440
        ;   XREF to: 0051c3b9 (UNCONDITIONAL_JUMP)  ; LAB_0051c3b9
    MOV EBX,dword ptr [EAX]             ; 0051c445
        ;   Label: LAB_0051c445
    ADD EBX,EBX                         ; 0051c447
    JMP 0x0051c3cf                      ; 0051c449
        ;   XREF to: 0051c3cf (UNCONDITIONAL_JUMP)  ; LAB_0051c3cf
    MOV EBX,dword ptr [EAX]             ; 0051c44b
        ;   Label: LAB_0051c44b
    ADD EBX,EBX                         ; 0051c44d
    JMP 0x0051c3e5                      ; 0051c44f
        ;   XREF to: 0051c3e5 (UNCONDITIONAL_JUMP)  ; LAB_0051c3e5
    MOV EBX,dword ptr [EAX]             ; 0051c451
        ;   Label: LAB_0051c451
    ADD EBX,EBX                         ; 0051c453
    JMP 0x0051c3f7                      ; 0051c455
        ;   XREF to: 0051c3f7 (UNCONDITIONAL_JUMP)  ; LAB_0051c3f7
    MOV EBX,dword ptr [EAX]             ; 0051c457
        ;   Label: LAB_0051c457
    ADD EBX,EBX                         ; 0051c459
    JMP 0x0051c409                      ; 0051c45b
        ;   XREF to: 0051c409 (UNCONDITIONAL_JUMP)  ; LAB_0051c409
    MOV ESI,dword ptr [EAX]             ; 0051c45d
        ;   Label: LAB_0051c45d
    ADD ESI,ESI                         ; 0051c45f
    INC ECX                             ; 0051c461
    DEC EDI                             ; 0051c462
    MOV dword ptr [EAX],ESI             ; 0051c463
    TEST EDI,EDI                        ; 0051c465
    JG 0x0051c369                       ; 0051c467
        ;   XREF to: 0051c369 (CONDITIONAL_JUMP)  ; LAB_0051c369
    POP EDI                             ; 0051c46d
    POP ESI                             ; 0051c46e
    POP EBX                             ; 0051c46f
    RET                                 ; 0051c470

