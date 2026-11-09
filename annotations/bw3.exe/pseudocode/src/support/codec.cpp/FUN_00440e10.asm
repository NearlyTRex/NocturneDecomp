; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_codec_cpp_FUN_00440e10(int param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_codec.cpp_FUN_00441390 at 004413c3
;
; Called Functions:
;   support_codec.cpp_FUN_004400f0
;   support_codec.cpp_FUN_00440210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440e10
        ;   Label: support_codec.cpp_FUN_00440e10
    PUSH ESI                            ; 00440e11
    PUSH EDI                            ; 00440e12
    PUSH EBP                            ; 00440e13
    SUB ESP,0x8                         ; 00440e14
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00440e17
    MOV EBX,0x1                         ; 00440e1b
    MOV ECX,dword ptr [EAX + 0x8]       ; 00440e20
    XOR EDX,EDX                         ; 00440e23
    XOR EBP,EBP                         ; 00440e25
    XOR EDI,EDI                         ; 00440e27
    DEC ECX                             ; 00440e29
    MOV EAX,dword ptr [EAX + 0xc]       ; 00440e2a
    MOV dword ptr [ESP + 0x4],EDX       ; 00440e2d
    DEC EAX                             ; 00440e31
    SHL EBX,CL                          ; 00440e32
    MOV dword ptr [ESP],EAX             ; 00440e34
    TEST EBX,EBX                        ; 00440e37
    JZ 0x00440e65                       ; 00440e39
        ;   XREF to: 00440e65 (CONDITIONAL_JUMP)  ; LAB_00440e65
    TEST dword ptr [ESP],EBX            ; 00440e3b
        ;   Label: LAB_00440e3b
    JZ 0x00440e90                       ; 00440e3e
        ;   XREF to: 00440e90 (CONDITIONAL_JUMP)  ; LAB_00440e90
    MOV ESI,dword ptr [ESP + 0x24]      ; 00440e40
    PUSH ESI                            ; 00440e44
    PUSH 0x1                            ; 00440e45
    MOV EAX,dword ptr [ESP + 0x28]      ; 00440e47
    PUSH EAX                            ; 00440e4b
    CALL support_codec.cpp_FUN_004400f0 ; 00440e4c
        ;   XREF to: 004400f0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004400f0()
    MOV ESI,EAX                         ; 00440e51
    ADD ESP,0xc                         ; 00440e53
    TEST EAX,EAX                        ; 00440e56
    JL 0x00440e79                       ; 00440e58
        ;   XREF to: 00440e79 (CONDITIONAL_JUMP)  ; LAB_00440e79
    ADD EDI,EDI                         ; 00440e5a
    INC EBP                             ; 00440e5c
    OR EDI,EAX                          ; 00440e5d
    TEST EAX,EAX                        ; 00440e5f
    JNZ 0x00440e8c                      ; 00440e61
        ;   XREF to: 00440e8c (CONDITIONAL_JUMP)  ; LAB_00440e8c
    SAR EBX,0x1                         ; 00440e63
    MOV ESI,dword ptr [ESP + 0x24]      ; 00440e65
        ;   Label: LAB_00440e65
    TEST EBX,EBX                        ; 00440e69
    JNZ 0x00440e98                      ; 00440e6b
        ;   XREF to: 00440e98 (CONDITIONAL_JUMP)  ; LAB_00440e98
    MOV EAX,dword ptr [ESP + 0x4]       ; 00440e6d
    ADD ESP,0x8                         ; 00440e71
        ;   Label: LAB_00440e71
    POP EBP                             ; 00440e74
    POP EDI                             ; 00440e75
    POP ESI                             ; 00440e76
    POP EBX                             ; 00440e77
    RET                                 ; 00440e78
    PUSH EDI                            ; 00440e79
        ;   Label: LAB_00440e79
    PUSH EBP                            ; 00440e7a
    MOV ECX,dword ptr [ESP + 0x28]      ; 00440e7b
    PUSH ECX                            ; 00440e7f
    CALL support_codec.cpp_FUN_00440210 ; 00440e80
        ;   XREF to: 00440210 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00440210()
    ADD ESP,0xc                         ; 00440e85
    MOV EAX,ESI                         ; 00440e88
    JMP 0x00440e71                      ; 00440e8a
        ;   XREF to: 00440e71 (UNCONDITIONAL_JUMP)  ; LAB_00440e71
    OR dword ptr [ESP + 0x4],EBX        ; 00440e8c
        ;   Label: LAB_00440e8c
    SAR EBX,0x1                         ; 00440e90
        ;   Label: LAB_00440e90
    TEST EBX,EBX                        ; 00440e92
    JNZ 0x00440e3b                      ; 00440e94
        ;   XREF to: 00440e3b (CONDITIONAL_JUMP)  ; LAB_00440e3b
    JMP 0x00440e65                      ; 00440e96
        ;   XREF to: 00440e65 (UNCONDITIONAL_JUMP)  ; LAB_00440e65
    PUSH ESI                            ; 00440e98
        ;   Label: LAB_00440e98
    PUSH 0x1                            ; 00440e99
    MOV EAX,dword ptr [ESP + 0x28]      ; 00440e9b
    PUSH EAX                            ; 00440e9f
    CALL support_codec.cpp_FUN_004400f0 ; 00440ea0
        ;   XREF to: 004400f0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004400f0()
    ADD ESP,0xc                         ; 00440ea5
    TEST EAX,EAX                        ; 00440ea8
    JL 0x00440ec7                       ; 00440eaa
        ;   XREF to: 00440ec7 (CONDITIONAL_JUMP)  ; LAB_00440ec7
    ADD EDI,EDI                         ; 00440eac
    INC EBP                             ; 00440eae
    OR EDI,EAX                          ; 00440eaf
    TEST EAX,EAX                        ; 00440eb1
    JNZ 0x00440ee3                      ; 00440eb3
        ;   XREF to: 00440ee3 (CONDITIONAL_JUMP)  ; LAB_00440ee3
    SAR EBX,0x1                         ; 00440eb5
        ;   Label: LAB_00440eb5
    TEST EBX,EBX                        ; 00440eb7
    JNZ 0x00440e98                      ; 00440eb9
        ;   XREF to: 00440e98 (CONDITIONAL_JUMP)  ; LAB_00440e98
    MOV EAX,dword ptr [ESP + 0x4]       ; 00440ebb
    ADD ESP,0x8                         ; 00440ebf
    POP EBP                             ; 00440ec2
    POP EDI                             ; 00440ec3
    POP ESI                             ; 00440ec4
    POP EBX                             ; 00440ec5
    RET                                 ; 00440ec6
    PUSH EDI                            ; 00440ec7
        ;   Label: LAB_00440ec7
    PUSH EBP                            ; 00440ec8
    MOV ECX,dword ptr [ESP + 0x28]      ; 00440ec9
    PUSH ECX                            ; 00440ecd
    CALL support_codec.cpp_FUN_00440210 ; 00440ece
        ;   XREF to: 00440210 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00440210()
    MOV EAX,0xffffffff                  ; 00440ed3
    ADD ESP,0xc                         ; 00440ed8
    ADD ESP,0x8                         ; 00440edb
    POP EBP                             ; 00440ede
    POP EDI                             ; 00440edf
    POP ESI                             ; 00440ee0
    POP EBX                             ; 00440ee1
    RET                                 ; 00440ee2
    OR dword ptr [ESP + 0x4],EBX        ; 00440ee3
        ;   Label: LAB_00440ee3
    JMP 0x00440eb5                      ; 00440ee7
        ;   XREF to: 00440eb5 (UNCONDITIONAL_JUMP)  ; LAB_00440eb5

