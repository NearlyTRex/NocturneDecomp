; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_00417cd0(SBodyPartFire *this_ptr,uint flags)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00417cd0
        ;   Label: core_bodypart.cpp_SBodyPartFire_dtor_FUN_00417cd0
    PUSH 0x1                            ; 00417cd4
    ADD EAX,0xc                         ; 00417cd6
    PUSH EAX                            ; 00417cd9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00417cda
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00417cdf
    SUB EAX,0xc                         ; 00417ce2
    RET                                 ; 00417ce5

