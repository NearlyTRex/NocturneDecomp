; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confedrt_cpp_FUN_005a0b20(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   core_confedrt.cpp_CConfederate_ctor_FUN_005a0840 at 005a0922
;
; Referenced Globals:
;   TerminatedCString s_RangeAttack_005efc15
;   TerminatedCString s_RangeAttack_005efc21
;   TerminatedCString s_MeleeAttack_005efc2d
;   TerminatedCString s_MeleeAttack_005efc39
;
; Called Functions:
;   core_confedrt.cpp_FUN_005a1030
;   core_confedrt.cpp_FUN_005a1180
;   unkaddr_0059d350.cpp_FUN_0059d650
;   unkaddr_0059d350.cpp_FUN_0059daa0
;   unkafter_basicene.cpp_FUN_0059e8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0b20
        ;   Label: core_confedrt.cpp_FUN_005a0b20
    PUSH ESI                            ; 005a0b21
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a0b22
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a0b26
    TEST EBX,EBX                        ; 005a0b2a
    JNZ 0x005a0b4f                      ; 005a0b2c
        ;   XREF to: 005a0b4f (CONDITIONAL_JUMP)  ; LAB_005a0b4f
    LEA EAX,[ESI + 0x10af8]             ; 005a0b2e
        ;   Label: LAB_005a0b2e
    TEST EBX,EBX                        ; 005a0b34
    JBE 0x005a0b5f                      ; 005a0b36
        ;   XREF to: 005a0b5f (CONDITIONAL_JUMP)  ; LAB_005a0b5f
    CMP EBX,0x1                         ; 005a0b38
    JZ 0x005a0b6f                       ; 005a0b3b
        ;   XREF to: 005a0b6f (CONDITIONAL_JUMP)  ; LAB_005a0b6f
    LEA EAX,[ESI + 0x10af8]             ; 005a0b3d
        ;   Label: LAB_005a0b3d
    TEST EBX,EBX                        ; 005a0b43
    JBE 0x005a0b91                      ; 005a0b45
        ;   XREF to: 005a0b91 (CONDITIONAL_JUMP)  ; LAB_005a0b91
    CMP EBX,0x1                         ; 005a0b47
    JZ 0x005a0ba2                       ; 005a0b4a
        ;   XREF to: 005a0ba2 (CONDITIONAL_JUMP)  ; LAB_005a0ba2
    POP ESI                             ; 005a0b4c
        ;   Label: LAB_005a0b4c
    POP EBX                             ; 005a0b4d
    RET                                 ; 005a0b4e
    PUSH EBX                            ; 005a0b4f
        ;   Label: LAB_005a0b4f
    PUSH dword ptr [ESP + 0x14]         ; 005a0b50
    PUSH ESI                            ; 005a0b54
    CALL unkafter_basicene.cpp_FUN_0059e8c0 ; 005a0b55
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a0b5a
    JMP 0x005a0b2e                      ; 005a0b5d
        ;   XREF to: 005a0b2e (UNCONDITIONAL_JUMP)  ; LAB_005a0b2e
    PUSH 0x5efc15                       ; 005a0b5f | = "RangeAttack"
        ;   Label: LAB_005a0b5f
    PUSH EAX                            ; 005a0b64
    CALL unkaddr_0059d350.cpp_FUN_0059d650 ; 005a0b65
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a0b6a
    JMP 0x005a0b3d                      ; 005a0b6d
        ;   XREF to: 005a0b3d (UNCONDITIONAL_JUMP)  ; LAB_005a0b3d
    PUSH 0x5efc21                       ; 005a0b6f | = "RangeAttack"
        ;   Label: LAB_005a0b6f
    PUSH EAX                            ; 005a0b74
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a0b75
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a0b7a
    TEST EAX,EAX                        ; 005a0b7d
    JZ 0x005a0b3d                       ; 005a0b7f
        ;   XREF to: 005a0b3d (CONDITIONAL_JUMP)  ; LAB_005a0b3d
    PUSH dword ptr [ESP + 0x10]         ; 005a0b81
    PUSH ESI                            ; 005a0b85
    CALL core_confedrt.cpp_FUN_005a1030 ; 005a0b86
        ;   XREF to: 005a1030 (UNCONDITIONAL_CALL)  ; undefined core_confedrt.cpp_FUN_005a1030()
    ADD ESP,0x8                         ; 005a0b8b
    POP ESI                             ; 005a0b8e
    POP EBX                             ; 005a0b8f
    RET                                 ; 005a0b90
    PUSH 0x5efc2d                       ; 005a0b91 | = "MeleeAttack"
        ;   Label: LAB_005a0b91
    PUSH EAX                            ; 005a0b96
    CALL unkaddr_0059d350.cpp_FUN_0059d650 ; 005a0b97
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a0b9c
    POP ESI                             ; 005a0b9f
    POP EBX                             ; 005a0ba0
    RET                                 ; 005a0ba1
    PUSH 0x5efc39                       ; 005a0ba2 | = "MeleeAttack"
        ;   Label: LAB_005a0ba2
    PUSH EAX                            ; 005a0ba7
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a0ba8
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a0bad
    TEST EAX,EAX                        ; 005a0bb0
    JZ 0x005a0b4c                       ; 005a0bb2
        ;   XREF to: 005a0b4c (CONDITIONAL_JUMP)  ; LAB_005a0b4c
    PUSH dword ptr [ESP + 0x10]         ; 005a0bb4
    PUSH ESI                            ; 005a0bb8
    CALL core_confedrt.cpp_FUN_005a1180 ; 005a0bb9
        ;   XREF to: 005a1180 (UNCONDITIONAL_CALL)  ; undefined core_confedrt.cpp_FUN_005a1180()
    ADD ESP,0x8                         ; 005a0bbe
    POP ESI                             ; 005a0bc1
    POP EBX                             ; 005a0bc2
    RET                                 ; 005a0bc3

