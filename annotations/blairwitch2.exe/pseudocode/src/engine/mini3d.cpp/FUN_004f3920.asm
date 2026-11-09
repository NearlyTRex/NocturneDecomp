; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f3920(int param_1,int param_2,undefined4 param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09854
;   undefined4 DAT_01d09914
;   undefined4 DAT_01d09b7c
;   undefined4 DAT_01d0d2b4
;   undefined4 DAT_01d0d2b8
;   undefined4 DAT_01e61b58
;   undefined4 DAT_0264bc88
;   undefined4 DAT_0264bc90
;   undefined4 DAT_0264bc94
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_mini3d.cpp_FUN_004f34d0
;   engine_mini3d.cpp_FUN_004f3740
;   engine_mini3d.cpp_FUN_004f38c0
;   engine_mini3d.cpp_FUN_004f4510
;   engine_mini3d.cpp_FUN_004f4f50
;   engine_mini3d.cpp_FUN_004f5370
;   engine_mini3d.cpp_FUN_004f5900
;   engine_mini3d.cpp_FUN_004f5c50
;   engine_mini3d.cpp_FUN_004f5d50
;   engine_mini3d.cpp_FUN_004f6d00
;   engine_mini3d.cpp_FUN_004f7da0
;   engine_mini3d.cpp_FUN_004f7e00
;   engine_mini3d.cpp_FUN_004f8750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3920
        ;   Label: engine_mini3d.cpp_FUN_004f3920
    PUSH ESI                            ; 004f3921
    PUSH EDI                            ; 004f3922
    PUSH EBP                            ; 004f3923
    SUB ESP,0x8                         ; 004f3924
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004f3927
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f392b
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f392f
    MOV ECX,dword ptr [0x01d09854]      ; 004f3933 | DAT_01d09854
    MOV EDX,dword ptr [0x01e61b58]      ; 004f3939 | DAT_01e61b58
    MOV ESI,dword ptr [0x01d0d2b4]      ; 004f393f | DAT_01d0d2b4
    ADD ECX,EDI                         ; 004f3945
    ADD EDX,EAX                         ; 004f3947
    MOV dword ptr [0x01d09854],ECX      ; 004f3949 | DAT_01d09854
    MOV dword ptr [0x01e61b58],EDX      ; 004f394f | DAT_01e61b58
    TEST ESI,ESI                        ; 004f3955
    JNZ 0x004f3a3a                      ; 004f3957
        ;   XREF to: 004f3a3a (CONDITIONAL_JUMP)  ; LAB_004f3a3a
    CMP dword ptr [0x01d09914],0x0      ; 004f395d | DAT_01d09914
    JZ 0x004f3978                       ; 004f3964
        ;   XREF to: 004f3978 (CONDITIONAL_JUMP)  ; LAB_004f3978
    PUSH EAX                            ; 004f3966
    MOV EDX,dword ptr [ESP + 0x28]      ; 004f3967
    PUSH EDX                            ; 004f396b
    CALL engine_mini3d.cpp_FUN_004f34d0 ; 004f396c
        ;   XREF to: 004f34d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f34d0()
    ADD ESP,0x8                         ; 004f3971
    MOV dword ptr [ESP + 0x24],EAX      ; 004f3974
    CALL engine_mini3d.cpp_FUN_004f3740 ; 004f3978
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3740()
        ;   Label: LAB_004f3978
    CALL engine_mini3d.cpp_FUN_004f7da0 ; 004f397d
        ;   XREF to: 004f7da0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7da0()
    CMP dword ptr [0x0264bc88],0x0      ; 004f3982 | DAT_0264bc88
    JZ 0x004f3998                       ; 004f3989
        ;   XREF to: 004f3998 (CONDITIONAL_JUMP)  ; LAB_004f3998
    CMP dword ptr [0x01c37788],0x0      ; 004f398b | DAT_01c37788
    JNZ 0x004f3a52                      ; 004f3992
        ;   XREF to: 004f3a52 (CONDITIONAL_JUMP)  ; LAB_004f3a52
    CALL engine_mini3d.cpp_FUN_004f38c0 ; 004f3998
        ;   XREF to: 004f38c0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f38c0()
        ;   Label: LAB_004f3998
    CMP EDI,0x2710                      ; 004f399d
    JLE 0x004f39c8                      ; 004f39a3
        ;   XREF to: 004f39c8 (CONDITIONAL_JUMP)  ; LAB_004f39c8
    PUSH EDI                            ; 004f39a5
    MOV EBP,0x5ddc8b                    ; 004f39a6
    MOV EAX,0x6db                       ; 004f39ab
    PUSH 0x5ddca0                       ; 004f39b0
    MOV dword ptr [0x01d046a0],EBP      ; 004f39b5 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004f39bb | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f39c0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004f39c5
    CALL engine_mini3d.cpp_FUN_004f5900 ; 004f39c8
        ;   XREF to: 004f5900 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f5900()
        ;   Label: LAB_004f39c8
    CMP dword ptr [0x0264bc90],0x0      ; 004f39cd | DAT_0264bc90
    JZ 0x004f3a76                       ; 004f39d4
        ;   XREF to: 004f3a76 (CONDITIONAL_JUMP)  ; LAB_004f3a76
    CMP dword ptr [0x01c37788],0x0      ; 004f39da | DAT_01c37788
    JZ 0x004f3a76                       ; 004f39e1
        ;   XREF to: 004f3a76 (CONDITIONAL_JUMP)  ; LAB_004f3a76
    MOV EBP,dword ptr [0x01d09b7c]      ; 004f39e7 | DAT_01d09b7c
    XOR ESI,ESI                         ; 004f39ed
    TEST EDI,EDI                        ; 004f39ef
    JLE 0x004f3a10                      ; 004f39f1
        ;   XREF to: 004f3a10 (CONDITIONAL_JUMP)  ; LAB_004f3a10
    PUSH EBX                            ; 004f39f3
        ;   Label: LAB_004f39f3
    PUSH EBP                            ; 004f39f4
    INC ESI                             ; 004f39f5
    CALL engine_mini3d.cpp_FUN_004f5d50 ; 004f39f6
        ;   XREF to: 004f5d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f5d50()
    ADD EBX,0x20                        ; 004f39fb
    ADD ESP,0x8                         ; 004f39fe
    ADD EBP,0x24                        ; 004f3a01
    CMP ESI,EDI                         ; 004f3a04
    JL 0x004f39f3                       ; 004f3a06
        ;   XREF to: 004f39f3 (CONDITIONAL_JUMP)  ; LAB_004f39f3
    LEA EAX,[EAX]                       ; 004f3a08
    MOV EDX,EDX                         ; 004f3a0e
    MOV EBP,dword ptr [0x01c38b54]      ; 004f3a10 | DAT_01c38b54
        ;   Label: LAB_004f3a10
    PUSH EBP                            ; 004f3a16
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004f3a17
    PUSH EAX                            ; 004f3a1b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004f3a1c
    PUSH EDX                            ; 004f3a20
    PUSH EDI                            ; 004f3a21
    MOV ECX,dword ptr [0x01d09b7c]      ; 004f3a22 | DAT_01d09b7c
    PUSH ECX                            ; 004f3a28
    CALL dword ptr [0x0264bc90]         ; 004f3a29 | DAT_0264bc90
    ADD ESP,0x14                        ; 004f3a2f
    ADD ESP,0x8                         ; 004f3a32
    POP EBP                             ; 004f3a35
    POP EDI                             ; 004f3a36
    POP ESI                             ; 004f3a37
    POP EBX                             ; 004f3a38
    RET                                 ; 004f3a39
    PUSH EAX                            ; 004f3a3a
        ;   Label: LAB_004f3a3a
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f3a3b
    PUSH EAX                            ; 004f3a3f
    PUSH EDI                            ; 004f3a40
    PUSH EBX                            ; 004f3a41
    CALL engine_mini3d.cpp_FUN_004f7e00 ; 004f3a42
        ;   XREF to: 004f7e00 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7e00()
    ADD ESP,0x10                        ; 004f3a47
    ADD ESP,0x8                         ; 004f3a4a
    POP EBP                             ; 004f3a4d
    POP EDI                             ; 004f3a4e
    POP ESI                             ; 004f3a4f
    POP EBX                             ; 004f3a50
    RET                                 ; 004f3a51
    MOV EDX,dword ptr [0x01c38b54]      ; 004f3a52 | DAT_01c38b54
        ;   Label: LAB_004f3a52
    PUSH EDX                            ; 004f3a58
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004f3a59
    PUSH ECX                            ; 004f3a5d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004f3a5e
    PUSH ESI                            ; 004f3a62
    PUSH EDI                            ; 004f3a63
    PUSH EBX                            ; 004f3a64
    CALL dword ptr [0x0264bc88]         ; 004f3a65 | DAT_0264bc88
    ADD ESP,0x14                        ; 004f3a6b
    ADD ESP,0x8                         ; 004f3a6e
    POP EBP                             ; 004f3a71
    POP EDI                             ; 004f3a72
    POP ESI                             ; 004f3a73
    POP EBX                             ; 004f3a74
    RET                                 ; 004f3a75
    CMP dword ptr [0x0264bc94],0x0      ; 004f3a76 | DAT_0264bc94
        ;   Label: LAB_004f3a76
    JZ 0x004f3ada                       ; 004f3a7d
        ;   XREF to: 004f3ada (CONDITIONAL_JUMP)  ; LAB_004f3ada
    CMP dword ptr [0x01c37788],0x0      ; 004f3a7f | DAT_01c37788
    JZ 0x004f3ada                       ; 004f3a86
        ;   XREF to: 004f3ada (CONDITIONAL_JUMP)  ; LAB_004f3ada
    MOV EBP,dword ptr [0x01d09b7c]      ; 004f3a88 | DAT_01d09b7c
    XOR ESI,ESI                         ; 004f3a8e
    TEST EDI,EDI                        ; 004f3a90
    JLE 0x004f3ab0                      ; 004f3a92
        ;   XREF to: 004f3ab0 (CONDITIONAL_JUMP)  ; LAB_004f3ab0
    PUSH EBX                            ; 004f3a94
        ;   Label: LAB_004f3a94
    PUSH EBP                            ; 004f3a95
    INC ESI                             ; 004f3a96
    CALL engine_mini3d.cpp_FUN_004f5c50 ; 004f3a97
        ;   XREF to: 004f5c50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f5c50()
    ADD EBX,0x20                        ; 004f3a9c
    ADD ESP,0x8                         ; 004f3a9f
    ADD EBP,0x20                        ; 004f3aa2
    CMP ESI,EDI                         ; 004f3aa5
    JL 0x004f3a94                       ; 004f3aa7
        ;   XREF to: 004f3a94 (CONDITIONAL_JUMP)  ; LAB_004f3a94
    LEA EAX,[EAX]                       ; 004f3aa9
    NOP                                 ; 004f3aaf
    MOV ECX,dword ptr [0x01c38b54]      ; 004f3ab0 | DAT_01c38b54
        ;   Label: LAB_004f3ab0
    PUSH ECX                            ; 004f3ab6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004f3ab7
    PUSH EBX                            ; 004f3abb
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004f3abc
    PUSH ESI                            ; 004f3ac0
    PUSH EDI                            ; 004f3ac1
    MOV EDI,dword ptr [0x01d09b7c]      ; 004f3ac2 | DAT_01d09b7c
    PUSH EDI                            ; 004f3ac8
    CALL dword ptr [0x0264bc94]         ; 004f3ac9 | DAT_0264bc94
    ADD ESP,0x14                        ; 004f3acf
    ADD ESP,0x8                         ; 004f3ad2
    POP EBP                             ; 004f3ad5
    POP EDI                             ; 004f3ad6
    POP ESI                             ; 004f3ad7
    POP EBX                             ; 004f3ad8
    RET                                 ; 004f3ad9
    MOV ESI,EBX                         ; 004f3ada
        ;   Label: LAB_004f3ada
    XOR EAX,EAX                         ; 004f3adc
    XOR EBP,EBP                         ; 004f3ade
    MOV EBX,dword ptr [0x01d09b7c]      ; 004f3ae0 | DAT_01d09b7c
    MOV dword ptr [ESP],EAX             ; 004f3ae6
    TEST EDI,EDI                        ; 004f3ae9
    JLE 0x004f3b50                      ; 004f3aeb
        ;   XREF to: 004f3b50 (CONDITIONAL_JUMP)  ; LAB_004f3b50
    LEA EAX,[EBX + 0x24]                ; 004f3aed
    MOV dword ptr [ESP + 0x4],EAX       ; 004f3af0
    PUSH EBX                            ; 004f3af4
        ;   Label: LAB_004f3af4
    PUSH ESI                            ; 004f3af5
    CALL engine_mini3d.cpp_FUN_004f4510 ; 004f3af6
        ;   XREF to: 004f4510 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f4510()
    ADD ESP,0x8                         ; 004f3afb
    FLD float ptr [ESI + 0x18]          ; 004f3afe
    MOV EDX,dword ptr [ESP + 0x4]       ; 004f3b01
    FSTP float ptr [EBX + 0x1c]         ; 004f3b05
    PUSH EDX                            ; 004f3b08
    FLD float ptr [ESI + 0x1c]          ; 004f3b09
    PUSH ESI                            ; 004f3b0c
    FSTP float ptr [EBX + 0x20]         ; 004f3b0d
    CALL engine_mini3d.cpp_FUN_004f4f50 ; 004f3b10
        ;   XREF to: 004f4f50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f4f50()
    ADD ESP,0x8                         ; 004f3b15
    PUSH EBX                            ; 004f3b18
    INC EBP                             ; 004f3b19
    CALL engine_mini3d.cpp_FUN_004f5370 ; 004f3b1a
        ;   XREF to: 004f5370 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f5370()
    ADD ESP,0x4                         ; 004f3b1f
    MOV EAX,dword ptr [EBX + 0x10]      ; 004f3b22
    MOV ECX,dword ptr [ESP]             ; 004f3b25
    ADD ESI,0x20                        ; 004f3b28
    OR ECX,EAX                          ; 004f3b2b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3b2d
    ADD EBX,0x40                        ; 004f3b31
    ADD EAX,0x40                        ; 004f3b34
    MOV dword ptr [ESP],ECX             ; 004f3b37
    MOV dword ptr [ESP + 0x4],EAX       ; 004f3b3a
    CMP EBP,EDI                         ; 004f3b3e
    JL 0x004f3af4                       ; 004f3b40
        ;   XREF to: 004f3af4 (CONDITIONAL_JUMP)  ; LAB_004f3af4
    LEA EAX,[EAX]                       ; 004f3b42
    LEA EDX,[EDX]                       ; 004f3b48
    MOV EAX,EAX                         ; 004f3b4e
    CMP dword ptr [0x01d0d2b8],0x0      ; 004f3b50 | DAT_01d0d2b8
        ;   Label: LAB_004f3b50
    JZ 0x004f3b7b                       ; 004f3b57
        ;   XREF to: 004f3b7b (CONDITIONAL_JUMP)  ; LAB_004f3b7b
    MOV EBP,dword ptr [ESP + 0x28]      ; 004f3b59
    PUSH EBP                            ; 004f3b5d
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f3b5e
    PUSH EAX                            ; 004f3b62
    PUSH EDI                            ; 004f3b63
    MOV EDX,dword ptr [0x01d09b7c]      ; 004f3b64 | DAT_01d09b7c
    PUSH EDX                            ; 004f3b6a
    CALL engine_mini3d.cpp_FUN_004f8750 ; 004f3b6b
        ;   XREF to: 004f8750 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8750()
    ADD ESP,0x10                        ; 004f3b70
    ADD ESP,0x8                         ; 004f3b73
    POP EBP                             ; 004f3b76
    POP EDI                             ; 004f3b77
    POP ESI                             ; 004f3b78
    POP EBX                             ; 004f3b79
    RET                                 ; 004f3b7a
    MOV ECX,dword ptr [ESP]             ; 004f3b7b
        ;   Label: LAB_004f3b7b
    PUSH ECX                            ; 004f3b7e
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004f3b7f
    PUSH EBX                            ; 004f3b83
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004f3b84
    PUSH ESI                            ; 004f3b88
    PUSH EDI                            ; 004f3b89
    MOV EDI,dword ptr [0x01d09b7c]      ; 004f3b8a | DAT_01d09b7c
    PUSH EDI                            ; 004f3b90
    CALL engine_mini3d.cpp_FUN_004f6d00 ; 004f3b91
        ;   XREF to: 004f6d00 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6d00()
    ADD ESP,0x14                        ; 004f3b96
    ADD ESP,0x8                         ; 004f3b99
    POP EBP                             ; 004f3b9c
    POP EDI                             ; 004f3b9d
    POP ESI                             ; 004f3b9e
    POP EBX                             ; 004f3b9f
    RET                                 ; 004f3ba0

