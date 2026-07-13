; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00571efe(int param_1,uint param_2)
;
;
; Called Functions:
;   FUN_005689c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571efe
        ;   Label: FUN_00571efe
    PUSH ESI                            ; 00571eff
    PUSH EBP                            ; 00571f00
    MOV EBP,ESP                         ; 00571f01
    MOV EBX,dword ptr [EBP + 0x10]      ; 00571f03
    MOV EAX,dword ptr [EBX + 0x4]       ; 00571f06
    TEST EAX,EAX                        ; 00571f09
    JNZ 0x00571f87                      ; 00571f0b
        ;   XREF to: 00571f87 (CONDITIONAL_JUMP)  ; LAB_00571f87
    JZ 0x00571f4a                       ; 00571f11
        ;   XREF to: 00571f4a (CONDITIONAL_JUMP)  ; LAB_00571f4a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00571f13
        ;   Label: LAB_00571f13
    TEST EAX,EAX                        ; 00571f16
    JNZ 0x00571f65                      ; 00571f18
        ;   XREF to: 00571f65 (CONDITIONAL_JUMP)  ; LAB_00571f65
    LEA EAX,[EBX + 0x38]                ; 00571f1a
    MOV dword ptr [EBX + 0x14],EAX      ; 00571f1d
    LEA EDX,[EBX + 0x34]                ; 00571f20
    MOV dword ptr [EBX + 0x10],EAX      ; 00571f23
    MOV dword ptr [EBX + 0xc],EDX       ; 00571f26
    MOV EAX,dword ptr [EBX + 0x14]      ; 00571f29
        ;   Label: LAB_00571f29
    CMP EAX,dword ptr [EBX + 0xc]       ; 00571f2c
    JBE 0x00571f73                      ; 00571f2f
        ;   XREF to: 00571f73 (CONDITIONAL_JUMP)  ; LAB_00571f73
    LEA ESI,[EAX + -0x1]                ; 00571f31
    MOV DL,byte ptr [EBP + 0x14]        ; 00571f34
    MOV dword ptr [EBX + 0x14],ESI      ; 00571f37
    MOV byte ptr [ESI],DL               ; 00571f3a
    MOV EAX,dword ptr [EBX + 0x14]      ; 00571f3c
    MOV AL,byte ptr [EAX]               ; 00571f3f
    AND EAX,0xff                        ; 00571f41
    POP EBP                             ; 00571f46
        ;   Label: LAB_00571f46
    POP ESI                             ; 00571f47
    POP EBX                             ; 00571f48
    RET                                 ; 00571f49
    MOV EAX,dword ptr [EBX + 0x24]      ; 00571f4a
        ;   Label: LAB_00571f4a
    AND EAX,0x1                         ; 00571f4d
    JNZ 0x00571f13                      ; 00571f50
        ;   XREF to: 00571f13 (CONDITIONAL_JUMP)  ; LAB_00571f13
    PUSH EBX                            ; 00571f52
    MOV EAX,dword ptr [EBX + 0x28]      ; 00571f53
    CALL dword ptr [EAX + 0x28]         ; 00571f56
    ADD ESP,0x4                         ; 00571f59
    CMP EAX,-0x1                        ; 00571f5c
    JNZ 0x00571f13                      ; 00571f5f
        ;   XREF to: 00571f13 (CONDITIONAL_JUMP)  ; LAB_00571f13
    POP EBP                             ; 00571f61
    POP ESI                             ; 00571f62
    POP EBX                             ; 00571f63
    RET                                 ; 00571f64
    LEA EDX,[EAX + 0x4]                 ; 00571f65
        ;   Label: LAB_00571f65
    MOV dword ptr [EBX + 0xc],EAX       ; 00571f68
    MOV dword ptr [EBX + 0x14],EDX      ; 00571f6b
    MOV dword ptr [EBX + 0x10],EDX      ; 00571f6e
    JMP 0x00571f29                      ; 00571f71
        ;   XREF to: 00571f29 (UNCONDITIONAL_JUMP)  ; LAB_00571f29
    XOR EDX,EDX                         ; 00571f73
        ;   Label: LAB_00571f73
    MOV DL,byte ptr [EBP + 0x14]        ; 00571f75
    PUSH EDX                            ; 00571f78
    MOV EAX,dword ptr [EBX + 0x28]      ; 00571f79
    PUSH EBX                            ; 00571f7c
    CALL dword ptr [EAX + 0x8]          ; 00571f7d
    ADD ESP,0x8                         ; 00571f80
    POP EBP                             ; 00571f83
    POP ESI                             ; 00571f84
    POP EBX                             ; 00571f85
    RET                                 ; 00571f86
    PUSH EBX                            ; 00571f87
        ;   Label: LAB_00571f87
    MOV EAX,dword ptr [EBX + 0x28]      ; 00571f88
    CALL dword ptr [EAX + 0x20]         ; 00571f8b
    ADD ESP,0x4                         ; 00571f8e
    CMP EAX,-0x1                        ; 00571f91
    JZ 0x00571f46                       ; 00571f94
        ;   XREF to: 00571f46 (CONDITIONAL_JUMP)  ; LAB_00571f46
    CMP dword ptr [EBP + 0x14],0xa      ; 00571f96
    JNZ 0x00571fc1                      ; 00571f9a
        ;   XREF to: 00571fc1 (CONDITIONAL_JUMP)  ; LAB_00571fc1
    TEST byte ptr [EBX + 0x30],0x80     ; 00571f9c
    JZ 0x00571fc1                       ; 00571fa0
        ;   XREF to: 00571fc1 (CONDITIONAL_JUMP)  ; LAB_00571fc1
    MOV EAX,0xfffffffe                  ; 00571fa2
    PUSH 0x1                            ; 00571fa7
        ;   Label: LAB_00571fa7
    PUSH EAX                            ; 00571fa9
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00571faa
    PUSH EAX                            ; 00571fad
    CALL FUN_005689c0                   ; 00571fae
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005689c0()
    ADD ESP,0xc                         ; 00571fb3
    TEST EAX,EAX                        ; 00571fb6
    JL 0x00571fc8                       ; 00571fb8
        ;   XREF to: 00571fc8 (CONDITIONAL_JUMP)  ; LAB_00571fc8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00571fba
    POP EBP                             ; 00571fbd
    POP ESI                             ; 00571fbe
    POP EBX                             ; 00571fbf
    RET                                 ; 00571fc0
    MOV EAX,0xffffffff                  ; 00571fc1
        ;   Label: LAB_00571fc1
    JMP 0x00571fa7                      ; 00571fc6
        ;   XREF to: 00571fa7 (UNCONDITIONAL_JUMP)  ; LAB_00571fa7
    MOV EAX,0xffffffff                  ; 00571fc8
        ;   Label: LAB_00571fc8
    POP EBP                             ; 00571fcd
    POP ESI                             ; 00571fce
    POP EBX                             ; 00571fcf
    RET                                 ; 00571fd0

