; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00411350(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_baron.cpp_FUN_00411320 at 00411333
;
; Referenced Globals:
;   CWeapon_full_vtable g_CBaronWeaponVTable
;
; Called Functions:
;   core_weapon.cpp_CWeapon_ctor_FUN_00553d90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00411350
        ;   Label: core_baron.cpp_CBaronWeapon_ctor_FUN_00411350
    PUSH EDX                            ; 00411354
    CALL core_weapon.cpp_CWeapon_ctor_FUN_00553d90 ; 00411355
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_00553d90(CWeapon * this_ptr)
    MOV dword ptr [EAX + 0x14c],0x599c14 ; 0041135a | g_CBaronWeaponVTable
    MOV dword ptr [EAX + 0x2d8],0x8     ; 00411364
    MOV dword ptr [EAX + 0x2dc],0x0     ; 0041136e
    MOV dword ptr [EAX + 0x2e0],0x43480000 ; 00411378
    MOV dword ptr [EAX + 0x2e4],0x0     ; 00411382
    MOV dword ptr [EAX + 0x2e8],0x0     ; 0041138c
    ADD ESP,0x4                         ; 00411396
    MOV dword ptr [EAX + 0x570],0x0     ; 00411399
    RET                                 ; 004113a3

