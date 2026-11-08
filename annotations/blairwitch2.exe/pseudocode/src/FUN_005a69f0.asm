; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a69f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0044fd70
;   FUN_004ea8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a69f0
        ;   Label: FUN_005a69f0
    PUSH ESI                            ; 005a69f1
    PUSH EDI                            ; 005a69f2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a69f3
    PUSH EDX                            ; 005a69f7
    CALL FUN_004ea8b0                   ; 005a69f8
        ;   XREF to: 004ea8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea8b0()
    ADD ESP,0x4                         ; 005a69fd
    PUSH 0x5f06e9                       ; 005a6a00
    MOV EBX,EAX                         ; 005a6a05
    LEA EDI,[EAX + 0x2b4]               ; 005a6a07
    PUSH EDI                            ; 005a6a0d
    MOV dword ptr [EAX + 0x2b0],0x5ffe84 ; 005a6a0e
    CALL FUN_0044fd70                   ; 005a6a18
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x43c],0xd     ; 005a6a1d
    MOV dword ptr [EBX + 0x6d8],0x41c80000 ; 005a6a27
    MOV ESI,0x5f06f4                    ; 005a6a31
    MOV dword ptr [EBX + 0x6dc],0x42480000 ; 005a6a36
    ADD ESP,0x8                         ; 005a6a40
    MOV dword ptr [EBX + 0x6e0],0x3f666666 ; 005a6a43
    LEA EDI,[EBX + 0x6fc]               ; 005a6a4d
    MOV dword ptr [EBX + 0x6e4],0x1     ; 005a6a53
    PUSH EDI                            ; 005a6a5d
    MOV AL,byte ptr [ESI]               ; 005a6a5e
        ;   Label: LAB_005a6a5e
    MOV byte ptr [EDI],AL               ; 005a6a60
    CMP AL,0x0                          ; 005a6a62
    JZ 0x005a6a76                       ; 005a6a64
        ;   XREF to: 005a6a76 (CONDITIONAL_JUMP)  ; LAB_005a6a76
    MOV AL,byte ptr [ESI + 0x1]         ; 005a6a66
    ADD ESI,0x2                         ; 005a6a69
    MOV byte ptr [EDI + 0x1],AL         ; 005a6a6c
    ADD EDI,0x2                         ; 005a6a6f
    CMP AL,0x0                          ; 005a6a72
    JNZ 0x005a6a5e                      ; 005a6a74
        ;   XREF to: 005a6a5e (CONDITIONAL_JUMP)  ; LAB_005a6a5e
    POP EDI                             ; 005a6a76
        ;   Label: LAB_005a6a76
    MOV ESI,0x5f0700                    ; 005a6a77
    LEA EDI,[EBX + 0x760]               ; 005a6a7c
    PUSH EDI                            ; 005a6a82
    MOV AL,byte ptr [ESI]               ; 005a6a83
        ;   Label: LAB_005a6a83
    MOV byte ptr [EDI],AL               ; 005a6a85
    CMP AL,0x0                          ; 005a6a87
    JZ 0x005a6a9b                       ; 005a6a89
        ;   XREF to: 005a6a9b (CONDITIONAL_JUMP)  ; LAB_005a6a9b
    MOV AL,byte ptr [ESI + 0x1]         ; 005a6a8b
    ADD ESI,0x2                         ; 005a6a8e
    MOV byte ptr [EDI + 0x1],AL         ; 005a6a91
    ADD EDI,0x2                         ; 005a6a94
    CMP AL,0x0                          ; 005a6a97
    JNZ 0x005a6a83                      ; 005a6a99
        ;   XREF to: 005a6a83 (CONDITIONAL_JUMP)  ; LAB_005a6a83
    POP EDI                             ; 005a6a9b
        ;   Label: LAB_005a6a9b
    MOV ESI,0x5f070c                    ; 005a6a9c
    LEA EDI,[EBX + 0x7c4]               ; 005a6aa1
    PUSH EDI                            ; 005a6aa7
    MOV AL,byte ptr [ESI]               ; 005a6aa8
        ;   Label: LAB_005a6aa8
    MOV byte ptr [EDI],AL               ; 005a6aaa
    CMP AL,0x0                          ; 005a6aac
    JZ 0x005a6ac0                       ; 005a6aae
        ;   XREF to: 005a6ac0 (CONDITIONAL_JUMP)  ; LAB_005a6ac0
    MOV AL,byte ptr [ESI + 0x1]         ; 005a6ab0
    ADD ESI,0x2                         ; 005a6ab3
    MOV byte ptr [EDI + 0x1],AL         ; 005a6ab6
    ADD EDI,0x2                         ; 005a6ab9
    CMP AL,0x0                          ; 005a6abc
    JNZ 0x005a6aa8                      ; 005a6abe
        ;   XREF to: 005a6aa8 (CONDITIONAL_JUMP)  ; LAB_005a6aa8
    POP EDI                             ; 005a6ac0
        ;   Label: LAB_005a6ac0
    MOV dword ptr [EBX + 0x2a8],0x3dcccccd ; 005a6ac1
    MOV dword ptr [EBX + 0xfc],0x0      ; 005a6acb
    MOV dword ptr [EBX + 0x828],0x0     ; 005a6ad5
    MOV dword ptr [EBX + 0x82c],0x0     ; 005a6adf
    MOV dword ptr [EBX + 0x834],0x0     ; 005a6ae9
    MOV dword ptr [EBX + 0x830],0x3f333333 ; 005a6af3
    MOV dword ptr [EBX + 0x844],0x0     ; 005a6afd
    MOV dword ptr [EBX + 0x840],0x0     ; 005a6b07
    MOV dword ptr [EBX + 0x83c],0x0     ; 005a6b11
    MOV EAX,EBX                         ; 005a6b1b
    MOV dword ptr [EBX + 0x838],0x0     ; 005a6b1d
    POP EDI                             ; 005a6b27
    POP ESI                             ; 005a6b28
    POP EBX                             ; 005a6b29
    RET                                 ; 005a6b2a

