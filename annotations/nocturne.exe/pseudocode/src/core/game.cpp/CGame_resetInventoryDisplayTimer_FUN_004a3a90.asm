; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004a3a90(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_gabriela.cpp_CGabriella_processDamage_FUN_004996b0 at 00499898
;   core_stranger.cpp_CStranger_processDamage_FUN_0053e860 at 0053eb8d
;
; Referenced Globals:
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0
;
; *****************************************************************************

section .text

    MOV EAX,[0x01cae0e8]                ; 004a3a90 | g_LocalHeroIndex
        ;   Label: core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004a3a90
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a3a95
    ADD EAX,0x1f5a0                     ; 004a3a9c
    PUSH EAX                            ; 004a3aa1
    CALL core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0 ; 004a3aa2
        ;   XREF to: 004c1da0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004a3aa7
    RET                                 ; 004a3aaa

