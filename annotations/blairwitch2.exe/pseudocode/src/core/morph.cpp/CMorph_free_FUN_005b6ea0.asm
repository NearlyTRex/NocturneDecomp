; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_free_FUN_005b6ea0(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_morph.cpp_CMorph_dtor_FUN_005b6e80 at 005b6e85
;
; Called Functions:
;   core_morph.cpp_CMorphModel_free_FUN_005b6030
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b6ea0
        ;   Label: core_morph.cpp_CMorph_free_FUN_005b6ea0
    PUSH EDX                            ; 005b6ea4
    CALL core_morph.cpp_CMorphModel_free_FUN_005b6030 ; 005b6ea5
        ;   XREF to: 005b6030 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_005b6030(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 005b6eaa
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b6ead
    ADD EAX,0x608                       ; 005b6eb1
    PUSH EAX                            ; 005b6eb6
    CALL core_morph.cpp_CMorphModel_free_FUN_005b6030 ; 005b6eb7
        ;   XREF to: 005b6030 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_005b6030(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 005b6ebc
    RET                                 ; 005b6ebf

