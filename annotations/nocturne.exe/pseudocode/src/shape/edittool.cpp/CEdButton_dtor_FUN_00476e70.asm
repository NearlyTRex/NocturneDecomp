; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdButton * __cdecl shape_edittool_cpp_CEdButton_dtor_FUN_00476e70(CEdButton *this_ptr,uint flags)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_00476e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476e70
        ;   Label: shape_edittool.cpp_CEdButton_dtor_FUN_00476e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00476e71
    PUSH EBX                            ; 00476e75
    CALL shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_00476e90 ; 00476e76
        ;   XREF to: 00476e90 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_00476e90(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00476e7b
    MOV EAX,EBX                         ; 00476e7e
    POP EBX                             ; 00476e80
    RET                                 ; 00476e81

