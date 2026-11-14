; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_render_FUN_004fb0e0(CMorph *this_ptr,float morph_t)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   morph_t
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_darkwolf.cpp_CDarkwolf_renderOpaque_FUN_00598e00 at 00598ec8
;   core_passngr.cpp_CPassenger_renderOpaque_FUN_0050a9b0 at 0050aa78
;   core_pryemorp.cpp_CPryeMorph_renderOpaque_FUN_00527970 at 00527a38
;   core_spirbear.cpp_CSpiritBear_renderOpaque_FUN_0059b2e0 at 0059b3a8
;   core_spireagl.cpp_CSpiritEagle_renderOpaque_FUN_00599a70 at 00599afc
;   core_spirindi.cpp_CSpiritIndian_renderOpaque_FUN_0059a760 at 0059a828
;   core_styldemo.cpp_CStylerDemon_renderOpaque_FUN_005a01c0 at 005a0288
;   core_styler.cpp_CStyler_renderOpaque_FUN_0059ddb0 at 0059de80
;
; Called Functions:
;   core_morph.cpp_CMorphModel_render_FUN_004fa450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb0e0
        ;   Label: core_morph.cpp_CMorph_render_FUN_004fb0e0
    PUSH ESI                            ; 004fb0e1
    PUSH EDI                            ; 004fb0e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fb0e3
    FLD float ptr [ESP + 0x14]          ; 004fb0e7
    FLDZ                                ; 004fb0eb
    FCOMPP                              ; 004fb0ed
    FNSTSW AX                           ; 004fb0ef
    SAHF                                ; 004fb0f1
    JA 0x004fb140                       ; 004fb0f2
        ;   XREF to: 004fb140 (CONDITIONAL_JUMP)  ; LAB_004fb140
    FLD float ptr [ESP + 0x14]          ; 004fb0f4
        ;   Label: LAB_004fb0f4
    FLD1                                ; 004fb0f8
    FCOMPP                              ; 004fb0fa
    FNSTSW AX                           ; 004fb0fc
    SAHF                                ; 004fb0fe
    JNC 0x004fb109                      ; 004fb0ff
        ;   XREF to: 004fb109 (CONDITIONAL_JUMP)  ; LAB_004fb109
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 004fb101
    MOV ESI,dword ptr [EBX + 0x660]     ; 004fb109
        ;   Label: LAB_004fb109
    FLD1                                ; 004fb10f
    PUSH ESI                            ; 004fb111
    FSUB float ptr [ESP + 0x18]         ; 004fb112
    SUB ESP,0x4                         ; 004fb116
    FSTP float ptr [ESP]                ; 004fb119
    PUSH EBX                            ; 004fb11c
    CALL core_morph.cpp_CMorphModel_render_FUN_004fa450 ; 004fb11d
        ;   XREF to: 004fa450 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_render_FUN_004fa450(CMorphModel * this_ptr, float morph_t, SMorphPoint * ref_points)
    ADD ESP,0xc                         ; 004fb122
    MOV EDI,dword ptr [EBX + 0x58]      ; 004fb125
    PUSH EDI                            ; 004fb128
    ADD EBX,0x608                       ; 004fb129
    PUSH dword ptr [ESP + 0x18]         ; 004fb12f
    PUSH EBX                            ; 004fb133
    CALL core_morph.cpp_CMorphModel_render_FUN_004fa450 ; 004fb134
        ;   XREF to: 004fa450 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_render_FUN_004fa450(CMorphModel * this_ptr, float morph_t, SMorphPoint * ref_points)
    ADD ESP,0xc                         ; 004fb139
    POP EDI                             ; 004fb13c
    POP ESI                             ; 004fb13d
    POP EBX                             ; 004fb13e
    RET                                 ; 004fb13f
    XOR EDX,EDX                         ; 004fb140
        ;   Label: LAB_004fb140
    MOV dword ptr [ESP + 0x14],EDX      ; 004fb142
    JMP 0x004fb0f4                      ; 004fb146
        ;   XREF to: 004fb0f4 (UNCONDITIONAL_JUMP)  ; LAB_004fb0f4

