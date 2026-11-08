; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00457e50(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0048adc0 at 0048af08
;
; Called Functions:
;   FUN_00455e60
;   FUN_00457c40
;   FUN_005c0b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457e50
        ;   Label: FUN_00457e50
    PUSH ESI                            ; 00457e51
    PUSH EDI                            ; 00457e52
    PUSH EBP                            ; 00457e53
    MOV ESI,dword ptr [ESP + 0x14]      ; 00457e54
    MOV EBP,dword ptr [ESP + 0x18]      ; 00457e58
    PUSH EBP                            ; 00457e5c
    PUSH 0xc                            ; 00457e5d
    PUSH 0x1                            ; 00457e5f
    LEA EAX,[ESI + 0x8]                 ; 00457e61
    PUSH EAX                            ; 00457e64
    CALL FUN_005c0b10                   ; 00457e65
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00457e6a
    PUSH EBP                            ; 00457e6d
    PUSH 0xc                            ; 00457e6e
    PUSH 0x1                            ; 00457e70
    LEA EAX,[ESI + 0x14]                ; 00457e72
    PUSH EAX                            ; 00457e75
    CALL FUN_005c0b10                   ; 00457e76
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00457e7b
    PUSH EBP                            ; 00457e7e
    PUSH 0x4                            ; 00457e7f
    PUSH 0x1                            ; 00457e81
    LEA EAX,[ESI + 0x20]                ; 00457e83
    PUSH EAX                            ; 00457e86
    CALL FUN_005c0b10                   ; 00457e87
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00457e8c
    PUSH EBP                            ; 00457e8f
    PUSH 0x4                            ; 00457e90
    PUSH 0x1                            ; 00457e92
    LEA EAX,[ESI + 0x28]                ; 00457e94
    PUSH EAX                            ; 00457e97
    CALL FUN_005c0b10                   ; 00457e98
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    MOV EDX,dword ptr [ESI + 0x28]      ; 00457e9d
    ADD ESP,0x10                        ; 00457ea0
    TEST EDX,EDX                        ; 00457ea3
    JNZ 0x00457f12                      ; 00457ea5
        ;   XREF to: 00457f12 (CONDITIONAL_JUMP)  ; LAB_00457f12
    PUSH EBP                            ; 00457ea7
        ;   Label: LAB_00457ea7
    PUSH 0xc                            ; 00457ea8
    MOV ECX,dword ptr [ESI + 0x20]      ; 00457eaa
    PUSH ECX                            ; 00457ead
    MOV EBX,dword ptr [ESI + 0x24]      ; 00457eae
    PUSH EBX                            ; 00457eb1
    CALL FUN_005c0b10                   ; 00457eb2
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00457eb7
    MOV EDI,dword ptr [ESI + 0x28]      ; 00457eba
    XOR EBX,EBX                         ; 00457ebd
    TEST EDI,EDI                        ; 00457ebf
    JLE 0x00457ef0                      ; 00457ec1
        ;   XREF to: 00457ef0 (CONDITIONAL_JUMP)  ; LAB_00457ef0
    XOR EDI,EDI                         ; 00457ec3
    MOV EAX,dword ptr [ESI + 0x24]      ; 00457ec5
        ;   Label: LAB_00457ec5
    PUSH EAX                            ; 00457ec8
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00457ec9
    PUSH EBP                            ; 00457ecc
    ADD EAX,EDI                         ; 00457ecd
    PUSH EAX                            ; 00457ecf
    INC EBX                             ; 00457ed0
    CALL FUN_00455e60                   ; 00457ed1
        ;   XREF to: 00455e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00455e60()
    ADD EDI,0x20                        ; 00457ed6
    MOV EDX,dword ptr [ESI + 0x28]      ; 00457ed9
    ADD ESP,0xc                         ; 00457edc
    CMP EBX,EDX                         ; 00457edf
    JL 0x00457ec5                       ; 00457ee1
        ;   XREF to: 00457ec5 (CONDITIONAL_JUMP)  ; LAB_00457ec5
    LEA EAX,[EAX]                       ; 00457ee3
    LEA EDX,[EDX]                       ; 00457ee9
    NOP                                 ; 00457eef
    MOV ECX,dword ptr [ESI + 0x28]      ; 00457ef0
        ;   Label: LAB_00457ef0
    TEST ECX,ECX                        ; 00457ef3
    JZ 0x00457f07                       ; 00457ef5
        ;   XREF to: 00457f07 (CONDITIONAL_JUMP)  ; LAB_00457f07
    PUSH EBP                            ; 00457ef7
    PUSH ECX                            ; 00457ef8
    PUSH 0x1                            ; 00457ef9
    MOV EDI,dword ptr [ESI + 0x30]      ; 00457efb
    PUSH EDI                            ; 00457efe
    CALL FUN_005c0b10                   ; 00457eff
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00457f04
    CMP dword ptr [ESI + 0x28],0x0      ; 00457f07
        ;   Label: LAB_00457f07
    JNZ 0x00457f1d                      ; 00457f0b
        ;   XREF to: 00457f1d (CONDITIONAL_JUMP)  ; LAB_00457f1d
    POP EBP                             ; 00457f0d
    POP EDI                             ; 00457f0e
    POP ESI                             ; 00457f0f
    POP EBX                             ; 00457f10
    RET                                 ; 00457f11
    PUSH ESI                            ; 00457f12
        ;   Label: LAB_00457f12
    CALL FUN_00457c40                   ; 00457f13
        ;   XREF to: 00457c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00457c40()
    ADD ESP,0x4                         ; 00457f18
    JMP 0x00457ea7                      ; 00457f1b
        ;   XREF to: 00457ea7 (UNCONDITIONAL_JUMP)  ; LAB_00457ea7
    PUSH EBP                            ; 00457f1d
        ;   Label: LAB_00457f1d
    PUSH 0x40                           ; 00457f1e
    PUSH 0x1                            ; 00457f20
    MOV EDX,dword ptr [ESI]             ; 00457f22
    PUSH EDX                            ; 00457f24
    CALL FUN_005c0b10                   ; 00457f25
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    MOV ECX,0x40                        ; 00457f2a
    ADD ESP,0x10                        ; 00457f2f
    MOV EAX,dword ptr [ESI]             ; 00457f32
    MOV EDI,dword ptr [ESI + 0x4]       ; 00457f34
    MOV ESI,EAX                         ; 00457f37
    PUSH EDI                            ; 00457f39
    MOV EAX,ECX                         ; 00457f3a
    SHR ECX,0x2                         ; 00457f3c
    MOVSD.REP ES:EDI,ESI                ; 00457f3f
    MOV CL,AL                           ; 00457f41
    AND CL,0x3                          ; 00457f43
    MOVSB.REP ES:EDI,ESI                ; 00457f46
    POP EDI                             ; 00457f48
    POP EBP                             ; 00457f49
    POP EDI                             ; 00457f4a
    POP ESI                             ; 00457f4b
    POP EBX                             ; 00457f4c
    RET                                 ; 00457f4d

