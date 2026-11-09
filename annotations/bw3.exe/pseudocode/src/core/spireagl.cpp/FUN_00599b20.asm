; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_spireagl_cpp_FUN_00599b20(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_skeleton.cpp_FUN_0054e3a0
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599b20
        ;   Label: core_spireagl.cpp_FUN_00599b20
    PUSH ESI                            ; 00599b21
    PUSH EDI                            ; 00599b22
    PUSH EBP                            ; 00599b23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00599b24
    PUSH EBX                            ; 00599b28
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00599b29
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00599b2e
    PUSH 0xffff                         ; 00599b31
    MOV EDX,dword ptr [0x005f2afc]      ; 00599b36 | DAT_005f2afc
    PUSH EDX                            ; 00599b3c | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x27bc],0x1    ; 00599b3d
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00599b47
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00599b4c
    PUSH 0x1                            ; 00599b4f
    MOV ECX,dword ptr [0x005f2afc]      ; 00599b51 | DAT_005f2afc
    PUSH ECX                            ; 00599b57 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00599b58
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00599b5d
    PUSH 0x1                            ; 00599b60
    MOV ESI,dword ptr [0x005f2afc]      ; 00599b62 | DAT_005f2afc
    PUSH ESI                            ; 00599b68 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120 ; 00599b69
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00599b6e
    PUSH 0x0                            ; 00599b71
    PUSH 0x1                            ; 00599b73
    PUSH 0x2e7                          ; 00599b75
    PUSH -0x1                           ; 00599b7a
    LEA EAX,[EBX + 0x158]               ; 00599b7c
    PUSH EAX                            ; 00599b82
    CALL core_skeleton.cpp_FUN_0054e3a0 ; 00599b83
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00599b88
    MOV EDI,dword ptr [0x005f2afc]      ; 00599b8b | DAT_005f2afc
    PUSH EDI                            ; 00599b91 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 ; 00599b92
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00599b97
    PUSH 0x0                            ; 00599b9a
    MOV EBP,dword ptr [0x005f2afc]      ; 00599b9c | DAT_005f2afc
    PUSH EBP                            ; 00599ba2 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00599ba3
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00599ba8
    PUSH EBX                            ; 00599bab
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00599bac
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00599bb1
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 00599bb4
    POP EBP                             ; 00599bba
    POP EDI                             ; 00599bbb
    POP ESI                             ; 00599bbc
    POP EBX                             ; 00599bbd
    RET                                 ; 00599bbe

