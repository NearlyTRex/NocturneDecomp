; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_004ac6f0(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0 at 004b54ad
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b5232
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c3d4
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c57094
;   undefined4 DAT_01c57098
;   undefined4 DAT_01c5709c
;   undefined4 DAT_01c570a0
;   undefined4 DAT_01c570a4
;   undefined4 DAT_01c570a8
;   undefined4 DAT_01c570ac
;   undefined4 DAT_01c570b0
;   undefined4 DAT_01c570b4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac6f0
        ;   Label: core_fire.cpp_CBulletHole_setupRenderState_FUN_004ac6f0
    PUSH ESI                            ; 004ac6f1
    PUSH EDI                            ; 004ac6f2
    MOV EDX,0x4                         ; 004ac6f3
    MOV EBX,0x1                         ; 004ac6f8
    MOV ESI,0x2                         ; 004ac6fd
    MOV EDI,0x3                         ; 004ac702
    PUSH 0x61c3d4                       ; 004ac707 | DAT_0061c3d4
    XOR ECX,ECX                         ; 004ac70c
    MOV dword ptr [0x01c57094],EDX      ; 004ac70e | DAT_01c57094
    MOV dword ptr [0x01c570a8],ECX      ; 004ac714 | DAT_01c570a8
    MOV dword ptr [0x01c570ac],EBX      ; 004ac71a | DAT_01c570ac
    MOV dword ptr [0x01c570b0],ESI      ; 004ac720 | DAT_01c570b0
    MOV dword ptr [0x01c570b4],EDI      ; 004ac726 | DAT_01c570b4
    MOV dword ptr [0x01c57098],ECX      ; 004ac72c | DAT_01c57098
    MOV dword ptr [0x01c5709c],ECX      ; 004ac732 | DAT_01c5709c
    MOV EBX,dword ptr [0x00612560]      ; 004ac738 | DAT_00612560
    MOV EDX,0xffff                      ; 004ac73e
    PUSH EBX                            ; 004ac743 | DAT_01bc120c
    MOV dword ptr [0x01c570a4],ECX      ; 004ac744 | DAT_01c570a4
    MOV dword ptr [0x01c570a0],EDX      ; 004ac74a | DAT_01c570a0
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004ac750
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004ac755
    PUSH 0x8000                         ; 004ac758
    MOV ESI,dword ptr [0x00612560]      ; 004ac75d | DAT_00612560
    PUSH ESI                            ; 004ac763 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004ac764
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ac769
    POP EDI                             ; 004ac76c
    POP ESI                             ; 004ac76d
    POP EBX                             ; 004ac76e
    RET                                 ; 004ac76f

