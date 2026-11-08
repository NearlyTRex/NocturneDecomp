; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00443f00(int param_1)
;
;
; XREF[2]:
;   FUN_00443c60 at 00443c73
;   FUN_00443f90 at 00443f97
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443f00
        ;   Label: FUN_00443f00
    PUSH ESI                            ; 00443f01
    PUSH EBP                            ; 00443f02
    MOV EBX,dword ptr [ESP + 0x10]      ; 00443f03
    MOV EDX,dword ptr [EBX + 0x4]       ; 00443f07
    TEST EDX,EDX                        ; 00443f0a
    JZ 0x00443f2b                       ; 00443f0c
        ;   XREF to: 00443f2b (CONDITIONAL_JUMP)  ; LAB_00443f2b
    CMP dword ptr [EBX + 0xc],0x0       ; 00443f0e
    JZ 0x00443f24                       ; 00443f12
        ;   XREF to: 00443f24 (CONDITIONAL_JUMP)  ; LAB_00443f24
    MOV EAX,EDX                         ; 00443f14
    TEST EDX,EDX                        ; 00443f16
    JZ 0x00443f24                       ; 00443f18
        ;   XREF to: 00443f24 (CONDITIONAL_JUMP)  ; LAB_00443f24
    PUSH 0x2                            ; 00443f1a
    MOV EDX,dword ptr [EDX]             ; 00443f1c
    PUSH EAX                            ; 00443f1e
    CALL dword ptr [EDX]                ; 00443f1f
    ADD ESP,0x8                         ; 00443f21
    MOV dword ptr [EBX + 0x4],0x0       ; 00443f24
        ;   Label: LAB_00443f24
    MOV ESI,dword ptr [EBX + 0x8]       ; 00443f2b
        ;   Label: LAB_00443f2b
    TEST ESI,ESI                        ; 00443f2e
    JZ 0x00443f4f                       ; 00443f30
        ;   XREF to: 00443f4f (CONDITIONAL_JUMP)  ; LAB_00443f4f
    CMP dword ptr [EBX + 0xc],0x0       ; 00443f32
    JZ 0x00443f48                       ; 00443f36
        ;   XREF to: 00443f48 (CONDITIONAL_JUMP)  ; LAB_00443f48
    MOV EAX,ESI                         ; 00443f38
    TEST ESI,ESI                        ; 00443f3a
    JZ 0x00443f48                       ; 00443f3c
        ;   XREF to: 00443f48 (CONDITIONAL_JUMP)  ; LAB_00443f48
    PUSH 0x2                            ; 00443f3e
    MOV EDX,dword ptr [ESI]             ; 00443f40
    PUSH ESI                            ; 00443f42
    CALL dword ptr [EDX]                ; 00443f43
    ADD ESP,0x8                         ; 00443f45
    MOV dword ptr [EBX + 0x8],0x0       ; 00443f48
        ;   Label: LAB_00443f48
    MOV EBP,dword ptr [EBX + 0x10]      ; 00443f4f
        ;   Label: LAB_00443f4f
    TEST EBP,EBP                        ; 00443f52
    JNZ 0x00443f7d                      ; 00443f54
        ;   XREF to: 00443f7d (CONDITIONAL_JUMP)  ; LAB_00443f7d
    MOV dword ptr [EBX + 0x14],0x0      ; 00443f56
        ;   Label: LAB_00443f56
    MOV dword ptr [EBX + 0x18],0x0      ; 00443f5d
    MOV dword ptr [EBX + 0x1c],0x0      ; 00443f64
    MOV dword ptr [EBX + 0x20],0x0      ; 00443f6b
    MOV dword ptr [EBX + 0xc],0x0       ; 00443f72
    POP EBP                             ; 00443f79
    POP ESI                             ; 00443f7a
    POP EBX                             ; 00443f7b
    RET                                 ; 00443f7c
    PUSH EBP                            ; 00443f7d
        ;   Label: LAB_00443f7d
    CALL FUN_005c09f0                   ; 00443f7e
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 00443f83
    MOV dword ptr [EBX + 0x10],0x0      ; 00443f86
    JMP 0x00443f56                      ; 00443f8d
        ;   XREF to: 00443f56 (UNCONDITIONAL_JUMP)  ; LAB_00443f56

