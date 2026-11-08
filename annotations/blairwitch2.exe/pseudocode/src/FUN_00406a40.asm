; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406a40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_006141d8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0070ca98
;   undefined4 DAT_0070ca9c
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00403a20
;   FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00406a40
        ;   Label: FUN_00406a40
    PUSH EBP                            ; 00406a41
    MOV EBP,dword ptr [ESP + 0xc]       ; 00406a42
    LEA ESI,[EBP + 0x18]                ; 00406a46
    LEA EAX,[EBP + 0x8]                 ; 00406a49
    PUSH EAX                            ; 00406a4c
    CALL FUN_00403970                   ; 00406a4d
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00406a52
    TEST EAX,EAX                        ; 00406a55
    JZ 0x00406b3d                       ; 00406a57
        ;   XREF to: 00406b3d (CONDITIONAL_JUMP)  ; LAB_00406b3d
    CMP dword ptr [0x01c38b40],0x0      ; 00406a5d | DAT_01c38b40
    JNZ 0x00406afa                      ; 00406a64
        ;   XREF to: 00406afa (CONDITIONAL_JUMP)  ; LAB_00406afa
    CMP dword ptr [0x006141c0],0x20     ; 00406a6a | DAT_006141c0
    JNZ 0x00406aee                      ; 00406a71
        ;   XREF to: 00406aee (CONDITIONAL_JUMP)  ; LAB_00406aee
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00406a77 | DAT_01c35e6c
    PUSH EDI                            ; 00406a81
        ;   Label: LAB_00406a81
    PUSH EBX                            ; 00406a82
    MOV EBX,0x13                        ; 00406a83
    PUSH EBP                            ; 00406a88
    MOV dword ptr [0x01c38b54],EBX      ; 00406a89 | DAT_01c38b54
    CALL FUN_00403a20                   ; 00406a8f
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00403a20()
    MOV EDI,dword ptr [0x006141d8]      ; 00406a94 | DAT_006141d8
    ADD ESP,0x4                         ; 00406a9a
    CMP EDI,0xff                        ; 00406a9d
    JL 0x00406b21                       ; 00406aa3
        ;   XREF to: 00406b21 (CONDITIONAL_JUMP)  ; LAB_00406b21
    XOR EAX,EAX                         ; 00406aa9
        ;   Label: LAB_00406aa9
    XOR EBX,EBX                         ; 00406aab
    XOR ECX,ECX                         ; 00406aad
    XOR EDX,EDX                         ; 00406aaf
    MOV [0x01c38b58],EAX                ; 00406ab1 | DAT_01c38b58
    MOV EAX,ESI                         ; 00406ab6
    MOV ESI,dword ptr [EBP + 0x4]       ; 00406ab8
        ;   Label: LAB_00406ab8
    LEA ESI,[ESI + ESI*0x2]             ; 00406abb
    CMP ECX,ESI                         ; 00406abe
    JGE 0x00406b2d                      ; 00406ac0
        ;   XREF to: 00406b2d (CONDITIONAL_JUMP)  ; LAB_00406b2d
    MOV ESI,dword ptr [EAX]             ; 00406ac2
    MOV dword ptr [EDX + 0x70ca98],ESI  ; 00406ac4 | DAT_0070ca98 | DAT_0070ca9c
    IMUL EDI,ESI,0x30                   ; 00406aca
    MOV ESI,dword ptr [EAX + 0x4]       ; 00406acd
    MOV dword ptr [EDI + 0x62202c],ESI  ; 00406ad0 | DAT_0062202c
    IMUL EDI,dword ptr [EAX],0x30       ; 00406ad6
    ADD EAX,0xc                         ; 00406ad9
    ADD EDX,0x4                         ; 00406adc
    INC EBX                             ; 00406adf
    MOV ESI,dword ptr [EAX + -0x4]      ; 00406ae0
    ADD ECX,0x3                         ; 00406ae3
    MOV dword ptr [EDI + 0x622030],ESI  ; 00406ae6 | DAT_00622030
    JMP 0x00406ab8                      ; 00406aec
        ;   XREF to: 00406ab8 (UNCONDITIONAL_JUMP)  ; LAB_00406ab8
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00406aee | DAT_01c35e6c
        ;   Label: LAB_00406aee
    JMP 0x00406a81                      ; 00406af8
        ;   XREF to: 00406a81 (UNCONDITIONAL_JUMP)  ; LAB_00406a81
    CMP dword ptr [0x006141c0],0x20     ; 00406afa | DAT_006141c0
        ;   Label: LAB_00406afa
    JNZ 0x00406b12                      ; 00406b01
        ;   XREF to: 00406b12 (CONDITIONAL_JUMP)  ; LAB_00406b12
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00406b03 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00406a81                      ; 00406b0d
        ;   XREF to: 00406a81 (UNCONDITIONAL_JUMP)  ; LAB_00406a81
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406b12 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00406b12
    JMP 0x00406a81                      ; 00406b1c
        ;   XREF to: 00406a81 (UNCONDITIONAL_JUMP)  ; LAB_00406a81
    OR byte ptr [0x01c38b54],0x20       ; 00406b21 | DAT_01c38b54
        ;   Label: LAB_00406b21
    JMP 0x00406aa9                      ; 00406b28
        ;   XREF to: 00406aa9 (UNCONDITIONAL_JUMP)  ; LAB_00406aa9
    PUSH 0x70ca98                       ; 00406b2d | DAT_0070ca98
        ;   Label: LAB_00406b2d
    PUSH EBX                            ; 00406b32
    CALL FUN_00431d90                   ; 00406b33
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00406b38
    POP EBX                             ; 00406b3b
    POP EDI                             ; 00406b3c
    MOV EDX,dword ptr [EBP + 0x4]       ; 00406b3d
        ;   Label: LAB_00406b3d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00406b40
    SUB EAX,EDX                         ; 00406b47
    LEA EDX,[EAX*0x4 + 0x0]             ; 00406b49
    LEA EAX,[EBP + 0x18]                ; 00406b50
    ADD EAX,EDX                         ; 00406b53
    POP EBP                             ; 00406b55
    POP ESI                             ; 00406b56
    RET                                 ; 00406b57

