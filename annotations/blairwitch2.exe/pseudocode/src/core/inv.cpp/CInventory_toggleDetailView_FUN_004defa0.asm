; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_004defa0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_FUN_004b76c0 at 004b7af7
;   core_game.cpp_FUN_004be8a0 at 004bebf6
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004defa0
        ;   Label: core_inv.cpp_CInventory_toggleDetailView_FUN_004defa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004defa1
    MOV EDX,dword ptr [0x01cedef4]      ; 004defa5 | DAT_01cedef4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004defab
    CMP EAX,dword ptr [EDX*0x4 + 0x1cedee4] ; 004defae
    JNZ 0x004defea                      ; 004defb5
        ;   XREF to: 004defea (CONDITIONAL_JUMP)  ; LAB_004defea
    CMP dword ptr [EBX + 0x454],0x0     ; 004defb7
    SETZ AL                             ; 004defbe
    FLD float ptr [EBX + 0x344]         ; 004defc1
    AND EAX,0xff                        ; 004defc7
    FLDZ                                ; 004defcc
    MOV dword ptr [EBX + 0x454],EAX     ; 004defce
    FCOMPP                              ; 004defd4
    FNSTSW AX                           ; 004defd6
    SAHF                                ; 004defd8
    JC 0x004defec                       ; 004defd9
        ;   XREF to: 004defec (CONDITIONAL_JUMP)  ; LAB_004defec
    FLD float ptr [EBX + 0x340]         ; 004defdb
        ;   Label: LAB_004defdb
    FLDZ                                ; 004defe1
    FCOMPP                              ; 004defe3
    FNSTSW AX                           ; 004defe5
    SAHF                                ; 004defe7
    JC 0x004deff7                       ; 004defe8
        ;   XREF to: 004deff7 (CONDITIONAL_JUMP)  ; LAB_004deff7
    POP EBX                             ; 004defea
        ;   Label: LAB_004defea
    RET                                 ; 004defeb
    PUSH EBX                            ; 004defec
        ;   Label: LAB_004defec
    CALL core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0 ; 004defed
        ;   XREF to: 004dd2c0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004deff2
    JMP 0x004defdb                      ; 004deff5
        ;   XREF to: 004defdb (UNCONDITIONAL_JUMP)  ; LAB_004defdb
    PUSH 0x0                            ; 004deff7
        ;   Label: LAB_004deff7
    PUSH EBX                            ; 004deff9
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270 ; 004deffa
        ;   XREF to: 004dd270 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(CInventory * this_ptr, int reset_both)
    ADD ESP,0x8                         ; 004defff
    POP EBX                             ; 004df002
    RET                                 ; 004df003

