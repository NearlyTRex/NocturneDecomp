; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_FUN_004fa710(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_inv.cpp_FUN_004f8ec0 at 004f8f55
;   core_inv.cpp_FUN_004fc370 at 004fc3bd
;
; Referenced Globals:
;   undefined4 DAT_01d06ab4
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004fa710
        ;   Label: core_inv.cpp_FUN_004fa710
    MOV EDX,dword ptr [0x01d06ab4]      ; 004fa714 | DAT_01d06ab4
    MOV EAX,dword ptr [ECX + 0x4]       ; 004fa71a
    CMP EAX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004fa71d
    JZ 0x004fa727                       ; 004fa724
        ;   XREF to: 004fa727 (CONDITIONAL_JUMP)  ; LAB_004fa727
    RET                                 ; 004fa726
    MOV dword ptr [ECX + 0x340],0x0     ; 004fa727
        ;   Label: LAB_004fa727
    MOV dword ptr [ECX + 0x344],0x40a00000 ; 004fa731
    RET                                 ; 004fa73b

