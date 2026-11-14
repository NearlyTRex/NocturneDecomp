; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_heal_cpp_CHeal_process_FUN_004d1c50(CHeal *this_ptr,float delta_time)
;
; Parameters:
; CHeal *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_weapon.cpp_CWeapon_process_FUN_0057b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1c50
        ;   Label: core_heal.cpp_CHeal_process_FUN_004d1c50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d1c51
    PUSH dword ptr [ESP + 0xc]          ; 004d1c55
    PUSH EBX                            ; 004d1c59
    CALL core_weapon.cpp_CWeapon_process_FUN_0057b160 ; 004d1c5a
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_0057b160(CWeapon * this_ptr, float delta_time)
    MOV EAX,dword ptr [EBX + 0x594]     ; 004d1c5f
    MOV dword ptr [EBX + 0x594],0x0     ; 004d1c65
    ADD ESP,0x8                         ; 004d1c6f
    MOV dword ptr [EBX + 0x598],EAX     ; 004d1c72
    POP EBX                             ; 004d1c78
    RET                                 ; 004d1c79

