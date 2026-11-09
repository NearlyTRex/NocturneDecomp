; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CElephantGun * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_00486730(CElephantGun *this_ptr,uint flags)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CElephantGunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486730
        ;   Label: core_elephant.cpp_CElephantGun_dtor_FUN_00486730
    MOV EBX,dword ptr [ESP + 0x8]       ; 00486731
    TEST byte ptr [ESP + 0xc],0x4       ; 00486735
    JNZ 0x00486756                      ; 0048673a
        ;   XREF to: 00486756 (CONDITIONAL_JUMP)  ; LAB_00486756
    PUSH 0x1                            ; 0048673c
    PUSH EBX                            ; 0048673e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00589ae0 ; 0048673f
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00589ae0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00486744
    MOV DL,byte ptr [ESP + 0xc]         ; 00486747
    MOV EBX,EAX                         ; 0048674b
    TEST DL,0x2                         ; 0048674d
    JNZ 0x00486771                      ; 00486750
        ;   XREF to: 00486771 (CONDITIONAL_JUMP)  ; LAB_00486771
    MOV EAX,EBX                         ; 00486752
    POP EBX                             ; 00486754
    RET                                 ; 00486755
    PUSH 0x5f5f00                       ; 00486756 | g_CElephantGunTypeInfo
        ;   Label: LAB_00486756
    PUSH EBX                            ; 0048675b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0048675c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00486761
    PUSH EAX                            ; 00486764
    CALL crt_unknown.c_FUN_005b7fce     ; 00486765
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0048676a
    MOV EAX,EBX                         ; 0048676d
    POP EBX                             ; 0048676f
    RET                                 ; 00486770
    PUSH EAX                            ; 00486771
        ;   Label: LAB_00486771
    CALL crt_unknown.c_FUN_005b7fdc     ; 00486772
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00486777
    MOV EAX,EBX                         ; 0048677a
    POP EBX                             ; 0048677c
    RET                                 ; 0048677d

