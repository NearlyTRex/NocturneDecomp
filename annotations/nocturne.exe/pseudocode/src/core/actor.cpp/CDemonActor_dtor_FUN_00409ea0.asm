; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor *this_ptr,uint flags)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[92]:
;   core_ammo.cpp_CAmmo_dtor_FUN_0040ef90 at 0040ef9f
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040f4b0 at 0040f4bf
;   core_anvil.cpp_CAnvil_dtor_FUN_0040f8b0 at 0040f8bf
;   core_armour.cpp_CArmour_dtor_FUN_0040fc30 at 0040fcaa
;   core_armour.cpp_CEnemy_dtor_FUN_0040fcf0 at 0040fd6a
;   core_armour.cpp_CFlame_dtor_FUN_0040fdc0 at 0040fdcf
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_004100f0 at 004100ff
;   core_barrier.cpp_CBarrier_dtor_FUN_004118c0 at 004118cf
;   core_bat.cpp_CBat_dtor_FUN_00412000 at 00412026
;   core_batcreat.cpp_CBatCreature_dtor_FUN_004132c0 at 0041333a
;   ... and 82 more
;
; Referenced Globals:
;   CDemonActor_vtable g_CDemonActorVTable
;   WatcomTypeInfo g_CDemonActorTypeInfo_005993d0
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409ea0
        ;   Label: core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00409ea1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00409ea5
    TEST AL,0x4                         ; 00409ea9
    JNZ 0x00409ed1                      ; 00409eab
        ;   XREF to: 00409ed1 (CONDITIONAL_JUMP)  ; LAB_00409ed1
    MOV dword ptr [EBX + 0x68],0x495fd67 ; 00409ead
    MOV dword ptr [EBX + 0x14c],0x5992d4 ; 00409eb4 | g_CDemonActorVTable
    TEST AL,0x2                         ; 00409ebe
    JNZ 0x00409eec                      ; 00409ec0
        ;   XREF to: 00409eec (CONDITIONAL_JUMP)  ; LAB_00409eec
    MOV EAX,EBX                         ; 00409ec2
    POP EBX                             ; 00409ec4
    LEA EAX,[EAX]                       ; 00409ec5
    LEA EDX,[EDX]                       ; 00409ecb
    MOV EBX,EBX                         ; 00409ece
    PUSH 0x5993d0                       ; 00409ed1 | g_CDemonActorTypeInfo_005993d0
        ;   Label: LAB_00409ed1
    PUSH EBX                            ; 00409ed6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00409ed7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00409edc
    PUSH EAX                            ; 00409edf
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00409ee0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00409ee5
    MOV EAX,EBX                         ; 00409ee8
    POP EBX                             ; 00409eea
    RET                                 ; 00409eeb
    PUSH EBX                            ; 00409eec
        ;   Label: LAB_00409eec
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 00409eed
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 00409ef2
    MOV EAX,EBX                         ; 00409ef5
    POP EBX                             ; 00409ef7
    RET                                 ; 00409ef8

