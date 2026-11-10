; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_inv.cpp_CInventory_selectItem_FUN_004dbb50 at 004dbb59
;   core_inv.cpp_CInventory_toggleDetailView_FUN_004defa0 at 004defed
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004dd2c0
        ;   Label: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0
    MOV EDX,dword ptr [0x01cedef4]      ; 004dd2c4 | DAT_01cedef4
    MOV EAX,dword ptr [ECX + 0x4]       ; 004dd2ca
    CMP EAX,dword ptr [EDX*0x4 + 0x1cedee4] ; 004dd2cd
    JZ 0x004dd2d7                       ; 004dd2d4
        ;   XREF to: 004dd2d7 (CONDITIONAL_JUMP)  ; LAB_004dd2d7
    RET                                 ; 004dd2d6
    MOV dword ptr [ECX + 0x340],0x0     ; 004dd2d7
        ;   Label: LAB_004dd2d7
    MOV dword ptr [ECX + 0x344],0x40a00000 ; 004dd2e1
    RET                                 ; 004dd2eb

