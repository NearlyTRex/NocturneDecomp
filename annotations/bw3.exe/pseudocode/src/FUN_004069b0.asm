; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004069b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_004039d0
;   FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004069b0
        ;   Label: FUN_004069b0
    PUSH ESI                            ; 004069b1
    PUSH EBP                            ; 004069b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004069b3
    LEA ESI,[EBX + 0x18]                ; 004069b7
    LEA EAX,[EBX + 0x8]                 ; 004069ba
    PUSH EAX                            ; 004069bd
    CALL FUN_00403920                   ; 004069be
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 004069c3
    TEST EAX,EAX                        ; 004069c6
    JZ 0x00406a14                       ; 004069c8
        ;   XREF to: 00406a14 (CONDITIONAL_JUMP)  ; LAB_00406a14
    CMP dword ptr [0x01c6e2a0],0x0      ; 004069ca | DAT_01c6e2a0
    JNZ 0x00406a2f                      ; 004069d1
        ;   XREF to: 00406a2f (CONDITIONAL_JUMP)  ; LAB_00406a2f
    CMP dword ptr [0x005fba20],0x20     ; 004069d3 | DAT_005fba20
    JNZ 0x00406a23                      ; 004069da
        ;   XREF to: 00406a23 (CONDITIONAL_JUMP)  ; LAB_00406a23
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004069dc | DAT_01c6b5cc
    PUSH EDI                            ; 004069e6
        ;   Label: LAB_004069e6
    MOV EDI,0x1f3                       ; 004069e7
    MOV EBP,0x1                         ; 004069ec
    PUSH EBX                            ; 004069f1
    MOV dword ptr [0x01c6e2b4],EDI      ; 004069f2 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 004069f8 | DAT_01c6e2b8
    CALL FUN_004039d0                   ; 004069fe
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    ADD ESP,0x4                         ; 00406a03
    PUSH ESI                            ; 00406a06
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406a07
    PUSH EAX                            ; 00406a0a
    CALL FUN_0043a840                   ; 00406a0b
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 00406a10
    POP EDI                             ; 00406a13
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406a14
        ;   Label: LAB_00406a14
    ADD EBX,0x18                        ; 00406a17
    SHL EAX,0x2                         ; 00406a1a
    ADD EAX,EBX                         ; 00406a1d
    POP EBP                             ; 00406a1f
    POP ESI                             ; 00406a20
    POP EBX                             ; 00406a21
    RET                                 ; 00406a22
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00406a23 | DAT_01c6b5cc
        ;   Label: LAB_00406a23
    JMP 0x004069e6                      ; 00406a2d
        ;   XREF to: 004069e6 (UNCONDITIONAL_JUMP)  ; LAB_004069e6
    CMP dword ptr [0x005fba20],0x20     ; 00406a2f | DAT_005fba20
        ;   Label: LAB_00406a2f
    JNZ 0x00406a44                      ; 00406a36
        ;   XREF to: 00406a44 (CONDITIONAL_JUMP)  ; LAB_00406a44
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406a38 | DAT_01c6b5cc | LAB_00560f31
    JMP 0x004069e6                      ; 00406a42
        ;   XREF to: 004069e6 (UNCONDITIONAL_JUMP)  ; LAB_004069e6
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00406a44 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_00406a44
    JMP 0x004069e6                      ; 00406a4e
        ;   XREF to: 004069e6 (UNCONDITIONAL_JUMP)  ; LAB_004069e6

