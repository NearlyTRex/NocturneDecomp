; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CPoly_saveVertexPositionsWithFlag_FUN_005cd560(CPoly * this_ptr, uint flag_mask)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd560
        ;   Label: shape_superopt.cpp_CPoly_saveVertexPositionsWithFlag_FUN_005cd560
    PUSH ESI                            ; 005cd561
    PUSH EDI                            ; 005cd562
    MOV ESI,dword ptr [ESP + 0x10]      ; 005cd563
    MOV EDX,dword ptr [ESP + 0x14]      ; 005cd567
    MOV EAX,dword ptr [ESI + 0x4]       ; 005cd56b
    SHL EAX,0x3                         ; 005cd56e
    MOV EBX,dword ptr [ESI]             ; 005cd571
    MOV ECX,EAX                         ; 005cd573
    SHL EAX,0x3                         ; 005cd575
    MOV EBX,dword ptr [EBX + 0x4]       ; 005cd578
    SUB EAX,ECX                         ; 005cd57b
    ADD EAX,EBX                         ; 005cd57d
    MOV ECX,dword ptr [EAX + 0x34]      ; 005cd57f
    AND ECX,EDX                         ; 005cd582
    CMP ECX,EDX                         ; 005cd584
    JZ 0x005cd5e1                       ; 005cd586 | LAB_005cd5e1
        ;   XREF to: 005cd5e1 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x8]       ; 005cd588
        ;   Label: LAB_005cd588
    SHL EAX,0x3                         ; 005cd58b
    MOV ECX,EAX                         ; 005cd58e
    SHL EAX,0x3                         ; 005cd590
    SUB EAX,ECX                         ; 005cd593
    ADD EAX,EBX                         ; 005cd595
    MOV ECX,dword ptr [EAX + 0x34]      ; 005cd597
    AND ECX,EDX                         ; 005cd59a
    CMP ECX,EDX                         ; 005cd59c
    JNZ 0x005cd5c5                      ; 005cd59e | LAB_005cd5c5
        ;   XREF to: 005cd5c5 (CONDITIONAL_JUMP)
    LEA ECX,[EAX + 0x18]                ; 005cd5a0
    MOV EDI,dword ptr [EAX]             ; 005cd5a3
    MOV dword ptr [ECX],EDI             ; 005cd5a5
    MOV EDI,dword ptr [EAX + 0x4]       ; 005cd5a7
    MOV dword ptr [ECX + 0x4],EDI       ; 005cd5aa
    MOV EDI,dword ptr [EAX + 0x8]       ; 005cd5ad
    MOV dword ptr [ECX + 0x8],EDI       ; 005cd5b0
    MOV EDI,dword ptr [EAX + 0xc]       ; 005cd5b3
    MOV dword ptr [ECX + 0xc],EDI       ; 005cd5b6
    MOV EDI,dword ptr [EAX + 0x10]      ; 005cd5b9
    MOV dword ptr [ECX + 0x10],EDI      ; 005cd5bc
    MOV EDI,dword ptr [EAX + 0x14]      ; 005cd5bf
    MOV dword ptr [ECX + 0x14],EDI      ; 005cd5c2
    MOV EAX,dword ptr [ESI + 0xc]       ; 005cd5c5
        ;   Label: LAB_005cd5c5
    SHL EAX,0x3                         ; 005cd5c8
    MOV ECX,EAX                         ; 005cd5cb
    SHL EAX,0x3                         ; 005cd5cd
    SUB EAX,ECX                         ; 005cd5d0
    ADD EAX,EBX                         ; 005cd5d2
    MOV ECX,dword ptr [EAX + 0x34]      ; 005cd5d4
    AND ECX,EDX                         ; 005cd5d7
    CMP ECX,EDX                         ; 005cd5d9
    JZ 0x005cd608                       ; 005cd5db | LAB_005cd608
        ;   XREF to: 005cd608 (CONDITIONAL_JUMP)
    POP EDI                             ; 005cd5dd
    POP ESI                             ; 005cd5de
    POP EBX                             ; 005cd5df
    RET                                 ; 005cd5e0
    LEA ECX,[EAX + 0x18]                ; 005cd5e1
        ;   Label: LAB_005cd5e1
    MOV EDI,dword ptr [EAX]             ; 005cd5e4
    MOV dword ptr [ECX],EDI             ; 005cd5e6
    MOV EDI,dword ptr [EAX + 0x4]       ; 005cd5e8
    MOV dword ptr [ECX + 0x4],EDI       ; 005cd5eb
    MOV EDI,dword ptr [EAX + 0x8]       ; 005cd5ee
    MOV dword ptr [ECX + 0x8],EDI       ; 005cd5f1
    MOV EDI,dword ptr [EAX + 0xc]       ; 005cd5f4
    MOV dword ptr [ECX + 0xc],EDI       ; 005cd5f7
    MOV EDI,dword ptr [EAX + 0x10]      ; 005cd5fa
    MOV dword ptr [ECX + 0x10],EDI      ; 005cd5fd
    MOV EDI,dword ptr [EAX + 0x14]      ; 005cd600
    MOV dword ptr [ECX + 0x14],EDI      ; 005cd603
    JMP 0x005cd588                      ; 005cd606 | LAB_005cd588
        ;   XREF to: 005cd588 (UNCONDITIONAL_JUMP)
    LEA EDX,[EAX + 0x18]                ; 005cd608
        ;   Label: LAB_005cd608
    MOV ECX,dword ptr [EAX]             ; 005cd60b
    MOV dword ptr [EDX],ECX             ; 005cd60d
    MOV ECX,dword ptr [EAX + 0x4]       ; 005cd60f
    MOV dword ptr [EDX + 0x4],ECX       ; 005cd612
    MOV ECX,dword ptr [EAX + 0x8]       ; 005cd615
    MOV dword ptr [EDX + 0x8],ECX       ; 005cd618
    MOV ECX,dword ptr [EAX + 0xc]       ; 005cd61b
    MOV dword ptr [EDX + 0xc],ECX       ; 005cd61e
    MOV ECX,dword ptr [EAX + 0x10]      ; 005cd621
    MOV dword ptr [EDX + 0x10],ECX      ; 005cd624
    MOV ECX,dword ptr [EAX + 0x14]      ; 005cd627
    MOV dword ptr [EDX + 0x14],ECX      ; 005cd62a
    POP EDI                             ; 005cd62d
    POP ESI                             ; 005cd62e
    POP EBX                             ; 005cd62f
    RET                                 ; 005cd630

