; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_CChain_archive_FUN_0042cbc0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_vertexCount_0057a5a6
;   TerminatedCString s_chainLength_0057a5b2
;   TerminatedCString s_target_0057a5be
;   TerminatedCString s_targetBone_0057a5c5
;   TerminatedCString s_weight_0057a5d0
;   TerminatedCString s_dampen_0057a5d7
;   TerminatedCString s_friction_0057a5de
;   TerminatedCString s_gravity_0057a5e7
;   TerminatedCString s_textureName_0057a5ef
;   TerminatedCString s_pullWavName_0057a5fb
;   TerminatedCString s_moveWavName_0057a607
;   TerminatedCString s_groundCollideFlag_0057a613
;   int INT_005ad250 = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042cbc0
        ;   Label: core_chain.cpp_CChain_archive_FUN_0042cbc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042cbc1
    PUSH EBX                            ; 0042cbc5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0042cbc6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 0042cbcb
    PUSH 0x57a5a6                       ; 0042cbce | = "vertexCount"
    LEA EAX,[EBX + 0x150]               ; 0042cbd3
    PUSH EAX                            ; 0042cbd9
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0042cbda
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0042cbdf
    PUSH 0x57a5b2                       ; 0042cbe2 | = "chainLength"
    LEA EAX,[EBX + 0x154]               ; 0042cbe7
    PUSH EAX                            ; 0042cbed
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0042cbee
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0042cbf3
    PUSH 0x57a5be                       ; 0042cbf6 | = "target"
    LEA EAX,[EBX + 0x15c]               ; 0042cbfb
    PUSH EAX                            ; 0042cc01
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0042cc02
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0042cc07
    PUSH 0x57a5c5                       ; 0042cc0a | = "targetBone"
    LEA EAX,[EBX + 0x160]               ; 0042cc0f
    PUSH EAX                            ; 0042cc15
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0042cc16
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0042cc1b
    PUSH 0x57a5d0                       ; 0042cc1e | = "weight"
    LEA EAX,[EBX + 0x554]               ; 0042cc23
    PUSH EAX                            ; 0042cc29
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0042cc2a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0042cc2f
    PUSH 0x57a5d7                       ; 0042cc32 | = "dampen"
    LEA EAX,[EBX + 0x560]               ; 0042cc37
    PUSH EAX                            ; 0042cc3d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0042cc3e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0042cc43
    PUSH 0x57a5de                       ; 0042cc46 | = "friction"
    LEA EAX,[EBX + 0x558]               ; 0042cc4b
    PUSH EAX                            ; 0042cc51
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0042cc52
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0042cc57
    PUSH 0x57a5e7                       ; 0042cc5a | = "gravity"
    LEA EAX,[EBX + 0x55c]               ; 0042cc5f
    PUSH EAX                            ; 0042cc65
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0042cc66
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    MOV EDX,dword ptr [0x005ad250]      ; 0042cc6b | INT_005ad250
    ADD ESP,0x8                         ; 0042cc71
    CMP EDX,0x2                         ; 0042cc74
    JGE 0x0042ccb5                      ; 0042cc77
        ;   XREF to: 0042ccb5 (CONDITIONAL_JUMP)  ; LAB_0042ccb5
    CMP dword ptr [0x005ad250],0x3      ; 0042cc79 | INT_005ad250
        ;   Label: LAB_0042cc79
    JL 0x0042ccaa                       ; 0042cc80
        ;   XREF to: 0042ccaa (CONDITIONAL_JUMP)  ; LAB_0042ccaa
    PUSH 0x57a5fb                       ; 0042cc82 | = "pullWavName"
    LEA EAX,[EBX + 0x1ac]               ; 0042cc87
    PUSH EAX                            ; 0042cc8d
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0042cc8e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0042cc93
    PUSH 0x57a607                       ; 0042cc96 | = "moveWavName"
    LEA EAX,[EBX + 0x214]               ; 0042cc9b
    PUSH EAX                            ; 0042cca1
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0042cca2
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0042cca7
    CMP dword ptr [0x005ad250],0x4      ; 0042ccaa | INT_005ad250
        ;   Label: LAB_0042ccaa
    JGE 0x0042cccb                      ; 0042ccb1
        ;   XREF to: 0042cccb (CONDITIONAL_JUMP)  ; LAB_0042cccb
    POP EBX                             ; 0042ccb3
    RET                                 ; 0042ccb4
    PUSH 0x57a5ef                       ; 0042ccb5 | = "textureName"
        ;   Label: LAB_0042ccb5
    LEA EAX,[EBX + 0x16c]               ; 0042ccba
    PUSH EAX                            ; 0042ccc0
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0042ccc1
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0042ccc6
    JMP 0x0042cc79                      ; 0042ccc9
        ;   XREF to: 0042cc79 (UNCONDITIONAL_JUMP)  ; LAB_0042cc79
    PUSH 0x57a613                       ; 0042cccb | = "groundCollideFlag"
        ;   Label: LAB_0042cccb
    ADD EBX,0x280                       ; 0042ccd0
    PUSH EBX                            ; 0042ccd6
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0042ccd7
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0042ccdc
    POP EBX                             ; 0042ccdf
    RET                                 ; 0042cce0

