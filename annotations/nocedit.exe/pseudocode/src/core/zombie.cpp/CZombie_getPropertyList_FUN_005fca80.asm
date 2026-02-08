; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_zombie_cpp_CZombie_getPropertyList_FUN_005fca80 (CZombie *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_00658a4f
;   TerminatedCString s_State_00658a55
;   TerminatedCString s_RiseFromGraveCondition_00658a5b
;   TerminatedCString s_CGrave_00658a72
;   TerminatedCString s_Grave_actor_00658a79
;   TerminatedCString s_IsMinerZombie_00658a85
;   TerminatedCString s_CHASE_2_00658a93
;   TerminatedCString s_Always_fast_00658a9b
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fca80
        ;   Label: core_zombie.cpp_CZombie_getPropertyList_FUN_005fca80
    PUSH ESI                            ; 005fca81
    PUSH EDI                            ; 005fca82
    MOV EBX,dword ptr [ESP + 0x10]      ; 005fca83
    MOV ESI,dword ptr [ESP + 0x14]      ; 005fca87
    PUSH ESI                            ; 005fca8b
    PUSH EBX                            ; 005fca8c
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 005fca8d
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005fca92
    PUSH 0x0                            ; 005fca95
    LEA EDI,[EBX + 0x158]               ; 005fca97
    PUSH EDI                            ; 005fca9d
    PUSH 0x658a4f                       ; 005fca9e | = "Model"
    PUSH ESI                            ; 005fcaa3
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 005fcaa4
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 005fcaa9
    PUSH EDI                            ; 005fcaac
    PUSH 0x658a55                       ; 005fcaad | = "State"
    PUSH ESI                            ; 005fcab2
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 005fcab3
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 005fcab8
    PUSH EDI                            ; 005fcabb
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005fcabc
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005fcac1
    ADD ESP,0x4                         ; 005fcac4
    CMP EAX,0xe                         ; 005fcac7
    JNZ 0x005fcaff                      ; 005fcaca
        ;   XREF to: 005fcaff (CONDITIONAL_JUMP)  ; LAB_005fcaff
    LEA EAX,[EBX + 0xbedc]              ; 005fcacc
    PUSH EAX                            ; 005fcad2
    PUSH 0x658a5b                       ; 005fcad3 | = "RiseFromGraveCondition"
    PUSH ESI                            ; 005fcad8
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 005fcad9
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 005fcade
    PUSH 0x0                            ; 005fcae1
    PUSH 0x658a72                       ; 005fcae3 | = "CGrave"
    PUSH 0x0                            ; 005fcae8
    LEA EAX,[EBX + 0xbed4]              ; 005fcaea
    PUSH EAX                            ; 005fcaf0
    PUSH 0x658a79                       ; 005fcaf1 | = "Grave actor"
    PUSH ESI                            ; 005fcaf6
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005fcaf7
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005fcafc
    LEA EAX,[EBX + 0xbf40]              ; 005fcaff
        ;   Label: LAB_005fcaff
    PUSH EAX                            ; 005fcb05
    PUSH 0x658a85                       ; 005fcb06 | = "IsMinerZombie"
    PUSH ESI                            ; 005fcb0b
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 005fcb0c
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 005fcb11
    PUSH 0x0                            ; 005fcb14
    PUSH 0x658a93                       ; 005fcb16 | = "CHASE_2"
    LEA EAX,[EBX + 0x158]               ; 005fcb1b
    PUSH EAX                            ; 005fcb21
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 005fcb22
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005fcb27
    PUSH EAX                            ; 005fcb2a
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 005fcb2b
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 005fcb30
    CMP EAX,0x16                        ; 005fcb33
    JZ 0x005fcb3c                       ; 005fcb36
        ;   XREF to: 005fcb3c (CONDITIONAL_JUMP)  ; LAB_005fcb3c
    POP EDI                             ; 005fcb38
    POP ESI                             ; 005fcb39
    POP EBX                             ; 005fcb3a
    RET                                 ; 005fcb3b
    ADD EBX,0xbf44                      ; 005fcb3c
        ;   Label: LAB_005fcb3c
    PUSH EBX                            ; 005fcb42
    PUSH 0x658a9b                       ; 005fcb43 | = "Always fast"
    PUSH ESI                            ; 005fcb48
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 005fcb49
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 005fcb4e
    POP EDI                             ; 005fcb51
    POP ESI                             ; 005fcb52
    POP EBX                             ; 005fcb53
    RET                                 ; 005fcb54

