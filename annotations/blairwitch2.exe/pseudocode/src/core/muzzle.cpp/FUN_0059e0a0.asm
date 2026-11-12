; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_muzzle_cpp_FUN_0059e0a0(int *param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e0a0
        ;   Label: core_muzzle.cpp_FUN_0059e0a0
    PUSH ESI                            ; 0059e0a1
    PUSH EBP                            ; 0059e0a2
    MOV ECX,dword ptr [ESP + 0x10]      ; 0059e0a3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059e0a7
    CMP dword ptr [ECX],0x0             ; 0059e0ab
    JZ 0x0059e0d8                       ; 0059e0ae
        ;   XREF to: 0059e0d8 (CONDITIONAL_JUMP)  ; LAB_0059e0d8
    MOV EBX,dword ptr [ECX + 0x3c4]     ; 0059e0b0
    TEST EBX,EBX                        ; 0059e0b6
    JZ 0x0059e0d8                       ; 0059e0b8
        ;   XREF to: 0059e0d8 (CONDITIONAL_JUMP)  ; LAB_0059e0d8
    XOR EAX,EAX                         ; 0059e0ba
    TEST EBX,EBX                        ; 0059e0bc
    JLE 0x0059e0d8                      ; 0059e0be
        ;   XREF to: 0059e0d8 (CONDITIONAL_JUMP)  ; LAB_0059e0d8
    MOV EDX,ECX                         ; 0059e0c0
    IMUL EBX,EAX,0x3c                   ; 0059e0c2
        ;   Label: LAB_0059e0c2
    CMP ESI,dword ptr [EDX + 0x4]       ; 0059e0c5
    JZ 0x0059e0de                       ; 0059e0c8
        ;   XREF to: 0059e0de (CONDITIONAL_JUMP)  ; LAB_0059e0de
    INC EAX                             ; 0059e0ca
    MOV EBP,dword ptr [ECX + 0x3c4]     ; 0059e0cb
    ADD EDX,0x3c                        ; 0059e0d1
    CMP EAX,EBP                         ; 0059e0d4
    JL 0x0059e0c2                       ; 0059e0d6
        ;   XREF to: 0059e0c2 (CONDITIONAL_JUMP)  ; LAB_0059e0c2
    XOR EAX,EAX                         ; 0059e0d8
        ;   Label: LAB_0059e0d8
    POP EBP                             ; 0059e0da
    POP ESI                             ; 0059e0db
    POP EBX                             ; 0059e0dc
    RET                                 ; 0059e0dd
    LEA EAX,[ECX + 0x4]                 ; 0059e0de
        ;   Label: LAB_0059e0de
    ADD EAX,EBX                         ; 0059e0e1
    POP EBP                             ; 0059e0e3
    POP ESI                             ; 0059e0e4
    POP EBX                             ; 0059e0e5
    RET                                 ; 0059e0e6

