; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dracbrid_cpp_FUN_00464ac0(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d10c4
;   undefined4 DAT_005f565c
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d1cdc8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_FUN_00424bd0
;   core_motion.cpp_FUN_005042e0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540
;   engine_drender.cpp_FUN_0046b8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464ac0
        ;   Label: core_dracbrid.cpp_FUN_00464ac0
    PUSH ESI                            ; 00464ac1
    PUSH EDI                            ; 00464ac2
    PUSH EBP                            ; 00464ac3
    MOV EBP,ESP                         ; 00464ac4
    SUB ESP,0x3c                        ; 00464ac6
    AND ESP,0xfffffff8                  ; 00464ac9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00464acc
    MOV EDX,dword ptr [0x0060b280]      ; 00464acf | DAT_0060b280
    PUSH EDX                            ; 00464ad5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80 ; 00464ad6
        ;   XREF to: 0046bc80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00464adb
    MOV ESI,EAX                         ; 00464ade
    TEST EAX,EAX                        ; 00464ae0
    JZ 0x00464af6                       ; 00464ae2
        ;   XREF to: 00464af6 (CONDITIONAL_JUMP)  ; LAB_00464af6
    CMP dword ptr [EBX + 0x10b84],0x2   ; 00464ae4
        ;   Label: LAB_00464ae4
    JNZ 0x00464afe                      ; 00464aeb
        ;   XREF to: 00464afe (CONDITIONAL_JUMP)  ; LAB_00464afe
    XOR EAX,EAX                         ; 00464aed
        ;   Label: LAB_00464aed
    MOV ESP,EBP                         ; 00464aef
    POP EBP                             ; 00464af1
    POP EDI                             ; 00464af2
    POP ESI                             ; 00464af3
    POP EBX                             ; 00464af4
    RET                                 ; 00464af5
    MOV dword ptr [EBX + 0x2828],EAX    ; 00464af6
        ;   Label: LAB_00464af6
    JMP 0x00464ae4                      ; 00464afc
        ;   XREF to: 00464ae4 (UNCONDITIONAL_JUMP)  ; LAB_00464ae4
    MOV EDI,dword ptr [0x0060b280]      ; 00464afe | DAT_0060b280
        ;   Label: LAB_00464afe
    PUSH EDI                            ; 00464b04 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00464b05
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00464b0a
    TEST EAX,EAX                        ; 00464b0d
    JZ 0x00464b1a                       ; 00464b0f
        ;   XREF to: 00464b1a (CONDITIONAL_JUMP)  ; LAB_00464b1a
    CMP dword ptr [EBX + 0x10b84],0x0   ; 00464b11
    JNZ 0x00464aed                      ; 00464b18
        ;   XREF to: 00464aed (CONDITIONAL_JUMP)  ; LAB_00464aed
    TEST ESI,ESI                        ; 00464b1a
        ;   Label: LAB_00464b1a
    JNZ 0x00464aed                      ; 00464b1c
        ;   XREF to: 00464aed (CONDITIONAL_JUMP)  ; LAB_00464aed
    CMP dword ptr [EBX + 0x2568],0x0    ; 00464b1e
    JNZ 0x00464aed                      ; 00464b25
        ;   XREF to: 00464aed (CONDITIONAL_JUMP)  ; LAB_00464aed
    PUSH EBX                            ; 00464b27
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00464b28
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00464b2d
    PUSH ESI                            ; 00464b30
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00464b31
    PUSH EBX                            ; 00464b37
    LEA ESI,[ESP + 0x2c]                ; 00464b38
    LEA EDI,[ESP + 0x14]                ; 00464b3c
    CALL dword ptr [EAX + 0x24]         ; 00464b40
    MOV ECX,0x6                         ; 00464b43
    ADD ESP,0x4                         ; 00464b48
    LEA EAX,[ESP + 0x10]                ; 00464b4b
    LEA ESI,[ESP + 0x28]                ; 00464b4f
    PUSH EAX                            ; 00464b53
    MOVSD.REP ES:EDI,ESI                ; 00464b54
    CALL core_box.cpp_FUN_0041a840      ; 00464b56
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00464b5b
    MOV EDI,EAX                         ; 00464b5e
    TEST EAX,EAX                        ; 00464b60
    JZ 0x00464bba                       ; 00464b62
        ;   XREF to: 00464bba (CONDITIONAL_JUMP)  ; LAB_00464bba
    MOV ECX,dword ptr [EBX + 0x10b84]   ; 00464b64
    MOV dword ptr [EBX + 0x2828],0x1    ; 00464b6a
    TEST ECX,ECX                        ; 00464b74
    JNZ 0x00464bd7                      ; 00464b76
        ;   XREF to: 00464bd7 (CONDITIONAL_JUMP)  ; LAB_00464bd7
    CMP dword ptr [EBX + 0x10c20],0x0   ; 00464b78
    JZ 0x00464bcc                       ; 00464b7f
        ;   XREF to: 00464bcc (CONDITIONAL_JUMP)  ; LAB_00464bcc
    CMP dword ptr [0x01d1cdc8],0x0      ; 00464b81 | DAT_01d1cdc8
        ;   Label: LAB_00464b81
    JZ 0x00464bba                       ; 00464b88
        ;   XREF to: 00464bba (CONDITIONAL_JUMP)  ; LAB_00464bba
    MOV ESI,dword ptr [0x0060b280]      ; 00464b8a | DAT_0060b280
    PUSH ESI                            ; 00464b90 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00464b91
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00464b96
    TEST EAX,EAX                        ; 00464b99
    JNZ 0x00464bba                      ; 00464b9b
        ;   XREF to: 00464bba (CONDITIONAL_JUMP)  ; LAB_00464bba
    PUSH EBX                            ; 00464b9d
    LEA EAX,[EBX + 0x2b4]               ; 00464b9e
    PUSH EAX                            ; 00464ba4
    CALL core_motion.cpp_FUN_005042e0   ; 00464ba5
        ;   XREF to: 005042e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005042e0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00464baa
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00464bad
    PUSH EBX                            ; 00464bb3
    CALL dword ptr [EAX + 0x60]         ; 00464bb4
    ADD ESP,0x4                         ; 00464bb7
    PUSH EBX                            ; 00464bba
        ;   Label: LAB_00464bba
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00464bbb
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00464bc0
    MOV EAX,EDI                         ; 00464bc3
    MOV ESP,EBP                         ; 00464bc5
    POP EBP                             ; 00464bc7
    POP EDI                             ; 00464bc8
    POP ESI                             ; 00464bc9
    POP EBX                             ; 00464bca
    RET                                 ; 00464bcb
    PUSH EBX                            ; 00464bcc
        ;   Label: LAB_00464bcc
    CALL core_charactr.cpp_FUN_00424bd0 ; 00464bcd
        ;   XREF to: 00424bd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424bd0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00464bd2
    JMP 0x00464b81                      ; 00464bd5
        ;   XREF to: 00464b81 (UNCONDITIONAL_JUMP)  ; LAB_00464b81
    CMP ECX,0x1                         ; 00464bd7
        ;   Label: LAB_00464bd7
    JNZ 0x00464c7b                      ; 00464bda
        ;   XREF to: 00464c7b (CONDITIONAL_JUMP)  ; LAB_00464c7b
    FLD float ptr [EBX + 0x10b88]       ; 00464be0
    FLD1                                ; 00464be6
    FSUBRP                              ; 00464be8
    FDIV float ptr [0x005f565c]         ; 00464bea | DAT_005f565c
    FSTP float ptr [ESP + 0x8]          ; 00464bf0
    FLD float ptr [ESP + 0x8]           ; 00464bf4
        ;   Label: LAB_00464bf4
    FLDZ                                ; 00464bf8
    FXCH                                ; 00464bfa
    FSTP double ptr [ESP]               ; 00464bfc
    FCOMP double ptr [ESP]              ; 00464bff
    FNSTSW AX                           ; 00464c02
    SAHF                                ; 00464c04
    JNC 0x00464b81                      ; 00464c05
        ;   XREF to: 00464b81 (CONDITIONAL_JUMP)  ; LAB_00464b81
    PUSH 0x0                            ; 00464c0b
    MOV EDX,dword ptr [0x0060b280]      ; 00464c0d | DAT_0060b280
    PUSH EDX                            ; 00464c13 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00464c14
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00464c19
    MOV ECX,dword ptr [0x0060b280]      ; 00464c1c | DAT_0060b280
    PUSH dword ptr [ESP + 0x8]          ; 00464c22
    PUSH ECX                            ; 00464c26 | DAT_01ba5c50
    CALL engine_drender.cpp_FUN_0046b8f0 ; 00464c27
        ;   XREF to: 0046b8f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_0046b8f0(CDemonRenderer * this_ptr, float render_alpha)
    ADD ESP,0x8                         ; 00464c2c
    PUSH 0x1                            ; 00464c2f
    MOV ESI,dword ptr [0x0060b280]      ; 00464c31 | DAT_0060b280
    PUSH ESI                            ; 00464c37 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540 ; 00464c38
        ;   XREF to: 0046c540 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00464c3d
    LEA ESI,[EBX + 0x2b4]               ; 00464c40
    FLD double ptr [ESP]                ; 00464c46
    FCOMP double ptr [0x005d10c4]       ; 00464c49 | DAT_005d10c4
    FNSTSW AX                           ; 00464c4f
    SAHF                                ; 00464c51
    JBE 0x00464ca9                      ; 00464c52
        ;   XREF to: 00464ca9 (CONDITIONAL_JUMP)  ; LAB_00464ca9
    PUSH 0x0                            ; 00464c54
    PUSH 0x1                            ; 00464c56
    PUSH 0x2e7                          ; 00464c58
    PUSH -0x1                           ; 00464c5d
        ;   Label: LAB_00464c5d
    PUSH ESI                            ; 00464c5f
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 ; 00464c60
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00464c65
    MOV EAX,[0x0060b280]                ; 00464c68 | DAT_0060b280
    PUSH EAX                            ; 00464c6d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900 ; 00464c6e
        ;   XREF to: 0046c900 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00464c73
    JMP 0x00464b81                      ; 00464c76
        ;   XREF to: 00464b81 (UNCONDITIONAL_JUMP)  ; LAB_00464b81
    FLD float ptr [EBX + 0x10b88]       ; 00464c7b
        ;   Label: LAB_00464c7b
    FSUBR double ptr [0x005d10c4]       ; 00464c81 | DAT_005d10c4
    FDIV float ptr [0x005f565c]         ; 00464c87 | DAT_005f565c
    FST float ptr [ESP + 0x8]           ; 00464c8d
    FLDZ                                ; 00464c91
    FCOMPP                              ; 00464c93
    FNSTSW AX                           ; 00464c95
    SAHF                                ; 00464c97
    JBE 0x00464bf4                      ; 00464c98
        ;   XREF to: 00464bf4 (CONDITIONAL_JUMP)  ; LAB_00464bf4
    XOR EAX,EAX                         ; 00464c9e
    MOV dword ptr [ESP + 0x8],EAX       ; 00464ca0
    JMP 0x00464bf4                      ; 00464ca4
        ;   XREF to: 00464bf4 (UNCONDITIONAL_JUMP)  ; LAB_00464bf4
    PUSH 0x0                            ; 00464ca9
        ;   Label: LAB_00464ca9
    PUSH 0x1                            ; 00464cab
    PUSH 0x267                          ; 00464cad
    JMP 0x00464c5d                      ; 00464cb2
        ;   XREF to: 00464c5d (UNCONDITIONAL_JUMP)  ; LAB_00464c5d

