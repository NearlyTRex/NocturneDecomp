; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdCheck * __cdecl shape_edittool_cpp_CEdCheck_dtor_FUN_004a6a40(CEdCheck *this_ptr,uint flags)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6a40
        ;   Label: shape_edittool.cpp_CEdCheck_dtor_FUN_004a6a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a6a41
    PUSH EBX                            ; 004a6a45
    CALL shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50 ; 004a6a46
        ;   XREF to: 004a6b50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 004a6a4b
    MOV EAX,EBX                         ; 004a6a4e
    POP EBX                             ; 004a6a50
    RET                                 ; 004a6a51

