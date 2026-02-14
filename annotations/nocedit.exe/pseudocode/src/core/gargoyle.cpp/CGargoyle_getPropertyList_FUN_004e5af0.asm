; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gargoyle_cpp_CGargoyle_getPropertyList_FUN_004e5af0(CGargoyle *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_0062da47
;   TerminatedCString s_State_0062da4d
;   TerminatedCString s_Stone_red_0062da53
;   TerminatedCString s_Stone_green_0062da5d
;   TerminatedCString s_Stone_blue_0062da69
;   TerminatedCString s_CWayPoint_0062da74
;   TerminatedCString s_Home_waypoint_0062da7e
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5af0
        ;   Label: core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0
    PUSH ESI                            ; 004e5af1
    PUSH EDI                            ; 004e5af2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e5af3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e5af7
    PUSH EBX                            ; 004e5afb
    PUSH ESI                            ; 004e5afc
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 004e5afd
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004e5b02
    PUSH 0x0                            ; 004e5b05
    LEA EDI,[ESI + 0x158]               ; 004e5b07
    PUSH EDI                            ; 004e5b0d
    PUSH 0x62da47                       ; 004e5b0e | = "Model"
    PUSH EBX                            ; 004e5b13
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 004e5b14
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 004e5b19
    PUSH EDI                            ; 004e5b1c
    PUSH 0x62da4d                       ; 004e5b1d | = "State"
    PUSH EBX                            ; 004e5b22
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 004e5b23
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 004e5b28
    PUSH 0x0                            ; 004e5b2b
    LEA EDI,[ESI + 0xbeec]              ; 004e5b2d
    PUSH EDI                            ; 004e5b33
    PUSH 0x62da53                       ; 004e5b34 | = "Stone red"
    PUSH EBX                            ; 004e5b39
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 004e5b3a
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004e5b3f
    PUSH 0x0                            ; 004e5b42
    LEA EDI,[ESI + 0xbef0]              ; 004e5b44
    PUSH EDI                            ; 004e5b4a
    PUSH 0x62da5d                       ; 004e5b4b | = "Stone green"
    PUSH EBX                            ; 004e5b50
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 004e5b51
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004e5b56
    PUSH 0x0                            ; 004e5b59
    LEA EDI,[ESI + 0xbef4]              ; 004e5b5b
    PUSH EDI                            ; 004e5b61
    PUSH 0x62da69                       ; 004e5b62 | = "Stone blue"
    PUSH EBX                            ; 004e5b67
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 004e5b68
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004e5b6d
    PUSH 0x0                            ; 004e5b70
    PUSH 0x62da74                       ; 004e5b72 | = "CWayPoint"
    PUSH 0x1                            ; 004e5b77
    ADD ESI,0xbef8                      ; 004e5b79
    PUSH ESI                            ; 004e5b7f
    PUSH 0x62da7e                       ; 004e5b80 | = "Home waypoint"
    PUSH EBX                            ; 004e5b85
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 004e5b86
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 004e5b8b
    POP EDI                             ; 004e5b8e
    POP ESI                             ; 004e5b8f
    POP EBX                             ; 004e5b90
    RET                                 ; 004e5b91

