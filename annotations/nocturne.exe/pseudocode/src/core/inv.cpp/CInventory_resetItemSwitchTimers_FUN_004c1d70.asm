; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_inv.cpp_CInventory_selectItem_FUN_004c0950 at 004c0959
;   core_inv.cpp_CInventory_toggleDetailView_FUN_004c32e0 at 004c332d
;
; Referenced Globals:
;   undefined4 DAT_01cae0e8
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004c1d70
        ;   Label: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70
    MOV EDX,dword ptr [0x01cae0e8]      ; 004c1d74 | DAT_01cae0e8
    MOV EAX,dword ptr [ECX + 0x4]       ; 004c1d7a
    CMP EAX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 004c1d7d
    JZ 0x004c1d87                       ; 004c1d84
        ;   XREF to: 004c1d87 (CONDITIONAL_JUMP)  ; LAB_004c1d87
    RET                                 ; 004c1d86
    MOV dword ptr [ECX + 0x338],0x0     ; 004c1d87
        ;   Label: LAB_004c1d87
    MOV dword ptr [ECX + 0x33c],0x40a00000 ; 004c1d91
    RET                                 ; 004c1d9b

