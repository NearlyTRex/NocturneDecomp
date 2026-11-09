; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hino_cpp_FUN_0059d120(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d9e74
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d8e40c
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_FUN_0042f310
;   core_hino.cpp_FUN_0059b740
;   core_motion.cpp_FUN_004fcdc0
;   core_skeleton.cpp_FUN_0054e3a0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d120
        ;   Label: core_hino.cpp_FUN_0059d120
    PUSH ESI                            ; 0059d121
    PUSH EDI                            ; 0059d122
    PUSH EBP                            ; 0059d123
    MOV EBP,ESP                         ; 0059d124
    SUB ESP,0x4c                        ; 0059d126
    AND ESP,0xfffffff8                  ; 0059d129
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059d12c
    FLDZ                                ; 0059d12f
    FLD float ptr [EBX + 0xd068]        ; 0059d131
    FSTP double ptr [ESP + 0x8]         ; 0059d137
    FCOMP double ptr [ESP + 0x8]        ; 0059d13b
    FNSTSW AX                           ; 0059d13f
    SAHF                                ; 0059d141
    JNC 0x0059d1ec                      ; 0059d142
        ;   XREF to: 0059d1ec (CONDITIONAL_JUMP)  ; LAB_0059d1ec
    FLD double ptr [ESP + 0x8]          ; 0059d148
    FMUL double ptr [0x005d9e74]        ; 0059d14c | DAT_005d9e74
    MOV EDX,dword ptr [EBX + 0xd06c]    ; 0059d152
    FSTP double ptr [ESP]               ; 0059d158
    TEST EDX,EDX                        ; 0059d15b
    JZ 0x0059d23e                       ; 0059d15d
        ;   XREF to: 0059d23e (CONDITIONAL_JUMP)  ; LAB_0059d23e
    FLD1                                ; 0059d163
    FSUB double ptr [ESP]               ; 0059d165
    PUSH 0x64                           ; 0059d168
    FSTP double ptr [ESP + 0x44]        ; 0059d16a
    CALL core_hino.cpp_FUN_0059b740     ; 0059d16e
        ;   XREF to: 0059b740 (UNCONDITIONAL_CALL)  ; undefined core_hino.cpp_FUN_0059b740()
    ADD ESP,0x4                         ; 0059d173
    MOV dword ptr [ESP + 0x48],EAX      ; 0059d176
    FILD dword ptr [ESP + 0x48]         ; 0059d17a
    FMUL double ptr [ESP + 0x40]        ; 0059d17e
    CALL crt_math.c_round_FUN_005a3120  ; 0059d182
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
        ;   Label: LAB_0059d182
    FISTP dword ptr [EBX + 0xd05c]      ; 0059d187
    MOV ECX,dword ptr [0x02d0c150]      ; 0059d18d | g_CWeaponClassInfo.name_hash
    PUSH ECX                            ; 0059d193
    MOV ESI,dword ptr [EBX + 0x25b0]    ; 0059d194
    PUSH ESI                            ; 0059d19a
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0059d19b
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 0059d1a0
    ADD ESP,0x8                         ; 0059d1a2
    TEST EAX,EAX                        ; 0059d1a5
    JZ 0x0059d1ec                       ; 0059d1a7
        ;   XREF to: 0059d1ec (CONDITIONAL_JUMP)  ; LAB_0059d1ec
    MOV EDI,dword ptr [EBX + 0xd05c]    ; 0059d1a9
    PUSH EDI                            ; 0059d1af
    MOV EAX,dword ptr [EAX + 0x154]     ; 0059d1b0
    PUSH ESI                            ; 0059d1b6
    CALL dword ptr [EAX + 0xf8]         ; 0059d1b7
    ADD ESP,0x8                         ; 0059d1bd
    PUSH 0x64                           ; 0059d1c0
    CALL core_hino.cpp_FUN_0059b740     ; 0059d1c2
        ;   XREF to: 0059b740 (UNCONDITIONAL_CALL)  ; undefined core_hino.cpp_FUN_0059b740()
    MOV EDX,dword ptr [EBX + 0xd05c]    ; 0059d1c7
    ADD ESP,0x4                         ; 0059d1cd
    CMP EAX,EDX                         ; 0059d1d0
    JZ 0x0059d258                       ; 0059d1d2
        ;   XREF to: 0059d258 (CONDITIONAL_JUMP)  ; LAB_0059d258
    MOV dword ptr [ESI + 0xf8],0x0      ; 0059d1d8
    MOV dword ptr [ESI + 0xfc],0x1      ; 0059d1e2
    PUSH EBX                            ; 0059d1ec
        ;   Label: LAB_0059d1ec
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0059d1ed
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059d1f2
    PUSH 0x0                            ; 0059d1f5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059d1f7
    PUSH EBX                            ; 0059d1fd
    LEA ESI,[ESP + 0x18]                ; 0059d1fe
    LEA EDI,[ESP + 0x30]                ; 0059d202
    CALL dword ptr [EAX + 0x1c]         ; 0059d206
    MOV ECX,0x6                         ; 0059d209
    ADD ESP,0x4                         ; 0059d20e
    LEA EAX,[ESP + 0x2c]                ; 0059d211
    LEA ESI,[ESP + 0x14]                ; 0059d215
    PUSH EAX                            ; 0059d219
    MOVSD.REP ES:EDI,ESI                ; 0059d21a
    CALL core_box.cpp_FUN_0041daf0      ; 0059d21c
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0059d221
    TEST EAX,EAX                        ; 0059d224
    JNZ 0x0059d271                      ; 0059d226
        ;   XREF to: 0059d271 (CONDITIONAL_JUMP)  ; LAB_0059d271
    PUSH EBX                            ; 0059d228
        ;   Label: LAB_0059d228
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0059d229
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059d22e
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0059d231
    MOV ESP,EBP                         ; 0059d237
    POP EBP                             ; 0059d239
    POP EDI                             ; 0059d23a
    POP ESI                             ; 0059d23b
    POP EBX                             ; 0059d23c
    RET                                 ; 0059d23d
    PUSH 0x64                           ; 0059d23e
        ;   Label: LAB_0059d23e
    CALL core_hino.cpp_FUN_0059b740     ; 0059d240
        ;   XREF to: 0059b740 (UNCONDITIONAL_CALL)  ; undefined core_hino.cpp_FUN_0059b740()
    ADD ESP,0x4                         ; 0059d245
    MOV dword ptr [ESP + 0x48],EAX      ; 0059d248
    FILD dword ptr [ESP + 0x48]         ; 0059d24c
    FMUL double ptr [ESP]               ; 0059d250
    JMP 0x0059d182                      ; 0059d253
        ;   XREF to: 0059d182 (UNCONDITIONAL_JUMP)  ; LAB_0059d182
    MOV dword ptr [ESI + 0xf8],0x1      ; 0059d258
        ;   Label: LAB_0059d258
    MOV dword ptr [ESI + 0xfc],0x0      ; 0059d262
    JMP 0x0059d1ec                      ; 0059d26c
        ;   XREF to: 0059d1ec (UNCONDITIONAL_JUMP)  ; LAB_0059d1ec
    MOV ECX,dword ptr [EBX + 0xd05c]    ; 0059d271
        ;   Label: LAB_0059d271
    PUSH ECX                            ; 0059d277
    MOV ESI,dword ptr [0x005f2afc]      ; 0059d278 | DAT_005f2afc
    PUSH ESI                            ; 0059d27e | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x27bc],0x1    ; 0059d27f
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0059d289
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0059d28e
    PUSH 0x0                            ; 0059d291
    MOV EDI,dword ptr [0x005f2afc]      ; 0059d293 | DAT_005f2afc
    PUSH EDI                            ; 0059d299 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0059d29a
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0059d29f
    PUSH 0x1                            ; 0059d2a2
    MOV EAX,[0x005f2afc]                ; 0059d2a4 | DAT_005f2afc
    PUSH EAX                            ; 0059d2a9 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120 ; 0059d2aa
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0059d2af
    PUSH 0x0                            ; 0059d2b2
    PUSH 0x1                            ; 0059d2b4
    PUSH 0x2e7                          ; 0059d2b6
    PUSH -0x1                           ; 0059d2bb
    LEA ESI,[EBX + 0x158]               ; 0059d2bd
    PUSH ESI                            ; 0059d2c3
    CALL core_skeleton.cpp_FUN_0054e3a0 ; 0059d2c4
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0059d2c9
    MOV EDX,dword ptr [0x005f2afc]      ; 0059d2cc | DAT_005f2afc
    PUSH EDX                            ; 0059d2d2 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 ; 0059d2d3
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer * this_ptr)
    MOV ECX,dword ptr [0x01d8e40c]      ; 0059d2d8 | DAT_01d8e40c
    ADD ESP,0x4                         ; 0059d2de
    TEST ECX,ECX                        ; 0059d2e1
    JZ 0x0059d2ef                       ; 0059d2e3
        ;   XREF to: 0059d2ef (CONDITIONAL_JUMP)  ; LAB_0059d2ef
    PUSH EBX                            ; 0059d2e5
    PUSH ESI                            ; 0059d2e6
    CALL core_motion.cpp_FUN_004fcdc0   ; 0059d2e7
        ;   XREF to: 004fcdc0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_004fcdc0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059d2ec
    FLD float ptr [EBX + 0x3254]        ; 0059d2ef
        ;   Label: LAB_0059d2ef
    FLDZ                                ; 0059d2f5
    FCOMPP                              ; 0059d2f7
    FNSTSW AX                           ; 0059d2f9
    SAHF                                ; 0059d2fb
    JNC 0x0059d228                      ; 0059d2fc
        ;   XREF to: 0059d228 (CONDITIONAL_JUMP)  ; LAB_0059d228
    PUSH EBX                            ; 0059d302
    CALL core_charactr.cpp_FUN_0042f310 ; 0059d303
        ;   XREF to: 0042f310 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042f310(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059d308
    JMP 0x0059d228                      ; 0059d30b
        ;   XREF to: 0059d228 (UNCONDITIONAL_JUMP)  ; LAB_0059d228

