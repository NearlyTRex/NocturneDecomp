; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_doc.cpp_CDoc_processDamage_FUN_004737b0 at 00473a7b
;   core_gabriela.cpp_CGabriella_processDamage_FUN_004cab10 at 004cacf8
;   core_stranger.cpp_CStranger_processDamage_FUN_0058fcb0 at 0058ff01
;
; Referenced Globals:
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004fa740
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d06ab4]                ; 004d6320 | DAT_01d06ab4
        ;   Label: core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d6325
    ADD EAX,0x1fae8                     ; 004d632c
    PUSH EAX                            ; 004d6331
    CALL core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004fa740 ; 004d6332
        ;   XREF to: 004fa740 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004fa740(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004d6337
    RET                                 ; 004d633a

