; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_crc32UpdateDword_FUN_0051c480(uint * crc_ptr, uint dword_value)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_ptr
; uint             Stack[0x8]:4   dword_value
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c480
        ;   Label: shape_meshlod.cpp_crc32UpdateDword_FUN_0051c480
    PUSH ESI                            ; 0051c481
    PUSH EDI                            ; 0051c482
    PUSH EBP                            ; 0051c483
    MOV ESI,0x4                         ; 0051c484
    LEA ECX,[ESP + 0x18]                ; 0051c489
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051c48d
    MOV EDI,0x4c11db7                   ; 0051c491
    MOV EBP,0x80000000                  ; 0051c496
    MOV EAX,EDX                         ; 0051c49b
    MOV BL,byte ptr [ECX]               ; 0051c49d
        ;   Label: LAB_0051c49d
    AND EBX,0xff                        ; 0051c49f
    SHL EBX,0x18                        ; 0051c4a5
    XOR dword ptr [EDX],EBX             ; 0051c4a8
    MOV EBX,dword ptr [EDX]             ; 0051c4aa
    TEST EBP,EBX                        ; 0051c4ac
    JZ 0x0051c507                       ; 0051c4ae | LAB_0051c507
        ;   XREF to: 0051c507 (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c4b0
    XOR EBX,EDI                         ; 0051c4b2
    MOV dword ptr [EAX],EBX             ; 0051c4b4
        ;   Label: LAB_0051c4b4
    TEST EBP,EBX                        ; 0051c4b6
    JZ 0x0051c50b                       ; 0051c4b8 | LAB_0051c50b
        ;   XREF to: 0051c50b (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c4ba
    XOR EBX,EDI                         ; 0051c4bc
    MOV dword ptr [EAX],EBX             ; 0051c4be
        ;   Label: LAB_0051c4be
    TEST EBP,EBX                        ; 0051c4c0
    JZ 0x0051c50f                       ; 0051c4c2 | LAB_0051c50f
        ;   XREF to: 0051c50f (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c4c4
    XOR EBX,EDI                         ; 0051c4c6
    MOV dword ptr [EAX],EBX             ; 0051c4c8
        ;   Label: LAB_0051c4c8
    TEST EBP,EBX                        ; 0051c4ca
    JZ 0x0051c513                       ; 0051c4cc | LAB_0051c513
        ;   XREF to: 0051c513 (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c4ce
    XOR EBX,EDI                         ; 0051c4d0
    MOV dword ptr [EAX],EBX             ; 0051c4d2
        ;   Label: LAB_0051c4d2
    TEST EBP,EBX                        ; 0051c4d4
    JZ 0x0051c517                       ; 0051c4d6 | LAB_0051c517
        ;   XREF to: 0051c517 (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c4d8
    XOR EBX,EDI                         ; 0051c4da
    MOV dword ptr [EAX],EBX             ; 0051c4dc
        ;   Label: LAB_0051c4dc
    TEST EBP,EBX                        ; 0051c4de
    JZ 0x0051c51b                       ; 0051c4e0 | LAB_0051c51b
        ;   XREF to: 0051c51b (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c4e2
    XOR EBX,EDI                         ; 0051c4e4
    MOV dword ptr [EAX],EBX             ; 0051c4e6
        ;   Label: LAB_0051c4e6
    TEST EBP,EBX                        ; 0051c4e8
    JZ 0x0051c51f                       ; 0051c4ea | LAB_0051c51f
        ;   XREF to: 0051c51f (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c4ec
    XOR EBX,EDI                         ; 0051c4ee
    MOV dword ptr [EAX],EBX             ; 0051c4f0
        ;   Label: LAB_0051c4f0
    TEST EBP,EBX                        ; 0051c4f2
    JZ 0x0051c523                       ; 0051c4f4 | LAB_0051c523
        ;   XREF to: 0051c523 (CONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c4f6
    XOR EBX,EDI                         ; 0051c4f8
    INC ECX                             ; 0051c4fa
    DEC ESI                             ; 0051c4fb
    MOV dword ptr [EAX],EBX             ; 0051c4fc
    TEST ESI,ESI                        ; 0051c4fe
    JG 0x0051c49d                       ; 0051c500 | LAB_0051c49d
        ;   XREF to: 0051c49d (CONDITIONAL_JUMP)
    POP EBP                             ; 0051c502
    POP EDI                             ; 0051c503
    POP ESI                             ; 0051c504
    POP EBX                             ; 0051c505
    RET                                 ; 0051c506
    ADD EBX,EBX                         ; 0051c507
        ;   Label: LAB_0051c507
    JMP 0x0051c4b4                      ; 0051c509 | LAB_0051c4b4
        ;   XREF to: 0051c4b4 (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c50b
        ;   Label: LAB_0051c50b
    JMP 0x0051c4be                      ; 0051c50d | LAB_0051c4be
        ;   XREF to: 0051c4be (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c50f
        ;   Label: LAB_0051c50f
    JMP 0x0051c4c8                      ; 0051c511 | LAB_0051c4c8
        ;   XREF to: 0051c4c8 (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c513
        ;   Label: LAB_0051c513
    JMP 0x0051c4d2                      ; 0051c515 | LAB_0051c4d2
        ;   XREF to: 0051c4d2 (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c517
        ;   Label: LAB_0051c517
    JMP 0x0051c4dc                      ; 0051c519 | LAB_0051c4dc
        ;   XREF to: 0051c4dc (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c51b
        ;   Label: LAB_0051c51b
    JMP 0x0051c4e6                      ; 0051c51d | LAB_0051c4e6
        ;   XREF to: 0051c4e6 (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c51f
        ;   Label: LAB_0051c51f
    JMP 0x0051c4f0                      ; 0051c521 | LAB_0051c4f0
        ;   XREF to: 0051c4f0 (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0051c523
        ;   Label: LAB_0051c523
    INC ECX                             ; 0051c525
    DEC ESI                             ; 0051c526
    MOV dword ptr [EAX],EBX             ; 0051c527
    TEST ESI,ESI                        ; 0051c529
    JG 0x0051c49d                       ; 0051c52b | LAB_0051c49d
        ;   XREF to: 0051c49d (CONDITIONAL_JUMP)
    POP EBP                             ; 0051c531
    POP EDI                             ; 0051c532
    POP ESI                             ; 0051c533
    POP EBX                             ; 0051c534
    RET                                 ; 0051c535

