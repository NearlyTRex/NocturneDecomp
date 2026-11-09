; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_batman_cpp_FUN_00413970(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d3ad9
;   undefined4 DAT_005fc178
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d39d34
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960
;   core_motion.cpp_FUN_005254b0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40
;   engine_drender.cpp_FUN_00483df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413970
        ;   Label: core_batman.cpp_FUN_00413970
    PUSH ESI                            ; 00413971
    PUSH EDI                            ; 00413972
    PUSH EBP                            ; 00413973
    MOV EBP,ESP                         ; 00413974
    SUB ESP,0x3c                        ; 00413976
    AND ESP,0xfffffff8                  ; 00413979
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041397c
    MOV EDX,dword ptr [0x00612560]      ; 0041397f | DAT_00612560
    PUSH EDX                            ; 00413985 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180 ; 00413986
        ;   XREF to: 00484180 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041398b
    MOV ESI,EAX                         ; 0041398e
    TEST EAX,EAX                        ; 00413990
    JZ 0x004139a6                       ; 00413992
        ;   XREF to: 004139a6 (CONDITIONAL_JUMP)  ; LAB_004139a6
    CMP dword ptr [EBX + 0xc308],0x2    ; 00413994
        ;   Label: LAB_00413994
    JNZ 0x004139ae                      ; 0041399b
        ;   XREF to: 004139ae (CONDITIONAL_JUMP)  ; LAB_004139ae
    XOR EAX,EAX                         ; 0041399d
        ;   Label: LAB_0041399d
    MOV ESP,EBP                         ; 0041399f
    POP EBP                             ; 004139a1
    POP EDI                             ; 004139a2
    POP ESI                             ; 004139a3
    POP EBX                             ; 004139a4
    RET                                 ; 004139a5
    MOV dword ptr [EBX + 0x27bc],EAX    ; 004139a6
        ;   Label: LAB_004139a6
    JMP 0x00413994                      ; 004139ac
        ;   XREF to: 00413994 (UNCONDITIONAL_JUMP)  ; LAB_00413994
    MOV EDI,dword ptr [0x00612560]      ; 004139ae | DAT_00612560
        ;   Label: LAB_004139ae
    PUSH EDI                            ; 004139b4 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004139b5
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004139ba
    TEST EAX,EAX                        ; 004139bd
    JZ 0x004139ca                       ; 004139bf
        ;   XREF to: 004139ca (CONDITIONAL_JUMP)  ; LAB_004139ca
    CMP dword ptr [EBX + 0xc308],0x0    ; 004139c1
    JNZ 0x0041399d                      ; 004139c8
        ;   XREF to: 0041399d (CONDITIONAL_JUMP)  ; LAB_0041399d
    TEST ESI,ESI                        ; 004139ca
        ;   Label: LAB_004139ca
    JNZ 0x0041399d                      ; 004139cc
        ;   XREF to: 0041399d (CONDITIONAL_JUMP)  ; LAB_0041399d
    CMP dword ptr [EBX + 0x24fc],0x0    ; 004139ce
    JNZ 0x0041399d                      ; 004139d5
        ;   XREF to: 0041399d (CONDITIONAL_JUMP)  ; LAB_0041399d
    PUSH EBX                            ; 004139d7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004139d8
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004139dd
    PUSH ESI                            ; 004139e0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004139e1
    PUSH EBX                            ; 004139e7
    LEA ESI,[ESP + 0x2c]                ; 004139e8
    LEA EDI,[ESP + 0x14]                ; 004139ec
    CALL dword ptr [EAX + 0x1c]         ; 004139f0
    MOV ECX,0x6                         ; 004139f3
    ADD ESP,0x4                         ; 004139f8
    LEA EAX,[ESP + 0x10]                ; 004139fb
    LEA ESI,[ESP + 0x28]                ; 004139ff
    PUSH EAX                            ; 00413a03
    MOVSD.REP ES:EDI,ESI                ; 00413a04
    CALL core_box.cpp_FUN_004207b0      ; 00413a06
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 00413a0b
    MOV EDI,EAX                         ; 00413a0e
    TEST EAX,EAX                        ; 00413a10
    JZ 0x00413a6a                       ; 00413a12
        ;   XREF to: 00413a6a (CONDITIONAL_JUMP)  ; LAB_00413a6a
    MOV ECX,dword ptr [EBX + 0xc308]    ; 00413a14
    MOV dword ptr [EBX + 0x27bc],0x1    ; 00413a1a
    TEST ECX,ECX                        ; 00413a24
    JNZ 0x00413a7c                      ; 00413a26
        ;   XREF to: 00413a7c (CONDITIONAL_JUMP)  ; LAB_00413a7c
    PUSH EBX                            ; 00413a28
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 ; 00413a29
        ;   XREF to: 0042e960 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00413a2e
        ;   Label: LAB_00413a2e
    CMP dword ptr [0x01d39d34],0x0      ; 00413a31 | DAT_01d39d34
        ;   Label: LAB_00413a31
    JZ 0x00413a6a                       ; 00413a38
        ;   XREF to: 00413a6a (CONDITIONAL_JUMP)  ; LAB_00413a6a
    MOV ECX,dword ptr [0x00612560]      ; 00413a3a | DAT_00612560
    PUSH ECX                            ; 00413a40 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00413a41
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00413a46
    TEST EAX,EAX                        ; 00413a49
    JNZ 0x00413a6a                      ; 00413a4b
        ;   XREF to: 00413a6a (CONDITIONAL_JUMP)  ; LAB_00413a6a
    PUSH EBX                            ; 00413a4d
    LEA EAX,[EBX + 0x158]               ; 00413a4e
    PUSH EAX                            ; 00413a54
    CALL core_motion.cpp_FUN_005254b0   ; 00413a55
        ;   XREF to: 005254b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005254b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00413a5a
    MOV EAX,dword ptr [EBX + 0x154]     ; 00413a5d
    PUSH EBX                            ; 00413a63
    CALL dword ptr [EAX + 0x58]         ; 00413a64
    ADD ESP,0x4                         ; 00413a67
    PUSH EBX                            ; 00413a6a
        ;   Label: LAB_00413a6a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00413a6b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00413a70
    MOV EAX,EDI                         ; 00413a73
    MOV ESP,EBP                         ; 00413a75
    POP EBP                             ; 00413a77
    POP EDI                             ; 00413a78
    POP ESI                             ; 00413a79
    POP EBX                             ; 00413a7a
    RET                                 ; 00413a7b
    CMP ECX,0x1                         ; 00413a7c
        ;   Label: LAB_00413a7c
    JNZ 0x00413b19                      ; 00413a7f
        ;   XREF to: 00413b19 (CONDITIONAL_JUMP)  ; LAB_00413b19
    FLD float ptr [EBX + 0xc30c]        ; 00413a85
    FLD1                                ; 00413a8b
    FSUBRP                              ; 00413a8d
    FDIV float ptr [0x005fc178]         ; 00413a8f | DAT_005fc178
    FSTP float ptr [ESP + 0x8]          ; 00413a95
    FLD float ptr [ESP + 0x8]           ; 00413a99
        ;   Label: LAB_00413a99
    FLDZ                                ; 00413a9d
    FXCH                                ; 00413a9f
    FSTP double ptr [ESP]               ; 00413aa1
    FCOMP double ptr [ESP]              ; 00413aa4
    FNSTSW AX                           ; 00413aa7
    SAHF                                ; 00413aa9
    JNC 0x00413a31                      ; 00413aaa
        ;   XREF to: 00413a31 (CONDITIONAL_JUMP)  ; LAB_00413a31
    PUSH 0x0                            ; 00413aac
    MOV EDX,dword ptr [0x00612560]      ; 00413aae | DAT_00612560
    PUSH EDX                            ; 00413ab4 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00413ab5
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00413aba
    MOV ECX,dword ptr [0x00612560]      ; 00413abd | DAT_00612560
    PUSH dword ptr [ESP + 0x8]          ; 00413ac3
    PUSH ECX                            ; 00413ac7 | DAT_01bc120c
    CALL engine_drender.cpp_FUN_00483df0 ; 00413ac8
        ;   XREF to: 00483df0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_00483df0(CDemonRenderer * this_ptr, float render_alpha)
    ADD ESP,0x8                         ; 00413acd
    PUSH 0x1                            ; 00413ad0
    MOV ESI,dword ptr [0x00612560]      ; 00413ad2 | DAT_00612560
    PUSH ESI                            ; 00413ad8 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40 ; 00413ad9
        ;   XREF to: 00484a40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00413ade
    LEA ESI,[EBX + 0x158]               ; 00413ae1
    FLD double ptr [ESP]                ; 00413ae7
    FCOMP double ptr [0x005d3ad9]       ; 00413aea | DAT_005d3ad9
    FNSTSW AX                           ; 00413af0
    SAHF                                ; 00413af2
    JBE 0x00413b47                      ; 00413af3
        ;   XREF to: 00413b47 (CONDITIONAL_JUMP)  ; LAB_00413b47
    PUSH 0x0                            ; 00413af5
    PUSH 0x1                            ; 00413af7
    PUSH 0x2e7                          ; 00413af9
    PUSH -0x1                           ; 00413afe
        ;   Label: LAB_00413afe
    PUSH ESI                            ; 00413b00
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810 ; 00413b01
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00413b06
    MOV EAX,[0x00612560]                ; 00413b09 | DAT_00612560
    PUSH EAX                            ; 00413b0e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00 ; 00413b0f
        ;   XREF to: 00484e00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(CDemonRenderer * this_ptr)
    JMP 0x00413a2e                      ; 00413b14
        ;   XREF to: 00413a2e (UNCONDITIONAL_JUMP)  ; LAB_00413a2e
    FLD float ptr [EBX + 0xc30c]        ; 00413b19
        ;   Label: LAB_00413b19
    FSUBR double ptr [0x005d3ad9]       ; 00413b1f | DAT_005d3ad9
    FDIV float ptr [0x005fc178]         ; 00413b25 | DAT_005fc178
    FST float ptr [ESP + 0x8]           ; 00413b2b
    FLDZ                                ; 00413b2f
    FCOMPP                              ; 00413b31
    FNSTSW AX                           ; 00413b33
    SAHF                                ; 00413b35
    JBE 0x00413a99                      ; 00413b36
        ;   XREF to: 00413a99 (CONDITIONAL_JUMP)  ; LAB_00413a99
    XOR EAX,EAX                         ; 00413b3c
    MOV dword ptr [ESP + 0x8],EAX       ; 00413b3e
    JMP 0x00413a99                      ; 00413b42
        ;   XREF to: 00413a99 (UNCONDITIONAL_JUMP)  ; LAB_00413a99
    PUSH 0x0                            ; 00413b47
        ;   Label: LAB_00413b47
    PUSH 0x1                            ; 00413b49
    PUSH 0x267                          ; 00413b4b
    JMP 0x00413afe                      ; 00413b50
        ;   XREF to: 00413afe (UNCONDITIONAL_JUMP)  ; LAB_00413afe

