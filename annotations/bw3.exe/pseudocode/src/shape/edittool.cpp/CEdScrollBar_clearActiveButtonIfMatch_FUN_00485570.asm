; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00485570(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEdScrollBar_dtor_FUN_00485550 at 00485556
;
; Referenced Globals:
;   undefined4 DAT_01c5bb78
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00485570
        ;   Label: shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00485570
    CMP EDX,dword ptr [0x01c5bb78]      ; 00485574 | DAT_01c5bb78
    JZ 0x0048557d                       ; 0048557a
        ;   XREF to: 0048557d (CONDITIONAL_JUMP)  ; LAB_0048557d
    RET                                 ; 0048557c
    XOR ECX,ECX                         ; 0048557d
        ;   Label: LAB_0048557d
    MOV dword ptr [0x01c5bb78],ECX      ; 0048557f | DAT_01c5bb78
    RET                                 ; 00485585

