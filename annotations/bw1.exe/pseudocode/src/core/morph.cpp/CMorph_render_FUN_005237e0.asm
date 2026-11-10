; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_render_FUN_005237e0(CMorph *this_ptr,float morph_t)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   morph_t
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00414e00 at 00414ec2
;   core_mimic.cpp_CMimic_renderMirrored_FUN_00510620 at 0051069f
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_00521070 at 00521139
;   core_passngr.cpp_CPassenger_renderOpaque_FUN_00532cd0 at 00532d98
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_00592aa0 at 00592c1f
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005a6b00 at 005a6cb4
;
; Called Functions:
;   core_morph.cpp_CMorphModel_render_FUN_00522b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005237e0
        ;   Label: core_morph.cpp_CMorph_render_FUN_005237e0
    PUSH ESI                            ; 005237e1
    PUSH EDI                            ; 005237e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005237e3
    FLD float ptr [ESP + 0x14]          ; 005237e7
    FLDZ                                ; 005237eb
    FCOMPP                              ; 005237ed
    FNSTSW AX                           ; 005237ef
    SAHF                                ; 005237f1
    JA 0x00523840                       ; 005237f2
        ;   XREF to: 00523840 (CONDITIONAL_JUMP)  ; LAB_00523840
    FLD float ptr [ESP + 0x14]          ; 005237f4
        ;   Label: LAB_005237f4
    FLD1                                ; 005237f8
    FCOMPP                              ; 005237fa
    FNSTSW AX                           ; 005237fc
    SAHF                                ; 005237fe
    JNC 0x00523809                      ; 005237ff
        ;   XREF to: 00523809 (CONDITIONAL_JUMP)  ; LAB_00523809
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 00523801
    MOV ESI,dword ptr [EBX + 0x660]     ; 00523809
        ;   Label: LAB_00523809
    FLD1                                ; 0052380f
    PUSH ESI                            ; 00523811
    FSUB float ptr [ESP + 0x18]         ; 00523812
    SUB ESP,0x4                         ; 00523816
    FSTP float ptr [ESP]                ; 00523819
    PUSH EBX                            ; 0052381c
    CALL core_morph.cpp_CMorphModel_render_FUN_00522b50 ; 0052381d
        ;   XREF to: 00522b50 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_render_FUN_00522b50(CMorphModel * this_ptr, float morph_t, SMorphPoint * ref_points)
    ADD ESP,0xc                         ; 00523822
    MOV EDI,dword ptr [EBX + 0x58]      ; 00523825
    PUSH EDI                            ; 00523828
    ADD EBX,0x608                       ; 00523829
    PUSH dword ptr [ESP + 0x18]         ; 0052382f
    PUSH EBX                            ; 00523833
    CALL core_morph.cpp_CMorphModel_render_FUN_00522b50 ; 00523834
        ;   XREF to: 00522b50 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_render_FUN_00522b50(CMorphModel * this_ptr, float morph_t, SMorphPoint * ref_points)
    ADD ESP,0xc                         ; 00523839
    POP EDI                             ; 0052383c
    POP ESI                             ; 0052383d
    POP EBX                             ; 0052383e
    RET                                 ; 0052383f
    XOR EDX,EDX                         ; 00523840
        ;   Label: LAB_00523840
    MOV dword ptr [ESP + 0x14],EDX      ; 00523842
    JMP 0x005237f4                      ; 00523846
        ;   XREF to: 005237f4 (UNCONDITIONAL_JUMP)  ; LAB_005237f4

