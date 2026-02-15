; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004a6be0(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 at 004a6c7b
;   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60 at 004a6af6
;
; Called Functions:
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a6be0
        ;   Label: shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0
    PUSH EDX                            ; 004a6be4
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70 ; 004a6be5
        ;   XREF to: 004a6b70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(CEdCheck * this_ptr)
    MOV EDX,EAX                         ; 004a6bea
    SAR EDX,0x1f                        ; 004a6bec
    ADD ESP,0x4                         ; 004a6bef
    SUB EAX,EDX                         ; 004a6bf2
    SAR EAX,0x1                         ; 004a6bf4
    RET                                 ; 004a6bf6

