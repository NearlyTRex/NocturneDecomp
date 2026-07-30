; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_render_FUN_004e0820(CMorph *this_ptr,float morph_t)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   morph_t
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00415760 at 00415810
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860 at 004d58d0
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_004de550 at 004de607
;   core_passngr.cpp_CPassenger_renderOpaque_FUN_004efa60 at 004efb16
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_00541640 at 005417a4
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_0054dac0 at 0054dc5f
;
; Called Functions:
;   core_morph.cpp_CMorphModel_render_FUN_004dfc70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0820
        ;   Label: core_morph.cpp_CMorph_render_FUN_004e0820
    PUSH ESI                            ; 004e0821
    PUSH EDI                            ; 004e0822
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e0823
    FLD float ptr [ESP + 0x14]          ; 004e0827
    FLDZ                                ; 004e082b
    FCOMPP                              ; 004e082d
    FNSTSW AX                           ; 004e082f
    SAHF                                ; 004e0831
    JA 0x004e0880                       ; 004e0832
        ;   XREF to: 004e0880 (CONDITIONAL_JUMP)  ; LAB_004e0880
    FLD float ptr [ESP + 0x14]          ; 004e0834
        ;   Label: LAB_004e0834
    FLD1                                ; 004e0838
    FCOMPP                              ; 004e083a
    FNSTSW AX                           ; 004e083c
    SAHF                                ; 004e083e
    JNC 0x004e0849                      ; 004e083f
        ;   XREF to: 004e0849 (CONDITIONAL_JUMP)  ; LAB_004e0849
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 004e0841
    MOV ESI,dword ptr [EBX + 0x660]     ; 004e0849
        ;   Label: LAB_004e0849
    FLD1                                ; 004e084f
    PUSH ESI                            ; 004e0851
    FSUB float ptr [ESP + 0x18]         ; 004e0852
    SUB ESP,0x4                         ; 004e0856
    FSTP float ptr [ESP]                ; 004e0859
    PUSH EBX                            ; 004e085c
    CALL core_morph.cpp_CMorphModel_render_FUN_004dfc70 ; 004e085d
        ;   XREF to: 004dfc70 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_render_FUN_004dfc70(CMorphModel * this_ptr, float morph_t, SMorphPoint * ref_points)
    ADD ESP,0xc                         ; 004e0862
    MOV EDI,dword ptr [EBX + 0x58]      ; 004e0865
    PUSH EDI                            ; 004e0868
    ADD EBX,0x608                       ; 004e0869
    PUSH dword ptr [ESP + 0x18]         ; 004e086f
    PUSH EBX                            ; 004e0873
    CALL core_morph.cpp_CMorphModel_render_FUN_004dfc70 ; 004e0874
        ;   XREF to: 004dfc70 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_render_FUN_004dfc70(CMorphModel * this_ptr, float morph_t, SMorphPoint * ref_points)
    ADD ESP,0xc                         ; 004e0879
    POP EDI                             ; 004e087c
    POP ESI                             ; 004e087d
    POP EBX                             ; 004e087e
    RET                                 ; 004e087f
    XOR EDX,EDX                         ; 004e0880
        ;   Label: LAB_004e0880
    MOV dword ptr [ESP + 0x14],EDX      ; 004e0882
    JMP 0x004e0834                      ; 004e0886
        ;   XREF to: 004e0834 (UNCONDITIONAL_JUMP)  ; LAB_004e0834

