; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_004114e0(CAmmo *this_ptr,uint flags)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAmmoTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004114e0
        ;   Label: core_ammo.cpp_CAmmo_dtor_FUN_004114e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004114e1
    TEST byte ptr [ESP + 0xc],0x4       ; 004114e5
    JNZ 0x00411506                      ; 004114ea
        ;   XREF to: 00411506 (CONDITIONAL_JUMP)  ; LAB_00411506
    PUSH 0x1                            ; 004114ec
    PUSH EBX                            ; 004114ee
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004114ef
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004114f4
    MOV DL,byte ptr [ESP + 0xc]         ; 004114f7
    MOV EBX,EAX                         ; 004114fb
    TEST DL,0x2                         ; 004114fd
    JNZ 0x00411521                      ; 00411500
        ;   XREF to: 00411521 (CONDITIONAL_JUMP)  ; LAB_00411521
    MOV EAX,EBX                         ; 00411502
    POP EBX                             ; 00411504
    RET                                 ; 00411505
    PUSH 0x659a90                       ; 00411506 | g_CAmmoTypeInfo
        ;   Label: LAB_00411506
    PUSH EBX                            ; 0041150b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0041150c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00411511
    PUSH EAX                            ; 00411514
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00411515
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0041151a
    MOV EAX,EBX                         ; 0041151d
    POP EBX                             ; 0041151f
    RET                                 ; 00411520
    PUSH EAX                            ; 00411521
        ;   Label: LAB_00411521
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00411522
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00411527
    MOV EAX,EBX                         ; 0041152a
    POP EBX                             ; 0041152c
    RET                                 ; 0041152d

