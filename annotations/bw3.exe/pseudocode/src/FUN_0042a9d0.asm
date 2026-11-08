; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042a9d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_vertexCount_005b7f1e+1
;   TerminatedCString s_chainLength_005b7f2b
;   TerminatedCString s_target_005b7f37
;   TerminatedCString s_targetBone_005b7f3e
;   TerminatedCString s_weight_005b7f49
;   TerminatedCString s_dampen_005b7f50
;   TerminatedCString s_friction_005b7f57
;   TerminatedCString s_gravity_005b7f60
;   TerminatedCString s_textureName_005b7f68
;   TerminatedCString s_pullWavName_005b7f74
;   TerminatedCString s_moveWavName_005b7f80
;   TerminatedCString s_groundCollideFlag_005b7f8c
;   undefined4 DAT_005f0efc
;
; Called Functions:
;   FUN_0040b680
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040b930
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a9d0
        ;   Label: FUN_0042a9d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042a9d1
    PUSH EBX                            ; 0042a9d5
    CALL FUN_0040c280                   ; 0042a9d6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 0042a9db
    PUSH 0x5b7f1f                       ; 0042a9de | s_vertexCount_005b7f1e+1
    LEA EAX,[EBX + 0x158]               ; 0042a9e3
    PUSH EAX                            ; 0042a9e9
    CALL FUN_0040b8b0                   ; 0042a9ea
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0042a9ef
    PUSH 0x5b7f2b                       ; 0042a9f2 | = "chainLength"
    LEA EAX,[EBX + 0x15c]               ; 0042a9f7
    PUSH EAX                            ; 0042a9fd
    CALL FUN_0040b830                   ; 0042a9fe
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0042aa03
    PUSH 0x5b7f37                       ; 0042aa06 | = "target"
    LEA EAX,[EBX + 0x164]               ; 0042aa0b
    PUSH EAX                            ; 0042aa11
    CALL FUN_0040b930                   ; 0042aa12
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b930()
    ADD ESP,0x8                         ; 0042aa17
    PUSH 0x5b7f3e                       ; 0042aa1a | = "targetBone"
    LEA EAX,[EBX + 0x168]               ; 0042aa1f
    PUSH EAX                            ; 0042aa25
    CALL FUN_0040b8b0                   ; 0042aa26
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0042aa2b
    PUSH 0x5b7f49                       ; 0042aa2e | = "weight"
    LEA EAX,[EBX + 0x55c]               ; 0042aa33
    PUSH EAX                            ; 0042aa39
    CALL FUN_0040b830                   ; 0042aa3a
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0042aa3f
    PUSH 0x5b7f50                       ; 0042aa42 | = "dampen"
    LEA EAX,[EBX + 0x568]               ; 0042aa47
    PUSH EAX                            ; 0042aa4d
    CALL FUN_0040b830                   ; 0042aa4e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0042aa53
    PUSH 0x5b7f57                       ; 0042aa56 | = "friction"
    LEA EAX,[EBX + 0x560]               ; 0042aa5b
    PUSH EAX                            ; 0042aa61
    CALL FUN_0040b830                   ; 0042aa62
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0042aa67
    PUSH 0x5b7f60                       ; 0042aa6a | = "gravity"
    LEA EAX,[EBX + 0x564]               ; 0042aa6f
    PUSH EAX                            ; 0042aa75
    CALL FUN_0040b830                   ; 0042aa76
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    MOV EDX,dword ptr [0x005f0efc]      ; 0042aa7b | DAT_005f0efc
    ADD ESP,0x8                         ; 0042aa81
    CMP EDX,0x2                         ; 0042aa84
    JGE 0x0042aac5                      ; 0042aa87
        ;   XREF to: 0042aac5 (CONDITIONAL_JUMP)  ; LAB_0042aac5
    CMP dword ptr [0x005f0efc],0x3      ; 0042aa89 | DAT_005f0efc
        ;   Label: LAB_0042aa89
    JL 0x0042aaba                       ; 0042aa90
        ;   XREF to: 0042aaba (CONDITIONAL_JUMP)  ; LAB_0042aaba
    PUSH 0x5b7f74                       ; 0042aa92 | = "pullWavName"
    LEA EAX,[EBX + 0x1b4]               ; 0042aa97
    PUSH EAX                            ; 0042aa9d
    CALL FUN_0040b680                   ; 0042aa9e
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0042aaa3
    PUSH 0x5b7f80                       ; 0042aaa6 | = "moveWavName"
    LEA EAX,[EBX + 0x21c]               ; 0042aaab
    PUSH EAX                            ; 0042aab1
    CALL FUN_0040b680                   ; 0042aab2
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0042aab7
    CMP dword ptr [0x005f0efc],0x4      ; 0042aaba | DAT_005f0efc
        ;   Label: LAB_0042aaba
    JGE 0x0042aadb                      ; 0042aac1
        ;   XREF to: 0042aadb (CONDITIONAL_JUMP)  ; LAB_0042aadb
    POP EBX                             ; 0042aac3
    RET                                 ; 0042aac4
    PUSH 0x5b7f68                       ; 0042aac5 | = "textureName"
        ;   Label: LAB_0042aac5
    LEA EAX,[EBX + 0x174]               ; 0042aaca
    PUSH EAX                            ; 0042aad0
    CALL FUN_0040b680                   ; 0042aad1
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0042aad6
    JMP 0x0042aa89                      ; 0042aad9
        ;   XREF to: 0042aa89 (UNCONDITIONAL_JUMP)  ; LAB_0042aa89
    PUSH 0x5b7f8c                       ; 0042aadb | = "groundCollideFlag"
        ;   Label: LAB_0042aadb
    ADD EBX,0x288                       ; 0042aae0
    PUSH EBX                            ; 0042aae6
    CALL FUN_0040b8b0                   ; 0042aae7
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0042aaec
    POP EBX                             ; 0042aaef
    RET                                 ; 0042aaf0

