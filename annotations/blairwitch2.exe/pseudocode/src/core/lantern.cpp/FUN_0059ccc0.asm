; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lantern_cpp_FUN_0059ccc0(CWeapon *param_1,int param_2)
;
;
; Called Functions:
;   core_weapon.cpp_FUN_00589b50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059ccc0
        ;   Label: core_lantern.cpp_FUN_0059ccc0
    PUSH EDX                            ; 0059ccc4
    CALL core_weapon.cpp_FUN_00589b50   ; 0059ccc5
        ;   XREF to: 00589b50 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_FUN_00589b50(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0059ccca
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059cccd
    MOV dword ptr [EAX + 0xfc],0x1      ; 0059ccd1
    RET                                 ; 0059ccdb

