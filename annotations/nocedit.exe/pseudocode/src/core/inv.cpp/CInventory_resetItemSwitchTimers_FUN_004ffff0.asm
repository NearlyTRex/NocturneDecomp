; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_inv.cpp_CInventory_selectItem_FUN_004fec10 at 004fec19
;   core_inv.cpp_CInventory_toggleDetailView_FUN_00501500 at 0050154d
;
; Referenced Globals:
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004ffff0
        ;   Label: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0
    MOV EDX,dword ptr [0x02db87d0]      ; 004ffff4 | g_LocalHeroIndex
    MOV EAX,dword ptr [ECX + 0x4]       ; 004ffffa
    CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0] ; 004ffffd | g_HeroActors
    JZ 0x00500007                       ; 00500004
        ;   XREF to: 00500007 (CONDITIONAL_JUMP)  ; LAB_00500007
    RET                                 ; 00500006
    MOV dword ptr [ECX + 0x338],0x0     ; 00500007
        ;   Label: LAB_00500007
    MOV dword ptr [ECX + 0x33c],0x40a00000 ; 00500011
    RET                                 ; 0050001b

