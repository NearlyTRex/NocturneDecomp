; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_CMorphModel_dtor_FUN_005b6010(CMorphModel *this_ptr,uint flags)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_morph.cpp_CMorphModel_free_FUN_005b6030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6010
        ;   Label: core_morph.cpp_CMorphModel_dtor_FUN_005b6010
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b6011
    PUSH EBX                            ; 005b6015
    CALL core_morph.cpp_CMorphModel_free_FUN_005b6030 ; 005b6016
        ;   XREF to: 005b6030 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_005b6030(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 005b601b
    MOV EAX,EBX                         ; 005b601e
    POP EBX                             ; 005b6020
    RET                                 ; 005b6021

