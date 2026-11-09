; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_005a3e60(CTurret *this_ptr,uint flags)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTurretTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3e60
        ;   Label: core_turret.cpp_CTurret_dtor_FUN_005a3e60
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a3e61
    TEST byte ptr [ESP + 0xc],0x4       ; 005a3e65
    JNZ 0x005a3e86                      ; 005a3e6a
        ;   XREF to: 005a3e86 (CONDITIONAL_JUMP)  ; LAB_005a3e86
    PUSH 0x1                            ; 005a3e6c
    PUSH EBX                            ; 005a3e6e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 005a3e6f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a3e74
    MOV DL,byte ptr [ESP + 0xc]         ; 005a3e77
    MOV EBX,EAX                         ; 005a3e7b
    TEST DL,0x2                         ; 005a3e7d
    JNZ 0x005a3ea1                      ; 005a3e80
        ;   XREF to: 005a3ea1 (CONDITIONAL_JUMP)  ; LAB_005a3ea1
    MOV EAX,EBX                         ; 005a3e82
    POP EBX                             ; 005a3e84
    RET                                 ; 005a3e85
    PUSH 0x6075e0                       ; 005a3e86 | g_CTurretTypeInfo
        ;   Label: LAB_005a3e86
    PUSH EBX                            ; 005a3e8b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005a3e8c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 005a3e91
    PUSH EAX                            ; 005a3e94
    CALL crt_unknown.c_FUN_005c0336     ; 005a3e95
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005a3e9a
    MOV EAX,EBX                         ; 005a3e9d
    POP EBX                             ; 005a3e9f
    RET                                 ; 005a3ea0
    PUSH EAX                            ; 005a3ea1
        ;   Label: LAB_005a3ea1
    CALL crt_unknown.c_FUN_005c0344     ; 005a3ea2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005a3ea7
    MOV EAX,EBX                         ; 005a3eaa
    POP EBX                             ; 005a3eac
    RET                                 ; 005a3ead

