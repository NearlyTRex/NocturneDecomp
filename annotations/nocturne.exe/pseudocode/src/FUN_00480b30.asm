; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00480b30(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0047a390 at 0047a3af
;   FUN_004fe180 at 004fe1f2
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01fa3ff0
;
; Called Functions:
;   FUN_00480ba0
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480b30
        ;   Label: FUN_00480b30
    PUSH ESI                            ; 00480b31
    PUSH EDI                            ; 00480b32
    PUSH EBP                            ; 00480b33
    MOV EDI,dword ptr [ESP + 0x14]      ; 00480b34
    MOV EDX,dword ptr [ESP + 0x18]      ; 00480b38
    PUSH EDX                            ; 00480b3c
    PUSH EDI                            ; 00480b3d
    CALL FUN_00480ba0                   ; 00480b3e
        ;   XREF to: 00480ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00480ba0()
    ADD ESP,0x8                         ; 00480b43
    TEST EAX,EAX                        ; 00480b46
    JL 0x00480b6c                       ; 00480b48
        ;   XREF to: 00480b6c (CONDITIONAL_JUMP)  ; LAB_00480b6c
    ADD EAX,EAX                         ; 00480b4a
    MOV EBX,EAX                         ; 00480b4c
    SHL EAX,0x4                         ; 00480b4e
    ADD EDI,0x37da                      ; 00480b51
    SUB EAX,EBX                         ; 00480b57
    XOR ESI,ESI                         ; 00480b59
    ADD EDI,EAX                         ; 00480b5b
    XOR EBX,EBX                         ; 00480b5d
    MOV EAX,[0x005be368]                ; 00480b5f | DAT_005be368
        ;   Label: LAB_00480b5f
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 00480b64 | DAT_01fa3ff0
    JL 0x00480b79                       ; 00480b6a
        ;   XREF to: 00480b79 (CONDITIONAL_JUMP)  ; LAB_00480b79
    XOR EAX,EAX                         ; 00480b6c
        ;   Label: LAB_00480b6c
    POP EBP                             ; 00480b6e
    POP EDI                             ; 00480b6f
    POP ESI                             ; 00480b70
    POP EBX                             ; 00480b71
    RET                                 ; 00480b72
    INC ESI                             ; 00480b73
        ;   Label: LAB_00480b73
    ADD EBX,0x4                         ; 00480b74
    JMP 0x00480b5f                      ; 00480b77
        ;   XREF to: 00480b5f (UNCONDITIONAL_JUMP)  ; LAB_00480b5f
    PUSH EDI                            ; 00480b79
        ;   Label: LAB_00480b79
    MOV EBP,dword ptr [EBX + EAX*0x1 + 0x14cd70] ; 00480b7a
    PUSH EBP                            ; 00480b81
    CALL FUN_00564520                   ; 00480b82
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 00480b87
    TEST EAX,EAX                        ; 00480b8a
    JNZ 0x00480b73                      ; 00480b8c
        ;   XREF to: 00480b73 (CONDITIONAL_JUMP)  ; LAB_00480b73
    MOV EAX,[0x005be368]                ; 00480b8e | DAT_005be368
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14cd70] ; 00480b93
    POP EBP                             ; 00480b9a
    POP EDI                             ; 00480b9b
    POP ESI                             ; 00480b9c
    POP EBX                             ; 00480b9d
    RET                                 ; 00480b9e

