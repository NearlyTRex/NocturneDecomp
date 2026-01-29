; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_dtor_FUN_004cbb00(CFlameThrower *this_ptr,uint d1,uint d2)
;
; Parameters:
; CFlameThrower *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameThrowerTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbb00
        ;   Label: core_flamegun.cpp_CFlameThrower_dtor_FUN_004cbb00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cbb01
    TEST byte ptr [ESP + 0xc],0x4       ; 004cbb05
    JNZ 0x004cbb26                      ; 004cbb0a
        ;   XREF to: 004cbb26 (CONDITIONAL_JUMP)  ; LAB_004cbb26
    PUSH 0x1                            ; 004cbb0c
    PUSH EBX                            ; 004cbb0e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 004cbb0f
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3)
    ADD ESP,0x8                         ; 004cbb14
    MOV DL,byte ptr [ESP + 0xc]         ; 004cbb17
    MOV EBX,EAX                         ; 004cbb1b
    TEST DL,0x2                         ; 004cbb1d
    JNZ 0x004cbb41                      ; 004cbb20
        ;   XREF to: 004cbb41 (CONDITIONAL_JUMP)  ; LAB_004cbb41
    MOV EAX,EBX                         ; 004cbb22
    POP EBX                             ; 004cbb24
    RET                                 ; 004cbb25
    PUSH 0x65e390                       ; 004cbb26 | g_CFlameThrowerTypeInfo
        ;   Label: LAB_004cbb26
    PUSH EBX                            ; 004cbb2b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004cbb2c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cbb31
    PUSH EAX                            ; 004cbb34
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004cbb35
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004cbb3a
    MOV EAX,EBX                         ; 004cbb3d
    POP EBX                             ; 004cbb3f
    RET                                 ; 004cbb40
    PUSH EAX                            ; 004cbb41
        ;   Label: LAB_004cbb41
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004cbb42
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004cbb47
    MOV EAX,EBX                         ; 004cbb4a
    POP EBX                             ; 004cbb4c
    RET                                 ; 004cbb4d

