; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_005e3e00(CTurret *this_ptr,uint flags)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTurretTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e3e00
        ;   Label: core_turret.cpp_CTurret_dtor_FUN_005e3e00
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e3e01
    TEST byte ptr [ESP + 0xc],0x4       ; 005e3e05
    JNZ 0x005e3e26                      ; 005e3e0a
        ;   XREF to: 005e3e26 (CONDITIONAL_JUMP)  ; LAB_005e3e26
    PUSH 0x1                            ; 005e3e0c
    PUSH EBX                            ; 005e3e0e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 005e3e0f
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e3e14
    MOV DL,byte ptr [ESP + 0xc]         ; 005e3e17
    MOV EBX,EAX                         ; 005e3e1b
    TEST DL,0x2                         ; 005e3e1d
    JNZ 0x005e3e41                      ; 005e3e20
        ;   XREF to: 005e3e41 (CONDITIONAL_JUMP)  ; LAB_005e3e41
    MOV EAX,EBX                         ; 005e3e22
    POP EBX                             ; 005e3e24
    RET                                 ; 005e3e25
    PUSH 0x664c90                       ; 005e3e26 | g_CTurretTypeInfo
        ;   Label: LAB_005e3e26
    PUSH EBX                            ; 005e3e2b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005e3e2c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005e3e31
    PUSH EAX                            ; 005e3e34
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005e3e35
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005e3e3a
    MOV EAX,EBX                         ; 005e3e3d
    POP EBX                             ; 005e3e3f
    RET                                 ; 005e3e40
    PUSH EAX                            ; 005e3e41
        ;   Label: LAB_005e3e41
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005e3e42
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005e3e47
    MOV EAX,EBX                         ; 005e3e4a
    POP EBX                             ; 005e3e4c
    RET                                 ; 005e3e4d

