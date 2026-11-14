; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_005430e0(C3DSLight *this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d114a
;   undefined4 DAT_005d1152
;   undefined4 DAT_005d1156
;   undefined4 DAT_005d115a
;   undefined4 DAT_005d1162
;   undefined4 DAT_005d116a
;   undefined4 DAT_005d1172
;   undefined4 DAT_005e3d18
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005430e0
        ;   Label: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_005430e0
    SUB ESP,0x74                        ; 005430e1
    MOV EBP,dword ptr [ESP + 0x7c]      ; 005430e4
    TEST dword ptr [EBP + 0x11d4],0x7fffffff ; 005430e8
    JNZ 0x005430f9                      ; 005430f2
        ;   XREF to: 005430f9 (CONDITIONAL_JUMP)  ; LAB_005430f9
    ADD ESP,0x74                        ; 005430f4
    POP EBP                             ; 005430f7
    RET                                 ; 005430f8
    PUSH EDI                            ; 005430f9
        ;   Label: LAB_005430f9
    PUSH ESI                            ; 005430fa
    PUSH EBX                            ; 005430fb
    LEA EAX,[EBP + 0x104]               ; 005430fc
    PUSH EAX                            ; 00543102
    MOV ECX,dword ptr [0x005f2afc]      ; 00543103 | DAT_005f2afc
    PUSH ECX                            ; 00543109
    XOR EBX,EBX                         ; 0054310a
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0054310c
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00543111
    MOV dword ptr [ESP + 0x78],EBX      ; 00543114
    MOV dword ptr [ESP + 0x6c],EBX      ; 00543118
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0054311c
        ;   Label: LAB_0054311c
    MOV EDI,0xfffffffc                  ; 00543120
    SUB ESI,0xc0                        ; 00543125
    MOV EAX,dword ptr [ESP + 0x78]      ; 0054312b
        ;   Label: LAB_0054312b
    MOV dword ptr [ESP + 0x7c],EAX      ; 0054312f
    FILD dword ptr [ESP + 0x7c]         ; 00543133
    FMUL float ptr [0x005d1152]         ; 00543137 | DAT_005d1152
    FMUL float ptr [0x005d1156]         ; 0054313d | DAT_005d1156
    FMUL double ptr [0x005d115a]        ; 00543143 | DAT_005d115a
    FLD ST0                             ; 00543149
    FSIN                                ; 0054314b
    FXCH                                ; 0054314d
    FCOS                                ; 0054314f
    MOV dword ptr [ESP + 0x7c],EDI      ; 00543151
    FILD dword ptr [ESP + 0x7c]         ; 00543155
    FMUL float ptr [0x005d1162]         ; 00543159 | DAT_005d1162
    FLD float ptr [EBP + 0x11d4]        ; 0054315f
    FMUL double ptr [0x005d114a]        ; 00543165 | DAT_005d114a
    FXCH                                ; 0054316b
    FMUL float ptr [0x005d1156]         ; 0054316d | DAT_005d1156
    FXCH ST3                            ; 00543173
    FMUL ST1                            ; 00543175
    FXCH ST3                            ; 00543177
    FMUL double ptr [0x005d116a]        ; 00543179 | DAT_005d116a
    FLD ST0                             ; 0054317f
    FCOS                                ; 00543181
    FXCH                                ; 00543183
    FSIN                                ; 00543185
    FXCH ST3                            ; 00543187
    FMUL ST2                            ; 00543189
    FMUL ST1                            ; 0054318b
    FXCH ST4                            ; 0054318d
    FMULP                               ; 0054318f
    FXCH ST2                            ; 00543191
    FMULP                               ; 00543193
    LEA EBX,[ESP + 0x34]                ; 00543195
    MOV EDX,dword ptr [0x005f2afc]      ; 00543199 | DAT_005f2afc
    FXCH ST2                            ; 0054319f
    FSTP float ptr [ESP + 0x48]         ; 005431a1
    LEA EAX,[ESP + 0x40]                ; 005431a5
    FSTP float ptr [ESP + 0x40]         ; 005431a9
    FSTP float ptr [ESP + 0x44]         ; 005431ad
    FLD float ptr [EAX]                 ; 005431b1
    FMUL float ptr [0x005e3d18]         ; 005431b3 | DAT_005e3d18
    FISTP dword ptr [EBX]               ; 005431b9
    FLD float ptr [EAX + 0x4]           ; 005431bb
    FMUL float ptr [0x005e3d18]         ; 005431be | DAT_005e3d18
    FISTP dword ptr [EBX + 0x4]         ; 005431c4
    FLD float ptr [EAX + 0x8]           ; 005431c7
    FMUL float ptr [0x005e3d18]         ; 005431ca | DAT_005e3d18
    FISTP dword ptr [EBX + 0x8]         ; 005431d0
    LEA EAX,[ESP + 0x34]                ; 005431d3
    PUSH EAX                            ; 005431d7
    MOV EAX,dword ptr [EDX]             ; 005431d8
    ADD EAX,ESI                         ; 005431da
    PUSH EAX                            ; 005431dc
    CALL engine_special.cpp_FUN_005632a3 ; 005431dd
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x005f2afc]      ; 005431e2 | DAT_005f2afc
    MOV EAX,dword ptr [EDX]             ; 005431e8
    MOV dword ptr [ESI + EAX*0x1 + 0x18],0x800000 ; 005431ea
    MOV EAX,dword ptr [EDX]             ; 005431f2
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000 ; 005431f4
    FLD float ptr [EBP + 0x11c4]        ; 005431fc
    FMUL float ptr [0x005d1172]         ; 00543202 | DAT_005d1172
    ADD ESP,0x8                         ; 00543208
    MOV EBX,dword ptr [EDX]             ; 0054320b
    CALL crt_math.c_round_FUN_005a3120  ; 0054320d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x7c]        ; 00543212
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00543216
    MOV dword ptr [ESI + EBX*0x1 + 0x20],EAX ; 0054321a
    FLD float ptr [EBP + 0x11c8]        ; 0054321e
    MOV EAX,dword ptr [EDX]             ; 00543224
    FMUL float ptr [0x005d1172]         ; 00543226 | DAT_005d1172
    LEA EBX,[EAX + ESI*0x1]             ; 0054322c
    CALL crt_math.c_round_FUN_005a3120  ; 0054322f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x7c]        ; 00543234
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00543238
    MOV dword ptr [EBX + 0x24],EAX      ; 0054323c
    FLD float ptr [EBP + 0x11cc]        ; 0054323f
    FMUL float ptr [0x005d1172]         ; 00543245 | DAT_005d1172
    ADD ESI,0x30                        ; 0054324b
    MOV EBX,dword ptr [EDX]             ; 0054324e
    CALL crt_math.c_round_FUN_005a3120  ; 00543250
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x7c]        ; 00543255
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00543259
    INC EDI                             ; 0054325d
    MOV dword ptr [ESI + EBX*0x1 + -0x8],EAX ; 0054325e
    CMP EDI,0x4                         ; 00543262
    JLE 0x0054312b                      ; 00543265
        ;   XREF to: 0054312b (CONDITIONAL_JUMP)  ; LAB_0054312b
    MOV EAX,dword ptr [ESP + 0x78]      ; 0054326b
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0054326f
    INC EAX                             ; 00543273
    ADD EDI,0x1e0                       ; 00543274
    MOV dword ptr [ESP + 0x78],EAX      ; 0054327a
    MOV dword ptr [ESP + 0x6c],EDI      ; 0054327e
    CMP EAX,0x10                        ; 00543282
    JLE 0x0054311c                      ; 00543285
        ;   XREF to: 0054311c (CONDITIONAL_JUMP)  ; LAB_0054311c
    PUSH 0x60409c                       ; 0054328b
    PUSH EDX                            ; 00543290
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00543291
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00543296
    PUSH 0x4000                         ; 00543299
    MOV EBX,dword ptr [0x005f2afc]      ; 0054329e | DAT_005f2afc
    PUSH EBX                            ; 005432a4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 005432a5
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005432aa
    PUSH 0x0                            ; 005432ad
    MOV ESI,dword ptr [0x005f2afc]      ; 005432af | DAT_005f2afc
    PUSH ESI                            ; 005432b5
    MOV EDI,0x4                         ; 005432b6
    XOR EBP,EBP                         ; 005432bb
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 005432bd
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005432c2
    MOV ESI,0xa                         ; 005432c5
    MOV EBX,dword ptr [0x005f2afc]      ; 005432ca | DAT_005f2afc
    PUSH 0x1                            ; 005432d0
    MOV dword ptr [ESP + 0x14],EDI      ; 005432d2
    MOV dword ptr [ESP + 0x24],EBP      ; 005432d6
    MOV dword ptr [ESP + 0x20],EBP      ; 005432da
    PUSH EBX                            ; 005432de
    MOV dword ptr [ESP + 0x20],EBP      ; 005432df
    MOV dword ptr [ESP + 0x1c],EBP      ; 005432e3
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 005432e7
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 005432ec
    MOV dword ptr [ESP + 0x70],ESI      ; 005432ef
    MOV dword ptr [ESP + 0x74],EBP      ; 005432f3
    MOV EDI,dword ptr [ESP + 0x74]      ; 005432f7
        ;   Label: LAB_005432f7
    MOV EBX,dword ptr [ESP + 0x70]      ; 005432fb
    MOV ESI,0xfffffffc                  ; 005432ff
    LEA EAX,[EDI + ESI*0x1]             ; 00543304
        ;   Label: LAB_00543304
    LEA EDX,[EBX + ESI*0x1]             ; 00543307
    INC ESI                             ; 0054330a
    MOV dword ptr [ESP + 0x24],EAX      ; 0054330b
    MOV dword ptr [ESP + 0x28],EDX      ; 0054330f
    LEA EBP,[EBX + ESI*0x1]             ; 00543313
    LEA EAX,[ESP + 0xc]                 ; 00543316
    MOV dword ptr [ESP + 0x2c],EBP      ; 0054331a
    PUSH EAX                            ; 0054331e
    MOV EBP,dword ptr [0x005f2afc]      ; 0054331f | DAT_005f2afc
    LEA ECX,[EDI + ESI*0x1]             ; 00543325
    PUSH EBP                            ; 00543328
    MOV dword ptr [ESP + 0x38],ECX      ; 00543329
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730 ; 0054332d
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00543332
    CMP ESI,0x4                         ; 00543335
    JL 0x00543304                       ; 00543338
        ;   XREF to: 00543304 (CONDITIONAL_JUMP)  ; LAB_00543304
    MOV EDX,dword ptr [ESP + 0x74]      ; 0054333a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0054333e
    ADD EDX,0xa                         ; 00543342
    ADD EAX,0xa                         ; 00543345
    MOV dword ptr [ESP + 0x74],EDX      ; 00543348
    MOV dword ptr [ESP + 0x70],EAX      ; 0054334c
    CMP EDX,0xa0                        ; 00543350
    JNZ 0x005432f7                      ; 00543356
        ;   XREF to: 005432f7 (CONDITIONAL_JUMP)  ; LAB_005432f7
    PUSH 0x0                            ; 00543358
    MOV EBX,dword ptr [0x005f2afc]      ; 0054335a | DAT_005f2afc
    PUSH EBX                            ; 00543360
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 00543361
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00543366
    POP EBX                             ; 00543369
    POP ESI                             ; 0054336a
    POP EDI                             ; 0054336b
    ADD ESP,0x74                        ; 0054336c
    POP EBP                             ; 0054336f
    RET                                 ; 00543370

