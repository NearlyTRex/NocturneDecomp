; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_crc32UpdateDword_FUN_0051c540(uint * crc_ptr, uint dword_value)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_ptr
; uint             Stack[0x8]:4   dword_value
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c540
        ;   Label: shape_meshlod.cpp_crc32UpdateDword_FUN_0051c540
    PUSH ESI                            ; 0051c541
    PUSH EDI                            ; 0051c542
    PUSH EBP                            ; 0051c543
    MOV ESI,0x4                         ; 0051c544
    LEA ECX,[ESP + 0x18]                ; 0051c549
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051c54d
    MOV EDI,0x4c11db7                   ; 0051c551
    MOV EBP,0x80000000                  ; 0051c556
    MOV EAX,EDX                         ; 0051c55b
    MOV BL,byte ptr [ECX]               ; 0051c55d
        ;   Label: LAB_0051c55d
    AND EBX,0xff                        ; 0051c55f
    SHL EBX,0x18                        ; 0051c565
    XOR dword ptr [EDX],EBX             ; 0051c568
    MOV EBX,dword ptr [EDX]             ; 0051c56a
    TEST EBP,EBX                        ; 0051c56c
    JZ 0x0051c5c7                       ; 0051c56e
        ;   XREF to: 0051c5c7 (CONDITIONAL_JUMP)  ; LAB_0051c5c7
    ADD EBX,EBX                         ; 0051c570
    XOR EBX,EDI                         ; 0051c572
    MOV dword ptr [EAX],EBX             ; 0051c574
        ;   Label: LAB_0051c574
    TEST EBP,EBX                        ; 0051c576
    JZ 0x0051c5cb                       ; 0051c578
        ;   XREF to: 0051c5cb (CONDITIONAL_JUMP)  ; LAB_0051c5cb
    ADD EBX,EBX                         ; 0051c57a
    XOR EBX,EDI                         ; 0051c57c
    MOV dword ptr [EAX],EBX             ; 0051c57e
        ;   Label: LAB_0051c57e
    TEST EBP,EBX                        ; 0051c580
    JZ 0x0051c5cf                       ; 0051c582
        ;   XREF to: 0051c5cf (CONDITIONAL_JUMP)  ; LAB_0051c5cf
    ADD EBX,EBX                         ; 0051c584
    XOR EBX,EDI                         ; 0051c586
    MOV dword ptr [EAX],EBX             ; 0051c588
        ;   Label: LAB_0051c588
    TEST EBP,EBX                        ; 0051c58a
    JZ 0x0051c5d3                       ; 0051c58c
        ;   XREF to: 0051c5d3 (CONDITIONAL_JUMP)  ; LAB_0051c5d3
    ADD EBX,EBX                         ; 0051c58e
    XOR EBX,EDI                         ; 0051c590
    MOV dword ptr [EAX],EBX             ; 0051c592
        ;   Label: LAB_0051c592
    TEST EBP,EBX                        ; 0051c594
    JZ 0x0051c5d7                       ; 0051c596
        ;   XREF to: 0051c5d7 (CONDITIONAL_JUMP)  ; LAB_0051c5d7
    ADD EBX,EBX                         ; 0051c598
    XOR EBX,EDI                         ; 0051c59a
    MOV dword ptr [EAX],EBX             ; 0051c59c
        ;   Label: LAB_0051c59c
    TEST EBP,EBX                        ; 0051c59e
    JZ 0x0051c5db                       ; 0051c5a0
        ;   XREF to: 0051c5db (CONDITIONAL_JUMP)  ; LAB_0051c5db
    ADD EBX,EBX                         ; 0051c5a2
    XOR EBX,EDI                         ; 0051c5a4
    MOV dword ptr [EAX],EBX             ; 0051c5a6
        ;   Label: LAB_0051c5a6
    TEST EBP,EBX                        ; 0051c5a8
    JZ 0x0051c5df                       ; 0051c5aa
        ;   XREF to: 0051c5df (CONDITIONAL_JUMP)  ; LAB_0051c5df
    ADD EBX,EBX                         ; 0051c5ac
    XOR EBX,EDI                         ; 0051c5ae
    MOV dword ptr [EAX],EBX             ; 0051c5b0
        ;   Label: LAB_0051c5b0
    TEST EBP,EBX                        ; 0051c5b2
    JZ 0x0051c5e3                       ; 0051c5b4
        ;   XREF to: 0051c5e3 (CONDITIONAL_JUMP)  ; LAB_0051c5e3
    ADD EBX,EBX                         ; 0051c5b6
    XOR EBX,EDI                         ; 0051c5b8
    INC ECX                             ; 0051c5ba
    DEC ESI                             ; 0051c5bb
    MOV dword ptr [EAX],EBX             ; 0051c5bc
    TEST ESI,ESI                        ; 0051c5be
    JG 0x0051c55d                       ; 0051c5c0
        ;   XREF to: 0051c55d (CONDITIONAL_JUMP)  ; LAB_0051c55d
    POP EBP                             ; 0051c5c2
    POP EDI                             ; 0051c5c3
    POP ESI                             ; 0051c5c4
    POP EBX                             ; 0051c5c5
    RET                                 ; 0051c5c6
    ADD EBX,EBX                         ; 0051c5c7
        ;   Label: LAB_0051c5c7
    JMP 0x0051c574                      ; 0051c5c9
        ;   XREF to: 0051c574 (UNCONDITIONAL_JUMP)  ; LAB_0051c574
    ADD EBX,EBX                         ; 0051c5cb
        ;   Label: LAB_0051c5cb
    JMP 0x0051c57e                      ; 0051c5cd
        ;   XREF to: 0051c57e (UNCONDITIONAL_JUMP)  ; LAB_0051c57e
    ADD EBX,EBX                         ; 0051c5cf
        ;   Label: LAB_0051c5cf
    JMP 0x0051c588                      ; 0051c5d1
        ;   XREF to: 0051c588 (UNCONDITIONAL_JUMP)  ; LAB_0051c588
    ADD EBX,EBX                         ; 0051c5d3
        ;   Label: LAB_0051c5d3
    JMP 0x0051c592                      ; 0051c5d5
        ;   XREF to: 0051c592 (UNCONDITIONAL_JUMP)  ; LAB_0051c592
    ADD EBX,EBX                         ; 0051c5d7
        ;   Label: LAB_0051c5d7
    JMP 0x0051c59c                      ; 0051c5d9
        ;   XREF to: 0051c59c (UNCONDITIONAL_JUMP)  ; LAB_0051c59c
    ADD EBX,EBX                         ; 0051c5db
        ;   Label: LAB_0051c5db
    JMP 0x0051c5a6                      ; 0051c5dd
        ;   XREF to: 0051c5a6 (UNCONDITIONAL_JUMP)  ; LAB_0051c5a6
    ADD EBX,EBX                         ; 0051c5df
        ;   Label: LAB_0051c5df
    JMP 0x0051c5b0                      ; 0051c5e1
        ;   XREF to: 0051c5b0 (UNCONDITIONAL_JUMP)  ; LAB_0051c5b0
    ADD EBX,EBX                         ; 0051c5e3
        ;   Label: LAB_0051c5e3
    INC ECX                             ; 0051c5e5
    DEC ESI                             ; 0051c5e6
    MOV dword ptr [EAX],EBX             ; 0051c5e7
    TEST ESI,ESI                        ; 0051c5e9
    JG 0x0051c55d                       ; 0051c5eb
        ;   XREF to: 0051c55d (CONDITIONAL_JUMP)  ; LAB_0051c55d
    POP EBP                             ; 0051c5f1
    POP EDI                             ; 0051c5f2
    POP ESI                             ; 0051c5f3
    POP EBX                             ; 0051c5f4
    RET                                 ; 0051c5f5

