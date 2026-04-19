; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_00411c20(CAmmoBox *this_ptr,uint flags)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAmmoBoxTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411c20
        ;   Label: core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411c21
    TEST byte ptr [ESP + 0xc],0x4       ; 00411c25
    JNZ 0x00411c46                      ; 00411c2a
        ;   XREF to: 00411c46 (CONDITIONAL_JUMP)  ; LAB_00411c46
    PUSH 0x1                            ; 00411c2c
    PUSH EBX                            ; 00411c2e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00411c2f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00411c34
    MOV DL,byte ptr [ESP + 0xc]         ; 00411c37
    MOV EBX,EAX                         ; 00411c3b
    TEST DL,0x2                         ; 00411c3d
    JNZ 0x00411c61                      ; 00411c40
        ;   XREF to: 00411c61 (CONDITIONAL_JUMP)  ; LAB_00411c61
    MOV EAX,EBX                         ; 00411c42
    POP EBX                             ; 00411c44
    RET                                 ; 00411c45
    PUSH 0x659bc0                       ; 00411c46 | g_CAmmoBoxTypeInfo
        ;   Label: LAB_00411c46
    PUSH EBX                            ; 00411c4b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00411c4c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00411c51
    PUSH EAX                            ; 00411c54
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00411c55
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00411c5a
    MOV EAX,EBX                         ; 00411c5d
    POP EBX                             ; 00411c5f
    RET                                 ; 00411c60
    PUSH EAX                            ; 00411c61
        ;   Label: LAB_00411c61
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 00411c62
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00411c67
    MOV EAX,EBX                         ; 00411c6a
    POP EBX                             ; 00411c6c
    RET                                 ; 00411c6d

