; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_render_FUN_004dfc70(undefined4 param_1,float param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_morph.cpp_CMorph_render_FUN_004e0820 at 004e085d
;
; Referenced Globals:
;   undefined4 DAT_0058ad24
;
; Called Functions:
;   core_morph.cpp_CMorphModel_renderFaces_FUN_004dfea0
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_004dfcb0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 004dfc70
        ;   Label: core_morph.cpp_CMorphModel_render_FUN_004dfc70
    FCOMP double ptr [0x0058ad24]       ; 004dfc74 | DAT_0058ad24
    FNSTSW AX                           ; 004dfc7a
    SAHF                                ; 004dfc7c
    JNC 0x004dfc80                      ; 004dfc7d
        ;   XREF to: 004dfc80 (CONDITIONAL_JUMP)  ; LAB_004dfc80
    RET                                 ; 004dfc7f
    PUSH EBX                            ; 004dfc80
        ;   Label: LAB_004dfc80
    MOV EDX,dword ptr [ESP + 0x10]      ; 004dfc81
    PUSH EDX                            ; 004dfc85
    MOV ECX,dword ptr [ESP + 0xc]       ; 004dfc86
    PUSH dword ptr [ESP + 0x10]         ; 004dfc8a
    PUSH ECX                            ; 004dfc8e
    CALL core_morph.cpp_CMorphModel_rotatePoints_FUN_004dfcb0 ; 004dfc8f
        ;   XREF to: 004dfcb0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorphModel_rotatePoints_FUN_004dfcb0()
    ADD ESP,0xc                         ; 004dfc94
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dfc97
    PUSH dword ptr [ESP + 0xc]          ; 004dfc9b
    PUSH EBX                            ; 004dfc9f
    CALL core_morph.cpp_CMorphModel_renderFaces_FUN_004dfea0 ; 004dfca0
        ;   XREF to: 004dfea0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorphModel_renderFaces_FUN_004dfea0()
    ADD ESP,0x8                         ; 004dfca5
    POP EBX                             ; 004dfca8
    RET                                 ; 004dfca9

