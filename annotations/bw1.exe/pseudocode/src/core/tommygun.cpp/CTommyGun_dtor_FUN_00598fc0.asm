; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_00598fc0(CTommyGun *this_ptr,uint flags)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTommyGunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598fc0
        ;   Label: core_tommygun.cpp_CTommyGun_dtor_FUN_00598fc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00598fc1
    TEST byte ptr [ESP + 0xc],0x4       ; 00598fc5
    JNZ 0x00598fe6                      ; 00598fca
        ;   XREF to: 00598fe6 (CONDITIONAL_JUMP)  ; LAB_00598fe6
    PUSH 0x1                            ; 00598fcc
    PUSH EBX                            ; 00598fce
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 00598fcf
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00598fd4
    MOV DL,byte ptr [ESP + 0xc]         ; 00598fd7
    MOV EBX,EAX                         ; 00598fdb
    TEST DL,0x2                         ; 00598fdd
    JNZ 0x00599001                      ; 00598fe0
        ;   XREF to: 00599001 (CONDITIONAL_JUMP)  ; LAB_00599001
    MOV EAX,EBX                         ; 00598fe2
    POP EBX                             ; 00598fe4
    RET                                 ; 00598fe5
    PUSH 0x606dc0                       ; 00598fe6 | g_CTommyGunTypeInfo
        ;   Label: LAB_00598fe6
    PUSH EBX                            ; 00598feb
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00598fec
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00598ff1
    PUSH EAX                            ; 00598ff4
    CALL crt_unknown.c_FUN_005c0336     ; 00598ff5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00598ffa
    MOV EAX,EBX                         ; 00598ffd
    POP EBX                             ; 00598fff
    RET                                 ; 00599000
    PUSH EAX                            ; 00599001
        ;   Label: LAB_00599001
    CALL crt_unknown.c_FUN_005c0344     ; 00599002
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00599007
    MOV EAX,EBX                         ; 0059900a
    POP EBX                             ; 0059900c
    RET                                 ; 0059900d

