; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_00509a90(CMelee *this_ptr,uint flags)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMeleeTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509a90
        ;   Label: core_melee.cpp_CMelee_dtor_FUN_00509a90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00509a91
    TEST byte ptr [ESP + 0xc],0x4       ; 00509a95
    JNZ 0x00509ab6                      ; 00509a9a
        ;   XREF to: 00509ab6 (CONDITIONAL_JUMP)  ; LAB_00509ab6
    PUSH 0x1                            ; 00509a9c
    PUSH EBX                            ; 00509a9e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 00509a9f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00509aa4
    MOV DL,byte ptr [ESP + 0xc]         ; 00509aa7
    MOV EBX,EAX                         ; 00509aab
    TEST DL,0x2                         ; 00509aad
    JNZ 0x00509ad1                      ; 00509ab0
        ;   XREF to: 00509ad1 (CONDITIONAL_JUMP)  ; LAB_00509ad1
    MOV EAX,EBX                         ; 00509ab2
    POP EBX                             ; 00509ab4
    RET                                 ; 00509ab5
    PUSH 0x6038f0                       ; 00509ab6 | g_CMeleeTypeInfo
        ;   Label: LAB_00509ab6
    PUSH EBX                            ; 00509abb
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00509abc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00509ac1
    PUSH EAX                            ; 00509ac4
    CALL crt_unknown.c_FUN_005c0336     ; 00509ac5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00509aca
    MOV EAX,EBX                         ; 00509acd
    POP EBX                             ; 00509acf
    RET                                 ; 00509ad0
    PUSH EAX                            ; 00509ad1
        ;   Label: LAB_00509ad1
    CALL crt_unknown.c_FUN_005c0344     ; 00509ad2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00509ad7
    MOV EAX,EBX                         ; 00509ada
    POP EBX                             ; 00509adc
    RET                                 ; 00509add

