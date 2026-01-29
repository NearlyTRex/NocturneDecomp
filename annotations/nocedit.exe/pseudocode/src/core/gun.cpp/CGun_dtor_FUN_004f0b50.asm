; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004f0b50(CGun *this_ptr,uint d1,uint d2)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CGunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0b50
        ;   Label: core_gun.cpp_CGun_dtor_FUN_004f0b50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f0b51
    TEST byte ptr [ESP + 0xc],0x4       ; 004f0b55
    JNZ 0x004f0b76                      ; 004f0b5a
        ;   XREF to: 004f0b76 (CONDITIONAL_JUMP)  ; LAB_004f0b76
    PUSH 0x1                            ; 004f0b5c
    PUSH EBX                            ; 004f0b5e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 004f0b5f
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3)
    ADD ESP,0x8                         ; 004f0b64
    MOV DL,byte ptr [ESP + 0xc]         ; 004f0b67
    MOV EBX,EAX                         ; 004f0b6b
    TEST DL,0x2                         ; 004f0b6d
    JNZ 0x004f0b91                      ; 004f0b70
        ;   XREF to: 004f0b91 (CONDITIONAL_JUMP)  ; LAB_004f0b91
    MOV EAX,EBX                         ; 004f0b72
    POP EBX                             ; 004f0b74
    RET                                 ; 004f0b75
    PUSH 0x65f3b0                       ; 004f0b76 | g_CGunTypeInfo
        ;   Label: LAB_004f0b76
    PUSH EBX                            ; 004f0b7b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004f0b7c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f0b81
    PUSH EAX                            ; 004f0b84
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004f0b85
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004f0b8a
    MOV EAX,EBX                         ; 004f0b8d
    POP EBX                             ; 004f0b8f
    RET                                 ; 004f0b90
    PUSH EAX                            ; 004f0b91
        ;   Label: LAB_004f0b91
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004f0b92
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004f0b97
    MOV EAX,EBX                         ; 004f0b9a
    POP EBX                             ; 004f0b9c
    RET                                 ; 004f0b9d

