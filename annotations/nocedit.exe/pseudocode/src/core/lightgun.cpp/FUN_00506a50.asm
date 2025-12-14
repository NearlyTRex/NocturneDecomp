; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLightGun * core_lightgun.cpp_FUN_00506a50(CLightGun * this_ptr, uint d1, uint d2)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightGunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506a50
        ;   Label: core_lightgun.cpp_FUN_00506a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00506a51
    TEST byte ptr [ESP + 0xc],0x4       ; 00506a55
    JNZ 0x00506a76                      ; 00506a5a
        ;   XREF to: 00506a76 (CONDITIONAL_JUMP)  ; LAB_00506a76
    PUSH 0x1                            ; 00506a5c
    PUSH EBX                            ; 00506a5e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 00506a5f
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3)
    ADD ESP,0x8                         ; 00506a64
    MOV DL,byte ptr [ESP + 0xc]         ; 00506a67
    MOV EBX,EAX                         ; 00506a6b
    TEST DL,0x2                         ; 00506a6d
    JNZ 0x00506a91                      ; 00506a70
        ;   XREF to: 00506a91 (CONDITIONAL_JUMP)  ; LAB_00506a91
    MOV EAX,EBX                         ; 00506a72
    POP EBX                             ; 00506a74
    RET                                 ; 00506a75
    PUSH 0x660b70                       ; 00506a76 | g_CLightGunTypeInfo
        ;   Label: LAB_00506a76
    PUSH EBX                            ; 00506a7b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00506a7c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00506a81
    PUSH EAX                            ; 00506a84
    CALL crt_memory.c_free_FUN_005fe659 ; 00506a85
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00506a8a
    MOV EAX,EBX                         ; 00506a8d
    POP EBX                             ; 00506a8f
    RET                                 ; 00506a90
    PUSH EAX                            ; 00506a91
        ;   Label: LAB_00506a91
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00506a92
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00506a97
    MOV EAX,EBX                         ; 00506a9a
    POP EBX                             ; 00506a9c
    RET                                 ; 00506a9d

