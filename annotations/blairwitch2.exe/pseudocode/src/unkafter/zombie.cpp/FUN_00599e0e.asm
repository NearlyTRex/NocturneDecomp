; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_00599e0e(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01ba5714
;   undefined4 DAT_026672a8
;   undefined4 DAT_026677ac
;   undefined4 DAT_026677b0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00599e0e
        ;   Label: unkafter_zombie.cpp_FUN_00599e0e
    PUSH EBX                            ; 00599e10
    PUSH EDI                            ; 00599e11
    PUSH EBP                            ; 00599e12
    SUB ESP,0x4                         ; 00599e13
    MOV EBX,dword ptr [ESP + 0x14]      ; 00599e16
    MOV EDI,dword ptr [ESP + 0x18]      ; 00599e1a
    MOV EDX,dword ptr [EDI + 0x14]      ; 00599e1e
    MOV EAX,dword ptr [EBX + 0x14]      ; 00599e21
    SAR EDX,0x10                        ; 00599e24
    SAR EAX,0x10                        ; 00599e27
    CMP EAX,EDX                         ; 00599e2a
    JZ 0x00599f15                       ; 00599e2c
        ;   XREF to: 00599f15 (CONDITIONAL_JUMP)  ; LAB_00599f15
    PUSH ESI                            ; 00599e32
    MOV ESI,dword ptr [EDI + 0x14]      ; 00599e33
    CMP ESI,dword ptr [EBX + 0x14]      ; 00599e36
    JGE 0x00599e47                      ; 00599e39
        ;   XREF to: 00599e47 (CONDITIONAL_JUMP)  ; LAB_00599e47
    MOV ECX,EBX                         ; 00599e3b
    MOV EBX,EDI                         ; 00599e3d
    MOV EDI,ECX                         ; 00599e3f
    MOV ECX,EAX                         ; 00599e41
    MOV EAX,EDX                         ; 00599e43
    MOV EDX,ECX                         ; 00599e45
    MOV ESI,dword ptr [0x026672a8]      ; 00599e47 | DAT_026672a8
        ;   Label: LAB_00599e47
    LEA ECX,[ESI*0x4 + 0x0]             ; 00599e4d
    ADD ECX,ESI                         ; 00599e54
    MOV ESI,0x26672ac                   ; 00599e56
    SHL ECX,0x4                         ; 00599e5b
    ADD ESI,ECX                         ; 00599e5e
    MOV dword ptr [ESI],EAX             ; 00599e60
    MOV EBP,dword ptr [0x026677ac]      ; 00599e62 | DAT_026677ac
    MOV dword ptr [ESI + 0x4],EDX       ; 00599e68
    CMP EAX,EBP                         ; 00599e6b
    JGE 0x00599e74                      ; 00599e6d
        ;   XREF to: 00599e74 (CONDITIONAL_JUMP)  ; LAB_00599e74
    MOV [0x026677ac],EAX                ; 00599e6f | DAT_026677ac
    CMP EDX,dword ptr [0x026677b0]      ; 00599e74 | DAT_026677b0
        ;   Label: LAB_00599e74
    JLE 0x00599e82                      ; 00599e7a
        ;   XREF to: 00599e82 (CONDITIONAL_JUMP)  ; LAB_00599e82
    MOV dword ptr [0x026677b0],EDX      ; 00599e7c | DAT_026677b0
    MOV EDX,dword ptr [EBX + 0x14]      ; 00599e82
        ;   Label: LAB_00599e82
    MOV ECX,dword ptr [EDI + 0x14]      ; 00599e85
    SUB ECX,EDX                         ; 00599e88
    CMP ECX,0x10000                     ; 00599e8a
    JNC 0x00599f1c                      ; 00599e90
        ;   XREF to: 00599f1c (CONDITIONAL_JUMP)  ; LAB_00599f1c
    XOR ECX,ECX                         ; 00599e96
    MOV EAX,dword ptr [EDI + 0x10]      ; 00599e98
        ;   Label: LAB_00599e98
    MOV EDX,dword ptr [EBX + 0x10]      ; 00599e9b
    MOV EBP,dword ptr [EBX + 0x14]      ; 00599e9e
    SUB EAX,EDX                         ; 00599ea1
    AND EBP,0xffff                      ; 00599ea3
    MOV EDX,EAX                         ; 00599ea9
    MOV EAX,ECX                         ; 00599eab
    XOR EBP,0xffff                      ; 00599ead
    IMUL EDX                            ; 00599eb3
    SHRD EAX,EDX,0x10                   ; 00599eb5
    MOV EDX,EAX                         ; 00599eb9
    MOV dword ptr [ESI + 0xc],EAX       ; 00599ebb
    MOV EAX,EBP                         ; 00599ebe
    IMUL EDX                            ; 00599ec0
    SHRD EAX,EDX,0x10                   ; 00599ec2
    MOV dword ptr [ESP + 0x4],EAX       ; 00599ec6
    MOV EDX,dword ptr [ESP + 0x4]       ; 00599eca
    MOV EAX,dword ptr [EBX + 0x10]      ; 00599ece
    ADD EAX,EDX                         ; 00599ed1
    MOV dword ptr [ESI + 0x8],EAX       ; 00599ed3
    MOV EDX,dword ptr [EDI + 0x8]       ; 00599ed6
    SUB EDX,dword ptr [EBX + 0x8]       ; 00599ed9
    MOV EAX,ECX                         ; 00599edc
    SHL EDX,0x8                         ; 00599ede
    IMUL EDX                            ; 00599ee1
    SHRD EAX,EDX,0x10                   ; 00599ee3
    MOV dword ptr [ESI + 0x2c],EAX      ; 00599ee7
    MOV ECX,dword ptr [EBX + 0x8]       ; 00599eea
    MOV EAX,[0x01ba5714]                ; 00599eed | DAT_01ba5714
    SHL ECX,0x8                         ; 00599ef2
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00599ef5
    SUB ECX,EAX                         ; 00599ef8
    MOV EAX,EBP                         ; 00599efa
    IMUL EDX                            ; 00599efc
    SHRD EAX,EDX,0x10                   ; 00599efe
    MOV EDX,dword ptr [0x026672a8]      ; 00599f02 | DAT_026672a8
    ADD ECX,EAX                         ; 00599f08
    INC EDX                             ; 00599f0a
    MOV dword ptr [ESI + 0x28],ECX      ; 00599f0b
    MOV dword ptr [0x026672a8],EDX      ; 00599f0e | DAT_026672a8
    POP ESI                             ; 00599f14
    ADD ESP,0x4                         ; 00599f15
        ;   Label: LAB_00599f15
    POP EBP                             ; 00599f18
    POP EDI                             ; 00599f19
    POP EBX                             ; 00599f1a
    RET                                 ; 00599f1b
    MOV EAX,0xffffffff                  ; 00599f1c
        ;   Label: LAB_00599f1c
    XOR EDX,EDX                         ; 00599f21
    DIV ECX                             ; 00599f23
    MOV ECX,EAX                         ; 00599f25
    JMP 0x00599e98                      ; 00599f27
        ;   XREF to: 00599e98 (UNCONDITIONAL_JUMP)  ; LAB_00599e98

