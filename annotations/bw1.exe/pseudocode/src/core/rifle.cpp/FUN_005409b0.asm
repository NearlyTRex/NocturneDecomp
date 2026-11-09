; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_rifle_cpp_FUN_005409b0(CWeapon *param_1)
;
;
; Called Functions:
;   core_weapon.cpp_FUN_005adf90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005409b0
        ;   Label: core_rifle.cpp_FUN_005409b0
    PUSH EDX                            ; 005409b4
    CALL core_weapon.cpp_FUN_005adf90   ; 005409b5
        ;   XREF to: 005adf90 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_FUN_005adf90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005409ba
    RET                                 ; 005409bd

