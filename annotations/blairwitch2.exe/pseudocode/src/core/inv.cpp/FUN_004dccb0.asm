; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightGun * __cdecl core_inv_cpp_FUN_004dccb0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_stranger.cpp_FUN_0056db50 at 0056ddc3
;   unkafter_stranger.cpp_FUN_0045bdc0 at 0045c077
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004dccb0
        ;   Label: core_inv.cpp_FUN_004dccb0
    MOV EDX,dword ptr [EAX + 0x458]     ; 004dccb4
    TEST EDX,EDX                        ; 004dccba
    JZ 0x004dcccb                       ; 004dccbc
        ;   XREF to: 004dcccb (CONDITIONAL_JUMP)  ; LAB_004dcccb
    MOV ECX,dword ptr [EDX + 0x430]     ; 004dccbe
    MOV EAX,EDX                         ; 004dccc4
    TEST ECX,ECX                        ; 004dccc6
    JZ 0x004dcccb                       ; 004dccc8
        ;   XREF to: 004dcccb (CONDITIONAL_JUMP)  ; LAB_004dcccb
    RET                                 ; 004dccca
    XOR EAX,EAX                         ; 004dcccb
        ;   Label: LAB_004dcccb
    RET                                 ; 004dcccd

