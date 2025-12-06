; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50(CEdCheck * this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEdCheck_dtor_FUN_004a6a40 at 004a6a46
;
; Referenced Globals:
;   CEdButton* g_ActiveButton
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a6b50
        ;   Label: shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50
    CMP EDX,dword ptr [0x02cf2b00]      ; 004a6b54 | CEdButton * g_ActiveButton
    JZ 0x004a5b4d                       ; 004a6b5a | LAB_004a5b4d
        ;   XREF to: 004a5b4d (CONDITIONAL_JUMP)
    RET                                 ; 004a6b60

