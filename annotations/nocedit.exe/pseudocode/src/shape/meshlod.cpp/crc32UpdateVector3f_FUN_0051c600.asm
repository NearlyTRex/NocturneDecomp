; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_crc32UpdateVector3f_FUN_0051c600(uint * crc_ptr, CVector3f * vector_ptr)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_ptr
; CVector3f *      Stack[0x8]:4   vector_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c600
        ;   Label: shape_meshlod.cpp_crc32UpdateVector3f_FUN_0051c600
    PUSH ESI                            ; 0051c601
    PUSH EDI                            ; 0051c602
    PUSH EBP                            ; 0051c603
    MOV ECX,0xc                         ; 0051c604
    MOV ESI,dword ptr [ESP + 0x18]      ; 0051c609
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051c60d
    MOV EDI,0x80000000                  ; 0051c611
    MOV EAX,EDX                         ; 0051c616
    MOV BL,byte ptr [ESI]               ; 0051c618
        ;   Label: LAB_0051c618
    AND EBX,0xff                        ; 0051c61a
    MOV EBP,dword ptr [EDX]             ; 0051c620
    SHL EBX,0x18                        ; 0051c622
    XOR EBP,EBX                         ; 0051c625
    MOV dword ptr [EDX],EBP             ; 0051c627
    TEST EDI,EBP                        ; 0051c629
    JZ 0x0051c6b6                       ; 0051c62b | LAB_0051c6b6
        ;   XREF to: 0051c6b6 (CONDITIONAL_JUMP)
    LEA EBX,[EBP + EBP*0x1]             ; 0051c631
    XOR EBX,0x4c11db7                   ; 0051c635
    MOV dword ptr [EAX],EBX             ; 0051c63b
        ;   Label: LAB_0051c63b
    TEST EDI,EBX                        ; 0051c63d
    JZ 0x0051c6bf                       ; 0051c63f | LAB_0051c6bf
        ;   XREF to: 0051c6bf (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c645
    XOR EBX,0x4c11db7                   ; 0051c647
    MOV dword ptr [EAX],EBX             ; 0051c64d
        ;   Label: LAB_0051c64d
    TEST EDI,EBX                        ; 0051c64f
    JZ 0x0051c6c3                       ; 0051c651 | LAB_0051c6c3
        ;   XREF to: 0051c6c3 (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c657
    XOR EBX,0x4c11db7                   ; 0051c659
    MOV dword ptr [EAX],EBX             ; 0051c65f
        ;   Label: LAB_0051c65f
    TEST EDI,EBX                        ; 0051c661
    JZ 0x0051c6c7                       ; 0051c663 | LAB_0051c6c7
        ;   XREF to: 0051c6c7 (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c665
    XOR EBX,0x4c11db7                   ; 0051c667
    MOV dword ptr [EAX],EBX             ; 0051c66d
        ;   Label: LAB_0051c66d
    TEST EDI,EBX                        ; 0051c66f
    JZ 0x0051c6cb                       ; 0051c671 | LAB_0051c6cb
        ;   XREF to: 0051c6cb (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c673
    XOR EBX,0x4c11db7                   ; 0051c675
    MOV dword ptr [EAX],EBX             ; 0051c67b
        ;   Label: LAB_0051c67b
    TEST EDI,EBX                        ; 0051c67d
    JZ 0x0051c6cf                       ; 0051c67f | LAB_0051c6cf
        ;   XREF to: 0051c6cf (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c681
    XOR EBX,0x4c11db7                   ; 0051c683
    MOV dword ptr [EAX],EBX             ; 0051c689
        ;   Label: LAB_0051c689
    TEST EDI,EBX                        ; 0051c68b
    JZ 0x0051c6d3                       ; 0051c68d | LAB_0051c6d3
        ;   XREF to: 0051c6d3 (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c68f
    XOR EBX,0x4c11db7                   ; 0051c691
    MOV dword ptr [EAX],EBX             ; 0051c697
        ;   Label: LAB_0051c697
    TEST EDI,EBX                        ; 0051c699
    JZ 0x0051c6d7                       ; 0051c69b | LAB_0051c6d7
        ;   XREF to: 0051c6d7 (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c69d
    XOR EBX,0x4c11db7                   ; 0051c69f
    INC ESI                             ; 0051c6a5
    DEC ECX                             ; 0051c6a6
    MOV dword ptr [EAX],EBX             ; 0051c6a7
    TEST ECX,ECX                        ; 0051c6a9
    JG 0x0051c618                       ; 0051c6ab | LAB_0051c618
        ;   XREF to: 0051c618 (CONDITIONAL_JUMP)
    POP EBP                             ; 0051c6b1
    POP EDI                             ; 0051c6b2
    POP ESI                             ; 0051c6b3
    POP EBX                             ; 0051c6b4
    RET                                 ; 0051c6b5
    LEA EBX,[EBP + EBP*0x1]             ; 0051c6b6
        ;   Label: LAB_0051c6b6
    JMP 0x0051c63b                      ; 0051c6ba | LAB_0051c63b
        ;   XREF to: 0051c63b (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c6bf
        ;   Label: LAB_0051c6bf
    JMP 0x0051c64d                      ; 0051c6c1 | LAB_0051c64d
        ;   XREF to: 0051c64d (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c6c3
        ;   Label: LAB_0051c6c3
    JMP 0x0051c65f                      ; 0051c6c5 | LAB_0051c65f
        ;   XREF to: 0051c65f (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c6c7
        ;   Label: LAB_0051c6c7
    JMP 0x0051c66d                      ; 0051c6c9 | LAB_0051c66d
        ;   XREF to: 0051c66d (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c6cb
        ;   Label: LAB_0051c6cb
    JMP 0x0051c67b                      ; 0051c6cd | LAB_0051c67b
        ;   XREF to: 0051c67b (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c6cf
        ;   Label: LAB_0051c6cf
    JMP 0x0051c689                      ; 0051c6d1 | LAB_0051c689
        ;   XREF to: 0051c689 (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c6d3
        ;   Label: LAB_0051c6d3
    JMP 0x0051c697                      ; 0051c6d5 | LAB_0051c697
        ;   XREF to: 0051c697 (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c6d7
        ;   Label: LAB_0051c6d7
    INC ESI                             ; 0051c6d9
    DEC ECX                             ; 0051c6da
    MOV dword ptr [EAX],EBX             ; 0051c6db
    TEST ECX,ECX                        ; 0051c6dd
    JG 0x0051c618                       ; 0051c6df | LAB_0051c618
        ;   XREF to: 0051c618 (CONDITIONAL_JUMP)
    POP EBP                             ; 0051c6e5
    POP EDI                             ; 0051c6e6
    POP ESI                             ; 0051c6e7
    POP EBX                             ; 0051c6e8
    RET                                 ; 0051c6e9

