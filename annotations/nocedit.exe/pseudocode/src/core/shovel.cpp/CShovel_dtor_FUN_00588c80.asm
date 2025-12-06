; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CShovel * core_shovel.cpp_CShovel_dtor_FUN_00588c80(CShovel * this_ptr, uint d1, uint d2)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CShovelTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588c80
        ;   Label: core_shovel.cpp_CShovel_dtor_FUN_00588c80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00588c81
    TEST byte ptr [ESP + 0xc],0x4       ; 00588c85
    JNZ 0x00588ca6                      ; 00588c8a | LAB_00588ca6
        ;   XREF to: 00588ca6 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00588c8c
    PUSH EBX                            ; 00588c8e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 00588c8f | CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3)
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00588c94
    MOV DL,byte ptr [ESP + 0xc]         ; 00588c97
    MOV EBX,EAX                         ; 00588c9b
    TEST DL,0x2                         ; 00588c9d
    JNZ 0x00588cc1                      ; 00588ca0 | LAB_00588cc1
        ;   XREF to: 00588cc1 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00588ca2
    POP EBX                             ; 00588ca4
    RET                                 ; 00588ca5
    PUSH 0x662ce0                       ; 00588ca6 | WatcomTypeInfo g_CShovelTypeInfo
        ;   Label: LAB_00588ca6
    PUSH EBX                            ; 00588cab
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00588cac | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00588cb1
    PUSH EAX                            ; 00588cb4
    CALL crt_memory.c_free_FUN_005fe659 ; 00588cb5 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00588cba
    MOV EAX,EBX                         ; 00588cbd
    POP EBX                             ; 00588cbf
    RET                                 ; 00588cc0
    PUSH EAX                            ; 00588cc1
        ;   Label: LAB_00588cc1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00588cc2 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00588cc7
    MOV EAX,EBX                         ; 00588cca
    POP EBX                             ; 00588ccc
    RET                                 ; 00588ccd

