; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00531b10(int param_1)
;
;
; XREF[1]:
;   FUN_004ed800 at 004ed846
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005ec784
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01ccf5ec
;
; Called Functions:
;   FUN_0040cc60
;   FUN_0042f240
;   FUN_00483e60
;   FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531b10
        ;   Label: FUN_00531b10
    PUSH ESI                            ; 00531b11
    PUSH EDI                            ; 00531b12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00531b13
    CMP dword ptr [EBX + 0x1fab0],0x0   ; 00531b17
    JNZ 0x00531b53                      ; 00531b1e
        ;   XREF to: 00531b53 (CONDITIONAL_JUMP)  ; LAB_00531b53
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00531b20
    JZ 0x00531b59                       ; 00531b27
        ;   XREF to: 00531b59 (CONDITIONAL_JUMP)  ; LAB_00531b59
    MOV ESI,dword ptr [0x00612560]      ; 00531b29 | DAT_00612560
    PUSH ESI                            ; 00531b2f | DAT_01bc120c
    CALL FUN_00483e60                   ; 00531b30
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 00531b35
    TEST EAX,EAX                        ; 00531b38
    JNZ 0x00531b66                      ; 00531b3a
        ;   XREF to: 00531b66 (CONDITIONAL_JUMP)  ; LAB_00531b66
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00531b3c
        ;   Label: LAB_00531b3c
    JZ 0x00531b53                       ; 00531b43
        ;   XREF to: 00531b53 (CONDITIONAL_JUMP)  ; LAB_00531b53
    MOV EAX,[0x0061d95c]                ; 00531b45 | DAT_0061d95c
    CMP dword ptr [EAX + 0x25c],0x0     ; 00531b4a | DAT_01ccf5ec
    JNZ 0x00531b82                      ; 00531b51
        ;   XREF to: 00531b82 (CONDITIONAL_JUMP)  ; LAB_00531b82
    XOR EAX,EAX                         ; 00531b53
        ;   Label: LAB_00531b53
    POP EDI                             ; 00531b55
    POP ESI                             ; 00531b56
    POP EBX                             ; 00531b57
    RET                                 ; 00531b58
    PUSH EBX                            ; 00531b59
        ;   Label: LAB_00531b59
    CALL FUN_0042f240                   ; 00531b5a
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 00531b5f
    POP EDI                             ; 00531b62
    POP ESI                             ; 00531b63
    POP EBX                             ; 00531b64
    RET                                 ; 00531b65
    PUSH 0x5ec784                       ; 00531b66 | = "heroCanSee"
        ;   Label: LAB_00531b66
    MOV EDI,dword ptr [0x0061b4d0]      ; 00531b6b | DAT_0061b4d0
    PUSH EDI                            ; 00531b71
    CALL FUN_004a6c30                   ; 00531b72
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 00531b77
    TEST EAX,EAX                        ; 00531b7a
    JNZ 0x00531b3c                      ; 00531b7c
        ;   XREF to: 00531b3c (CONDITIONAL_JUMP)  ; LAB_00531b3c
    POP EDI                             ; 00531b7e
    POP ESI                             ; 00531b7f
    POP EBX                             ; 00531b80
    RET                                 ; 00531b81
    PUSH 0x2                            ; 00531b82
        ;   Label: LAB_00531b82
    PUSH 0x0                            ; 00531b84
    CALL FUN_0040cc60                   ; 00531b86
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 00531b8b
    CMP EAX,0x1                         ; 00531b8e
    JNZ 0x00531b53                      ; 00531b91
        ;   XREF to: 00531b53 (CONDITIONAL_JUMP)  ; LAB_00531b53
    PUSH EBX                            ; 00531b93
    CALL FUN_0042f240                   ; 00531b94
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 00531b99
    POP EDI                             ; 00531b9c
    POP ESI                             ; 00531b9d
    POP EBX                             ; 00531b9e
    RET                                 ; 00531b9f

