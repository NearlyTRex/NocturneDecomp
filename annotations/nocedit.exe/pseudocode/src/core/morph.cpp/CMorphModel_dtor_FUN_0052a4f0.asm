; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMorphModel * core_morph.cpp_CMorphModel_dtor_FUN_0052a4f0(CMorphModel * this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_morph.cpp_CMorphModel_free_FUN_0052a510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a4f0
        ;   Label: core_morph.cpp_CMorphModel_dtor_FUN_0052a4f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052a4f1
    PUSH EBX                            ; 0052a4f5
    CALL core_morph.cpp_CMorphModel_free_FUN_0052a510 ; 0052a4f6
        ;   XREF to: 0052a510 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_0052a510(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 0052a4fb
    MOV EAX,EBX                         ; 0052a4fe
    POP EBX                             ; 0052a500
    RET                                 ; 0052a501

