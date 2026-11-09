; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lantern_cpp_FUN_0059d000(CWeapon *param_1)
;
;
; Called Functions:
;   core_lantern.cpp_FUN_0059ced0
;   core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d000
        ;   Label: core_lantern.cpp_FUN_0059d000
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059d001
    FLD float ptr [EBX + 0x700]         ; 0059d005
    FLDZ                                ; 0059d00b
    FCOMPP                              ; 0059d00d
    FNSTSW AX                           ; 0059d00f
    SAHF                                ; 0059d011
    JC 0x0059d01f                       ; 0059d012
        ;   XREF to: 0059d01f (CONDITIONAL_JUMP)  ; LAB_0059d01f
    PUSH EBX                            ; 0059d014
    CALL core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90 ; 0059d015
        ;   XREF to: 00589b90 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0059d01a
    POP EBX                             ; 0059d01d
    RET                                 ; 0059d01e
    PUSH EBX                            ; 0059d01f
        ;   Label: LAB_0059d01f
    CALL core_lantern.cpp_FUN_0059ced0  ; 0059d020
        ;   XREF to: 0059ced0 (UNCONDITIONAL_CALL)  ; undefined core_lantern.cpp_FUN_0059ced0()
    ADD ESP,0x4                         ; 0059d025
    PUSH EBX                            ; 0059d028
    CALL core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90 ; 0059d029
        ;   XREF to: 00589b90 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0059d02e
    POP EBX                             ; 0059d031
    RET                                 ; 0059d032

