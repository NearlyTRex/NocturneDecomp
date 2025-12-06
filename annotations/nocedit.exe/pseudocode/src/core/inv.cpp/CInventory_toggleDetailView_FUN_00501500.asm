; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_CInventory_toggleDetailView_FUN_00501500(CInventory * this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 at 004dc7c6
;
; Referenced Globals:
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501500
        ;   Label: core_inv.cpp_CInventory_toggleDetailView_FUN_00501500
    MOV EBX,dword ptr [ESP + 0x8]       ; 00501501
    MOV EDX,dword ptr [0x02db87d0]      ; 00501505 | int g_LocalHeroIndex
    MOV EAX,dword ptr [EBX + 0x4]       ; 0050150b
    CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0] ; 0050150e | CHero *[4] g_HeroActors
    JNZ 0x0050154a                      ; 00501515 | LAB_0050154a
        ;   XREF to: 0050154a (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x44c],0x0     ; 00501517
    SETZ AL                             ; 0050151e
    FLD float ptr [EBX + 0x33c]         ; 00501521
    AND EAX,0xff                        ; 00501527
    FLDZ                                ; 0050152c
    MOV dword ptr [EBX + 0x44c],EAX     ; 0050152e
    FCOMPP                              ; 00501534
    FNSTSW AX                           ; 00501536
    SAHF                                ; 00501538
    JC 0x0050154c                       ; 00501539 | LAB_0050154c
        ;   XREF to: 0050154c (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x338]         ; 0050153b
        ;   Label: LAB_0050153b
    FLDZ                                ; 00501541
    FCOMPP                              ; 00501543
    FNSTSW AX                           ; 00501545
    SAHF                                ; 00501547
    JC 0x00501557                       ; 00501548 | LAB_00501557
        ;   XREF to: 00501557 (CONDITIONAL_JUMP)
    POP EBX                             ; 0050154a
        ;   Label: LAB_0050154a
    RET                                 ; 0050154b
    PUSH EBX                            ; 0050154c
        ;   Label: LAB_0050154c
    CALL core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0 ; 0050154d | void core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(CInventory * this_ptr)
        ;   XREF to: 004ffff0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00501552
    JMP 0x0050153b                      ; 00501555 | LAB_0050153b
        ;   XREF to: 0050153b (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00501557
        ;   Label: LAB_00501557
    PUSH EBX                            ; 00501559
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0 ; 0050155a | void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(CInventory * this_ptr, int reset_both)
        ;   XREF to: 004fffa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050155f
    POP EBX                             ; 00501562
    RET                                 ; 00501563

