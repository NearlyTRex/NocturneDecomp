; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(int param_1)
;
;
; XREF[1]:
;   FUN_0053f310 at 0053f60d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c1830
        ;   Label: core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830
    MOV EDX,dword ptr [EAX + 0x454]     ; 004c1834
    TEST EDX,EDX                        ; 004c183a
    JZ 0x004c184b                       ; 004c183c
        ;   XREF to: 004c184b (CONDITIONAL_JUMP)  ; LAB_004c184b
    MOV ECX,dword ptr [EDX + 0x2cc]     ; 004c183e
    MOV EAX,EDX                         ; 004c1844
    TEST ECX,ECX                        ; 004c1846
    JZ 0x004c184b                       ; 004c1848
        ;   XREF to: 004c184b (CONDITIONAL_JUMP)  ; LAB_004c184b
    RET                                 ; 004c184a
    XOR EAX,EAX                         ; 004c184b
        ;   Label: LAB_004c184b
    RET                                 ; 004c184d

