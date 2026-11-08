; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00436d50(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_vertexCount_005d603e+1
;   TerminatedCString s_chainLength_005d604b
;   TerminatedCString s_target_005d6057
;   TerminatedCString s_targetBone_005d605e
;   TerminatedCString s_weight_005d6069
;   TerminatedCString s_dampen_005d6070
;   TerminatedCString s_friction_005d6077
;   TerminatedCString s_gravity_005d6080
;   TerminatedCString s_textureName_005d6088
;   TerminatedCString s_pullWavName_005d6094
;   TerminatedCString s_moveWavName_005d60a0
;   TerminatedCString s_groundCollideFlag_005d60ac
;   undefined4 DAT_00610d10
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436d50
        ;   Label: FUN_00436d50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00436d51
    PUSH EBX                            ; 00436d55
    CALL FUN_0040c040                   ; 00436d56
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 00436d5b
    PUSH 0x5d603f                       ; 00436d5e | s_vertexCount_005d603e+1
    LEA EAX,[EBX + 0x158]               ; 00436d63
    PUSH EAX                            ; 00436d69
    CALL FUN_0040b670                   ; 00436d6a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00436d6f
    PUSH 0x5d604b                       ; 00436d72 | = "chainLength"
    LEA EAX,[EBX + 0x15c]               ; 00436d77
    PUSH EAX                            ; 00436d7d
    CALL FUN_0040b5f0                   ; 00436d7e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00436d83
    PUSH 0x5d6057                       ; 00436d86 | = "target"
    LEA EAX,[EBX + 0x164]               ; 00436d8b
    PUSH EAX                            ; 00436d91
    CALL FUN_0040b6f0                   ; 00436d92
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 00436d97
    PUSH 0x5d605e                       ; 00436d9a | = "targetBone"
    LEA EAX,[EBX + 0x168]               ; 00436d9f
    PUSH EAX                            ; 00436da5
    CALL FUN_0040b670                   ; 00436da6
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00436dab
    PUSH 0x5d6069                       ; 00436dae | = "weight"
    LEA EAX,[EBX + 0x55c]               ; 00436db3
    PUSH EAX                            ; 00436db9
    CALL FUN_0040b5f0                   ; 00436dba
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00436dbf
    PUSH 0x5d6070                       ; 00436dc2 | = "dampen"
    LEA EAX,[EBX + 0x568]               ; 00436dc7
    PUSH EAX                            ; 00436dcd
    CALL FUN_0040b5f0                   ; 00436dce
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00436dd3
    PUSH 0x5d6077                       ; 00436dd6 | = "friction"
    LEA EAX,[EBX + 0x560]               ; 00436ddb
    PUSH EAX                            ; 00436de1
    CALL FUN_0040b5f0                   ; 00436de2
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00436de7
    PUSH 0x5d6080                       ; 00436dea | = "gravity"
    LEA EAX,[EBX + 0x564]               ; 00436def
    PUSH EAX                            ; 00436df5
    CALL FUN_0040b5f0                   ; 00436df6
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    MOV EDX,dword ptr [0x00610d10]      ; 00436dfb | DAT_00610d10
    ADD ESP,0x8                         ; 00436e01
    CMP EDX,0x2                         ; 00436e04
    JGE 0x00436e45                      ; 00436e07
        ;   XREF to: 00436e45 (CONDITIONAL_JUMP)  ; LAB_00436e45
    CMP dword ptr [0x00610d10],0x3      ; 00436e09 | DAT_00610d10
        ;   Label: LAB_00436e09
    JL 0x00436e3a                       ; 00436e10
        ;   XREF to: 00436e3a (CONDITIONAL_JUMP)  ; LAB_00436e3a
    PUSH 0x5d6094                       ; 00436e12 | = "pullWavName"
    LEA EAX,[EBX + 0x1b4]               ; 00436e17
    PUSH EAX                            ; 00436e1d
    CALL FUN_0040b440                   ; 00436e1e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00436e23
    PUSH 0x5d60a0                       ; 00436e26 | = "moveWavName"
    LEA EAX,[EBX + 0x21c]               ; 00436e2b
    PUSH EAX                            ; 00436e31
    CALL FUN_0040b440                   ; 00436e32
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00436e37
    CMP dword ptr [0x00610d10],0x4      ; 00436e3a | DAT_00610d10
        ;   Label: LAB_00436e3a
    JGE 0x00436e5b                      ; 00436e41
        ;   XREF to: 00436e5b (CONDITIONAL_JUMP)  ; LAB_00436e5b
    POP EBX                             ; 00436e43
    RET                                 ; 00436e44
    PUSH 0x5d6088                       ; 00436e45 | = "textureName"
        ;   Label: LAB_00436e45
    LEA EAX,[EBX + 0x174]               ; 00436e4a
    PUSH EAX                            ; 00436e50
    CALL FUN_0040b440                   ; 00436e51
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00436e56
    JMP 0x00436e09                      ; 00436e59
        ;   XREF to: 00436e09 (UNCONDITIONAL_JUMP)  ; LAB_00436e09
    PUSH 0x5d60ac                       ; 00436e5b | = "groundCollideFlag"
        ;   Label: LAB_00436e5b
    ADD EBX,0x288                       ; 00436e60
    PUSH EBX                            ; 00436e66
    CALL FUN_0040b670                   ; 00436e67
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00436e6c
    POP EBX                             ; 00436e6f
    RET                                 ; 00436e70

