; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_vertexReducer_FUN_00467850 (float tolerance,float angle_tolerance,int display_progress)
;
; Parameters:
; float            Stack[0x4]:4   tolerance
; float            Stack[0x8]:4   angle_tolerance
; int              Stack[0xc]:4   display_progress
; Local Variables:
; undefined8       Stack[-0x14c]:8  local_14c
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined8       Stack[-0x13c]:8  local_13c
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
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
; XREF[4]:
;   core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0 at 004572b1
;   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 at 00482f8a
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f6cf
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7d07
;
; Referenced Globals:
;   TerminatedCString s_Enter_tolerance_1_0061ca0d
;   TerminatedCString s_Check_normals_n_0061ca25
;   TerminatedCString s_Enter_angle_tolerance_90_0061ca3b
;   TerminatedCString s_Scanning_vertices_0061ca5b
;   TerminatedCString s_shape_design_c_0061ca70
;   TerminatedCString s_ERROR_Can_t_allocate_mem_0061ca82
;   TerminatedCString s_shape_design_c_0061cab9
;   TerminatedCString s_shape_design_c_0061cacb
;   TerminatedCString s_ERROR_Can_t_allocate_mem_0061cadd
;   double g_VertexReducerDegreesToRadiansConversion = 0.0174532925200000
;   TerminatedCString s_shape_design_c_0061cb1e
;   TerminatedCString s_shape_design_c_0061cb30
;   TerminatedCString s_Original_vertices_d_New__0061cb42
;   TerminatedCString s_Hit_a_key_0061cb8e
;   undefined4 s_Hit_a_key..._0061cb8f
;   ... and 10 more
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdlib.c_qsort_FUN_005fdf38
;   crt_string.c__strtod_FUN_005ff0f3
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_removeDegenerateTriangles_FUN_00463a20
;   shape_design.c_removeUnusedVertices_FUN_00463830
;   shape_design.c_validatePolygonNormals_FUN_00461d80
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467850
        ;   Label: shape_design.c_vertexReducer_FUN_00467850
    PUSH ESI                            ; 00467851
    PUSH EDI                            ; 00467852
    PUSH EBP                            ; 00467853
    MOV EBP,ESP                         ; 00467854
    SUB ESP,0x134                       ; 00467856
    MOV EAX,[0x01626408]                ; 0046785c | g_VertexCount
    MOV dword ptr [EBP + -0x14],EAX     ; 00467861
    MOV dword ptr [EBP + -0x10],0x0     ; 00467864
    MOV EAX,[0x016e990c]                ; 0046786b | g_PolygonCount
    MOV dword ptr [EBP + -0xc],EAX      ; 00467870
    CMP dword ptr [0x01626408],0x1      ; 00467873 | g_VertexCount
    JGE 0x00467881                      ; 0046787a
        ;   XREF to: 00467881 (CONDITIONAL_JUMP)  ; LAB_00467881
    JMP 0x00467e5e                      ; 0046787c
        ;   XREF to: 00467e5e (UNCONDITIONAL_JUMP)  ; LAB_00467e5e
    CMP dword ptr [EBP + 0x1c],0x0      ; 00467881
        ;   Label: LAB_00467881
    JLE 0x004678b3                      ; 00467885
        ;   XREF to: 004678b3 (CONDITIONAL_JUMP)  ; LAB_004678b3
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00467887
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,0x61ca0d                    ; 0046788c | = "Enter tolerance [.1] : "
    PUSH EAX                            ; 00467891 | = "Enter tolerance [.1] : "
    PUSH 0x0                            ; 00467892
    PUSH 0x0                            ; 00467894
    PUSH 0x14                           ; 00467896
    LEA EAX,[EBP + 0xfffffedc]          ; 00467898
    PUSH EAX                            ; 0046789e
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046789f
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 004678a4
    CMP EAX,0x1b                        ; 004678a7
    JNZ 0x004678b1                      ; 004678aa
        ;   XREF to: 004678b1 (CONDITIONAL_JUMP)  ; LAB_004678b1
    JMP 0x00467e5e                      ; 004678ac
        ;   XREF to: 00467e5e (UNCONDITIONAL_JUMP)  ; LAB_00467e5e
    JMP 0x004678ba                      ; 004678b1
        ;   XREF to: 004678ba (UNCONDITIONAL_JUMP)  ; LAB_004678ba
        ;   Label: LAB_004678b1
    MOV byte ptr [EBP + 0xfffffedc],0x0 ; 004678b3
        ;   Label: LAB_004678b3
    LEA EDI,[EBP + 0xfffffedc]          ; 004678ba
        ;   Label: LAB_004678ba
    SUB ECX,ECX                         ; 004678c0
    DEC ECX                             ; 004678c2
    XOR EAX,EAX                         ; 004678c3
    SCASB.REPNE ES:EDI                  ; 004678c5
    NOT ECX                             ; 004678c7
    DEC ECX                             ; 004678c9
    TEST ECX,ECX                        ; 004678ca
    JZ 0x004678f2                       ; 004678cc
        ;   XREF to: 004678f2 (CONDITIONAL_JUMP)  ; LAB_004678f2
    LEA EAX,[EBP + 0xfffffedc]          ; 004678ce
    PUSH EAX                            ; 004678d4
    CALL crt_string.c__strtod_FUN_005ff0f3 ; 004678d5
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)  ; double crt_string.c__strtod_FUN_005ff0f3(char * str)
    MOV dword ptr [EBP + 0xfffffed4],EAX ; 004678da
    MOV dword ptr [EBP + 0xfffffed8],EDX ; 004678e0
    FLD double ptr [EBP + 0xfffffed4]   ; 004678e6
    ADD ESP,0x4                         ; 004678ec
    FSTP float ptr [EBP + 0x14]         ; 004678ef
    CMP dword ptr [EBP + 0x1c],0x0      ; 004678f2
        ;   Label: LAB_004678f2
    JLE 0x00467996                      ; 004678f6
        ;   XREF to: 00467996 (CONDITIONAL_JUMP)  ; LAB_00467996
    MOV EAX,0x61ca25                    ; 004678fc | = "Check normals? [n] : "
    PUSH EAX                            ; 00467901 | = "Check normals? [n] : "
    PUSH 0x16                           ; 00467902
    PUSH 0x0                            ; 00467904
    PUSH 0x14                           ; 00467906
    LEA EAX,[EBP + 0xfffffedc]          ; 00467908
    PUSH EAX                            ; 0046790e
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046790f
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00467914
    XOR EAX,EAX                         ; 00467917
    MOV AL,byte ptr [EBP + 0xfffffedc]  ; 00467919
    PUSH EAX                            ; 0046791f
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00467920
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 00467925
    CMP EAX,0x59                        ; 00467928
    JNZ 0x00467934                      ; 0046792b
        ;   XREF to: 00467934 (CONDITIONAL_JUMP)  ; LAB_00467934
    MOV dword ptr [EBP + -0x10],0x1     ; 0046792d
    CMP dword ptr [EBP + -0x10],0x1     ; 00467934
        ;   Label: LAB_00467934
    JNZ 0x00467994                      ; 00467938
        ;   XREF to: 00467994 (CONDITIONAL_JUMP)  ; LAB_00467994
    MOV ECX,0x61ca3b                    ; 0046793a | = "Enter angle tolerance [90.0] : "
    PUSH ECX                            ; 0046793f | = "Enter angle tolerance [90.0] : "
    PUSH 0x2c                           ; 00467940
    PUSH 0x0                            ; 00467942
    PUSH 0x14                           ; 00467944
    LEA ECX,[EBP + 0xfffffedc]          ; 00467946
    PUSH ECX                            ; 0046794c
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046794d
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00467952
    MOV dword ptr [EBP + 0x18],0x42b40000 ; 00467955
    LEA EDI,[EBP + 0xfffffedc]          ; 0046795c
    SUB ECX,ECX                         ; 00467962
    DEC ECX                             ; 00467964
    XOR EAX,EAX                         ; 00467965
    SCASB.REPNE ES:EDI                  ; 00467967
    NOT ECX                             ; 00467969
    DEC ECX                             ; 0046796b
    TEST ECX,ECX                        ; 0046796c
    JZ 0x00467994                       ; 0046796e
        ;   XREF to: 00467994 (CONDITIONAL_JUMP)  ; LAB_00467994
    LEA EAX,[EBP + 0xfffffedc]          ; 00467970
    PUSH EAX                            ; 00467976
    CALL crt_string.c__strtod_FUN_005ff0f3 ; 00467977
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)  ; double crt_string.c__strtod_FUN_005ff0f3(char * str)
    MOV dword ptr [EBP + 0xfffffed4],EAX ; 0046797c
    MOV dword ptr [EBP + 0xfffffed8],EDX ; 00467982
    FLD double ptr [EBP + 0xfffffed4]   ; 00467988
    ADD ESP,0x4                         ; 0046798e
    FSTP float ptr [EBP + 0x18]         ; 00467991
    JMP 0x004679a9                      ; 00467994
        ;   XREF to: 004679a9 (UNCONDITIONAL_JUMP)  ; LAB_004679a9
        ;   Label: LAB_00467994
    FLD float ptr [EBP + 0x18]          ; 00467996
        ;   Label: LAB_00467996
    FLDZ                                ; 00467999
    FCOMPP                              ; 0046799b
    FNSTSW AX                           ; 0046799d
    SAHF                                ; 0046799f
    JA 0x004679a9                       ; 004679a0
        ;   XREF to: 004679a9 (CONDITIONAL_JUMP)  ; LAB_004679a9
    MOV dword ptr [EBP + -0x10],0x1     ; 004679a2
    CMP dword ptr [EBP + 0x1c],0x0      ; 004679a9
        ;   Label: LAB_004679a9
    JL 0x004679cb                       ; 004679ad
        ;   XREF to: 004679cb (CONDITIONAL_JUMP)  ; LAB_004679cb
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004679af
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 004679b4
    PUSH 0x0                            ; 004679b6
    MOV EAX,0x61ca5b                    ; 004679b8 | = "Scanning vertices..."
    PUSH EAX                            ; 004679bd | = "Scanning vertices..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004679be
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004679c3
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004679c6
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,[0x01626408]                ; 004679cb | g_VertexCount
        ;   Label: LAB_004679cb
    MOV dword ptr [EBP + -0x18],EAX     ; 004679d0
    PUSH 0x20b8                         ; 004679d3
    MOV EAX,0x61ca70                    ; 004679d8 | = "..\\shape\\design.c"
    PUSH EAX                            ; 004679dd | = "..\\shape\\design.c"
    MOV EAX,[0x01626408]                ; 004679de | g_VertexCount
    SHL EAX,0x3                         ; 004679e3
    PUSH EAX                            ; 004679e6
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004679e7
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004679ec
    MOV dword ptr [EBP + -0x8],EAX      ; 004679ef
    CMP dword ptr [EBP + -0x8],0x0      ; 004679f2
    JNZ 0x00467a1e                      ; 004679f6
        ;   XREF to: 00467a1e (CONDITIONAL_JUMP)  ; LAB_00467a1e
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004679f8
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 004679fd
    PUSH 0x0                            ; 004679ff
    MOV EAX,0x61ca82                    ; 00467a01 | = "ERROR: Can't allocate memory for vert..."
    PUSH EAX                            ; 00467a06 | = "ERROR: Can't allocate memory for vert..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00467a07
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00467a0c
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00467a0f
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00467a14
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x00467e5e                      ; 00467a19
        ;   XREF to: 00467e5e (UNCONDITIONAL_JUMP)  ; LAB_00467e5e
    MOV dword ptr [EBP + -0x24],0x0     ; 00467a1e
        ;   Label: LAB_00467a1e
    JMP 0x00467a2a                      ; 00467a25
        ;   XREF to: 00467a2a (UNCONDITIONAL_JUMP)  ; LAB_00467a2a
    INC dword ptr [EBP + -0x24]         ; 00467a27
        ;   Label: LAB_00467a27
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467a2a
        ;   Label: LAB_00467a2a
    CMP EAX,dword ptr [0x01626408]      ; 00467a2d | g_VertexCount
    JGE 0x00467a58                      ; 00467a33
        ;   XREF to: 00467a58 (CONDITIONAL_JUMP)  ; LAB_00467a58
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467a35
    SHL EAX,0x3                         ; 00467a38
    MOV EDX,dword ptr [EBP + -0x8]      ; 00467a3b
    ADD EDX,EAX                         ; 00467a3e
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467a40
    MOV dword ptr [EDX],EAX             ; 00467a43
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467a45
    SHL EAX,0x3                         ; 00467a48
    MOV EDX,dword ptr [EBP + -0x8]      ; 00467a4b
    ADD EDX,EAX                         ; 00467a4e
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467a50
    MOV dword ptr [EDX + 0x4],EAX       ; 00467a53
    JMP 0x00467a27                      ; 00467a56
        ;   XREF to: 00467a27 (UNCONDITIONAL_JUMP)  ; LAB_00467a27
    MOV EAX,0x4676f0                    ; 00467a58
        ;   Label: LAB_00467a58
    PUSH EAX                            ; 00467a5d
    PUSH 0x8                            ; 00467a5e
    PUSH dword ptr [0x01626408]         ; 00467a60 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x8]      ; 00467a66
    PUSH EAX                            ; 00467a69
    CALL crt_stdlib.c_qsort_FUN_005fdf38 ; 00467a6a
        ;   XREF to: 005fdf38 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 00467a6f
    CMP dword ptr [EBP + -0x10],0x0     ; 00467a72
    JZ 0x00467b40                       ; 00467a76
        ;   XREF to: 00467b40 (CONDITIONAL_JUMP)  ; LAB_00467b40
    PUSH 0x20dc                         ; 00467a7c
    MOV EAX,0x61cab9                    ; 00467a81 | = "..\\shape\\design.c"
    PUSH EAX                            ; 00467a86 | = "..\\shape\\design.c"
    MOV EAX,[0x01626408]                ; 00467a87 | g_VertexCount
    SHL EAX,0x2                         ; 00467a8c
    PUSH EAX                            ; 00467a8f
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00467a90
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00467a95
    MOV dword ptr [EBP + -0x4],EAX      ; 00467a98
    CMP dword ptr [EBP + -0x4],0x0      ; 00467a9b
    JNZ 0x00467ade                      ; 00467a9f
        ;   XREF to: 00467ade (CONDITIONAL_JUMP)  ; LAB_00467ade
    PUSH 0x20de                         ; 00467aa1
    MOV EAX,0x61cacb                    ; 00467aa6 | = "..\\shape\\design.c"
    PUSH EAX                            ; 00467aab | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x8]      ; 00467aac
    PUSH EAX                            ; 00467aaf
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00467ab0
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00467ab5
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00467ab8
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00467abd
    PUSH 0x0                            ; 00467abf
    MOV EAX,0x61cadd                    ; 00467ac1 | = "ERROR: Can't allocate memory for vert..."
    PUSH EAX                            ; 00467ac6 | = "ERROR: Can't allocate memory for vert..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00467ac7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00467acc
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00467acf
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00467ad4
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x00467e5e                      ; 00467ad9
        ;   XREF to: 00467e5e (UNCONDITIONAL_JUMP)  ; LAB_00467e5e
    MOV dword ptr [EBP + -0x24],0x0     ; 00467ade
        ;   Label: LAB_00467ade
    JMP 0x00467aea                      ; 00467ae5
        ;   XREF to: 00467aea (UNCONDITIONAL_JUMP)  ; LAB_00467aea
    INC dword ptr [EBP + -0x24]         ; 00467ae7
        ;   Label: LAB_00467ae7
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467aea
        ;   Label: LAB_00467aea
    CMP EAX,dword ptr [0x016e990c]      ; 00467aed | g_PolygonCount
    JGE 0x00467b40                      ; 00467af3
        ;   XREF to: 00467b40 (CONDITIONAL_JUMP)  ; LAB_00467b40
    IMUL EAX,dword ptr [EBP + -0x24],0x184 ; 00467af5
    MOV EDX,0x16e9910                   ; 00467afc | g_ModelPolygonData
    ADD EDX,EAX                         ; 00467b01
    MOV dword ptr [EBP + -0x1c],EDX     ; 00467b03
    MOV dword ptr [EBP + -0x20],0x0     ; 00467b06
    JMP 0x00467b12                      ; 00467b0d
        ;   XREF to: 00467b12 (UNCONDITIONAL_JUMP)  ; LAB_00467b12
    INC dword ptr [EBP + -0x20]         ; 00467b0f
        ;   Label: LAB_00467b0f
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467b12
        ;   Label: LAB_00467b12
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00467b15
    CMP EAX,dword ptr [EDX + 0xa4]      ; 00467b18 | DAT_016e99b4
    JGE 0x00467b3e                      ; 00467b1e
        ;   XREF to: 00467b3e (CONDITIONAL_JUMP)  ; LAB_00467b3e
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467b20
    SHL EAX,0x2                         ; 00467b23
    ADD EAX,dword ptr [EBP + -0x1c]     ; 00467b26
    MOV EAX,dword ptr [EAX + 0xb8]      ; 00467b29
    SHL EAX,0x2                         ; 00467b2f
    MOV EDX,dword ptr [EBP + -0x4]      ; 00467b32
    ADD EDX,EAX                         ; 00467b35
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467b37
    MOV dword ptr [EDX],EAX             ; 00467b3a
    JMP 0x00467b0f                      ; 00467b3c
        ;   XREF to: 00467b0f (UNCONDITIONAL_JUMP)  ; LAB_00467b0f
    JMP 0x00467ae7                      ; 00467b3e
        ;   XREF to: 00467ae7 (UNCONDITIONAL_JUMP)  ; LAB_00467ae7
        ;   Label: LAB_00467b3e
    MOV dword ptr [EBP + -0x24],0x0     ; 00467b40
        ;   Label: LAB_00467b40
    JMP 0x00467b4f                      ; 00467b47
        ;   XREF to: 00467b4f (UNCONDITIONAL_JUMP)  ; LAB_00467b4f
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467b49
        ;   Label: LAB_00467b49
    INC dword ptr [EBP + -0x24]         ; 00467b4c
    MOV EAX,[0x01626408]                ; 00467b4f | g_VertexCount
        ;   Label: LAB_00467b4f
    DEC EAX                             ; 00467b54
    CMP EAX,dword ptr [EBP + -0x24]     ; 00467b55
    JLE 0x00467cf5                      ; 00467b58
        ;   XREF to: 00467cf5 (CONDITIONAL_JUMP)  ; LAB_00467cf5
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467b5e
    SHL EAX,0x3                         ; 00467b61
    MOV ECX,dword ptr [EBP + -0x8]      ; 00467b64
    ADD ECX,EAX                         ; 00467b67
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467b69
    SHL EAX,0x3                         ; 00467b6c
    MOV EDX,dword ptr [EBP + -0x8]      ; 00467b6f
    ADD EDX,EAX                         ; 00467b72
    MOV EAX,dword ptr [ECX + 0x4]       ; 00467b74
    CMP EAX,dword ptr [EDX]             ; 00467b77
    JZ 0x00467b80                       ; 00467b79
        ;   XREF to: 00467b80 (CONDITIONAL_JUMP)  ; LAB_00467b80
    JMP 0x00467cf0                      ; 00467b7b
        ;   XREF to: 00467cf0 (UNCONDITIONAL_JUMP)  ; LAB_00467cf0
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467b80
        ;   Label: LAB_00467b80
    SHL EAX,0x3                         ; 00467b83
    ADD EAX,dword ptr [EBP + -0x8]      ; 00467b86
    IMUL EAX,dword ptr [EAX],0x14       ; 00467b89
    MOV EDX,0x162640c                   ; 00467b8c | g_LoadedVertices
    ADD EDX,EAX                         ; 00467b91
    MOV dword ptr [EBP + 0xfffffed0],EDX ; 00467b93
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467b99
    INC EAX                             ; 00467b9c
    MOV dword ptr [EBP + -0x20],EAX     ; 00467b9d
    JMP 0x00467ba8                      ; 00467ba0
        ;   XREF to: 00467ba8 (UNCONDITIONAL_JUMP)  ; LAB_00467ba8
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467ba2
        ;   Label: LAB_00467ba2
    INC dword ptr [EBP + -0x20]         ; 00467ba5
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467ba8
        ;   Label: LAB_00467ba8
    CMP EAX,dword ptr [0x01626408]      ; 00467bab | g_VertexCount
    JGE 0x00467cf0                      ; 00467bb1
        ;   XREF to: 00467cf0 (CONDITIONAL_JUMP)  ; LAB_00467cf0
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467bb7
    SHL EAX,0x3                         ; 00467bba
    MOV ECX,dword ptr [EBP + -0x8]      ; 00467bbd
    ADD ECX,EAX                         ; 00467bc0
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467bc2
    SHL EAX,0x3                         ; 00467bc5
    MOV EDX,dword ptr [EBP + -0x8]      ; 00467bc8
    ADD EDX,EAX                         ; 00467bcb
    MOV EAX,dword ptr [ECX + 0x4]       ; 00467bcd
    CMP EAX,dword ptr [EDX]             ; 00467bd0
    JZ 0x00467bd9                       ; 00467bd2
        ;   XREF to: 00467bd9 (CONDITIONAL_JUMP)  ; LAB_00467bd9
    JMP 0x00467ceb                      ; 00467bd4
        ;   XREF to: 00467ceb (UNCONDITIONAL_JUMP)  ; LAB_00467ceb
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467bd9
        ;   Label: LAB_00467bd9
    SHL EAX,0x3                         ; 00467bdc
    ADD EAX,dword ptr [EBP + -0x8]      ; 00467bdf
    IMUL EAX,dword ptr [EAX],0x14       ; 00467be2
    MOV EDX,0x162640c                   ; 00467be5 | g_LoadedVertices
    ADD EDX,EAX                         ; 00467bea
    MOV dword ptr [EBP + 0xfffffecc],EDX ; 00467bec
    MOV EAX,dword ptr [EBP + 0xfffffed0] ; 00467bf2
    FLD float ptr [EAX]                 ; 00467bf8 | g_LoadedVertices
    FADD float ptr [EBP + 0x14]         ; 00467bfa
    MOV EAX,dword ptr [EBP + 0xfffffecc] ; 00467bfd
    FCOMP float ptr [EAX]               ; 00467c03 | g_LoadedVertices
    FNSTSW AX                           ; 00467c05
    SAHF                                ; 00467c07
    JNC 0x00467c0f                      ; 00467c08
        ;   XREF to: 00467c0f (CONDITIONAL_JUMP)  ; LAB_00467c0f
    JMP 0x00467cf0                      ; 00467c0a
        ;   XREF to: 00467cf0 (UNCONDITIONAL_JUMP)  ; LAB_00467cf0
    MOV EAX,dword ptr [EBP + 0xfffffed0] ; 00467c0f
        ;   Label: LAB_00467c0f
    FLD float ptr [EAX]                 ; 00467c15 | g_LoadedVertices
    MOV EAX,dword ptr [EBP + 0xfffffecc] ; 00467c17
    FSUB float ptr [EAX]                ; 00467c1d | g_LoadedVertices
    FABS                                ; 00467c1f
    FLD float ptr [EBP + 0x14]          ; 00467c21
    FCOMPP                              ; 00467c24
    FNSTSW AX                           ; 00467c26
    SAHF                                ; 00467c28
    JBE 0x00467c49                      ; 00467c29
        ;   XREF to: 00467c49 (CONDITIONAL_JUMP)  ; LAB_00467c49
    MOV EAX,dword ptr [EBP + 0xfffffed0] ; 00467c2b
    FLD float ptr [EAX + 0x4]           ; 00467c31 | DAT_01626410
    MOV EAX,dword ptr [EBP + 0xfffffecc] ; 00467c34
    FSUB float ptr [EAX + 0x4]          ; 00467c3a | DAT_01626410
    FABS                                ; 00467c3d
    FLD float ptr [EBP + 0x14]          ; 00467c3f
    FCOMPP                              ; 00467c42
    FNSTSW AX                           ; 00467c44
    SAHF                                ; 00467c46
    JA 0x00467c4b                       ; 00467c47
        ;   XREF to: 00467c4b (CONDITIONAL_JUMP)  ; LAB_00467c4b
    JMP 0x00467c69                      ; 00467c49
        ;   XREF to: 00467c69 (UNCONDITIONAL_JUMP)  ; LAB_00467c69
        ;   Label: LAB_00467c49
    MOV EAX,dword ptr [EBP + 0xfffffed0] ; 00467c4b
        ;   Label: LAB_00467c4b
    FLD float ptr [EAX + 0x8]           ; 00467c51 | g_LoadedVertices[0].vertex.z
    MOV EAX,dword ptr [EBP + 0xfffffecc] ; 00467c54
    FSUB float ptr [EAX + 0x8]          ; 00467c5a | g_LoadedVertices[0].vertex.z
    FABS                                ; 00467c5d
    FLD float ptr [EBP + 0x14]          ; 00467c5f
    FCOMPP                              ; 00467c62
    FNSTSW AX                           ; 00467c64
    SAHF                                ; 00467c66
    JA 0x00467c6b                       ; 00467c67
        ;   XREF to: 00467c6b (CONDITIONAL_JUMP)  ; LAB_00467c6b
    JMP 0x00467cce                      ; 00467c69
        ;   XREF to: 00467cce (UNCONDITIONAL_JUMP)  ; LAB_00467cce
        ;   Label: LAB_00467c69
    CMP dword ptr [EBP + -0x10],0x0     ; 00467c6b
        ;   Label: LAB_00467c6b
    JZ 0x00467ccc                       ; 00467c6f
        ;   XREF to: 00467ccc (CONDITIONAL_JUMP)  ; LAB_00467ccc
    FLD float ptr [EBP + 0x18]          ; 00467c71
    FMUL double ptr [0x0061cb16]        ; 00467c74 | g_VertexReducerDegreesToRadiansConversion
    FCOS                                ; 00467c7a
    SUB ESP,0x8                         ; 00467c7c
    FSTP double ptr [ESP]               ; 00467c7f
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467c82
    SHL EAX,0x3                         ; 00467c85
    ADD EAX,dword ptr [EBP + -0x8]      ; 00467c88
    MOV EAX,dword ptr [EAX]             ; 00467c8b
    SHL EAX,0x2                         ; 00467c8d
    ADD EAX,dword ptr [EBP + -0x4]      ; 00467c90
    IMUL EAX,dword ptr [EAX],0x184      ; 00467c93
    MOV EDX,0x16e9910                   ; 00467c99 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00467c9e
    PUSH EAX                            ; 00467ca0
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467ca1
    SHL EAX,0x3                         ; 00467ca4
    ADD EAX,dword ptr [EBP + -0x8]      ; 00467ca7
    MOV EAX,dword ptr [EAX]             ; 00467caa
    SHL EAX,0x2                         ; 00467cac
    ADD EAX,dword ptr [EBP + -0x4]      ; 00467caf
    IMUL EAX,dword ptr [EAX],0x184      ; 00467cb2
    MOV EDX,0x16e9910                   ; 00467cb8 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00467cbd
    PUSH EAX                            ; 00467cbf
    CALL shape_design.c_validatePolygonNormals_FUN_00461d80 ; 00467cc0
        ;   XREF to: 00461d80 (UNCONDITIONAL_CALL)  ; int shape_design.c_validatePolygonNormals_FUN_00461d80(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double cos_tolerance)
    ADD ESP,0x10                        ; 00467cc5
    TEST EAX,EAX                        ; 00467cc8
    JZ 0x00467cce                       ; 00467cca
        ;   XREF to: 00467cce (CONDITIONAL_JUMP)  ; LAB_00467cce
    JMP 0x00467cd0                      ; 00467ccc
        ;   XREF to: 00467cd0 (UNCONDITIONAL_JUMP)  ; LAB_00467cd0
        ;   Label: LAB_00467ccc
    JMP 0x00467ceb                      ; 00467cce
        ;   XREF to: 00467ceb (UNCONDITIONAL_JUMP)  ; LAB_00467ceb
        ;   Label: LAB_00467cce
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467cd0
        ;   Label: LAB_00467cd0
    SHL EAX,0x3                         ; 00467cd3
    MOV EDX,dword ptr [EBP + -0x8]      ; 00467cd6
    ADD EDX,EAX                         ; 00467cd9
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467cdb
    SHL EAX,0x3                         ; 00467cde
    MOV ECX,dword ptr [EBP + -0x8]      ; 00467ce1
    ADD ECX,EAX                         ; 00467ce4
    MOV EAX,dword ptr [EDX]             ; 00467ce6
    MOV dword ptr [ECX + 0x4],EAX       ; 00467ce8
    JMP 0x00467ba2                      ; 00467ceb
        ;   XREF to: 00467ba2 (UNCONDITIONAL_JUMP)  ; LAB_00467ba2
        ;   Label: LAB_00467ceb
    JMP 0x00467b49                      ; 00467cf0
        ;   XREF to: 00467b49 (UNCONDITIONAL_JUMP)  ; LAB_00467b49
        ;   Label: LAB_00467cf0
    MOV EAX,0x4677c0                    ; 00467cf5
        ;   Label: LAB_00467cf5
    PUSH EAX                            ; 00467cfa
    PUSH 0x8                            ; 00467cfb
    PUSH dword ptr [0x01626408]         ; 00467cfd | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x8]      ; 00467d03
    PUSH EAX                            ; 00467d06
    CALL crt_stdlib.c_qsort_FUN_005fdf38 ; 00467d07
        ;   XREF to: 005fdf38 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 00467d0c
    MOV dword ptr [EBP + -0x24],0x0     ; 00467d0f
    JMP 0x00467d1b                      ; 00467d16
        ;   XREF to: 00467d1b (UNCONDITIONAL_JUMP)  ; LAB_00467d1b
    INC dword ptr [EBP + -0x24]         ; 00467d18
        ;   Label: LAB_00467d18
    MOV EAX,dword ptr [EBP + -0x24]     ; 00467d1b
        ;   Label: LAB_00467d1b
    CMP EAX,dword ptr [0x016e990c]      ; 00467d1e | g_PolygonCount
    JGE 0x00467d80                      ; 00467d24
        ;   XREF to: 00467d80 (CONDITIONAL_JUMP)  ; LAB_00467d80
    IMUL EAX,dword ptr [EBP + -0x24],0x184 ; 00467d26
    MOV EDX,0x16e9910                   ; 00467d2d | g_ModelPolygonData
    ADD EDX,EAX                         ; 00467d32
    MOV dword ptr [EBP + -0x1c],EDX     ; 00467d34
    MOV dword ptr [EBP + -0x20],0x0     ; 00467d37
    JMP 0x00467d43                      ; 00467d3e
        ;   XREF to: 00467d43 (UNCONDITIONAL_JUMP)  ; LAB_00467d43
    INC dword ptr [EBP + -0x20]         ; 00467d40
        ;   Label: LAB_00467d40
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467d43
        ;   Label: LAB_00467d43
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00467d46
    CMP EAX,dword ptr [EDX + 0xa4]      ; 00467d49 | DAT_016e99b4
    JGE 0x00467d7e                      ; 00467d4f
        ;   XREF to: 00467d7e (CONDITIONAL_JUMP)  ; LAB_00467d7e
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467d51
    SHL EAX,0x2                         ; 00467d54
    ADD EAX,dword ptr [EBP + -0x1c]     ; 00467d57
    MOV EAX,dword ptr [EAX + 0xb8]      ; 00467d5a
    SHL EAX,0x3                         ; 00467d60
    MOV EDX,dword ptr [EBP + -0x8]      ; 00467d63
    ADD EDX,EAX                         ; 00467d66
    MOV EAX,dword ptr [EBP + -0x20]     ; 00467d68
    SHL EAX,0x2                         ; 00467d6b
    MOV ECX,dword ptr [EBP + -0x1c]     ; 00467d6e
    ADD ECX,EAX                         ; 00467d71
    MOV EAX,dword ptr [EDX + 0x4]       ; 00467d73
    MOV dword ptr [ECX + 0xb8],EAX      ; 00467d76
    JMP 0x00467d40                      ; 00467d7c
        ;   XREF to: 00467d40 (UNCONDITIONAL_JUMP)  ; LAB_00467d40
    JMP 0x00467d18                      ; 00467d7e
        ;   XREF to: 00467d18 (UNCONDITIONAL_JUMP)  ; LAB_00467d18
        ;   Label: LAB_00467d7e
    CMP dword ptr [EBP + -0x10],0x0     ; 00467d80
        ;   Label: LAB_00467d80
    JZ 0x00467d9d                       ; 00467d84
        ;   XREF to: 00467d9d (CONDITIONAL_JUMP)  ; LAB_00467d9d
    PUSH 0x2138                         ; 00467d86
    MOV EAX,0x61cb1e                    ; 00467d8b | = "..\\shape\\design.c"
    PUSH EAX                            ; 00467d90 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x4]      ; 00467d91
    PUSH EAX                            ; 00467d94
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00467d95
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00467d9a
    PUSH 0x213c                         ; 00467d9d
        ;   Label: LAB_00467d9d
    MOV EAX,0x61cb30                    ; 00467da2 | = "..\\shape\\design.c"
    PUSH EAX                            ; 00467da7 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x8]      ; 00467da8
    PUSH EAX                            ; 00467dab
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00467dac
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00467db1
    CALL shape_design.c_removeUnusedVertices_FUN_00463830 ; 00467db4
        ;   XREF to: 00463830 (UNCONDITIONAL_CALL)  ; void shape_design.c_removeUnusedVertices_FUN_00463830()
    MOV EAX,[0x01626408]                ; 00467db9 | g_VertexCount
    CMP EAX,dword ptr [EBP + -0x18]     ; 00467dbe
    JZ 0x00467dc8                       ; 00467dc1
        ;   XREF to: 00467dc8 (CONDITIONAL_JUMP)  ; LAB_00467dc8
    JMP 0x004679cb                      ; 00467dc3
        ;   XREF to: 004679cb (UNCONDITIONAL_JUMP)  ; LAB_004679cb
    CALL shape_design.c_removeDegenerateTriangles_FUN_00463a20 ; 00467dc8
        ;   XREF to: 00463a20 (UNCONDITIONAL_CALL)  ; void shape_design.c_removeDegenerateTriangles_FUN_00463a20()
        ;   Label: LAB_00467dc8
    INC dword ptr [0x01e528a4]          ; 00467dcd | g_VertexOptimizationPasses
    MOV EAX,dword ptr [EBP + -0xc]      ; 00467dd3
    SUB EAX,dword ptr [0x016e990c]      ; 00467dd6 | g_PolygonCount
    PUSH EAX                            ; 00467ddc
    PUSH dword ptr [0x01e528a4]         ; 00467ddd | g_VertexOptimizationPasses
    PUSH dword ptr [0x01626408]         ; 00467de3 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x14]     ; 00467de9
    PUSH EAX                            ; 00467dec
    MOV EAX,0x61cb42                    ; 00467ded | = "Original vertices: %d    New total: %..."
    PUSH EAX                            ; 00467df2 | = "Original vertices: %d    New total: %..."
    LEA EAX,[EBP + 0xfffffedc]          ; 00467df3
    PUSH EAX                            ; 00467df9
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00467dfa
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 00467dff
    CMP dword ptr [EBP + 0x1c],0x0      ; 00467e02
    JLE 0x00467e35                      ; 00467e06
        ;   XREF to: 00467e35 (CONDITIONAL_JUMP)  ; LAB_00467e35
    MOV ESI,0x61cb8e                    ; 00467e08 | = "\n\nHit a key..."
    LEA EDI,[EBP + 0xfffffedc]          ; 00467e0d
    PUSH EDI                            ; 00467e13
    SUB ECX,ECX                         ; 00467e14
    DEC ECX                             ; 00467e16
    MOV AL,0x0                          ; 00467e17
    SCASB.REPNE ES:EDI                  ; 00467e19
    DEC EDI                             ; 00467e1b
    MOV AL,byte ptr [ESI]               ; 00467e1c | = "\n\nHit a key..." | s_Hit_a_key..._0061cb90
        ;   Label: LAB_00467e1c
    MOV byte ptr [EDI],AL               ; 00467e1e
    CMP AL,0x0                          ; 00467e20
    JZ 0x00467e34                       ; 00467e22
        ;   XREF to: 00467e34 (CONDITIONAL_JUMP)  ; LAB_00467e34
    MOV AL,byte ptr [ESI + 0x1]         ; 00467e24 | s_Hit_a_key..._0061cb8f | s_it_a_key..._0061cb91
    ADD ESI,0x2                         ; 00467e27
    MOV byte ptr [EDI + 0x1],AL         ; 00467e2a
    ADD EDI,0x2                         ; 00467e2d
    CMP AL,0x0                          ; 00467e30
    JNZ 0x00467e1c                      ; 00467e32
        ;   XREF to: 00467e1c (CONDITIONAL_JUMP)  ; LAB_00467e1c
    POP EDI                             ; 00467e34
        ;   Label: LAB_00467e34
    CMP dword ptr [EBP + 0x1c],0x0      ; 00467e35
        ;   Label: LAB_00467e35
    JL 0x00467e53                       ; 00467e39
        ;   XREF to: 00467e53 (CONDITIONAL_JUMP)  ; LAB_00467e53
    PUSH 0x0                            ; 00467e3b
    PUSH 0x0                            ; 00467e3d
    LEA EAX,[EBP + 0xfffffedc]          ; 00467e3f
    PUSH EAX                            ; 00467e45
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00467e46
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00467e4b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00467e4e
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CMP dword ptr [EBP + 0x1c],0x0      ; 00467e53
        ;   Label: LAB_00467e53
    JLE 0x00467e5e                      ; 00467e57
        ;   XREF to: 00467e5e (CONDITIONAL_JUMP)  ; LAB_00467e5e
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00467e59
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV ESP,EBP                         ; 00467e5e
        ;   Label: LAB_00467e5e
    POP EBP                             ; 00467e60
    POP EDI                             ; 00467e61
    POP ESI                             ; 00467e62
    POP EBX                             ; 00467e63
    RET                                 ; 00467e64

