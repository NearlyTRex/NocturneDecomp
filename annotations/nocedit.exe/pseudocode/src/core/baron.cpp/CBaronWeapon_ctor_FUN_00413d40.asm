; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBaronWeapon * core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40(CBaronWeapon * this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_baron.cpp_factoryFunc_FUN_00413d00 at 00413d1d
;
; Referenced Globals:
;   CDemonActor_vtable g_CBaronWeaponVTable
;
; Called Functions:
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00413d40
        ;   Label: core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40
    PUSH EDX                            ; 00413d44
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 00413d45
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
    MOV dword ptr [EAX + 0x154],0x65a1e4 ; 00413d4a | g_CBaronWeaponVTable
    MOV dword ptr [EAX + 0x2e0],0x8     ; 00413d54
    MOV dword ptr [EAX + 0x2e4],0x0     ; 00413d5e
    MOV dword ptr [EAX + 0x2e8],0x43480000 ; 00413d68
    MOV dword ptr [EAX + 0x2ec],0x0     ; 00413d72
    MOV dword ptr [EAX + 0x2f0],0x0     ; 00413d7c
    ADD ESP,0x4                         ; 00413d86
    MOV dword ptr [EAX + 0x578],0x0     ; 00413d89
    RET                                 ; 00413d93

