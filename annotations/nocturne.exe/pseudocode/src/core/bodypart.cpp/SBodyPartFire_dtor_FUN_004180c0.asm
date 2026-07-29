; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_004180c0(SBodyPartFire *this_ptr,uint flags)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004180c0
        ;   Label: core_bodypart.cpp_SBodyPartFire_dtor_FUN_004180c0
    PUSH 0x1                            ; 004180c4
    ADD EAX,0xc                         ; 004180c6
    PUSH EAX                            ; 004180c9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004180ca
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004180cf
    SUB EAX,0xc                         ; 004180d2
    RET                                 ; 004180d5

