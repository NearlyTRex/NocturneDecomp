; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_loadFromFile_FUN_004825c0(CDemonPart *this_ptr,_FILE *file_handle,CVector3f *offset_position)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; CVector3f *      Stack[0xc]:4   offset_position
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_loadPartAtGridIndex_FUN_00494710 at 00494790
;
; Referenced Globals:
;   TerminatedCString s_newformat_006217ef
;   double g_WorldToVertexScale = 256
;   double g_VertexToWorldScale = 0.00390625
;   SMRGLPrimitiveQuad[5000] g_FaceConversionBuffer
;   undefined4 g_FaceConversionBuffer[0].base.base.count
;   undefined4 g_FaceConversionBuffer[0].base.surface_normal.A
;   undefined4 g_FaceConversionBuffer[0].base.surface_normal.B
;   undefined4 g_FaceConversionBuffer[0].base.surface_normal.C
;   undefined4 g_FaceConversionBuffer[0].base.surface_normal.D
;   undefined4 g_FaceConversionBuffer[0].vertices[0].vertex_index
;   undefined4 g_FaceConversionBuffer[0].vertices[1].vertex_index
;   undefined4 g_FaceConversionBuffer[0].vertices[2].vertex_index
;   undefined4 g_FaceConversionBuffer[0].vertices[3].vertex_index
;   undefined4 DAT_02c14d80
;   undefined4 DAT_02c14d84
;   ... and 3 more
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_alloc_FUN_00482180
;   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_fread_FUN_005fd990
;   crt_string.c__strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004825c0
        ;   Label: core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0
    PUSH ESI                            ; 004825c1
    PUSH EDI                            ; 004825c2
    PUSH EBP                            ; 004825c3
    SUB ESP,0xc                         ; 004825c4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004825c7
    MOV EBP,dword ptr [ESP + 0x24]      ; 004825cb
    PUSH EBP                            ; 004825cf
    PUSH 0x1                            ; 004825d0
    PUSH 0x20                           ; 004825d2
    PUSH EBX                            ; 004825d4
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004825d5
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004825da
    PUSH EBP                            ; 004825dd
    PUSH 0x1                            ; 004825de
    PUSH 0x4                            ; 004825e0
    LEA EAX,[EBX + 0x20]                ; 004825e2
    PUSH EAX                            ; 004825e5
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004825e6
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004825eb
    PUSH EBP                            ; 004825ee
    PUSH 0x1                            ; 004825ef
    PUSH 0x4                            ; 004825f1
    LEA EAX,[EBX + 0x24]                ; 004825f3
    PUSH EAX                            ; 004825f6
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004825f7
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004825fc
    PUSH EBX                            ; 004825ff
    CALL core_dpart.cpp_CDemonPart_alloc_FUN_00482180 ; 00482600
        ;   XREF to: 00482180 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_alloc_FUN_00482180(CDemonPart * this_ptr)
    ADD ESP,0x4                         ; 00482605
    PUSH EBP                            ; 00482608
    PUSH 0x1                            ; 00482609
    PUSH 0xc                            ; 0048260b
    LEA EAX,[EBX + 0x33c]               ; 0048260d
    PUSH EAX                            ; 00482613
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00482614
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00482619
    PUSH EBP                            ; 0048261c
    PUSH 0x1                            ; 0048261d
    PUSH 0xc                            ; 0048261f
    LEA EAX,[EBX + 0x348]               ; 00482621
    PUSH EAX                            ; 00482627
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00482628
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0048262d
    PUSH EBP                            ; 00482630
    PUSH 0x1                            ; 00482631
    PUSH 0xc                            ; 00482633
    LEA EAX,[EBX + 0x354]               ; 00482635
    PUSH EAX                            ; 0048263b
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0048263c
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00482641
    PUSH EBP                            ; 00482644
    PUSH 0x1                            ; 00482645
    PUSH 0xc                            ; 00482647
    LEA EAX,[EBX + 0x360]               ; 00482649
    PUSH EAX                            ; 0048264f
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00482650
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00482655
    PUSH EBP                            ; 00482658
    PUSH 0x1                            ; 00482659
    PUSH 0x4                            ; 0048265b
    LEA EAX,[EBX + 0x38]                ; 0048265d
    PUSH EAX                            ; 00482660
    XOR ESI,ESI                         ; 00482661
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00482663
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV EDX,dword ptr [EBX + 0x38]      ; 00482668
    ADD ESP,0x10                        ; 0048266b
    TEST EDX,EDX                        ; 0048266e
    JLE 0x00482690                      ; 00482670
        ;   XREF to: 00482690 (CONDITIONAL_JUMP)  ; LAB_00482690
    LEA EDI,[EBX + 0x44]                ; 00482672
    PUSH EBP                            ; 00482675
        ;   Label: LAB_00482675
    PUSH 0x1                            ; 00482676
    PUSH 0x10                           ; 00482678
    PUSH EDI                            ; 0048267a
    INC ESI                             ; 0048267b
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0048267c
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00482681
    MOV ECX,dword ptr [EBX + 0x38]      ; 00482684
    ADD EDI,0x18                        ; 00482687
    CMP ESI,ECX                         ; 0048268a
    JL 0x00482675                       ; 0048268c
        ;   XREF to: 00482675 (CONDITIONAL_JUMP)  ; LAB_00482675
    MOV EAX,EAX                         ; 0048268e
    PUSH EBP                            ; 00482690
        ;   Label: LAB_00482690
    PUSH 0x1                            ; 00482691
    PUSH 0x4                            ; 00482693
    LEA EAX,[EBX + 0x28]                ; 00482695
    PUSH EAX                            ; 00482698
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00482699
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0048269e
    PUSH EBP                            ; 004826a1
    MOV ESI,dword ptr [EBX + 0x20]      ; 004826a2
    PUSH ESI                            ; 004826a5
    PUSH 0xc                            ; 004826a6
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004826a8
    PUSH EDI                            ; 004826ab
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004826ac
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004826b1
    PUSH EBP                            ; 004826b4
    MOV EAX,dword ptr [EBX + 0x20]      ; 004826b5
    PUSH EAX                            ; 004826b8
    PUSH 0xc                            ; 004826b9
    MOV EDX,dword ptr [EBX + 0x30]      ; 004826bb
    PUSH EDX                            ; 004826be
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004826bf
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004826c4
    PUSH 0x6217ef                       ; 004826c7 | = "newformat"
    PUSH EBX                            ; 004826cc
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004826cd
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004826d2
    TEST EAX,EAX                        ; 004826d5
    JZ 0x00482893                       ; 004826d7
        ;   XREF to: 00482893 (CONDITIONAL_JUMP)  ; LAB_00482893
    PUSH EBP                            ; 004826dd
    MOV EDI,dword ptr [EBX + 0x24]      ; 004826de
    PUSH EDI                            ; 004826e1
    PUSH 0x48                           ; 004826e2
    PUSH 0x2c14d30                      ; 004826e4 | g_FaceConversionBuffer
    XOR EDI,EDI                         ; 004826e9
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004826eb
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV EBP,dword ptr [EBX + 0x24]      ; 004826f0
    ADD ESP,0x10                        ; 004826f3
    TEST EBP,EBP                        ; 004826f6
    JLE 0x0048278a                      ; 004826f8
        ;   XREF to: 0048278a (CONDITIONAL_JUMP)  ; LAB_0048278a
    XOR EDX,EDX                         ; 004826fe
    XOR EAX,EAX                         ; 00482700
    MOV ESI,dword ptr [EBX + 0x34]      ; 00482702
        ;   Label: LAB_00482702
    LEA ECX,[ESI + EAX*0x1]             ; 00482705
    MOV ESI,dword ptr [EDX + 0x2c14d38] ; 00482708 | g_FaceConversionBuffer[0].base.surface_normal.A | DAT_02c14d80
    MOV dword ptr [ECX],ESI             ; 0048270e
    MOV ESI,dword ptr [EBX + 0x34]      ; 00482710
    LEA ECX,[ESI + EAX*0x1]             ; 00482713
    MOV ESI,dword ptr [EDX + 0x2c14d3c] ; 00482716 | g_FaceConversionBuffer[0].base.surface_normal.B | DAT_02c14d84
    MOV dword ptr [ECX + 0x4],ESI       ; 0048271c
    MOV ECX,dword ptr [EBX + 0x34]      ; 0048271f
    MOV ESI,dword ptr [EDX + 0x2c14d40] ; 00482722 | g_FaceConversionBuffer[0].base.surface_normal.C | DAT_02c14d88
    MOV dword ptr [ECX + EAX*0x1 + 0x8],ESI ; 00482728
    MOV ECX,dword ptr [EBX + 0x34]      ; 0048272c
    MOV ESI,dword ptr [EDX + 0x2c14d44] ; 0048272f | g_FaceConversionBuffer[0].base.surface_normal.D | DAT_02c14d8c
    MOV dword ptr [ECX + EAX*0x1 + 0xc],ESI ; 00482735
    MOV ECX,dword ptr [EBX + 0x34]      ; 00482739
    MOV ESI,dword ptr [EDX + 0x2c14d48] ; 0048273c | g_FaceConversionBuffer[0].vertices[0].vertex_index | DAT_02c14d90
    MOV dword ptr [ECX + EAX*0x1 + 0x10],ESI ; 00482742
    MOV ECX,dword ptr [EBX + 0x34]      ; 00482746
    MOV ESI,dword ptr [EDX + 0x2c14d54] ; 00482749 | g_FaceConversionBuffer[0].vertices[1].vertex_index
    MOV dword ptr [ECX + EAX*0x1 + 0x14],ESI ; 0048274f
    MOV ECX,dword ptr [EBX + 0x34]      ; 00482753
    MOV ESI,dword ptr [EDX + 0x2c14d60] ; 00482756 | g_FaceConversionBuffer[0].vertices[2].vertex_index
    MOV dword ptr [ECX + EAX*0x1 + 0x18],ESI ; 0048275c
    CMP dword ptr [EDX + 0x2c14d34],0x3 ; 00482760 | g_FaceConversionBuffer[0].base.base.count
    JNZ 0x0048287f                      ; 00482767
        ;   XREF to: 0048287f (CONDITIONAL_JUMP)  ; LAB_0048287f
    MOV ESI,dword ptr [EBX + 0x34]      ; 0048276d
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0xffffffff ; 00482770
    ADD EAX,0x20                        ; 00482778
        ;   Label: LAB_00482778
    INC EDI                             ; 0048277b
    MOV ECX,dword ptr [EBX + 0x24]      ; 0048277c
    ADD EDX,0x48                        ; 0048277f
    CMP EDI,ECX                         ; 00482782
    JL 0x00482702                       ; 00482784
        ;   XREF to: 00482702 (CONDITIONAL_JUMP)  ; LAB_00482702
    MOV EDI,dword ptr [ESP + 0x28]      ; 0048278a
        ;   Label: LAB_0048278a
    TEST EDI,EDI                        ; 0048278e
    JZ 0x00482810                       ; 00482790
        ;   XREF to: 00482810 (CONDITIONAL_JUMP)  ; LAB_00482810
    FLD double ptr [0x006217fe]         ; 00482796 | g_WorldToVertexScale
    FLD float ptr [EDI]                 ; 0048279c
    FMUL ST1                            ; 0048279e
    FLD float ptr [EDI + 0x4]           ; 004827a0
    FMUL ST2                            ; 004827a3
    FLD float ptr [EDI + 0x8]           ; 004827a5
    FMULP ST3                           ; 004827a8
    MOV EBP,dword ptr [EBX + 0x20]      ; 004827aa
    XOR ESI,ESI                         ; 004827ad
    FXCH                                ; 004827af
    CALL crt_math.c_round_FUN_005fe6b0  ; 004827b1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004827b6
    CALL crt_math.c_round_FUN_005fe6b0  ; 004827b8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 004827bd
    CALL crt_math.c_round_FUN_005fe6b0  ; 004827bf
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 004827c4
    FISTP dword ptr [ESP + 0x4]         ; 004827c6
    FXCH                                ; 004827ca
    FISTP dword ptr [ESP + 0x8]         ; 004827cc
    FISTP dword ptr [ESP]               ; 004827d0
    TEST EBP,EBP                        ; 004827d3
    JLE 0x00482810                      ; 004827d5
        ;   XREF to: 00482810 (CONDITIONAL_JUMP)  ; LAB_00482810
    XOR EDX,EDX                         ; 004827d7
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004827d9
        ;   Label: LAB_004827d9
    MOV EAX,dword ptr [ESP]             ; 004827dc
    SUB dword ptr [EDX + EDI*0x1],EAX   ; 004827df
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004827e2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004827e5
    SUB dword ptr [EDX + EDI*0x1 + 0x4],EAX ; 004827e9
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004827ed
    MOV EAX,dword ptr [ESP + 0x8]       ; 004827f0
    SUB dword ptr [EDX + EDI*0x1 + 0x8],EAX ; 004827f4
    INC ESI                             ; 004827f8
    MOV EDI,dword ptr [EBX + 0x20]      ; 004827f9
    ADD EDX,0xc                         ; 004827fc
    CMP ESI,EDI                         ; 004827ff
    JL 0x004827d9                       ; 00482801
        ;   XREF to: 004827d9 (CONDITIONAL_JUMP)  ; LAB_004827d9
    LEA EAX,[EAX]                       ; 00482803
    LEA EDX,[EDX]                       ; 00482809
    NOP                                 ; 0048280f
    PUSH EBX                            ; 00482810
        ;   Label: LAB_00482810
    CALL core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0 ; 00482811
        ;   XREF to: 004824f0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart * this_ptr)
    FLD double ptr [0x00621806]         ; 00482816 | g_VertexToWorldScale
    FILD dword ptr [EBX + 0x354]        ; 0048281c
    FMUL ST1                            ; 00482822
    FILD dword ptr [EBX + 0x358]        ; 00482824
    FMUL ST2                            ; 0048282a
    FILD dword ptr [EBX + 0x35c]        ; 0048282c
    FMUL ST3                            ; 00482832
    FILD dword ptr [EBX + 0x360]        ; 00482834
    FMUL ST4                            ; 0048283a
    FILD dword ptr [EBX + 0x364]        ; 0048283c
    FMUL ST5                            ; 00482842
    FILD dword ptr [EBX + 0x368]        ; 00482844
    FMULP ST6                           ; 0048284a
    ADD ESP,0x4                         ; 0048284c
    FXCH ST4                            ; 0048284f
    FSTP float ptr [EBX + 0x36c]        ; 00482851
    FXCH ST2                            ; 00482857
    FSTP float ptr [EBX + 0x370]        ; 00482859
    FSTP float ptr [EBX + 0x374]        ; 0048285f
    FSTP float ptr [EBX + 0x378]        ; 00482865
    FSTP float ptr [EBX + 0x37c]        ; 0048286b
    FSTP float ptr [EBX + 0x380]        ; 00482871
    ADD ESP,0xc                         ; 00482877
    POP EBP                             ; 0048287a
    POP EDI                             ; 0048287b
    POP ESI                             ; 0048287c
    POP EBX                             ; 0048287d
    RET                                 ; 0048287e
    MOV ESI,dword ptr [EBX + 0x34]      ; 0048287f
        ;   Label: LAB_0048287f
    LEA ECX,[ESI + EAX*0x1]             ; 00482882
    MOV ESI,dword ptr [EDX + 0x2c14d6c] ; 00482885 | g_FaceConversionBuffer[0].vertices[3].vertex_index
    MOV dword ptr [ECX + 0x1c],ESI      ; 0048288b
    JMP 0x00482778                      ; 0048288e
        ;   XREF to: 00482778 (UNCONDITIONAL_JUMP)  ; LAB_00482778
    PUSH EBP                            ; 00482893
        ;   Label: LAB_00482893
    MOV ECX,dword ptr [EBX + 0x24]      ; 00482894
    PUSH ECX                            ; 00482897
    PUSH 0x20                           ; 00482898
    MOV ESI,dword ptr [EBX + 0x34]      ; 0048289a
    PUSH ESI                            ; 0048289d
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0048289e
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004828a3
    JMP 0x0048278a                      ; 004828a6
        ;   XREF to: 0048278a (UNCONDITIONAL_JUMP)  ; LAB_0048278a

