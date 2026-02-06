; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(CInventory *this_ptr,int reset_both)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   reset_both
;
; XREF[5]:
;   core_game.cpp_CGame_resetWeaponSwitchTimers_FUN_004e0bb0 at 004e0bc4
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10 at 004fed1e
;   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 at 004feb38
;   core_inv.cpp_CInventory_toggleDetailView_FUN_00501500 at 0050155a
;   core_inv.cpp_CInventory_updateInventory_FUN_004ffad0 at 004ffb0f
;
; Referenced Globals:
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004fffa0
        ;   Label: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fffa1
    MOV EDX,dword ptr [0x02db87d0]      ; 004fffa5 | g_LocalHeroIndex
    MOV ECX,dword ptr [EAX + 0x4]       ; 004fffab
    CMP ECX,dword ptr [EDX*0x4 + 0x2db87c0] ; 004fffae | g_HeroActors
    JNZ 0x004fffd3                      ; 004fffb5
        ;   XREF to: 004fffd3 (CONDITIONAL_JUMP)  ; LAB_004fffd3
    MOV dword ptr [EAX + 0x33c],0x0     ; 004fffb7
    MOV ESI,dword ptr [ESP + 0xc]       ; 004fffc1
    MOV dword ptr [EAX + 0x338],0x40a00000 ; 004fffc5
    TEST ESI,ESI                        ; 004fffcf
    JNZ 0x004fffd5                      ; 004fffd1
        ;   XREF to: 004fffd5 (CONDITIONAL_JUMP)  ; LAB_004fffd5
    POP ESI                             ; 004fffd3
        ;   Label: LAB_004fffd3
    RET                                 ; 004fffd4
    MOV dword ptr [EAX + 0x348],0x40a00000 ; 004fffd5
        ;   Label: LAB_004fffd5
    POP ESI                             ; 004fffdf
    RET                                 ; 004fffe0

