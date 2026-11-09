; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightGun * core_lightgun_cpp_CLightGun_ctor_FUN_004ffeb0(CLightGun *this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_lightgun.cpp_factoryFuncLightGun_FUN_004ffe80 at 004ffe93
;
; Referenced Globals:
;   undefined4 DAT_0060300c
;   undefined4 DAT_00603010
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffeb0
        ;   Label: core_lightgun.cpp_CLightGun_ctor_FUN_004ffeb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ffeb1
    PUSH EDX                            ; 004ffeb5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0 ; 004ffeb6
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004ffebb
    PUSH 0x5e6e04                       ; 004ffebe
    MOV EBX,EAX                         ; 004ffec3
    ADD EAX,0x158                       ; 004ffec5
    PUSH EAX                            ; 004ffeca
    MOV dword ptr [EAX + -0x4],0x603034 ; 004ffecb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004ffed2
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x57c],0x0     ; 004ffed7
    MOV dword ptr [EBX + 0x578],0x0     ; 004ffee1
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004ffeeb
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004ffef5
    MOV dword ptr [EBX + 0x2e0],0xa     ; 004ffeff
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004fff09
    MOV dword ptr [EBX + 0x2e8],0x42000000 ; 004fff13
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004fff1d
    MOV dword ptr [EBX + 0x58c],0x1     ; 004fff27
    FLD float ptr [0x0060300c]          ; 004fff31 | DAT_0060300c
    MOV dword ptr [EBX + 0x2f0],0x1     ; 004fff37
    FLD float ptr [0x00603010]          ; 004fff41 | DAT_00603010
    MOV dword ptr [EBX + 0x588],0x0     ; 004fff47
    ADD ESP,0x8                         ; 004fff51
    MOV dword ptr [EBX + 0x584],0x3f800000 ; 004fff54
    MOV EAX,EBX                         ; 004fff5e
    FXCH                                ; 004fff60
    FSTP float ptr [EBX + 0x564]        ; 004fff62
    FSTP float ptr [EBX + 0x580]        ; 004fff68
    POP EBX                             ; 004fff6e
    RET                                 ; 004fff6f

