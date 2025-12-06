; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList * this_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 at 004113cb
;   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 at 00411bef
;   core_boxactor.cpp_CLightActor_FUN_004234e0 at 00423504
;   core_charactr.cpp_CCharacter_FUN_0042f730 at 0042f78b
;   core_door.cpp_CDoor_getPropertyList_FUN_00481320 at 00481387
;   core_drip.cpp_FUN_0048e930 at 0048e954
;   core_lever.cpp_FUN_00505240 at 00505293
;   core_pendulum.cpp_FUN_0054a5f0 at 0054a6ee
;   core_platfrm.cpp_FUN_0054e7d0 at 0054e8cc
;   core_simbox.cpp_CSimBox_FUN_00589310 at 00589362
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0040e670
        ;   Label: core_actor.cpp_CActorPropertyList_FUN_0040e670
    PUSH 0x0                            ; 0040e672
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040e674
    PUSH EDX                            ; 0040e678
    PUSH 0x11                           ; 0040e679
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e67b
    PUSH ECX                            ; 0040e67f
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e680 | int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, int property_type, char * property_name, void * data_ptr, ...)
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0040e685
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040e688
    MOV dword ptr [EAX + 0x68],EDX      ; 0040e68c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040e68f
    MOV dword ptr [EAX + 0xe8],EDX      ; 0040e693
    RET                                 ; 0040e699

