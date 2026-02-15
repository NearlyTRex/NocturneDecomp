; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_getPropertyList_FUN_0042f730(CCharacter *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; XREF[3]:
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 at 004aa17c
;   core_hero.cpp_CHero_getPropertyList_FUN_004f3f20 at 004f3f2b
;   core_npc.cpp_CNPC_getPropertyList_FUN_00544e40 at 00544e4d
;
; Referenced Globals:
;   TerminatedCString s_cloth_0061772e
;   TerminatedCString s_Items_Carried_00617734
;   TerminatedCString s_talkToMeEvent_00617742
;   TerminatedCString s_Etheral_00617750
;   TerminatedCString s_Descriptive_name_00617758
;   TerminatedCString s_Health_bar_0061777f
;   SEnumPair[3] g_CharacterHealthBarTypePairs
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addButton_FUN_0040e480
;   core_actor.cpp_CActorPropertyList_addClothList_FUN_0040e500
;   core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f730
        ;   Label: core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730
    PUSH ESI                            ; 0042f731
    MOV EBX,dword ptr [ESP + 0xc]       ; 0042f732
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042f736
    PUSH ESI                            ; 0042f73a
    PUSH EBX                            ; 0042f73b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0042f73c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0042f741
    PUSH -0x1                           ; 0042f744
    LEA EAX,[EBX + 0x2a94]              ; 0042f746
    PUSH EAX                            ; 0042f74c
    PUSH 0x61772e                       ; 0042f74d | = "cloth"
    PUSH ESI                            ; 0042f752
    CALL core_actor.cpp_CActorPropertyList_addClothList_FUN_0040e500 ; 0042f753
        ;   XREF to: 0040e500 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addClothList_FUN_0040e500(CActorPropertyList * this_ptr, char * property_name, CClothList * data_ptr, int max_count)
    ADD ESP,0x10                        ; 0042f758
    MOV EAX,EBX                         ; 0042f75b
    MOV ECX,dword ptr [EBX + 0x24ac]    ; 0042f75d
    XOR EDX,EDX                         ; 0042f763
    TEST ECX,ECX                        ; 0042f765
    JGE 0x0042f77b                      ; 0042f767
        ;   XREF to: 0042f77b (CONDITIONAL_JUMP)  ; LAB_0042f77b
    INC EDX                             ; 0042f769
        ;   Label: LAB_0042f769
    ADD EAX,0x44                        ; 0042f76a
    CMP EDX,0x2                         ; 0042f76d
    JGE 0x0042f793                      ; 0042f770
        ;   XREF to: 0042f793 (CONDITIONAL_JUMP)  ; LAB_0042f793
    CMP dword ptr [EAX + 0x24ac],0x0    ; 0042f772
    JL 0x0042f769                       ; 0042f779
        ;   XREF to: 0042f769 (CONDITIONAL_JUMP)  ; LAB_0042f769
    PUSH 0x42f3e0                       ; 0042f77b
        ;   Label: LAB_0042f77b
    PUSH 0x42f340                       ; 0042f780
    PUSH 0x617734                       ; 0042f785 | = "Items Carried"
    PUSH ESI                            ; 0042f78a
    CALL core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670 ; 0042f78b
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670(CActorPropertyList * this_ptr, char * property_name, CActorPropertyDisplayFunc * display_callback, CActorPropertyActionFunc * action_callback)
    ADD ESP,0x10                        ; 0042f790
    LEA EAX,[EBX + 0x2534]              ; 0042f793
        ;   Label: LAB_0042f793
    PUSH EAX                            ; 0042f799
    PUSH 0x617742                       ; 0042f79a | = "talkToMeEvent"
    PUSH ESI                            ; 0042f79f
    CALL core_actor.cpp_CActorPropertyList_addButton_FUN_0040e480 ; 0042f7a0
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addButton_FUN_0040e480(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0042f7a5
    LEA EAX,[EBX + 0x2614]              ; 0042f7a8
    PUSH EAX                            ; 0042f7ae
    PUSH 0x617750                       ; 0042f7af | = "Etheral"
    PUSH ESI                            ; 0042f7b4
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0042f7b5
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0042f7ba
    PUSH 0x0                            ; 0042f7bd
    PUSH 0x64                           ; 0042f7bf
    LEA EAX,[EBX + 0x2448]              ; 0042f7c1
    PUSH EAX                            ; 0042f7c7
    PUSH 0x617758                       ; 0042f7c8 | = "Descriptive name"
    PUSH ESI                            ; 0042f7cd
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 0042f7ce
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 0042f7d3
    ADD EBX,0x2444                      ; 0042f7d6
    PUSH EBX                            ; 0042f7dc
    PUSH 0x66e758                       ; 0042f7dd | g_CharacterHealthBarTypePairs
    PUSH 0x3                            ; 0042f7e2
    PUSH 0x61777f                       ; 0042f7e4 | = "Health bar"
    PUSH ESI                            ; 0042f7e9
    CALL core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640 ; 0042f7ea
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640(CActorPropertyList * this_ptr, char * property_name, int num_pairs, SEnumPair * pairs, ...)
    ADD ESP,0x14                        ; 0042f7ef
    POP ESI                             ; 0042f7f2
    POP EBX                             ; 0042f7f3
    RET                                 ; 0042f7f4

