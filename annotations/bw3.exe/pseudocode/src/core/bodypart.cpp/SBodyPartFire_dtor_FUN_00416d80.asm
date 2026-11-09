; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_00416d80(SBodyPartFire *this_ptr,uint flags)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416d80
        ;   Label: core_bodypart.cpp_SBodyPartFire_dtor_FUN_00416d80
    PUSH 0x1                            ; 00416d84
    ADD EAX,0xc                         ; 00416d86
    PUSH EAX                            ; 00416d89
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00416d8a
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00416d8f
    SUB EAX,0xc                         ; 00416d92
    RET                                 ; 00416d95

