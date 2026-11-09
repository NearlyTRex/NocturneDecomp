; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00442e10(int *param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005d6a55
;
; Called Functions:
;   support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860
;   support_trstream.cpp_FUN_005a17f0
;   support_trstream.cpp_FUN_005a1990
;   unkaddr_0059f520.cpp_FUN_005a0930
;   unkaddr_0059f520.cpp_FUN_005a0d70
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442e10
        ;   Label: support_codec.cpp_FUN_00442e10
    SUB ESP,0x34                        ; 00442e11
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00442e14
    PUSH 0x1                            ; 00442e18
    MOV EDX,dword ptr [ESP + 0x44]      ; 00442e1a
    PUSH EDX                            ; 00442e1e
    LEA EAX,[ESP + 0x8]                 ; 00442e1f
    PUSH EAX                            ; 00442e23
    CALL unkaddr_0059f520.cpp_FUN_005a0930 ; 00442e24
        ;   XREF to: 005a0930 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0930()
    ADD ESP,0xc                         ; 00442e29
    MOV EAX,ESP                         ; 00442e2c
    PUSH EAX                            ; 00442e2e
    CALL unkaddr_0059f520.cpp_FUN_005a0d70 ; 00442e2f
        ;   XREF to: 005a0d70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0d70()
    ADD ESP,0x4                         ; 00442e34
    TEST EAX,EAX                        ; 00442e37
    JZ 0x00442ec4                       ; 00442e39
        ;   XREF to: 00442ec4 (CONDITIONAL_JUMP)  ; LAB_00442ec4
    PUSH 0x5d6a55                       ; 00442e3f | DAT_005d6a55
    MOV ECX,dword ptr [ESP + 0x48]      ; 00442e44
    PUSH ECX                            ; 00442e48
    LEA EAX,[ESP + 0x34]                ; 00442e49
    PUSH EAX                            ; 00442e4d
    CALL support_trstream.cpp_FUN_005a17f0 ; 00442e4e
        ;   XREF to: 005a17f0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a17f0()
    ADD ESP,0xc                         ; 00442e53
    LEA EAX,[ESP + 0x2c]                ; 00442e56
    PUSH EAX                            ; 00442e5a
    CALL support_trstream.cpp_FUN_005a1990 ; 00442e5b
        ;   XREF to: 005a1990 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a1990()
    ADD ESP,0x4                         ; 00442e60
    TEST EAX,EAX                        ; 00442e63
    JZ 0x00442ece                       ; 00442e65
        ;   XREF to: 00442ece (CONDITIONAL_JUMP)  ; LAB_00442ece
    PUSH EBX                            ; 00442e67
    MOV EAX,dword ptr [EBX]             ; 00442e68
    CALL dword ptr [EAX + 0x4]          ; 00442e6a
    ADD ESP,0x4                         ; 00442e6d
    LEA EDX,[ESP + 0x2c]                ; 00442e70
    PUSH EDX                            ; 00442e74
    LEA EDX,[ESP + 0x4]                 ; 00442e75
    PUSH EDX                            ; 00442e79
    MOV EAX,dword ptr [EBX]             ; 00442e7a
    PUSH EBX                            ; 00442e7c
    CALL dword ptr [EAX + 0x8]          ; 00442e7d
    ADD ESP,0xc                         ; 00442e80
    CMP EAX,0x1                         ; 00442e83
    JNZ 0x00442e9b                      ; 00442e86
        ;   XREF to: 00442e9b (CONDITIONAL_JUMP)  ; LAB_00442e9b
    LEA EDX,[ESP + 0x2c]                ; 00442e88
    PUSH EDX                            ; 00442e8c
    MOV EAX,dword ptr [EBX]             ; 00442e8d
    PUSH EBX                            ; 00442e8f
    CALL dword ptr [EAX + 0xc]          ; 00442e90
    ADD ESP,0x8                         ; 00442e93
    CMP EAX,0x1                         ; 00442e96
    JZ 0x00442e9d                       ; 00442e99
        ;   XREF to: 00442e9d (CONDITIONAL_JUMP)  ; LAB_00442e9d
    XOR EAX,EAX                         ; 00442e9b
        ;   Label: LAB_00442e9b
    PUSH 0x0                            ; 00442e9d
        ;   Label: LAB_00442e9d
    MOV EBX,EAX                         ; 00442e9f
    LEA EAX,[ESP + 0x30]                ; 00442ea1
    PUSH EAX                            ; 00442ea5
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860 ; 00442ea6
        ;   XREF to: 005a1860 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00442eab
    PUSH 0x0                            ; 00442eae
    LEA EAX,[ESP + 0x4]                 ; 00442eb0
    PUSH EAX                            ; 00442eb4
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 00442eb5
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
        ;   Label: LAB_00442eb5
    ADD ESP,0x8                         ; 00442eba
    MOV EAX,EBX                         ; 00442ebd
    ADD ESP,0x34                        ; 00442ebf
    POP EBX                             ; 00442ec2
    RET                                 ; 00442ec3
    PUSH EAX                            ; 00442ec4
        ;   Label: LAB_00442ec4
    LEA EAX,[ESP + 0x4]                 ; 00442ec5
    PUSH EAX                            ; 00442ec9
    XOR EBX,EBX                         ; 00442eca
    JMP 0x00442eb5                      ; 00442ecc
        ;   XREF to: 00442eb5 (UNCONDITIONAL_JUMP)  ; LAB_00442eb5
    PUSH EAX                            ; 00442ece
        ;   Label: LAB_00442ece
    LEA EAX,[ESP + 0x30]                ; 00442ecf
    PUSH EAX                            ; 00442ed3
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860 ; 00442ed4
        ;   XREF to: 005a1860 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00442ed9
    XOR EBX,EBX                         ; 00442edc
    PUSH EBX                            ; 00442ede
    LEA EAX,[ESP + 0x4]                 ; 00442edf
    PUSH EAX                            ; 00442ee3
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 00442ee4
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00442ee9
    MOV EAX,EBX                         ; 00442eec
    ADD ESP,0x34                        ; 00442eee
    POP EBX                             ; 00442ef1
    RET                                 ; 00442ef2

