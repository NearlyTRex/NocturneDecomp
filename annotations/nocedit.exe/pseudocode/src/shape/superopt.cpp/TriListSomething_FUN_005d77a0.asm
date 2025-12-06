; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_superopt.cpp_TriListSomething_FUN_005d77a0()
;
; Local Variables:
; undefined8       Stack[-0x180]:8  local_180
; undefined8       Stack[-0x178]:8  local_178
; undefined8       Stack[-0x170]:8  local_170
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined8       Stack[-0x158]:8  local_158
; undefined8       Stack[-0x150]:8  local_150
; undefined8       Stack[-0x148]:8  local_148
; undefined8       Stack[-0x140]:8  local_140
; undefined8       Stack[-0x138]:8  local_138
; undefined8       Stack[-0x130]:8  local_130
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined1       Stack[-0x100]:1  local_100
; undefined1       Stack[-0x9c]:1  local_9c
; undefined1       Stack[-0x58]:1  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x4c]:4  local_4c
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData at 00456ee2
;
; Referenced Globals:
;   TerminatedCString s_reduce_cube_04d_txt_006547c0
;   TerminatedCString s_shape_superopt_cpp_006547d4
;   TerminatedCString s_wt_006547ea
;   TerminatedCString s_npoint_ntri_006547ed
;   TerminatedCString s_d_d_006547fe
;   TerminatedCString s_pointList_00654805
;   TerminatedCString s_g_g_g_00654813
;   TerminatedCString s_triList_0065481d
;   TerminatedCString s_shape_superopt_cpp_00654829
;   TerminatedCString s_Too_many_textures_0065483f
;   TerminatedCString s_d_d_d_00654852
;   TerminatedCString s_shape_superopt_cpp_0065485c
;   double DOUBLE_00654872 = 0.0698131700000000
;   double DOUBLE_0065487a = 0.00390625
;   int g_VertexCount
;   ... and 35 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_io.c_deleteFile_FUN_005ff9d0
;   crt_memory.c_copyArrayWithFunction_FUN_006020c2
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_design.c_optimizePolygonMesh_FUN_004658e0
;   shape_design.c_removeDegeneratePolygons_FUN_00465310
;   shape_design.c_vertexReducer_FUN_00467850
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00
;   shape_superopt.cpp_CObj_ctor_FUN_005d2230
;   shape_superopt.cpp_CObj_dtor_FUN_005d2260
;   shape_superopt.cpp_CObj_free_FUN_005d2600
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d77a0
        ;   Label: shape_superopt.cpp_TriListSomething_FUN_005d77a0
    PUSH ESI                            ; 005d77a1
    PUSH EDI                            ; 005d77a2
    PUSH EBP                            ; 005d77a3
    MOV EBP,ESP                         ; 005d77a4
    SUB ESP,0x158                       ; 005d77a6
    AND ESP,0xfffffff8                  ; 005d77ac
    CALL shape_design.c_removeDegeneratePolygons_FUN_00465310 ; 005d77af | void shape_design.c_removeDegeneratePolygons_FUN_00465310()
        ;   XREF to: 00465310 (UNCONDITIONAL_CALL)
    CMP dword ptr [0x016e990c],0x1      ; 005d77b4 | int g_PolygonCount
    JL 0x005d77c6                       ; 005d77bb | LAB_005d77c6
        ;   XREF to: 005d77c6 (CONDITIONAL_JUMP)
    CMP dword ptr [0x01626408],0x1      ; 005d77bd | int g_VertexCount
    JGE 0x005d77cd                      ; 005d77c4 | LAB_005d77cd
        ;   XREF to: 005d77cd (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 005d77c6
        ;   Label: LAB_005d77c6
    POP EBP                             ; 005d77c8
    POP EDI                             ; 005d77c9
    POP ESI                             ; 005d77ca
    POP EBX                             ; 005d77cb
    RET                                 ; 005d77cc
    MOV EBX,dword ptr [0x03f6bbe4]      ; 005d77cd | undefined4 DAT_03f6bbe4
        ;   Label: LAB_005d77cd
    PUSH EBX                            ; 005d77d3
    PUSH 0x6547c0                       ; 005d77d4 | = "reduce\\cube%04d.txt" | s_reduce_cube_04d_txt_006547c0 = reduce\cube%04d.txt
    LEA EAX,[ESP + 0x70]                ; 005d77d9
    PUSH EAX                            ; 005d77dd
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005d77de | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d77e3
    PUSH 0x252f                         ; 005d77e6
    PUSH 0x6547d4                       ; 005d77eb | = "..\\shape\\superopt.cpp" | s_shape_superopt_cpp_006547d4 = ..\shape\superopt.cpp
    PUSH 0x6547ea                       ; 005d77f0 | = "wt" | s_wt_006547ea = wt
    PUSH 0x0                            ; 005d77f5
    LEA EAX,[ESP + 0x78]                ; 005d77f7
    PUSH EAX                            ; 005d77fb
    XOR EDI,EDI                         ; 005d77fc
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005d77fe | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005d7803
    MOV ESI,dword ptr [0x016e990c]      ; 005d7806 | int g_PolygonCount
    MOV dword ptr [ESP + 0x14c],EAX     ; 005d780c
    TEST ESI,ESI                        ; 005d7813
    JLE 0x005d7840                      ; 005d7815 | LAB_005d7840
        ;   XREF to: 005d7840 (CONDITIONAL_JUMP)
    LEA EBX,[ESI*0x4 + 0x0]             ; 005d7817
    SUB EBX,ESI                         ; 005d781e
    SHL EBX,0x5                         ; 005d7820
    ADD EBX,ESI                         ; 005d7823
    XOR EAX,EAX                         ; 005d7825
    SHL EBX,0x2                         ; 005d7827
    MOV EDX,dword ptr [EAX + 0x16e99b4] ; 005d782a | DAT_016e99b4
        ;   Label: LAB_005d782a
    SUB EDX,0x2                         ; 005d7830
    ADD EAX,0x184                       ; 005d7833
    ADD EDI,EDX                         ; 005d7838
    CMP EAX,EBX                         ; 005d783a
    JL 0x005d782a                       ; 005d783c | LAB_005d782a
        ;   XREF to: 005d782a (CONDITIONAL_JUMP)
    MOV EAX,EAX                         ; 005d783e
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005d7840
        ;   Label: LAB_005d7840
    TEST EAX,EAX                        ; 005d7847
    JZ 0x005d7876                       ; 005d7849 | LAB_005d7876
        ;   XREF to: 005d7876 (CONDITIONAL_JUMP)
    PUSH 0x6547ed                       ; 005d784b | = "// npoint, ntri\n" | s_npoint_ntri_006547ed = // npoint, ntri

    PUSH EAX                            ; 005d7850
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005d7851 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005d7856
    PUSH EDI                            ; 005d7859
    MOV ECX,dword ptr [0x01626408]      ; 005d785a | int g_VertexCount
    PUSH ECX                            ; 005d7860
    PUSH 0x6547fe                       ; 005d7861 | = "%d %d\n" | s_d_d_006547fe = %d %d

    MOV EBX,dword ptr [ESP + 0x158]     ; 005d7866
    PUSH EBX                            ; 005d786d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005d786e | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005d7873
    PUSH 0x0                            ; 005d7876
        ;   Label: LAB_005d7876
    PUSH 0x0                            ; 005d7878
    LEA EAX,[ESP + 0x118]               ; 005d787a
    PUSH EAX                            ; 005d7881
    CALL shape_superopt.cpp_CObj_ctor_FUN_005d2230 ; 005d7882 | CObj * shape_superopt.cpp_CObj_ctor_FUN_005d2230(CObj * this_ptr)
        ;   XREF to: 005d2230 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d7887
    MOV ESI,dword ptr [0x01626408]      ; 005d788a | int g_VertexCount
    PUSH ESI                            ; 005d7890
    PUSH EDI                            ; 005d7891
    LEA EAX,[ESP + 0x118]               ; 005d7892
    PUSH EAX                            ; 005d7899
    CALL shape_superopt.cpp_CObj_init_FUN_005d22d0 ; 005d789a | int shape_superopt.cpp_CObj_init_FUN_005d22d0(CObj * this_ptr, int poly_count, int vertex_count)
        ;   XREF to: 005d22d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d789f
    MOV EDI,dword ptr [ESP + 0x14c]     ; 005d78a2
    TEST EDI,EDI                        ; 005d78a9
    JZ 0x005d78bb                       ; 005d78ab | LAB_005d78bb
        ;   XREF to: 005d78bb (CONDITIONAL_JUMP)
    PUSH 0x654805                       ; 005d78ad | = "// pointList\n" | s_pointList_00654805 = // pointList

    PUSH EDI                            ; 005d78b2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005d78b3 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005d78b8
    MOV EDX,dword ptr [0x01626408]      ; 005d78bb | int g_VertexCount
        ;   Label: LAB_005d78bb
    XOR EDI,EDI                         ; 005d78c1
    TEST EDX,EDX                        ; 005d78c3
    JLE 0x005d794f                      ; 005d78c5 | LAB_005d794f
        ;   XREF to: 005d794f (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005d78cb
    XOR ESI,ESI                         ; 005d78cd
    MOV EAX,dword ptr [ESP + 0x114]     ; 005d78cf
        ;   Label: LAB_005d78cf
    FLD float ptr [EBX + 0x162640c]     ; 005d78d6 | SVertexData[20000] g_LoadedVertices
    MOV ECX,dword ptr [ESP + 0x14c]     ; 005d78dc
    FSTP double ptr [ESI + EAX*0x1]     ; 005d78e3
    MOV EAX,dword ptr [ESP + 0x114]     ; 005d78e6
    FLD float ptr [EBX + 0x1626410]     ; 005d78ed | DAT_01626424
    FSTP double ptr [ESI + EAX*0x1 + 0x8] ; 005d78f3
    MOV EAX,dword ptr [ESP + 0x114]     ; 005d78f7
    FLD float ptr [EBX + 0x1626414]     ; 005d78fe | DAT_01626428
    FSTP double ptr [ESI + EAX*0x1 + 0x10] ; 005d7904
    TEST ECX,ECX                        ; 005d7908
    JZ 0x005d793e                       ; 005d790a | LAB_005d793e
        ;   XREF to: 005d793e (CONDITIONAL_JUMP)
    SUB ESP,0x8                         ; 005d790c
    FLD float ptr [EBX + 0x1626414]     ; 005d790f | g_LoadedVertices[0].vertex.z
    FSTP double ptr [ESP]               ; 005d7915
    SUB ESP,0x8                         ; 005d7918
    FLD float ptr [EBX + 0x1626410]     ; 005d791b | DAT_01626410
    FSTP double ptr [ESP]               ; 005d7921
    SUB ESP,0x8                         ; 005d7924
    FLD float ptr [EBX + 0x162640c]     ; 005d7927 | SVertexData[20000] g_LoadedVertices
    FSTP double ptr [ESP]               ; 005d792d
    PUSH 0x654813                       ; 005d7930 | = "%g %g %g\n" | s_g_g_g_00654813 = %g %g %g

    PUSH ECX                            ; 005d7935
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005d7936 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 005d793b
    MOV ECX,dword ptr [0x01626408]      ; 005d793e | int g_VertexCount
        ;   Label: LAB_005d793e
    ADD ESI,0x38                        ; 005d7944
    INC EDI                             ; 005d7947
    ADD EBX,0x14                        ; 005d7948
    CMP EDI,ECX                         ; 005d794b
    JL 0x005d78cf                       ; 005d794d | LAB_005d78cf
        ;   XREF to: 005d78cf (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x14c]     ; 005d794f
        ;   Label: LAB_005d794f
    TEST EBX,EBX                        ; 005d7956
    JZ 0x005d7968                       ; 005d7958 | LAB_005d7968
        ;   XREF to: 005d7968 (CONDITIONAL_JUMP)
    PUSH 0x65481d                       ; 005d795a | = "// triList\n" | s_triList_0065481d = // triList

    PUSH EBX                            ; 005d795f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005d7960 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005d7965
    XOR EDI,EDI                         ; 005d7968
        ;   Label: LAB_005d7968
    MOV EDX,dword ptr [0x016e990c]      ; 005d796a | int g_PolygonCount
    MOV dword ptr [ESP + 0x138],EDI     ; 005d7970
    MOV dword ptr [ESP + 0x148],EDI     ; 005d7977
    TEST EDX,EDX                        ; 005d797e
    JLE 0x005d7c12                      ; 005d7980 | LAB_005d7c12
        ;   XREF to: 005d7c12 (CONDITIONAL_JUMP)
    MOV EAX,0x16e9910                   ; 005d7986 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,0x4                         ; 005d798b
    MOV dword ptr [ESP + 0x140],EDI     ; 005d798e
    MOV dword ptr [ESP + 0x13c],EAX     ; 005d7995 | DAT_016e9914
    PUSH 0x0                            ; 005d799c
        ;   Label: LAB_005d799c
    LEA EAX,[ESP + 0x4]                 ; 005d799e
    PUSH EAX                            ; 005d79a2
    CALL shape_superopt.cpp_CPoly_ctor_FUN_005cc620 ; 005d79a3 | CPoly * shape_superopt.cpp_CPoly_ctor_FUN_005cc620(CPoly * this_ptr)
        ;   XREF to: 005cc620 (UNCONDITIONAL_CALL)
    LEA EAX,[ESP + 0x118]               ; 005d79a8
    ADD ESP,0x8                         ; 005d79af
    MOV dword ptr [ESP],EAX             ; 005d79b2
    MOV EAX,dword ptr [ESP + 0x140]     ; 005d79b5
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 005d79bc | DAT_016e99c8
    MOV dword ptr [ESP + 0x4],EAX       ; 005d79c2
    MOV EAX,dword ptr [ESP + 0x140]     ; 005d79c6
    FLD double ptr [0x0065487a]         ; 005d79cd | double DOUBLE_0065487a
    FLD float ptr [EAX + 0x16e9a08]     ; 005d79d3 | DAT_016e9a08
    FMUL ST1                            ; 005d79d9
    FLD float ptr [EAX + 0x16e9a48]     ; 005d79db | DAT_016e9a48
    FMULP ST2                           ; 005d79e1
    XOR EBX,EBX                         ; 005d79e3
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005d79e5
    MOV EAX,[0x03f6bbe8]                ; 005d79ec | undefined4 DAT_03f6bbe8
    FSTP double ptr [ESP + 0x10]        ; 005d79f1
    FSTP double ptr [ESP + 0x18]        ; 005d79f5
    TEST EAX,EAX                        ; 005d79f9
    JLE 0x005d7d69                      ; 005d79fb | LAB_005d7d69
        ;   XREF to: 005d7d69 (CONDITIONAL_JUMP)
    MOV ESI,0x3f6bbf0                   ; 005d7a01 | DAT_03f6bbf0
    PUSH EDI                            ; 005d7a06 | DAT_016e9914
        ;   Label: LAB_005d7a06
    PUSH ESI                            ; 005d7a07 | DAT_03f6bbf0
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005d7a08 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005d7a0d
    TEST EAX,EAX                        ; 005d7a10
    JNZ 0x005d7d57                      ; 005d7a12 | LAB_005d7d57
        ;   XREF to: 005d7d57 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005d7a18
    MOV EDX,EAX                         ; 005d7a1a
        ;   Label: LAB_005d7a1a
    TEST EAX,EAX                        ; 005d7a1c
    JL 0x005d7d73                       ; 005d7a1e | LAB_005d7d73
        ;   XREF to: 005d7d73 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 005d7a24
        ;   Label: LAB_005d7a24
    MOV dword ptr [ESP + 0x5c],EDX      ; 005d7a29
    MOV dword ptr [ESP + 0x150],EAX     ; 005d7a2d
    MOV EAX,dword ptr [ESP + 0x140]     ; 005d7a34
    MOV EDX,dword ptr [ESP + 0x148]     ; 005d7a3b
    MOV dword ptr [ESP + 0x144],EAX     ; 005d7a42
    LEA EBX,[EAX + 0x8]                 ; 005d7a49
    IMUL EAX,EDX,0x68                   ; 005d7a4c
    MOV dword ptr [ESP + 0x154],EAX     ; 005d7a4f
    MOV EAX,dword ptr [ESP + 0x140]     ; 005d7a56
    CMP dword ptr [EAX + 0x16e99b4],0x2 ; 005d7a5d | DAT_016e99b4
    JLE 0x005d7bbe                      ; 005d7a64 | LAB_005d7bbe
        ;   XREF to: 005d7bbe (CONDITIONAL_JUMP)
    FLD double ptr [0x0065487a]         ; 005d7a6a | double DOUBLE_0065487a
        ;   Label: LAB_005d7a6a
    FLD float ptr [EBX + 0x16e9a04]     ; 005d7a70 | DAT_016e9a0c
    FMUL ST1                            ; 005d7a76
    FLD float ptr [EBX + 0x16e9a44]     ; 005d7a78 | DAT_016e9a4c
    FMUL ST2                            ; 005d7a7e
    FLD float ptr [EBX + 0x16e9a08]     ; 005d7a80 | DAT_016e9a10
    FMUL ST3                            ; 005d7a86
    FLD float ptr [EBX + 0x16e9a48]     ; 005d7a88 | DAT_016e9a50
    FMULP ST4                           ; 005d7a8e
    MOV EAX,dword ptr [EBX + 0x16e99c4] ; 005d7a90 | DAT_016e99cc
    MOV ESI,dword ptr [ESP + 0x14c]     ; 005d7a96
    MOV dword ptr [ESP + 0x8],EAX       ; 005d7a9d
    FXCH ST2                            ; 005d7aa1
    FSTP double ptr [ESP + 0x20]        ; 005d7aa3
    FSTP double ptr [ESP + 0x28]        ; 005d7aa7
    FSTP double ptr [ESP + 0x30]        ; 005d7aab
    MOV EAX,dword ptr [EBX + 0x16e99c8] ; 005d7aaf | DAT_016e99d0
    FSTP double ptr [ESP + 0x38]        ; 005d7ab5
    MOV dword ptr [ESP + 0xc],EAX       ; 005d7ab9
    TEST ESI,ESI                        ; 005d7abd
    JZ 0x005d7ada                       ; 005d7abf | LAB_005d7ada
        ;   XREF to: 005d7ada (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005d7ac1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d7ac2
    PUSH EAX                            ; 005d7ac6
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d7ac7
    PUSH EDX                            ; 005d7acb
    PUSH 0x654852                       ; 005d7acc | = "%d %d %d\n" | s_d_d_d_00654852 = %d %d %d

    PUSH ESI                            ; 005d7ad1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005d7ad2 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005d7ad7
    MOV EAX,ESP                         ; 005d7ada
        ;   Label: LAB_005d7ada
    PUSH EAX                            ; 005d7adc
    CALL shape_superopt.cpp_CPoly_computeNormal_FUN_005cd7d0 ; 005d7add | void shape_superopt.cpp_CPoly_computeNormal_FUN_005cd7d0(CPoly * this_ptr)
        ;   XREF to: 005cd7d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d7ae2
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005d7ae5
    MOV ESI,dword ptr [ESP + 0x154]     ; 005d7aec
    PUSH 0x5d8330                       ; 005d7af3
    ADD EAX,ESI                         ; 005d7af8
    PUSH 0x10                           ; 005d7afa
    MOV dword ptr [ESP + 0x13c],EAX     ; 005d7afc
    LEA ESI,[ESP + 0xc]                 ; 005d7b03
    MOV EDX,dword ptr [ESP + 0x13c]     ; 005d7b07
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d7b0e
    PUSH 0x3                            ; 005d7b12
    MOV dword ptr [EDX],EAX             ; 005d7b14
    LEA EAX,[ESP + 0x1c]                ; 005d7b16
    MOV EDI,EDX                         ; 005d7b1a
    PUSH EAX                            ; 005d7b1c
    LEA EAX,[EDX + 0x10]                ; 005d7b1d
    LEA EDI,[EDI + 0x4]                 ; 005d7b20
    PUSH EAX                            ; 005d7b23
    MOVSD ES:EDI,ESI                    ; 005d7b24
    MOVSD ES:EDI,ESI                    ; 005d7b25
    MOVSD ES:EDI,ESI                    ; 005d7b26
    CALL crt_memory.c_copyArrayWithFunction_FUN_006020c2 ; 005d7b27 | void * crt_memory.c_copyArrayWithFunction_FUN_006020c2(void * dest, void * source, int count, int element_size, ...)
        ;   XREF to: 006020c2 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005d7b2c
    MOV EDX,dword ptr [ESP + 0x134]     ; 005d7b2f
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d7b36
    MOV dword ptr [EDX + 0x40],EAX      ; 005d7b3a
    MOV EAX,dword ptr [ESP + 0x44]      ; 005d7b3d
    MOV dword ptr [EDX + 0x44],EAX      ; 005d7b41
    MOV EAX,dword ptr [ESP + 0x48]      ; 005d7b44
    MOV dword ptr [EDX + 0x48],EAX      ; 005d7b48
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005d7b4b
    MOV dword ptr [EDX + 0x4c],EAX      ; 005d7b4f
    MOV EAX,dword ptr [ESP + 0x50]      ; 005d7b52
    MOV dword ptr [EDX + 0x50],EAX      ; 005d7b56
    MOV EAX,dword ptr [ESP + 0x54]      ; 005d7b59
    MOV dword ptr [EDX + 0x54],EAX      ; 005d7b5d
    MOV EAX,dword ptr [ESP + 0x58]      ; 005d7b60
    MOV dword ptr [EDX + 0x58],EAX      ; 005d7b64
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005d7b67
    MOV dword ptr [EDX + 0x5c],EAX      ; 005d7b6b
    MOV EAX,dword ptr [ESP + 0x60]      ; 005d7b6e
    MOV EDI,dword ptr [ESP + 0x154]     ; 005d7b72
    MOV dword ptr [EDX + 0x60],EAX      ; 005d7b79
    MOV EAX,dword ptr [ESP + 0x148]     ; 005d7b7c
    MOV EDX,dword ptr [ESP + 0x150]     ; 005d7b83
    INC EAX                             ; 005d7b8a
    INC EDX                             ; 005d7b8b
    MOV dword ptr [ESP + 0x148],EAX     ; 005d7b8c
    MOV dword ptr [ESP + 0x150],EDX     ; 005d7b93
    MOV EAX,EDX                         ; 005d7b9a
    MOV EDX,dword ptr [ESP + 0x144]     ; 005d7b9c
    ADD EBX,0x4                         ; 005d7ba3
    ADD EDI,0x68                        ; 005d7ba6
    MOV ECX,dword ptr [EDX + 0x16e99b4] ; 005d7ba9 | DAT_016e99b4
    MOV dword ptr [ESP + 0x154],EDI     ; 005d7baf
    CMP EAX,ECX                         ; 005d7bb6
    JL 0x005d7a6a                       ; 005d7bb8 | LAB_005d7a6a
        ;   XREF to: 005d7a6a (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005d7bbe
        ;   Label: LAB_005d7bbe
    LEA EAX,[ESP + 0x4]                 ; 005d7bc0
    PUSH EAX                            ; 005d7bc4
    CALL shape_superopt.cpp_CPoly_dtor_FUN_005cc660 ; 005d7bc5 | CPoly * shape_superopt.cpp_CPoly_dtor_FUN_005cc660(CPoly * this_ptr)
        ;   XREF to: 005cc660 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005d7bca
    MOV ESI,dword ptr [0x016e990c]      ; 005d7bcd | int g_PolygonCount
    MOV EDX,dword ptr [ESP + 0x13c]     ; 005d7bd3
    MOV ECX,dword ptr [ESP + 0x140]     ; 005d7bda
    MOV EBX,dword ptr [ESP + 0x138]     ; 005d7be1
    ADD EDX,0x184                       ; 005d7be8 | DAT_016e9a98
    ADD ECX,0x184                       ; 005d7bee
    INC EBX                             ; 005d7bf4
    MOV dword ptr [ESP + 0x13c],EDX     ; 005d7bf5 | DAT_016e9a98
    MOV dword ptr [ESP + 0x140],ECX     ; 005d7bfc
    MOV dword ptr [ESP + 0x138],EBX     ; 005d7c03
    CMP EBX,ESI                         ; 005d7c0a
    JL 0x005d799c                       ; 005d7c0c | LAB_005d799c
        ;   XREF to: 005d799c (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x14c]     ; 005d7c12
        ;   Label: LAB_005d7c12
    TEST EDI,EDI                        ; 005d7c19
    JZ 0x005d7c30                       ; 005d7c1b | LAB_005d7c30
        ;   XREF to: 005d7c30 (CONDITIONAL_JUMP)
    PUSH 0x2571                         ; 005d7c1d
    PUSH 0x65485c                       ; 005d7c22 | = "..\\shape\\superopt.cpp" | s_shape_superopt_cpp_0065485c = ..\shape\superopt.cpp
    PUSH EDI                            ; 005d7c27
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005d7c28 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d7c2d
    LEA EAX,[ESP + 0xcc]                ; 005d7c30
        ;   Label: LAB_005d7c30
    PUSH EAX                            ; 005d7c37
    CALL shape_superopt.cpp_COptimize_ctor_FUN_005d6f90 ; 005d7c38 | COptimize * shape_superopt.cpp_COptimize_ctor_FUN_005d6f90(COptimize * this_ptr)
        ;   XREF to: 005d6f90 (UNCONDITIONAL_CALL)
    FLD double ptr [0x00654872]         ; 005d7c3d | double DOUBLE_00654872
    FCOS                                ; 005d7c43
    ADD ESP,0x4                         ; 005d7c45
    PUSH 0x3f847ae1                     ; 005d7c48
    PUSH 0x47ae147b                     ; 005d7c4d
    FLD1                                ; 005d7c52
    LEA EAX,[ESP + 0xd4]                ; 005d7c54
    FSUBRP                              ; 005d7c5b
    PUSH EAX                            ; 005d7c5d
    FSTP double ptr [ESP + 0x138]       ; 005d7c5e
    CALL shape_superopt.cpp_COptimize_FUN_005d70d0 ; 005d7c65 | void shape_superopt.cpp_COptimize_FUN_005d70d0(COptimize * this_ptr)
        ;   XREF to: 005d70d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d7c6a
    MOV EDX,dword ptr [ESP + 0x130]     ; 005d7c6d
    PUSH EDX                            ; 005d7c74
    MOV ECX,dword ptr [ESP + 0x130]     ; 005d7c75
    PUSH ECX                            ; 005d7c7c
    LEA EAX,[ESP + 0xd4]                ; 005d7c7d
    PUSH EAX                            ; 005d7c84
    CALL shape_superopt.cpp_COptimize_FUN_005d7120 ; 005d7c85 | void shape_superopt.cpp_COptimize_FUN_005d7120(COptimize * this_ptr)
        ;   XREF to: 005d7120 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d7c8a
    PUSH 0x3f847ae1                     ; 005d7c8d
    PUSH 0x47ae147b                     ; 005d7c92
    LEA EAX,[ESP + 0xd4]                ; 005d7c97
    PUSH EAX                            ; 005d7c9e
    CALL shape_superopt.cpp_COptimize_FUN_005d7170 ; 005d7c9f | void shape_superopt.cpp_COptimize_FUN_005d7170(COptimize * this_ptr)
        ;   XREF to: 005d7170 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d7ca4
    PUSH 0x4                            ; 005d7ca7
    LEA EAX,[ESP + 0xd0]                ; 005d7ca9
    PUSH EAX                            ; 005d7cb0
    CALL shape_superopt.cpp_COptimize_FUN_005d71c0 ; 005d7cb1 | void shape_superopt.cpp_COptimize_FUN_005d71c0(COptimize * this_ptr)
        ;   XREF to: 005d71c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005d7cb6
    PUSH 0x1                            ; 005d7cb9
    LEA EAX,[ESP + 0x114]               ; 005d7cbb
    PUSH EAX                            ; 005d7cc2
    LEA EAX,[ESP + 0xd4]                ; 005d7cc3
    PUSH EAX                            ; 005d7cca
    CALL shape_superopt.cpp_COptimize_FUN_005d71e0 ; 005d7ccb | int shape_superopt.cpp_COptimize_FUN_005d71e0(COptimize * this_ptr)
        ;   XREF to: 005d71e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d7cd0
    LEA EAX,[ESP + 0xcc]                ; 005d7cd3
    PUSH EAX                            ; 005d7cda
    CALL shape_superopt.cpp_COptimize_FUN_005d7290 ; 005d7cdb | int shape_superopt.cpp_COptimize_FUN_005d7290(COptimize * this_ptr)
        ;   XREF to: 005d7290 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d7ce0
    TEST EAX,EAX                        ; 005d7ce3
    JZ 0x005d7dda                       ; 005d7ce5 | LAB_005d7dda
        ;   XREF to: 005d7dda (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xcc]                ; 005d7ceb
    PUSH EAX                            ; 005d7cf2
    CALL shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00 ; 005d7cf3 | undefined shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00()
        ;   XREF to: 005d7e00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d7cf8
    PUSH -0x1                           ; 005d7cfb
    PUSH 0xbf800000                     ; 005d7cfd
    PUSH 0x3c23d70a                     ; 005d7d02
    CALL shape_design.c_vertexReducer_FUN_00467850 ; 005d7d07 | void shape_design.c_vertexReducer_FUN_00467850(float tolerance, float angle_tolerance, int display_progress)
        ;   XREF to: 00467850 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d7d0c
    LEA EAX,[ESP + 0x68]                ; 005d7d0f
    PUSH EAX                            ; 005d7d13
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 005d7d14 | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d7d19
    LEA EAX,[ESP + 0x110]               ; 005d7d1c
        ;   Label: LAB_005d7d1c
    PUSH EAX                            ; 005d7d23
    CALL shape_superopt.cpp_CObj_free_FUN_005d2600 ; 005d7d24 | void shape_superopt.cpp_CObj_free_FUN_005d2600(CObj * this_ptr)
        ;   XREF to: 005d2600 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d7d29
    PUSH 0x0                            ; 005d7d2c
    LEA EAX,[ESP + 0xd0]                ; 005d7d2e
    PUSH EAX                            ; 005d7d35
    CALL shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0 ; 005d7d36 | COptimize * shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0(COptimize * this_ptr)
        ;   XREF to: 005d6fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005d7d3b
    PUSH 0x0                            ; 005d7d3e
    LEA EAX,[ESP + 0x114]               ; 005d7d40
    PUSH EAX                            ; 005d7d47
    CALL shape_superopt.cpp_CObj_dtor_FUN_005d2260 ; 005d7d48 | CObj * shape_superopt.cpp_CObj_dtor_FUN_005d2260(CObj * this_ptr)
        ;   XREF to: 005d2260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005d7d4d
    MOV ESP,EBP                         ; 005d7d50
    POP EBP                             ; 005d7d52
    POP EDI                             ; 005d7d53
    POP ESI                             ; 005d7d54
    POP EBX                             ; 005d7d55
    RET                                 ; 005d7d56
    MOV EDX,dword ptr [0x03f6bbe8]      ; 005d7d57 | undefined4 DAT_03f6bbe8
        ;   Label: LAB_005d7d57
    INC EBX                             ; 005d7d5d
    ADD ESI,0x50                        ; 005d7d5e
    CMP EBX,EDX                         ; 005d7d61
    JL 0x005d7a06                       ; 005d7d63 | LAB_005d7a06
        ;   XREF to: 005d7a06 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 005d7d69
        ;   Label: LAB_005d7d69
    JMP 0x005d7a1a                      ; 005d7d6e | LAB_005d7a1a
        ;   XREF to: 005d7a1a (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x03f6bbe8],0x32     ; 005d7d73 | undefined4 DAT_03f6bbe8
        ;   Label: LAB_005d7d73
    JL 0x005d7d9f                       ; 005d7d7a | LAB_005d7d9f
        ;   XREF to: 005d7d9f (CONDITIONAL_JUMP)
    MOV EBX,0x654829                    ; 005d7d7c | = "..\\shape\\superopt.cpp" | s_shape_superopt_cpp_00654829 = ..\shape\superopt.cpp
    MOV ESI,0x255b                      ; 005d7d81
    PUSH 0x65483f                       ; 005d7d86 | = "Too many textures!" | s_Too_many_textures_0065483f = Too many textures!
    MOV dword ptr [0x02f0ca48],EBX      ; 005d7d8b | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005d7d91 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005d7d97 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d7d9c
    MOV EDX,dword ptr [0x03f6bbe8]      ; 005d7d9f | undefined4 DAT_03f6bbe8
        ;   Label: LAB_005d7d9f
    IMUL EDI,EDX,0x50                   ; 005d7da5
    MOV ESI,dword ptr [ESP + 0x13c]     ; 005d7da8
    ADD EDI,0x3f6bbf0                   ; 005d7daf | DAT_03f6bbf0
    PUSH EDI                            ; 005d7db5
    MOV AL,byte ptr [ESI]               ; 005d7db6 | DAT_016e9914
        ;   Label: LAB_005d7db6
    MOV byte ptr [EDI],AL               ; 005d7db8 | DAT_03f6bbf0
    CMP AL,0x0                          ; 005d7dba
    JZ 0x005d7dce                       ; 005d7dbc | LAB_005d7dce
        ;   XREF to: 005d7dce (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005d7dbe | DAT_016e9915
    ADD ESI,0x2                         ; 005d7dc1
    MOV byte ptr [EDI + 0x1],AL         ; 005d7dc4 | DAT_03f6bbf1
    ADD EDI,0x2                         ; 005d7dc7
    CMP AL,0x0                          ; 005d7dca
    JNZ 0x005d7db6                      ; 005d7dcc | LAB_005d7db6
        ;   XREF to: 005d7db6 (CONDITIONAL_JUMP)
    POP EDI                             ; 005d7dce
        ;   Label: LAB_005d7dce
    INC dword ptr [0x03f6bbe8]          ; 005d7dcf | undefined4 DAT_03f6bbe8
    JMP 0x005d7a24                      ; 005d7dd5 | LAB_005d7a24
        ;   XREF to: 005d7a24 (UNCONDITIONAL_JUMP)
    PUSH -0x1                           ; 005d7dda
        ;   Label: LAB_005d7dda
    PUSH EAX                            ; 005d7ddc
    PUSH 0x3f800000                     ; 005d7ddd
    CALL shape_design.c_optimizePolygonMesh_FUN_004658e0 ; 005d7de2 | void shape_design.c_optimizePolygonMesh_FUN_004658e0(float angle_tolerance, int strict_mode, int display_progress)
        ;   XREF to: 004658e0 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [0x03f6bbe4]      ; 005d7de7 | undefined4 DAT_03f6bbe4
    INC EBX                             ; 005d7ded
    ADD ESP,0xc                         ; 005d7dee
    MOV dword ptr [0x03f6bbe4],EBX      ; 005d7df1 | undefined4 DAT_03f6bbe4
    JMP 0x005d7d1c                      ; 005d7df7 | LAB_005d7d1c
        ;   XREF to: 005d7d1c (UNCONDITIONAL_JUMP)

