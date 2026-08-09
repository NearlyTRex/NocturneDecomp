; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdCheck * __cdecl shape_edittool_cpp_CEdCheck_dtor_FUN_004771d0(CEdCheck *this_ptr,uint flags)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004772e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004771d0
        ;   Label: shape_edittool.cpp_CEdCheck_dtor_FUN_004771d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004771d1
    PUSH EBX                            ; 004771d5
    CALL shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004772e0 ; 004771d6
        ;   XREF to: 004772e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004772e0(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 004771db
    MOV EAX,EBX                         ; 004771de
    POP EBX                             ; 004771e0
    RET                                 ; 004771e1

