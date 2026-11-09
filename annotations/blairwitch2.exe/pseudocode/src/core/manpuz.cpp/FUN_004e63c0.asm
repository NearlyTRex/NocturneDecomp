; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_FUN_004e63c0(CMansionPuzzleCircle *this_ptr,int gem_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   gem_index
;
; XREF[1]:
;   core_manpuz.cpp_FUN_004e56d0 at 004e577f
;
; Referenced Globals:
;   undefined4 DAT_005dc525
;   undefined4 DAT_005dc52d
;   undefined4 DAT_005f98a0
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   core_set.cpp_FUN_005344c0
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
;   engine_matrix.c_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e63c0
        ;   Label: core_manpuz.cpp_FUN_004e63c0
    PUSH ESI                            ; 004e63c1
    PUSH EDI                            ; 004e63c2
    PUSH EBP                            ; 004e63c3
    SUB ESP,0x98                        ; 004e63c4
    MOV EDI,dword ptr [ESP + 0xac]      ; 004e63ca
    MOV EDX,dword ptr [ESP + 0xb0]      ; 004e63d1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e63d8
    SUB EAX,EDX                         ; 004e63df
    SHL EAX,0x3                         ; 004e63e1
    SUB EAX,EDX                         ; 004e63e4
    LEA ESI,[EDI + 0xbfc]               ; 004e63e6
    SHL EAX,0x3                         ; 004e63ec
    ADD ESI,EAX                         ; 004e63ef
    LEA EAX,[ESI + 0x24]                ; 004e63f1
    PUSH EAX                            ; 004e63f4
    LEA EAX,[ESI + 0x30]                ; 004e63f5
    PUSH EAX                            ; 004e63f8
    MOV EDX,dword ptr [0x0060b280]      ; 004e63f9 | DAT_0060b280
    PUSH EDX                            ; 004e63ff
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 004e6400
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    FLD float ptr [0x005dc525]          ; 004e6405 | DAT_005dc525
    FLD float ptr [ESI + 0x8]           ; 004e640b
    FMUL ST1                            ; 004e640e
    FLD float ptr [ESI + 0x4]           ; 004e6410
    FMUL ST2                            ; 004e6413
    FLD float ptr [ESI]                 ; 004e6415
    FMULP ST3                           ; 004e6417
    ADD ESP,0xc                         ; 004e6419
    FXCH                                ; 004e641c
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e641e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004e6423
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e6425
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004e642a
    FISTP dword ptr [ESP + 0x84]        ; 004e642c
    FISTP dword ptr [ESP + 0x94]        ; 004e6433
    MOV ECX,dword ptr [ESP + 0x84]      ; 004e643a
    MOV EBX,dword ptr [ESP + 0x94]      ; 004e6441
    PUSH ECX                            ; 004e6448
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e6449
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EBX                            ; 004e644e
    FISTP dword ptr [ESP + 0x9c]        ; 004e644f
    MOV EBP,dword ptr [ESP + 0x9c]      ; 004e6456
    PUSH EBP                            ; 004e645d
    MOV EAX,[0x0061b5a8]                ; 004e645e | g_CDemonSetPtr
    PUSH EAX                            ; 004e6463
    CALL core_set.cpp_FUN_005344c0      ; 004e6464
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004e6469
    PUSH -0x1                           ; 004e646c
    LEA EAX,[EDI + 0x430]               ; 004e646e
    PUSH 0x0                            ; 004e6474
    PUSH EAX                            ; 004e6476
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004e6477
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004e647c
    PUSH 0x10000                        ; 004e647f
    PUSH 0x10000                        ; 004e6484
    PUSH 0x10000                        ; 004e6489
    MOV EDX,dword ptr [0x0061b5a8]      ; 004e648e | g_CDemonSetPtr
    PUSH EDX                            ; 004e6494
    CALL core_set.cpp_FUN_005344c0      ; 004e6495
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004e649a
    MOV ECX,dword ptr [0x0060b280]      ; 004e649d | DAT_0060b280
    PUSH ECX                            ; 004e64a3
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 004e64a4
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004e64a9
    TEST EAX,EAX                        ; 004e64ac
    JNZ 0x004e67d4                      ; 004e64ae
        ;   XREF to: 004e67d4 (CONDITIONAL_JUMP)  ; LAB_004e67d4
    FLD float ptr [ESI + 0xc]           ; 004e64b4
    FCOMP double ptr [0x005dc52d]       ; 004e64b7 | DAT_005dc52d
    FNSTSW AX                           ; 004e64bd
    SAHF                                ; 004e64bf
    JBE 0x004e67ee                      ; 004e64c0
        ;   XREF to: 004e67ee (CONDITIONAL_JUMP)  ; LAB_004e67ee
    MOV EBX,0xbfb33333                  ; 004e64c6
        ;   Label: LAB_004e64c6
    MOV EBP,0x3e4ccccd                  ; 004e64cb
    LEA EAX,[ESP + 0x78]                ; 004e64d0
    MOV EDX,dword ptr [0x0060b280]      ; 004e64d4 | DAT_0060b280
    MOV dword ptr [ESP + 0x78],EBX      ; 004e64da
    MOV dword ptr [ESP + 0x80],EBX      ; 004e64de
    LEA EBX,[ESP + 0x60]                ; 004e64e5
    MOV dword ptr [ESP + 0x7c],EBP      ; 004e64e9
    FLD float ptr [EAX]                 ; 004e64ed
    FMUL float ptr [0x005f98a0]         ; 004e64ef | DAT_005f98a0
    FISTP dword ptr [EBX]               ; 004e64f5
    FLD float ptr [EAX + 0x4]           ; 004e64f7
    FMUL float ptr [0x005f98a0]         ; 004e64fa | DAT_005f98a0
    FISTP dword ptr [EBX + 0x4]         ; 004e6500
    FLD float ptr [EAX + 0x8]           ; 004e6503
    FMUL float ptr [0x005f98a0]         ; 004e6506 | DAT_005f98a0
    FISTP dword ptr [EBX + 0x8]         ; 004e650c
    LEA EAX,[ESP + 0x60]                ; 004e650f
    PUSH EAX                            ; 004e6513
    MOV EAX,dword ptr [EDX]             ; 004e6514
    PUSH EAX                            ; 004e6516
    CALL engine_special.cpp_FUN_0055d723 ; 004e6517
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e651c
    MOV AH,byte ptr [ESP + 0x7b]        ; 004e651f
    XOR AH,0x80                         ; 004e6523
    LEA EBX,[ESP + 0x48]                ; 004e6526
    MOV byte ptr [ESP + 0x7b],AH        ; 004e652a
    LEA EAX,[ESP + 0x78]                ; 004e652e
    MOV EDX,dword ptr [0x0060b280]      ; 004e6532 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004e6538
    FMUL float ptr [0x005f98a0]         ; 004e653a | DAT_005f98a0
    FISTP dword ptr [EBX]               ; 004e6540
    FLD float ptr [EAX + 0x4]           ; 004e6542
    FMUL float ptr [0x005f98a0]         ; 004e6545 | DAT_005f98a0
    FISTP dword ptr [EBX + 0x4]         ; 004e654b
    FLD float ptr [EAX + 0x8]           ; 004e654e
    FMUL float ptr [0x005f98a0]         ; 004e6551 | DAT_005f98a0
    FISTP dword ptr [EBX + 0x8]         ; 004e6557
    LEA EAX,[ESP + 0x48]                ; 004e655a
    PUSH EAX                            ; 004e655e
    MOV EAX,dword ptr [EDX]             ; 004e655f
    ADD EAX,0x30                        ; 004e6561
    PUSH EAX                            ; 004e6564
    CALL engine_special.cpp_FUN_0055d723 ; 004e6565
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e656a
    MOV DL,byte ptr [ESP + 0x83]        ; 004e656d
    LEA EBX,[ESP + 0x54]                ; 004e6574
    XOR DL,0x80                         ; 004e6578
    LEA EAX,[ESP + 0x78]                ; 004e657b
    MOV byte ptr [ESP + 0x83],DL        ; 004e657f
    MOV EDX,dword ptr [0x0060b280]      ; 004e6586 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004e658c
    FMUL float ptr [0x005f98a0]         ; 004e658e | DAT_005f98a0
    FISTP dword ptr [EBX]               ; 004e6594
    FLD float ptr [EAX + 0x4]           ; 004e6596
    FMUL float ptr [0x005f98a0]         ; 004e6599 | DAT_005f98a0
    FISTP dword ptr [EBX + 0x4]         ; 004e659f
    FLD float ptr [EAX + 0x8]           ; 004e65a2
    FMUL float ptr [0x005f98a0]         ; 004e65a5 | DAT_005f98a0
    FISTP dword ptr [EBX + 0x8]         ; 004e65ab
    LEA EAX,[ESP + 0x54]                ; 004e65ae
    PUSH EAX                            ; 004e65b2
    MOV EAX,dword ptr [EDX]             ; 004e65b3
    ADD EAX,0x60                        ; 004e65b5
    PUSH EAX                            ; 004e65b8
    CALL engine_special.cpp_FUN_0055d723 ; 004e65b9
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e65be
    MOV DH,byte ptr [ESP + 0x7b]        ; 004e65c1
    LEA EBX,[ESP + 0x6c]                ; 004e65c5
    XOR DH,0x80                         ; 004e65c9
    LEA EAX,[ESP + 0x78]                ; 004e65cc
    MOV byte ptr [ESP + 0x7b],DH        ; 004e65d0
    MOV EDX,dword ptr [0x0060b280]      ; 004e65d4 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004e65da
    FMUL float ptr [0x005f98a0]         ; 004e65dc | DAT_005f98a0
    FISTP dword ptr [EBX]               ; 004e65e2
    FLD float ptr [EAX + 0x4]           ; 004e65e4
    FMUL float ptr [0x005f98a0]         ; 004e65e7 | DAT_005f98a0
    FISTP dword ptr [EBX + 0x4]         ; 004e65ed
    FLD float ptr [EAX + 0x8]           ; 004e65f0
    FMUL float ptr [0x005f98a0]         ; 004e65f3 | DAT_005f98a0
    FISTP dword ptr [EBX + 0x8]         ; 004e65f9
    LEA EAX,[ESP + 0x6c]                ; 004e65fc
    PUSH EAX                            ; 004e6600
    MOV EAX,dword ptr [EDX]             ; 004e6601
    ADD EAX,0x90                        ; 004e6603
    PUSH EAX                            ; 004e6608
    CALL engine_special.cpp_FUN_0055d723 ; 004e6609
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e660e
    MOV EDX,0x4                         ; 004e6611
    MOV EAX,0x1                         ; 004e6616
    MOV EBX,0x2                         ; 004e661b
    XOR ECX,ECX                         ; 004e6620
    MOV dword ptr [ESP + 0x4],EDX       ; 004e6622
    MOV dword ptr [ESP + 0x18],ECX      ; 004e6626
    MOV dword ptr [ESP + 0x1c],ECX      ; 004e662a
    MOV dword ptr [ESP + 0x20],ECX      ; 004e662e
    MOV dword ptr [ESP + 0x24],EAX      ; 004e6632
    MOV dword ptr [ESP + 0x2c],ECX      ; 004e6636
    MOV dword ptr [ESP + 0x30],EBX      ; 004e663a
    MOV EDX,0x1000000                   ; 004e663e
    MOV dword ptr [ESP + 0x40],ECX      ; 004e6643
    MOV dword ptr [ESP + 0x28],EDX      ; 004e6647
    MOV EBP,EDX                         ; 004e664b
    MOV dword ptr [ESP + 0x34],EDX      ; 004e664d
    MOV dword ptr [ESP + 0x38],EDX      ; 004e6651
    MOV EDX,0x3                         ; 004e6655
    MOV dword ptr [ESP + 0x44],EBP      ; 004e665a
    MOV dword ptr [ESP + 0x3c],EDX      ; 004e665e
    FLD float ptr [0x005dc525]          ; 004e6662 | DAT_005dc525
    FLD float ptr [ESI + 0xc]           ; 004e6668
    FMUL ST1                            ; 004e666b
    FLD float ptr [ESI + 0x10]          ; 004e666d
    FMUL ST2                            ; 004e6670
    FLD float ptr [ESI + 0x14]          ; 004e6672
    MOV EDX,dword ptr [0x0060b280]      ; 004e6675 | DAT_0060b280
    FMULP ST3                           ; 004e667b
    MOV EBX,dword ptr [EDX]             ; 004e667d
    FXCH                                ; 004e667f
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e6681
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x88]        ; 004e6686
    MOV EAX,dword ptr [ESP + 0x88]      ; 004e668d
    MOV dword ptr [EBX + 0x20],EAX      ; 004e6694
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e6697
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EBX,dword ptr [EDX]             ; 004e669c
    FISTP dword ptr [ESP + 0x8c]        ; 004e669e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004e66a5
    MOV dword ptr [EBX + 0x24],EAX      ; 004e66ac
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e66af
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EBX,dword ptr [EDX]             ; 004e66b4
    FISTP dword ptr [ESP + 0x90]        ; 004e66b6
    MOV EAX,dword ptr [ESP + 0x90]      ; 004e66bd
    MOV dword ptr [EBX + 0x28],EAX      ; 004e66c4
    MOV EAX,dword ptr [EDX]             ; 004e66c7
    MOV dword ptr [EAX + 0x2c],0xffff   ; 004e66c9
    MOV EBX,dword ptr [EDX]             ; 004e66d0
    MOV EAX,dword ptr [ESP + 0x88]      ; 004e66d2
    MOV dword ptr [EBX + 0x50],EAX      ; 004e66d9
    MOV EBX,dword ptr [EDX]             ; 004e66dc
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004e66de
    MOV dword ptr [EBX + 0x54],EAX      ; 004e66e5
    MOV EBX,dword ptr [EDX]             ; 004e66e8
    MOV EAX,dword ptr [ESP + 0x90]      ; 004e66ea
    MOV dword ptr [EBX + 0x58],EAX      ; 004e66f1
    MOV EAX,dword ptr [EDX]             ; 004e66f4
    MOV dword ptr [EAX + 0x5c],0xffff   ; 004e66f6
    MOV EBX,dword ptr [EDX]             ; 004e66fd
    MOV EAX,dword ptr [ESP + 0x88]      ; 004e66ff
    MOV dword ptr [EBX + 0x80],EAX      ; 004e6706
    MOV EBX,dword ptr [EDX]             ; 004e670c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004e670e
    MOV dword ptr [EBX + 0x84],EAX      ; 004e6715
    MOV EBX,dword ptr [EDX]             ; 004e671b
    MOV EAX,dword ptr [ESP + 0x90]      ; 004e671d
    MOV dword ptr [EBX + 0x88],EAX      ; 004e6724
    MOV EAX,dword ptr [EDX]             ; 004e672a
    MOV dword ptr [EAX + 0x8c],0xffff   ; 004e672c
    MOV EBX,dword ptr [EDX]             ; 004e6736
    MOV EAX,dword ptr [ESP + 0x88]      ; 004e6738
    MOV dword ptr [EBX + 0xb0],EAX      ; 004e673f
    MOV EBX,dword ptr [EDX]             ; 004e6745
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004e6747
    MOV dword ptr [EBX + 0xb4],EAX      ; 004e674e
    MOV EBX,dword ptr [EDX]             ; 004e6754
    MOV EAX,dword ptr [ESP + 0x90]      ; 004e6756
    MOV dword ptr [EBX + 0xb8],EAX      ; 004e675d
    MOV EAX,dword ptr [EDX]             ; 004e6763
    MOV dword ptr [EAX + 0xbc],0xffff   ; 004e6765
    LEA EAX,[EDI + 0x161c]              ; 004e676f
    PUSH EAX                            ; 004e6775
    PUSH EDX                            ; 004e6776
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004e6777
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004e677c
    PUSH 0x0                            ; 004e677f
    MOV ESI,dword ptr [0x0060b280]      ; 004e6781 | DAT_0060b280
    PUSH ESI                            ; 004e6787
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 004e6788
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004e678d
    PUSH 0x1                            ; 004e6790
    MOV EDI,dword ptr [0x0060b280]      ; 004e6792 | DAT_0060b280
    PUSH EDI                            ; 004e6798
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004e6799
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004e679e
    MOV EAX,ESP                         ; 004e67a1
    PUSH EAX                            ; 004e67a3
    MOV EBP,dword ptr [0x0060b280]      ; 004e67a4 | DAT_0060b280
    PUSH EBP                            ; 004e67aa
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00 ; 004e67ab
        ;   XREF to: 0046aa00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004e67b0
    PUSH 0x1                            ; 004e67b3
    MOV EAX,[0x0060b280]                ; 004e67b5 | DAT_0060b280
    PUSH EAX                            ; 004e67ba
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 004e67bb
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004e67c0
    PUSH 0x0                            ; 004e67c3
    MOV EDX,dword ptr [0x0060b280]      ; 004e67c5 | DAT_0060b280
    PUSH EDX                            ; 004e67cb
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004e67cc
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004e67d1
    MOV ECX,dword ptr [0x0060b280]      ; 004e67d4 | DAT_0060b280
        ;   Label: LAB_004e67d4
    PUSH ECX                            ; 004e67da
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 004e67db
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004e67e0
    ADD ESP,0x98                        ; 004e67e3
    POP EBP                             ; 004e67e9
    POP EDI                             ; 004e67ea
    POP ESI                             ; 004e67eb
    POP EBX                             ; 004e67ec
    RET                                 ; 004e67ed
    FLD float ptr [ESI + 0x10]          ; 004e67ee
        ;   Label: LAB_004e67ee
    FCOMP double ptr [0x005dc52d]       ; 004e67f1 | DAT_005dc52d
    FNSTSW AX                           ; 004e67f7
    SAHF                                ; 004e67f9
    JA 0x004e64c6                       ; 004e67fa
        ;   XREF to: 004e64c6 (CONDITIONAL_JUMP)  ; LAB_004e64c6
    FLD float ptr [ESI + 0x14]          ; 004e6800
    FCOMP double ptr [0x005dc52d]       ; 004e6803 | DAT_005dc52d
    FNSTSW AX                           ; 004e6809
    SAHF                                ; 004e680b
    JA 0x004e64c6                       ; 004e680c
        ;   XREF to: 004e64c6 (CONDITIONAL_JUMP)  ; LAB_004e64c6
    JMP 0x004e67d4                      ; 004e6812
        ;   XREF to: 004e67d4 (UNCONDITIONAL_JUMP)  ; LAB_004e67d4

