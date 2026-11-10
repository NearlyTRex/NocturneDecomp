; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_rifle_cpp_CRifle_renderAimBeam_FUN_00528650(CRifle *this_ptr)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_weapon.cpp_CWeapon_renderAimBeam_FUN_0057bb60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00528650
        ;   Label: core_rifle.cpp_CRifle_renderAimBeam_FUN_00528650
    PUSH EDX                            ; 00528654
    CALL core_weapon.cpp_CWeapon_renderAimBeam_FUN_0057bb60 ; 00528655
        ;   XREF to: 0057bb60 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_renderAimBeam_FUN_0057bb60(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0052865a
    RET                                 ; 0052865d

