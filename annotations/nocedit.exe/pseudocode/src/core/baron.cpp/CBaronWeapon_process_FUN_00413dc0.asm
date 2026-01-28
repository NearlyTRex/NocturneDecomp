; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_00413dc0(CBaronWeapon *this_ptr,float delta_time)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_FUN_00413f20
;   core_weapon.cpp_CWeapon_process_FUN_005ee110
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00413dc0
        ;   Label: core_baron.cpp_CBaronWeapon_process_FUN_00413dc0
    PUSH EDX                            ; 00413dc4
    CALL core_baron.cpp_CBaronWeapon_FUN_00413f20 ; 00413dc5
        ;   XREF to: 00413f20 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaronWeapon_FUN_00413f20(CBaronWeapon * this_ptr)
    ADD ESP,0x4                         ; 00413dca
    MOV ECX,dword ptr [ESP + 0x4]       ; 00413dcd
    PUSH dword ptr [ESP + 0x8]          ; 00413dd1
    PUSH ECX                            ; 00413dd5
    CALL core_weapon.cpp_CWeapon_process_FUN_005ee110 ; 00413dd6
        ;   XREF to: 005ee110 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00413ddb
    RET                                 ; 00413dde

