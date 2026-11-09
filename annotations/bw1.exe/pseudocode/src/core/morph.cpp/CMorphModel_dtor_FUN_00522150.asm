; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_CMorphModel_dtor_FUN_00522150(CMorphModel *this_ptr,uint flags)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_morph.cpp_CMorphModel_free_FUN_00522170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522150
        ;   Label: core_morph.cpp_CMorphModel_dtor_FUN_00522150
    MOV EBX,dword ptr [ESP + 0x8]       ; 00522151
    PUSH EBX                            ; 00522155
    CALL core_morph.cpp_CMorphModel_free_FUN_00522170 ; 00522156
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_00522170(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 0052215b
    MOV EAX,EBX                         ; 0052215e
    POP EBX                             ; 00522160
    RET                                 ; 00522161

