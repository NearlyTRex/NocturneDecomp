; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ladder_cpp_CLadder_archive_FUN_005029c0(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_model_00630e38
;   TerminatedCString s_ladderSize_00630e3e
;   TerminatedCString s_masterActor_00630e49
;   TerminatedCString s_groundType_00630e55
;   int g_CLadderClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_archiveVector_FUN_0040b340
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;   core_ladder.cpp_CLadder_FUN_00502b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005029c0
        ;   Label: core_ladder.cpp_CLadder_archive_FUN_005029c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005029c1
    PUSH EBX                            ; 005029c5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 005029c6
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005029cb
    PUSH 0x630e38                       ; 005029ce | = "model"
    LEA EAX,[EBX + 0x158]               ; 005029d3
    PUSH EAX                            ; 005029d9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0 ; 005029da
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005029df
    PUSH 0x630e3e                       ; 005029e2 | = "ladderSize"
    LEA EAX,[EBX + 0x2d4]               ; 005029e7
    PUSH EAX                            ; 005029ed
    CALL core_actor.cpp_archiveVector_FUN_0040b340 ; 005029ee
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 005029f3
    PUSH 0x630e49                       ; 005029f6 | = "masterActor"
    LEA EAX,[EBX + 0x2e0]               ; 005029fb
    PUSH EAX                            ; 00502a01
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 00502a02
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00502a07
    PUSH EBX                            ; 00502a0a
    CALL core_ladder.cpp_CLadder_FUN_00502b80 ; 00502a0b
        ;   XREF to: 00502b80 (UNCONDITIONAL_CALL)  ; void core_ladder.cpp_CLadder_FUN_00502b80(CLadder * this_ptr)
    MOV EDX,dword ptr [0x0067cf48]      ; 00502a10 | g_CLadderClassVersion
    ADD ESP,0x4                         ; 00502a16
    CMP EDX,0x2                         ; 00502a19
    JGE 0x00502a20                      ; 00502a1c
        ;   XREF to: 00502a20 (CONDITIONAL_JUMP)  ; LAB_00502a20
    POP EBX                             ; 00502a1e
    RET                                 ; 00502a1f
    PUSH 0x630e55                       ; 00502a20 | = "groundType"
        ;   Label: LAB_00502a20
    ADD EBX,0x2fc                       ; 00502a25
    PUSH EBX                            ; 00502a2b
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00502a2c
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00502a31
    POP EBX                             ; 00502a34
    RET                                 ; 00502a35

