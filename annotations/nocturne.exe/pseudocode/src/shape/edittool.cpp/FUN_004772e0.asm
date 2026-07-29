; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_004772e0(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_FUN_004771d0 at 004771d6
;
; Referenced Globals:
;   undefined4 DAT_01bcde24
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004772e0
        ;   Label: shape_edittool.cpp_FUN_004772e0
    CMP EDX,dword ptr [0x01bcde24]      ; 004772e4 | DAT_01bcde24
    JZ 0x004764bd                       ; 004772ea
        ;   XREF to: 004764bd (CONDITIONAL_JUMP)  ; LAB_004764bd
    RET                                 ; 004772f0

