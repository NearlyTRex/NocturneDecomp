; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048a9b0(int param_1)
;
;
; XREF[1]:
;   FUN_0048a930 at 0048a936
;
; Called Functions:
;   FUN_004799c0
;   FUN_005c0344
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048a9b0
        ;   Label: FUN_0048a9b0
    PUSH EBP                            ; 0048a9b1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0048a9b2
    CMP dword ptr [ESI + 0x4c],0x0      ; 0048a9b6
    JZ 0x0048aa2c                       ; 0048a9ba
        ;   XREF to: 0048aa2c (CONDITIONAL_JUMP)  ; LAB_0048aa2c
    PUSH EDI                            ; 0048a9c0
    PUSH EBX                            ; 0048a9c1
    XOR EDI,EDI                         ; 0048a9c2
    XOR EBP,EBP                         ; 0048a9c4
    MOV ECX,dword ptr [ESI + 0x44]      ; 0048a9c6
        ;   Label: LAB_0048a9c6
    MOV EBX,dword ptr [ESI + 0x40]      ; 0048a9c9
    IMUL EBX,ECX                        ; 0048a9cc
    MOV EAX,dword ptr [ESI + 0x48]      ; 0048a9cf
    IMUL EAX,EBX                        ; 0048a9d2
    CMP EBP,EAX                         ; 0048a9d5
    JGE 0x0048aa1e                      ; 0048a9d7
        ;   XREF to: 0048aa1e (CONDITIONAL_JUMP)  ; LAB_0048aa1e
    MOV EBX,dword ptr [ESI + 0x4c]      ; 0048a9d9
    ADD EBX,EDI                         ; 0048a9dc
    MOV dword ptr [EBX],0x0             ; 0048a9de
    MOV dword ptr [EBX + 0x4],0x0       ; 0048a9e4
    MOV EAX,dword ptr [EBX + 0xc]       ; 0048a9eb
    MOV dword ptr [EBX + 0x54],0x0      ; 0048a9ee
    TEST EAX,EAX                        ; 0048a9f5
    JNZ 0x0048aa06                      ; 0048a9f7
        ;   XREF to: 0048aa06 (CONDITIONAL_JUMP)  ; LAB_0048aa06
    ADD EDI,0x58                        ; 0048a9f9
        ;   Label: LAB_0048a9f9
    INC EBP                             ; 0048a9fc
    MOV dword ptr [EBX + 0xc],0x0       ; 0048a9fd
    JMP 0x0048a9c6                      ; 0048aa04
        ;   XREF to: 0048a9c6 (UNCONDITIONAL_JUMP)  ; LAB_0048a9c6
    JZ 0x0048a9f9                       ; 0048aa06
        ;   XREF to: 0048a9f9 (CONDITIONAL_JUMP)  ; LAB_0048a9f9
        ;   Label: LAB_0048aa06
    PUSH 0x0                            ; 0048aa08
    PUSH EAX                            ; 0048aa0a
    CALL FUN_004799c0                   ; 0048aa0b
        ;   XREF to: 004799c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004799c0()
    ADD ESP,0x8                         ; 0048aa10
    PUSH EAX                            ; 0048aa13
    CALL FUN_005c0344                   ; 0048aa14
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0048aa19
    JMP 0x0048a9f9                      ; 0048aa1c
        ;   XREF to: 0048a9f9 (UNCONDITIONAL_JUMP)  ; LAB_0048a9f9
    MOV EBX,dword ptr [ESI + 0x4c]      ; 0048aa1e
        ;   Label: LAB_0048aa1e
    PUSH EBX                            ; 0048aa21
    CALL FUN_005c09f0                   ; 0048aa22
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 0048aa27
    POP EBX                             ; 0048aa2a
    POP EDI                             ; 0048aa2b
    MOV dword ptr [ESI + 0x4c],0x0      ; 0048aa2c
        ;   Label: LAB_0048aa2c
    POP EBP                             ; 0048aa33
    POP ESI                             ; 0048aa34
    RET                                 ; 0048aa35

