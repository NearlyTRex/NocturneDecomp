; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dracbrid_cpp_FUN_0047cfe0(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005daebd
;   undefined4 DAT_005ff19c
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

    PUSH EBX                            ; 0047cfe0
        ;   Label: core_dracbrid.cpp_FUN_0047cfe0
    PUSH ESI                            ; 0047cfe1
    PUSH EDI                            ; 0047cfe2
    PUSH EBP                            ; 0047cfe3
    MOV EBP,ESP                         ; 0047cfe4
    SUB ESP,0x3c                        ; 0047cfe6
    AND ESP,0xfffffff8                  ; 0047cfe9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047cfec
    MOV EDX,dword ptr [0x00612560]      ; 0047cfef | DAT_00612560
    PUSH EDX                            ; 0047cff5 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180 ; 0047cff6
        ;   XREF to: 00484180 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0047cffb
    MOV ESI,EAX                         ; 0047cffe
    TEST EAX,EAX                        ; 0047d000
    JZ 0x0047d016                       ; 0047d002
        ;   XREF to: 0047d016 (CONDITIONAL_JUMP)  ; LAB_0047d016
    CMP dword ptr [EBX + 0xc2f4],0x2    ; 0047d004
        ;   Label: LAB_0047d004
    JNZ 0x0047d01e                      ; 0047d00b
        ;   XREF to: 0047d01e (CONDITIONAL_JUMP)  ; LAB_0047d01e
    XOR EAX,EAX                         ; 0047d00d
        ;   Label: LAB_0047d00d
    MOV ESP,EBP                         ; 0047d00f
    POP EBP                             ; 0047d011
    POP EDI                             ; 0047d012
    POP ESI                             ; 0047d013
    POP EBX                             ; 0047d014
    RET                                 ; 0047d015
    MOV dword ptr [EBX + 0x27bc],EAX    ; 0047d016
        ;   Label: LAB_0047d016
    JMP 0x0047d004                      ; 0047d01c
        ;   XREF to: 0047d004 (UNCONDITIONAL_JUMP)  ; LAB_0047d004
    MOV EDI,dword ptr [0x00612560]      ; 0047d01e | DAT_00612560
        ;   Label: LAB_0047d01e
    PUSH EDI                            ; 0047d024 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0047d025
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0047d02a
    TEST EAX,EAX                        ; 0047d02d
    JZ 0x0047d03a                       ; 0047d02f
        ;   XREF to: 0047d03a (CONDITIONAL_JUMP)  ; LAB_0047d03a
    CMP dword ptr [EBX + 0xc2f4],0x0    ; 0047d031
    JNZ 0x0047d00d                      ; 0047d038
        ;   XREF to: 0047d00d (CONDITIONAL_JUMP)  ; LAB_0047d00d
    TEST ESI,ESI                        ; 0047d03a
        ;   Label: LAB_0047d03a
    JNZ 0x0047d00d                      ; 0047d03c
        ;   XREF to: 0047d00d (CONDITIONAL_JUMP)  ; LAB_0047d00d
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0047d03e
    JNZ 0x0047d00d                      ; 0047d045
        ;   XREF to: 0047d00d (CONDITIONAL_JUMP)  ; LAB_0047d00d
    PUSH EBX                            ; 0047d047
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0047d048
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047d04d
    PUSH ESI                            ; 0047d050
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047d051
    PUSH EBX                            ; 0047d057
    LEA ESI,[ESP + 0x2c]                ; 0047d058
    LEA EDI,[ESP + 0x14]                ; 0047d05c
    CALL dword ptr [EAX + 0x1c]         ; 0047d060
    MOV ECX,0x6                         ; 0047d063
    ADD ESP,0x4                         ; 0047d068
    LEA EAX,[ESP + 0x10]                ; 0047d06b
    LEA ESI,[ESP + 0x28]                ; 0047d06f
    PUSH EAX                            ; 0047d073
    MOVSD.REP ES:EDI,ESI                ; 0047d074
    CALL core_box.cpp_FUN_004207b0      ; 0047d076
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0047d07b
    MOV EDI,EAX                         ; 0047d07e
    TEST EAX,EAX                        ; 0047d080
    JZ 0x0047d0da                       ; 0047d082
        ;   XREF to: 0047d0da (CONDITIONAL_JUMP)  ; LAB_0047d0da
    MOV ECX,dword ptr [EBX + 0xc2f4]    ; 0047d084
    MOV dword ptr [EBX + 0x27bc],0x1    ; 0047d08a
    TEST ECX,ECX                        ; 0047d094
    JNZ 0x0047d0f7                      ; 0047d096
        ;   XREF to: 0047d0f7 (CONDITIONAL_JUMP)  ; LAB_0047d0f7
    CMP dword ptr [EBX + 0xc408],0x0    ; 0047d098
    JZ 0x0047d0ec                       ; 0047d09f
        ;   XREF to: 0047d0ec (CONDITIONAL_JUMP)  ; LAB_0047d0ec
    CMP dword ptr [0x01d39d34],0x0      ; 0047d0a1 | DAT_01d39d34
        ;   Label: LAB_0047d0a1
    JZ 0x0047d0da                       ; 0047d0a8
        ;   XREF to: 0047d0da (CONDITIONAL_JUMP)  ; LAB_0047d0da
    MOV ESI,dword ptr [0x00612560]      ; 0047d0aa | DAT_00612560
    PUSH ESI                            ; 0047d0b0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0047d0b1
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0047d0b6
    TEST EAX,EAX                        ; 0047d0b9
    JNZ 0x0047d0da                      ; 0047d0bb
        ;   XREF to: 0047d0da (CONDITIONAL_JUMP)  ; LAB_0047d0da
    PUSH EBX                            ; 0047d0bd
    LEA EAX,[EBX + 0x158]               ; 0047d0be
    PUSH EAX                            ; 0047d0c4
    CALL core_motion.cpp_FUN_005254b0   ; 0047d0c5
        ;   XREF to: 005254b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005254b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0047d0ca
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047d0cd
    PUSH EBX                            ; 0047d0d3
    CALL dword ptr [EAX + 0x58]         ; 0047d0d4
    ADD ESP,0x4                         ; 0047d0d7
    PUSH EBX                            ; 0047d0da
        ;   Label: LAB_0047d0da
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0047d0db
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047d0e0
    MOV EAX,EDI                         ; 0047d0e3
    MOV ESP,EBP                         ; 0047d0e5
    POP EBP                             ; 0047d0e7
    POP EDI                             ; 0047d0e8
    POP ESI                             ; 0047d0e9
    POP EBX                             ; 0047d0ea
    RET                                 ; 0047d0eb
    PUSH EBX                            ; 0047d0ec
        ;   Label: LAB_0047d0ec
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 ; 0047d0ed
        ;   XREF to: 0042e960 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0047d0f2
    JMP 0x0047d0a1                      ; 0047d0f5
        ;   XREF to: 0047d0a1 (UNCONDITIONAL_JUMP)  ; LAB_0047d0a1
    CMP ECX,0x1                         ; 0047d0f7
        ;   Label: LAB_0047d0f7
    JNZ 0x0047d19b                      ; 0047d0fa
        ;   XREF to: 0047d19b (CONDITIONAL_JUMP)  ; LAB_0047d19b
    FLD float ptr [EBX + 0xc2f8]        ; 0047d100
    FLD1                                ; 0047d106
    FSUBRP                              ; 0047d108
    FDIV float ptr [0x005ff19c]         ; 0047d10a | DAT_005ff19c
    FSTP float ptr [ESP + 0x8]          ; 0047d110
    FLD float ptr [ESP + 0x8]           ; 0047d114
        ;   Label: LAB_0047d114
    FLDZ                                ; 0047d118
    FXCH                                ; 0047d11a
    FSTP double ptr [ESP]               ; 0047d11c
    FCOMP double ptr [ESP]              ; 0047d11f
    FNSTSW AX                           ; 0047d122
    SAHF                                ; 0047d124
    JNC 0x0047d0a1                      ; 0047d125
        ;   XREF to: 0047d0a1 (CONDITIONAL_JUMP)  ; LAB_0047d0a1
    PUSH 0x0                            ; 0047d12b
    MOV EDX,dword ptr [0x00612560]      ; 0047d12d | DAT_00612560
    PUSH EDX                            ; 0047d133 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 0047d134
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0047d139
    MOV ECX,dword ptr [0x00612560]      ; 0047d13c | DAT_00612560
    PUSH dword ptr [ESP + 0x8]          ; 0047d142
    PUSH ECX                            ; 0047d146 | DAT_01bc120c
    CALL engine_drender.cpp_FUN_00483df0 ; 0047d147
        ;   XREF to: 00483df0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_00483df0(CDemonRenderer * this_ptr, float render_alpha)
    ADD ESP,0x8                         ; 0047d14c
    PUSH 0x1                            ; 0047d14f
    MOV ESI,dword ptr [0x00612560]      ; 0047d151 | DAT_00612560
    PUSH ESI                            ; 0047d157 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40 ; 0047d158
        ;   XREF to: 00484a40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0047d15d
    LEA ESI,[EBX + 0x158]               ; 0047d160
    FLD double ptr [ESP]                ; 0047d166
    FCOMP double ptr [0x005daebd]       ; 0047d169 | DAT_005daebd
    FNSTSW AX                           ; 0047d16f
    SAHF                                ; 0047d171
    JBE 0x0047d1c9                      ; 0047d172
        ;   XREF to: 0047d1c9 (CONDITIONAL_JUMP)  ; LAB_0047d1c9
    PUSH 0x0                            ; 0047d174
    PUSH 0x1                            ; 0047d176
    PUSH 0x2e7                          ; 0047d178
    PUSH -0x1                           ; 0047d17d
        ;   Label: LAB_0047d17d
    PUSH ESI                            ; 0047d17f
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810 ; 0047d180
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0047d185
    MOV EAX,[0x00612560]                ; 0047d188 | DAT_00612560
    PUSH EAX                            ; 0047d18d | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00 ; 0047d18e
        ;   XREF to: 00484e00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0047d193
    JMP 0x0047d0a1                      ; 0047d196
        ;   XREF to: 0047d0a1 (UNCONDITIONAL_JUMP)  ; LAB_0047d0a1
    FLD float ptr [EBX + 0xc2f8]        ; 0047d19b
        ;   Label: LAB_0047d19b
    FSUBR double ptr [0x005daebd]       ; 0047d1a1 | DAT_005daebd
    FDIV float ptr [0x005ff19c]         ; 0047d1a7 | DAT_005ff19c
    FST float ptr [ESP + 0x8]           ; 0047d1ad
    FLDZ                                ; 0047d1b1
    FCOMPP                              ; 0047d1b3
    FNSTSW AX                           ; 0047d1b5
    SAHF                                ; 0047d1b7
    JBE 0x0047d114                      ; 0047d1b8
        ;   XREF to: 0047d114 (CONDITIONAL_JUMP)  ; LAB_0047d114
    XOR EAX,EAX                         ; 0047d1be
    MOV dword ptr [ESP + 0x8],EAX       ; 0047d1c0
    JMP 0x0047d114                      ; 0047d1c4
        ;   XREF to: 0047d114 (UNCONDITIONAL_JUMP)  ; LAB_0047d114
    PUSH 0x0                            ; 0047d1c9
        ;   Label: LAB_0047d1c9
    PUSH 0x1                            ; 0047d1cb
    PUSH 0x267                          ; 0047d1cd
    JMP 0x0047d17d                      ; 0047d1d2
        ;   XREF to: 0047d17d (UNCONDITIONAL_JUMP)  ; LAB_0047d17d

