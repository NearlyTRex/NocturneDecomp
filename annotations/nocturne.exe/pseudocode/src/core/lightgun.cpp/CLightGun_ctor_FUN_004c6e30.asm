; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightGun * __cdecl core_lightgun_cpp_CLightGun_ctor_FUN_004c6e30(CLightGun *this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_lightgun.cpp_factoryFuncLightGun_FUN_004c6e00 at 004c6e13
;
; Referenced Globals:
;   TerminatedCString s_cre_kfm_005879e7
;   float FLOAT_0059fd5c = 8
;   float FLOAT_0059fd60 = 30
;   CWeapon_full_vtable g_CLightGunVTable
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_weapon.cpp_CWeapon_ctor_FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6e30
        ;   Label: core_lightgun.cpp_CLightGun_ctor_FUN_004c6e30
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c6e31
    PUSH EDX                            ; 004c6e35
    CALL core_weapon.cpp_CWeapon_ctor_FUN_00553d90 ; 004c6e36
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_00553d90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004c6e3b
    PUSH 0x5879e7                       ; 004c6e3e | = "cre.kfm"
    MOV EBX,EAX                         ; 004c6e43
    ADD EAX,0x150                       ; 004c6e45
    PUSH EAX                            ; 004c6e4a
    MOV dword ptr [EAX + -0x4],0x59fd94 ; 004c6e4b | g_CLightGunVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004c6e52
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x574],0x0     ; 004c6e57
    MOV dword ptr [EBX + 0x570],0x0     ; 004c6e61
    MOV dword ptr [EBX + 0x2d0],0x0     ; 004c6e6b
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004c6e75
    MOV dword ptr [EBX + 0x2d8],0x2     ; 004c6e7f
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004c6e89
    MOV dword ptr [EBX + 0x2e0],0x42000000 ; 004c6e93
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004c6e9d
    FLD float ptr [0x0059fd5c]          ; 004c6ea7 | FLOAT_0059fd5c
    MOV dword ptr [EBX + 0x2e8],0x0     ; 004c6ead
    FLD float ptr [0x0059fd60]          ; 004c6eb7 | FLOAT_0059fd60
    MOV dword ptr [EBX + 0x580],0x0     ; 004c6ebd
    ADD ESP,0x8                         ; 004c6ec7
    MOV dword ptr [EBX + 0x57c],0x3f800000 ; 004c6eca
    MOV EAX,EBX                         ; 004c6ed4
    FXCH                                ; 004c6ed6
    FSTP float ptr [EBX + 0x55c]        ; 004c6ed8
    FSTP float ptr [EBX + 0x578]        ; 004c6ede
    POP EBX                             ; 004c6ee4
    RET                                 ; 004c6ee5

