; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260 (CActorPropertyList *this_ptr,char *property_name,CVector3f *data_ptr, CDemonActor_CActorPropertyValidatorFunc *callback)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   property_name
; CVector3f *      Stack[0xc]:4   data_ptr
; CDemonActor_CActorPropertyValidatorFunc * Stack[0x10]:4   callback
;
; XREF[8]:
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 at 0040d2d3
;   core_barrier.cpp_CBarrier_getPropertyList_FUN_00414400 at 00414423
;   core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0 at 00422751
;   core_boxactor.cpp_CLightActor_getPropertyList_FUN_004234e0 at 00423553
;   core_conveyor.cpp_FUN_00442130 at 00442192
;   core_emitter.cpp_FUN_004a8db0 at 004a8ee3
;   core_simbox.cpp_CSimBox_FUN_00589310 at 005893b3
;   core_vehicle.cpp_CVehicle_FUN_005e8ba0 at 005e8c61
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e260
        ;   Label: core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260
    PUSH ESI                            ; 0040e261
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040e262
    PUSH EDX                            ; 0040e266
    MOV ECX,dword ptr [ESP + 0x18]      ; 0040e267
    PUSH ECX                            ; 0040e26b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e26c
    PUSH EBX                            ; 0040e270
    PUSH 0x2                            ; 0040e271
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040e273
    PUSH ESI                            ; 0040e277
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e278
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    ADD ESP,0x14                        ; 0040e27d
    MOV dword ptr [EAX + 0x5c],0x0      ; 0040e280
    POP ESI                             ; 0040e287
    POP EBX                             ; 0040e288
    RET                                 ; 0040e289

