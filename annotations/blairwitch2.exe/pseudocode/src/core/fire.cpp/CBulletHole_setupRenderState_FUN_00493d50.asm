; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_00493d50(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50 at 0049cb5d
;   core_fire.cpp_FUN_0049c780 at 0049c8b2
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_006150f4
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c3ded4
;   undefined4 DAT_01c3ded8
;   undefined4 DAT_01c3dedc
;   undefined4 DAT_01c3dee0
;   undefined4 DAT_01c3dee4
;   undefined4 DAT_01c3dee8
;   undefined4 DAT_01c3deec
;   undefined4 DAT_01c3def0
;   undefined4 DAT_01c3def4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493d50
        ;   Label: core_fire.cpp_CBulletHole_setupRenderState_FUN_00493d50
    PUSH ESI                            ; 00493d51
    PUSH EDI                            ; 00493d52
    MOV EDX,0x4                         ; 00493d53
    MOV EBX,0x1                         ; 00493d58
    MOV ESI,0x2                         ; 00493d5d
    MOV EDI,0x3                         ; 00493d62
    PUSH 0x6150f4                       ; 00493d67 | DAT_006150f4
    XOR ECX,ECX                         ; 00493d6c
    MOV dword ptr [0x01c3ded4],EDX      ; 00493d6e | DAT_01c3ded4
    MOV dword ptr [0x01c3dee8],ECX      ; 00493d74 | DAT_01c3dee8
    MOV dword ptr [0x01c3deec],EBX      ; 00493d7a | DAT_01c3deec
    MOV dword ptr [0x01c3def0],ESI      ; 00493d80 | DAT_01c3def0
    MOV dword ptr [0x01c3def4],EDI      ; 00493d86 | DAT_01c3def4
    MOV dword ptr [0x01c3ded8],ECX      ; 00493d8c | DAT_01c3ded8
    MOV dword ptr [0x01c3dedc],ECX      ; 00493d92 | DAT_01c3dedc
    MOV EBX,dword ptr [0x0060b280]      ; 00493d98 | DAT_0060b280
    MOV EDX,0xffff                      ; 00493d9e
    PUSH EBX                            ; 00493da3 | DAT_01ba5c50
    MOV dword ptr [0x01c3dee4],ECX      ; 00493da4 | DAT_01c3dee4
    MOV dword ptr [0x01c3dee0],EDX      ; 00493daa | DAT_01c3dee0
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00493db0
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00493db5
    PUSH 0x8000                         ; 00493db8
    MOV ESI,dword ptr [0x0060b280]      ; 00493dbd | DAT_0060b280
    PUSH ESI                            ; 00493dc3 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00493dc4
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00493dc9
    POP EDI                             ; 00493dcc
    POP ESI                             ; 00493dcd
    POP EBX                             ; 00493dce
    RET                                 ; 00493dcf

