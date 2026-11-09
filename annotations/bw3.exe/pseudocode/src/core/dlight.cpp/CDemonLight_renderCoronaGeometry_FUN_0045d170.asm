; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_0044d800 at 0044d884
;
; Referenced Globals:
;   undefined4 DAT_005bb474
;   undefined4 DAT_005bb47c
;   undefined4 DAT_005bb484
;   undefined4 DAT_005bb48c
;   undefined4 DAT_005bb494
;   undefined4 DAT_005de4f0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01b4b6a8
;   undefined4 DAT_01b4b6ac
;   undefined4 DAT_01b4b6b0
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_dcamera.cpp_initializeCoronaBuffers_FUN_0044d020
;   core_dirmat.cpp_FUN_0045b870
;   core_dirmat.cpp_FUN_0045b9b0
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;   engine_matrix.c_FUN_0046d1c0
;   engine_matrix.c_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d170
        ;   Label: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170
    PUSH ESI                            ; 0045d171
    PUSH EDI                            ; 0045d172
    PUSH EBP                            ; 0045d173
    MOV EBP,ESP                         ; 0045d174
    SUB ESP,0xc8                        ; 0045d176
    AND ESP,0xfffffff8                  ; 0045d17c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d17f
    ADD EAX,0x4                         ; 0045d182
    PUSH EAX                            ; 0045d185
    MOV EDX,dword ptr [0x005f2afc]      ; 0045d186 | DAT_005f2afc
    PUSH EDX                            ; 0045d18c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0045d18d
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0045d192
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d195
    ADD EAX,0x10                        ; 0045d198
    PUSH EAX                            ; 0045d19b
    LEA ESI,[ESP + 0x60]                ; 0045d19c
    CALL core_dirmat.cpp_FUN_0045b9b0   ; 0045d1a0
        ;   XREF to: 0045b9b0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b9b0()
    ADD ESP,0x4                         ; 0045d1a5
    PUSH 0x0                            ; 0045d1a8
    LEA EAX,[ESP + 0x54]                ; 0045d1aa
    LEA EDI,[ESP + 0x54]                ; 0045d1ae
    PUSH EAX                            ; 0045d1b2
    MOV ECX,dword ptr [0x005f2afc]      ; 0045d1b3 | DAT_005f2afc
    LEA ESI,[ESP + 0x64]                ; 0045d1b9
    PUSH ECX                            ; 0045d1bd | DAT_01bdd7e4
    MOVSD ES:EDI,ESI                    ; 0045d1be
    MOVSD ES:EDI,ESI                    ; 0045d1bf
    MOVSD ES:EDI,ESI                    ; 0045d1c0
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0045d1c1
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0045d1c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d1c9
    FLD float ptr [EAX + 0x38]          ; 0045d1cc
    FDIVR double ptr [0x005bb474]       ; 0045d1cf | DAT_005bb474
    FMUL float ptr [EAX + 0x140]        ; 0045d1d5
    XOR ESI,ESI                         ; 0045d1db
    XOR EDI,EDI                         ; 0045d1dd
    MOV EAX,dword ptr [EAX + 0x140]     ; 0045d1df
    FSTP float ptr [ESP]                ; 0045d1e5
    MOV dword ptr [ESP + 0x40],EAX      ; 0045d1e8
    MOV dword ptr [ESP + 0xc4],ESI      ; 0045d1ec
        ;   Label: LAB_0045d1ec
    FILD dword ptr [ESP + 0xc4]         ; 0045d1f3
    FMUL double ptr [0x005bb47c]        ; 0045d1fa | DAT_005bb47c
    FMUL double ptr [0x005bb484]        ; 0045d200 | DAT_005bb484
    FLD ST0                             ; 0045d206
    FCOS                                ; 0045d208
    FXCH                                ; 0045d20a
    FSIN                                ; 0045d20c
    FLD float ptr [ESP]                 ; 0045d20e
    FXCH ST2                            ; 0045d211
    FMUL ST2                            ; 0045d213
    FXCH                                ; 0045d215
    FMULP ST2                           ; 0045d217
    LEA EBX,[ESP + 0x8c]                ; 0045d219
    MOV EDX,dword ptr [0x005f2afc]      ; 0045d220 | DAT_005f2afc
    LEA EAX,[ESP + 0x38]                ; 0045d226
    FSTP float ptr [ESP + 0x38]         ; 0045d22a
    FSTP float ptr [ESP + 0x3c]         ; 0045d22e
    FLD float ptr [EAX]                 ; 0045d232
    FMUL float ptr [0x005de4f0]         ; 0045d234 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045d23a
    FLD float ptr [EAX + 0x4]           ; 0045d23c
    FMUL float ptr [0x005de4f0]         ; 0045d23f | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045d245
    FLD float ptr [EAX + 0x8]           ; 0045d248
    FMUL float ptr [0x005de4f0]         ; 0045d24b | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045d251
    LEA EAX,[ESP + 0x8c]                ; 0045d254
    PUSH EAX                            ; 0045d25b
    MOV EAX,dword ptr [EDX]             ; 0045d25c | DAT_01bdd7e4
    ADD EAX,EDI                         ; 0045d25e
    PUSH EAX                            ; 0045d260
    CALL engine_special.cpp_FUN_005632a3 ; 0045d261
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x005f2afc]      ; 0045d266 | DAT_005f2afc
    ADD EDI,0x30                        ; 0045d26c
    MOV EAX,dword ptr [EDX]             ; 0045d26f | DAT_01bdd7e4
    INC ESI                             ; 0045d271
    ADD ESP,0x8                         ; 0045d272
    MOV dword ptr [EDI + EAX*0x1 + -0x10],0x0 ; 0045d275
    CMP ESI,0x10                        ; 0045d27d
    JL 0x0045d1ec                       ; 0045d280
        ;   XREF to: 0045d1ec (CONDITIONAL_JUMP)  ; LAB_0045d1ec
    LEA EBX,[ESP + 0x2c]                ; 0045d286
    MOV EAX,0x1b4b6a8                   ; 0045d28a
    FLD float ptr [EAX]                 ; 0045d28f | DAT_01b4b6a8
    FMUL float ptr [0x005de4f0]         ; 0045d291 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045d297
    FLD float ptr [EAX + 0x4]           ; 0045d299 | DAT_01b4b6ac
    FMUL float ptr [0x005de4f0]         ; 0045d29c | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045d2a2
    FLD float ptr [EAX + 0x8]           ; 0045d2a5 | DAT_01b4b6b0
    FMUL float ptr [0x005de4f0]         ; 0045d2a8 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045d2ae
    LEA EAX,[ESP + 0x2c]                ; 0045d2b1
    PUSH EAX                            ; 0045d2b5
    MOV EAX,dword ptr [EDX]             ; 0045d2b6 | DAT_01bdd7e4
    ADD EAX,0x300                       ; 0045d2b8
    PUSH EAX                            ; 0045d2bd
    CALL engine_special.cpp_FUN_005632a3 ; 0045d2be
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045d2c3
    MOV EAX,[0x005f2afc]                ; 0045d2c6 | DAT_005f2afc
    PUSH 0x1                            ; 0045d2cb
    MOV EDX,dword ptr [EAX]             ; 0045d2cd | DAT_01bdd7e4
    PUSH EAX                            ; 0045d2cf | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x320],0xffff  ; 0045d2d0
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0045d2da
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0045d2df
    MOV ESI,dword ptr [0x005f2afc]      ; 0045d2e2 | DAT_005f2afc
    PUSH ESI                            ; 0045d2e8 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x84]                ; 0045d2e9
    LEA EDI,[ESP + 0x6c]                ; 0045d2f0
    CALL engine_matrix.c_FUN_0046d1c0   ; 0045d2f4
        ;   XREF to: 0046d1c0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d1c0()
    LEA ESI,[ESP + 0x84]                ; 0045d2f9
    ADD ESP,0x4                         ; 0045d300
    XOR EBX,EBX                         ; 0045d303
    MOVSD ES:EDI,ESI                    ; 0045d305
    MOVSD ES:EDI,ESI                    ; 0045d306
    MOVSD ES:EDI,ESI                    ; 0045d307
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d308
    FLD float ptr [ESP + 0x68]          ; 0045d30b
    FLD float ptr [ESP + 0x6c]          ; 0045d30f
    FLD float ptr [ESP + 0x70]          ; 0045d313
    LEA EDI,[ESP + 0x74]                ; 0045d317
    LEA ESI,[ESP + 0xa4]                ; 0045d31b
    FXCH ST2                            ; 0045d322
    FSUB float ptr [EAX + 0x4]          ; 0045d324
    FXCH                                ; 0045d327
    FSUB float ptr [EAX + 0x8]          ; 0045d329
    FXCH ST2                            ; 0045d32c
    FSUB float ptr [EAX + 0xc]          ; 0045d32e
    FXCH                                ; 0045d331
    FSTP float ptr [ESP + 0xa4]         ; 0045d333
    LEA EAX,[ESP + 0x74]                ; 0045d33a
    FXCH                                ; 0045d33e
    FSTP float ptr [ESP + 0xa8]         ; 0045d340
    PUSH EAX                            ; 0045d347
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d348
    FSTP float ptr [ESP + 0xb0]         ; 0045d34b
    ADD EAX,0x10                        ; 0045d352
    MOVSD ES:EDI,ESI                    ; 0045d355
    MOVSD ES:EDI,ESI                    ; 0045d356
    MOVSD ES:EDI,ESI                    ; 0045d357
    PUSH EAX                            ; 0045d358
    LEA ESI,[ESP + 0x4c]                ; 0045d359
    LEA EDI,[ESP + 0xa0]                ; 0045d35d
    CALL core_dirmat.cpp_FUN_0045b870   ; 0045d364
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x4c]                ; 0045d369
    LEA EDX,[ESP + 0xa0]                ; 0045d36d
    ADD ESP,0x8                         ; 0045d374
    LEA EAX,[ESP + 0x74]                ; 0045d377
    MOVSD ES:EDI,ESI                    ; 0045d37b
    MOVSD ES:EDI,ESI                    ; 0045d37c
    MOVSD ES:EDI,ESI                    ; 0045d37d
    CMP EAX,EDX                         ; 0045d37e
    JNZ 0x0045d4f7                      ; 0045d380
        ;   XREF to: 0045d4f7 (CONDITIONAL_JUMP)  ; LAB_0045d4f7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d386
        ;   Label: LAB_0045d386
    FLD double ptr [0x005bb48c]         ; 0045d389 | DAT_005bb48c
    FLD float ptr [EAX + 0x38]          ; 0045d38f
    FMUL ST1                            ; 0045d392
    FMUL float ptr [ESP + 0x74]         ; 0045d394
    FSTP float ptr [ESP + 0x74]         ; 0045d398
    FMUL float ptr [EAX + 0x38]         ; 0045d39c
    FLD float ptr [ESP + 0x78]          ; 0045d39f
    FXCH                                ; 0045d3a3
    FMUL ST1                            ; 0045d3a5
    FLD float ptr [ESP + 0x74]          ; 0045d3a7
    FXCH                                ; 0045d3ab
    FSTP ST2                            ; 0045d3ad
    FXCH                                ; 0045d3af
    FSTP float ptr [ESP + 0x78]         ; 0045d3b1
    FCOMP float ptr [ESP + 0x7c]        ; 0045d3b5
    FNSTSW AX                           ; 0045d3b9
    SAHF                                ; 0045d3bb
    JNC 0x0045d40f                      ; 0045d3bc
        ;   XREF to: 0045d40f (CONDITIONAL_JUMP)  ; LAB_0045d40f
    FLD float ptr [ESP + 0x74]          ; 0045d3be
    FLD float ptr [ESP + 0x7c]          ; 0045d3c2
    FCHS                                ; 0045d3c6
    FSTP float ptr [ESP + 0xc0]         ; 0045d3c8
    FCOMP float ptr [ESP + 0xc0]        ; 0045d3cf
    FNSTSW AX                           ; 0045d3d6
    SAHF                                ; 0045d3d8
    JBE 0x0045d40f                      ; 0045d3d9
        ;   XREF to: 0045d40f (CONDITIONAL_JUMP)  ; LAB_0045d40f
    FLD float ptr [ESP + 0x78]          ; 0045d3db
    FCOMP float ptr [ESP + 0x7c]        ; 0045d3df
    FNSTSW AX                           ; 0045d3e3
    SAHF                                ; 0045d3e5
    JNC 0x0045d40f                      ; 0045d3e6
        ;   XREF to: 0045d40f (CONDITIONAL_JUMP)  ; LAB_0045d40f
    FLD float ptr [ESP + 0x78]          ; 0045d3e8
    FCOMP float ptr [ESP + 0xc0]        ; 0045d3ec
    FNSTSW AX                           ; 0045d3f3
    SAHF                                ; 0045d3f5
    JBE 0x0045d40f                      ; 0045d3f6
        ;   XREF to: 0045d40f (CONDITIONAL_JUMP)  ; LAB_0045d40f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d3f8
    FLD float ptr [ESP + 0x7c]          ; 0045d3fb
    FCOMP float ptr [EAX + 0x140]       ; 0045d3ff
    FNSTSW AX                           ; 0045d405
    SAHF                                ; 0045d407
    JNC 0x0045d40f                      ; 0045d408
        ;   XREF to: 0045d40f (CONDITIONAL_JUMP)  ; LAB_0045d40f
    MOV EBX,0x1                         ; 0045d40a
    XOR EAX,EAX                         ; 0045d40f
        ;   Label: LAB_0045d40f
    MOV EDI,0x3                         ; 0045d411
    MOV dword ptr [ESP + 0x18],EAX      ; 0045d416
    MOV dword ptr [ESP + 0x14],EAX      ; 0045d41a
    MOV dword ptr [ESP + 0x10],EAX      ; 0045d41e
    MOV dword ptr [ESP + 0xc],EAX       ; 0045d422
    MOV dword ptr [ESP + 0x8],EDI       ; 0045d426
    TEST EBX,EBX                        ; 0045d42a
    JNZ 0x0045d525                      ; 0045d42c
        ;   XREF to: 0045d525 (CONDITIONAL_JUMP)  ; LAB_0045d525
    MOV dword ptr [ESP + 0x24],0x10     ; 0045d432
    MOV dword ptr [ESP + 0x20],EBX      ; 0045d43a
        ;   Label: LAB_0045d43a
    CMP EBX,0xf                         ; 0045d43e
    JNZ 0x0045d51d                      ; 0045d441
        ;   XREF to: 0045d51d (CONDITIONAL_JUMP)  ; LAB_0045d51d
    XOR EAX,EAX                         ; 0045d447
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045d449
        ;   Label: LAB_0045d449
    PUSH 0x44d060                       ; 0045d44d
    LEA EAX,[ESP + 0x8]                 ; 0045d452
    PUSH EAX                            ; 0045d456
    MOV EDX,dword ptr [0x005f2afc]      ; 0045d457 | DAT_005f2afc
    PUSH EDX                            ; 0045d45d | DAT_01bdd7e4
    INC EBX                             ; 0045d45e
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330 ; 0045d45f
        ;   XREF to: 0046d330 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 0045d464
    CMP EBX,0x10                        ; 0045d467
    JL 0x0045d43a                       ; 0045d46a
        ;   XREF to: 0045d43a (CONDITIONAL_JUMP)  ; LAB_0045d43a
    MOV ESI,0xffff                      ; 0045d46c
        ;   Label: LAB_0045d46c
    XOR ECX,ECX                         ; 0045d471
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d473
    MOV dword ptr [ESP + 0xc],ECX       ; 0045d476
    MOV dword ptr [ESP + 0x10],ECX      ; 0045d47a
    MOV dword ptr [ESP + 0x14],ESI      ; 0045d47e
    FLD float ptr [EAX + 0x140]         ; 0045d482
    FMUL double ptr [0x005bb494]        ; 0045d488 | DAT_005bb494
    XOR EBX,EBX                         ; 0045d48e
    CALL crt_math.c_round_FUN_005a3120  ; 0045d490
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x18]        ; 0045d495
    PUSH 0x44d060                       ; 0045d499
        ;   Label: LAB_0045d499
    LEA EAX,[ESP + 0x8]                 ; 0045d49e
    MOV dword ptr [ESP + 0x24],EBX      ; 0045d4a2
    XOR EDI,EDI                         ; 0045d4a6
    PUSH EAX                            ; 0045d4a8
    MOV EAX,[0x005f2afc]                ; 0045d4a9 | DAT_005f2afc
    INC EBX                             ; 0045d4ae
    PUSH EAX                            ; 0045d4af | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x28],EDI      ; 0045d4b0
    MOV dword ptr [ESP + 0x30],EBX      ; 0045d4b4
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330 ; 0045d4b8
        ;   XREF to: 0046d330 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 0045d4bd
    CMP EBX,0xe                         ; 0045d4c0
    JL 0x0045d499                       ; 0045d4c3
        ;   XREF to: 0045d499 (CONDITIONAL_JUMP)  ; LAB_0045d499
    MOV EDX,dword ptr [0x005f2afc]      ; 0045d4c5 | DAT_005f2afc
    PUSH EDX                            ; 0045d4cb | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0045d4cc
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0045d4d1
    PUSH EDI                            ; 0045d4d4
    MOV ECX,dword ptr [0x005f2afc]      ; 0045d4d5 | DAT_005f2afc
    PUSH ECX                            ; 0045d4db | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0045d4dc
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0045d4e1
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045d4e4
    PUSH EBX                            ; 0045d4e7
    CALL core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70 ; 0045d4e8
        ;   XREF to: 0045ed70 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0045d4ed
    MOV ESP,EBP                         ; 0045d4f0
    POP EBP                             ; 0045d4f2
    POP EDI                             ; 0045d4f3
    POP ESI                             ; 0045d4f4
    POP EBX                             ; 0045d4f5
    RET                                 ; 0045d4f6
    MOV EAX,dword ptr [ESP + 0x98]      ; 0045d4f7
        ;   Label: LAB_0045d4f7
    MOV dword ptr [ESP + 0x74],EAX      ; 0045d4fe
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0045d502
    MOV dword ptr [ESP + 0x78],EAX      ; 0045d509
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0045d50d
    MOV dword ptr [ESP + 0x7c],EAX      ; 0045d514
    JMP 0x0045d386                      ; 0045d518
        ;   XREF to: 0045d386 (UNCONDITIONAL_JUMP)  ; LAB_0045d386
    LEA EAX,[EBX + 0x1]                 ; 0045d51d
        ;   Label: LAB_0045d51d
    JMP 0x0045d449                      ; 0045d520
        ;   XREF to: 0045d449 (UNCONDITIONAL_JUMP)  ; LAB_0045d449
    CALL core_dcamera.cpp_initializeCoronaBuffers_FUN_0044d020 ; 0045d525
        ;   XREF to: 0044d020 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_initializeCoronaBuffers_FUN_0044d020()
        ;   Label: LAB_0045d525
    JMP 0x0045d46c                      ; 0045d52a
        ;   XREF to: 0045d46c (UNCONDITIONAL_JUMP)  ; LAB_0045d46c

