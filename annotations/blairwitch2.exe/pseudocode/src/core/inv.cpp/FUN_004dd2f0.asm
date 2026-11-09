; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_FUN_004dd2f0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004bb8b0 at 004bb8c2
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004dd2f0
        ;   Label: core_inv.cpp_FUN_004dd2f0
    MOV EDX,dword ptr [0x01cedef4]      ; 004dd2f4 | DAT_01cedef4
    MOV EAX,dword ptr [ECX + 0x4]       ; 004dd2fa
    CMP EAX,dword ptr [EDX*0x4 + 0x1cedee4] ; 004dd2fd
    JZ 0x004dd307                       ; 004dd304
        ;   XREF to: 004dd307 (CONDITIONAL_JUMP)  ; LAB_004dd307
    RET                                 ; 004dd306
    MOV dword ptr [ECX + 0x348],0x40a00000 ; 004dd307
        ;   Label: LAB_004dd307
    RET                                 ; 004dd311

