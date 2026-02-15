; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_getPropertyList_FUN_004eb3c0(CGlass *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Texture_0062e121
;   TerminatedCString s_Cause_shatter_condition_0062e129
;   TerminatedCString s_Allow_shatter_condition_0062e141
;   TerminatedCString s_Am_I_a_mirror_0062e159
;   TerminatedCString s_Opacity_0062e167
;   TerminatedCString s_backgroundFlag_0062e16f
;   TerminatedCString s_Broken_texture_0062e17e
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb3c0
        ;   Label: core_glass.cpp_CGlass_getPropertyList_FUN_004eb3c0
    PUSH ESI                            ; 004eb3c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004eb3c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004eb3c6
    PUSH ESI                            ; 004eb3ca
    PUSH EBX                            ; 004eb3cb
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004eb3cc
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004eb3d1
    PUSH 0x0                            ; 004eb3d4
    PUSH 0x10                           ; 004eb3d6
    LEA EAX,[EBX + 0x16c]               ; 004eb3d8
    PUSH EAX                            ; 004eb3de
    PUSH 0x62e121                       ; 004eb3df | = "Texture"
    PUSH ESI                            ; 004eb3e4
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 004eb3e5
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 004eb3ea
    LEA EAX,[EBX + 0x184]               ; 004eb3ed
    PUSH EAX                            ; 004eb3f3
    PUSH 0x62e129                       ; 004eb3f4 | = "Cause shatter condition"
    PUSH ESI                            ; 004eb3f9
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 004eb3fa
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 004eb3ff
    LEA EAX,[EBX + 0x30c]               ; 004eb402
    PUSH EAX                            ; 004eb408
    PUSH 0x62e141                       ; 004eb409 | = "Allow shatter condition"
    PUSH ESI                            ; 004eb40e
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 004eb40f
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 004eb414
    LEA EAX,[EBX + 0x1e8]               ; 004eb417
    PUSH EAX                            ; 004eb41d
    PUSH 0x62e159                       ; 004eb41e | = "Am I a mirror"
    PUSH ESI                            ; 004eb423
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 004eb424
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 004eb429
    PUSH 0x0                            ; 004eb42c
    LEA EAX,[EBX + 0x17c]               ; 004eb42e
    PUSH EAX                            ; 004eb434
    PUSH 0x62e167                       ; 004eb435 | = "Opacity"
    PUSH ESI                            ; 004eb43a
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 004eb43b
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004eb440
    LEA EAX,[EBX + 0x370]               ; 004eb443
    PUSH EAX                            ; 004eb449
    PUSH 0x62e16f                       ; 004eb44a | = "backgroundFlag"
    PUSH ESI                            ; 004eb44f
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 004eb450
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    MOV EDX,dword ptr [EBX + 0x370]     ; 004eb455
    ADD ESP,0xc                         ; 004eb45b
    TEST EDX,EDX                        ; 004eb45e
    JNZ 0x004eb465                      ; 004eb460
        ;   XREF to: 004eb465 (CONDITIONAL_JUMP)  ; LAB_004eb465
    POP ESI                             ; 004eb462
    POP EBX                             ; 004eb463
    RET                                 ; 004eb464
    PUSH 0x0                            ; 004eb465
        ;   Label: LAB_004eb465
    PUSH 0x10                           ; 004eb467
    ADD EBX,0x37c                       ; 004eb469
    PUSH EBX                            ; 004eb46f
    PUSH 0x62e17e                       ; 004eb470 | = "Broken texture"
    PUSH ESI                            ; 004eb475
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 004eb476
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 004eb47b
    POP ESI                             ; 004eb47e
    POP EBX                             ; 004eb47f
    RET                                 ; 004eb480

