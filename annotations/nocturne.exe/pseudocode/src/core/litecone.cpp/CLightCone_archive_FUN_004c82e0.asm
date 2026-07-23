; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_litecone_cpp_CLightCone_archive_FUN_004c82e0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_fov_00587ae5
;   string s_falloff_00587ae9
;   string s_state_00587af1
;   string s_onEvent_00587af7
;   string s_offEvent_00587aff
;   undefined4 DAT_005bacf8
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c82e0
        ;   Label: core_litecone.cpp_CLightCone_archive_FUN_004c82e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c82e1
    PUSH EBX                            ; 004c82e5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004c82e6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 004c82eb
    PUSH 0x587ae5                       ; 004c82ee | = "fov"
    LEA EAX,[EBX + 0x150]               ; 004c82f3
    PUSH EAX                            ; 004c82f9
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004c82fa
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004c82ff
    PUSH 0x587ae9                       ; 004c8302 | = "falloff"
    LEA EAX,[EBX + 0x154]               ; 004c8307
    PUSH EAX                            ; 004c830d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004c830e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    MOV EDX,dword ptr [0x005bacf8]      ; 004c8313 | DAT_005bacf8
    ADD ESP,0x8                         ; 004c8319
    CMP EDX,0x2                         ; 004c831c
    JGE 0x004c8323                      ; 004c831f
        ;   XREF to: 004c8323 (CONDITIONAL_JUMP)  ; LAB_004c8323
    POP EBX                             ; 004c8321
    RET                                 ; 004c8322
    PUSH 0x587af1                       ; 004c8323 | = "state"
        ;   Label: LAB_004c8323
    LEA EAX,[EBX + 0x158]               ; 004c8328
    PUSH EAX                            ; 004c832e
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004c832f
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004c8334
    PUSH 0x587af7                       ; 004c8337 | = "onEvent"
    LEA EAX,[EBX + 0x15c]               ; 004c833c
    PUSH EAX                            ; 004c8342
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004c8343
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004c8348
    PUSH 0x587aff                       ; 004c834b | = "offEvent"
    ADD EBX,0x1c0                       ; 004c8350
    PUSH EBX                            ; 004c8356
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004c8357
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004c835c
    POP EBX                             ; 004c835f
    RET                                 ; 004c8360

