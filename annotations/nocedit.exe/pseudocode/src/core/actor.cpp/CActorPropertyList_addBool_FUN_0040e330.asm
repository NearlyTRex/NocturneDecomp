; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList *this_ptr,char *property_name,int *data_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   property_name
; int *            Stack[0xc]:4   data_ptr
;
; XREF[34]:
;   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 at 00411b90
;   core_backgnd.cpp_CBackgroundActor_getPropertyList_FUN_00412a40 at 00412a78
;   core_baron.cpp_CBaron_getPropertyList_FUN_00414010 at 0041405b
;   core_barrier.cpp_CBarrier_getPropertyList_FUN_00414400 at 00414454
;   core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0 at 004228a0
;   core_boxactor.cpp_CLightActor_getPropertyList_FUN_004234e0 at 00423523
;   core_chain.cpp_CChain_getPropertyList_FUN_00431120 at 00431243
;   core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730 at 0042f7b5
;   core_conveyor.cpp_CConveyor_getPropertyList_FUN_00442130 at 00442151
;   core_curtain.cpp_CCurtain_getPropertyList_FUN_0044b610 at 0044b728
;   ... and 24 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e330
        ;   Label: core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
    PUSH 0x0                            ; 0040e331
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e333
    PUSH EDX                            ; 0040e337
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e338
    PUSH ECX                            ; 0040e33c
    PUSH 0x4                            ; 0040e33d
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e33f
    PUSH EBX                            ; 0040e343
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e344
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    ADD ESP,0x14                        ; 0040e349
    POP EBX                             ; 0040e34c
    RET                                 ; 0040e34d

