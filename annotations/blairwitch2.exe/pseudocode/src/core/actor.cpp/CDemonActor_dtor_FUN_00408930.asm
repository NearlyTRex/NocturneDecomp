; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_actor_cpp_CDemonActor_dtor_FUN_00408930(CDemonActor *this_ptr,uint flags)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[114]:
;   core_ammo.cpp_CAmmo_dtor_FUN_0040de50 at 0040de69
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040e980 at 0040e98f
;   core_anvil.cpp_CAnvil_dtor_FUN_0040ed90 at 0040ed9f
;   core_armour.cpp_CArmour_dtor_FUN_0040f120 at 0040f176
;   core_armour.cpp_CEnemy_dtor_FUN_0040f1c0 at 0040f216
;   core_armour.cpp_CFlame_dtor_FUN_0040f260 at 0040f26f
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_0040f5b0 at 0040f5bf
;   core_barrier.cpp_CBarrier_dtor_FUN_00410e80 at 00410e8f
;   core_basicnpc.cpp_CBasicNPC_dtor_FUN_005a4980 at 005a49d6
;   core_bat.cpp_CBat_dtor_FUN_004115c0 at 004115e6
;   ... and 104 more
;
; Referenced Globals:
;   undefined4 g_CDemonActorVTable
;   WatcomTypeInfo g_CDemonActorTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkafter_actor.cpp_FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408930
        ;   Label: core_actor.cpp_CDemonActor_dtor_FUN_00408930
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408931
    TEST byte ptr [ESP + 0xc],0x4       ; 00408935
    JNZ 0x00408981                      ; 0040893a
        ;   XREF to: 00408981 (CONDITIONAL_JUMP)  ; LAB_00408981
    ADD EBX,0x154                       ; 0040893c
    PUSH 0x0                            ; 00408942
    MOV dword ptr [EBX + 0x15c],0x5f2184 ; 00408944 | g_CDemonActorVTable
    PUSH EBX                            ; 0040894e
    MOV dword ptr [EBX + 0xffffff14],0x495fd67 ; 0040894f
    CALL unkafter_actor.cpp_FUN_0040d400 ; 00408959
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined unkafter_actor.cpp_FUN_0040d400()
    ADD ESP,0x8                         ; 0040895e
    MOV DL,byte ptr [ESP + 0xc]         ; 00408961
    LEA EBX,[EAX + 0xfffffeac]          ; 00408965
    TEST DL,0x2                         ; 0040896b
    JNZ 0x0040899c                      ; 0040896e
        ;   XREF to: 0040899c (CONDITIONAL_JUMP)  ; LAB_0040899c
    MOV EAX,EBX                         ; 00408970
    POP EBX                             ; 00408972
    LEA EAX,[EAX]                       ; 00408973
    LEA EDX,[EDX]                       ; 00408979
    NOP                                 ; 0040897f
    PUSH 0x5f2290                       ; 00408981 | g_CDemonActorTypeInfo
        ;   Label: LAB_00408981
    PUSH EBX                            ; 00408986
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00408987
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0040898c
    PUSH EAX                            ; 0040898f
    CALL crt_unknown.c_FUN_005b7fce     ; 00408990
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00408995
    MOV EAX,EBX                         ; 00408998
    POP EBX                             ; 0040899a
    RET                                 ; 0040899b
    PUSH EBX                            ; 0040899c
        ;   Label: LAB_0040899c
    CALL crt_unknown.c_FUN_005b7fdc     ; 0040899d
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004089a2
    MOV EAX,EBX                         ; 004089a5
    POP EBX                             ; 004089a7
    RET                                 ; 004089a8

