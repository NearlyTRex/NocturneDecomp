; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_backgnd_cpp_FUN_0040f4d0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005cb3cc
;   TerminatedCString s_collideWithMe_005cb3d6
;   TerminatedCString s_groundType_005cb3e4
;   TerminatedCString s_castShadowsFlag_005cb3ef
;   int g_CBackgroundActorClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f4d0
        ;   Label: core_backgnd.cpp_FUN_0040f4d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f4d1
    PUSH EBX                            ; 0040f4d5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 0040f4d6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f4db
    PUSH 0x5cb3cc                       ; 0040f4de | = "modelName"
    LEA EAX,[EBX + 0x2b8]               ; 0040f4e3
    PUSH EAX                            ; 0040f4e9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 0040f4ea
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 0040f4ef
    PUSH 0x5cb3d6                       ; 0040f4f2 | = "collideWithMe"
    LEA EAX,[EBX + 0x434]               ; 0040f4f7
    PUSH EAX                            ; 0040f4fd
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0040f4fe
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x006097f0]      ; 0040f503 | g_CBackgroundActorClassVersion
    ADD ESP,0x8                         ; 0040f509
    CMP EDX,0x2                         ; 0040f50c
    JGE 0x0040f51c                      ; 0040f50f
        ;   XREF to: 0040f51c (CONDITIONAL_JUMP)  ; LAB_0040f51c
    CMP dword ptr [0x006097f0],0x3      ; 0040f511 | g_CBackgroundActorClassVersion
    JGE 0x0040f53b                      ; 0040f518
        ;   XREF to: 0040f53b (CONDITIONAL_JUMP)  ; LAB_0040f53b
    POP EBX                             ; 0040f51a
    RET                                 ; 0040f51b
    PUSH 0x5cb3e4                       ; 0040f51c | = "groundType"
        ;   Label: LAB_0040f51c
    LEA EAX,[EBX + 0x438]               ; 0040f521
    PUSH EAX                            ; 0040f527
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0040f528
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040f52d
    CMP dword ptr [0x006097f0],0x3      ; 0040f530 | g_CBackgroundActorClassVersion
    JGE 0x0040f53b                      ; 0040f537
        ;   XREF to: 0040f53b (CONDITIONAL_JUMP)  ; LAB_0040f53b
    POP EBX                             ; 0040f539
    RET                                 ; 0040f53a
    PUSH 0x5cb3ef                       ; 0040f53b | = "castShadowsFlag"
        ;   Label: LAB_0040f53b
    ADD EBX,0x2b4                       ; 0040f540
    PUSH EBX                            ; 0040f546
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0040f547
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040f54c
    POP EBX                             ; 0040f54f
    RET                                 ; 0040f550

