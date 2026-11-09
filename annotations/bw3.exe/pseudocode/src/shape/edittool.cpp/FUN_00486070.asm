; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_00486070(CEdButton *this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEdButton_dtor_FUN_00486050 at 00486056
;
; Referenced Globals:
;   undefined4 DAT_01c5bb78
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00486070
        ;   Label: shape_edittool.cpp_FUN_00486070
    CMP EDX,dword ptr [0x01c5bb78]      ; 00486074 | DAT_01c5bb78
    JZ 0x0048557d                       ; 0048607a
        ;   XREF to: 0048557d (CONDITIONAL_JUMP)  ; LAB_0048557d
    RET                                 ; 00486080

