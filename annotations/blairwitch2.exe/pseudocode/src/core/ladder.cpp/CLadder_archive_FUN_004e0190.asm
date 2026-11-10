; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_archive_FUN_004e0190(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_model_005dbd75+1
;   TerminatedCString s_ladderSize_005dbd7c
;   TerminatedCString s_masterActor_005dbd87
;   TerminatedCString s_groundType_005dbd93
;   int g_CLadderClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;   core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004e0380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0190
        ;   Label: core_ladder.cpp_CLadder_archive_FUN_004e0190
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e0191
    PUSH EBX                            ; 004e0195
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 004e0196
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e019b
    PUSH 0x5dbd76                       ; 004e019e | s_model_005dbd75+1
    LEA EAX,[EBX + 0x2b4]               ; 004e01a3
    PUSH EAX                            ; 004e01a9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 004e01aa
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 004e01af
    PUSH 0x5dbd7c                       ; 004e01b2 | = "ladderSize"
    LEA EAX,[EBX + 0x430]               ; 004e01b7
    PUSH EAX                            ; 004e01bd
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 004e01be
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 004e01c3
    PUSH 0x5dbd87                       ; 004e01c6 | = "masterActor"
    LEA EAX,[EBX + 0x43c]               ; 004e01cb
    PUSH EAX                            ; 004e01d1
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004e01d2
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 004e01d7
    PUSH EBX                            ; 004e01da
    CALL core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004e0380 ; 004e01db
        ;   XREF to: 004e0380 (UNCONDITIONAL_CALL)  ; void core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004e0380(CLadder * this_ptr)
    MOV EDX,dword ptr [0x00617dd8]      ; 004e01e0 | g_CLadderClassVersion
    ADD ESP,0x4                         ; 004e01e6
    CMP EDX,0x2                         ; 004e01e9
    JGE 0x004e01f0                      ; 004e01ec
        ;   XREF to: 004e01f0 (CONDITIONAL_JUMP)  ; LAB_004e01f0
    POP EBX                             ; 004e01ee
    RET                                 ; 004e01ef
    PUSH 0x5dbd93                       ; 004e01f0 | = "groundType"
        ;   Label: LAB_004e01f0
    ADD EBX,0x458                       ; 004e01f5
    PUSH EBX                            ; 004e01fb
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004e01fc
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e0201
    POP EBX                             ; 004e0204
    RET                                 ; 004e0205

