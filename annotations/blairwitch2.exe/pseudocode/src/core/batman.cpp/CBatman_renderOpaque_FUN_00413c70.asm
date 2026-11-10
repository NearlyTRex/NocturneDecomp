; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_batman_cpp_CBatman_renderOpaque_FUN_00413c70(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005cbb5e
;   undefined4 DAT_005f3098
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d1cdc8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0
;   core_motion.cpp_FUN_005042e0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413c70
        ;   Label: core_batman.cpp_CBatman_renderOpaque_FUN_00413c70
    PUSH ESI                            ; 00413c71
    PUSH EDI                            ; 00413c72
    PUSH EBP                            ; 00413c73
    MOV EBP,ESP                         ; 00413c74
    SUB ESP,0x3c                        ; 00413c76
    AND ESP,0xfffffff8                  ; 00413c79
    MOV EBX,dword ptr [EBP + 0x14]      ; 00413c7c
    MOV EDX,dword ptr [0x0060b280]      ; 00413c7f | DAT_0060b280
    PUSH EDX                            ; 00413c85 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80 ; 00413c86
        ;   XREF to: 0046bc80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00413c8b
    MOV ESI,EAX                         ; 00413c8e
    TEST EAX,EAX                        ; 00413c90
    JZ 0x00413ca6                       ; 00413c92
        ;   XREF to: 00413ca6 (CONDITIONAL_JUMP)  ; LAB_00413ca6
    CMP dword ptr [EBX + 0x10b94],0x2   ; 00413c94
        ;   Label: LAB_00413c94
    JNZ 0x00413cae                      ; 00413c9b
        ;   XREF to: 00413cae (CONDITIONAL_JUMP)  ; LAB_00413cae
    XOR EAX,EAX                         ; 00413c9d
        ;   Label: LAB_00413c9d
    MOV ESP,EBP                         ; 00413c9f
    POP EBP                             ; 00413ca1
    POP EDI                             ; 00413ca2
    POP ESI                             ; 00413ca3
    POP EBX                             ; 00413ca4
    RET                                 ; 00413ca5
    MOV dword ptr [EBX + 0x2828],EAX    ; 00413ca6
        ;   Label: LAB_00413ca6
    JMP 0x00413c94                      ; 00413cac
        ;   XREF to: 00413c94 (UNCONDITIONAL_JUMP)  ; LAB_00413c94
    MOV EDI,dword ptr [0x0060b280]      ; 00413cae | DAT_0060b280
        ;   Label: LAB_00413cae
    PUSH EDI                            ; 00413cb4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00413cb5
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00413cba
    TEST EAX,EAX                        ; 00413cbd
    JZ 0x00413cca                       ; 00413cbf
        ;   XREF to: 00413cca (CONDITIONAL_JUMP)  ; LAB_00413cca
    CMP dword ptr [EBX + 0x10b94],0x0   ; 00413cc1
    JNZ 0x00413c9d                      ; 00413cc8
        ;   XREF to: 00413c9d (CONDITIONAL_JUMP)  ; LAB_00413c9d
    TEST ESI,ESI                        ; 00413cca
        ;   Label: LAB_00413cca
    JNZ 0x00413c9d                      ; 00413ccc
        ;   XREF to: 00413c9d (CONDITIONAL_JUMP)  ; LAB_00413c9d
    CMP dword ptr [EBX + 0x2568],0x0    ; 00413cce
    JNZ 0x00413c9d                      ; 00413cd5
        ;   XREF to: 00413c9d (CONDITIONAL_JUMP)  ; LAB_00413c9d
    PUSH EBX                            ; 00413cd7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00413cd8
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00413cdd
    PUSH ESI                            ; 00413ce0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00413ce1
    PUSH EBX                            ; 00413ce7
    LEA ESI,[ESP + 0x2c]                ; 00413ce8
    LEA EDI,[ESP + 0x14]                ; 00413cec
    CALL dword ptr [EAX + 0x24]         ; 00413cf0
    MOV ECX,0x6                         ; 00413cf3
    ADD ESP,0x4                         ; 00413cf8
    LEA EAX,[ESP + 0x10]                ; 00413cfb
    LEA ESI,[ESP + 0x28]                ; 00413cff
    PUSH EAX                            ; 00413d03
    MOVSD.REP ES:EDI,ESI                ; 00413d04
    CALL core_box.cpp_FUN_0041a840      ; 00413d06
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00413d0b
    MOV EDI,EAX                         ; 00413d0e
    TEST EAX,EAX                        ; 00413d10
    JZ 0x00413d6a                       ; 00413d12
        ;   XREF to: 00413d6a (CONDITIONAL_JUMP)  ; LAB_00413d6a
    MOV ECX,dword ptr [EBX + 0x10b94]   ; 00413d14
    MOV dword ptr [EBX + 0x2828],0x1    ; 00413d1a
    TEST ECX,ECX                        ; 00413d24
    JNZ 0x00413d7c                      ; 00413d26
        ;   XREF to: 00413d7c (CONDITIONAL_JUMP)  ; LAB_00413d7c
    PUSH EBX                            ; 00413d28
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0 ; 00413d29
        ;   XREF to: 00424bd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00413d2e
        ;   Label: LAB_00413d2e
    CMP dword ptr [0x01d1cdc8],0x0      ; 00413d31 | DAT_01d1cdc8
        ;   Label: LAB_00413d31
    JZ 0x00413d6a                       ; 00413d38
        ;   XREF to: 00413d6a (CONDITIONAL_JUMP)  ; LAB_00413d6a
    MOV ECX,dword ptr [0x0060b280]      ; 00413d3a | DAT_0060b280
    PUSH ECX                            ; 00413d40 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00413d41
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00413d46
    TEST EAX,EAX                        ; 00413d49
    JNZ 0x00413d6a                      ; 00413d4b
        ;   XREF to: 00413d6a (CONDITIONAL_JUMP)  ; LAB_00413d6a
    PUSH EBX                            ; 00413d4d
    LEA EAX,[EBX + 0x2b4]               ; 00413d4e
    PUSH EAX                            ; 00413d54
    CALL core_motion.cpp_FUN_005042e0   ; 00413d55
        ;   XREF to: 005042e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005042e0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00413d5a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00413d5d
    PUSH EBX                            ; 00413d63
    CALL dword ptr [EAX + 0x60]         ; 00413d64
    ADD ESP,0x4                         ; 00413d67
    PUSH EBX                            ; 00413d6a
        ;   Label: LAB_00413d6a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00413d6b
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00413d70
    MOV EAX,EDI                         ; 00413d73
    MOV ESP,EBP                         ; 00413d75
    POP EBP                             ; 00413d77
    POP EDI                             ; 00413d78
    POP ESI                             ; 00413d79
    POP EBX                             ; 00413d7a
    RET                                 ; 00413d7b
    CMP ECX,0x1                         ; 00413d7c
        ;   Label: LAB_00413d7c
    JNZ 0x00413e19                      ; 00413d7f
        ;   XREF to: 00413e19 (CONDITIONAL_JUMP)  ; LAB_00413e19
    FLD float ptr [EBX + 0x10b98]       ; 00413d85
    FLD1                                ; 00413d8b
    FSUBRP                              ; 00413d8d
    FDIV float ptr [0x005f3098]         ; 00413d8f | DAT_005f3098
    FSTP float ptr [ESP + 0x8]          ; 00413d95
    FLD float ptr [ESP + 0x8]           ; 00413d99
        ;   Label: LAB_00413d99
    FLDZ                                ; 00413d9d
    FXCH                                ; 00413d9f
    FSTP double ptr [ESP]               ; 00413da1
    FCOMP double ptr [ESP]              ; 00413da4
    FNSTSW AX                           ; 00413da7
    SAHF                                ; 00413da9
    JNC 0x00413d31                      ; 00413daa
        ;   XREF to: 00413d31 (CONDITIONAL_JUMP)  ; LAB_00413d31
    PUSH 0x0                            ; 00413dac
    MOV EDX,dword ptr [0x0060b280]      ; 00413dae | DAT_0060b280
    PUSH EDX                            ; 00413db4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00413db5
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00413dba
    MOV ECX,dword ptr [0x0060b280]      ; 00413dbd | DAT_0060b280
    PUSH dword ptr [ESP + 0x8]          ; 00413dc3
    PUSH ECX                            ; 00413dc7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0 ; 00413dc8
        ;   XREF to: 0046b8f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0(CDemonRenderer * this_ptr, float render_alpha)
    ADD ESP,0x8                         ; 00413dcd
    PUSH 0x1                            ; 00413dd0
    MOV ESI,dword ptr [0x0060b280]      ; 00413dd2 | DAT_0060b280
    PUSH ESI                            ; 00413dd8 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540 ; 00413dd9
        ;   XREF to: 0046c540 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00413dde
    LEA ESI,[EBX + 0x2b4]               ; 00413de1
    FLD double ptr [ESP]                ; 00413de7
    FCOMP double ptr [0x005cbb5e]       ; 00413dea | DAT_005cbb5e
    FNSTSW AX                           ; 00413df0
    SAHF                                ; 00413df2
    JBE 0x00413e47                      ; 00413df3
        ;   XREF to: 00413e47 (CONDITIONAL_JUMP)  ; LAB_00413e47
    PUSH 0x0                            ; 00413df5
    PUSH 0x1                            ; 00413df7
    PUSH 0x2e7                          ; 00413df9
    PUSH -0x1                           ; 00413dfe
        ;   Label: LAB_00413dfe
    PUSH ESI                            ; 00413e00
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 ; 00413e01
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00413e06
    MOV EAX,[0x0060b280]                ; 00413e09 | DAT_0060b280
    PUSH EAX                            ; 00413e0e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900 ; 00413e0f
        ;   XREF to: 0046c900 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer * this_ptr)
    JMP 0x00413d2e                      ; 00413e14
        ;   XREF to: 00413d2e (UNCONDITIONAL_JUMP)  ; LAB_00413d2e
    FLD float ptr [EBX + 0x10b98]       ; 00413e19
        ;   Label: LAB_00413e19
    FSUBR double ptr [0x005cbb5e]       ; 00413e1f | DAT_005cbb5e
    FDIV float ptr [0x005f3098]         ; 00413e25 | DAT_005f3098
    FST float ptr [ESP + 0x8]           ; 00413e2b
    FLDZ                                ; 00413e2f
    FCOMPP                              ; 00413e31
    FNSTSW AX                           ; 00413e33
    SAHF                                ; 00413e35
    JBE 0x00413d99                      ; 00413e36
        ;   XREF to: 00413d99 (CONDITIONAL_JUMP)  ; LAB_00413d99
    XOR EAX,EAX                         ; 00413e3c
    MOV dword ptr [ESP + 0x8],EAX       ; 00413e3e
    JMP 0x00413d99                      ; 00413e42
        ;   XREF to: 00413d99 (UNCONDITIONAL_JUMP)  ; LAB_00413d99
    PUSH 0x0                            ; 00413e47
        ;   Label: LAB_00413e47
    PUSH 0x1                            ; 00413e49
    PUSH 0x267                          ; 00413e4b
    JMP 0x00413dfe                      ; 00413e50
        ;   XREF to: 00413dfe (UNCONDITIONAL_JUMP)  ; LAB_00413dfe

