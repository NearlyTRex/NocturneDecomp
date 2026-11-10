; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_rifle_cpp_CRifle_process_FUN_00540060(CRifle *this_ptr,float delta_time)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_weapon.cpp_CWeapon_process_FUN_005ad770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00540060
        ;   Label: core_rifle.cpp_CRifle_process_FUN_00540060
    PUSH dword ptr [ESP + 0x8]          ; 00540064
    PUSH EAX                            ; 00540068
    MOV dword ptr [EAX + 0x57c],0x1     ; 00540069
    CALL core_weapon.cpp_CWeapon_process_FUN_005ad770 ; 00540073
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ad770(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00540078
    RET                                 ; 0054007b

