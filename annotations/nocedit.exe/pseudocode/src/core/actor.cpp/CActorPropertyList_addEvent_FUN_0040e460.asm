; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460 (CActorPropertyList *this_ptr,char *property_name,char *data_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   property_name
; char *           Stack[0xc]:4   data_ptr
;
; XREF[34]:
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 at 0040d2e5
;   core_anvil.cpp_CAnvil_getPropertyList_FUN_00412030 at 00412068
;   core_armour.cpp_CArmour_getPropertyList_FUN_00412470 at 004124b8
;   core_baron.cpp_CBaron_getPropertyList_FUN_00414010 at 00414046
;   core_batman.cpp_CBatman_getPropertyList_FUN_00417cd0 at 00417d18
;   core_biggs.cpp_CBiggs_getPropertyList_FUN_00418c80 at 00418cc8
;   core_boneguy.cpp_CBoneGuy_getPropertyList_FUN_0041d990 at 0041d9ef
;   core_bugs.cpp_CBugs_getPropertyList_FUN_004277e0 at 00427886
;   core_conveyor.cpp_FUN_00442130 at 00442166
;   core_curtain.cpp_FUN_0044b610 at 0044b767
;   ... and 24 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e460
        ;   Label: core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
    PUSH 0x0                            ; 0040e461
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e463
    PUSH EDX                            ; 0040e467
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e468
    PUSH ECX                            ; 0040e46c
    PUSH 0xb                            ; 0040e46d
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e46f
    PUSH EBX                            ; 0040e473
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e474
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    ADD ESP,0x14                        ; 0040e479
    POP EBX                             ; 0040e47c
    RET                                 ; 0040e47d

