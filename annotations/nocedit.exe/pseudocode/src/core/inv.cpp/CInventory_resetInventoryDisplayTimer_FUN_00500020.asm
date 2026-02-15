; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0 at 004e0be2
;
; Referenced Globals:
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00500020
        ;   Label: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020
    MOV EDX,dword ptr [0x02db87d0]      ; 00500024 | g_LocalHeroIndex
    MOV EAX,dword ptr [ECX + 0x4]       ; 0050002a
    CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0] ; 0050002d | g_HeroActors
    JZ 0x00500037                       ; 00500034
        ;   XREF to: 00500037 (CONDITIONAL_JUMP)  ; LAB_00500037
    RET                                 ; 00500036
    MOV dword ptr [ECX + 0x340],0x40a00000 ; 00500037
        ;   Label: LAB_00500037
    RET                                 ; 00500041

