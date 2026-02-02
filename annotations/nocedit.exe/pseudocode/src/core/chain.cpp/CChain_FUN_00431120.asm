; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_chain_cpp_CChain_FUN_00431120(CChain *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Vertex_count_00617871
;   TerminatedCString s_Chain_length_0061787e
;   TerminatedCString s_CCharacter_0061788b
;   TerminatedCString s_Actor_to_chain_00617896
;   TerminatedCString s_Bone_to_lock_on_006178a5
;   TerminatedCString s_Weight_006178b5
;   TerminatedCString s_Dampen_006178bc
;   TerminatedCString s_Friction_006178c3
;   TerminatedCString s_Gravity_006178cc
;   TerminatedCString s_Texture_006178d4
;   TerminatedCString s_Pull_sound_006178dc
;   TerminatedCString s_Move_sound_006178e7
;   TerminatedCString s_Collide_with_ground_006178f2
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431120
        ;   Label: core_chain.cpp_CChain_FUN_00431120
    PUSH ESI                            ; 00431121
    MOV ESI,dword ptr [ESP + 0xc]       ; 00431122
    MOV EBX,dword ptr [ESP + 0x10]      ; 00431126
    PUSH EBX                            ; 0043112a
    PUSH ESI                            ; 0043112b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0043112c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00431131
    PUSH 0x0                            ; 00431134
    LEA EAX,[ESI + 0x158]               ; 00431136
    PUSH EAX                            ; 0043113c
    PUSH 0x617871                       ; 0043113d | = "Vertex count"
    PUSH EBX                            ; 00431142
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 00431143
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 00431148
    PUSH 0x0                            ; 0043114b
    LEA EAX,[ESI + 0x15c]               ; 0043114d
    PUSH EAX                            ; 00431153
    PUSH 0x61787e                       ; 00431154 | = "Chain length"
    PUSH EBX                            ; 00431159
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0043115a
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0043115f
    PUSH 0x0                            ; 00431162
    PUSH 0x61788b                       ; 00431164 | = "CCharacter"
    PUSH 0x1                            ; 00431169
    LEA EAX,[ESI + 0x164]               ; 0043116b
    PUSH EAX                            ; 00431171
    PUSH 0x617896                       ; 00431172 | = "Actor to chain"
    PUSH EBX                            ; 00431177
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 00431178
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, void * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 0043117d
    PUSH 0x0                            ; 00431180
    LEA EAX,[ESI + 0x168]               ; 00431182
    PUSH EAX                            ; 00431188
    PUSH 0x6178a5                       ; 00431189 | = "Bone to lock on"
    PUSH EBX                            ; 0043118e
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 0043118f
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 00431194
    PUSH 0x0                            ; 00431197
    LEA EAX,[ESI + 0x55c]               ; 00431199
    PUSH EAX                            ; 0043119f
    PUSH 0x6178b5                       ; 004311a0 | = "Weight"
    PUSH EBX                            ; 004311a5
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 004311a6
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004311ab
    PUSH 0x0                            ; 004311ae
    LEA EAX,[ESI + 0x568]               ; 004311b0
    PUSH EAX                            ; 004311b6
    PUSH 0x6178bc                       ; 004311b7 | = "Dampen"
    PUSH EBX                            ; 004311bc
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 004311bd
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004311c2
    PUSH 0x0                            ; 004311c5
    LEA EAX,[ESI + 0x560]               ; 004311c7
    PUSH EAX                            ; 004311cd
    PUSH 0x6178c3                       ; 004311ce | = "Friction"
    PUSH EBX                            ; 004311d3
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 004311d4
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004311d9
    PUSH 0x0                            ; 004311dc
    LEA EAX,[ESI + 0x564]               ; 004311de
    PUSH EAX                            ; 004311e4
    PUSH 0x6178cc                       ; 004311e5 | = "Gravity"
    PUSH EBX                            ; 004311ea
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 004311eb
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004311f0
    PUSH 0x0                            ; 004311f3
    PUSH 0x14                           ; 004311f5
    LEA EAX,[ESI + 0x174]               ; 004311f7
    PUSH EAX                            ; 004311fd
    PUSH 0x6178d4                       ; 004311fe | = "Texture"
    PUSH EBX                            ; 00431203
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 00431204
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 00431209
    LEA EAX,[ESI + 0x1b4]               ; 0043120c
    PUSH EAX                            ; 00431212
    PUSH 0x6178dc                       ; 00431213 | = "Pull sound"
    PUSH EBX                            ; 00431218
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 00431219
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 0043121e
    LEA EAX,[ESI + 0x21c]               ; 00431221
    PUSH EAX                            ; 00431227
    PUSH 0x6178e7                       ; 00431228 | = "Move sound"
    PUSH EBX                            ; 0043122d
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 0043122e
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 00431233
    ADD ESI,0x288                       ; 00431236
    PUSH ESI                            ; 0043123c
    PUSH 0x6178f2                       ; 0043123d | = "Collide with ground"
    PUSH EBX                            ; 00431242
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 00431243
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 00431248
    POP ESI                             ; 0043124b
    POP EBX                             ; 0043124c
    RET                                 ; 0043124d

