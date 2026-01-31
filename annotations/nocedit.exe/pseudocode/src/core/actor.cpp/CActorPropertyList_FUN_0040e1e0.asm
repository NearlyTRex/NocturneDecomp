; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList *this_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
;
; XREF[19]:
;   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 at 004113b3
;   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 at 00411bd7
;   core_chain.cpp_CChain_FUN_00431120 at 00431143
;   core_curtain.cpp_FUN_0044b610 at 0044b64c
;   core_door.cpp_CDoor_getPropertyList_FUN_00481320 at 0048142f
;   core_dracbrid.cpp_FUN_00486c90 at 00486cef
;   core_emitter.cpp_FUN_004a8db0 at 004a8e64
;   core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0 at 004e5b68
;   core_glass.cpp_CGlass_getPropertyList_FUN_004eb3c0 at 004eb43b
;   core_health.cpp_CHealthItem_getPropertyList_FUN_004f2040 at 004f207a
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e1e0
        ;   Label: core_actor.cpp_CActorPropertyList_FUN_0040e1e0
    PUSH ESI                            ; 0040e1e1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040e1e2
    PUSH EDX                            ; 0040e1e6
    MOV ECX,dword ptr [ESP + 0x18]      ; 0040e1e7
    PUSH ECX                            ; 0040e1eb
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e1ec
    PUSH EBX                            ; 0040e1f0
    PUSH 0x0                            ; 0040e1f1
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040e1f3
    PUSH ESI                            ; 0040e1f7
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e1f8
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, int property_type, char * property_name, void * data_ptr, ...)
    MOV dword ptr [EAX + 0x5c],0x0      ; 0040e1fd
    ADD ESP,0x14                        ; 0040e204
    MOV dword ptr [EAX + 0x6c],0x1      ; 0040e207
    POP ESI                             ; 0040e20e
    POP EBX                             ; 0040e20f
    RET                                 ; 0040e210

