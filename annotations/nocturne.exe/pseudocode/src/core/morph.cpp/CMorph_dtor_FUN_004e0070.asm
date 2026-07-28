; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_004e0070(CMorph *this_ptr,uint flags)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_biggs.cpp_FUN_00415a30 at 00415a49
;   core_mimic.cpp_FUN_004d4540 at 004d4589
;   core_moloch.cpp_CMoloch_dtor_FUN_004dd9f0 at 004dda0f
;   core_passngr.cpp_FUN_004ef5c0 at 004ef603
;   core_succubus.cpp_CSuccubus_dtor_FUN_00541860 at 00541879
;   core_vampboss.cpp_CVampireBoss_dtor_FUN_0054e370 at 0054e389
;
; Called Functions:
;   core_morph.cpp_CMorph_free_FUN_004e0090
;   core_morph.cpp_CMorphModel_arrdtor_FUN_004e08c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e0070
        ;   Label: core_morph.cpp_CMorph_dtor_FUN_004e0070
    PUSH EDX                            ; 004e0074
    CALL core_morph.cpp_CMorph_free_FUN_004e0090 ; 004e0075
        ;   XREF to: 004e0090 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_free_FUN_004e0090(CMorph * this_ptr)
    ADD ESP,0x4                         ; 004e007a
    PUSH 0x0                            ; 004e007d
    MOV ECX,dword ptr [ESP + 0x8]       ; 004e007f
    PUSH ECX                            ; 004e0083
    CALL core_morph.cpp_CMorphModel_arrdtor_FUN_004e08c0 ; 004e0084
        ;   XREF to: 004e08c0 (UNCONDITIONAL_CALL)  ; CMorphModel * core_morph.cpp_CMorphModel_arrdtor_FUN_004e08c0(CMorphModel * objs, uint flags)
    ADD ESP,0x8                         ; 004e0089
    RET                                 ; 004e008c

