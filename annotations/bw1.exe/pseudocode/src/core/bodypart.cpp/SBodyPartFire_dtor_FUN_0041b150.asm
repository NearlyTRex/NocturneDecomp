; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_0041b150(SBodyPartFire *this_ptr,uint flags)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b150
        ;   Label: core_bodypart.cpp_SBodyPartFire_dtor_FUN_0041b150
    PUSH 0x1                            ; 0041b154
    ADD EAX,0xc                         ; 0041b156
    PUSH EAX                            ; 0041b159
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0041b15a
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041b15f
    SUB EAX,0xc                         ; 0041b162
    RET                                 ; 0041b165

