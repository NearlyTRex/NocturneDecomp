; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdButton_clearActiveButtonIfMatch_FUN_00484e70(CEdButton *this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEdButton_dtor_FUN_00484e50 at 00484e56
;
; Referenced Globals:
;   void* g_PTR_01c26410
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00484e70
        ;   Label: shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_00484e70
    CMP EDX,dword ptr [0x01c26410]      ; 00484e74 | g_PTR_01c26410
    JZ 0x0048437d                       ; 00484e7a
        ;   XREF to: 0048437d (CONDITIONAL_JUMP)  ; LAB_0048437d
    RET                                 ; 00484e80

