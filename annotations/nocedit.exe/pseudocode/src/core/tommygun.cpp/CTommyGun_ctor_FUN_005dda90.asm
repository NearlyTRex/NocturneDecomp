; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun *this_ptr)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_tommygun.cpp_factoryFunc_FUN_005dda50 at 005dda6a
;   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 at 005e8453
;
; Referenced Globals:
;   TerminatedCString s_tommygun_kfm_006554a0
;   float FLOAT_0066466c = 8
;   CWeapon_full_vtable g_CTommyGunVTable
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dda90
        ;   Label: core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
    MOV EDX,dword ptr [ESP + 0x8]       ; 005dda91
    PUSH EDX                            ; 005dda95
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 005dda96
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005dda9b
    PUSH 0x6554a0                       ; 005dda9e | = "tommygun.kfm"
    MOV EBX,EAX                         ; 005ddaa3
    ADD EAX,0x158                       ; 005ddaa5
    PUSH EAX                            ; 005ddaaa
    MOV dword ptr [EAX + -0x4],0x664674 ; 005ddaab | g_CTommyGunVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005ddab2
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005ddab7
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005ddac1
    MOV dword ptr [EBX + 0x2e0],0x4     ; 005ddacb
    MOV dword ptr [EBX + 0x2e4],0x1     ; 005ddad5
    MOV dword ptr [EBX + 0x2e8],0x42c80000 ; 005ddadf
    MOV dword ptr [EBX + 0x2ec],0x1     ; 005ddae9
    MOV dword ptr [EBX + 0x57c],0x0     ; 005ddaf3
    FLD float ptr [0x0066466c]          ; 005ddafd | FLOAT_0066466c
    MOV dword ptr [EBX + 0x580],0x0     ; 005ddb03
    ADD ESP,0x8                         ; 005ddb0d
    MOV dword ptr [EBX + 0x578],0x0     ; 005ddb10
    MOV EAX,EBX                         ; 005ddb1a
    FSTP float ptr [EBX + 0x564]        ; 005ddb1c
    POP EBX                             ; 005ddb22
    RET                                 ; 005ddb23

