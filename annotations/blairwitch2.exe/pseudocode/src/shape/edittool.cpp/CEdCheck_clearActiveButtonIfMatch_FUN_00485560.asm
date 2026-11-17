; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_00485560(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* g_PTR_01c26410
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00485560
        ;   Label: shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_00485560
    CMP EDX,dword ptr [0x01c26410]      ; 00485564 | g_PTR_01c26410
    JZ 0x0048437d                       ; 0048556a
        ;   XREF to: 0048437d (CONDITIONAL_JUMP)  ; LAB_0048437d
    RET                                 ; 00485570

