; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList *this_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
;
; XREF[20]:
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 at 0040d2ab
;   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 at 0041139c
;   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 at 00411bc0
;   core_barrier.cpp_CBarrier_FUN_00414400 at 0041443f
;   core_chain.cpp_CChain_FUN_00431120 at 00431204
;   core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730 at 0042f7ce
;   core_conveyor.cpp_FUN_00442130 at 004421ab
;   core_curtain.cpp_FUN_0044b610 at 0044b635
;   core_dest.cpp_FUN_0046fe80 at 0046fed8
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 at 004aa200
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e290
        ;   Label: core_actor.cpp_CActorPropertyList_FUN_0040e290
    PUSH ESI                            ; 0040e291
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040e292
    PUSH EDX                            ; 0040e296
    MOV ECX,dword ptr [ESP + 0x18]      ; 0040e297
    PUSH ECX                            ; 0040e29b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e29c
    PUSH EBX                            ; 0040e2a0
    PUSH 0x3                            ; 0040e2a1
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040e2a3
    PUSH ESI                            ; 0040e2a7
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e2a8
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, int property_type, char * property_name, void * data_ptr, ...)
    ADD ESP,0x14                        ; 0040e2ad
    MOV dword ptr [EAX + 0x5c],0x1      ; 0040e2b0
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040e2b7
    MOV dword ptr [EAX + 0x64],EDX      ; 0040e2bb
    POP ESI                             ; 0040e2be
    POP EBX                             ; 0040e2bf
    RET                                 ; 0040e2c0

