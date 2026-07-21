; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_004a3a70 at 004a3a84
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50 at 004c0a5e
;   core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 at 004c0878
;   core_inv.cpp_CInventory_toggleDetailView_FUN_004c32e0 at 004c333a
;   core_inv.cpp_CInventory_updateInventory_FUN_004c1850 at 004c188f
;
; Referenced Globals:
;   undefined4 DAT_01cae0e8
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c1d20
        ;   Label: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c1d21
    MOV EDX,dword ptr [0x01cae0e8]      ; 004c1d25 | DAT_01cae0e8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c1d2b
    CMP ECX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 004c1d2e
    JNZ 0x004c1d53                      ; 004c1d35
        ;   XREF to: 004c1d53 (CONDITIONAL_JUMP)  ; LAB_004c1d53
    MOV dword ptr [EAX + 0x33c],0x0     ; 004c1d37
    MOV ESI,dword ptr [ESP + 0xc]       ; 004c1d41
    MOV dword ptr [EAX + 0x338],0x40a00000 ; 004c1d45
    TEST ESI,ESI                        ; 004c1d4f
    JNZ 0x004c1d55                      ; 004c1d51
        ;   XREF to: 004c1d55 (CONDITIONAL_JUMP)  ; LAB_004c1d55
    POP ESI                             ; 004c1d53
        ;   Label: LAB_004c1d53
    RET                                 ; 004c1d54
    MOV dword ptr [EAX + 0x348],0x40a00000 ; 004c1d55
        ;   Label: LAB_004c1d55
    POP ESI                             ; 004c1d5f
    RET                                 ; 004c1d60

