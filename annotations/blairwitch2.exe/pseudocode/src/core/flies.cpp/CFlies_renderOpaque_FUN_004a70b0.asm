; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004a70b0(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d66e9
;   undefined4 DAT_005d66f1
;   undefined4 DAT_005d66f9
;   undefined4 DAT_005f7060
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38aec
;   undefined4 DAT_01caf5ec
;   undefined4 DAT_01caf62c
;   undefined4 DAT_01caf630
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_flies.cpp_drawFlyPixel_FUN_004a6fe0
;   core_spline.cpp_FUN_00561310
;   core_spline.cpp_FUN_00561540
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0
;   engine_prim.c_replaceWWithDepth_FUN_0051c720
;   engine_special.cpp_FUN_0055d723
;   engine_texture.cpp_FUN_00574e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a70b0
        ;   Label: core_flies.cpp_CFlies_renderOpaque_FUN_004a70b0
    PUSH ESI                            ; 004a70b1
    PUSH EDI                            ; 004a70b2
    PUSH EBP                            ; 004a70b3
    MOV EBP,ESP                         ; 004a70b4
    SUB ESP,0xb0                        ; 004a70b6
    AND ESP,0xfffffff8                  ; 004a70bc
    MOV EDX,dword ptr [0x0060b280]      ; 004a70bf | DAT_0060b280
    PUSH EDX                            ; 004a70c5
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 004a70c6
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004a70cb
    TEST EAX,EAX                        ; 004a70ce
    JZ 0x004a70db                       ; 004a70d0
        ;   XREF to: 004a70db (CONDITIONAL_JUMP)  ; LAB_004a70db
    XOR EAX,EAX                         ; 004a70d2
    MOV ESP,EBP                         ; 004a70d4
    POP EBP                             ; 004a70d6
    POP EDI                             ; 004a70d7
    POP ESI                             ; 004a70d8
    POP EBX                             ; 004a70d9
    RET                                 ; 004a70da
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a70db
        ;   Label: LAB_004a70db
    PUSH EAX                            ; 004a70de
    MOV dword ptr [EAX + 0x2b78],0x0    ; 004a70df
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004a70e9
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a70ee
    PUSH 0x0                            ; 004a70f1
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a70f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a70f6
    PUSH EBX                            ; 004a70f9
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004a70fa
    LEA ESI,[ESP + 0x50]                ; 004a7100
    LEA EDI,[ESP + 0x68]                ; 004a7104
    CALL dword ptr [EAX + 0x24]         ; 004a7108
    MOV ECX,0x6                         ; 004a710b
    ADD ESP,0x4                         ; 004a7110
    LEA EAX,[ESP + 0x64]                ; 004a7113
    LEA ESI,[ESP + 0x4c]                ; 004a7117
    PUSH EAX                            ; 004a711b
    MOVSD.REP ES:EDI,ESI                ; 004a711c
    CALL core_box.cpp_FUN_0041a840      ; 004a711e
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004a7123
    MOV dword ptr [ESP + 0x9c],EAX      ; 004a7126
    TEST EAX,EAX                        ; 004a712d
    JZ 0x004a73a0                       ; 004a712f
        ;   XREF to: 004a73a0 (CONDITIONAL_JUMP)  ; LAB_004a73a0
    MOV ESI,dword ptr [0x01caf5ec]      ; 004a7135 | DAT_01caf5ec
    MOV dword ptr [EBX + 0x2b78],0x1    ; 004a713b
    TEST ESI,ESI                        ; 004a7145
    JNZ 0x004a718e                      ; 004a7147
        ;   XREF to: 004a718e (CONDITIONAL_JUMP)  ; LAB_004a718e
    MOV ESI,0x1caf634                   ; 004a7149
    XOR EBX,EBX                         ; 004a714e
    MOV dword ptr [ESP + 0xac],EBX      ; 004a7150
        ;   Label: LAB_004a7150
    FILD dword ptr [ESP + 0xac]         ; 004a7157
    FADD double ptr [0x005d66f9]        ; 004a715e | DAT_005d66f9
    FMUL double ptr [0x005d66e9]        ; 004a7164 | DAT_005d66e9
    PUSH 0x0                            ; 004a716a
    SUB ESP,0x4                         ; 004a716c
    FSTP float ptr [ESP]                ; 004a716f
    PUSH ESI                            ; 004a7172
    INC EBX                             ; 004a7173
    CALL core_spline.cpp_FUN_00561310   ; 004a7174
        ;   XREF to: 00561310 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_FUN_00561310(float * out_basis, float t, float tension)
    ADD ESP,0xc                         ; 004a7179
    ADD ESI,0x20                        ; 004a717c
    CMP EBX,0x40                        ; 004a717f
    JL 0x004a7150                       ; 004a7182
        ;   XREF to: 004a7150 (CONDITIONAL_JUMP)  ; LAB_004a7150
    MOV dword ptr [0x01caf5ec],0x1      ; 004a7184 | DAT_01caf5ec
    MOV EAX,[0x01c37788]                ; 004a718e | DAT_01c37788
        ;   Label: LAB_004a718e
    TEST EAX,EAX                        ; 004a7193
    JZ 0x004a73ba                       ; 004a7195
        ;   XREF to: 004a73ba (CONDITIONAL_JUMP)  ; LAB_004a73ba
    MOV ECX,0x3                         ; 004a719b
    MOV ESI,0x800000                    ; 004a71a0
    MOV EAX,[0x0060b280]                ; 004a71a5 | DAT_0060b280
    XOR EBX,EBX                         ; 004a71aa
    MOV dword ptr [ESP + 0x4],ECX       ; 004a71ac
    MOV dword ptr [ESP + 0x14],EBX      ; 004a71b0
    MOV dword ptr [ESP + 0x10],EBX      ; 004a71b4
    MOV dword ptr [ESP + 0xc],EBX       ; 004a71b8
    MOV dword ptr [ESP + 0x8],EBX       ; 004a71bc
    MOV dword ptr [ESP + 0x18],EBX      ; 004a71c0
    MOV dword ptr [ESP + 0x1c],ESI      ; 004a71c4
    MOV dword ptr [ESP + 0x20],ESI      ; 004a71c8
    MOV dword ptr [ESP + 0x28],ESI      ; 004a71cc
    MOV dword ptr [ESP + 0x2c],ESI      ; 004a71d0
    MOV dword ptr [ESP + 0x34],ESI      ; 004a71d4
    MOV dword ptr [ESP + 0x38],ESI      ; 004a71d8
    MOV ECX,0x1                         ; 004a71dc
    MOV EBX,0x2                         ; 004a71e1
    MOV dword ptr [ESP + 0x24],ECX      ; 004a71e6
    MOV dword ptr [ESP + 0x30],EBX      ; 004a71ea
    MOV EDX,dword ptr [EAX]             ; 004a71ee
    MOV dword ptr [EDX + 0x20],0x0      ; 004a71f0
    MOV EDX,dword ptr [EAX]             ; 004a71f7
    MOV dword ptr [EDX + 0x24],0x0      ; 004a71f9
    MOV EDX,dword ptr [EAX]             ; 004a7200
    MOV dword ptr [EDX + 0x28],0x0      ; 004a7202
    MOV EDX,dword ptr [EAX]             ; 004a7209
    MOV dword ptr [EDX + 0x50],0x0      ; 004a720b
    MOV EDX,dword ptr [EAX]             ; 004a7212
    MOV dword ptr [EDX + 0x54],0x0      ; 004a7214
    MOV EDX,dword ptr [EAX]             ; 004a721b
    MOV dword ptr [EDX + 0x58],0x0      ; 004a721d
    MOV EDX,dword ptr [EAX]             ; 004a7224
    MOV dword ptr [EDX + 0x80],0x0      ; 004a7226
    MOV EDX,dword ptr [EAX]             ; 004a7230
    MOV dword ptr [EDX + 0x84],0x0      ; 004a7232
    MOV EDX,dword ptr [EAX]             ; 004a723c
    MOV ESI,dword ptr [0x01c38aec]      ; 004a723e | DAT_01c38aec
    MOV dword ptr [EDX + 0x88],0x0      ; 004a7244
    MOV EDX,0xffff                      ; 004a724e
    MOV EBX,dword ptr [EAX]             ; 004a7253
    SUB EDX,ESI                         ; 004a7255
    MOV dword ptr [EBX + 0x2c],EDX      ; 004a7257
    MOV EBX,dword ptr [EAX]             ; 004a725a
    MOV dword ptr [EBX + 0x5c],EDX      ; 004a725c
    MOV EAX,dword ptr [EAX]             ; 004a725f
    PUSH 0x616378                       ; 004a7261
    MOV dword ptr [EAX + 0x8c],EDX      ; 004a7266
    CALL engine_texture.cpp_FUN_00574e00 ; 004a726c
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574e00()
    ADD ESP,0x4                         ; 004a7271
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a7274
        ;   Label: LAB_004a7274
    XOR EDI,EDI                         ; 004a7277
    MOV EDX,dword ptr [EAX + 0x2c0]     ; 004a7279
    MOV dword ptr [ESP + 0xa0],EDI      ; 004a727f
    TEST EDX,EDX                        ; 004a7286
    JLE 0x004a73a0                      ; 004a7288
        ;   XREF to: 004a73a0 (CONDITIONAL_JUMP)  ; LAB_004a73a0
    ADD EAX,0x2c4                       ; 004a728e
    MOV dword ptr [ESP + 0xa4],EAX      ; 004a7293
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004a729a
        ;   Label: LAB_004a729a
    FLD float ptr [EAX]                 ; 004a72a1
    FMUL float ptr [0x005d66f1]         ; 004a72a3 | DAT_005d66f1
    CALL crt_math.c_round_FUN_005b7ff0  ; 004a72a9
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xa8]        ; 004a72ae
    MOV EDI,dword ptr [ESP + 0xa8]      ; 004a72b5
    TEST EDI,EDI                        ; 004a72bc
    JL 0x004a7405                       ; 004a72be
        ;   XREF to: 004a7405 (CONDITIONAL_JUMP)  ; LAB_004a7405
    CMP EDI,0x40                        ; 004a72c4
    JL 0x004a72d4                       ; 004a72c7
        ;   XREF to: 004a72d4 (CONDITIONAL_JUMP)  ; LAB_004a72d4
    MOV dword ptr [ESP + 0xa8],0x3f     ; 004a72c9
    MOV EDX,dword ptr [ESP + 0xa8]      ; 004a72d4
        ;   Label: LAB_004a72d4
    MOV EDI,0x1caf634                   ; 004a72db
    LEA ESI,[EAX + 0x4]                 ; 004a72e0
    SHL EDX,0x5                         ; 004a72e3
    LEA EBX,[EAX + 0x10]                ; 004a72e6
    ADD EDI,EDX                         ; 004a72e9
    LEA EDX,[EAX + 0x1c]                ; 004a72eb
    ADD EAX,0x28                        ; 004a72ee
    PUSH EAX                            ; 004a72f1
    PUSH EDX                            ; 004a72f2
    PUSH EBX                            ; 004a72f3
    PUSH ESI                            ; 004a72f4
    PUSH EDI                            ; 004a72f5
    LEA ESI,[ESP + 0xa4]                ; 004a72f6
    LEA EBX,[ESP + 0x8c]                ; 004a72fd
    CALL core_spline.cpp_FUN_00561540   ; 004a7304
        ;   XREF to: 00561540 (UNCONDITIONAL_CALL)  ; undefined core_spline.cpp_FUN_00561540()
    LEA EDI,[ESP + 0x98]                ; 004a7309
    LEA ESI,[ESP + 0xa4]                ; 004a7310
    LEA EAX,[ESP + 0x98]                ; 004a7317
    ADD ESP,0x14                        ; 004a731e
    MOV EDX,dword ptr [0x0060b280]      ; 004a7321 | DAT_0060b280
    MOVSD ES:EDI,ESI                    ; 004a7327
    MOVSD ES:EDI,ESI                    ; 004a7328
    MOVSD ES:EDI,ESI                    ; 004a7329
    FLD float ptr [EAX]                 ; 004a732a
    FMUL float ptr [0x005f7060]         ; 004a732c | DAT_005f7060
    FISTP dword ptr [EBX]               ; 004a7332
    FLD float ptr [EAX + 0x4]           ; 004a7334
    FMUL float ptr [0x005f7060]         ; 004a7337 | DAT_005f7060
    FISTP dword ptr [EBX + 0x4]         ; 004a733d
    FLD float ptr [EAX + 0x8]           ; 004a7340
    FMUL float ptr [0x005f7060]         ; 004a7343 | DAT_005f7060
    FISTP dword ptr [EBX + 0x8]         ; 004a7349
    LEA EAX,[ESP + 0x78]                ; 004a734c
    PUSH EAX                            ; 004a7350
    MOV EAX,dword ptr [EDX]             ; 004a7351
    PUSH EAX                            ; 004a7353
    CALL engine_special.cpp_FUN_0055d723 ; 004a7354
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 004a7359 | DAT_0060b280
    MOV EBX,dword ptr [EAX]             ; 004a735e
    MOV DL,byte ptr [EBX + 0x13]        ; 004a7360
    ADD ESP,0x8                         ; 004a7363
    TEST DL,0x80                        ; 004a7366
    JZ 0x004a7413                       ; 004a7369
        ;   XREF to: 004a7413 (CONDITIONAL_JUMP)  ; LAB_004a7413
    MOV ECX,dword ptr [ESP + 0xa4]      ; 004a736f
        ;   Label: LAB_004a736f
    MOV EBX,dword ptr [ESP + 0xa0]      ; 004a7376
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a737d
    ADD ECX,0x34                        ; 004a7380
    INC EBX                             ; 004a7383
    MOV ESI,dword ptr [EDX + 0x2c0]     ; 004a7384
    MOV dword ptr [ESP + 0xa4],ECX      ; 004a738a
    MOV dword ptr [ESP + 0xa0],EBX      ; 004a7391
    CMP EBX,ESI                         ; 004a7398
    JL 0x004a729a                       ; 004a739a
        ;   XREF to: 004a729a (CONDITIONAL_JUMP)  ; LAB_004a729a
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a73a0
        ;   Label: LAB_004a73a0
    PUSH ESI                            ; 004a73a3
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004a73a4
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a73a9
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004a73ac
    MOV ESP,EBP                         ; 004a73b3
    POP EBP                             ; 004a73b5
    POP EDI                             ; 004a73b6
    POP ESI                             ; 004a73b7
    POP EBX                             ; 004a73b8
    RET                                 ; 004a73b9
    PUSH EAX                            ; 004a73ba
        ;   Label: LAB_004a73ba
    PUSH EAX                            ; 004a73bb
    PUSH EAX                            ; 004a73bc
    MOV EDX,dword ptr [0x0060b280]      ; 004a73bd | DAT_0060b280
    PUSH EDX                            ; 004a73c3
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0 ; 004a73c4
        ;   XREF to: 0046b7f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EAX,[0x01c38aec]                ; 004a73c9 | DAT_01c38aec
    SAR EAX,0x8                         ; 004a73ce
    MOV [0x01caf62c],EAX                ; 004a73d1 | DAT_01caf62c
    MOV EDX,dword ptr [0x01caf62c]      ; 004a73d6 | DAT_01caf62c
    SHL EAX,0x8                         ; 004a73dc
    OR EDX,EAX                          ; 004a73df
    MOV EAX,[0x01caf62c]                ; 004a73e1 | DAT_01caf62c
    SHL EAX,0x10                        ; 004a73e6
    OR EDX,EAX                          ; 004a73e9
    MOV EAX,EDX                         ; 004a73eb
    ADD ESP,0x10                        ; 004a73ed
    XOR EAX,0xffffff                    ; 004a73f0
    MOV dword ptr [0x01caf62c],EDX      ; 004a73f5 | DAT_01caf62c
    MOV [0x01caf630],EAX                ; 004a73fb | DAT_01caf630
    JMP 0x004a7274                      ; 004a7400
        ;   XREF to: 004a7274 (UNCONDITIONAL_JUMP)  ; LAB_004a7274
    XOR EBX,EBX                         ; 004a7405
        ;   Label: LAB_004a7405
    MOV dword ptr [ESP + 0xa8],EBX      ; 004a7407
    JMP 0x004a72d4                      ; 004a740e
        ;   XREF to: 004a72d4 (UNCONDITIONAL_JUMP)  ; LAB_004a72d4
    MOV EDX,dword ptr [0x01c37788]      ; 004a7413 | DAT_01c37788
        ;   Label: LAB_004a7413
    MOV EDI,dword ptr [EBX + 0x14]      ; 004a7419
    MOV ESI,dword ptr [EBX + 0x10]      ; 004a741c
    SAR EDI,0x10                        ; 004a741f
    SAR ESI,0x10                        ; 004a7422
    TEST EDX,EDX                        ; 004a7425
    JZ 0x004a7498                       ; 004a7427
        ;   XREF to: 004a7498 (CONDITIONAL_JUMP)  ; LAB_004a7498
    MOV EDX,dword ptr [0x006141b8]      ; 004a7429 | DAT_006141b8
    DEC EDX                             ; 004a742f
    CMP ESI,EDX                         ; 004a7430
    JGE 0x004a736f                      ; 004a7432
        ;   XREF to: 004a736f (CONDITIONAL_JUMP)  ; LAB_004a736f
    MOV ESI,dword ptr [0x006141bc]      ; 004a7438 | DAT_006141bc
    DEC ESI                             ; 004a743e
    CMP EDI,ESI                         ; 004a743f
    JGE 0x004a736f                      ; 004a7441
        ;   XREF to: 004a736f (CONDITIONAL_JUMP)  ; LAB_004a736f
    MOV word ptr [EBX + 0x10],0x0       ; 004a7447
    MOV word ptr [EBX + 0x14],0x0       ; 004a744d
    MOV ESI,dword ptr [EAX]             ; 004a7453
    MOV ECX,0xc                         ; 004a7455
    LEA EDI,[ESI + 0x30]                ; 004a745a
    MOV ESI,EBX                         ; 004a745d
    MOVSD.REP ES:EDI,ESI                ; 004a745f
    MOV ESI,dword ptr [EAX]             ; 004a7461
    MOV ECX,0xc                         ; 004a7463
    LEA EDI,[ESI + 0x60]                ; 004a7468
    MOV ESI,EBX                         ; 004a746b
    MOVSD.REP ES:EDI,ESI                ; 004a746d
    MOV EBX,dword ptr [EAX]             ; 004a746f
    INC word ptr [EBX + 0x42]           ; 004a7471
    MOV EBX,dword ptr [EAX]             ; 004a7475
    PUSH 0x3e7                          ; 004a7477
    LEA EDX,[ESP + 0x4]                 ; 004a747c
    MOV CX,word ptr [EBX + 0x76]        ; 004a7480
    PUSH EDX                            ; 004a7484
    INC ECX                             ; 004a7485
    PUSH EAX                            ; 004a7486
    MOV word ptr [EBX + 0x76],CX        ; 004a7487
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00 ; 004a748b
        ;   XREF to: 00469d00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 004a7490
    JMP 0x004a736f                      ; 004a7493
        ;   XREF to: 004a736f (UNCONDITIONAL_JUMP)  ; LAB_004a736f
    PUSH 0x1                            ; 004a7498
        ;   Label: LAB_004a7498
    PUSH EBX                            ; 004a749a
    CALL engine_prim.c_replaceWWithDepth_FUN_0051c720 ; 004a749b
        ;   XREF to: 0051c720 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_0051c720(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004a74a0
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a74a3
    TEST ESI,ESI                        ; 004a74a6
    JL 0x004a736f                       ; 004a74a8
        ;   XREF to: 004a736f (CONDITIONAL_JUMP)  ; LAB_004a736f
    CMP ESI,dword ptr [0x006141b8]      ; 004a74ae | DAT_006141b8
    JGE 0x004a736f                      ; 004a74b4
        ;   XREF to: 004a736f (CONDITIONAL_JUMP)  ; LAB_004a736f
    TEST EDI,EDI                        ; 004a74ba
    JL 0x004a736f                       ; 004a74bc
        ;   XREF to: 004a736f (CONDITIONAL_JUMP)  ; LAB_004a736f
    CMP EDI,dword ptr [0x006141bc]      ; 004a74c2 | DAT_006141bc
    JGE 0x004a736f                      ; 004a74c8
        ;   XREF to: 004a736f (CONDITIONAL_JUMP)  ; LAB_004a736f
    PUSH EAX                            ; 004a74ce
    PUSH EDI                            ; 004a74cf
    PUSH ESI                            ; 004a74d0
    CALL core_flies.cpp_drawFlyPixel_FUN_004a6fe0 ; 004a74d1
        ;   XREF to: 004a6fe0 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_drawFlyPixel_FUN_004a6fe0(int screen_x, int screen_y, int z_depth)
    ADD ESP,0xc                         ; 004a74d6
    JMP 0x004a736f                      ; 004a74d9
        ;   XREF to: 004a736f (UNCONDITIONAL_JUMP)  ; LAB_004a736f

