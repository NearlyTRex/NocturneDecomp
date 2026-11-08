; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3e40(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004a4150 at 004a4160
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;   undefined4 DAT_00616038
;   undefined4 DAT_0061603c
;   undefined4 DAT_01511ccc
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   FUN_0040d900
;   FUN_0048e340
;   FUN_004a3d00
;   FUN_004a3fc0
;   FUN_004a8df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3e40
        ;   Label: FUN_004a3e40
    PUSH ESI                            ; 004a3e41
    PUSH EDI                            ; 004a3e42
    PUSH EBP                            ; 004a3e43
    SUB ESP,0xc                         ; 004a3e44
    MOV EDI,dword ptr [ESP + 0x20]      ; 004a3e47
    MOV EBP,dword ptr [ESP + 0x24]      ; 004a3e4b
    CMP dword ptr [EDI + 0x96c],0x0     ; 004a3e4f
    JNZ 0x004a3f17                      ; 004a3e56
        ;   XREF to: 004a3f17 (CONDITIONAL_JUMP)  ; LAB_004a3f17
    PUSH 0xffff                         ; 004a3e5c
        ;   Label: LAB_004a3e5c
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004a3e61
    PUSH ECX                            ; 004a3e65
    PUSH EBP                            ; 004a3e66
    LEA EAX,[EDI + 0x70]                ; 004a3e67
    PUSH EAX                            ; 004a3e6a
    CALL FUN_0040d900                   ; 004a3e6b
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d900()
    MOV EAX,[0x01cedef4]                ; 004a3e70 | DAT_01cedef4
    MOV EBX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004a3e75
    ADD ESP,0x10                        ; 004a3e7c
    TEST EBX,EBX                        ; 004a3e7f
    JZ 0x004a3ed3                       ; 004a3e81
        ;   XREF to: 004a3ed3 (CONDITIONAL_JUMP)  ; LAB_004a3ed3
    PUSH 0x5d5e08                       ; 004a3e83
    MOV ESI,dword ptr [0x006141f0]      ; 004a3e88 | DAT_006141f0
    PUSH ESI                            ; 004a3e8e
    CALL FUN_0048e340                   ; 004a3e8f
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 004a3e94
    TEST EAX,EAX                        ; 004a3e97
    JZ 0x004a3f25                       ; 004a3e99
        ;   XREF to: 004a3f25 (CONDITIONAL_JUMP)  ; LAB_004a3f25
    MOV EAX,dword ptr [EDI + 0x6c]      ; 004a3e9f
    MOV EDX,EAX                         ; 004a3ea2
    SAR EDX,0x1f                        ; 004a3ea4
    SUB EAX,EDX                         ; 004a3ea7
    SAR EAX,0x1                         ; 004a3ea9
    MOV ESI,dword ptr [ESP + 0x28]      ; 004a3eab
    PUSH 0xffff                         ; 004a3eaf
    ADD EAX,ESI                         ; 004a3eb4
    PUSH EAX                            ; 004a3eb6
    MOV EAX,dword ptr [EDI + 0x68]      ; 004a3eb7
    MOV EDX,EAX                         ; 004a3eba
    SAR EDX,0x1f                        ; 004a3ebc
    SUB EAX,EDX                         ; 004a3ebf
    SAR EAX,0x1                         ; 004a3ec1
    ADD EAX,EBP                         ; 004a3ec3
    PUSH EAX                            ; 004a3ec5
    PUSH 0x1caf1dc                      ; 004a3ec6
    CALL FUN_0040d900                   ; 004a3ecb
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d900()
        ;   Label: LAB_004a3ecb
    ADD ESP,0x10                        ; 004a3ed0
    MOV EAX,dword ptr [EDI + 0x2c0]     ; 004a3ed3
        ;   Label: LAB_004a3ed3
    XOR ESI,ESI                         ; 004a3ed9
    TEST EAX,EAX                        ; 004a3edb
    JLE 0x004a3f0f                      ; 004a3edd
        ;   XREF to: 004a3f0f (CONDITIONAL_JUMP)  ; LAB_004a3f0f
    LEA EAX,[EDI + 0x2c4]               ; 004a3edf
    MOV EBX,EDI                         ; 004a3ee5
    MOV dword ptr [ESP + 0x8],EAX       ; 004a3ee7
    IMUL EDX,ESI,0xd4                   ; 004a3eeb
        ;   Label: LAB_004a3eeb
    CMP dword ptr [EBX + 0x394],0x0     ; 004a3ef1
    JNZ 0x004a3f7d                      ; 004a3ef8
        ;   XREF to: 004a3f7d (CONDITIONAL_JUMP)  ; LAB_004a3f7d
    INC ESI                             ; 004a3efe
        ;   Label: LAB_004a3efe
    MOV EDX,dword ptr [EDI + 0x2c0]     ; 004a3eff
    ADD EBX,0xd4                        ; 004a3f05
    CMP ESI,EDX                         ; 004a3f0b
    JL 0x004a3eeb                       ; 004a3f0d
        ;   XREF to: 004a3eeb (CONDITIONAL_JUMP)  ; LAB_004a3eeb
    ADD ESP,0xc                         ; 004a3f0f
        ;   Label: LAB_004a3f0f
    POP EBP                             ; 004a3f12
    POP EDI                             ; 004a3f13
    POP ESI                             ; 004a3f14
    POP EBX                             ; 004a3f15
    RET                                 ; 004a3f16
    PUSH EDI                            ; 004a3f17
        ;   Label: LAB_004a3f17
    CALL FUN_004a3fc0                   ; 004a3f18
        ;   XREF to: 004a3fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3fc0()
    ADD ESP,0x4                         ; 004a3f1d
    JMP 0x004a3e5c                      ; 004a3f20
        ;   XREF to: 004a3e5c (UNCONDITIONAL_JUMP)  ; LAB_004a3e5c
    LEA EAX,[ESP + 0x4]                 ; 004a3f25
        ;   Label: LAB_004a3f25
    PUSH EAX                            ; 004a3f29
    LEA EAX,[ESP + 0x4]                 ; 004a3f2a
    PUSH EAX                            ; 004a3f2e
    MOV EAX,[0x01cedef4]                ; 004a3f2f | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004a3f34
    ADD EAX,0x20                        ; 004a3f3b
    PUSH EAX                            ; 004a3f3e
    PUSH EDI                            ; 004a3f3f
    CALL FUN_004a3d00                   ; 004a3f40
        ;   XREF to: 004a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3d00()
    ADD ESP,0x10                        ; 004a3f45
    TEST EAX,EAX                        ; 004a3f48
    JL 0x004a3ed3                       ; 004a3f4a
        ;   XREF to: 004a3ed3 (CONDITIONAL_JUMP)  ; LAB_004a3ed3
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a3f4c
    MOV EDX,dword ptr [ESP + 0x4]       ; 004a3f50
    MOV ECX,dword ptr [0x0061603c]      ; 004a3f54 | DAT_0061603c
    ADD EAX,EDX                         ; 004a3f5a
    PUSH 0xffff                         ; 004a3f5c
    SUB EAX,ECX                         ; 004a3f61
    PUSH EAX                            ; 004a3f63
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a3f64
    MOV EBX,dword ptr [0x00616038]      ; 004a3f68 | DAT_00616038
    ADD EAX,EBP                         ; 004a3f6e
    SUB EAX,EBX                         ; 004a3f70
    PUSH EAX                            ; 004a3f72
    PUSH 0x1caf1c8                      ; 004a3f73
    JMP 0x004a3ecb                      ; 004a3f78
        ;   XREF to: 004a3ecb (UNCONDITIONAL_JUMP)  ; LAB_004a3ecb
    PUSH -0x1                           ; 004a3f7d
        ;   Label: LAB_004a3f7d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004a3f7f
    MOV ECX,dword ptr [EBX + 0x390]     ; 004a3f83
    PUSH 0x1                            ; 004a3f89
    ADD EAX,ECX                         ; 004a3f8b
    PUSH EAX                            ; 004a3f8d
    MOV EAX,dword ptr [EBX + 0x38c]     ; 004a3f8e
    ADD EAX,EBP                         ; 004a3f94
    PUSH EAX                            ; 004a3f96
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a3f97
    ADD EAX,EDX                         ; 004a3f9b
    ADD EAX,0x64                        ; 004a3f9d
    PUSH EAX                            ; 004a3fa0
    MOV EAX,[0x01511ccc]                ; 004a3fa1 | DAT_01511ccc
    PUSH EAX                            ; 004a3fa6
    CALL FUN_004a8df0                   ; 004a3fa7
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8df0()
    ADD ESP,0x18                        ; 004a3fac
    JMP 0x004a3efe                      ; 004a3faf
        ;   XREF to: 004a3efe (UNCONDITIONAL_JUMP)  ; LAB_004a3efe

