; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEdCheck_dtor_FUN_004a6a40 at 004a6a46
;
; Referenced Globals:
;   void* g_ActiveControl
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a6b50
        ;   Label: shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50
    CMP EDX,dword ptr [0x02cf2b00]      ; 004a6b54 | g_ActiveControl
    JZ 0x004a5b4d                       ; 004a6b5a
        ;   XREF to: 004a5b4d (CONDITIONAL_JUMP)  ; LAB_004a5b4d
    RET                                 ; 004a6b60

