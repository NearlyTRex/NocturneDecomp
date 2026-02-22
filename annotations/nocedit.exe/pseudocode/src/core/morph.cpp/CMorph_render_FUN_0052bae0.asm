; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_render_FUN_0052bae0(CMorph *this_ptr,float morph_t)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   morph_t
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_004189b0 at 00418a5e
;   core_mimic.cpp_CMimic_FUN_005205f0 at 0052065e
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_00529750 at 00529805
;   core_morph.cpp_CMorph_previewMorph_FUN_0052ca90 at 0052cb34
;   core_passngr.cpp_CPassenger_renderOpaque_FUN_005460c0 at 00546174
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590 at 005c76f2
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0 at 005e6f3d
;
; Called Functions:
;   core_morph.cpp_CMorphModel_render_FUN_0052af30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052bae0
        ;   Label: core_morph.cpp_CMorph_render_FUN_0052bae0
    PUSH ESI                            ; 0052bae1
    PUSH EDI                            ; 0052bae2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052bae3
    FLD float ptr [ESP + 0x14]          ; 0052bae7
    FLDZ                                ; 0052baeb
    FCOMPP                              ; 0052baed
    FNSTSW AX                           ; 0052baef
    SAHF                                ; 0052baf1
    JA 0x0052bb40                       ; 0052baf2
        ;   XREF to: 0052bb40 (CONDITIONAL_JUMP)  ; LAB_0052bb40
    FLD float ptr [ESP + 0x14]          ; 0052baf4
        ;   Label: LAB_0052baf4
    FLD1                                ; 0052baf8
    FCOMPP                              ; 0052bafa
    FNSTSW AX                           ; 0052bafc
    SAHF                                ; 0052bafe
    JNC 0x0052bb09                      ; 0052baff
        ;   XREF to: 0052bb09 (CONDITIONAL_JUMP)  ; LAB_0052bb09
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 0052bb01
    MOV ESI,dword ptr [EBX + 0x660]     ; 0052bb09
        ;   Label: LAB_0052bb09
    FLD1                                ; 0052bb0f
    PUSH ESI                            ; 0052bb11
    FSUB float ptr [ESP + 0x18]         ; 0052bb12
    SUB ESP,0x4                         ; 0052bb16
    FSTP float ptr [ESP]                ; 0052bb19
    PUSH EBX                            ; 0052bb1c
    CALL core_morph.cpp_CMorphModel_render_FUN_0052af30 ; 0052bb1d
        ;   XREF to: 0052af30 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_render_FUN_0052af30(CMorphModel * this_ptr, float morph_t, SMorphPoint * ref_points)
    ADD ESP,0xc                         ; 0052bb22
    MOV EDI,dword ptr [EBX + 0x58]      ; 0052bb25
    PUSH EDI                            ; 0052bb28
    ADD EBX,0x608                       ; 0052bb29
    PUSH dword ptr [ESP + 0x18]         ; 0052bb2f
    PUSH EBX                            ; 0052bb33
    CALL core_morph.cpp_CMorphModel_render_FUN_0052af30 ; 0052bb34
        ;   XREF to: 0052af30 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_render_FUN_0052af30(CMorphModel * this_ptr, float morph_t, SMorphPoint * ref_points)
    ADD ESP,0xc                         ; 0052bb39
    POP EDI                             ; 0052bb3c
    POP ESI                             ; 0052bb3d
    POP EBX                             ; 0052bb3e
    RET                                 ; 0052bb3f
    XOR EDX,EDX                         ; 0052bb40
        ;   Label: LAB_0052bb40
    MOV dword ptr [ESP + 0x14],EDX      ; 0052bb42
    JMP 0x0052baf4                      ; 0052bb46
        ;   XREF to: 0052baf4 (UNCONDITIONAL_JUMP)  ; LAB_0052baf4

