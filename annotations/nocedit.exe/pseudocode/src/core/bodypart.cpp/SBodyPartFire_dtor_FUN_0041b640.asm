; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SBodyPartFire * core_bodypart.cpp_SBodyPartFire_dtor_FUN_0041b640(SBodyPartFire * this_ptr)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b640
        ;   Label: core_bodypart.cpp_SBodyPartFire_dtor_FUN_0041b640
    PUSH 0x1                            ; 0041b644
    ADD EAX,0xc                         ; 0041b646
    PUSH EAX                            ; 0041b649
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0041b64a | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041b64f
    SUB EAX,0xc                         ; 0041b652
    RET                                 ; 0041b655

