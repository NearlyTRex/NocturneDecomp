; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(CInventory *this_ptr,int reset_both)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   reset_both
;
; XREF[4]:
;   core_game.cpp_FUN_004bd8ee at 004bd904
;   core_inv.cpp_FUN_004dbb40 at 004dbb68
;   core_inv.cpp_FUN_004dbd7e at 004dbd8e
;   core_inv.cpp_FUN_004dcdb0 at 004dcf95
;
; Referenced Globals:
;   undefined4 DAT_01d5ba14
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004dd340
        ;   Label: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340
    MOV EAX,dword ptr [ESP + 0x8]       ; 004dd341
    MOV EDX,dword ptr [0x01d5ba14]      ; 004dd345 | DAT_01d5ba14
    MOV ECX,dword ptr [EAX + 0x4]       ; 004dd34b
    CMP ECX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004dd34e
    JNZ 0x004dd373                      ; 004dd355
        ;   XREF to: 004dd373 (CONDITIONAL_JUMP)  ; LAB_004dd373
    MOV dword ptr [EAX + 0x344],0x0     ; 004dd357
    MOV ESI,dword ptr [ESP + 0xc]       ; 004dd361
    MOV dword ptr [EAX + 0x340],0x40a00000 ; 004dd365
    TEST ESI,ESI                        ; 004dd36f
    JNZ 0x004dd375                      ; 004dd371
        ;   XREF to: 004dd375 (CONDITIONAL_JUMP)  ; LAB_004dd375
    POP ESI                             ; 004dd373
        ;   Label: LAB_004dd373
    RET                                 ; 004dd374
    MOV dword ptr [EAX + 0x350],0x40a00000 ; 004dd375
        ;   Label: LAB_004dd375
    POP ESI                             ; 004dd37f
    RET                                 ; 004dd380

