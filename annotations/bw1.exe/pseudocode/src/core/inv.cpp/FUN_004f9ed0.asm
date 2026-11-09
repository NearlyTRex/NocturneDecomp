; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightGun * __cdecl core_inv_cpp_FUN_004f9ed0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_doc.cpp_FUN_00474400 at 00474454
;   core_stranger.cpp_FUN_005907a0 at 00590a13
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f9ed0
        ;   Label: core_inv.cpp_FUN_004f9ed0
    MOV EDX,dword ptr [EAX + 0x45c]     ; 004f9ed4
    TEST EDX,EDX                        ; 004f9eda
    JZ 0x004f9eeb                       ; 004f9edc
        ;   XREF to: 004f9eeb (CONDITIONAL_JUMP)  ; LAB_004f9eeb
    MOV ECX,dword ptr [EDX + 0x2d4]     ; 004f9ede
    MOV EAX,EDX                         ; 004f9ee4
    TEST ECX,ECX                        ; 004f9ee6
    JZ 0x004f9eeb                       ; 004f9ee8
        ;   XREF to: 004f9eeb (CONDITIONAL_JUMP)  ; LAB_004f9eeb
    RET                                 ; 004f9eea
    XOR EAX,EAX                         ; 004f9eeb
        ;   Label: LAB_004f9eeb
    RET                                 ; 004f9eed

