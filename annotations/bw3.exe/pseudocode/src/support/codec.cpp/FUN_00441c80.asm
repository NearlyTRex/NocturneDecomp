; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00441c80(int param_1)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[3]:
;   support_codec.cpp_FUN_00441920 at 00441956
;   support_codec.cpp_FUN_004419a0 at 004419ce
;   support_codec.cpp_FUN_004419e0 at 00441a68
;
; Called Functions:
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50
;   support_trstream.cpp_FUN_00574ac0
;   support_trstream.cpp_FUN_00574d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441c80
        ;   Label: support_codec.cpp_FUN_00441c80
    PUSH ESI                            ; 00441c81
    PUSH EDI                            ; 00441c82
    SUB ESP,0x18                        ; 00441c83
    MOV EBX,dword ptr [ESP + 0x28]      ; 00441c86
    MOV dword ptr [EBX + 0x1c],0x0      ; 00441c8a
    MOV EDX,dword ptr [EBX + 0x20]      ; 00441c91
    MOV dword ptr [EBX + 0x18],0x0      ; 00441c94
    TEST EDX,EDX                        ; 00441c9b
    JZ 0x00441cad                       ; 00441c9d
        ;   XREF to: 00441cad (CONDITIONAL_JUMP)  ; LAB_00441cad
    MOV EBX,0xffffffff                  ; 00441c9f
    MOV EAX,EBX                         ; 00441ca4
    ADD ESP,0x18                        ; 00441ca6
    POP EDI                             ; 00441ca9
    POP ESI                             ; 00441caa
    POP EBX                             ; 00441cab
    RET                                 ; 00441cac
    MOV ECX,dword ptr [EBX + 0x14]      ; 00441cad
        ;   Label: LAB_00441cad
    PUSH ECX                            ; 00441cb0
    MOV ESI,dword ptr [EBX + 0x10]      ; 00441cb1
    PUSH ESI                            ; 00441cb4
    LEA EAX,[ESP + 0x8]                 ; 00441cb5
    PUSH EAX                            ; 00441cb9
    CALL support_trstream.cpp_FUN_00574ac0 ; 00441cba
        ;   XREF to: 00574ac0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00574ac0()
    ADD ESP,0xc                         ; 00441cbf
    MOV EDX,ESP                         ; 00441cc2
    PUSH EDX                            ; 00441cc4
    MOV EDI,dword ptr [EBX + 0x8]       ; 00441cc5
    MOV EAX,dword ptr [EBX + 0x4]       ; 00441cc8
    PUSH EDI                            ; 00441ccb
    MOV ECX,dword ptr [EAX]             ; 00441ccc
    PUSH EAX                            ; 00441cce
    CALL dword ptr [ECX + 0x8]          ; 00441ccf
    ADD ESP,0xc                         ; 00441cd2
    TEST EAX,EAX                        ; 00441cd5
    JZ 0x00441d26                       ; 00441cd7
        ;   XREF to: 00441d26 (CONDITIONAL_JUMP)  ; LAB_00441d26
    CMP EAX,0x1                         ; 00441cd9
    JNZ 0x00441cf9                      ; 00441cdc
        ;   XREF to: 00441cf9 (CONDITIONAL_JUMP)  ; LAB_00441cf9
    MOV EDX,ESP                         ; 00441cde
    MOV EAX,dword ptr [EBX + 0x4]       ; 00441ce0
    PUSH EDX                            ; 00441ce3
    MOV ECX,dword ptr [EAX]             ; 00441ce4
    PUSH EAX                            ; 00441ce6
    CALL dword ptr [ECX + 0xc]          ; 00441ce7
    ADD ESP,0x8                         ; 00441cea
    TEST EAX,EAX                        ; 00441ced
    JZ 0x00441d26                       ; 00441cef
        ;   XREF to: 00441d26 (CONDITIONAL_JUMP)  ; LAB_00441d26
    CMP EAX,0x1                         ; 00441cf1
    JNZ 0x00441cf9                      ; 00441cf4
        ;   XREF to: 00441cf9 (CONDITIONAL_JUMP)  ; LAB_00441cf9
    MOV dword ptr [EBX + 0x20],EAX      ; 00441cf6
    MOV EAX,ESP                         ; 00441cf9
        ;   Label: LAB_00441cf9
    PUSH EAX                            ; 00441cfb
    CALL support_trstream.cpp_FUN_00574d00 ; 00441cfc
        ;   XREF to: 00574d00 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00574d00()
    ADD ESP,0x4                         ; 00441d01
    TEST EAX,EAX                        ; 00441d04
    JL 0x00441d42                       ; 00441d06
        ;   XREF to: 00441d42 (CONDITIONAL_JUMP)  ; LAB_00441d42
    JNZ 0x00441d5f                      ; 00441d08
        ;   XREF to: 00441d5f (CONDITIONAL_JUMP)  ; LAB_00441d5f
    PUSH EAX                            ; 00441d0a
    LEA EAX,[ESP + 0x4]                 ; 00441d0b
    PUSH EAX                            ; 00441d0f
    MOV EBX,0xffffffff                  ; 00441d10
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50 ; 00441d15
        ;   XREF to: 00574b50 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00441d1a
    MOV EAX,EBX                         ; 00441d1d
    ADD ESP,0x18                        ; 00441d1f
    POP EDI                             ; 00441d22
    POP ESI                             ; 00441d23
    POP EBX                             ; 00441d24
    RET                                 ; 00441d25
    PUSH EAX                            ; 00441d26
        ;   Label: LAB_00441d26
    LEA EAX,[ESP + 0x4]                 ; 00441d27
    PUSH EAX                            ; 00441d2b
    MOV EBX,0xfffffffe                  ; 00441d2c
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50 ; 00441d31
        ;   XREF to: 00574b50 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00441d36
    MOV EAX,EBX                         ; 00441d39
    ADD ESP,0x18                        ; 00441d3b
    POP EDI                             ; 00441d3e
    POP ESI                             ; 00441d3f
    POP EBX                             ; 00441d40
    RET                                 ; 00441d41
    PUSH 0x0                            ; 00441d42
        ;   Label: LAB_00441d42
    LEA EAX,[ESP + 0x4]                 ; 00441d44
    PUSH EAX                            ; 00441d48
    MOV EBX,0xfffffffe                  ; 00441d49
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50 ; 00441d4e
        ;   XREF to: 00574b50 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00441d53
    MOV EAX,EBX                         ; 00441d56
    ADD ESP,0x18                        ; 00441d58
    POP EDI                             ; 00441d5b
    POP ESI                             ; 00441d5c
    POP EBX                             ; 00441d5d
    RET                                 ; 00441d5e
    MOV dword ptr [EBX + 0x18],EAX      ; 00441d5f
        ;   Label: LAB_00441d5f
    XOR EBX,EBX                         ; 00441d62
    PUSH EBX                            ; 00441d64
    LEA EAX,[ESP + 0x4]                 ; 00441d65
    PUSH EAX                            ; 00441d69
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50 ; 00441d6a
        ;   XREF to: 00574b50 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00441d6f
    MOV EAX,EBX                         ; 00441d72
    ADD ESP,0x18                        ; 00441d74
    POP EDI                             ; 00441d77
    POP ESI                             ; 00441d78
    POP EBX                             ; 00441d79
    RET                                 ; 00441d7a

