; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408770(CDemonActor *this_ptr,uint flags)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[114]:
;   core_ammo.cpp_CAmmoBullet_dtor_FUN_0040e420 at 0040e42f
;   core_ammo.cpp_CAmmoManaLarge_dtor_FUN_0040e470 at 0040e47f
;   core_ammo.cpp_CAmmoMana_dtor_FUN_0040e4c0 at 0040e4cf
;   core_ammo.cpp_CAmmo_dtor_FUN_0040e510 at 0040e51f
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040ea10 at 0040ea1f
;   core_armour.cpp_CFlame_dtor_FUN_00410320 at 0041032f
;   core_asgaya.cpp_CAsgaya_dtor_FUN_005a1b50 at 005a1bb6
;   core_baal.cpp_CBaal_dtor_FUN_00597d00 at 00597d46
;   core_barrier.cpp_CBarrier_dtor_FUN_0040ec90 at 0040ec9f
;   core_bat.cpp_CBat_dtor_FUN_0040f3d0 at 0040f3f6
;   ... and 104 more
;
; Referenced Globals:
;   CDemonActor_vtable g_CDemonActorVTable
;   WatcomTypeInfo g_CDemonActorTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408770
        ;   Label: core_actor.cpp_CDemonActor_dtor_FUN_00408770
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408771
    MOV EAX,dword ptr [ESP + 0xc]       ; 00408775
    TEST AL,0x4                         ; 00408779
    JNZ 0x004087a1                      ; 0040877b
        ;   XREF to: 004087a1 (CONDITIONAL_JUMP)  ; LAB_004087a1
    MOV dword ptr [EBX + 0x68],0x495fd67 ; 0040877d
    MOV dword ptr [EBX + 0x154],0x5daff4 ; 00408784 | g_CDemonActorVTable
    TEST AL,0x2                         ; 0040878e
    JNZ 0x004087bc                      ; 00408790
        ;   XREF to: 004087bc (CONDITIONAL_JUMP)  ; LAB_004087bc
    MOV EAX,EBX                         ; 00408792
    POP EBX                             ; 00408794
    LEA EAX,[EAX]                       ; 00408795
    LEA EDX,[EDX]                       ; 0040879b
    MOV EBX,EBX                         ; 0040879e
    PUSH 0x5db0d0                       ; 004087a1 | g_CDemonActorTypeInfo
        ;   Label: LAB_004087a1
    PUSH EBX                            ; 004087a6
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004087a7
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004087ac
    PUSH EAX                            ; 004087af
    CALL crt_unknown.c_FUN_005a30b6     ; 004087b0
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004087b5
    MOV EAX,EBX                         ; 004087b8
    POP EBX                             ; 004087ba
    RET                                 ; 004087bb
    PUSH EBX                            ; 004087bc
        ;   Label: LAB_004087bc
    CALL crt_unknown.c_FUN_005a30c4     ; 004087bd
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004087c2
    MOV EAX,EBX                         ; 004087c5
    POP EBX                             ; 004087c7
    RET                                 ; 004087c8

