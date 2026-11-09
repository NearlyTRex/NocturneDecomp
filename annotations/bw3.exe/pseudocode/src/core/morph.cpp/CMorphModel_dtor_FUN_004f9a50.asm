; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_CMorphModel_dtor_FUN_004f9a50(CMorphModel *this_ptr,uint flags)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_morph.cpp_CMorphModel_free_FUN_004f9a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9a50
        ;   Label: core_morph.cpp_CMorphModel_dtor_FUN_004f9a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f9a51
    PUSH EBX                            ; 004f9a55
    CALL core_morph.cpp_CMorphModel_free_FUN_004f9a70 ; 004f9a56
        ;   XREF to: 004f9a70 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_004f9a70(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 004f9a5b
    MOV EAX,EBX                         ; 004f9a5e
    POP EBX                             ; 004f9a60
    RET                                 ; 004f9a61

