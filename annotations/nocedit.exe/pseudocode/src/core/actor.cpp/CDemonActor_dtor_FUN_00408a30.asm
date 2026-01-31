; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor *this_ptr,uint d1)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
;
; XREF[92]:
;   core_ammo.cpp_CAmmo_dtor_FUN_004114e0 at 004114ef
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20 at 00411c2f
;   core_anvil.cpp_CAnvil_dtor_FUN_004120e0 at 004120ef
;   core_armour.cpp_CArmour_dtor_FUN_00412500 at 0041257a
;   core_armour.cpp_CEnemy_dtor_FUN_004125c0 at 0041263a
;   core_armour.cpp_CFlame_dtor_FUN_00412690 at 0041269f
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0 at 00412adf
;   core_barrier.cpp_CBarrier_dtor_FUN_00414670 at 0041467f
;   core_bat.cpp_CBat_dtor_FUN_00414fe0 at 00415006
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00416320 at 0041639a
;   ... and 82 more
;
; Referenced Globals:
;   CDemonActor_vtable g_CDemonActorVTable
;   WatcomTypeInfo g_CDemonActorTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408a30
        ;   Label: core_actor.cpp_CDemonActor_dtor_FUN_00408a30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408a31
    MOV EAX,dword ptr [ESP + 0xc]       ; 00408a35
    TEST AL,0x4                         ; 00408a39
    JNZ 0x00408a56                      ; 00408a3b
        ;   XREF to: 00408a56 (CONDITIONAL_JUMP)  ; LAB_00408a56
    MOV dword ptr [EBX + 0x68],0x495fd67 ; 00408a3d
    MOV dword ptr [EBX + 0x154],0x6597d4 ; 00408a44 | g_CDemonActorVTable
    TEST AL,0x2                         ; 00408a4e
    JNZ 0x00408a71                      ; 00408a50
        ;   XREF to: 00408a71 (CONDITIONAL_JUMP)  ; LAB_00408a71
    MOV EAX,EBX                         ; 00408a52
    POP EBX                             ; 00408a54
    RET                                 ; 00408a55
    PUSH 0x6598e0                       ; 00408a56 | g_CDemonActorTypeInfo
        ;   Label: LAB_00408a56
    PUSH EBX                            ; 00408a5b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00408a5c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00408a61
    PUSH EAX                            ; 00408a64
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00408a65
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00408a6a
    MOV EAX,EBX                         ; 00408a6d
    POP EBX                             ; 00408a6f
    RET                                 ; 00408a70
    PUSH EBX                            ; 00408a71
        ;   Label: LAB_00408a71
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00408a72
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00408a77
    MOV EAX,EBX                         ; 00408a7a
    POP EBX                             ; 00408a7c
    RET                                 ; 00408a7d

