; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_conveyor_cpp_CConveyor_getPropertyList_FUN_00442130(CConveyor *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Moving_00618e8b
;   TerminatedCString s_Start_condition_00618e92
;   string s_Stop_condition_00618ea2
;   TerminatedCString s_Direction_00618eb1
;   TerminatedCString s_Actor_class_to_effect_00618ebb
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442130
        ;   Label: core_conveyor.cpp_CConveyor_getPropertyList_FUN_00442130
    PUSH ESI                            ; 00442131
    MOV EBX,dword ptr [ESP + 0xc]       ; 00442132
    MOV ESI,dword ptr [ESP + 0x10]      ; 00442136
    PUSH ESI                            ; 0044213a
    PUSH EBX                            ; 0044213b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0044213c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00442141
    LEA EAX,[EBX + 0x80c]               ; 00442144
    PUSH EAX                            ; 0044214a
    PUSH 0x618e8b                       ; 0044214b | = "Moving"
    PUSH ESI                            ; 00442150
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 00442151
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 00442156
    LEA EAX,[EBX + 0x744]               ; 00442159
    PUSH EAX                            ; 0044215f
    PUSH 0x618e92                       ; 00442160 | = "Start condition"
    PUSH ESI                            ; 00442165
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00442166
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0044216b
    LEA EAX,[EBX + 0x7a8]               ; 0044216e
    PUSH EAX                            ; 00442174
    PUSH 0x618ea2                       ; 00442175 | = "Stop condition"
    PUSH ESI                            ; 0044217a
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 0044217b
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 00442180
    PUSH 0x0                            ; 00442183
    LEA EAX,[EBX + 0x738]               ; 00442185
    PUSH EAX                            ; 0044218b
    PUSH 0x618eb1                       ; 0044218c | = "Direction"
    PUSH ESI                            ; 00442191
    CALL core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260 ; 00442192
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260(CActorPropertyList * this_ptr, char * property_name, CVector3f * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 00442197
    PUSH 0x0                            ; 0044219a
    PUSH 0x4f                           ; 0044219c
    ADD EBX,0x810                       ; 0044219e
    PUSH EBX                            ; 004421a4
    PUSH 0x618ebb                       ; 004421a5 | = "Actor class to effect"
    PUSH ESI                            ; 004421aa
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 004421ab
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 004421b0
    POP ESI                             ; 004421b3
    POP EBX                             ; 004421b4
    RET                                 ; 004421b5

