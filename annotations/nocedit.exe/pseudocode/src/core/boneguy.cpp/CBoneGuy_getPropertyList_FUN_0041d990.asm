; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_boneguy_cpp_CBoneGuy_getPropertyList_FUN_0041d990 (CBoneGuy *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_0061636d
;   TerminatedCString s_State_00616373
;   TerminatedCString s_Recombine_time_00616379
;   TerminatedCString s_Death_condition_00616388
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d990
        ;   Label: core_boneguy.cpp_CBoneGuy_getPropertyList_FUN_0041d990
    PUSH ESI                            ; 0041d991
    PUSH EDI                            ; 0041d992
    MOV ESI,dword ptr [ESP + 0x10]      ; 0041d993
    MOV EBX,dword ptr [ESP + 0x14]      ; 0041d997
    PUSH EBX                            ; 0041d99b
    PUSH ESI                            ; 0041d99c
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 0041d99d
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0041d9a2
    PUSH 0x0                            ; 0041d9a5
    LEA EDI,[ESI + 0x158]               ; 0041d9a7
    PUSH EDI                            ; 0041d9ad
    PUSH 0x61636d                       ; 0041d9ae | = "Model"
    PUSH EBX                            ; 0041d9b3
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 0041d9b4
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 0041d9b9
    PUSH EDI                            ; 0041d9bc
    PUSH 0x616373                       ; 0041d9bd | = "State"
    PUSH EBX                            ; 0041d9c2
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 0041d9c3
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 0041d9c8
    PUSH 0x0                            ; 0041d9cb
    LEA EDI,[ESI + 0xbf34]              ; 0041d9cd
    PUSH EDI                            ; 0041d9d3
    PUSH 0x616379                       ; 0041d9d4 | = "Recombine time"
    PUSH EBX                            ; 0041d9d9
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0041d9da
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0041d9df
    ADD ESI,0xbed0                      ; 0041d9e2
    PUSH ESI                            ; 0041d9e8
    PUSH 0x616388                       ; 0041d9e9 | = "Death condition"
    PUSH EBX                            ; 0041d9ee
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 0041d9ef
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0041d9f4
    POP EDI                             ; 0041d9f7
    POP ESI                             ; 0041d9f8
    POP EBX                             ; 0041d9f9
    RET                                 ; 0041d9fa

