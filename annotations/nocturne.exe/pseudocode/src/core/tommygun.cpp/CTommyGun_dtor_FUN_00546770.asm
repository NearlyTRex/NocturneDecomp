; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_00546770(CTommyGun *this_ptr,uint flags)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTommyGunTypeInfo_005a33e0
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546770
        ;   Label: core_tommygun.cpp_CTommyGun_dtor_FUN_00546770
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546771
    TEST byte ptr [ESP + 0xc],0x4       ; 00546775
    JNZ 0x00546796                      ; 0054677a
        ;   XREF to: 00546796 (CONDITIONAL_JUMP)  ; LAB_00546796
    PUSH 0x1                            ; 0054677c
    PUSH EBX                            ; 0054677e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 ; 0054677f
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00553ea0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00546784
    MOV DL,byte ptr [ESP + 0xc]         ; 00546787
    MOV EBX,EAX                         ; 0054678b
    TEST DL,0x2                         ; 0054678d
    JNZ 0x005467b1                      ; 00546790
        ;   XREF to: 005467b1 (CONDITIONAL_JUMP)  ; LAB_005467b1
    MOV EAX,EBX                         ; 00546792
    POP EBX                             ; 00546794
    RET                                 ; 00546795
    PUSH 0x5a33e0                       ; 00546796 | g_CTommyGunTypeInfo_005a33e0
        ;   Label: LAB_00546796
    PUSH EBX                            ; 0054679b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0054679c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005467a1
    PUSH EAX                            ; 005467a4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 005467a5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 005467aa
    MOV EAX,EBX                         ; 005467ad
    POP EBX                             ; 005467af
    RET                                 ; 005467b0
    PUSH EAX                            ; 005467b1
        ;   Label: LAB_005467b1
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 005467b2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 005467b7
    MOV EAX,EBX                         ; 005467ba
    POP EBX                             ; 005467bc
    RET                                 ; 005467bd

