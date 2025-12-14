; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
;
; XREF[24]:
;   core_armour.cpp_CArmour_SnagRelatedMultiple_FUN_00412470 at 00412494
;   core_batcreat.cpp_CBatCreature_FUN_004162b0 at 004162d3
;   core_batman.cpp_CBatman_FUN_00417cd0 at 00417cf4
;   core_beast.cpp_FUN_00418420 at 00418443
;   core_biggs.cpp_snag_FUN_00418c80 at 00418ca4
;   core_boneguy.cpp_SnagRelated_ModelStateDeath_FUN_0041d990 at 0041d9b4
;   core_bride.cpp_FUN_00424b10 at 00424b39
;   core_cow.cpp_FUN_00444c50 at 00444c73
;   core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920 at 0047f943
;   core_dracbrid.cpp_FUN_00486c90 at 00486cb4
;   ... and 14 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e4a0
        ;   Label: core_actor.cpp_CActorPropertyList_FUN_0040e4a0
    PUSH 0x0                            ; 0040e4a1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e4a3
    PUSH EDX                            ; 0040e4a7
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e4a8
    PUSH ECX                            ; 0040e4ac
    PUSH 0x7                            ; 0040e4ad
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e4af
    PUSH EBX                            ; 0040e4b3
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e4b4
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, int property_type, char * property_name, void * data_ptr, ...)
    ADD ESP,0x14                        ; 0040e4b9
    MOV dword ptr [EAX + 0x58],0x1      ; 0040e4bc
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e4c3
    MOV dword ptr [EAX + 0x5c],EDX      ; 0040e4c7
    POP EBX                             ; 0040e4ca
    RET                                 ; 0040e4cb

