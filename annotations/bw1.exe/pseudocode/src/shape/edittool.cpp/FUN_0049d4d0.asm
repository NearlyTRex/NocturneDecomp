; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_0049d4d0(CEdButton *this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0 at 0049d4b6
;
; Referenced Globals:
;   undefined4 DAT_01c3f5d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049d4d0
        ;   Label: shape_edittool.cpp_FUN_0049d4d0
    CMP EDX,dword ptr [0x01c3f5d0]      ; 0049d4d4 | DAT_01c3f5d0
    JZ 0x0049c9dd                       ; 0049d4da
        ;   XREF to: 0049c9dd (CONDITIONAL_JUMP)  ; LAB_0049c9dd
    RET                                 ; 0049d4e0

