; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530(CEdButton *this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 at 004a6516
;
; Referenced Globals:
;   void* g_ActiveControl
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a6530
        ;   Label: shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530
    CMP EDX,dword ptr [0x02cf2b00]      ; 004a6534 | g_ActiveControl
    JZ 0x004a5b4d                       ; 004a653a
        ;   XREF to: 004a5b4d (CONDITIONAL_JUMP)  ; LAB_004a5b4d
    RET                                 ; 004a6540

