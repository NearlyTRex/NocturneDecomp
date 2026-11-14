; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_rifle_cpp_CRifle_process_FUN_00527d50(CRifle *this_ptr,float delta_time)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_weapon.cpp_CWeapon_process_FUN_0057b160
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00527d50
        ;   Label: core_rifle.cpp_CRifle_process_FUN_00527d50
    PUSH dword ptr [ESP + 0x8]          ; 00527d54
    PUSH EAX                            ; 00527d58
    MOV dword ptr [EAX + 0x598],0x1     ; 00527d59
    CALL core_weapon.cpp_CWeapon_process_FUN_0057b160 ; 00527d63
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_0057b160(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00527d68
    RET                                 ; 00527d6b

