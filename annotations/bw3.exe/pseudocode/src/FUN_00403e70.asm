; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00403e70(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_00730418
;   undefined4 DAT_0073041c
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

    PUSH ESI                            ; 00403e70
        ;   Label: FUN_00403e70
    PUSH EBP                            ; 00403e71
    MOV EBP,dword ptr [ESP + 0xc]       ; 00403e72
    LEA ESI,[EBP + 0x18]                ; 00403e76
    LEA EAX,[EBP + 0x8]                 ; 00403e79
    PUSH EAX                            ; 00403e7c
    CALL FUN_00403920                   ; 00403e7d
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00403e82
    TEST EAX,EAX                        ; 00403e85
    JZ 0x00403f4c                       ; 00403e87
        ;   XREF to: 00403f4c (CONDITIONAL_JUMP)  ; LAB_00403f4c
    CMP dword ptr [0x01c6e2a0],0x0      ; 00403e8d | DAT_01c6e2a0
    JNZ 0x00403f18                      ; 00403e94
        ;   XREF to: 00403f18 (CONDITIONAL_JUMP)  ; LAB_00403f18
    CMP dword ptr [0x005fba20],0x20     ; 00403e9a | DAT_005fba20
    JNZ 0x00403f0c                      ; 00403ea1
        ;   XREF to: 00403f0c (CONDITIONAL_JUMP)  ; LAB_00403f0c
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00403ea3 | DAT_01c6b5cc
    PUSH EDI                            ; 00403ead
        ;   Label: LAB_00403ead
    PUSH EBX                            ; 00403eae
    MOV EBX,0x1                         ; 00403eaf
    MOV EDI,0x2                         ; 00403eb4
    PUSH EBP                            ; 00403eb9
    MOV dword ptr [0x01c6e2b4],EBX      ; 00403eba | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDI      ; 00403ec0 | DAT_01c6e2b8
    CALL FUN_004039d0                   ; 00403ec6
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    ADD ESP,0x4                         ; 00403ecb
    MOV EAX,ESI                         ; 00403ece
    XOR EBX,EBX                         ; 00403ed0
    XOR EDX,EDX                         ; 00403ed2
    XOR ECX,ECX                         ; 00403ed4
    MOV ESI,dword ptr [EBP + 0x4]       ; 00403ed6
        ;   Label: LAB_00403ed6
    LEA ESI,[ESI + ESI*0x2]             ; 00403ed9
    CMP EDX,ESI                         ; 00403edc
    JGE 0x00403f3c                      ; 00403ede
        ;   XREF to: 00403f3c (CONDITIONAL_JUMP)  ; LAB_00403f3c
    MOV ESI,dword ptr [EAX]             ; 00403ee0
    MOV dword ptr [ECX + 0x730418],ESI  ; 00403ee2 | DAT_00730418 | DAT_0073041c
    IMUL EDI,ESI,0x30                   ; 00403ee8
    MOV ESI,dword ptr [EAX + 0x4]       ; 00403eeb
    MOV dword ptr [EDI + 0x60b02c],ESI  ; 00403eee | DAT_0060b02c
    IMUL EDI,dword ptr [EAX],0x30       ; 00403ef4
    ADD EAX,0xc                         ; 00403ef7
    ADD ECX,0x4                         ; 00403efa
    INC EBX                             ; 00403efd
    MOV ESI,dword ptr [EAX + -0x4]      ; 00403efe
    ADD EDX,0x3                         ; 00403f01
    MOV dword ptr [EDI + 0x60b030],ESI  ; 00403f04 | DAT_0060b030
    JMP 0x00403ed6                      ; 00403f0a
        ;   XREF to: 00403ed6 (UNCONDITIONAL_JUMP)  ; LAB_00403ed6
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00403f0c | DAT_01c6b5cc
        ;   Label: LAB_00403f0c
    JMP 0x00403ead                      ; 00403f16
        ;   XREF to: 00403ead (UNCONDITIONAL_JUMP)  ; LAB_00403ead
    CMP dword ptr [0x005fba20],0x20     ; 00403f18 | DAT_005fba20
        ;   Label: LAB_00403f18
    JNZ 0x00403f2d                      ; 00403f1f
        ;   XREF to: 00403f2d (CONDITIONAL_JUMP)  ; LAB_00403f2d
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00403f21 | DAT_01c6b5cc | LAB_00560f31
    JMP 0x00403ead                      ; 00403f2b
        ;   XREF to: 00403ead (UNCONDITIONAL_JUMP)  ; LAB_00403ead
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00403f2d | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_00403f2d
    JMP 0x00403ead                      ; 00403f37
        ;   XREF to: 00403ead (UNCONDITIONAL_JUMP)  ; LAB_00403ead
    PUSH 0x730418                       ; 00403f3c | DAT_00730418
        ;   Label: LAB_00403f3c
    PUSH EBX                            ; 00403f41
    CALL FUN_0043a840                   ; 00403f42
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 00403f47
    POP EBX                             ; 00403f4a
    POP EDI                             ; 00403f4b
    MOV EDX,dword ptr [EBP + 0x4]       ; 00403f4c
        ;   Label: LAB_00403f4c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00403f4f
    SUB EAX,EDX                         ; 00403f56
    LEA EDX,[EAX*0x4 + 0x0]             ; 00403f58
    LEA EAX,[EBP + 0x18]                ; 00403f5f
    ADD EAX,EDX                         ; 00403f62
    POP EBP                             ; 00403f64
    POP ESI                             ; 00403f65
    RET                                 ; 00403f66

