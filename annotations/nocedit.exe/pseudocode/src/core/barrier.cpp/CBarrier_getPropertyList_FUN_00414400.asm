; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_barrier_cpp_CBarrier_getPropertyList_FUN_00414400(CBarrier *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_size_00615196
;   TerminatedCString s_effectClassNameList_0061519b
;   TerminatedCString s_addToPathGrid_006151af
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414400
        ;   Label: core_barrier.cpp_CBarrier_getPropertyList_FUN_00414400
    PUSH ESI                            ; 00414401
    MOV EBX,dword ptr [ESP + 0xc]       ; 00414402
    MOV ESI,dword ptr [ESP + 0x10]      ; 00414406
    PUSH ESI                            ; 0041440a
    PUSH EBX                            ; 0041440b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0041440c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00414411
    PUSH 0x0                            ; 00414414
    LEA EAX,[EBX + 0x158]               ; 00414416
    PUSH EAX                            ; 0041441c
    PUSH 0x615196                       ; 0041441d | = "size"
    PUSH ESI                            ; 00414422
    CALL core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260 ; 00414423
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260(CActorPropertyList * this_ptr, char * property_name, CVector3f * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 00414428
    PUSH 0x0                            ; 0041442b
    PUSH 0xc8                           ; 0041442d
    LEA EAX,[EBX + 0x168]               ; 00414432
    PUSH EAX                            ; 00414438
    PUSH 0x61519b                       ; 00414439 | = "effectClassNameList"
    PUSH ESI                            ; 0041443e
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 0041443f
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 00414444
    ADD EBX,0x164                       ; 00414447
    PUSH EBX                            ; 0041444d
    PUSH 0x6151af                       ; 0041444e | = "addToPathGrid"
    PUSH ESI                            ; 00414453
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 00414454
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 00414459
    POP ESI                             ; 0041445c
    POP EBX                             ; 0041445d
    RET                                 ; 0041445e

