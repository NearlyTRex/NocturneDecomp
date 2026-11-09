; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_004fa8c0(CMorph *this_ptr,uint flags)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[9]:
;   core_passngr.cpp_CPassenger_dtor_FUN_0050a530 at 0050a573
;   core_pryemorp.cpp_CPryeMorph_dtor_FUN_005274e0 at 00527523
;   core_spirbear.cpp_CSpiritBear_dtor_FUN_0059b540 at 0059b559
;   core_spireagl.cpp_CSpiritEagle_dtor_FUN_00599e40 at 00599e59
;   core_spirindi.cpp_CSpiritIndian_dtor_FUN_0059a970 at 0059a989
;   core_styldemo.cpp_CStylerDemon_dtor_FUN_005a0910 at 005a0925
;   core_styler.cpp_CStyler_dtor_FUN_0059df60 at 0059df75
;   unkafter_darkwolf.cpp_CDarkwolf_dtor_FUN_005990d0 at 005990e5
;   unkafter_darkwolf.cpp_CWhitewolf_dtor_FUN_00599030 at 00599045
;
; Called Functions:
;   core_morph.cpp_CMorph_free_FUN_004fa8e0
;   unkafter_box.cpp_FUN_004fb180
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fa8c0
        ;   Label: core_morph.cpp_CMorph_dtor_FUN_004fa8c0
    PUSH EDX                            ; 004fa8c4
    CALL core_morph.cpp_CMorph_free_FUN_004fa8e0 ; 004fa8c5
        ;   XREF to: 004fa8e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_free_FUN_004fa8e0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 004fa8ca
    PUSH 0x0                            ; 004fa8cd
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fa8cf
    PUSH ECX                            ; 004fa8d3
    CALL unkafter_box.cpp_FUN_004fb180  ; 004fa8d4
        ;   XREF to: 004fb180 (UNCONDITIONAL_CALL)  ; CMorphModel * unkafter_box.cpp_FUN_004fb180(CMorphModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004fa8d9
    RET                                 ; 004fa8dc

