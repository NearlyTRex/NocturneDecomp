; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_renderCourseGizmo_FUN_00443760(CVector3f *position)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
; Local Variables:
; SLineStrip       Stack[-0xa0]:8  SStack_a0
; float            Stack[-0x90]:4  local_90
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; CVector3i        Stack[-0x84]:12  local_84
; CVector3i        Stack[-0x78]:12  local_78
; CVector3i        Stack[-0x6c]:12  local_6c
; CVector3i        Stack[-0x60]:12  local_60
; CVector3f        Stack[-0x48]:12  local_48
; CVector3i        Stack[-0x3c]:12  local_3c
; SMRGLHeaderPrimitive Stack[-0x30]:24  local_30
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_course.cpp_CCourse_preview_FUN_00443bc0 at 00443eb8
;
; Referenced Globals:
;   TerminatedCString s_x_0061944f
;   TerminatedCString s_y_00619451
;   float FLOAT_0065c060 = 256
;   undefined4 g_CourseAxisLabels[1]
;   undefined4 g_CourseAxisLabels[2]
;   CDemonRenderer* g_CDemonRendererPtr1 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   uchar[32768] g_ColorCubeLookup
;   int g_ActiveRenderColor
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_plotPixelWithDepth_FUN_00401290
;   engine_3d.c_drawLineStrip2D_FUN_00404570
;   engine_3d.c_processPolygonColor_FUN_00403e30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_prim.c_replaceWWithDepth_FUN_00552110
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443760
        ;   Label: core_course.cpp_renderCourseGizmo_FUN_00443760
    PUSH ESI                            ; 00443761
    PUSH EDI                            ; 00443762
    PUSH EBP                            ; 00443763
    SUB ESP,0x90                        ; 00443764
    MOV EDI,dword ptr [ESP + 0xa4]      ; 0044376a
    LEA EAX,[ESP + 0x58]                ; 00443771
    CMP EAX,EDI                         ; 00443775
    JZ 0x0044378d                       ; 00443777
        ;   XREF to: 0044378d (CONDITIONAL_JUMP)  ; LAB_0044378d
    MOV EAX,dword ptr [EDI]             ; 00443779
    MOV dword ptr [ESP + 0x58],EAX      ; 0044377b
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044377f
    MOV dword ptr [ESP + 0x5c],EAX      ; 00443782
    MOV EAX,dword ptr [EDI + 0x8]       ; 00443786
    MOV dword ptr [ESP + 0x60],EAX      ; 00443789
    FLD float ptr [EDI]                 ; 0044378d
        ;   Label: LAB_0044378d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044378f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x84]        ; 00443794
    MOV EAX,dword ptr [ESP + 0x84]      ; 0044379b
    MOV EDX,EAX                         ; 004437a2
    SAR EDX,0x1f                        ; 004437a4
    SHL EDX,0x4                         ; 004437a7
    SBB EAX,EDX                         ; 004437aa
    SAR EAX,0x4                         ; 004437ac
    FLD float ptr [EDI + 0x4]           ; 004437af
    CALL crt_math.c_round_FUN_005fe6b0  ; 004437b2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    SHL EAX,0x4                         ; 004437b7
    FISTP dword ptr [ESP + 0x84]        ; 004437ba
    MOV dword ptr [ESP + 0x88],EAX      ; 004437c1
    MOV EAX,dword ptr [ESP + 0x84]      ; 004437c8
    MOV EDX,EAX                         ; 004437cf
    SAR EDX,0x1f                        ; 004437d1
    SHL EDX,0x4                         ; 004437d4
    SBB EAX,EDX                         ; 004437d7
    SAR EAX,0x4                         ; 004437d9
    FLD float ptr [EDI + 0x8]           ; 004437dc
    CALL crt_math.c_round_FUN_005fe6b0  ; 004437df
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    SHL EAX,0x4                         ; 004437e4
    FISTP dword ptr [ESP + 0x8c]        ; 004437e7
    MOV dword ptr [ESP + 0x84],EAX      ; 004437ee
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004437f5
    MOV EDX,EAX                         ; 004437fc
    SAR EDX,0x1f                        ; 004437fe
    SHL EDX,0x4                         ; 00443801
    SBB EAX,EDX                         ; 00443804
    SAR EAX,0x4                         ; 00443806
    PUSH EDI                            ; 00443809
    FILD dword ptr [ESP + 0x8c]         ; 0044380a
    FSTP float ptr [EDI]                ; 00443811
    FILD dword ptr [ESP + 0x88]         ; 00443813
    FSTP float ptr [EDI + 0x4]          ; 0044381a
    SHL EAX,0x4                         ; 0044381d
    MOV EDX,dword ptr [0x006703e8]      ; 00443820 | g_CDemonRendererInstance | g_CDemonRendererPtr1
    MOV dword ptr [ESP + 0x88],EAX      ; 00443826
    PUSH EDX                            ; 0044382d | g_CDemonRendererInstance
    FILD dword ptr [ESP + 0x8c]         ; 0044382e
    FSTP float ptr [EDI + 0x8]          ; 00443835
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00443838
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV ECX,0xffffff80                  ; 0044383d
    ADD ESP,0x8                         ; 00443842
    MOV dword ptr [ESP + 0x78],ECX      ; 00443845
    MOV EBX,0xffffff80                  ; 00443849
        ;   Label: LAB_00443849
    MOV EAX,dword ptr [ESP + 0x78]      ; 0044384e
    MOV dword ptr [ESP + 0x7c],EBX      ; 00443852
    MOV dword ptr [ESP + 0x80],EAX      ; 00443856
    MOV ESI,0xffffff80                  ; 0044385d
        ;   Label: LAB_0044385d
    MOV EBP,dword ptr [ESP + 0x7c]      ; 00443862
    MOV EAX,dword ptr [ESP + 0x80]      ; 00443866
        ;   Label: LAB_00443866
    LEA EBX,[ESP + 0x64]                ; 0044386d
    MOV EDX,dword ptr [0x006703e8]      ; 00443871 | g_CDemonRendererInstance | g_CDemonRendererPtr1
    MOV dword ptr [ESP + 0x88],EBP      ; 00443877
    MOV dword ptr [ESP + 0x84],EAX      ; 0044387e
    MOV dword ptr [ESP + 0x8c],ESI      ; 00443885
    FILD dword ptr [ESP + 0x84]         ; 0044388c
    FADD float ptr [EDI]                ; 00443893
    FILD dword ptr [ESP + 0x88]         ; 00443895
    FXCH                                ; 0044389c
    FSTP float ptr [ESP + 0x10]         ; 0044389e
    FADD float ptr [EDI + 0x4]          ; 004438a2
    FILD dword ptr [ESP + 0x8c]         ; 004438a5
    FXCH                                ; 004438ac
    FSTP float ptr [ESP + 0x14]         ; 004438ae
    FADD float ptr [EDI + 0x8]          ; 004438b2
    LEA EAX,[ESP + 0x10]                ; 004438b5
    FSTP float ptr [ESP + 0x18]         ; 004438b9
    FLD float ptr [EAX]                 ; 004438bd
    FMUL float ptr [0x0065c060]         ; 004438bf | FLOAT_0065c060
    FISTP dword ptr [EBX]               ; 004438c5
    FLD float ptr [EAX + 0x4]           ; 004438c7
    FMUL float ptr [0x0065c060]         ; 004438ca | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x4]         ; 004438d0
    FLD float ptr [EAX + 0x8]           ; 004438d3
    FMUL float ptr [0x0065c060]         ; 004438d6 | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x8]         ; 004438dc
    LEA EAX,[ESP + 0x64]                ; 004438df
    PUSH EAX                            ; 004438e3
    MOV EAX,dword ptr [EDX]             ; 004438e4 | g_CDemonRendererInstance
    PUSH EAX                            ; 004438e6
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004438e7
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,dword ptr [0x006703e8]      ; 004438ec | g_CDemonRendererPtr1
    MOV EBX,dword ptr [EBX]             ; 004438f2 | g_CDemonRendererInstance
    MOV AH,byte ptr [EBX + 0x13]        ; 004438f4
    ADD ESP,0x8                         ; 004438f7
    TEST AH,0x80                        ; 004438fa
    JZ 0x00443b38                       ; 004438fd
        ;   XREF to: 00443b38 (CONDITIONAL_JUMP)  ; LAB_00443b38
    ADD ESI,0x10                        ; 00443903
        ;   Label: LAB_00443903
    CMP ESI,0x90                        ; 00443906
    JNZ 0x00443866                      ; 0044390c
        ;   XREF to: 00443866 (CONDITIONAL_JUMP)  ; LAB_00443866
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00443912
    ADD EDX,0x10                        ; 00443916
    MOV dword ptr [ESP + 0x7c],EDX      ; 00443919
    CMP EDX,ESI                         ; 0044391d
    JNZ 0x0044385d                      ; 0044391f
        ;   XREF to: 0044385d (CONDITIONAL_JUMP)  ; LAB_0044385d
    MOV EBX,dword ptr [ESP + 0x78]      ; 00443925
    ADD EBX,0x10                        ; 00443929
    MOV dword ptr [ESP + 0x78],EBX      ; 0044392c
    CMP EBX,ESI                         ; 00443930
    JNZ 0x00443849                      ; 00443932
        ;   XREF to: 00443849 (CONDITIONAL_JUMP)  ; LAB_00443849
    LEA EAX,[ESP + 0x58]                ; 00443938
    PUSH EAX                            ; 0044393c
    MOV EDI,dword ptr [0x006703e8]      ; 0044393d | g_CDemonRendererPtr1
    PUSH EDI                            ; 00443943 | g_CDemonRendererInstance
    LEA EBX,[ESP + 0x24]                ; 00443944
    XOR EBP,EBP                         ; 00443948
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0044394a
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    LEA EAX,[ESP + 0x54]                ; 0044394f
    ADD ESP,0x8                         ; 00443953
    MOV EDX,dword ptr [0x006703e8]      ; 00443956 | g_CDemonRendererInstance | g_CDemonRendererPtr1
    MOV dword ptr [ESP + 0x4c],EBP      ; 0044395c
    MOV dword ptr [ESP + 0x50],EBP      ; 00443960
    MOV dword ptr [ESP + 0x54],EBP      ; 00443964
    FLD float ptr [EAX]                 ; 00443968
    FMUL float ptr [0x0065c060]         ; 0044396a | FLOAT_0065c060
    FISTP dword ptr [EBX]               ; 00443970
    FLD float ptr [EAX + 0x4]           ; 00443972
    FMUL float ptr [0x0065c060]         ; 00443975 | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x4]         ; 0044397b
    FLD float ptr [EAX + 0x8]           ; 0044397e
    FMUL float ptr [0x0065c060]         ; 00443981 | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x8]         ; 00443987
    LEA EAX,[ESP + 0x1c]                ; 0044398a
    PUSH EAX                            ; 0044398e
    MOV EAX,dword ptr [EDX]             ; 0044398f | g_CDemonRendererInstance
    PUSH EAX                            ; 00443991
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00443992
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x40400000                  ; 00443997
    LEA EBX,[ESP + 0x48]                ; 0044399c
    LEA EAX,[ESP + 0x54]                ; 004439a0
    ADD ESP,0x8                         ; 004439a4
    MOV EDX,dword ptr [0x006703e8]      ; 004439a7 | g_CDemonRendererInstance | g_CDemonRendererPtr1
    MOV dword ptr [ESP + 0x4c],ECX      ; 004439ad
    MOV dword ptr [ESP + 0x50],EBP      ; 004439b1
    MOV dword ptr [ESP + 0x54],EBP      ; 004439b5
    FLD float ptr [EAX]                 ; 004439b9
    FMUL float ptr [0x0065c060]         ; 004439bb | FLOAT_0065c060
    FISTP dword ptr [EBX]               ; 004439c1
    FLD float ptr [EAX + 0x4]           ; 004439c3
    FMUL float ptr [0x0065c060]         ; 004439c6 | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x4]         ; 004439cc
    FLD float ptr [EAX + 0x8]           ; 004439cf
    FMUL float ptr [0x0065c060]         ; 004439d2 | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x8]         ; 004439d8
    LEA EAX,[ESP + 0x40]                ; 004439db
    PUSH EAX                            ; 004439df
    MOV EAX,dword ptr [EDX]             ; 004439e0 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004439e2
    PUSH EAX                            ; 004439e5
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004439e6
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x30]                ; 004439eb
    MOV EDX,dword ptr [0x006703e8]      ; 004439ef | g_CDemonRendererInstance | g_CDemonRendererPtr1
    ADD ESP,0x8                         ; 004439f5
    XOR EAX,EAX                         ; 004439f8
    MOV dword ptr [ESP + 0x4c],EBP      ; 004439fa
    MOV dword ptr [ESP + 0x54],EAX      ; 004439fe
    MOV EBP,0x40400000                  ; 00443a02
    LEA EAX,[ESP + 0x4c]                ; 00443a07
    MOV dword ptr [ESP + 0x50],EBP      ; 00443a0b
    FLD float ptr [EAX]                 ; 00443a0f
    FMUL float ptr [0x0065c060]         ; 00443a11 | FLOAT_0065c060
    FISTP dword ptr [EBX]               ; 00443a17
    FLD float ptr [EAX + 0x4]           ; 00443a19
    FMUL float ptr [0x0065c060]         ; 00443a1c | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x4]         ; 00443a22
    FLD float ptr [EAX + 0x8]           ; 00443a25
    FMUL float ptr [0x0065c060]         ; 00443a28 | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x8]         ; 00443a2e
    LEA EAX,[ESP + 0x28]                ; 00443a31
    PUSH EAX                            ; 00443a35
    MOV EAX,dword ptr [EDX]             ; 00443a36 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 00443a38
    PUSH EAX                            ; 00443a3b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00443a3c
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x3c]                ; 00443a41
    ADD ESP,0x8                         ; 00443a45
    XOR EDX,EDX                         ; 00443a48
    LEA EAX,[ESP + 0x4c]                ; 00443a4a
    MOV dword ptr [ESP + 0x4c],EDX      ; 00443a4e
    MOV dword ptr [ESP + 0x50],EDX      ; 00443a52
    MOV dword ptr [ESP + 0x54],EBP      ; 00443a56
    MOV EDX,dword ptr [0x006703e8]      ; 00443a5a | g_CDemonRendererInstance | g_CDemonRendererPtr1
    FLD float ptr [EAX]                 ; 00443a60
    FMUL float ptr [0x0065c060]         ; 00443a62 | FLOAT_0065c060
    FISTP dword ptr [EBX]               ; 00443a68
    FLD float ptr [EAX + 0x4]           ; 00443a6a
    FMUL float ptr [0x0065c060]         ; 00443a6d | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x4]         ; 00443a73
    FLD float ptr [EAX + 0x8]           ; 00443a76
    FMUL float ptr [0x0065c060]         ; 00443a79 | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x8]         ; 00443a7f
    LEA EAX,[ESP + 0x34]                ; 00443a82
    PUSH EAX                            ; 00443a86
    MOV EAX,dword ptr [EDX]             ; 00443a87 | g_CDemonRendererInstance
    ADD EAX,ESI                         ; 00443a89
    PUSH EAX                            ; 00443a8b
    XOR EDI,EDI                         ; 00443a8c
    MOV EBP,0x1                         ; 00443a8e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00443a93
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0xfffffff9                  ; 00443a98
    ADD ESP,0x8                         ; 00443a9d
    MOV ESI,0x2                         ; 00443aa0
    MOV dword ptr [ESP + 0x74],EAX      ; 00443aa5
    LEA EAX,[ESP + 0x70]                ; 00443aa9
    MOV dword ptr [ESP + 0x4],ESI       ; 00443aad
    PUSH EAX                            ; 00443ab1
    MOV dword ptr [ESP + 0xc],EDI       ; 00443ab2
    MOV dword ptr [ESP + 0x10],EBP      ; 00443ab6
    CALL engine_3d.c_processPolygonColor_FUN_00403e30 ; 00443aba
        ;   XREF to: 00403e30 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processPolygonColor_FUN_00403e30(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00443abf
    MOV EAX,ESP                         ; 00443ac2
    PUSH EAX                            ; 00443ac4
    CALL engine_3d.c_drawLineStrip2D_FUN_00404570 ; 00443ac5
        ;   XREF to: 00404570 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_drawLineStrip2D_FUN_00404570(SLineStrip * line_strip)
    ADD ESP,0x4                         ; 00443aca
    MOV EAX,ESP                         ; 00443acd
    PUSH EAX                            ; 00443acf
    MOV dword ptr [ESP + 0x10],ESI      ; 00443ad0
    CALL engine_3d.c_drawLineStrip2D_FUN_00404570 ; 00443ad4
        ;   XREF to: 00404570 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_drawLineStrip2D_FUN_00404570(SLineStrip * line_strip)
    ADD ESP,0x4                         ; 00443ad9
    MOV EAX,ESP                         ; 00443adc
    MOV ECX,0x3                         ; 00443ade
    PUSH EAX                            ; 00443ae3
    MOV dword ptr [ESP + 0x10],ECX      ; 00443ae4
    CALL engine_3d.c_drawLineStrip2D_FUN_00404570 ; 00443ae8
        ;   XREF to: 00404570 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_drawLineStrip2D_FUN_00404570(SLineStrip * line_strip)
    MOV EAX,[0x006703e8]                ; 00443aed | g_CDemonRendererPtr1
    MOV ESI,0x4                         ; 00443af2
    MOV EBX,dword ptr [EAX]             ; 00443af7 | g_CDemonRendererInstance
    ADD ESP,0x4                         ; 00443af9
    ADD EBX,0x30                        ; 00443afc
    TEST byte ptr [EBX + 0x13],0x80     ; 00443aff
        ;   Label: LAB_00443aff
    JNZ 0x00443b22                      ; 00443b03
        ;   XREF to: 00443b22 (CONDITIONAL_JUMP)  ; LAB_00443b22
    MOV EAX,dword ptr [EBX + 0x14]      ; 00443b05
    SAR EAX,0x10                        ; 00443b08
    PUSH EAX                            ; 00443b0b
    MOV EAX,dword ptr [EBX + 0x10]      ; 00443b0c
    SAR EAX,0x10                        ; 00443b0f
    PUSH EAX                            ; 00443b12
    MOV EDI,dword ptr [ESI + 0x66ec50]  ; 00443b13 | g_CourseAxisLabels[1] | g_CourseAxisLabels[2]
    PUSH EDI                            ; 00443b19 | = "x" | s_y_00619451
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00443b1a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00443b1f
    ADD ESI,0x4                         ; 00443b22
        ;   Label: LAB_00443b22
    ADD EBX,0x30                        ; 00443b25
    CMP ESI,0x10                        ; 00443b28
    JNZ 0x00443aff                      ; 00443b2b
        ;   XREF to: 00443aff (CONDITIONAL_JUMP)  ; LAB_00443aff
    ADD ESP,0x90                        ; 00443b2d
    POP EBP                             ; 00443b33
    POP EDI                             ; 00443b34
    POP ESI                             ; 00443b35
    POP EBX                             ; 00443b36
    RET                                 ; 00443b37
    MOV EAX,dword ptr [EBX + 0x8]       ; 00443b38
        ;   Label: LAB_00443b38
    MOV EDX,EAX                         ; 00443b3b
    SAR EDX,0x1f                        ; 00443b3d
    SHL EDX,0x7                         ; 00443b40
    SBB EAX,EDX                         ; 00443b43
    SAR EAX,0x7                         ; 00443b45
    MOV EDX,0xff                        ; 00443b48
    SUB EDX,EAX                         ; 00443b4d
    TEST EDX,EDX                        ; 00443b4f
    JL 0x00443bb4                       ; 00443b51
        ;   XREF to: 00443bb4 (CONDITIONAL_JUMP)  ; LAB_00443bb4
    CMP EDX,0xff                        ; 00443b53
    JLE 0x00443b60                      ; 00443b59
        ;   XREF to: 00443b60 (CONDITIONAL_JUMP)  ; LAB_00443b60
    MOV EDX,0xff                        ; 00443b5b
    MOV EAX,EDX                         ; 00443b60
        ;   Label: LAB_00443b60
    SAR EDX,0x1f                        ; 00443b62
    SHL EDX,0x3                         ; 00443b65
    SBB EAX,EDX                         ; 00443b68
    SAR EAX,0x3                         ; 00443b6a
    MOV EDX,EAX                         ; 00443b6d
    MOV ECX,EDX                         ; 00443b6f
    SHL EAX,0xa                         ; 00443b71
    SHL ECX,0x5                         ; 00443b74
    ADD EAX,ECX                         ; 00443b77
    MOV AL,byte ptr [EDX + EAX*0x1 + 0x2cf9020] ; 00443b79 | g_ColorCubeLookup
    PUSH 0x1                            ; 00443b80
    AND EAX,0xff                        ; 00443b82
    PUSH EBX                            ; 00443b87
    MOV [0x02d02570],EAX                ; 00443b88 | g_ActiveRenderColor
    CALL engine_prim.c_replaceWWithDepth_FUN_00552110 ; 00443b8d
        ;   XREF to: 00552110 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00443b92
    MOV EAX,dword ptr [EBX + 0x8]       ; 00443b95
    PUSH EAX                            ; 00443b98
    MOV EAX,dword ptr [EBX + 0x14]      ; 00443b99
    SAR EAX,0x10                        ; 00443b9c
    PUSH EAX                            ; 00443b9f
    MOV EAX,dword ptr [EBX + 0x10]      ; 00443ba0
    SAR EAX,0x10                        ; 00443ba3
    PUSH EAX                            ; 00443ba6
    CALL engine_2d.c_plotPixelWithDepth_FUN_00401290 ; 00443ba7
        ;   XREF to: 00401290 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixelWithDepth_FUN_00401290(int x_coord, int y_coord, uint depth_value)
    ADD ESP,0xc                         ; 00443bac
    JMP 0x00443903                      ; 00443baf
        ;   XREF to: 00443903 (UNCONDITIONAL_JUMP)  ; LAB_00443903
    XOR EDX,EDX                         ; 00443bb4
        ;   Label: LAB_00443bb4
    JMP 0x00443b60                      ; 00443bb6
        ;   XREF to: 00443b60 (UNCONDITIONAL_JUMP)  ; LAB_00443b60

