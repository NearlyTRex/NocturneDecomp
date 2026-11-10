; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408730(CDemonActor *this_ptr,uint flags)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[103]:
;   core_ammo.cpp_CAmmo_dtor_FUN_0040e000 at 0040e00f
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040e520 at 0040e52f
;   core_anvil.cpp_CAnvil_dtor_FUN_0040e930 at 0040e93f
;   core_armour.cpp_CArmour_dtor_FUN_0040ecc0 at 0040ed06
;   core_armour.cpp_CEnemy_dtor_FUN_0040ed50 at 0040ed96
;   core_armour.cpp_CFlame_dtor_FUN_0040ede0 at 0040edef
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_0040f130 at 0040f13f
;   core_barrier.cpp_CBarrier_dtor_FUN_00410a00 at 00410a0f
;   core_bat.cpp_CBat_dtor_FUN_00411140 at 00411166
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00412690 at 004126d6
;   ... and 93 more
;
; Referenced Globals:
;   CDemonActor_vtable g_CDemonActorVTable
;   WatcomTypeInfo g_CDemonActorTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408730
        ;   Label: core_actor.cpp_CDemonActor_dtor_FUN_00408730
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408731
    MOV EAX,dword ptr [ESP + 0xc]       ; 00408735
    TEST AL,0x4                         ; 00408739
    JNZ 0x00408761                      ; 0040873b
        ;   XREF to: 00408761 (CONDITIONAL_JUMP)  ; LAB_00408761
    MOV dword ptr [EBX + 0x68],0x495fd67 ; 0040873d
    MOV dword ptr [EBX + 0x154],0x5fb334 ; 00408744 | g_CDemonActorVTable
    TEST AL,0x2                         ; 0040874e
    JNZ 0x0040877c                      ; 00408750
        ;   XREF to: 0040877c (CONDITIONAL_JUMP)  ; LAB_0040877c
    MOV EAX,EBX                         ; 00408752
    POP EBX                             ; 00408754
    LEA EAX,[EAX]                       ; 00408755
    LEA EDX,[EDX]                       ; 0040875b
    MOV EBX,EBX                         ; 0040875e
    PUSH 0x5fb410                       ; 00408761 | g_CDemonActorTypeInfo
        ;   Label: LAB_00408761
    PUSH EBX                            ; 00408766
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00408767
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0040876c
    PUSH EAX                            ; 0040876f
    CALL crt_unknown.c_FUN_005c0336     ; 00408770
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00408775
    MOV EAX,EBX                         ; 00408778
    POP EBX                             ; 0040877a
    RET                                 ; 0040877b
    PUSH EBX                            ; 0040877c
        ;   Label: LAB_0040877c
    CALL crt_unknown.c_FUN_005c0344     ; 0040877d
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00408782
    MOV EAX,EBX                         ; 00408785
    POP EBX                             ; 00408787
    RET                                 ; 00408788

