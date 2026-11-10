; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_rifle_cpp_CRifle_renderAimBeam_FUN_005409b0(CRifle *this_ptr)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_weapon.cpp_CWeapon_renderAimBeam_FUN_005adf90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005409b0
        ;   Label: core_rifle.cpp_CRifle_renderAimBeam_FUN_005409b0
    PUSH EDX                            ; 005409b4
    CALL core_weapon.cpp_CWeapon_renderAimBeam_FUN_005adf90 ; 005409b5
        ;   XREF to: 005adf90 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_renderAimBeam_FUN_005adf90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005409ba
    RET                                 ; 005409bd

