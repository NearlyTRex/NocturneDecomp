; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_render_FUN_004fa450(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   morph_t
; SMorphPoint *    Stack[0xc]:4   ref_points
;
; XREF[1]:
;   core_morph.cpp_CMorph_render_FUN_004fb0e0 at 004fb11d
;
; Referenced Globals:
;   undefined4 DAT_005c96a3
;
; Called Functions:
;   core_morph.cpp_CMorphModel_renderFaces_FUN_004fa6d0
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_004fa490
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 004fa450
        ;   Label: core_morph.cpp_CMorphModel_render_FUN_004fa450
    FCOMP double ptr [0x005c96a3]       ; 004fa454 | DAT_005c96a3
    FNSTSW AX                           ; 004fa45a
    SAHF                                ; 004fa45c
    JNC 0x004fa460                      ; 004fa45d
        ;   XREF to: 004fa460 (CONDITIONAL_JUMP)  ; LAB_004fa460
    RET                                 ; 004fa45f
    PUSH EBX                            ; 004fa460
        ;   Label: LAB_004fa460
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fa461
    PUSH EDX                            ; 004fa465
    MOV ECX,dword ptr [ESP + 0xc]       ; 004fa466
    PUSH dword ptr [ESP + 0x10]         ; 004fa46a
    PUSH ECX                            ; 004fa46e
    CALL core_morph.cpp_CMorphModel_rotatePoints_FUN_004fa490 ; 004fa46f
        ;   XREF to: 004fa490 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_rotatePoints_FUN_004fa490(CMorphModel * this_ptr, float blend_factor, SMorphPoint * ref_points)
    ADD ESP,0xc                         ; 004fa474
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fa477
    PUSH dword ptr [ESP + 0xc]          ; 004fa47b
    PUSH EBX                            ; 004fa47f
    CALL core_morph.cpp_CMorphModel_renderFaces_FUN_004fa6d0 ; 004fa480
        ;   XREF to: 004fa6d0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_renderFaces_FUN_004fa6d0(CMorphModel * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 004fa485
    POP EBX                             ; 004fa488
    RET                                 ; 004fa489

