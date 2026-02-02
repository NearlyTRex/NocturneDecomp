; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f20d0(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Model_00657ea5
;   TerminatedCString s_State_00657eab
;   TerminatedCString s_Type_00657eb1
;   TerminatedCString s_Light_up_eyes_00657eb6
;   TerminatedCString s_CDemonActor_00657ec4
;   TerminatedCString s_chainAnchor_00657ed0
;   TerminatedCString s_chainLength_00657edc
;   TerminatedCString s_CWayPoint_00657ee8
;   TerminatedCString s_Way_Point_1_00657ef2
;   TerminatedCString s_CWayPoint_00657efe
;   TerminatedCString s_Way_Point_2_00657f08
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f20d0
        ;   Label: core_werewolf.cpp_CWerewolf_FUN_005f20d0
    PUSH ESI                            ; 005f20d1
    PUSH EDI                            ; 005f20d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005f20d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005f20d7
    PUSH ESI                            ; 005f20db
    PUSH EBX                            ; 005f20dc
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 005f20dd
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005f20e2
    PUSH 0x0                            ; 005f20e5
    LEA EDI,[EBX + 0x158]               ; 005f20e7
    PUSH EDI                            ; 005f20ed
    PUSH 0x657ea5                       ; 005f20ee | = "Model"
    PUSH ESI                            ; 005f20f3
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 005f20f4
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 005f20f9
    PUSH EDI                            ; 005f20fc
    PUSH 0x657eab                       ; 005f20fd | = "State"
    PUSH ESI                            ; 005f2102
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 005f2103
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 005f2108
    PUSH 0x5f2070                       ; 005f210b
    PUSH 0x5f2010                       ; 005f2110
    PUSH 0x657eb1                       ; 005f2115 | = "Type"
    PUSH ESI                            ; 005f211a
    CALL core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670 ; 005f211b
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670(CActorPropertyList * this_ptr, char * property_name, CDemonActor_CActorPropertyDisplayFunc * display_callback, CDemonActor_CActorPropertyActionFunc * action_callback)
    ADD ESP,0x10                        ; 005f2120
    LEA EDI,[EBX + 0xbed4]              ; 005f2123
    PUSH EDI                            ; 005f2129
    PUSH 0x657eb6                       ; 005f212a | = "Light up eyes"
    PUSH ESI                            ; 005f212f
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 005f2130
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 005f2135
    PUSH 0x0                            ; 005f2138
    PUSH 0x657ec4                       ; 005f213a | = "CDemonActor"
    PUSH 0x1                            ; 005f213f
    LEA EDI,[EBX + 0xbee8]              ; 005f2141
    PUSH EDI                            ; 005f2147
    PUSH 0x657ed0                       ; 005f2148 | = "chainAnchor"
    PUSH ESI                            ; 005f214d
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005f214e
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, void * data_ptr, int default_index, ...)
    MOV EDX,dword ptr [EBX + 0xbee8]    ; 005f2153
    ADD ESP,0x18                        ; 005f2159
    TEST EDX,EDX                        ; 005f215c
    JNZ 0x005f216d                      ; 005f215e
        ;   XREF to: 005f216d (CONDITIONAL_JUMP)  ; LAB_005f216d
    CMP dword ptr [EBX + 0xbebc],0x2    ; 005f2160
    JZ 0x005f219b                       ; 005f2167
        ;   XREF to: 005f219b (CONDITIONAL_JUMP)  ; LAB_005f219b
    POP EDI                             ; 005f2169
    POP ESI                             ; 005f216a
    POP EBX                             ; 005f216b
    RET                                 ; 005f216c
    PUSH 0x0                            ; 005f216d
        ;   Label: LAB_005f216d
    PUSH 0x447a0000                     ; 005f216f
    LEA EDI,[EBX + 0xbeec]              ; 005f2174
    PUSH 0x3f800000                     ; 005f217a
    PUSH EDI                            ; 005f217f
    PUSH 0x657edc                       ; 005f2180 | = "chainLength"
    PUSH ESI                            ; 005f2185
    CALL core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0 ; 005f2186
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, float min_value, ...)
    ADD ESP,0x18                        ; 005f218b
    CMP dword ptr [EBX + 0xbebc],0x2    ; 005f218e
    JZ 0x005f219b                       ; 005f2195
        ;   XREF to: 005f219b (CONDITIONAL_JUMP)  ; LAB_005f219b
    POP EDI                             ; 005f2197
    POP ESI                             ; 005f2198
    POP EBX                             ; 005f2199
    RET                                 ; 005f219a
    PUSH 0x0                            ; 005f219b
        ;   Label: LAB_005f219b
    PUSH 0x657ee8                       ; 005f219d | = "CWayPoint"
    PUSH 0x1                            ; 005f21a2
    LEA EDI,[EBX + 0xbef0]              ; 005f21a4
    PUSH EDI                            ; 005f21aa
    PUSH 0x657ef2                       ; 005f21ab | = "Way Point 1"
    PUSH ESI                            ; 005f21b0
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005f21b1
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, void * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005f21b6
    PUSH 0x0                            ; 005f21b9
    PUSH 0x657efe                       ; 005f21bb | = "CWayPoint"
    PUSH 0x1                            ; 005f21c0
    ADD EBX,0xbef4                      ; 005f21c2
    PUSH EBX                            ; 005f21c8
    PUSH 0x657f08                       ; 005f21c9 | = "Way Point 2"
    PUSH ESI                            ; 005f21ce
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005f21cf
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, void * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005f21d4
    POP EDI                             ; 005f21d7
    POP ESI                             ; 005f21d8
    POP EBX                             ; 005f21d9
    RET                                 ; 005f21da

