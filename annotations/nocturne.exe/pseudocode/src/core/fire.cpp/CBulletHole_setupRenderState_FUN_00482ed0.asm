; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0(void)
;
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a732
;   core_fire.cpp_FUN_0048a970 at 0048a97d
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b84b4
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c08d24
;   undefined4 DAT_01c08d28
;   undefined4 DAT_01c08d2c
;   undefined4 DAT_01c08d30
;   undefined4 DAT_01c08d34
;   undefined4 DAT_01c08d38
;   undefined4 DAT_01c08d3c
;   undefined4 DAT_01c08d40
;   undefined4 DAT_01c08d44
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482ed0
        ;   Label: core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0
    PUSH ESI                            ; 00482ed1
    PUSH EDI                            ; 00482ed2
    MOV EDX,0x4                         ; 00482ed3
    MOV EBX,0x1                         ; 00482ed8
    MOV ESI,0x2                         ; 00482edd
    MOV EDI,0x3                         ; 00482ee2
    PUSH 0x5b84b4                       ; 00482ee7 | DAT_005b84b4
    XOR ECX,ECX                         ; 00482eec
    MOV dword ptr [0x01c08d24],EDX      ; 00482eee | DAT_01c08d24
    MOV dword ptr [0x01c08d38],ECX      ; 00482ef4 | DAT_01c08d38
    MOV dword ptr [0x01c08d3c],EBX      ; 00482efa | DAT_01c08d3c
    MOV dword ptr [0x01c08d40],ESI      ; 00482f00 | DAT_01c08d40
    MOV dword ptr [0x01c08d44],EDI      ; 00482f06 | DAT_01c08d44
    MOV dword ptr [0x01c08d28],ECX      ; 00482f0c | DAT_01c08d28
    MOV dword ptr [0x01c08d2c],ECX      ; 00482f12 | DAT_01c08d2c
    MOV EBX,dword ptr [0x005ae704]      ; 00482f18 | DAT_005ae704
    MOV EDX,0xffff                      ; 00482f1e
    PUSH EBX                            ; 00482f23 | DAT_01b4d738
    MOV dword ptr [0x01c08d34],ECX      ; 00482f24 | DAT_01c08d34
    MOV dword ptr [0x01c08d30],EDX      ; 00482f2a | DAT_01c08d30
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00482f30
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    ADD ESP,0x8                         ; 00482f35
    PUSH 0xffff                         ; 00482f38
    MOV ESI,dword ptr [0x005ae704]      ; 00482f3d | DAT_005ae704
    PUSH ESI                            ; 00482f43 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00482f44
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 00482f49
    POP EDI                             ; 00482f4c
    POP ESI                             ; 00482f4d
    POP EBX                             ; 00482f4e
    RET                                 ; 00482f4f

