; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_djien_cpp_FUN_00461530(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461530
        ;   Label: unkafter_djien.cpp_FUN_00461530
    MOV EDX,dword ptr [ESP + 0x8]       ; 00461531
    MOV ECX,dword ptr [ESP + 0xc]       ; 00461535
    MOV EBX,dword ptr [EDX + 0xc2b0]    ; 00461539
    MOV EAX,0xffffffff                  ; 0046153f
    CMP ECX,EBX                         ; 00461544
    JNZ 0x0046154a                      ; 00461546
        ;   XREF to: 0046154a (CONDITIONAL_JUMP)  ; LAB_0046154a
    XOR EAX,EAX                         ; 00461548
    CMP ECX,dword ptr [EDX + 0xc2b4]    ; 0046154a
        ;   Label: LAB_0046154a
    JNZ 0x00461557                      ; 00461550
        ;   XREF to: 00461557 (CONDITIONAL_JUMP)  ; LAB_00461557
    MOV EAX,0x1                         ; 00461552
    CMP ECX,dword ptr [EDX + 0xc2b8]    ; 00461557
        ;   Label: LAB_00461557
    JNZ 0x00461564                      ; 0046155d
        ;   XREF to: 00461564 (CONDITIONAL_JUMP)  ; LAB_00461564
    MOV EAX,0x2                         ; 0046155f
    CMP ECX,dword ptr [EDX + 0xc2bc]    ; 00461564
        ;   Label: LAB_00461564
    JNZ 0x00461571                      ; 0046156a
        ;   XREF to: 00461571 (CONDITIONAL_JUMP)  ; LAB_00461571
    MOV EAX,0x3                         ; 0046156c
    CMP ECX,dword ptr [EDX + 0xc2c0]    ; 00461571
        ;   Label: LAB_00461571
    JNZ 0x0046157e                      ; 00461577
        ;   XREF to: 0046157e (CONDITIONAL_JUMP)  ; LAB_0046157e
    MOV EAX,0x4                         ; 00461579
    CMP ECX,dword ptr [EDX + 0xc2c4]    ; 0046157e
        ;   Label: LAB_0046157e
    JNZ 0x0046158b                      ; 00461584
        ;   XREF to: 0046158b (CONDITIONAL_JUMP)  ; LAB_0046158b
    MOV EAX,0x5                         ; 00461586
    POP EBX                             ; 0046158b
        ;   Label: LAB_0046158b
    RET                                 ; 0046158c

