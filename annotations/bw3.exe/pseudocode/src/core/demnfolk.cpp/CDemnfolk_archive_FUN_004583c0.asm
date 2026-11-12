; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_demnfolk_cpp_CDemnfolk_archive_FUN_004583c0(CDemnfolk *this_ptr)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005ba843
;   TerminatedCString s_modelName_005ba849
;   TerminatedCString s_guardDistance_005ba853
;   TerminatedCString s_motion_state_005ba861
;   TerminatedCString s_partStatus_005ba86e
;   TerminatedCString s_carriedActor_005ba879
;   TerminatedCString s_riseFromGraveCondition_005ba886
;   TerminatedCString s_graveActor_005ba89d
;   TerminatedCString s_clothList_005ba8a8
;   TerminatedCString s_isMinerZombie_005ba8b2
;   TerminatedCString s_alwaysChaseFast_005ba8c0
;   TerminatedCString s_isIndoorDemon_005ba8d0
;   int g_CDemnfolkClassVersion = 0xc
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveClothList_FUN_0040bf20
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_actor.cpp_archivePartStatus_FUN_0040bba0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004583c0
        ;   Label: core_demnfolk.cpp_CDemnfolk_archive_FUN_004583c0
    PUSH EDI                            ; 004583c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004583c2
    PUSH EBX                            ; 004583c6
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 004583c7
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004583cc
    PUSH 0x5ba843                       ; 004583cf | = "speed"
    LEA EAX,[EBX + 0xcdcc]              ; 004583d4
    PUSH EAX                            ; 004583da
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004583db
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004583e0
    PUSH 0x5ba849                       ; 004583e3 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 004583e8
    PUSH EAX                            ; 004583ee
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 004583ef
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x005f1864]      ; 004583f4 | g_CDemnfolkClassVersion
    ADD ESP,0x8                         ; 004583fa
    CMP EDX,0x2                         ; 004583fd
    JL 0x0045842f                       ; 00458400
        ;   XREF to: 0045842f (CONDITIONAL_JUMP)  ; LAB_0045842f
    CMP EDX,0xb                         ; 00458402
    JGE 0x0045841b                      ; 00458405
        ;   XREF to: 0045841b (CONDITIONAL_JUMP)  ; LAB_0045841b
    PUSH 0x5ba853                       ; 00458407 | = "guardDistance"
    LEA EAX,[EBX + 0xcddc]              ; 0045840c
    PUSH EAX                            ; 00458412
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00458413
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00458418
    PUSH 0x5ba861                       ; 0045841b | = "motion state"
        ;   Label: LAB_0045841b
    LEA EAX,[EBX + 0x158]               ; 00458420
    PUSH EAX                            ; 00458426
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 00458427
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0045842c
    CMP dword ptr [0x005f1864],0x3      ; 0045842f | g_CDemnfolkClassVersion
        ;   Label: LAB_0045842f
    JL 0x0045846b                       ; 00458436
        ;   XREF to: 0045846b (CONDITIONAL_JUMP)  ; LAB_0045846b
    PUSH 0x5ba86e                       ; 00458438 | = "partStatus"
    LEA EAX,[EBX + 0x158]               ; 0045843d
    PUSH EAX                            ; 00458443
    CALL core_actor.cpp_archivePartStatus_FUN_0040bba0 ; 00458444
        ;   XREF to: 0040bba0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bba0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDI,dword ptr [0x005f1864]      ; 00458449 | g_CDemnfolkClassVersion
    ADD ESP,0x8                         ; 0045844f
    CMP EDI,0x7                         ; 00458452
    JGE 0x0045846b                      ; 00458455
        ;   XREF to: 0045846b (CONDITIONAL_JUMP)  ; LAB_0045846b
    PUSH 0x5ba879                       ; 00458457 | = "carriedActor"
    LEA EAX,[EBX + 0x2628]              ; 0045845c
    PUSH EAX                            ; 00458462
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00458463
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00458468
    CMP dword ptr [0x005f1864],0x4      ; 0045846b | g_CDemnfolkClassVersion
        ;   Label: LAB_0045846b
    JL 0x00458488                       ; 00458472
        ;   XREF to: 00458488 (CONDITIONAL_JUMP)  ; LAB_00458488
    PUSH 0x5ba886                       ; 00458474 | = "riseFromGraveCondition"
    LEA EAX,[EBX + 0xd074]              ; 00458479
    PUSH EAX                            ; 0045847f
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00458480
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00458485
    CMP dword ptr [0x005f1864],0x5      ; 00458488 | g_CDemnfolkClassVersion
        ;   Label: LAB_00458488
    JL 0x004584a5                       ; 0045848f
        ;   XREF to: 004584a5 (CONDITIONAL_JUMP)  ; LAB_004584a5
    PUSH 0x5ba89d                       ; 00458491 | = "graveActor"
    LEA EAX,[EBX + 0xd06c]              ; 00458496
    PUSH EAX                            ; 0045849c
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0045849d
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 004584a2
    MOV EDX,dword ptr [0x005f1864]      ; 004584a5 | g_CDemnfolkClassVersion
        ;   Label: LAB_004584a5
    CMP EDX,0x6                         ; 004584ab
    JL 0x004584c9                       ; 004584ae
        ;   XREF to: 004584c9 (CONDITIONAL_JUMP)  ; LAB_004584c9
    CMP EDX,0x9                         ; 004584b0
    JGE 0x004584c9                      ; 004584b3
        ;   XREF to: 004584c9 (CONDITIONAL_JUMP)  ; LAB_004584c9
    PUSH 0x5ba8a8                       ; 004584b5 | = "clothList"
    LEA EAX,[EBX + 0x2f08]              ; 004584ba
    PUSH EAX                            ; 004584c0
    CALL core_actor.cpp_archiveClothList_FUN_0040bf20 ; 004584c1
        ;   XREF to: 0040bf20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveClothList_FUN_0040bf20()
    ADD ESP,0x8                         ; 004584c6
    CMP dword ptr [0x005f1864],0x8      ; 004584c9 | g_CDemnfolkClassVersion
        ;   Label: LAB_004584c9
    JL 0x004584e6                       ; 004584d0
        ;   XREF to: 004584e6 (CONDITIONAL_JUMP)  ; LAB_004584e6
    PUSH 0x5ba8b2                       ; 004584d2 | = "isMinerZombie"
    LEA EAX,[EBX + 0xd0d8]              ; 004584d7
    PUSH EAX                            ; 004584dd
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004584de
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004584e3
    CMP dword ptr [0x005f1864],0xa      ; 004584e6 | g_CDemnfolkClassVersion
        ;   Label: LAB_004584e6
    JL 0x00458503                       ; 004584ed
        ;   XREF to: 00458503 (CONDITIONAL_JUMP)  ; LAB_00458503
    PUSH 0x5ba8c0                       ; 004584ef | = "alwaysChaseFast"
    LEA EAX,[EBX + 0xd0e0]              ; 004584f4
    PUSH EAX                            ; 004584fa
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004584fb
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00458500
    CMP dword ptr [0x005f1864],0xc      ; 00458503 | g_CDemnfolkClassVersion
        ;   Label: LAB_00458503
    JGE 0x0045850f                      ; 0045850a
        ;   XREF to: 0045850f (CONDITIONAL_JUMP)  ; LAB_0045850f
    POP EDI                             ; 0045850c
    POP EBX                             ; 0045850d
    RET                                 ; 0045850e
    PUSH 0x5ba8d0                       ; 0045850f | = "isIndoorDemon"
        ;   Label: LAB_0045850f
    ADD EBX,0xd0dc                      ; 00458514
    PUSH EBX                            ; 0045851a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0045851b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00458520
    POP EDI                             ; 00458523
    POP EBX                             ; 00458524
    RET                                 ; 00458525

