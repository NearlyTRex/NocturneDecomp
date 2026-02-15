; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightGun * __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c5270 at 005c5b40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ffab0
        ;   Label: core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
    MOV EDX,dword ptr [EAX + 0x454]     ; 004ffab4
    TEST EDX,EDX                        ; 004ffaba
    JZ 0x004ffacb                       ; 004ffabc
        ;   XREF to: 004ffacb (CONDITIONAL_JUMP)  ; LAB_004ffacb
    MOV ECX,dword ptr [EDX + 0x2d4]     ; 004ffabe
    MOV EAX,EDX                         ; 004ffac4
    TEST ECX,ECX                        ; 004ffac6
    JZ 0x004ffacb                       ; 004ffac8
        ;   XREF to: 004ffacb (CONDITIONAL_JUMP)  ; LAB_004ffacb
    RET                                 ; 004ffaca
    XOR EAX,EAX                         ; 004ffacb
        ;   Label: LAB_004ffacb
    RET                                 ; 004ffacd

