; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_archive_FUN_0051eb30(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005e9e99+1
;   TerminatedCString s_modelName_005e9ea0
;   TerminatedCString s_guardDistance_005e9eaa
;   TerminatedCString s_motion_state_005e9eb8
;   TerminatedCString s_clothList_005e9ec5
;   TerminatedCString s_postMode_005e9ecf
;   TerminatedCString s_ourPost_005e9ed8
;   TerminatedCString s_vehicle_005e9ee0
;   TerminatedCString s_sideOfCar_005e9ee8
;   TerminatedCString s_holdPosFlag_005e9ef2
;   TerminatedCString s_holdPosCond_005e9efe
;   int g_CMobsterClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveClothList_FUN_0040bce0
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051eb30
        ;   Label: core_mobster.cpp_CMobster_archive_FUN_0051eb30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051eb31
    PUSH EBX                            ; 0051eb35
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 0051eb36
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0051eb3b
    PUSH 0x5e9e9a                       ; 0051eb3e | s_speed_005e9e99+1
    LEA EAX,[EBX + 0xc1d0]              ; 0051eb43
    PUSH EAX                            ; 0051eb49
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0051eb4a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0051eb4f
    PUSH 0x5e9ea0                       ; 0051eb52 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0051eb57
    PUSH EAX                            ; 0051eb5d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 0051eb5e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0061f7c4]      ; 0051eb63 | g_CMobsterClassVersion
    ADD ESP,0x8                         ; 0051eb69
    CMP EDX,0x4                         ; 0051eb6c
    JL 0x0051ec15                       ; 0051eb6f
        ;   XREF to: 0051ec15 (CONDITIONAL_JUMP)  ; LAB_0051ec15
    PUSH 0x5e9eb8                       ; 0051eb75 | = "motion state"
        ;   Label: LAB_0051eb75
    LEA EAX,[EBX + 0x158]               ; 0051eb7a
    PUSH EAX                            ; 0051eb80
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 0051eb81
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    MOV ECX,dword ptr [0x0061f7c4]      ; 0051eb86 | g_CMobsterClassVersion
    ADD ESP,0x8                         ; 0051eb8c
    CMP ECX,0x2                         ; 0051eb8f
    JNZ 0x0051eba8                      ; 0051eb92
        ;   XREF to: 0051eba8 (CONDITIONAL_JUMP)  ; LAB_0051eba8
    PUSH 0x5e9ec5                       ; 0051eb94 | = "clothList"
    LEA EAX,[EBX + 0x2ca0]              ; 0051eb99
    PUSH EAX                            ; 0051eb9f
    CALL core_actor.cpp_archiveClothList_FUN_0040bce0 ; 0051eba0
        ;   XREF to: 0040bce0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveClothList_FUN_0040bce0(CClothList * cloth_list, char * property_name)
    ADD ESP,0x8                         ; 0051eba5
    CMP dword ptr [0x0061f7c4],0x5      ; 0051eba8 | g_CMobsterClassVersion
        ;   Label: LAB_0051eba8
    JL 0x0051ebd9                       ; 0051ebaf
        ;   XREF to: 0051ebd9 (CONDITIONAL_JUMP)  ; LAB_0051ebd9
    PUSH 0x5e9ecf                       ; 0051ebb1 | = "postMode"
    LEA EAX,[EBX + 0xc284]              ; 0051ebb6
    PUSH EAX                            ; 0051ebbc
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0051ebbd
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0051ebc2
    PUSH 0x5e9ed8                       ; 0051ebc5 | = "ourPost"
    LEA EAX,[EBX + 0xc288]              ; 0051ebca
    PUSH EAX                            ; 0051ebd0
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0051ebd1
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0051ebd6
    CMP dword ptr [0x0061f7c4],0x6      ; 0051ebd9 | g_CMobsterClassVersion
        ;   Label: LAB_0051ebd9
    JL 0x0051ec0a                       ; 0051ebe0
        ;   XREF to: 0051ec0a (CONDITIONAL_JUMP)  ; LAB_0051ec0a
    PUSH 0x5e9ee0                       ; 0051ebe2 | = "vehicle"
    LEA EAX,[EBX + 0xc28c]              ; 0051ebe7
    PUSH EAX                            ; 0051ebed
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0051ebee
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0051ebf3
    PUSH 0x5e9ee8                       ; 0051ebf6 | = "sideOfCar"
    LEA EAX,[EBX + 0xc290]              ; 0051ebfb
    PUSH EAX                            ; 0051ec01
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0051ec02
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0051ec07
    CMP dword ptr [0x0061f7c4],0x7      ; 0051ec0a | g_CMobsterClassVersion
        ;   Label: LAB_0051ec0a
    JGE 0x0051ec2e                      ; 0051ec11
        ;   XREF to: 0051ec2e (CONDITIONAL_JUMP)  ; LAB_0051ec2e
    POP EBX                             ; 0051ec13
    RET                                 ; 0051ec14
    PUSH 0x5e9eaa                       ; 0051ec15 | = "guardDistance"
        ;   Label: LAB_0051ec15
    LEA EAX,[EBX + 0xc1e0]              ; 0051ec1a
    PUSH EAX                            ; 0051ec20
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0051ec21
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0051ec26
    JMP 0x0051eb75                      ; 0051ec29
        ;   XREF to: 0051eb75 (UNCONDITIONAL_JUMP)  ; LAB_0051eb75
    PUSH 0x5e9ef2                       ; 0051ec2e | = "holdPosFlag"
        ;   Label: LAB_0051ec2e
    LEA EAX,[EBX + 0xc294]              ; 0051ec33
    PUSH EAX                            ; 0051ec39
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0051ec3a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0051ec3f
    PUSH 0x5e9efe                       ; 0051ec42 | = "holdPosCond"
    ADD EBX,0xc298                      ; 0051ec47
    PUSH EBX                            ; 0051ec4d
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0051ec4e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0051ec53
    POP EBX                             ; 0051ec56
    RET                                 ; 0051ec57

