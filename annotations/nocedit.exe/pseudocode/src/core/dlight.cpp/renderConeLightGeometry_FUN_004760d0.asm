; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_004760d0(CVector3f *position,CVector3i *rotation,float fov,float falloff)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
; CVector3i *      Stack[0x8]:4   rotation
; float            Stack[0xc]:4   fov
; float            Stack[0x10]:4   falloff
; Local Variables:
; SMRGLHeaderPrimitive Stack[-0xb8]:24  local_b8
; float            Stack[-0x90]:4  local_90
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; CVector3i        Stack[-0x84]:12  local_84
; CVector3i        Stack[-0x78]:12  local_78
; CVector3i        Stack[-0x6c]:12  local_6c
; CVector3i[2]     Stack[-0x60]:24  local_60
; float            Stack[-0x40]:4  local_40
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[3]:
;   core_litecone.cpp_CLightCone_renderTransparent_FUN_00506c20 at 00506c96
;   core_vehicle.cpp_CVehicle_renderOpaque_FUN_005e88c0 at 005e8ac7
;   core_zombie.cpp_CZombie_renderTransparent_FUN_005fbe70 at 005fbf99
;
; Referenced Globals:
;   double DOUBLE_0061f29b = 0.125
;   float FLOAT_0061f2a3 = 0.125
;   double DOUBLE_0061f2ab = 3.14159265350000
;   double DOUBLE_0061f2b3 = 2
;   double DOUBLE_0061f2bb = 1024
;   double DOUBLE_0061f2c3 = 18
;   float FLOAT_0065c900 = 256
;   SMRGLTextureBasic[20] g_LightTextures
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 DAT_00f80000
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004760d0
        ;   Label: core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
    PUSH ESI                            ; 004760d1
    PUSH EDI                            ; 004760d2
    PUSH EBP                            ; 004760d3
    MOV EBP,ESP                         ; 004760d4
    SUB ESP,0xac                        ; 004760d6
    AND ESP,0xfffffff8                  ; 004760dc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004760df
    MOV dword ptr [ESP + 0x4],EAX       ; 004760e2
    MOV EDX,dword ptr [0x006703ec]      ; 004760e6 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004760ec | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004760ed
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004760f2
    TEST EAX,EAX                        ; 004760f5
    JZ 0x00476100                       ; 004760f7
        ;   XREF to: 00476100 (CONDITIONAL_JUMP)  ; LAB_00476100
    MOV ESP,EBP                         ; 004760f9
    POP EBP                             ; 004760fb
    POP EDI                             ; 004760fc
    POP ESI                             ; 004760fd
    POP EBX                             ; 004760fe
    RET                                 ; 004760ff
    MOV ECX,dword ptr [EBP + 0x14]      ; 00476100
        ;   Label: LAB_00476100
    PUSH ECX                            ; 00476103
    MOV EBX,dword ptr [0x006703ec]      ; 00476104 | g_CDemonRendererPtr2
    PUSH EBX                            ; 0047610a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0047610b
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00476110
    PUSH 0x0                            ; 00476113
    MOV ESI,dword ptr [EBP + 0x18]      ; 00476115
    PUSH ESI                            ; 00476118
    MOV EDI,dword ptr [0x006703ec]      ; 00476119 | g_CDemonRendererPtr2
    PUSH EDI                            ; 0047611f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00476120
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00476125
    PUSH 0x66fed8                       ; 00476128 | g_LightTextures
    MOV EAX,[0x006703ec]                ; 0047612d | g_CDemonRendererPtr2
    PUSH EAX                            ; 00476132 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00476133
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00476138
    PUSH 0x1                            ; 0047613b
    MOV EDX,dword ptr [0x006703ec]      ; 0047613d | g_CDemonRendererPtr2
    PUSH EDX                            ; 00476143 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 00476144
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00476149
    FLD1                                ; 0047614c
    FDIV float ptr [EBP + 0x20]         ; 0047614e
    MOV EDI,0x1                         ; 00476151
    FSTP float ptr [ESP + 0x90]         ; 00476156
    FLD float ptr [ESP + 0x4]           ; 0047615d
        ;   Label: LAB_0047615d
    FDIVR double ptr [0x0061f2c3]       ; 00476161 | DOUBLE_0061f2c3
    MOV dword ptr [ESP + 0xa8],EDI      ; 00476167
    FILD dword ptr [ESP + 0xa8]         ; 0047616e
    FMULP                               ; 00476175
    FMUL double ptr [0x0061f29b]        ; 00476177 | DOUBLE_0061f29b
    FST float ptr [ESP]                 ; 0047617d
    FLD1                                ; 00476180
    FPATAN                              ; 00476182
    FCOS                                ; 00476184
    FMUL float ptr [EBP + 0x20]         ; 00476186
    XOR EAX,EAX                         ; 00476189
    FSTP float ptr [ESP + 0xa4]         ; 0047618b
    MOV dword ptr [ESP + 0xa8],EAX      ; 00476192
        ;   Label: LAB_00476192
    FLD float ptr [0x0061f2a3]          ; 00476199 | FLOAT_0061f2a3
    FILD dword ptr [ESP + 0xa8]         ; 0047619f
    FMUL ST1                            ; 004761a6
    FLD double ptr [0x0061f2ab]         ; 004761a8 | DOUBLE_0061f2ab
    FXCH                                ; 004761ae
    FMUL ST1                            ; 004761b0
    FLD double ptr [0x0061f2b3]         ; 004761b2 | DOUBLE_0061f2b3
    FXCH                                ; 004761b8
    FMUL ST1                            ; 004761ba
    LEA ESI,[EAX + 0x1]                 ; 004761bc
    FLD ST0                             ; 004761bf
    FSIN                                ; 004761c1
    MOV dword ptr [ESP + 0xa8],ESI      ; 004761c3
    FILD dword ptr [ESP + 0xa8]         ; 004761ca
    FMULP ST5                           ; 004761d1
    FXCH ST4                            ; 004761d3
    FMULP ST3                           ; 004761d5
    FXCH ST2                            ; 004761d7
    FMULP                               ; 004761d9
    FLD ST0                             ; 004761db
    FSIN                                ; 004761dd
    FXCH ST2                            ; 004761df
    FCOS                                ; 004761e1
    FXCH                                ; 004761e3
    FCOS                                ; 004761e5
    FLD float ptr [ESP]                 ; 004761e7
    FXCH ST4                            ; 004761ea
    FMUL ST4                            ; 004761ec
    FXCH ST2                            ; 004761ee
    FMUL ST4                            ; 004761f0
    FXCH ST3                            ; 004761f2
    FMUL ST4                            ; 004761f4
    FXCH                                ; 004761f6
    FMULP ST4                           ; 004761f8
    FXCH                                ; 004761fa
    FSTP float ptr [ESP + 0x94]         ; 004761fc
    FXCH                                ; 00476203
    FSTP float ptr [ESP + 0x98]         ; 00476205
    FSTP float ptr [ESP + 0x9c]         ; 0047620c
    FSTP float ptr [ESP + 0xa0]         ; 00476213
    FLDZ                                ; 0047621a
    FLD float ptr [EBP + 0x20]          ; 0047621c
    FLD ST0                             ; 0047621f
    FSUB float ptr [ESP + 0xa4]         ; 00476221
    FXCH ST2                            ; 00476228
    FMUL float ptr [ESP + 0xa4]         ; 0047622a
    FXCH ST2                            ; 00476231
    FLD float ptr [ESP + 0x90]          ; 00476233
    FXCH                                ; 0047623a
    FMUL ST1                            ; 0047623c
    FXCH ST3                            ; 0047623e
    FST float ptr [ESP + 0x80]          ; 00476240
    FMUL float ptr [ESP + 0x94]         ; 00476247
    FLD float ptr [ESP + 0x80]          ; 0047624e
    FXCH ST3                            ; 00476255
    FSUB float ptr [ESP + 0x80]         ; 00476257
    FXCH ST3                            ; 0047625e
    FMUL float ptr [ESP + 0x98]         ; 00476260
    FXCH ST3                            ; 00476267
    FMULP ST2                           ; 00476269
    FXCH ST3                            ; 0047626b
    FLD double ptr [0x0061f2bb]         ; 0047626d | DOUBLE_0061f2bb
    FXCH                                ; 00476273
    FMUL ST1                            ; 00476275
    FXCH ST2                            ; 00476277
    FMULP                               ; 00476279
    LEA EBX,[ESP + 0x3c]                ; 0047627b
    MOV EAX,dword ptr [ESP + 0x80]      ; 0047627f
    MOV EDX,dword ptr [0x006703ec]      ; 00476286 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x38],EAX      ; 0047628c
    FXCH ST3                            ; 00476290
    FSTP float ptr [ESP + 0x30]         ; 00476292
    FXCH                                ; 00476296
    FSTP float ptr [ESP + 0x34]         ; 00476298
    LEA EAX,[ESP + 0x30]                ; 0047629c
    CALL crt_math.c_round_FUN_005fe6b0  ; 004762a0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8c]        ; 004762a5
    CALL crt_math.c_round_FUN_005fe6b0  ; 004762ac
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x88]        ; 004762b1
    FLD float ptr [EAX]                 ; 004762b8
    FMUL float ptr [0x0065c900]         ; 004762ba | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 004762c0
    FLD float ptr [EAX + 0x4]           ; 004762c2
    FMUL float ptr [0x0065c900]         ; 004762c5 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 004762cb
    FLD float ptr [EAX + 0x8]           ; 004762ce
    FMUL float ptr [0x0065c900]         ; 004762d1 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 004762d7
    LEA EAX,[ESP + 0x3c]                ; 004762da
    PUSH EAX                            ; 004762de
    MOV EAX,dword ptr [EDX]             ; 004762df | g_CDemonRendererInstance
    PUSH EAX                            ; 004762e1
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004762e2
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004762e7
    FLD float ptr [ESP + 0x80]          ; 004762ea
    FMUL float ptr [ESP + 0x9c]         ; 004762f1
    FLD float ptr [ESP + 0x80]          ; 004762f8
    FMUL float ptr [ESP + 0xa0]         ; 004762ff
    LEA EBX,[ESP + 0x48]                ; 00476306
    MOV EAX,dword ptr [ESP + 0x80]      ; 0047630a
    MOV EDX,dword ptr [0x006703ec]      ; 00476311 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x38],EAX      ; 00476317
    FXCH                                ; 0047631b
    FSTP float ptr [ESP + 0x30]         ; 0047631d
    LEA EAX,[ESP + 0x30]                ; 00476321
    FSTP float ptr [ESP + 0x34]         ; 00476325
    FLD float ptr [EAX]                 ; 00476329
    FMUL float ptr [0x0065c900]         ; 0047632b | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00476331
    FLD float ptr [EAX + 0x4]           ; 00476333
    FMUL float ptr [0x0065c900]         ; 00476336 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 0047633c
    FLD float ptr [EAX + 0x8]           ; 0047633f
    FMUL float ptr [0x0065c900]         ; 00476342 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00476348
    LEA EAX,[ESP + 0x48]                ; 0047634b
    PUSH EAX                            ; 0047634f
    MOV EAX,dword ptr [EDX]             ; 00476350 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00476352
    PUSH EAX                            ; 00476355
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00476356
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0047635b
    FLD float ptr [ESP + 0xa4]          ; 0047635e
    FMUL float ptr [ESP + 0x9c]         ; 00476365
    FLD float ptr [ESP + 0xa4]          ; 0047636c
    FMUL float ptr [ESP + 0xa0]         ; 00476373
    LEA EBX,[ESP + 0x54]                ; 0047637a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0047637e
    MOV EDX,dword ptr [0x006703ec]      ; 00476385 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x38],EAX      ; 0047638b
    FXCH                                ; 0047638f
    FSTP float ptr [ESP + 0x30]         ; 00476391
    LEA EAX,[ESP + 0x30]                ; 00476395
    FSTP float ptr [ESP + 0x34]         ; 00476399
    FLD float ptr [EAX]                 ; 0047639d
    FMUL float ptr [0x0065c900]         ; 0047639f | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 004763a5
    FLD float ptr [EAX + 0x4]           ; 004763a7
    FMUL float ptr [0x0065c900]         ; 004763aa | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 004763b0
    FLD float ptr [EAX + 0x8]           ; 004763b3
    FMUL float ptr [0x0065c900]         ; 004763b6 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 004763bc
    LEA EAX,[ESP + 0x54]                ; 004763bf
    PUSH EAX                            ; 004763c3
    MOV EAX,dword ptr [EDX]             ; 004763c4 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004763c6
    PUSH EAX                            ; 004763c9
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004763ca
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004763cf
    FLD float ptr [ESP + 0xa4]          ; 004763d2
    FMUL float ptr [ESP + 0x94]         ; 004763d9
    FLD float ptr [ESP + 0xa4]          ; 004763e0
    FMUL float ptr [ESP + 0x98]         ; 004763e7
    LEA EBX,[ESP + 0x60]                ; 004763ee
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004763f2
    MOV EDX,dword ptr [0x006703ec]      ; 004763f9 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x38],EAX      ; 004763ff
    FXCH                                ; 00476403
    FSTP float ptr [ESP + 0x30]         ; 00476405
    LEA EAX,[ESP + 0x30]                ; 00476409
    FSTP float ptr [ESP + 0x34]         ; 0047640d
    FLD float ptr [EAX]                 ; 00476411
    FMUL float ptr [0x0065c900]         ; 00476413 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00476419
    FLD float ptr [EAX + 0x4]           ; 0047641b
    FMUL float ptr [0x0065c900]         ; 0047641e | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00476424
    FLD float ptr [EAX + 0x8]           ; 00476427
    FMUL float ptr [0x0065c900]         ; 0047642a | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00476430
    LEA EAX,[ESP + 0x60]                ; 00476433
    PUSH EAX                            ; 00476437
    MOV EAX,dword ptr [EDX]             ; 00476438 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 0047643a
    PUSH EAX                            ; 0047643f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00476440
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00476445
    MOV EDX,dword ptr [0x006703ec]      ; 00476448 | g_CDemonRendererPtr2
    MOV EBX,dword ptr [EDX]             ; 0047644e | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x88]      ; 00476450
    MOV dword ptr [EBX + 0x2c],EAX      ; 00476457
    MOV EAX,dword ptr [EDX]             ; 0047645a | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x28],0xffff   ; 0047645c
    MOV EAX,dword ptr [EDX]             ; 00476463 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x24],0xffff   ; 00476465
    MOV EAX,dword ptr [EDX]             ; 0047646c | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x20],0xffff   ; 0047646e
    MOV EAX,dword ptr [EDX]             ; 00476475 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x18],0xf80000 ; 00476477 | DAT_00f80000
    MOV EAX,dword ptr [EDX]             ; 0047647e | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 00476480 | DAT_00f80000
    MOV EBX,dword ptr [EDX]             ; 00476487 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x88]      ; 00476489
    MOV dword ptr [EBX + 0x5c],EAX      ; 00476490
    MOV EAX,dword ptr [EDX]             ; 00476493 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x58],0xffff   ; 00476495
    MOV EAX,dword ptr [EDX]             ; 0047649c | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x54],0xffff   ; 0047649e
    MOV EAX,dword ptr [EDX]             ; 004764a5 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x50],0xffff   ; 004764a7
    MOV EAX,dword ptr [EDX]             ; 004764ae | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x48],0x80000  ; 004764b0
    MOV EAX,dword ptr [EDX]             ; 004764b7 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 004764b9 | DAT_00f80000
    MOV EBX,dword ptr [EDX]             ; 004764c0 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004764c2
    MOV dword ptr [EBX + 0x8c],EAX      ; 004764c9
    MOV EAX,dword ptr [EDX]             ; 004764cf | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x88],0xffff   ; 004764d1
    MOV EAX,dword ptr [EDX]             ; 004764db | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x84],0xffff   ; 004764dd
    MOV EAX,dword ptr [EDX]             ; 004764e7 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x80],0xffff   ; 004764e9
    MOV EAX,dword ptr [EDX]             ; 004764f3 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x78],0x80000  ; 004764f5
    MOV EAX,dword ptr [EDX]             ; 004764fc | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x7c],0x80000  ; 004764fe
    MOV EBX,dword ptr [EDX]             ; 00476505 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00476507
    MOV dword ptr [EBX + 0xbc],EAX      ; 0047650e
    MOV EAX,dword ptr [EDX]             ; 00476514 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb8],0xffff   ; 00476516
    MOV EAX,dword ptr [EDX]             ; 00476520 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb4],0xffff   ; 00476522
    MOV EAX,dword ptr [EDX]             ; 0047652c | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb0],0xffff   ; 0047652e
    MOV EAX,dword ptr [EDX]             ; 00476538 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 0047653a | DAT_00f80000
    MOV EAX,dword ptr [EDX]             ; 00476544 | g_CDemonRendererInstance
    MOV ECX,0x4                         ; 00476546
    XOR EBX,EBX                         ; 0047654b
    MOV dword ptr [EAX + 0xac],0x80000  ; 0047654d
    MOV EAX,0x3                         ; 00476557
    MOV dword ptr [ESP + 0xc],ECX       ; 0047655c
    MOV dword ptr [ESP + 0x1c],EBX      ; 00476560
    MOV dword ptr [ESP + 0x18],EBX      ; 00476564
    MOV dword ptr [ESP + 0x14],EBX      ; 00476568
    MOV dword ptr [ESP + 0x10],EBX      ; 0047656c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00476570
    LEA EAX,[ESP + 0x8]                 ; 00476574
    MOV dword ptr [ESP + 0x20],EBX      ; 00476578
    PUSH EAX                            ; 0047657c
    MOV ECX,0x1                         ; 0047657d
    MOV EBX,0x2                         ; 00476582
    PUSH EDX                            ; 00476587 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x2c],ECX      ; 00476588
    MOV dword ptr [ESP + 0x30],EBX      ; 0047658c
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 00476590
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00476595
    MOV EAX,ESI                         ; 00476598
    CMP ESI,0x8                         ; 0047659a
    JL 0x00476192                       ; 0047659d
        ;   XREF to: 00476192 (CONDITIONAL_JUMP)  ; LAB_00476192
    INC EDI                             ; 004765a3
    CMP EDI,0x8                         ; 004765a4
    JL 0x0047615d                       ; 004765a7
        ;   XREF to: 0047615d (CONDITIONAL_JUMP)  ; LAB_0047615d
    MOV EDX,dword ptr [0x006703ec]      ; 004765ad | g_CDemonRendererPtr2
    PUSH EDX                            ; 004765b3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004765b4
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

