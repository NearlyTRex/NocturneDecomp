; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_004a6fe0(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_elephant.cpp_factoryFunc_FUN_004a6fa0 at 004a6fba
;
; Referenced Globals:
;   TerminatedCString s_elephantgun_kfm_00623fc4
;   float FLOAT_0065d52c = 8
;   CDemonActor_vtable g_CElephantGunVTable
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6fe0
        ;   Label: core_elephant.cpp_CElephantGun_ctor_FUN_004a6fe0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a6fe1
    PUSH EDX                            ; 004a6fe5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 004a6fe6
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004a6feb
    PUSH 0x623fc4                       ; 004a6fee | = "elephantgun.kfm"
    MOV EBX,EAX                         ; 004a6ff3
    ADD EAX,0x158                       ; 004a6ff5
    PUSH EAX                            ; 004a6ffa
    MOV dword ptr [EAX + -0x4],0x65d534 ; 004a6ffb | g_CElephantGunVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004a7002
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x578],0x41200000 ; 004a7007
    MOV dword ptr [EBX + 0x2d8],0x1     ; 004a7011
    MOV dword ptr [EBX + 0x2dc],0x2     ; 004a701b
    MOV dword ptr [EBX + 0x2e0],0x1     ; 004a7025
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004a702f
    MOV dword ptr [EBX + 0x2e8],0x41700000 ; 004a7039
    FLD float ptr [0x0065d52c]          ; 004a7043 | FLOAT_0065d52c
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004a7049
    ADD ESP,0x8                         ; 004a7053
    MOV dword ptr [EBX + 0x57c],0x0     ; 004a7056
    MOV EAX,EBX                         ; 004a7060
    FSTP float ptr [EBX + 0x564]        ; 004a7062
    POP EBX                             ; 004a7068
    RET                                 ; 004a7069

