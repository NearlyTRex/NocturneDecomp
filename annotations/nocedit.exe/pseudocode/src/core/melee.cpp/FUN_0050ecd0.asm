; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_melee.cpp_FUN_0050ecd0()
;
;
; Called Functions:
;   core_weapon.cpp_CWeapon_FUN_005ee640
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050ecd0
        ;   Label: core_melee.cpp_FUN_0050ecd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050ecd4
    PUSH EDX                            ; 0050ecd8
    PUSH EAX                            ; 0050ecd9
    MOV dword ptr [EAX + 0x590],0x0     ; 0050ecda
    CALL core_weapon.cpp_CWeapon_FUN_005ee640 ; 0050ece4 | void core_weapon.cpp_CWeapon_FUN_005ee640(CWeapon * this_ptr)
        ;   XREF to: 005ee640 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050ece9
    RET                                 ; 0050ecec

