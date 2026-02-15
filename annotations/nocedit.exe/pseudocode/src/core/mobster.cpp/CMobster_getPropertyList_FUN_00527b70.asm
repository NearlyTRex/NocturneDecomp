; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_getPropertyList_FUN_00527b70(CMobster *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_00639a1a
;   TerminatedCString s_State_00639a20
;   TerminatedCString s_CWayPoint_00639a26
;   TerminatedCString s_Our_post_00639a30
;   TerminatedCString s_CVehicle_00639a39
;   TerminatedCString s_Our_car_00639a42
;   TerminatedCString s_Left_side_of_car_00639a4a
;   TerminatedCString s_Hold_pos_sniper_00639a5b
;   TerminatedCString s_Hold_pos_cond_sniper_00639a6d
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527b70
        ;   Label: core_mobster.cpp_CMobster_getPropertyList_FUN_00527b70
    PUSH ESI                            ; 00527b71
    PUSH EDI                            ; 00527b72
    MOV ESI,dword ptr [ESP + 0x10]      ; 00527b73
    MOV EBX,dword ptr [ESP + 0x14]      ; 00527b77
    PUSH EBX                            ; 00527b7b
    PUSH ESI                            ; 00527b7c
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 00527b7d
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00527b82
    PUSH 0x0                            ; 00527b85
    LEA EDI,[ESI + 0x158]               ; 00527b87
    PUSH EDI                            ; 00527b8d
    PUSH 0x639a1a                       ; 00527b8e | = "Model"
    PUSH EBX                            ; 00527b93
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 00527b94
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 00527b99
    PUSH EDI                            ; 00527b9c
    PUSH 0x639a20                       ; 00527b9d | = "State"
    PUSH EBX                            ; 00527ba2
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 00527ba3
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 00527ba8
    PUSH 0x0                            ; 00527bab
    PUSH 0x639a26                       ; 00527bad | = "CWayPoint"
    PUSH 0x1                            ; 00527bb2
    LEA EDI,[ESI + 0xbedc]              ; 00527bb4
    PUSH EDI                            ; 00527bba
    PUSH 0x639a30                       ; 00527bbb | = "Our post"
    PUSH EBX                            ; 00527bc0
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 00527bc1
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 00527bc6
    PUSH 0x0                            ; 00527bc9
    PUSH 0x639a39                       ; 00527bcb | = "CVehicle"
    PUSH 0x1                            ; 00527bd0
    LEA EDI,[ESI + 0xbee0]              ; 00527bd2
    PUSH EDI                            ; 00527bd8
    PUSH 0x639a42                       ; 00527bd9 | = "Our car"
    PUSH EBX                            ; 00527bde
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 00527bdf
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 00527be4
    LEA EDI,[ESI + 0xbee4]              ; 00527be7
    PUSH EDI                            ; 00527bed
    PUSH 0x639a4a                       ; 00527bee | = "Left side of car"
    PUSH EBX                            ; 00527bf3
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 00527bf4
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 00527bf9
    LEA EDI,[ESI + 0xbee8]              ; 00527bfc
    PUSH EDI                            ; 00527c02
    PUSH 0x639a5b                       ; 00527c03 | = "Hold pos (sniper)"
    PUSH EBX                            ; 00527c08
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 00527c09
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 00527c0e
    ADD ESI,0xbeec                      ; 00527c11
    PUSH ESI                            ; 00527c17
    PUSH 0x639a6d                       ; 00527c18 | = "Hold pos cond (sniper)"
    PUSH EBX                            ; 00527c1d
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00527c1e
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 00527c23
    POP EDI                             ; 00527c26
    POP ESI                             ; 00527c27
    POP EBX                             ; 00527c28
    RET                                 ; 00527c29

