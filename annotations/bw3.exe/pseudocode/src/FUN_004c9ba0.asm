; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c9ba0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_004f3fc0
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c9ba0
        ;   Label: FUN_004c9ba0
    PUSH EDI                            ; 004c9ba1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9ba2
    PUSH EDX                            ; 004c9ba6
    CALL FUN_00408600                   ; 004c9ba7
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 004c9bac
    ADD EAX,0x21c                       ; 004c9baf
    PUSH EAX                            ; 004c9bb4
    CALL FUN_004f3fc0                   ; 004c9bb5
        ;   XREF to: 004f3fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3fc0()
    ADD ESP,0x4                         ; 004c9bba
    PUSH 0x5db0f0                       ; 004c9bbd
    PUSH 0x19                           ; 004c9bc2
    ADD EAX,0x1a0                       ; 004c9bc4
    PUSH EAX                            ; 004c9bc9
    CALL FUN_005a30d7                   ; 004c9bca
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    LEA EDX,[EAX + 0xfffffc44]          ; 004c9bcf
    MOV dword ptr [EDX + 0x154],0x5e0be4 ; 004c9bd5
    MOV ESI,0x5c443f                    ; 004c9bdf
    MOV dword ptr [EDX + 0x158],0x40800000 ; 004c9be4
    ADD ESP,0xc                         ; 004c9bee
    MOV dword ptr [EDX + 0x15c],0x40800000 ; 004c9bf1
    LEA EDI,[EDX + 0x16c]               ; 004c9bfb
    MOV dword ptr [EDX + 0x160],0x3dcccccd ; 004c9c01
    PUSH EDI                            ; 004c9c0b
    MOV AL,byte ptr [ESI]               ; 004c9c0c
        ;   Label: LAB_004c9c0c
    MOV byte ptr [EDI],AL               ; 004c9c0e
    CMP AL,0x0                          ; 004c9c10
    JZ 0x004c9c24                       ; 004c9c12
        ;   XREF to: 004c9c24 (CONDITIONAL_JUMP)  ; LAB_004c9c24
    MOV AL,byte ptr [ESI + 0x1]         ; 004c9c14
    ADD ESI,0x2                         ; 004c9c17
    MOV byte ptr [EDI + 0x1],AL         ; 004c9c1a
    ADD EDI,0x2                         ; 004c9c1d
    CMP AL,0x0                          ; 004c9c20
    JNZ 0x004c9c0c                      ; 004c9c22
        ;   XREF to: 004c9c0c (CONDITIONAL_JUMP)  ; LAB_004c9c0c
    POP EDI                             ; 004c9c24
        ;   Label: LAB_004c9c24
    MOV dword ptr [EDX + 0x168],0x0     ; 004c9c25
    MOV dword ptr [EDX + 0x164],0xd     ; 004c9c2f
    MOV dword ptr [EDX + 0x1ac],0x8000  ; 004c9c39
    MOV dword ptr [EDX + 0x1b0],0x0     ; 004c9c43
    MOV ESI,0x5c444c                    ; 004c9c4d
    MOV byte ptr [EDX + 0x1b4],0x0      ; 004c9c52
    LEA EDI,[EDX + 0x33c]               ; 004c9c59
    MOV dword ptr [EDX + 0x218],0x0     ; 004c9c5f
    PUSH EDI                            ; 004c9c69
    MOV AL,byte ptr [ESI]               ; 004c9c6a
        ;   Label: LAB_004c9c6a
    MOV byte ptr [EDI],AL               ; 004c9c6c
    CMP AL,0x0                          ; 004c9c6e
    JZ 0x004c9c82                       ; 004c9c70
        ;   XREF to: 004c9c82 (CONDITIONAL_JUMP)  ; LAB_004c9c82
    MOV AL,byte ptr [ESI + 0x1]         ; 004c9c72
    ADD ESI,0x2                         ; 004c9c75
    MOV byte ptr [EDI + 0x1],AL         ; 004c9c78
    ADD EDI,0x2                         ; 004c9c7b
    CMP AL,0x0                          ; 004c9c7e
    JNZ 0x004c9c6a                      ; 004c9c80
        ;   XREF to: 004c9c6a (CONDITIONAL_JUMP)  ; LAB_004c9c6a
    POP EDI                             ; 004c9c82
        ;   Label: LAB_004c9c82
    MOV ESI,0x5c4451                    ; 004c9c83
    LEA EDI,[EDX + 0x3ac]               ; 004c9c88
    MOV dword ptr [EDX + 0x3a0],0x0     ; 004c9c8e
    PUSH EDI                            ; 004c9c98
    MOV AL,byte ptr [ESI]               ; 004c9c99
        ;   Label: LAB_004c9c99
    MOV byte ptr [EDI],AL               ; 004c9c9b
    CMP AL,0x0                          ; 004c9c9d
    JZ 0x004c9cb1                       ; 004c9c9f
        ;   XREF to: 004c9cb1 (CONDITIONAL_JUMP)  ; LAB_004c9cb1
    MOV AL,byte ptr [ESI + 0x1]         ; 004c9ca1
    ADD ESI,0x2                         ; 004c9ca4
    MOV byte ptr [EDI + 0x1],AL         ; 004c9ca7
    ADD EDI,0x2                         ; 004c9caa
    CMP AL,0x0                          ; 004c9cad
    JNZ 0x004c9c99                      ; 004c9caf
        ;   XREF to: 004c9c99 (CONDITIONAL_JUMP)  ; LAB_004c9c99
    POP EDI                             ; 004c9cb1
        ;   Label: LAB_004c9cb1
    MOV dword ptr [EDX + 0x3a8],0x0     ; 004c9cb2
    MOV dword ptr [EDX + 0x3a4],0xd     ; 004c9cbc
    MOV EAX,EDX                         ; 004c9cc6
    MOV dword ptr [EDX + 0xb6c],0x0     ; 004c9cc8
    POP EDI                             ; 004c9cd2
    POP ESI                             ; 004c9cd3
    RET                                 ; 004c9cd4

