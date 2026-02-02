; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290 (CDemonActor *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; XREF[46]:
;   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 at 0041136c
;   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 at 00411b3c
;   core_anvil.cpp_CAnvil_getPropertyList_FUN_00412030 at 0041203c
;   core_backgnd.cpp_CBackgroundActor_getPropertyList_FUN_00412a40 at 00412a4c
;   core_barrier.cpp_CBarrier_getPropertyList_FUN_00414400 at 0041440c
;   core_bat.cpp_CBat_getPropertyList_FUN_00414dc0 at 00414dcf
;   core_battery.cpp_CBattery_getPropertyList_FUN_004180b0 at 004180bc
;   core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0 at 004226ed
;   core_chain.cpp_CChain_FUN_00431120 at 0043112c
;   core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730 at 0042f73c
;   ... and 36 more
;
; Referenced Globals:
;   TerminatedCString s_Name_0061441c
;   TerminatedCString s_Pos_00614421
;   TerminatedCString s_PHB_00614425
;   TerminatedCString s_Creation_event_00614429
;   TerminatedCString s_none_00614438
;   TerminatedCString s_Probability_0061443d
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d290
        ;   Label: core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
    PUSH ESI                            ; 0040d291
    PUSH EDI                            ; 0040d292
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d293
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040d297
    PUSH 0x40d270                       ; 0040d29b
    PUSH 0x1e                           ; 0040d2a0
    PUSH EBX                            ; 0040d2a2
    PUSH 0x61441c                       ; 0040d2a3 | = "Name"
    PUSH ESI                            ; 0040d2a8
    MOV dword ptr [ESI],EBX             ; 0040d2a9
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 0040d2ab
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 0040d2b0
    PUSH 0x0                            ; 0040d2b3
    LEA EAX,[EBX + 0x20]                ; 0040d2b5
    PUSH EAX                            ; 0040d2b8
    PUSH 0x614421                       ; 0040d2b9 | = "Pos"
    PUSH ESI                            ; 0040d2be
    CALL core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260 ; 0040d2bf
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260(CActorPropertyList * this_ptr, char * property_name, CVector3f * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0040d2c4
    PUSH 0x0                            ; 0040d2c7
    LEA EAX,[EBX + 0x30]                ; 0040d2c9
    PUSH EAX                            ; 0040d2cc
    PUSH 0x614425                       ; 0040d2cd | = "PHB"
    PUSH ESI                            ; 0040d2d2
    CALL core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260 ; 0040d2d3
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260(CActorPropertyList * this_ptr, char * property_name, CVector3f * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0040d2d8
    LEA EDI,[EBX + 0x78]                ; 0040d2db
    PUSH EDI                            ; 0040d2de
    PUSH 0x614429                       ; 0040d2df | = "Creation event"
    PUSH ESI                            ; 0040d2e4
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 0040d2e5
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    MOV AH,byte ptr [EBX + 0x78]        ; 0040d2ea
    ADD ESP,0xc                         ; 0040d2ed
    TEST AH,AH                          ; 0040d2f0
    JNZ 0x0040d2f8                      ; 0040d2f2
        ;   XREF to: 0040d2f8 (CONDITIONAL_JUMP)  ; LAB_0040d2f8
    POP EDI                             ; 0040d2f4
        ;   Label: LAB_0040d2f4
    POP ESI                             ; 0040d2f5
    POP EBX                             ; 0040d2f6
    RET                                 ; 0040d2f7
    PUSH 0x614438                       ; 0040d2f8 | = "none"
        ;   Label: LAB_0040d2f8
    PUSH EDI                            ; 0040d2fd
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0040d2fe
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040d303
    TEST EAX,EAX                        ; 0040d306
    JZ 0x0040d2f4                       ; 0040d308
        ;   XREF to: 0040d2f4 (CONDITIONAL_JUMP)  ; LAB_0040d2f4
    PUSH 0x0                            ; 0040d30a
    PUSH 0x3f800000                     ; 0040d30c
    ADD EBX,0x74                        ; 0040d311
    PUSH 0x0                            ; 0040d314
    PUSH EBX                            ; 0040d316
    PUSH 0x61443d                       ; 0040d317 | = "Probability"
    PUSH ESI                            ; 0040d31c
    CALL core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0 ; 0040d31d
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, float min_value, ...)
    ADD ESP,0x18                        ; 0040d322
    POP EDI                             ; 0040d325
    POP ESI                             ; 0040d326
    POP EBX                             ; 0040d327
    RET                                 ; 0040d328

