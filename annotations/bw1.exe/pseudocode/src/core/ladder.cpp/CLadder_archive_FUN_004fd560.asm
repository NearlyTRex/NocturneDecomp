; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_archive_FUN_004fd560(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_model_005e6b83
;   TerminatedCString s_ladderSize_005e6b89
;   TerminatedCString s_masterActor_005e6b94
;   TerminatedCString s_groundType_005e6ba0
;   int g_CLadderClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;   core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004fd750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd560
        ;   Label: core_ladder.cpp_CLadder_archive_FUN_004fd560
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fd561
    PUSH EBX                            ; 004fd565
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004fd566
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fd56b
    PUSH 0x5e6b83                       ; 004fd56e | = "model"
    LEA EAX,[EBX + 0x158]               ; 004fd573
    PUSH EAX                            ; 004fd579
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 004fd57a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770()
    ADD ESP,0x8                         ; 004fd57f
    PUSH 0x5e6b89                       ; 004fd582 | = "ladderSize"
    LEA EAX,[EBX + 0x2d4]               ; 004fd587
    PUSH EAX                            ; 004fd58d
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 004fd58e
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 004fd593
    PUSH 0x5e6b94                       ; 004fd596 | = "masterActor"
    LEA EAX,[EBX + 0x2e0]               ; 004fd59b
    PUSH EAX                            ; 004fd5a1
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004fd5a2
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 004fd5a7
    PUSH EBX                            ; 004fd5aa
    CALL core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004fd750 ; 004fd5ab
        ;   XREF to: 004fd750 (UNCONDITIONAL_CALL)  ; void core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004fd750(CLadder * this_ptr)
    MOV EDX,dword ptr [0x0061f2a8]      ; 004fd5b0 | g_CLadderClassVersion
    ADD ESP,0x4                         ; 004fd5b6
    CMP EDX,0x2                         ; 004fd5b9
    JGE 0x004fd5c0                      ; 004fd5bc
        ;   XREF to: 004fd5c0 (CONDITIONAL_JUMP)  ; LAB_004fd5c0
    POP EBX                             ; 004fd5be
    RET                                 ; 004fd5bf
    PUSH 0x5e6ba0                       ; 004fd5c0 | = "groundType"
        ;   Label: LAB_004fd5c0
    ADD EBX,0x2fc                       ; 004fd5c5
    PUSH EBX                            ; 004fd5cb
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004fd5cc
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004fd5d1
    POP EBX                             ; 004fd5d4
    RET                                 ; 004fd5d5

