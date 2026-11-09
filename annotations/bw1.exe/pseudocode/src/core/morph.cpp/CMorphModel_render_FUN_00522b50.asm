; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_render_FUN_00522b50(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   morph_t
; SMorphPoint *    Stack[0xc]:4   ref_points
;
; XREF[1]:
;   core_morph.cpp_CMorph_render_FUN_005237e0 at 0052381d
;
; Referenced Globals:
;   undefined4 DAT_005ea892
;
; Called Functions:
;   core_morph.cpp_CMorphModel_renderFaces_FUN_00522dd0
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_00522b90
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00522b50
        ;   Label: core_morph.cpp_CMorphModel_render_FUN_00522b50
    FCOMP double ptr [0x005ea892]       ; 00522b54 | DAT_005ea892
    FNSTSW AX                           ; 00522b5a
    SAHF                                ; 00522b5c
    JNC 0x00522b60                      ; 00522b5d
        ;   XREF to: 00522b60 (CONDITIONAL_JUMP)  ; LAB_00522b60
    RET                                 ; 00522b5f
    PUSH EBX                            ; 00522b60
        ;   Label: LAB_00522b60
    MOV EDX,dword ptr [ESP + 0x10]      ; 00522b61
    PUSH EDX                            ; 00522b65
    MOV ECX,dword ptr [ESP + 0xc]       ; 00522b66
    PUSH dword ptr [ESP + 0x10]         ; 00522b6a
    PUSH ECX                            ; 00522b6e
    CALL core_morph.cpp_CMorphModel_rotatePoints_FUN_00522b90 ; 00522b6f
        ;   XREF to: 00522b90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_rotatePoints_FUN_00522b90(CMorphModel * this_ptr, float blend_factor, SMorphPoint * ref_points)
    ADD ESP,0xc                         ; 00522b74
    MOV EBX,dword ptr [ESP + 0x8]       ; 00522b77
    PUSH dword ptr [ESP + 0xc]          ; 00522b7b
    PUSH EBX                            ; 00522b7f
    CALL core_morph.cpp_CMorphModel_renderFaces_FUN_00522dd0 ; 00522b80
        ;   XREF to: 00522dd0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_renderFaces_FUN_00522dd0(CMorphModel * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 00522b85
    POP EBX                             ; 00522b88
    RET                                 ; 00522b89

