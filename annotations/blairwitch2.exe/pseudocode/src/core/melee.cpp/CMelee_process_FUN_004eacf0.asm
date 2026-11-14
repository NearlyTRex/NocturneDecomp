; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_process_FUN_004eacf0(CMelee *this_ptr,float delta_time)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_cross.cpp_CCross_process_FUN_005a6ed0 at 005a6fca
;
; Called Functions:
;   core_weapon.cpp_CWeapon_process_FUN_00589c80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004eacf0
        ;   Label: core_melee.cpp_CMelee_process_FUN_004eacf0
    PUSH dword ptr [ESP + 0x8]          ; 004eacf4
    PUSH EDX                            ; 004eacf8
    CALL core_weapon.cpp_CWeapon_process_FUN_00589c80 ; 004eacf9
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_00589c80(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004eacfe
    RET                                 ; 004ead01

