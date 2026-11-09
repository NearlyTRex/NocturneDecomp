; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_free_FUN_004fa8e0(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_morph.cpp_CMorph_dtor_FUN_004fa8c0 at 004fa8c5
;
; Called Functions:
;   core_morph.cpp_CMorphModel_free_FUN_004f9a70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fa8e0
        ;   Label: core_morph.cpp_CMorph_free_FUN_004fa8e0
    PUSH EDX                            ; 004fa8e4
    CALL core_morph.cpp_CMorphModel_free_FUN_004f9a70 ; 004fa8e5
        ;   XREF to: 004f9a70 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_004f9a70(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 004fa8ea
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fa8ed
    ADD EAX,0x608                       ; 004fa8f1
    PUSH EAX                            ; 004fa8f6
    CALL core_morph.cpp_CMorphModel_free_FUN_004f9a70 ; 004fa8f7
        ;   XREF to: 004f9a70 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_004f9a70(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 004fa8fc
    RET                                 ; 004fa8ff

