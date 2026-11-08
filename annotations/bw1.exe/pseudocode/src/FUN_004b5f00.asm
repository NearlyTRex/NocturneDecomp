; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b5f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)
;
;
; XREF[2]:
;   FUN_0040c870 at 0040caa0
;   FUN_0049f310 at 0049f8fa
;
; Referenced Globals:
;   undefined4 DAT_01cadb64
;
; Called Functions:
;   FUN_00468900
;   FUN_004af0f0
;   FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5f00
        ;   Label: FUN_004b5f00
    PUSH EBP                            ; 004b5f01
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b5f02
    MOV EDX,dword ptr [0x01cadb64]      ; 004b5f06 | DAT_01cadb64
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b5f0c
    ADD EAX,EDX                         ; 004b5f13
    SHL EAX,0x2                         ; 004b5f15
    MOV EBX,0x1cadb68                   ; 004b5f18
    ADD EAX,EDX                         ; 004b5f1d
    INC EDX                             ; 004b5f1f
    SHL EAX,0x2                         ; 004b5f20
    MOV dword ptr [0x01cadb64],EDX      ; 004b5f23 | DAT_01cadb64
    ADD EBX,EAX                         ; 004b5f29
    CMP EDX,0x40                        ; 004b5f2b
    JGE 0x004b5f4f                      ; 004b5f2e
        ;   XREF to: 004b5f4f (CONDITIONAL_JUMP)  ; LAB_004b5f4f
    TEST ECX,ECX                        ; 004b5f30
        ;   Label: LAB_004b5f30
    JZ 0x004b5f5b                       ; 004b5f32
        ;   XREF to: 004b5f5b (CONDITIONAL_JUMP)  ; LAB_004b5f5b
    PUSH dword ptr [ESP + 0x1c]         ; 004b5f34
        ;   Label: LAB_004b5f34
    PUSH ECX                            ; 004b5f38
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004b5f39
    PUSH EBP                            ; 004b5f3d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b5f3e
    PUSH EAX                            ; 004b5f42
    PUSH EBX                            ; 004b5f43
    CALL FUN_004af0f0                   ; 004b5f44
        ;   XREF to: 004af0f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004af0f0()
    ADD ESP,0x14                        ; 004b5f49
    POP EBP                             ; 004b5f4c
    POP EBX                             ; 004b5f4d
    RET                                 ; 004b5f4e
    PUSH EDI                            ; 004b5f4f
        ;   Label: LAB_004b5f4f
    XOR EDI,EDI                         ; 004b5f50
    MOV dword ptr [0x01cadb64],EDI      ; 004b5f52 | DAT_01cadb64
    POP EDI                             ; 004b5f58
    JMP 0x004b5f30                      ; 004b5f59
        ;   XREF to: 004b5f30 (UNCONDITIONAL_JUMP)  ; LAB_004b5f30
    CALL FUN_005c084c                   ; 004b5f5b
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; undefined FUN_005c084c()
        ;   Label: LAB_004b5f5b
    MOV EDX,EAX                         ; 004b5f60
    MOV ECX,0x4                         ; 004b5f62
    SAR EDX,0x1f                        ; 004b5f67
    IDIV ECX                            ; 004b5f6a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b5f6c
    ADD EAX,EDX                         ; 004b5f73
    SHL EAX,0x2                         ; 004b5f75
    SUB EAX,EDX                         ; 004b5f78
    SHL EAX,0x2                         ; 004b5f7a
    MOV EDX,EAX                         ; 004b5f7d
    SHL EAX,0x2                         ; 004b5f7f
    ADD EAX,EDX                         ; 004b5f82
    ADD EAX,0x1c576a8                   ; 004b5f84
    PUSH EAX                            ; 004b5f89
    CALL FUN_00468900                   ; 004b5f8a
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    ADD ESP,0x4                         ; 004b5f8f
    MOV ECX,EAX                         ; 004b5f92
    JMP 0x004b5f34                      ; 004b5f94
        ;   XREF to: 004b5f34 (UNCONDITIONAL_JUMP)  ; LAB_004b5f34

