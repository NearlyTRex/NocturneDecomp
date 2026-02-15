; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList *this_ptr,char *property_name,CDeformableModelInstance *data_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   property_name
; CDeformableModelInstance * Stack[0xc]:4   data_ptr
;
; XREF[25]:
;   core_armour.cpp_CArmour_getPropertyList_FUN_00412470 at 004124a3
;   core_batcreat.cpp_CBatCreature_getPropertyList_FUN_004162b0 at 004162e2
;   core_batman.cpp_CBatman_getPropertyList_FUN_00417cd0 at 00417d03
;   core_beast.cpp_CBeast_getPropertyList_FUN_00418420 at 00418452
;   core_biggs.cpp_CBiggs_getPropertyList_FUN_00418c80 at 00418cb3
;   core_boneguy.cpp_CBoneGuy_getPropertyList_FUN_0041d990 at 0041d9c3
;   core_cow.cpp_CZombieCow_getPropertyList_FUN_00444c50 at 00444c82
;   core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920 at 0047f952
;   core_dracbrid.cpp_CDraculaBride_getPropertyList_FUN_00486c90 at 00486cd8
;   core_drone.cpp_CDrone_getPropertyList_FUN_0048f520 at 0048f552
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e4d0
        ;   Label: core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
    PUSH 0x0                            ; 0040e4d1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e4d3
    PUSH EDX                            ; 0040e4d7
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e4d8
    PUSH ECX                            ; 0040e4dc
    PUSH 0xd                            ; 0040e4dd
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e4df
    PUSH EBX                            ; 0040e4e3
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e4e4
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    ADD ESP,0x14                        ; 0040e4e9
    MOV dword ptr [EAX + 0x58],0x1      ; 0040e4ec
    POP EBX                             ; 0040e4f3
    RET                                 ; 0040e4f4

