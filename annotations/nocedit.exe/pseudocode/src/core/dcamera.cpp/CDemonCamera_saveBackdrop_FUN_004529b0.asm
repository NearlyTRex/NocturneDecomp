; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera * this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x274]:1  local_274
; undefined1       Stack[-0x174]:1  local_174
; undefined1       Stack[-0x130]:1  local_130
; undefined4       Stack[-0x114]:4  local_114
; undefined1       Stack[-0xf8]:1  local_f8
; undefined1       Stack[-0x94]:1  local_94
; undefined1       Stack[-0x90]:1  local_90
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360 at 0044e5a7
;
; Referenced Globals:
;   TerminatedCString s_s_fog_0061a34a
;   TerminatedCString s_rb_0061a351
;   TerminatedCString s_backdrop_0061a354
;   TerminatedCString s_core_dcamera_cpp_0061a35d
;   TerminatedCString s_backdrop_s_0061a371
;   TerminatedCString s_core_dcamera_cpp_0061a37d
;   TerminatedCString s_Can_t_create_s_0061a391
;   TerminatedCString s_core_dcamera_cpp_0061a3a1
;   TerminatedCString s_Error_compressing_s_0061a3b5
;   TerminatedCString s_core_dcamera_cpp_0061a3ca
;   TerminatedCString s_Not_all_bytes_consumed_c_0061a3de
;   TerminatedCString s_core_dcamera_cpp_0061a404
;   TerminatedCString s_Error_writing_compressed_0061a418
;   double g_BackdropColorMultiplier = 256
;   int g_DefaultStreamBufferSize = 0x1a4
;   ... and 26 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020
;   core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70
;   core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
;   core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_fstream.cpp_ofstream_constructor_FUN_005ff710
;   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdio.c_stream_write_internal_FUN_005ffcb3
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   support_codec.cpp_CCodec_dtor_FUN_0043e9b0
;   support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30
;   support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004529b0
        ;   Label: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0
    PUSH ESI                            ; 004529b1
    PUSH EDI                            ; 004529b2
    PUSH EBP                            ; 004529b3
    SUB ESP,0x264                       ; 004529b4
    MOV EDX,0x1                         ; 004529ba
    PUSH 0x1519384                      ; 004529bf | SFogGrid g_CameraFogGrid
    MOV ESI,0x10                        ; 004529c4
    XOR ECX,ECX                         ; 004529c9
    MOV dword ptr [0x013bbe2c],EDX      ; 004529cb | int g_BackdropSaveActive
    MOV dword ptr [0x01519378],ECX      ; 004529d1 | int g_ImageProcessingState1
    MOV dword ptr [0x0151937c],ECX      ; 004529d7 | int g_ImageProcessingState2
    CALL core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70 ; 004529dd | void core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70(SFogGrid * fog)
        ;   XREF to: 0044bb70 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0151a390]                ; 004529e2 | g_CameraFogGrid.scroll_vector.x
    MOV EDI,dword ptr [0x0151a394]      ; 004529e7 | g_CameraFogGrid.scroll_vector.y
    MOV EBP,dword ptr [0x0151a398]      ; 004529ed | g_CameraFogGrid.scroll_vector.z
    ADD ESP,0x4                         ; 004529f3
    OR EAX,EDI                          ; 004529f6
    MOV dword ptr [0x01519380],ESI      ; 004529f8 | int g_ImageBytesPerPixel
    OR EAX,EBP                          ; 004529fe
    JNZ 0x00452a0c                      ; 00452a00 | LAB_00452a0c
        ;   XREF to: 00452a0c (CONDITIONAL_JUMP)
    MOV dword ptr [0x01519380],0x1      ; 00452a02 | int g_ImageBytesPerPixel
    MOV EAX,dword ptr [ESP + 0x278]     ; 00452a0c
        ;   Label: LAB_00452a0c
    ADD EAX,0x40                        ; 00452a13
    PUSH EAX                            ; 00452a16
    PUSH 0x61a34a                       ; 00452a17 | = "%s.fog" | s_s_fog_0061a34a = %s.fog
    LEA EAX,[ESP + 0x8]                 ; 00452a1c
    PUSH EAX                            ; 00452a20
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00452a21 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00452a26
    PUSH 0x61a351                       ; 00452a29 | = "rb" | s_rb_0061a351 = rb
    LEA EAX,[ESP + 0x4]                 ; 00452a2e
    PUSH EAX                            ; 00452a32
    PUSH 0x61a354                       ; 00452a33 | = "backdrop" | s_backdrop_0061a354 = backdrop
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00452a38 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00452a3d
    TEST EAX,EAX                        ; 00452a40
    JNZ 0x00452f77                      ; 00452a42 | LAB_00452f77
        ;   XREF to: 00452f77 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00452a48
    PUSH EAX                            ; 00452a4a
    PUSH 0x61a371                       ; 00452a4b | = "backdrop\\%s" | s_backdrop_s_0061a371 = backdrop\%s
    LEA EAX,[ESP + 0x184]               ; 00452a50
    PUSH EAX                            ; 00452a57
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00452a58 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00452a5d
    MOV EDX,dword ptr [0x00665c50]      ; 00452a60 | int g_DefaultStreamBufferSize
    PUSH EDX                            ; 00452a66
    PUSH 0x110                          ; 00452a67
    LEA EAX,[ESP + 0x184]               ; 00452a6c
    PUSH EAX                            ; 00452a73
    PUSH 0x0                            ; 00452a74
    LEA EAX,[ESP + 0x110]               ; 00452a76
    PUSH EAX                            ; 00452a7d
    CALL crt_fstream.cpp_ofstream_constructor_FUN_005ff710 ; 00452a7e | void crt_fstream.cpp_ofstream_constructor_FUN_005ff710(ofstream * this_ptr, int ctor_flags, int fd, int mode, ...)
        ;   XREF to: 005ff710 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00452a83
    CMP dword ptr [ESP + 0x160],0x0     ; 00452a86
    JZ 0x00452abb                       ; 00452a8e | LAB_00452abb
        ;   XREF to: 00452abb (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x17c]               ; 00452a90
    PUSH EAX                            ; 00452a97
    MOV EBX,0x61a37d                    ; 00452a98 | = "..\\core\\dcamera.cpp" | s_core_dcamera_cpp_0061a37d = ..\core\dcamera.cpp
    MOV ESI,0x12dc                      ; 00452a9d
    PUSH 0x61a391                       ; 00452aa2 | = "Can't create %s" | s_Can_t_create_s_0061a391 = Can't create %s
    MOV dword ptr [0x02f0ca48],EBX      ; 00452aa7 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00452aad | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00452ab3 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00452ab8
    PUSH 0x1000                         ; 00452abb
        ;   Label: LAB_00452abb
    PUSH 0x1519384                      ; 00452ac0 | SFogGrid g_CameraFogGrid
    LEA EAX,[ESP + 0x14c]               ; 00452ac5
    PUSH EAX                            ; 00452acc
    CALL crt_stdio.c_stream_write_internal_FUN_005ffcb3 ; 00452acd | FILE * crt_stdio.c_stream_write_internal_FUN_005ffcb3(FILE * stream, void * buffer, SIZE_T count)
        ;   XREF to: 005ffcb3 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x0151a3a0]      ; 00452ad2 | g_CameraFogGrid.density_multiplier
    ADD ESP,0xc                         ; 00452ad8
    TEST EDI,EDI                        ; 00452adb
    JZ 0x00452f95                       ; 00452add | LAB_00452f95
        ;   XREF to: 00452f95 (CONDITIONAL_JUMP)
    MOV EAX,[0x0066ed6c]                ; 00452ae3 | = "EFD" | s_EFD_0066ed6c = EFD
    PUSH 0x3                            ; 00452ae8
    MOV dword ptr [ESP + 0x228],EAX     ; 00452aea | LAB_00444645
    LEA EAX,[ESP + 0x228]               ; 00452af1
    PUSH EAX                            ; 00452af8
    LEA EAX,[ESP + 0x14c]               ; 00452af9
    PUSH EAX                            ; 00452b00
    CALL crt_stdio.c_stream_write_internal_FUN_005ffcb3 ; 00452b01 | FILE * crt_stdio.c_stream_write_internal_FUN_005ffcb3(FILE * stream, void * buffer, SIZE_T count)
        ;   XREF to: 005ffcb3 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00452b06
    MOV EAX,dword ptr [ESP + 0x278]     ; 00452b09
    FLD double ptr [0x0061a43a]         ; 00452b10 | double g_BackdropColorMultiplier
    FLD float ptr [EAX + 0x4]           ; 00452b16
    FMUL ST1                            ; 00452b19
    CALL crt_math.c_round_FUN_005fe6b0  ; 00452b1b | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x218]       ; 00452b20
    FLD float ptr [EAX + 0x8]           ; 00452b27
    FMUL ST1                            ; 00452b2a
    PUSH 0x6                            ; 00452b2c
    CALL crt_math.c_round_FUN_005fe6b0  ; 00452b2e | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x220]       ; 00452b33
    FMUL float ptr [EAX + 0xc]          ; 00452b3a
    PUSH 0x10000                        ; 00452b3d
    LEA EAX,[ESP + 0x1e8]               ; 00452b42
    CALL crt_math.c_round_FUN_005fe6b0  ; 00452b49 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    PUSH EAX                            ; 00452b4e
    FISTP dword ptr [ESP + 0x22c]       ; 00452b4f
    CALL support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0 ; 00452b56 | CLZWCompress * support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0(CLZWCompress * this_ptr)
        ;   XREF to: 0043f2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00452b5b
    LEA EAX,[ESP + 0x1e0]               ; 00452b5e
    PUSH EAX                            ; 00452b65
    XOR EBP,EBP                         ; 00452b66
    CALL support_codec.cpp_CLZWCompress_init_FUN_0043f320 ; 00452b68 | void support_codec.cpp_CLZWCompress_init_FUN_0043f320(CLZWCompress * this_ptr)
        ;   XREF to: 0043f320 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00452b6d
    MOV EAX,[0x01519380]                ; 00452b70 | int g_ImageBytesPerPixel
    MOV dword ptr [ESP + 0x25c],EBP     ; 00452b75
    TEST EAX,EAX                        ; 00452b7c
    JLE 0x00452f1e                      ; 00452b7e | LAB_00452f1e
        ;   XREF to: 00452f1e (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x230],EBP     ; 00452b84
    MOV dword ptr [ESP + 0x234],0xfffed400 ; 00452b8b
    PUSH 0x0                            ; 00452b96
        ;   Label: LAB_00452b96
    MOV EAX,dword ptr [ESP + 0x260]     ; 00452b98
    PUSH EAX                            ; 00452b9f
    PUSH 0x1519384                      ; 00452ba0 | SFogGrid g_CameraFogGrid
    CALL core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0 ; 00452ba5 | void core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0(SFogGrid * fog_ptr, int time_major, int time_minor)
        ;   XREF to: 0044bfb0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00452baa
    MOV EAX,dword ptr [ESP + 0x278]     ; 00452bad
    MOV EDX,0x1                         ; 00452bb4
    MOV ECX,dword ptr [EAX + 0x154]     ; 00452bb9
    MOV dword ptr [ESP + 0x24c],EDX     ; 00452bbf
    CMP ECX,EDX                         ; 00452bc6
    JLE 0x00452ce4                      ; 00452bc8 | LAB_00452ce4
        ;   XREF to: 00452ce4 (CONDITIONAL_JUMP)
    MOV EDX,0x140                       ; 00452bce
    MOV ECX,0xf00                       ; 00452bd3
    MOV EAX,0x500                       ; 00452bd8
    MOV dword ptr [ESP + 0x238],EDX     ; 00452bdd
    MOV dword ptr [ESP + 0x240],ECX     ; 00452be4
    MOV dword ptr [ESP + 0x244],EAX     ; 00452beb
    MOV EDI,0x902f74                    ; 00452bf2 | CVector3i[15360] g_PrecomputedWorldPositions
        ;   Label: LAB_00452bf2
    MOV EBX,dword ptr [ESP + 0x240]     ; 00452bf7
    MOV ESI,0x13da778                   ; 00452bfe | SFogImagePlane g_CameraPlaneWorkBuffer
    MOV EAX,dword ptr [ESP + 0x244]     ; 00452c03
    ADD EDI,EBX                         ; 00452c0a
    MOV EBX,0xbce6f8                    ; 00452c0c | int[76800] g_PrecomputedDepthBuffer
    MOV EBP,dword ptr [ESP + 0x238]     ; 00452c11
    ADD EBX,EAX                         ; 00452c18 | DAT_00bcebf8
    MOV EAX,dword ptr [ESP + 0x278]     ; 00452c1a
    ADD ESI,EBP                         ; 00452c21
    MOV EBP,0x1                         ; 00452c23
    CMP EBP,dword ptr [EAX + 0x150]     ; 00452c28
    JGE 0x00452c84                      ; 00452c2e | LAB_00452c84
        ;   XREF to: 00452c84 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 00452c30 | DAT_00bcebf8
        ;   Label: LAB_00452c30
    CMP EAX,0x7fffffff                  ; 00452c32
    JZ 0x00452f98                       ; 00452c37 | LAB_00452f98
        ;   XREF to: 00452f98 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00452c3d
    PUSH EDI                            ; 00452c3e | DAT_00903e74
    LEA EAX,[ESP + 0x220]               ; 00452c3f
    PUSH EAX                            ; 00452c46
    PUSH 0x1519384                      ; 00452c47 | SFogGrid g_CameraFogGrid
    CALL core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0 ; 00452c4c | uint core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0(SFogGrid * fog_ptr, CVector3i * start_pos, CVector3i * end_pos, int ray_length)
        ;   XREF to: 0044bdd0 (UNCONDITIONAL_CALL)
    IMUL EAX,EAX,0xff                   ; 00452c51
    SHR EAX,0xe                         ; 00452c57
    ADD ESP,0x10                        ; 00452c5a
    CMP EAX,0xff                        ; 00452c5d
    JBE 0x00452c69                      ; 00452c62 | LAB_00452c69
        ;   XREF to: 00452c69 (CONDITIONAL_JUMP)
    MOV EAX,0xff                        ; 00452c64
    MOV byte ptr [ESI],AL               ; 00452c69 | DAT_013da8b8
        ;   Label: LAB_00452c69
    MOV EAX,dword ptr [ESP + 0x278]     ; 00452c6b
        ;   Label: LAB_00452c6b
    ADD EDI,0xc                         ; 00452c72
    INC ESI                             ; 00452c75
    INC EBP                             ; 00452c76
    MOV ECX,dword ptr [EAX + 0x150]     ; 00452c77
    ADD EBX,0x4                         ; 00452c7d | DAT_00bcf0fc
    CMP EBP,ECX                         ; 00452c80
    JL 0x00452c30                       ; 00452c82 | LAB_00452c30
        ;   XREF to: 00452c30 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x244]     ; 00452c84
        ;   Label: LAB_00452c84
    MOV ESI,dword ptr [ESP + 0x238]     ; 00452c8b
    MOV EDI,dword ptr [ESP + 0x240]     ; 00452c92
    MOV EBP,dword ptr [ESP + 0x24c]     ; 00452c99
    MOV EDX,dword ptr [ESP + 0x278]     ; 00452ca0
    ADD EBX,0x500                       ; 00452ca7
    ADD ESI,0x140                       ; 00452cad
    ADD EDI,0xf00                       ; 00452cb3
    INC EBP                             ; 00452cb9
    MOV ECX,dword ptr [EDX + 0x154]     ; 00452cba
    MOV dword ptr [ESP + 0x244],EBX     ; 00452cc0
    MOV dword ptr [ESP + 0x238],ESI     ; 00452cc7
    MOV dword ptr [ESP + 0x240],EDI     ; 00452cce
    MOV dword ptr [ESP + 0x24c],EBP     ; 00452cd5
    CMP EBP,ECX                         ; 00452cdc
    JL 0x00452bf2                       ; 00452cde | LAB_00452bf2
        ;   XREF to: 00452bf2 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x25c]     ; 00452ce4
        ;   Label: LAB_00452ce4
    PUSH EBX                            ; 00452ceb
    MOV ESI,dword ptr [ESP + 0x27c]     ; 00452cec
    PUSH ESI                            ; 00452cf3
    XOR EDI,EDI                         ; 00452cf4
    CALL core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020 ; 00452cf6 | void core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020(CDemonCamera * this_ptr, int plane_index)
        ;   XREF to: 00453020 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00452cfb
    MOV EBP,dword ptr [ESI + 0x154]     ; 00452cfe
    MOV dword ptr [ESP + 0x248],EDI     ; 00452d04
    TEST EBP,EBP                        ; 00452d0b
    JLE 0x00452e5d                      ; 00452d0d | LAB_00452e5d
        ;   XREF to: 00452e5d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x234]     ; 00452d13
    MOV dword ptr [ESP + 0x258],EAX     ; 00452d1a
    MOV dword ptr [ESP + 0x22c],EAX     ; 00452d21
    MOV EAX,dword ptr [ESP + 0x230]     ; 00452d28
    MOV dword ptr [ESP + 0x250],EDI     ; 00452d2f
    MOV dword ptr [ESP + 0x254],EAX     ; 00452d36
    MOV dword ptr [ESP + 0x23c],EAX     ; 00452d3d
    MOV EAX,dword ptr [ESP + 0x278]     ; 00452d44
        ;   Label: LAB_00452d44
    XOR EDX,EDX                         ; 00452d4b
    MOV ECX,dword ptr [EAX + 0x150]     ; 00452d4d
    XOR EBX,EBX                         ; 00452d53
    TEST ECX,ECX                        ; 00452d55
    JLE 0x00452e11                      ; 00452d57 | LAB_00452e11
        ;   XREF to: 00452e11 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x250]     ; 00452d5d
    MOV EDI,dword ptr [ESP + 0x23c]     ; 00452d64
    MOV ESI,ECX                         ; 00452d6b
    MOV dword ptr [ESP + 0x260],ECX     ; 00452d6d
    MOV EAX,dword ptr [ESP + 0x254]     ; 00452d74
        ;   Label: LAB_00452d74
    ADD EAX,dword ptr [ESP + 0x260]     ; 00452d7b
    MOV AL,byte ptr [EDX + EAX*0x1 + 0x13ed378] ; 00452d82 | SFogImagePlane[16] g_CameraImageDecompressBuffer
    MOV EBP,dword ptr [ESP + 0x25c]     ; 00452d89
    AND EAX,0xff                        ; 00452d90
    TEST EBP,EBP                        ; 00452d95
    JLE 0x00452db1                      ; 00452d97 | LAB_00452db1
        ;   XREF to: 00452db1 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x258]     ; 00452d99
    ADD EBP,dword ptr [ESP + 0x260]     ; 00452da0
    MOVZX EBP,byte ptr [EDX + EBP*0x1 + 0x13ed378] ; 00452da7 | SFogImagePlane[16] g_CameraImageDecompressBuffer
    SUB EAX,EBP                         ; 00452daf
    SAR EAX,0x2                         ; 00452db1
        ;   Label: LAB_00452db1
    SUB EAX,EBX                         ; 00452db4
    CMP EAX,-0x20                       ; 00452db6
    JGE 0x00452fa0                      ; 00452db9 | LAB_00452fa0
        ;   XREF to: 00452fa0 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffe0                  ; 00452dbf
    MOV byte ptr [ESI + 0x13da778],AL   ; 00452dc4 | SFogImagePlane g_CameraPlaneWorkBuffer | DAT_013da779
        ;   Label: LAB_00452dc4
    ADD EAX,EBX                         ; 00452dca
    MOV EBP,dword ptr [ESP + 0x25c]     ; 00452dcc
    LEA EBX,[EAX*0x4 + 0x0]             ; 00452dd3
    TEST EBP,EBP                        ; 00452dda
    JLE 0x00452df1                      ; 00452ddc | LAB_00452df1
        ;   XREF to: 00452df1 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x22c]     ; 00452dde
    ADD EBP,ECX                         ; 00452de5
    MOVZX EBP,byte ptr [EDX + EBP*0x1 + 0x13ed378] ; 00452de7 | SFogImagePlane[16] g_CameraImageDecompressBuffer
    ADD EBX,EBP                         ; 00452def
    MOV byte ptr [EDI + 0x13ed378],BL   ; 00452df1 | SFogImagePlane[16] g_CameraImageDecompressBuffer | DAT_013ed379
        ;   Label: LAB_00452df1
    MOV EBX,EAX                         ; 00452df7
    MOV EAX,dword ptr [ESP + 0x278]     ; 00452df9
    INC ESI                             ; 00452e00
    INC EDX                             ; 00452e01
    MOV EBP,dword ptr [EAX + 0x150]     ; 00452e02
    INC EDI                             ; 00452e08
    CMP EDX,EBP                         ; 00452e09
    JL 0x00452d74                       ; 00452e0b | LAB_00452d74
        ;   XREF to: 00452d74 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x250]     ; 00452e11
        ;   Label: LAB_00452e11
    MOV EBX,dword ptr [ESP + 0x23c]     ; 00452e18
    MOV ESI,dword ptr [ESP + 0x248]     ; 00452e1f
    MOV EDX,dword ptr [ESP + 0x278]     ; 00452e26
    ADD ECX,0x140                       ; 00452e2d
    ADD EBX,0x140                       ; 00452e33
    INC ESI                             ; 00452e39
    MOV EDI,dword ptr [EDX + 0x154]     ; 00452e3a
    MOV dword ptr [ESP + 0x250],ECX     ; 00452e40
    MOV dword ptr [ESP + 0x23c],EBX     ; 00452e47
    MOV dword ptr [ESP + 0x248],ESI     ; 00452e4e
    CMP ESI,EDI                         ; 00452e55
    JL 0x00452d44                       ; 00452e57 | LAB_00452d44
        ;   XREF to: 00452d44 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x144]               ; 00452e5d
        ;   Label: LAB_00452e5d
    PUSH EAX                            ; 00452e64
    LEA EAX,[ESP + 0x22c]               ; 00452e65
    PUSH EAX                            ; 00452e6c
    PUSH 0x13da778                      ; 00452e6d | SFogImagePlane g_CameraPlaneWorkBuffer
    LEA EAX,[ESP + 0x1ec]               ; 00452e72
    MOV EBP,0x12c00                     ; 00452e79
    PUSH EAX                            ; 00452e7e
    MOV dword ptr [ESP + 0x238],EBP     ; 00452e7f
    CALL support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30 ; 00452e86 | int support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30(CCodec * this_ptr, byte * input, int * input_length, byte * output, ...)
        ;   XREF to: 0043eb30 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00452e8b
    TEST EAX,EAX                        ; 00452e8e
    JZ 0x00452fb3                       ; 00452e90 | LAB_00452fb3
        ;   XREF to: 00452fb3 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x228],0x0     ; 00452e96
        ;   Label: LAB_00452e96
    JZ 0x00452ecb                       ; 00452e9e | LAB_00452ecb
        ;   XREF to: 00452ecb (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x17c]               ; 00452ea0
    PUSH EAX                            ; 00452ea7
    MOV EBX,0x61a3ca                    ; 00452ea8 | = "..\\core\\dcamera.cpp" | s_core_dcamera_cpp_0061a3ca = ..\core\dcamera.cpp
    MOV ESI,0x134b                      ; 00452ead
    PUSH 0x61a3de                       ; 00452eb2 | = "Not all bytes consumed compressing %s" | s_Not_all_bytes_consumed_c_0061a3de = Not all bytes consumed compressing %s
    MOV dword ptr [0x02f0ca48],EBX      ; 00452eb7 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00452ebd | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00452ec3 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00452ec8
    CMP dword ptr [ESP + 0x160],0x0     ; 00452ecb
        ;   Label: LAB_00452ecb
    JNZ 0x00452fe2                      ; 00452ed3 | LAB_00452fe2
        ;   XREF to: 00452fe2 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x230]     ; 00452ed9
        ;   Label: LAB_00452ed9
    MOV ECX,dword ptr [ESP + 0x234]     ; 00452ee0
    MOV EBX,dword ptr [ESP + 0x25c]     ; 00452ee7
    MOV ESI,dword ptr [0x01519380]      ; 00452eee | int g_ImageBytesPerPixel
    ADD EDX,0x12c00                     ; 00452ef4
    ADD ECX,0x12c00                     ; 00452efa
    INC EBX                             ; 00452f00
    MOV dword ptr [ESP + 0x230],EDX     ; 00452f01
    MOV dword ptr [ESP + 0x234],ECX     ; 00452f08
    MOV dword ptr [ESP + 0x25c],EBX     ; 00452f0f
    CMP EBX,ESI                         ; 00452f16
    JL 0x00452b96                       ; 00452f18 | LAB_00452b96
        ;   XREF to: 00452b96 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x144]               ; 00452f1e
        ;   Label: LAB_00452f1e
    PUSH EAX                            ; 00452f25
    LEA EAX,[ESP + 0x1e4]               ; 00452f26
    PUSH EAX                            ; 00452f2d
    CALL support_codec.cpp_CLZWCompress_finalize_FUN_0043f440 ; 00452f2e | int support_codec.cpp_CLZWCompress_finalize_FUN_0043f440(CLZWCompress * this_ptr, FILE * output_file)
        ;   XREF to: 0043f440 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00452f33
    PUSH 0x0                            ; 00452f36
    LEA EAX,[ESP + 0x1e8]               ; 00452f38
    PUSH EAX                            ; 00452f3f
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0 ; 00452f40 | CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0(CLZWDictionary * this_ptr)
        ;   XREF to: 0043edf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00452f45
    PUSH 0x1                            ; 00452f48
    LEA EAX,[ESP + 0x1e4]               ; 00452f4a
    PUSH EAX                            ; 00452f51
    CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0 ; 00452f52 | CCodec * support_codec.cpp_CCodec_dtor_FUN_0043e9b0(CCodec * this_ptr, int d1)
        ;   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00452f57
    PUSH 0x0                            ; 00452f5a
    LEA EAX,[ESP + 0x104]               ; 00452f5c
        ;   Label: LAB_00452f5c
    PUSH EAX                            ; 00452f63
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 00452f64 | ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00452f69
    ADD ESP,0x264                       ; 00452f6c
    POP EBP                             ; 00452f72
        ;   Label: LAB_00452f72
    POP EDI                             ; 00452f73
    POP ESI                             ; 00452f74
    POP EBX                             ; 00452f75
    RET                                 ; 00452f76
    PUSH 0x12d5                         ; 00452f77
        ;   Label: LAB_00452f77
    PUSH 0x61a35d                       ; 00452f7c | = "..\\core\\dcamera.cpp" | s_core_dcamera_cpp_0061a35d = ..\core\dcamera.cpp
    PUSH EAX                            ; 00452f81
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00452f82 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00452f87
    ADD ESP,0x264                       ; 00452f8a
    POP EBP                             ; 00452f90
    POP EDI                             ; 00452f91
    POP ESI                             ; 00452f92
    POP EBX                             ; 00452f93
    RET                                 ; 00452f94
    PUSH EDI                            ; 00452f95
        ;   Label: LAB_00452f95
    JMP 0x00452f5c                      ; 00452f96 | LAB_00452f5c
        ;   XREF to: 00452f5c (UNCONDITIONAL_JUMP)
    MOV byte ptr [ESI],0xff             ; 00452f98 | DAT_013da8b8
        ;   Label: LAB_00452f98
    JMP 0x00452c6b                      ; 00452f9b | LAB_00452c6b
        ;   XREF to: 00452c6b (UNCONDITIONAL_JUMP)
    CMP EAX,0x3f                        ; 00452fa0
        ;   Label: LAB_00452fa0
    JLE 0x00452dc4                      ; 00452fa3 | LAB_00452dc4
        ;   XREF to: 00452dc4 (CONDITIONAL_JUMP)
    MOV EAX,0x3f                        ; 00452fa9
    JMP 0x00452dc4                      ; 00452fae | LAB_00452dc4
        ;   XREF to: 00452dc4 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02f0ca48],0x61a3a1 ; 00452fb3 | char * g_CurrentFilename | = "..\\core\\dcamera.cpp" | s_core_dcamera_cpp_0061a3a1 = ..\core\dcamera.cpp
        ;   Label: LAB_00452fb3
    LEA EAX,[ESP + 0x17c]               ; 00452fbd
    PUSH EAX                            ; 00452fc4
    MOV EDX,0x1349                      ; 00452fc5
    PUSH 0x61a3b5                       ; 00452fca | = "Error compressing %s" | s_Error_compressing_s_0061a3b5 = Error compressing %s
    MOV dword ptr [0x02f0ca4c],EDX      ; 00452fcf | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00452fd5 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00452fda
    JMP 0x00452e96                      ; 00452fdd | LAB_00452e96
        ;   XREF to: 00452e96 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02f0ca4c],0x134c   ; 00452fe2 | int g_CurrentLineNumber
        ;   Label: LAB_00452fe2
    LEA EAX,[ESP + 0x17c]               ; 00452fec
    PUSH EAX                            ; 00452ff3
    MOV EBP,0x61a404                    ; 00452ff4 | = "..\\core\\dcamera.cpp" | s_core_dcamera_cpp_0061a404 = ..\core\dcamera.cpp
    PUSH 0x61a418                       ; 00452ff9 | = "Error writing compressed file %s" | s_Error_writing_compressed_0061a418 = Error writing compressed file %s
    MOV dword ptr [0x02f0ca48],EBP      ; 00452ffe | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00453004 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00453009
    JMP 0x00452ed9                      ; 0045300c | LAB_00452ed9
        ;   XREF to: 00452ed9 (UNCONDITIONAL_JUMP)

