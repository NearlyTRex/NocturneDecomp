; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CEdCheck * shape_edittool.cpp_CEdCheck_dtor_FUN_004a6a40(CEdCheck * this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
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
    CALL shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50 ; 004a6a46 | void shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50(CEdCheck * this_ptr)
        ;   XREF to: 004a6b50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a6a4b
    MOV EAX,EBX                         ; 004a6a4e
    POP EBX                             ; 004a6a50
    RET                                 ; 004a6a51

