; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a07a0(int *param_1,undefined1 *param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0056e130 at 0056e2bc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a07a0
        ;   Label: FUN_005a07a0
    PUSH ESI                            ; 005a07a1
    PUSH EDI                            ; 005a07a2
    PUSH EBP                            ; 005a07a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005a07a4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005a07a8
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a07ac
    XOR ESI,ESI                         ; 005a07b0
    DEC EBP                             ; 005a07b2
    PUSH EDI                            ; 005a07b3
        ;   Label: LAB_005a07b3
    MOV EAX,dword ptr [EDI]             ; 005a07b4
    CALL dword ptr [EAX + 0x4]          ; 005a07b6
    ADD ESP,0x4                         ; 005a07b9
    MOV EDX,EAX                         ; 005a07bc
    CMP EAX,-0x1                        ; 005a07be
    JZ 0x005a07db                       ; 005a07c1
        ;   XREF to: 005a07db (CONDITIONAL_JUMP)  ; LAB_005a07db
    TEST EAX,EAX                        ; 005a07c3
    JL 0x005a07e6                       ; 005a07c5
        ;   XREF to: 005a07e6 (CONDITIONAL_JUMP)  ; LAB_005a07e6
    CMP EAX,0xd                         ; 005a07c7
    JZ 0x005a07b3                       ; 005a07ca
        ;   XREF to: 005a07b3 (CONDITIONAL_JUMP)  ; LAB_005a07b3
    CMP EAX,0xa                         ; 005a07cc
    JNZ 0x005a07ed                      ; 005a07cf
        ;   XREF to: 005a07ed (CONDITIONAL_JUMP)  ; LAB_005a07ed
    MOV byte ptr [EBX],0x0              ; 005a07d1
        ;   Label: LAB_005a07d1
    MOV EAX,ESI                         ; 005a07d4
        ;   Label: LAB_005a07d4
    POP EBP                             ; 005a07d6
    POP EDI                             ; 005a07d7
    POP ESI                             ; 005a07d8
    POP EBX                             ; 005a07d9
    RET                                 ; 005a07da
    MOV byte ptr [EBX],0x0              ; 005a07db
        ;   Label: LAB_005a07db
    TEST ESI,ESI                        ; 005a07de
    JNZ 0x005a07d4                      ; 005a07e0
        ;   XREF to: 005a07d4 (CONDITIONAL_JUMP)  ; LAB_005a07d4
    MOV ESI,EAX                         ; 005a07e2
    JMP 0x005a07d4                      ; 005a07e4
        ;   XREF to: 005a07d4 (UNCONDITIONAL_JUMP)  ; LAB_005a07d4
    MOV ESI,0xfffffffe                  ; 005a07e6
        ;   Label: LAB_005a07e6
    JMP 0x005a07d1                      ; 005a07eb
        ;   XREF to: 005a07d1 (UNCONDITIONAL_JUMP)  ; LAB_005a07d1
    CMP ESI,EBP                         ; 005a07ed
        ;   Label: LAB_005a07ed
    JGE 0x005a07b3                      ; 005a07ef
        ;   XREF to: 005a07b3 (CONDITIONAL_JUMP)  ; LAB_005a07b3
    INC EBX                             ; 005a07f1
    INC ESI                             ; 005a07f2
    MOV byte ptr [EBX + -0x1],DL        ; 005a07f3
    JMP 0x005a07b3                      ; 005a07f6
        ;   XREF to: 005a07b3 (UNCONDITIONAL_JUMP)  ; LAB_005a07b3

