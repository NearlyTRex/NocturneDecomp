; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_grandma_cpp_FUN_005a7cf0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_BROOM_KFM_005f0829
;   undefined4 g_CBoxActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_charactr.cpp_FUN_00429120
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7cf0
        ;   Label: core_grandma.cpp_FUN_005a7cf0
    PUSH EDI                            ; 005a7cf1
    PUSH EBP                            ; 005a7cf2
    MOV EBP,ESP                         ; 005a7cf3
    SUB ESP,0xe8                        ; 005a7cf5
    SUB EBP,0x7a                        ; 005a7cfb
    MOV EBX,ESI                         ; 005a7cfe
    MOV ESI,dword ptr [EBP + 0x8e]      ; 005a7d00
    MOV EDX,dword ptr [0x007bc9e8]      ; 005a7d06 | g_CBoxActorClassInfo.name_hash
    LEA EAX,[ESI*0x8 + 0x0]             ; 005a7d0c
    PUSH EDX                            ; 005a7d13
    MOV EDX,EAX                         ; 005a7d14
    SHL EAX,0x4                         ; 005a7d16
    SUB EAX,EDX                         ; 005a7d19
    MOV EDX,dword ptr [EBP + 0x8a]      ; 005a7d1b
    ADD EDX,EAX                         ; 005a7d21
    MOV ECX,dword ptr [EDX + 0x2620]    ; 005a7d23
    PUSH ECX                            ; 005a7d29
    MOV dword ptr [EBP + 0x76],EDX      ; 005a7d2a
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005a7d2d
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 005a7d32
    TEST EAX,EAX                        ; 005a7d35
    JZ 0x005a7d50                       ; 005a7d37
        ;   XREF to: 005a7d50 (CONDITIONAL_JUMP)  ; LAB_005a7d50
    PUSH 0x5f0829                       ; 005a7d39 | = "BROOM.KFM"
    ADD EAX,0x32c                       ; 005a7d3e
    PUSH EAX                            ; 005a7d43
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 005a7d44
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a7d49
    TEST EAX,EAX                        ; 005a7d4c
    JZ 0x005a7d85                       ; 005a7d4e
        ;   XREF to: 005a7d85 (CONDITIONAL_JUMP)  ; LAB_005a7d85
    PUSH ESI                            ; 005a7d50
        ;   Label: LAB_005a7d50
    MOV EDI,dword ptr [EBP + 0x8a]      ; 005a7d51
    PUSH EDI                            ; 005a7d57
    LEA ESI,[EBP + -0x6e]               ; 005a7d58
    CALL core_charactr.cpp_FUN_00429120 ; 005a7d5b
        ;   XREF to: 00429120 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00429120()
    MOV ECX,0xc                         ; 005a7d60
    LEA EDI,[EBP + -0xe]                ; 005a7d65
    LEA ESI,[EBP + -0x6e]               ; 005a7d68
    ADD ESP,0x8                         ; 005a7d6b
        ;   Label: LAB_005a7d6b
    MOVSD.REP ES:EDI,ESI                ; 005a7d6e
    MOV ECX,0xc                         ; 005a7d70
    LEA ESI,[EBP + -0xe]                ; 005a7d75
    MOV EDI,EBX                         ; 005a7d78
    MOVSD.REP ES:EDI,ESI                ; 005a7d7a
    MOV EAX,EBX                         ; 005a7d7c
    LEA ESP,[EBP + 0x7a]                ; 005a7d7e
    POP EBP                             ; 005a7d81
    POP EDI                             ; 005a7d82
    POP EBX                             ; 005a7d83
    RET                                 ; 005a7d84
    MOV EDI,0x3fc7ae14                  ; 005a7d85
        ;   Label: LAB_005a7d85
    LEA ESI,[EBP + 0x5e]                ; 005a7d8a
    MOV EDX,0x3d8f5c29                  ; 005a7d8d
    MOV ECX,0xbe19999a                  ; 005a7d92
    MOV dword ptr [EBP + 0x5e],EAX      ; 005a7d97
    LEA EAX,[EBP + 0x6a]                ; 005a7d9a
    MOV dword ptr [EBP + 0x66],EDI      ; 005a7d9d
    MOV dword ptr [EBP + 0x62],EDI      ; 005a7da0
    MOV dword ptr [EBP + 0x52],EDX      ; 005a7da3
    LEA EDI,[EBP + 0x6a]                ; 005a7da6
    PUSH EAX                            ; 005a7da9
    LEA EAX,[EBP + 0x52]                ; 005a7daa
    MOVSD ES:EDI,ESI                    ; 005a7dad
    MOVSD ES:EDI,ESI                    ; 005a7dae
    MOVSD ES:EDI,ESI                    ; 005a7daf
    PUSH EAX                            ; 005a7db0
    LEA EAX,[EBP + 0x22]                ; 005a7db1
    XOR ESI,ESI                         ; 005a7db4
    PUSH EAX                            ; 005a7db6
    MOV dword ptr [EBP + 0x56],ECX      ; 005a7db7
    MOV dword ptr [EBP + 0x5a],ESI      ; 005a7dba
    CALL core_xform.cpp_FUN_00591c10    ; 005a7dbd
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    MOV EDX,dword ptr [EBP + 0x76]      ; 005a7dc2
    MOV EDX,dword ptr [EDX + 0x2618]    ; 005a7dc5
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a7dcb
    SUB EAX,EDX                         ; 005a7dd2
    MOV EDX,dword ptr [EBP + 0x8a]      ; 005a7dd4
    SHL EAX,0x4                         ; 005a7dda
    ADD EDX,0x1134                      ; 005a7ddd
    ADD ESP,0xc                         ; 005a7de3
    ADD EAX,EDX                         ; 005a7de6
    PUSH EAX                            ; 005a7de8
    LEA EAX,[EBP + 0x22]                ; 005a7de9
    PUSH EAX                            ; 005a7dec
    LEA ESI,[EBP + -0x3e]               ; 005a7ded
    LEA EDI,[EBP + -0xe]                ; 005a7df0
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 005a7df3
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 005a7df8
    LEA ESI,[EBP + -0x3e]               ; 005a7dfd
    JMP 0x005a7d6b                      ; 005a7e00
        ;   XREF to: 005a7d6b (UNCONDITIONAL_JUMP)  ; LAB_005a7d6b

