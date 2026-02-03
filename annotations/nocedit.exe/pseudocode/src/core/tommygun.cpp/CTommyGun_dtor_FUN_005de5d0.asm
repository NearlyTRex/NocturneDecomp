; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_005de5d0(CTommyGun *this_ptr,uint flags)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTommyGunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005de5d0
        ;   Label: core_tommygun.cpp_CTommyGun_dtor_FUN_005de5d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005de5d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005de5d5
    JNZ 0x005de5f6                      ; 005de5da
        ;   XREF to: 005de5f6 (CONDITIONAL_JUMP)  ; LAB_005de5f6
    PUSH 0x1                            ; 005de5dc
    PUSH EBX                            ; 005de5de
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 005de5df
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005de5e4
    MOV DL,byte ptr [ESP + 0xc]         ; 005de5e7
    MOV EBX,EAX                         ; 005de5eb
    TEST DL,0x2                         ; 005de5ed
    JNZ 0x005de611                      ; 005de5f0
        ;   XREF to: 005de611 (CONDITIONAL_JUMP)  ; LAB_005de611
    MOV EAX,EBX                         ; 005de5f2
    POP EBX                             ; 005de5f4
    RET                                 ; 005de5f5
    PUSH 0x664780                       ; 005de5f6 | g_CTommyGunTypeInfo
        ;   Label: LAB_005de5f6
    PUSH EBX                            ; 005de5fb
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005de5fc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005de601
    PUSH EAX                            ; 005de604
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005de605
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005de60a
    MOV EAX,EBX                         ; 005de60d
    POP EBX                             ; 005de60f
    RET                                 ; 005de610
    PUSH EAX                            ; 005de611
        ;   Label: LAB_005de611
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005de612
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005de617
    MOV EAX,EBX                         ; 005de61a
    POP EBX                             ; 005de61c
    RET                                 ; 005de61d

