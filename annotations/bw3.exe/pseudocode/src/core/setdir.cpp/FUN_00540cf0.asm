; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setdir_cpp_FUN_00540cf0(CDemonSet *param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00540be0 at 00540c04
;
; Referenced Globals:
;   undefined4 DAT_005f2af8
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c60dac
;   undefined4 DAT_0212551c
;   undefined4 DAT_02125520
;   undefined4 DAT_02125521
;   undefined4 DAT_0212561c
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046d2f0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
;   engine_drender.cpp_popViewport_FUN_0046d320
;   engine_special.cpp_clearZBufferNative_FUN_00560dd4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540cf0
        ;   Label: core_setdir.cpp_FUN_00540cf0
    PUSH ESI                            ; 00540cf1
    PUSH EDI                            ; 00540cf2
    PUSH EBP                            ; 00540cf3
    SUB ESP,0x14                        ; 00540cf4
    MOV EDX,dword ptr [0x005f2afc]      ; 00540cf7 | DAT_005f2afc
    PUSH EDX                            ; 00540cfd | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00540cfe
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00540d03
    PUSH 0x0                            ; 00540d06
    MOV ECX,dword ptr [0x005f2afc]      ; 00540d08 | DAT_005f2afc
    PUSH ECX                            ; 00540d0e | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x8],EAX       ; 00540d0f
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520 ; 00540d13
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00540d18
    PUSH 0x30                           ; 00540d1b
    PUSH 0x40                           ; 00540d1d
    PUSH 0x0                            ; 00540d1f
    PUSH 0x0                            ; 00540d21
    MOV EBX,dword ptr [0x005f2afc]      ; 00540d23 | DAT_005f2afc
    PUSH EBX                            ; 00540d29 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046d2f0 ; 00540d2a
        ;   XREF to: 0046d2f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046d2f0(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 00540d2f
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540d32
    MOV ESI,dword ptr [EAX]             ; 00540d36
    XOR EBP,EBP                         ; 00540d38
    TEST ESI,ESI                        ; 00540d3a
    JLE 0x00540e4d                      ; 00540d3c
        ;   XREF to: 00540e4d (CONDITIONAL_JUMP)  ; LAB_00540e4d
    ADD EAX,0x4                         ; 00540d42
    MOV dword ptr [ESP + 0x4],EAX       ; 00540d45
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540d49
    ADD EAX,0x110                       ; 00540d4d
    MOV dword ptr [ESP + 0x8],EAX       ; 00540d52
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540d56
    MOV EBX,0x212551c                   ; 00540d5a
    ADD EAX,0x104                       ; 00540d5f
    MOV dword ptr [ESP + 0xc],EBX       ; 00540d64
    MOV dword ptr [ESP + 0x10],EAX      ; 00540d68
    IMUL EBX,EBP,0x1a4                  ; 00540d6c
        ;   Label: LAB_00540d6c
    MOV EDI,dword ptr [ESP + 0x10]      ; 00540d72
    PUSH EDI                            ; 00540d76
    MOV EAX,[0x005f2af8]                ; 00540d77 | DAT_005f2af8
    PUSH EAX                            ; 00540d7c | DAT_01bdd7e4
    MOV ESI,dword ptr [ESP + 0xc]       ; 00540d7d
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 00540d81
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 00540d86
    ADD EBX,ESI                         ; 00540d89
    MOV EDX,dword ptr [0x005f2af8]      ; 00540d8b | DAT_005f2af8
    PUSH dword ptr [EBX + 0x144]        ; 00540d91
    PUSH EDX                            ; 00540d97 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090 ; 00540d98
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 00540d9d
    MOV ECX,dword ptr [ESP + 0x8]       ; 00540da0
    PUSH ECX                            ; 00540da4
    MOV EBX,dword ptr [0x005f2af8]      ; 00540da5 | DAT_005f2af8
    PUSH EBX                            ; 00540dab | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10 ; 00540dac
        ;   XREF to: 0046cc10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00540db1
    PUSH 0x270151c                      ; 00540db4
    MOV ESI,dword ptr [0x005f2af8]      ; 00540db9 | DAT_005f2af8
    PUSH ESI                            ; 00540dbf | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60 ; 00540dc0
        ;   XREF to: 0046ce60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60(CDemonRenderer * this_ptr, CVector3i * input_point)
    ADD ESP,0x8                         ; 00540dc5
    CALL engine_special.cpp_clearZBufferNative_FUN_00560dd4 ; 00540dc8
        ;   XREF to: 00560dd4 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_00560dd4()
    PUSH 0x0                            ; 00540dcd
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00540dcf
    PUSH 0x461c3f9a                     ; 00540dd3
    PUSH EDI                            ; 00540dd8
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 ; 00540dd9
        ;   XREF to: 00533b80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00540dde
    XOR EBX,EBX                         ; 00540de1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00540de3
    MOV ECX,0x100                       ; 00540de7
        ;   Label: LAB_00540de7
    MOV EDI,EDX                         ; 00540dec
    MOV ESI,dword ptr [EBX + 0x1c60dac] ; 00540dee | DAT_01c60dac
    PUSH EDI                            ; 00540df4
    MOV EAX,ECX                         ; 00540df5
    SHR ECX,0x2                         ; 00540df7
    MOVSD.REP ES:EDI,ESI                ; 00540dfa | DAT_0212551c | DAT_02125520 | DAT_0212561c
    MOV CL,AL                           ; 00540dfc
    AND CL,0x3                          ; 00540dfe
    MOVSB.REP ES:EDI,ESI                ; 00540e01 | DAT_02125520 | DAT_02125521
    POP EDI                             ; 00540e03
    ADD EBX,0x4                         ; 00540e04
    ADD EDX,0x100                       ; 00540e07
    CMP EBX,0xc0                        ; 00540e0d
    JNZ 0x00540de7                      ; 00540e13
        ;   XREF to: 00540de7 (CONDITIONAL_JUMP)  ; LAB_00540de7
    MOV EDI,dword ptr [ESP + 0xc]       ; 00540e15
    MOV EAX,dword ptr [ESP + 0x8]       ; 00540e19
    MOV EDX,dword ptr [ESP + 0x10]      ; 00540e1d
    INC EBP                             ; 00540e21
    ADD EAX,0x1a4                       ; 00540e22
    ADD EDI,0x3000                      ; 00540e27
    MOV dword ptr [ESP + 0x8],EAX       ; 00540e2d
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540e31
    ADD EDX,0x1a4                       ; 00540e35
    MOV dword ptr [ESP + 0xc],EDI       ; 00540e3b
    MOV ECX,dword ptr [EAX]             ; 00540e3f
    MOV dword ptr [ESP + 0x10],EDX      ; 00540e41
    CMP EBP,ECX                         ; 00540e45
    JL 0x00540d6c                       ; 00540e47
        ;   XREF to: 00540d6c (CONDITIONAL_JUMP)  ; LAB_00540d6c
    MOV EBP,dword ptr [0x005f2afc]      ; 00540e4d | DAT_005f2afc
        ;   Label: LAB_00540e4d
    PUSH EBP                            ; 00540e53 | DAT_01bdd7e4
    CALL engine_drender.cpp_popViewport_FUN_0046d320 ; 00540e54
        ;   XREF to: 0046d320 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_popViewport_FUN_0046d320()
    ADD ESP,0x4                         ; 00540e59
    MOV EAX,dword ptr [ESP]             ; 00540e5c
    PUSH EAX                            ; 00540e5f
    MOV EDX,dword ptr [0x005f2afc]      ; 00540e60 | DAT_005f2afc
    PUSH EDX                            ; 00540e66 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520 ; 00540e67
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00540e6c
    ADD ESP,0x14                        ; 00540e6f
    POP EBP                             ; 00540e72
    POP EDI                             ; 00540e73
    POP ESI                             ; 00540e74
    POP EBX                             ; 00540e75
    RET                                 ; 00540e76

