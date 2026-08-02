; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_CMorphModel_dtor_FUN_004df270(CMorphModel *this_ptr,uint flags)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_morph.cpp_CMorphModel_free_FUN_004df290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df270
        ;   Label: core_morph.cpp_CMorphModel_dtor_FUN_004df270
    MOV EBX,dword ptr [ESP + 0x8]       ; 004df271
    PUSH EBX                            ; 004df275
    CALL core_morph.cpp_CMorphModel_free_FUN_004df290 ; 004df276
        ;   XREF to: 004df290 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_004df290(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 004df27b
    MOV EAX,EBX                         ; 004df27e
    POP EBX                             ; 004df280
    RET                                 ; 004df281

