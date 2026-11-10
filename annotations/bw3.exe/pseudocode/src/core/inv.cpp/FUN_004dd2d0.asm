; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004dd2d0(int param_1)
;
;
; XREF[4]:
;   core_inv.cpp_CInventory_load_FUN_004dc750 at 004dc9a8
;   core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 at 004dbc2b
;   core_inv.cpp_CInventory_select_FUN_004dcb40 at 004dcbaa
;   core_inv.cpp_FUN_004dbd7e at 004dbe5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004dd2d0
        ;   Label: core_inv.cpp_FUN_004dd2d0
    MOV EDX,dword ptr [EAX + 0x338]     ; 004dd2d4
    TEST EDX,EDX                        ; 004dd2da
    JNZ 0x004dd2df                      ; 004dd2dc
        ;   XREF to: 004dd2df (CONDITIONAL_JUMP)  ; LAB_004dd2df
    RET                                 ; 004dd2de
    MOV ECX,dword ptr [EAX + 0x464]     ; 004dd2df
        ;   Label: LAB_004dd2df
    MOV EDX,dword ptr [EDX + 0x568]     ; 004dd2e5
    MOV dword ptr [ECX + 0x314],EDX     ; 004dd2eb
    MOV EDX,dword ptr [EAX + 0x338]     ; 004dd2f1
    MOV ECX,dword ptr [EAX + 0x464]     ; 004dd2f7
    MOV EAX,dword ptr [EDX + 0x56c]     ; 004dd2fd
    MOV dword ptr [ECX + 0x318],EAX     ; 004dd303
    RET                                 ; 004dd309

