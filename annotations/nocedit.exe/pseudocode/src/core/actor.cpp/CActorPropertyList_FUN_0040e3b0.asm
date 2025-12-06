; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
;
; XREF[31]:
;   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 at 00411383
;   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 at 00411b53
;   core_anvil.cpp_CAnvil_FUN_00412030 at 00412053
;   core_backgnd.cpp_CBackgroundActor_FUN_00412a40 at 00412a63
;   core_bat.cpp_CBat_FUN_00414dc0 at 00414e40
;   core_battery.cpp_FUN_004180b0 at 004180d3
;   core_boxactor.cpp_FUN_004226e0 at 00422704
;   core_bugs.cpp_CBugs_FUN_004277e0 at 00427869
;   core_crate.cpp_FUN_00448b20 at 00448b49
;   core_door.cpp_CDoor_getPropertyList_FUN_00481320 at 00481344
;   ... and 21 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e3b0
        ;   Label: core_actor.cpp_CActorPropertyList_FUN_0040e3b0
    PUSH 0x0                            ; 0040e3b1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e3b3
    PUSH EDX                            ; 0040e3b7
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e3b8
    PUSH ECX                            ; 0040e3bc
    PUSH 0x6                            ; 0040e3bd
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e3bf
    PUSH EBX                            ; 0040e3c3
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e3c4 | int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, int property_type, char * property_name, void * data_ptr, ...)
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0040e3c9
    MOV dword ptr [EAX + 0x58],0x1      ; 0040e3cc
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e3d3
    MOV dword ptr [EAX + 0x5c],EDX      ; 0040e3d7
    POP EBX                             ; 0040e3da
    RET                                 ; 0040e3db

