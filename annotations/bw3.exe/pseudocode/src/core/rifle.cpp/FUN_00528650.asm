; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_rifle_cpp_FUN_00528650(CWeapon *param_1)
;
;
; Called Functions:
;   core_weapon.cpp_FUN_0057bb60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00528650
        ;   Label: core_rifle.cpp_FUN_00528650
    PUSH EDX                            ; 00528654
    CALL core_weapon.cpp_FUN_0057bb60   ; 00528655
        ;   XREF to: 0057bb60 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_FUN_0057bb60(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0052865a
    RET                                 ; 0052865d

