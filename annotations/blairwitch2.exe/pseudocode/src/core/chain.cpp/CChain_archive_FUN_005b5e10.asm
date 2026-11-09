; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_chain_cpp_CChain_archive_FUN_005b5e10(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_vertexCount_005f144f+1
;   TerminatedCString s_chainLength_005f145c
;   TerminatedCString s_target_005f1468
;   TerminatedCString s_targetBone_005f146f
;   TerminatedCString s_weight_005f147a
;   TerminatedCString s_dampen_005f1481
;   TerminatedCString s_friction_005f1488
;   TerminatedCString s_gravity_005f1491
;   TerminatedCString s_textureName_005f1499
;   TerminatedCString s_pullWavName_005f14a5
;   TerminatedCString s_moveWavName_005f14b1
;   TerminatedCString s_groundCollideFlag_005f14bd
;   int g_CChainClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b5e10
        ;   Label: core_chain.cpp_CChain_archive_FUN_005b5e10
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b5e11
    PUSH EBX                            ; 005b5e15
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 005b5e16
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005b5e1b
    PUSH 0x5f1450                       ; 005b5e1e | s_vertexCount_005f144f+1
    LEA EAX,[EBX + 0x158]               ; 005b5e23
    PUSH EAX                            ; 005b5e29
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 005b5e2a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b5e2f
    PUSH 0x5f145c                       ; 005b5e32 | = "chainLength"
    LEA EAX,[EBX + 0x15c]               ; 005b5e37
    PUSH EAX                            ; 005b5e3d
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005b5e3e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 005b5e43
    PUSH 0x5f1468                       ; 005b5e46 | = "target"
    LEA EAX,[EBX + 0x164]               ; 005b5e4b
    PUSH EAX                            ; 005b5e51
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 005b5e52
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 005b5e57
    PUSH 0x5f146f                       ; 005b5e5a | = "targetBone"
    LEA EAX,[EBX + 0x168]               ; 005b5e5f
    PUSH EAX                            ; 005b5e65
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 005b5e66
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b5e6b
    PUSH 0x5f147a                       ; 005b5e6e | = "weight"
    LEA EAX,[EBX + 0x55c]               ; 005b5e73
    PUSH EAX                            ; 005b5e79
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005b5e7a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 005b5e7f
    PUSH 0x5f1481                       ; 005b5e82 | = "dampen"
    LEA EAX,[EBX + 0x568]               ; 005b5e87
    PUSH EAX                            ; 005b5e8d
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005b5e8e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 005b5e93
    PUSH 0x5f1488                       ; 005b5e96 | = "friction"
    LEA EAX,[EBX + 0x560]               ; 005b5e9b
    PUSH EAX                            ; 005b5ea1
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005b5ea2
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 005b5ea7
    PUSH 0x5f1491                       ; 005b5eaa | = "gravity"
    LEA EAX,[EBX + 0x564]               ; 005b5eaf
    PUSH EAX                            ; 005b5eb5
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005b5eb6
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    MOV EDX,dword ptr [0x0061ed58]      ; 005b5ebb | g_CChainClassVersion
    ADD ESP,0x8                         ; 005b5ec1
    CMP EDX,0x2                         ; 005b5ec4
    JGE 0x005b5f05                      ; 005b5ec7
        ;   XREF to: 005b5f05 (CONDITIONAL_JUMP)  ; LAB_005b5f05
    CMP dword ptr [0x0061ed58],0x3      ; 005b5ec9 | g_CChainClassVersion
        ;   Label: LAB_005b5ec9
    JL 0x005b5efa                       ; 005b5ed0
        ;   XREF to: 005b5efa (CONDITIONAL_JUMP)  ; LAB_005b5efa
    PUSH 0x5f14a5                       ; 005b5ed2 | = "pullWavName"
    LEA EAX,[EBX + 0x1b4]               ; 005b5ed7
    PUSH EAX                            ; 005b5edd
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005b5ede
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005b5ee3
    PUSH 0x5f14b1                       ; 005b5ee6 | = "moveWavName"
    LEA EAX,[EBX + 0x21c]               ; 005b5eeb
    PUSH EAX                            ; 005b5ef1
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005b5ef2
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005b5ef7
    CMP dword ptr [0x0061ed58],0x4      ; 005b5efa | g_CChainClassVersion
        ;   Label: LAB_005b5efa
    JGE 0x005b5f1b                      ; 005b5f01
        ;   XREF to: 005b5f1b (CONDITIONAL_JUMP)  ; LAB_005b5f1b
    POP EBX                             ; 005b5f03
    RET                                 ; 005b5f04
    PUSH 0x5f1499                       ; 005b5f05 | = "textureName"
        ;   Label: LAB_005b5f05
    LEA EAX,[EBX + 0x174]               ; 005b5f0a
    PUSH EAX                            ; 005b5f10
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005b5f11
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005b5f16
    JMP 0x005b5ec9                      ; 005b5f19
        ;   XREF to: 005b5ec9 (UNCONDITIONAL_JUMP)  ; LAB_005b5ec9
    PUSH 0x5f14bd                       ; 005b5f1b | = "groundCollideFlag"
        ;   Label: LAB_005b5f1b
    ADD EBX,0x288                       ; 005b5f20
    PUSH EBX                            ; 005b5f26
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 005b5f27
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b5f2c
    POP EBX                             ; 005b5f2f
    RET                                 ; 005b5f30

