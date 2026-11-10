; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_0044f750(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x20c]:1  local_20c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
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
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044b070 at 0044b2b7
;
; Referenced Globals:
;   TerminatedCString s_s_fog_005b9f76
;   undefined4 DAT_005b9f7d
;   TerminatedCString s_backdrop_005b9f80
;   TerminatedCString s_backdrop_s_005b9f89
;   undefined4 DAT_005b9f95
;   TerminatedCString s_core_dcamera_cpp_005b9f98
;   TerminatedCString s_Can_t_create_s_005b9fac
;   TerminatedCString s_core_dcamera_cpp_005b9fbc
;   TerminatedCString s_Error_compressing_s_005b9fd0
;   TerminatedCString s_core_dcamera_cpp_005b9fe5
;   TerminatedCString s_Not_all_bytes_consumed_c_005b9ff9
;   TerminatedCString s_core_dcamera_cpp_005ba01f
;   TerminatedCString s_Error_writing_compressed_005ba033
;   undefined4 DAT_005ba056
;   undefined4 DAT_005f184c
;   ... and 17 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_0044fdd0
;   core_dcamera.cpp_resetFogSamplingOffset_FUN_00448720
;   core_dcamera.cpp_sampleFogAlongRay_FUN_00448980
;   core_dcamera.cpp_updateFogScrollOffset_FUN_00448b60
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_FUN_004659c0
;   support_codec.cpp_CCodec_dtor_FUN_00440810
;   support_codec.cpp_CLZWCompress_ctor_FUN_004410f0
;   support_codec.cpp_CLZWCompress_init_FUN_00441140
;   support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0
;   support_codec.cpp_FUN_00440970
;   support_codec.cpp_FUN_00441290
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f750
        ;   Label: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750
    PUSH ESI                            ; 0044f751
    PUSH EDI                            ; 0044f752
    PUSH EBP                            ; 0044f753
    SUB ESP,0x1fc                       ; 0044f754
    MOV EDX,0x1                         ; 0044f75a
    PUSH 0x149d6dc                      ; 0044f75f
    MOV ESI,0x10                        ; 0044f764
    XOR ECX,ECX                         ; 0044f769
    MOV dword ptr [0x0134017c],EDX      ; 0044f76b | DAT_0134017c
    MOV dword ptr [0x0149d6d0],ECX      ; 0044f771 | DAT_0149d6d0
    MOV dword ptr [0x0149d6d4],ECX      ; 0044f777 | DAT_0149d6d4
    CALL core_dcamera.cpp_resetFogSamplingOffset_FUN_00448720 ; 0044f77d
        ;   XREF to: 00448720 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_resetFogSamplingOffset_FUN_00448720()
    MOV EAX,[0x0149e6e8]                ; 0044f782 | DAT_0149e6e8
    MOV EDI,dword ptr [0x0149e6ec]      ; 0044f787 | DAT_0149e6ec
    MOV EBP,dword ptr [0x0149e6f0]      ; 0044f78d | DAT_0149e6f0
    ADD ESP,0x4                         ; 0044f793
    OR EAX,EDI                          ; 0044f796
    MOV dword ptr [0x0149d6d8],ESI      ; 0044f798 | DAT_0149d6d8
    OR EAX,EBP                          ; 0044f79e
    JNZ 0x0044f7ac                      ; 0044f7a0
        ;   XREF to: 0044f7ac (CONDITIONAL_JUMP)  ; LAB_0044f7ac
    MOV dword ptr [0x0149d6d8],0x1      ; 0044f7a2 | DAT_0149d6d8
    MOV EAX,dword ptr [ESP + 0x210]     ; 0044f7ac
        ;   Label: LAB_0044f7ac
    ADD EAX,0x40                        ; 0044f7b3
    PUSH EAX                            ; 0044f7b6
    PUSH 0x5b9f76                       ; 0044f7b7 | = "%s.fog"
    LEA EAX,[ESP + 0x8]                 ; 0044f7bc
    PUSH EAX                            ; 0044f7c0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0044f7c1
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0044f7c6
    PUSH 0x5b9f7d                       ; 0044f7c9 | DAT_005b9f7d
    LEA EAX,[ESP + 0x4]                 ; 0044f7ce
    PUSH EAX                            ; 0044f7d2
    PUSH 0x5b9f80                       ; 0044f7d3 | = "backdrop"
    CALL engine_dosio.cpp_FUN_004659c0  ; 0044f7d8
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044f7dd
    TEST EAX,EAX                        ; 0044f7e0
    JNZ 0x0044fd39                      ; 0044f7e2
        ;   XREF to: 0044fd39 (CONDITIONAL_JUMP)  ; LAB_0044fd39
    MOV EAX,ESP                         ; 0044f7e8
    PUSH EAX                            ; 0044f7ea
    PUSH 0x5b9f89                       ; 0044f7eb | = "backdrop\\%s"
    LEA EAX,[ESP + 0x108]               ; 0044f7f0
    PUSH EAX                            ; 0044f7f7
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0044f7f8
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0044f7fd
    PUSH 0x5b9f95                       ; 0044f800 | DAT_005b9f95
    LEA EAX,[ESP + 0x104]               ; 0044f805
    PUSH EAX                            ; 0044f80c
    LEA EAX,[ESP + 0x1b8]               ; 0044f80d
    PUSH EAX                            ; 0044f814
    CALL support_trstream.cpp_FUN_005747e0 ; 0044f815
        ;   XREF to: 005747e0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005747e0()
    ADD ESP,0xc                         ; 0044f81a
    LEA EAX,[ESP + 0x1b0]               ; 0044f81d
    PUSH EAX                            ; 0044f824
    CALL support_trstream.cpp_FUN_00574980 ; 0044f825
        ;   XREF to: 00574980 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00574980()
    ADD ESP,0x4                         ; 0044f82a
    TEST EAX,EAX                        ; 0044f82d
    JNZ 0x0044f85c                      ; 0044f82f
        ;   XREF to: 0044f85c (CONDITIONAL_JUMP)  ; LAB_0044f85c
    LEA EAX,[ESP + 0x100]               ; 0044f831
    PUSH EAX                            ; 0044f838
    MOV EDX,0x5b9f98                    ; 0044f839 | = "..\\core\\dcamera.cpp"
    MOV ECX,0x1344                      ; 0044f83e
    PUSH 0x5b9fac                       ; 0044f843 | = "Can't create %s"
    MOV dword ptr [0x01d71de0],EDX      ; 0044f848 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0044f84e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044f854
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0044f859
    PUSH 0x1000                         ; 0044f85c
        ;   Label: LAB_0044f85c
    PUSH 0x149d6dc                      ; 0044f861
    LEA EAX,[ESP + 0x1b8]               ; 0044f866
    PUSH EAX                            ; 0044f86d
    CALL support_trstream.cpp_FUN_005748e0 ; 0044f86e
        ;   XREF to: 005748e0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005748e0()
    MOV EBX,dword ptr [0x0149e6f8]      ; 0044f873 | DAT_0149e6f8
    ADD ESP,0xc                         ; 0044f879
    TEST EBX,EBX                        ; 0044f87c
    JZ 0x0044fd4d                       ; 0044f87e
        ;   XREF to: 0044fd4d (CONDITIONAL_JUMP)  ; LAB_0044fd4d
    MOV EAX,[0x005f184c]                ; 0044f884 | DAT_005f184c
    PUSH 0x3                            ; 0044f889
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0044f88b | LAB_0044463c+9
    LEA EAX,[ESP + 0x1bc]               ; 0044f892
    PUSH EAX                            ; 0044f899
    LEA EAX,[ESP + 0x1b8]               ; 0044f89a
    PUSH EAX                            ; 0044f8a1
    CALL support_trstream.cpp_FUN_005748e0 ; 0044f8a2
        ;   XREF to: 005748e0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005748e0()
    ADD ESP,0xc                         ; 0044f8a7
    MOV EAX,dword ptr [ESP + 0x210]     ; 0044f8aa
    FLD double ptr [0x005ba056]         ; 0044f8b1 | DAT_005ba056
    FLD float ptr [EAX + 0x4]           ; 0044f8b7
    FMUL ST1                            ; 0044f8ba
    CALL crt_math.c_round_FUN_005a3120  ; 0044f8bc
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1a4]       ; 0044f8c1
    FLD float ptr [EAX + 0x8]           ; 0044f8c8
    FMUL ST1                            ; 0044f8cb
    PUSH 0x6                            ; 0044f8cd
    CALL crt_math.c_round_FUN_005a3120  ; 0044f8cf
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1ac]       ; 0044f8d4
    FMUL float ptr [EAX + 0xc]          ; 0044f8db
    PUSH 0x10000                        ; 0044f8de
    LEA EAX,[ESP + 0x16c]               ; 0044f8e3
    CALL crt_math.c_round_FUN_005a3120  ; 0044f8ea
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH EAX                            ; 0044f8ef
    FISTP dword ptr [ESP + 0x1b8]       ; 0044f8f0
    CALL support_codec.cpp_CLZWCompress_ctor_FUN_004410f0 ; 0044f8f7
        ;   XREF to: 004410f0 (UNCONDITIONAL_CALL)  ; CLZWCompress * support_codec.cpp_CLZWCompress_ctor_FUN_004410f0(CLZWCompress * this_ptr, int buffer_size, int num_bits)
    ADD ESP,0xc                         ; 0044f8fc
    LEA EAX,[ESP + 0x164]               ; 0044f8ff
    PUSH EAX                            ; 0044f906
    XOR ESI,ESI                         ; 0044f907
    CALL support_codec.cpp_CLZWCompress_init_FUN_00441140 ; 0044f909
        ;   XREF to: 00441140 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWCompress_init_FUN_00441140(CLZWCompress * this_ptr)
    ADD ESP,0x4                         ; 0044f90e
    MOV EDI,dword ptr [0x0149d6d8]      ; 0044f911 | DAT_0149d6d8
    MOV dword ptr [ESP + 0x1f4],ESI     ; 0044f917
    TEST EDI,EDI                        ; 0044f91e
    JLE 0x0044fce0                      ; 0044f920
        ;   XREF to: 0044fce0 (CONDITIONAL_JUMP)  ; LAB_0044fce0
    MOV dword ptr [ESP + 0x1c4],ESI     ; 0044f926
    MOV dword ptr [ESP + 0x1c0],0xfffed400 ; 0044f92d
    PUSH 0x0                            ; 0044f938
        ;   Label: LAB_0044f938
    MOV EDI,dword ptr [ESP + 0x1f8]     ; 0044f93a
    PUSH EDI                            ; 0044f941
    PUSH 0x149d6dc                      ; 0044f942
    CALL core_dcamera.cpp_updateFogScrollOffset_FUN_00448b60 ; 0044f947
        ;   XREF to: 00448b60 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_updateFogScrollOffset_FUN_00448b60()
    ADD ESP,0xc                         ; 0044f94c
    MOV EAX,dword ptr [ESP + 0x210]     ; 0044f94f
    MOV EBP,0x1                         ; 0044f956
    MOV EDX,dword ptr [EAX + 0x154]     ; 0044f95b
    MOV dword ptr [ESP + 0x1dc],EBP     ; 0044f961
    CMP EDX,EBP                         ; 0044f968
    JLE 0x0044fa88                      ; 0044f96a
        ;   XREF to: 0044fa88 (CONDITIONAL_JUMP)  ; LAB_0044fa88
    MOV EDI,0x140                       ; 0044f970
    MOV EBP,0xf00                       ; 0044f975
    MOV ESI,0x500                       ; 0044f97a
    MOV dword ptr [ESP + 0x1cc],EDI     ; 0044f97f
    MOV dword ptr [ESP + 0x1d0],EBP     ; 0044f986
    MOV dword ptr [ESP + 0x1c8],ESI     ; 0044f98d
    MOV EDI,0x874588                    ; 0044f994
        ;   Label: LAB_0044f994
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0044f999
    MOV EBX,0x135ead0                   ; 0044f9a0
    MOV EDX,dword ptr [ESP + 0x1cc]     ; 0044f9a5
    MOV ESI,0xb52a48                    ; 0044f9ac
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 0044f9b1
    ADD EDI,EAX                         ; 0044f9b8
    MOV EAX,dword ptr [ESP + 0x210]     ; 0044f9ba
    MOV EBP,0x1                         ; 0044f9c1
    ADD EBX,EDX                         ; 0044f9c6
    MOV EDX,dword ptr [EAX + 0x150]     ; 0044f9c8
    ADD ESI,ECX                         ; 0044f9ce
    CMP EDX,EBP                         ; 0044f9d0
    JLE 0x0044fa28                      ; 0044f9d2
        ;   XREF to: 0044fa28 (CONDITIONAL_JUMP)  ; LAB_0044fa28
    MOV EAX,dword ptr [ESI]             ; 0044f9d4 | DAT_00b52f48 | DAT_00b53448 | DAT_00b5344c
        ;   Label: LAB_0044f9d4
    CMP EAX,0x7fffffff                  ; 0044f9d6
    JZ 0x0044fd50                       ; 0044f9db
        ;   XREF to: 0044fd50 (CONDITIONAL_JUMP)  ; LAB_0044fd50
    PUSH EAX                            ; 0044f9e1
    PUSH EDI                            ; 0044f9e2
    LEA EAX,[ESP + 0x1ac]               ; 0044f9e3
    PUSH EAX                            ; 0044f9ea
    PUSH 0x149d6dc                      ; 0044f9eb
    CALL core_dcamera.cpp_sampleFogAlongRay_FUN_00448980 ; 0044f9f0
        ;   XREF to: 00448980 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_sampleFogAlongRay_FUN_00448980()
    IMUL EAX,EAX,0xff                   ; 0044f9f5
    SHR EAX,0xe                         ; 0044f9fb
    ADD ESP,0x10                        ; 0044f9fe
    CMP EAX,0xff                        ; 0044fa01
    JBE 0x0044fa0d                      ; 0044fa06
        ;   XREF to: 0044fa0d (CONDITIONAL_JUMP)  ; LAB_0044fa0d
    MOV EAX,0xff                        ; 0044fa08
    MOV byte ptr [EBX],AL               ; 0044fa0d | DAT_0135ec10
        ;   Label: LAB_0044fa0d
    MOV EAX,dword ptr [ESP + 0x210]     ; 0044fa0f
        ;   Label: LAB_0044fa0f
    ADD EDI,0xc                         ; 0044fa16
    INC EBX                             ; 0044fa19
    INC EBP                             ; 0044fa1a
    MOV ECX,dword ptr [EAX + 0x150]     ; 0044fa1b
    ADD ESI,0x4                         ; 0044fa21
    CMP EBP,ECX                         ; 0044fa24
    JL 0x0044f9d4                       ; 0044fa26
        ;   XREF to: 0044f9d4 (CONDITIONAL_JUMP)  ; LAB_0044f9d4
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 0044fa28
        ;   Label: LAB_0044fa28
    MOV EBX,dword ptr [ESP + 0x1cc]     ; 0044fa2f
    MOV ESI,dword ptr [ESP + 0x1d0]     ; 0044fa36
    MOV EDI,dword ptr [ESP + 0x1dc]     ; 0044fa3d
    MOV EDX,dword ptr [ESP + 0x210]     ; 0044fa44
    ADD ECX,0x500                       ; 0044fa4b
    ADD EBX,0x140                       ; 0044fa51
    ADD ESI,0xf00                       ; 0044fa57
    INC EDI                             ; 0044fa5d
    MOV EBP,dword ptr [EDX + 0x154]     ; 0044fa5e
    MOV dword ptr [ESP + 0x1c8],ECX     ; 0044fa64
    MOV dword ptr [ESP + 0x1cc],EBX     ; 0044fa6b
    MOV dword ptr [ESP + 0x1d0],ESI     ; 0044fa72
    MOV dword ptr [ESP + 0x1dc],EDI     ; 0044fa79
    CMP EDI,EBP                         ; 0044fa80
    JL 0x0044f994                       ; 0044fa82
        ;   XREF to: 0044f994 (CONDITIONAL_JUMP)  ; LAB_0044f994
    MOV EAX,dword ptr [ESP + 0x1f4]     ; 0044fa88
        ;   Label: LAB_0044fa88
    PUSH EAX                            ; 0044fa8f
    MOV EDX,dword ptr [ESP + 0x214]     ; 0044fa90
    PUSH EDX                            ; 0044fa97
    CALL core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_0044fdd0 ; 0044fa98
        ;   XREF to: 0044fdd0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_0044fdd0(CDemonCamera * this_ptr, int plane_index)
    ADD ESP,0x8                         ; 0044fa9d
    MOV EAX,dword ptr [ESP + 0x210]     ; 0044faa0
    XOR ECX,ECX                         ; 0044faa7
    MOV EBX,dword ptr [EAX + 0x154]     ; 0044faa9
    MOV dword ptr [ESP + 0x1d8],ECX     ; 0044faaf
    TEST EBX,EBX                        ; 0044fab6
    JLE 0x0044fc16                      ; 0044fab8
        ;   XREF to: 0044fc16 (CONDITIONAL_JUMP)  ; LAB_0044fc16
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0044fabe
    MOV dword ptr [ESP + 0x1e8],EAX     ; 0044fac5
    MOV dword ptr [ESP + 0x1ec],EAX     ; 0044facc
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0044fad3
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0044fada
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0044fae1
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0044fae8
    XOR EBP,EBP                         ; 0044faef
    MOV EAX,dword ptr [ESP + 0x210]     ; 0044faf1
        ;   Label: LAB_0044faf1
    MOV EDX,EBP                         ; 0044faf8
    MOV ECX,dword ptr [EAX + 0x150]     ; 0044fafa
    MOV EBX,EBP                         ; 0044fb00
    CMP EBP,ECX                         ; 0044fb02
    JGE 0x0044fbca                      ; 0044fb04
        ;   XREF to: 0044fbca (CONDITIONAL_JUMP)  ; LAB_0044fbca
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0044fb0a
    MOV ECX,dword ptr [ESP + 0x1d4]     ; 0044fb11
    MOV dword ptr [ESP + 0x1f8],EAX     ; 0044fb18
    MOV ESI,EAX                         ; 0044fb1f
    MOV dword ptr [ESP + 0x1f0],EAX     ; 0044fb21
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 0044fb28
        ;   Label: LAB_0044fb28
    ADD EAX,dword ptr [ESP + 0x1f8]     ; 0044fb2f
    MOV AL,byte ptr [EDX + EAX*0x1 + 0x13716d0] ; 0044fb36
    MOV EDI,dword ptr [ESP + 0x1f4]     ; 0044fb3d
    AND EAX,0xff                        ; 0044fb44
    CMP EBP,EDI                         ; 0044fb49
    JGE 0x0044fb65                      ; 0044fb4b
        ;   XREF to: 0044fb65 (CONDITIONAL_JUMP)  ; LAB_0044fb65
    MOV EDI,dword ptr [ESP + 0x1e8]     ; 0044fb4d
    ADD EDI,dword ptr [ESP + 0x1f8]     ; 0044fb54
    MOVZX EDI,byte ptr [EDX + EDI*0x1 + 0x13716d0] ; 0044fb5b
    SUB EAX,EDI                         ; 0044fb63
    SAR EAX,0x2                         ; 0044fb65
        ;   Label: LAB_0044fb65
    SUB EAX,EBX                         ; 0044fb68
    CMP EAX,-0x20                       ; 0044fb6a
    JGE 0x0044fd58                      ; 0044fb6d
        ;   XREF to: 0044fd58 (CONDITIONAL_JUMP)  ; LAB_0044fd58
    MOV EAX,0xffffffe0                  ; 0044fb73
    MOV byte ptr [ESI + 0x135ead0],AL   ; 0044fb78 | DAT_0135ead0 | DAT_0135ead1
        ;   Label: LAB_0044fb78
    ADD EAX,EBX                         ; 0044fb7e
    MOV EDI,dword ptr [ESP + 0x1f4]     ; 0044fb80
    LEA EBX,[EAX*0x4 + 0x0]             ; 0044fb87
    CMP EBP,EDI                         ; 0044fb8e
    JGE 0x0044fbaa                      ; 0044fb90
        ;   XREF to: 0044fbaa (CONDITIONAL_JUMP)  ; LAB_0044fbaa
    MOV EDI,dword ptr [ESP + 0x1ec]     ; 0044fb92
    ADD EDI,dword ptr [ESP + 0x1f0]     ; 0044fb99
    MOVZX EDI,byte ptr [EDX + EDI*0x1 + 0x13716d0] ; 0044fba0
    ADD EBX,EDI                         ; 0044fba8
    MOV byte ptr [ECX + 0x13716d0],BL   ; 0044fbaa
        ;   Label: LAB_0044fbaa
    MOV EBX,EAX                         ; 0044fbb0
    MOV EAX,dword ptr [ESP + 0x210]     ; 0044fbb2
    INC ESI                             ; 0044fbb9
    INC EDX                             ; 0044fbba
    MOV EDI,dword ptr [EAX + 0x150]     ; 0044fbbb
    INC ECX                             ; 0044fbc1
    CMP EDX,EDI                         ; 0044fbc2
    JL 0x0044fb28                       ; 0044fbc4
        ;   XREF to: 0044fb28 (CONDITIONAL_JUMP)  ; LAB_0044fb28
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0044fbca
        ;   Label: LAB_0044fbca
    MOV EBX,dword ptr [ESP + 0x1d4]     ; 0044fbd1
    MOV ESI,dword ptr [ESP + 0x1d8]     ; 0044fbd8
    MOV EDX,dword ptr [ESP + 0x210]     ; 0044fbdf
    ADD ECX,0x140                       ; 0044fbe6
    ADD EBX,0x140                       ; 0044fbec
    INC ESI                             ; 0044fbf2
    MOV EDI,dword ptr [EDX + 0x154]     ; 0044fbf3
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0044fbf9
    MOV dword ptr [ESP + 0x1d4],EBX     ; 0044fc00
    MOV dword ptr [ESP + 0x1d8],ESI     ; 0044fc07
    CMP ESI,EDI                         ; 0044fc0e
    JL 0x0044faf1                       ; 0044fc10
        ;   XREF to: 0044faf1 (CONDITIONAL_JUMP)  ; LAB_0044faf1
    LEA EAX,[ESP + 0x1b0]               ; 0044fc16
        ;   Label: LAB_0044fc16
    PUSH EAX                            ; 0044fc1d
    LEA EAX,[ESP + 0x1c0]               ; 0044fc1e
    PUSH EAX                            ; 0044fc25
    PUSH 0x135ead0                      ; 0044fc26 | DAT_0135ead0
    LEA EAX,[ESP + 0x170]               ; 0044fc2b
    MOV EBP,0x12c00                     ; 0044fc32
    PUSH EAX                            ; 0044fc37
    MOV dword ptr [ESP + 0x1cc],EBP     ; 0044fc38
    CALL support_codec.cpp_FUN_00440970 ; 0044fc3f
        ;   XREF to: 00440970 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00440970()
    ADD ESP,0x10                        ; 0044fc44
    TEST EAX,EAX                        ; 0044fc47
    JZ 0x0044fd6b                       ; 0044fc49
        ;   XREF to: 0044fd6b (CONDITIONAL_JUMP)  ; LAB_0044fd6b
    CMP dword ptr [ESP + 0x1bc],0x0     ; 0044fc4f
        ;   Label: LAB_0044fc4f
    JZ 0x0044fc84                       ; 0044fc57
        ;   XREF to: 0044fc84 (CONDITIONAL_JUMP)  ; LAB_0044fc84
    LEA EAX,[ESP + 0x100]               ; 0044fc59
    PUSH EAX                            ; 0044fc60
    MOV EBX,0x5b9fe5                    ; 0044fc61 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x13b3                      ; 0044fc66
    PUSH 0x5b9ff9                       ; 0044fc6b | = "Not all bytes consumed compressing %s"
    MOV dword ptr [0x01d71de0],EBX      ; 0044fc70 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0044fc76 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044fc7c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0044fc81
    LEA EAX,[ESP + 0x1b0]               ; 0044fc84
        ;   Label: LAB_0044fc84
    PUSH EAX                            ; 0044fc8b
    CALL support_trstream.cpp_FUN_00574980 ; 0044fc8c
        ;   XREF to: 00574980 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00574980()
    ADD ESP,0x4                         ; 0044fc91
    TEST EAX,EAX                        ; 0044fc94
    JZ 0x0044fd9a                       ; 0044fc96
        ;   XREF to: 0044fd9a (CONDITIONAL_JUMP)  ; LAB_0044fd9a
    MOV EBP,dword ptr [ESP + 0x1c4]     ; 0044fc9c
        ;   Label: LAB_0044fc9c
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0044fca3
    MOV EDX,dword ptr [ESP + 0x1f4]     ; 0044fcaa
    MOV ECX,dword ptr [0x0149d6d8]      ; 0044fcb1 | DAT_0149d6d8
    ADD EBP,0x12c00                     ; 0044fcb7
    ADD EAX,0x12c00                     ; 0044fcbd
    INC EDX                             ; 0044fcc2
    MOV dword ptr [ESP + 0x1c4],EBP     ; 0044fcc3
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0044fcca
    MOV dword ptr [ESP + 0x1f4],EDX     ; 0044fcd1
    CMP EDX,ECX                         ; 0044fcd8
    JL 0x0044f938                       ; 0044fcda
        ;   XREF to: 0044f938 (CONDITIONAL_JUMP)  ; LAB_0044f938
    LEA EAX,[ESP + 0x1b0]               ; 0044fce0
        ;   Label: LAB_0044fce0
    PUSH EAX                            ; 0044fce7
    LEA EAX,[ESP + 0x168]               ; 0044fce8
    PUSH EAX                            ; 0044fcef
    CALL support_codec.cpp_FUN_00441290 ; 0044fcf0
        ;   XREF to: 00441290 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00441290()
    ADD ESP,0x8                         ; 0044fcf5
    PUSH 0x0                            ; 0044fcf8
    LEA EAX,[ESP + 0x16c]               ; 0044fcfa
    PUSH EAX                            ; 0044fd01
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0 ; 0044fd02
        ;   XREF to: 00440bf0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044fd07
    PUSH 0x1                            ; 0044fd0a
    LEA EAX,[ESP + 0x168]               ; 0044fd0c
    PUSH EAX                            ; 0044fd13
    CALL support_codec.cpp_CCodec_dtor_FUN_00440810 ; 0044fd14
        ;   XREF to: 00440810 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00440810(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044fd19
    PUSH 0x0                            ; 0044fd1c
    LEA EAX,[ESP + 0x1b4]               ; 0044fd1e
        ;   Label: LAB_0044fd1e
    PUSH EAX                            ; 0044fd25
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_00574850 ; 0044fd26
        ;   XREF to: 00574850 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_00574850(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044fd2b
    ADD ESP,0x1fc                       ; 0044fd2e
    POP EBP                             ; 0044fd34
        ;   Label: LAB_0044fd34
    POP EDI                             ; 0044fd35
    POP ESI                             ; 0044fd36
    POP EBX                             ; 0044fd37
    RET                                 ; 0044fd38
    PUSH EAX                            ; 0044fd39
        ;   Label: LAB_0044fd39
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0044fd3a
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0044fd3f
    ADD ESP,0x1fc                       ; 0044fd42
    POP EBP                             ; 0044fd48
    POP EDI                             ; 0044fd49
    POP ESI                             ; 0044fd4a
    POP EBX                             ; 0044fd4b
    RET                                 ; 0044fd4c
    PUSH EBX                            ; 0044fd4d
        ;   Label: LAB_0044fd4d
    JMP 0x0044fd1e                      ; 0044fd4e
        ;   XREF to: 0044fd1e (UNCONDITIONAL_JUMP)  ; LAB_0044fd1e
    MOV byte ptr [EBX],0xff             ; 0044fd50 | DAT_0135ed50
        ;   Label: LAB_0044fd50
    JMP 0x0044fa0f                      ; 0044fd53
        ;   XREF to: 0044fa0f (UNCONDITIONAL_JUMP)  ; LAB_0044fa0f
    CMP EAX,0x3f                        ; 0044fd58
        ;   Label: LAB_0044fd58
    JLE 0x0044fb78                      ; 0044fd5b
        ;   XREF to: 0044fb78 (CONDITIONAL_JUMP)  ; LAB_0044fb78
    MOV EAX,0x3f                        ; 0044fd61
    JMP 0x0044fb78                      ; 0044fd66
        ;   XREF to: 0044fb78 (UNCONDITIONAL_JUMP)  ; LAB_0044fb78
    MOV dword ptr [0x01d71de0],0x5b9fbc ; 0044fd6b | DAT_01d71de0 | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_0044fd6b
    LEA EAX,[ESP + 0x100]               ; 0044fd75
    PUSH EAX                            ; 0044fd7c
    MOV EDX,0x13b1                      ; 0044fd7d
    PUSH 0x5b9fd0                       ; 0044fd82 | = "Error compressing %s"
    MOV dword ptr [0x01d71de4],EDX      ; 0044fd87 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044fd8d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0044fd92
    JMP 0x0044fc4f                      ; 0044fd95
        ;   XREF to: 0044fc4f (UNCONDITIONAL_JUMP)  ; LAB_0044fc4f
    LEA EAX,[ESP + 0x100]               ; 0044fd9a
        ;   Label: LAB_0044fd9a
    PUSH EAX                            ; 0044fda1
    MOV EDI,0x5ba01f                    ; 0044fda2 | = "..\\core\\dcamera.cpp"
    MOV EBP,0x13b4                      ; 0044fda7
    PUSH 0x5ba033                       ; 0044fdac | = "Error writing compressed file %s"
    MOV dword ptr [0x01d71de0],EDI      ; 0044fdb1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0044fdb7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044fdbd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0044fdc2
    JMP 0x0044fc9c                      ; 0044fdc5
        ;   XREF to: 0044fc9c (UNCONDITIONAL_JUMP)  ; LAB_0044fc9c

