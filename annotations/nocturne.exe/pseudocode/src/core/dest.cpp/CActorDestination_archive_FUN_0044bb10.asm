; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0044bb10(int param_1)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_archive_FUN_004822c0 at 004822c6
;
; Referenced Globals:
;   TerminatedCString s_whoGoesHere_0057be1f
;   TerminatedCString s_whatEvent_0057be2b
;   TerminatedCString s_destActor_0057be35
;   TerminatedCString s_destClass_0057be3f
;   TerminatedCString s_persistantEventFlag_0057be49
;   undefined4 DAT_005ad4bc
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bb10
        ;   Label: core_dest.cpp_CActorDestination_archive_FUN_0044bb10
    SUB ESP,0x100                       ; 0044bb11
    MOV EBX,dword ptr [ESP + 0x108]     ; 0044bb17
    PUSH EBX                            ; 0044bb1e
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0044bb1f
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    MOV EDX,dword ptr [0x005ad4bc]      ; 0044bb24 | DAT_005ad4bc
    ADD ESP,0x4                         ; 0044bb2a
    CMP EDX,0x2                         ; 0044bb2d
    JL 0x0044bb93                       ; 0044bb30
        ;   XREF to: 0044bb93 (CONDITIONAL_JUMP)  ; LAB_0044bb93
    PUSH 0x57be2b                       ; 0044bb32 | = "whatEvent"
        ;   Label: LAB_0044bb32
    LEA EAX,[EBX + 0x180]               ; 0044bb37
    PUSH EAX                            ; 0044bb3d
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0044bb3e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    MOV ECX,dword ptr [0x005ad4bc]      ; 0044bb43 | DAT_005ad4bc
    ADD ESP,0x8                         ; 0044bb49
    CMP ECX,0x2                         ; 0044bb4c
    JL 0x0044bb65                       ; 0044bb4f
        ;   XREF to: 0044bb65 (CONDITIONAL_JUMP)  ; LAB_0044bb65
    PUSH 0x57be35                       ; 0044bb51 | = "destActor"
    LEA EAX,[EBX + 0x150]               ; 0044bb56
    PUSH EAX                            ; 0044bb5c
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0044bb5d
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0044bb62
    CMP dword ptr [0x005ad4bc],0x3      ; 0044bb65 | DAT_005ad4bc
        ;   Label: LAB_0044bb65
    JL 0x0044bb82                       ; 0044bb6c
        ;   XREF to: 0044bb82 (CONDITIONAL_JUMP)  ; LAB_0044bb82
    PUSH 0x57be3f                       ; 0044bb6e | = "destClass"
    LEA EAX,[EBX + 0x154]               ; 0044bb73
    PUSH EAX                            ; 0044bb79
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0044bb7a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0044bb7f
    CMP dword ptr [0x005ad4bc],0x4      ; 0044bb82 | DAT_005ad4bc
        ;   Label: LAB_0044bb82
    JGE 0x0044bbb1                      ; 0044bb89
        ;   XREF to: 0044bbb1 (CONDITIONAL_JUMP)  ; LAB_0044bbb1
    ADD ESP,0x100                       ; 0044bb8b
    POP EBX                             ; 0044bb91
    RET                                 ; 0044bb92
    PUSH 0x57be1f                       ; 0044bb93 | = "whoGoesHere"
        ;   Label: LAB_0044bb93
    LEA EAX,[ESP + 0x4]                 ; 0044bb98
    PUSH EAX                            ; 0044bb9c
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0044bb9d
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0044bba2
    MOV dword ptr [EBX + 0x150],0x0     ; 0044bba5
    JMP 0x0044bb32                      ; 0044bbaf
        ;   XREF to: 0044bb32 (UNCONDITIONAL_JUMP)  ; LAB_0044bb32
    PUSH 0x57be49                       ; 0044bbb1 | = "persistantEventFlag"
        ;   Label: LAB_0044bbb1
    ADD EBX,0x1e4                       ; 0044bbb6
    PUSH EBX                            ; 0044bbbc
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0044bbbd
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0044bbc2
    ADD ESP,0x100                       ; 0044bbc5
    POP EBX                             ; 0044bbcb
    RET                                 ; 0044bbcc

