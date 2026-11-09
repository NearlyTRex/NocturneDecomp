; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_render_FUN_005b6a10(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   morph_t
; SMorphPoint *    Stack[0xc]:4   ref_points
;
; XREF[1]:
;   core_morph.cpp_CMorph_render_FUN_005b76a0 at 005b76dd
;
; Referenced Globals:
;   undefined4 DAT_005f1777
;
; Called Functions:
;   core_morph.cpp_CMorphModel_renderFaces_FUN_005b6c90
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_005b6a50
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 005b6a10
        ;   Label: core_morph.cpp_CMorphModel_render_FUN_005b6a10
    FCOMP double ptr [0x005f1777]       ; 005b6a14 | DAT_005f1777
    FNSTSW AX                           ; 005b6a1a
    SAHF                                ; 005b6a1c
    JNC 0x005b6a20                      ; 005b6a1d
        ;   XREF to: 005b6a20 (CONDITIONAL_JUMP)  ; LAB_005b6a20
    RET                                 ; 005b6a1f
    PUSH EBX                            ; 005b6a20
        ;   Label: LAB_005b6a20
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b6a21
    PUSH EDX                            ; 005b6a25
    MOV ECX,dword ptr [ESP + 0xc]       ; 005b6a26
    PUSH dword ptr [ESP + 0x10]         ; 005b6a2a
    PUSH ECX                            ; 005b6a2e
    CALL core_morph.cpp_CMorphModel_rotatePoints_FUN_005b6a50 ; 005b6a2f
        ;   XREF to: 005b6a50 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_rotatePoints_FUN_005b6a50(CMorphModel * this_ptr, float blend_factor, SMorphPoint * ref_points)
    ADD ESP,0xc                         ; 005b6a34
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b6a37
    PUSH dword ptr [ESP + 0xc]          ; 005b6a3b
    PUSH EBX                            ; 005b6a3f
    CALL core_morph.cpp_CMorphModel_renderFaces_FUN_005b6c90 ; 005b6a40
        ;   XREF to: 005b6c90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_renderFaces_FUN_005b6c90(CMorphModel * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 005b6a45
    POP EBX                             ; 005b6a48
    RET                                 ; 005b6a49

