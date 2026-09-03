; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004a3a90 at 004a3aa2
;
; Referenced Globals:
;   int g_LocalHeroIndex
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004c1da0
        ;   Label: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0
    MOV EDX,dword ptr [0x01cae0e8]      ; 004c1da4 | g_LocalHeroIndex
    MOV EAX,dword ptr [ECX + 0x4]       ; 004c1daa
    CMP EAX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 004c1dad
    JZ 0x004c1db7                       ; 004c1db4
        ;   XREF to: 004c1db7 (CONDITIONAL_JUMP)  ; LAB_004c1db7
    RET                                 ; 004c1db6
    MOV dword ptr [ECX + 0x340],0x40a00000 ; 004c1db7
        ;   Label: LAB_004c1db7
    RET                                 ; 004c1dc1

