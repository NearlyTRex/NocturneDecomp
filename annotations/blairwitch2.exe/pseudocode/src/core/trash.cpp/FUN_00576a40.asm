; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trash_cpp_FUN_00576a40(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005ecd1a
;   TerminatedCString s_homePos_005ecd24
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576a40
        ;   Label: core_trash.cpp_FUN_00576a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00576a41
    PUSH EBX                            ; 00576a45
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 00576a46
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00576a4b
    PUSH 0x5ecd1a                       ; 00576a4e | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 00576a53
    PUSH EAX                            ; 00576a59
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 00576a5a
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 00576a5f
    PUSH 0x5ecd24                       ; 00576a62 | = "homePos"
    LEA EAX,[EBX + 0x430]               ; 00576a67
    PUSH EAX                            ; 00576a6d
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 00576a6e
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 00576a73
    POP EBX                             ; 00576a76
    RET                                 ; 00576a77

