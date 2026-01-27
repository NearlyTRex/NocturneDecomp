; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight * this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
; undefined1       Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined1       Stack[-0x58]:1  local_58
; undefined1       Stack[-0x4c]:1  local_4c
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
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0 at 00450b44
;
; Referenced Globals:
;   double DOUBLE_0061f123 = 18
;   double DOUBLE_0061f12b = 6.28318530700000
;   double DOUBLE_0061f133 = 0.0625
;   double DOUBLE_0061f13b = 0.0555555555555556
;   double DOUBLE_0061f143 = 256
;   float FLOAT_0065c900 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   float FLOAT_026a72d8
;   float FLOAT_026a72dc
;   float FLOAT_026a72e0
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004736c0
        ;   Label: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0
    PUSH ESI                            ; 004736c1
    PUSH EDI                            ; 004736c2
    PUSH EBP                            ; 004736c3
    MOV EBP,ESP                         ; 004736c4
    SUB ESP,0x98                        ; 004736c6
    AND ESP,0xfffffff8                  ; 004736cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004736cf
    ADD EAX,0x4                         ; 004736d2
    PUSH EAX                            ; 004736d5
    MOV EDX,dword ptr [0x006703ec]      ; 004736d6 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004736dc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004736dd
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004736e2
    LEA EAX,[ESP + 0x5c]                ; 004736e5
    PUSH EAX                            ; 004736e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004736ea
    ADD EAX,0x10                        ; 004736ed
    PUSH EAX                            ; 004736f0
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 004736f1
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004736f6
    PUSH 0x0                            ; 004736f9
    LEA EAX,[ESP + 0x60]                ; 004736fb
    PUSH EAX                            ; 004736ff
    MOV ECX,dword ptr [0x006703ec]      ; 00473700 | g_CDemonRendererPtr2
    PUSH ECX                            ; 00473706 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00473707
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0047370c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047370f
    FLD float ptr [EAX + 0x38]          ; 00473712
    FDIVR double ptr [0x0061f123]       ; 00473715 | DOUBLE_0061f123
    FMUL float ptr [EAX + 0x140]        ; 0047371b
    XOR ESI,ESI                         ; 00473721
    XOR EDI,EDI                         ; 00473723
    MOV EAX,dword ptr [EAX + 0x140]     ; 00473725
    FSTP float ptr [ESP]                ; 0047372b
    MOV dword ptr [ESP + 0x70],EAX      ; 0047372e
    MOV dword ptr [ESP + 0x94],ESI      ; 00473732
        ;   Label: LAB_00473732
    FILD dword ptr [ESP + 0x94]         ; 00473739
    FMUL double ptr [0x0061f12b]        ; 00473740 | DOUBLE_0061f12b
    FMUL double ptr [0x0061f133]        ; 00473746 | DOUBLE_0061f133
    FLD ST0                             ; 0047374c
    FCOS                                ; 0047374e
    FXCH                                ; 00473750
    FSIN                                ; 00473752
    FLD float ptr [ESP]                 ; 00473754
    FXCH ST2                            ; 00473757
    FMUL ST2                            ; 00473759
    FXCH                                ; 0047375b
    FMULP ST2                           ; 0047375d
    LEA EBX,[ESP + 0x44]                ; 0047375f
    MOV EDX,dword ptr [0x006703ec]      ; 00473763 | g_CDemonRendererPtr2
    LEA EAX,[ESP + 0x68]                ; 00473769
    FSTP float ptr [ESP + 0x68]         ; 0047376d
    FSTP float ptr [ESP + 0x6c]         ; 00473771
    FLD float ptr [EAX]                 ; 00473775
    FMUL float ptr [0x0065c900]         ; 00473777 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 0047377d
    FLD float ptr [EAX + 0x4]           ; 0047377f
    FMUL float ptr [0x0065c900]         ; 00473782 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00473788
    FLD float ptr [EAX + 0x8]           ; 0047378b
    FMUL float ptr [0x0065c900]         ; 0047378e | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00473794
    LEA EAX,[ESP + 0x44]                ; 00473797
    PUSH EAX                            ; 0047379b
    MOV EAX,dword ptr [EDX]             ; 0047379c | g_CDemonRendererInstance
    ADD EAX,EDI                         ; 0047379e
    PUSH EAX                            ; 004737a0
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004737a1
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x006703ec]      ; 004737a6 | g_CDemonRendererPtr2
    ADD EDI,0x30                        ; 004737ac
    MOV EAX,dword ptr [EDX]             ; 004737af | g_CDemonRendererInstance
    INC ESI                             ; 004737b1
    ADD ESP,0x8                         ; 004737b2
    MOV dword ptr [EDI + EAX*0x1 + -0x10],0x0 ; 004737b5
    CMP ESI,0x10                        ; 004737bd
    JL 0x00473732                       ; 004737c0
        ;   XREF to: 00473732 (CONDITIONAL_JUMP)  ; LAB_00473732
    LEA EBX,[ESP + 0x2c]                ; 004737c6
    MOV EAX,0x26a72d8                   ; 004737ca | FLOAT_026a72d8
    FLD float ptr [EAX]                 ; 004737cf | FLOAT_026a72d8
    FMUL float ptr [0x0065c900]         ; 004737d1 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 004737d7
    FLD float ptr [EAX + 0x4]           ; 004737d9 | FLOAT_026a72dc
    FMUL float ptr [0x0065c900]         ; 004737dc | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 004737e2
    FLD float ptr [EAX + 0x8]           ; 004737e5 | FLOAT_026a72e0
    FMUL float ptr [0x0065c900]         ; 004737e8 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 004737ee
    LEA EAX,[ESP + 0x2c]                ; 004737f1
    PUSH EAX                            ; 004737f5
    MOV EAX,dword ptr [EDX]             ; 004737f6 | g_CDemonRendererInstance
    ADD EAX,0x300                       ; 004737f8
    PUSH EAX                            ; 004737fd
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004737fe
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00473803
    MOV EAX,[0x006703ec]                ; 00473806 | g_CDemonRendererPtr2
    PUSH 0x1                            ; 0047380b
    MOV EDX,dword ptr [EAX]             ; 0047380d | g_CDemonRendererInstance
    PUSH EAX                            ; 0047380f | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x320],0xffff  ; 00473810
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0047381a
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0047381f
    LEA EAX,[ESP + 0x50]                ; 00473822
    PUSH EAX                            ; 00473826
    MOV ESI,dword ptr [0x006703ec]      ; 00473827 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0047382d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 ; 0047382e
        ;   XREF to: 0048c780 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, float * output)
    ADD ESP,0x8                         ; 00473833
    MOV EDX,dword ptr [EBP + 0x14]      ; 00473836
    FLD float ptr [EAX]                 ; 00473839
    FSUB float ptr [EDX + 0x4]          ; 0047383b
    FSTP float ptr [ESP + 0x74]         ; 0047383e
    FLD float ptr [EAX + 0x4]           ; 00473842
    FSUB float ptr [EDX + 0x8]          ; 00473845
    FSTP float ptr [ESP + 0x78]         ; 00473848
    FLD float ptr [EAX + 0x8]           ; 0047384c
    LEA EAX,[ESP + 0x74]                ; 0047384f
    PUSH EAX                            ; 00473853
    LEA EAX,[ESP + 0x3c]                ; 00473854
    XOR EBX,EBX                         ; 00473858
    PUSH EAX                            ; 0047385a
    LEA EAX,[EDX + 0x10]                ; 0047385b
    FSUB float ptr [EDX + 0xc]          ; 0047385e
    PUSH EAX                            ; 00473861
    FSTP float ptr [ESP + 0x88]         ; 00473862
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00473869
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0047386e
    LEA EAX,[ESP + 0x80]                ; 00473870
    ADD ESP,0xc                         ; 00473877
    CMP EAX,EDX                         ; 0047387a
    JNZ 0x004739f3                      ; 0047387c
        ;   XREF to: 004739f3 (CONDITIONAL_JUMP)  ; LAB_004739f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473882
        ;   Label: LAB_00473882
    FLD double ptr [0x0061f13b]         ; 00473885 | DOUBLE_0061f13b
    FLD float ptr [EAX + 0x38]          ; 0047388b
    FMUL ST1                            ; 0047388e
    FMUL float ptr [ESP + 0x74]         ; 00473890
    FSTP float ptr [ESP + 0x74]         ; 00473894
    FMUL float ptr [EAX + 0x38]         ; 00473898
    FLD float ptr [ESP + 0x78]          ; 0047389b
    FXCH                                ; 0047389f
    FMUL ST1                            ; 004738a1
    FLD float ptr [ESP + 0x74]          ; 004738a3
    FXCH                                ; 004738a7
    FSTP ST2                            ; 004738a9
    FXCH                                ; 004738ab
    FSTP float ptr [ESP + 0x78]         ; 004738ad
    FCOMP float ptr [ESP + 0x7c]        ; 004738b1
    FNSTSW AX                           ; 004738b5
    SAHF                                ; 004738b7
    JNC 0x0047390b                      ; 004738b8
        ;   XREF to: 0047390b (CONDITIONAL_JUMP)  ; LAB_0047390b
    FLD float ptr [ESP + 0x74]          ; 004738ba
    FLD float ptr [ESP + 0x7c]          ; 004738be
    FCHS                                ; 004738c2
    FSTP float ptr [ESP + 0x90]         ; 004738c4
    FCOMP float ptr [ESP + 0x90]        ; 004738cb
    FNSTSW AX                           ; 004738d2
    SAHF                                ; 004738d4
    JBE 0x0047390b                      ; 004738d5
        ;   XREF to: 0047390b (CONDITIONAL_JUMP)  ; LAB_0047390b
    FLD float ptr [ESP + 0x78]          ; 004738d7
    FCOMP float ptr [ESP + 0x7c]        ; 004738db
    FNSTSW AX                           ; 004738df
    SAHF                                ; 004738e1
    JNC 0x0047390b                      ; 004738e2
        ;   XREF to: 0047390b (CONDITIONAL_JUMP)  ; LAB_0047390b
    FLD float ptr [ESP + 0x78]          ; 004738e4
    FCOMP float ptr [ESP + 0x90]        ; 004738e8
    FNSTSW AX                           ; 004738ef
    SAHF                                ; 004738f1
    JBE 0x0047390b                      ; 004738f2
        ;   XREF to: 0047390b (CONDITIONAL_JUMP)  ; LAB_0047390b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004738f4
    FLD float ptr [ESP + 0x7c]          ; 004738f7
    FCOMP float ptr [EAX + 0x140]       ; 004738fb
    FNSTSW AX                           ; 00473901
    SAHF                                ; 00473903
    JNC 0x0047390b                      ; 00473904
        ;   XREF to: 0047390b (CONDITIONAL_JUMP)  ; LAB_0047390b
    MOV EBX,0x1                         ; 00473906
    XOR EAX,EAX                         ; 0047390b
        ;   Label: LAB_0047390b
    MOV EDI,0x3                         ; 0047390d
    MOV dword ptr [ESP + 0x18],EAX      ; 00473912
    MOV dword ptr [ESP + 0x14],EAX      ; 00473916
    MOV dword ptr [ESP + 0x10],EAX      ; 0047391a
    MOV dword ptr [ESP + 0xc],EAX       ; 0047391e
    MOV dword ptr [ESP + 0x8],EDI       ; 00473922
    TEST EBX,EBX                        ; 00473926
    JNZ 0x00473a14                      ; 00473928
        ;   XREF to: 00473a14 (CONDITIONAL_JUMP)  ; LAB_00473a14
    MOV dword ptr [ESP + 0x24],0x10     ; 0047392e
    MOV dword ptr [ESP + 0x20],EBX      ; 00473936
        ;   Label: LAB_00473936
    CMP EBX,0xf                         ; 0047393a
    JNZ 0x00473a0c                      ; 0047393d
        ;   XREF to: 00473a0c (CONDITIONAL_JUMP)  ; LAB_00473a0c
    XOR EAX,EAX                         ; 00473943
    MOV dword ptr [ESP + 0x1c],EAX      ; 00473945
        ;   Label: LAB_00473945
    PUSH 0x450320                       ; 00473949
    LEA EAX,[ESP + 0x8]                 ; 0047394e
    PUSH EAX                            ; 00473952
    MOV EDX,dword ptr [0x006703ec]      ; 00473953 | g_CDemonRendererPtr2
    PUSH EDX                            ; 00473959 | g_CDemonRendererInstance
    INC EBX                             ; 0047395a
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0 ; 0047395b
        ;   XREF to: 0048c8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, RenderScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 00473960
    CMP EBX,0x10                        ; 00473963
    JL 0x00473936                       ; 00473966
        ;   XREF to: 00473936 (CONDITIONAL_JUMP)  ; LAB_00473936
    MOV ESI,0xffff                      ; 00473968
        ;   Label: LAB_00473968
    XOR ECX,ECX                         ; 0047396d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047396f
    MOV dword ptr [ESP + 0xc],ECX       ; 00473972
    MOV dword ptr [ESP + 0x10],ECX      ; 00473976
    MOV dword ptr [ESP + 0x14],ESI      ; 0047397a
    FLD float ptr [EAX + 0x140]         ; 0047397e
    FMUL double ptr [0x0061f143]        ; 00473984 | DOUBLE_0061f143
    XOR EBX,EBX                         ; 0047398a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047398c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x18]        ; 00473991
    PUSH 0x450320                       ; 00473995
        ;   Label: LAB_00473995
    LEA EAX,[ESP + 0x8]                 ; 0047399a
    MOV dword ptr [ESP + 0x24],EBX      ; 0047399e
    XOR EDI,EDI                         ; 004739a2
    PUSH EAX                            ; 004739a4
    MOV EAX,[0x006703ec]                ; 004739a5 | g_CDemonRendererPtr2
    INC EBX                             ; 004739aa
    PUSH EAX                            ; 004739ab | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x28],EDI      ; 004739ac
    MOV dword ptr [ESP + 0x30],EBX      ; 004739b0
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0 ; 004739b4
        ;   XREF to: 0048c8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, RenderScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 004739b9
    CMP EBX,0xe                         ; 004739bc
    JL 0x00473995                       ; 004739bf
        ;   XREF to: 00473995 (CONDITIONAL_JUMP)  ; LAB_00473995
    MOV EDX,dword ptr [0x006703ec]      ; 004739c1 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004739c7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004739c8
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    MOV EAX,dword ptr [EDX]             ; 004739f3
        ;   Label: LAB_004739f3
    MOV dword ptr [ESP + 0x74],EAX      ; 004739f5
    MOV EAX,dword ptr [EDX + 0x4]       ; 004739f9
    MOV dword ptr [ESP + 0x78],EAX      ; 004739fc
    MOV EAX,dword ptr [EDX + 0x8]       ; 00473a00
    MOV dword ptr [ESP + 0x7c],EAX      ; 00473a03
    JMP 0x00473882                      ; 00473a07
        ;   XREF to: 00473882 (UNCONDITIONAL_JUMP)  ; LAB_00473882
    LEA EAX,[EBX + 0x1]                 ; 00473a0c
        ;   Label: LAB_00473a0c
    JMP 0x00473945                      ; 00473a0f
        ;   XREF to: 00473945 (UNCONDITIONAL_JUMP)  ; LAB_00473945
    CALL core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0 ; 00473a14
        ;   XREF to: 004502e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0()
        ;   Label: LAB_00473a14
    JMP 0x00473968                      ; 00473a19
        ;   XREF to: 00473968 (UNCONDITIONAL_JUMP)  ; LAB_00473968

