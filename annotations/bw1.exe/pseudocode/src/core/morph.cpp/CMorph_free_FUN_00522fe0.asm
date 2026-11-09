; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_free_FUN_00522fe0(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_morph.cpp_CMorph_dtor_FUN_00522fc0 at 00522fc5
;
; Called Functions:
;   core_morph.cpp_CMorphModel_free_FUN_00522170
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00522fe0
        ;   Label: core_morph.cpp_CMorph_free_FUN_00522fe0
    PUSH EDX                            ; 00522fe4
    CALL core_morph.cpp_CMorphModel_free_FUN_00522170 ; 00522fe5
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_00522170(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 00522fea
    MOV EAX,dword ptr [ESP + 0x4]       ; 00522fed
    ADD EAX,0x608                       ; 00522ff1
    PUSH EAX                            ; 00522ff6
    CALL core_morph.cpp_CMorphModel_free_FUN_00522170 ; 00522ff7
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_00522170(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 00522ffc
    RET                                 ; 00522fff

