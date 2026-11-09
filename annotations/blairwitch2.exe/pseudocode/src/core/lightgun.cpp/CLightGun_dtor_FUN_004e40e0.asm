; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightGun * __cdecl core_lightgun_cpp_CLightGun_dtor_FUN_004e40e0(CLightGun *this_ptr,uint flags)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightGunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e40e0
        ;   Label: core_lightgun.cpp_CLightGun_dtor_FUN_004e40e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e40e1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e40e5
    JNZ 0x004e4106                      ; 004e40ea
        ;   XREF to: 004e4106 (CONDITIONAL_JUMP)  ; LAB_004e4106
    PUSH 0x1                            ; 004e40ec
    PUSH EBX                            ; 004e40ee
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00589ae0 ; 004e40ef
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00589ae0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e40f4
    MOV DL,byte ptr [ESP + 0xc]         ; 004e40f7
    MOV EBX,EAX                         ; 004e40fb
    TEST DL,0x2                         ; 004e40fd
    JNZ 0x004e4121                      ; 004e4100
        ;   XREF to: 004e4121 (CONDITIONAL_JUMP)  ; LAB_004e4121
    MOV EAX,EBX                         ; 004e4102
    POP EBX                             ; 004e4104
    RET                                 ; 004e4105
    PUSH 0x5f9700                       ; 004e4106 | g_CLightGunTypeInfo
        ;   Label: LAB_004e4106
    PUSH EBX                            ; 004e410b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004e410c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e4111
    PUSH EAX                            ; 004e4114
    CALL crt_unknown.c_FUN_005b7fce     ; 004e4115
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004e411a
    MOV EAX,EBX                         ; 004e411d
    POP EBX                             ; 004e411f
    RET                                 ; 004e4120
    PUSH EAX                            ; 004e4121
        ;   Label: LAB_004e4121
    CALL crt_unknown.c_FUN_005b7fdc     ; 004e4122
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e4127
    MOV EAX,EBX                         ; 004e412a
    POP EBX                             ; 004e412c
    RET                                 ; 004e412d

