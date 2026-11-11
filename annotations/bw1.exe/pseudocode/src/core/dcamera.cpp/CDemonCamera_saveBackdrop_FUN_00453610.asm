; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_00453610(CDemonCamera *this_ptr)
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
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044ef30 at 0044f177
;
; Referenced Globals:
;   TerminatedCString s_s_fog_005d790f
;   undefined4 DAT_005d7916
;   TerminatedCString s_backdrop_005d7919
;   TerminatedCString s_backdrop_s_005d7922
;   undefined4 DAT_005d792e
;   TerminatedCString s_core_dcamera_cpp_005d7931
;   TerminatedCString s_Can_t_create_s_005d7945
;   TerminatedCString s_core_dcamera_cpp_005d7955
;   TerminatedCString s_Error_compressing_s_005d7969
;   TerminatedCString s_core_dcamera_cpp_005d797e
;   TerminatedCString s_Not_all_bytes_consumed_c_005d7992
;   TerminatedCString s_core_dcamera_cpp_005d79b8
;   TerminatedCString s_Error_writing_compressed_005d79cc
;   undefined4 DAT_005d79ef
;   undefined4 DAT_00611298
;   ... and 20 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453c90
;   core_dcamera.cpp_resetFogSamplingOffset_FUN_0044c5e0
;   core_dcamera.cpp_sampleFogAlongRay_FUN_0044c840
;   core_dcamera.cpp_updateFogScrollOffset_FUN_0044ca20
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_dosio.cpp_FUN_00479180
;   support_codec.cpp_CCodec_dtor_FUN_00442bb0
;   support_codec.cpp_CLZWCompress_ctor_FUN_00443490
;   support_codec.cpp_CLZWCompress_init_FUN_004434e0
;   support_codec.cpp_CLZWDictionary_dtor_FUN_00442f90
;   support_codec.cpp_FUN_00442d10
;   support_codec.cpp_FUN_00443630
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453610
        ;   Label: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610
    PUSH ESI                            ; 00453611
    PUSH EDI                            ; 00453612
    PUSH EBP                            ; 00453613
    SUB ESP,0x1fc                       ; 00453614
    MOV EDX,0x1                         ; 0045361a
    PUSH 0x1480e2c                      ; 0045361f
    MOV ESI,0x10                        ; 00453624
    XOR ECX,ECX                         ; 00453629
    MOV dword ptr [0x013238cc],EDX      ; 0045362b | DAT_013238cc
    MOV dword ptr [0x01480e20],ECX      ; 00453631 | DAT_01480e20
    MOV dword ptr [0x01480e24],ECX      ; 00453637 | DAT_01480e24
    CALL core_dcamera.cpp_resetFogSamplingOffset_FUN_0044c5e0 ; 0045363d
        ;   XREF to: 0044c5e0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_resetFogSamplingOffset_FUN_0044c5e0()
    MOV EAX,[0x01481e38]                ; 00453642 | DAT_01481e38
    MOV EDI,dword ptr [0x01481e3c]      ; 00453647 | DAT_01481e3c
    MOV EBP,dword ptr [0x01481e40]      ; 0045364d | DAT_01481e40
    ADD ESP,0x4                         ; 00453653
    OR EAX,EDI                          ; 00453656
    MOV dword ptr [0x01480e28],ESI      ; 00453658 | DAT_01480e28
    OR EAX,EBP                          ; 0045365e
    JNZ 0x0045366c                      ; 00453660
        ;   XREF to: 0045366c (CONDITIONAL_JUMP)  ; LAB_0045366c
    MOV dword ptr [0x01480e28],0x1      ; 00453662 | DAT_01480e28
    MOV EAX,dword ptr [ESP + 0x210]     ; 0045366c
        ;   Label: LAB_0045366c
    ADD EAX,0x40                        ; 00453673
    PUSH EAX                            ; 00453676
    PUSH 0x5d790f                       ; 00453677 | = "%s.fog"
    LEA EAX,[ESP + 0x8]                 ; 0045367c
    PUSH EAX                            ; 00453680
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00453681
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00453686
    PUSH 0x5d7916                       ; 00453689 | DAT_005d7916
    LEA EAX,[ESP + 0x4]                 ; 0045368e
    PUSH EAX                            ; 00453692
    PUSH 0x5d7919                       ; 00453693 | = "backdrop"
    CALL engine_dosio.cpp_FUN_00479180  ; 00453698
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0045369d
    TEST EAX,EAX                        ; 004536a0
    JNZ 0x00453bf9                      ; 004536a2
        ;   XREF to: 00453bf9 (CONDITIONAL_JUMP)  ; LAB_00453bf9
    MOV EAX,ESP                         ; 004536a8
    PUSH EAX                            ; 004536aa
    PUSH 0x5d7922                       ; 004536ab | = "backdrop\\%s"
    LEA EAX,[ESP + 0x108]               ; 004536b0
    PUSH EAX                            ; 004536b7
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004536b8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004536bd
    PUSH 0x5d792e                       ; 004536c0 | DAT_005d792e
    LEA EAX,[ESP + 0x104]               ; 004536c5
    PUSH EAX                            ; 004536cc
    LEA EAX,[ESP + 0x1b8]               ; 004536cd
    PUSH EAX                            ; 004536d4
    CALL support_trstream.cpp_COutStreamFile_ctorOpen_FUN_005a17f0 ; 004536d5
        ;   XREF to: 005a17f0 (UNCONDITIONAL_CALL)  ; undefined4 * support_trstream.cpp_COutStreamFile_ctorOpen_FUN_005a17f0(COutStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004536da
    LEA EAX,[ESP + 0x1b0]               ; 004536dd
    PUSH EAX                            ; 004536e4
    CALL support_trstream.cpp_COutStreamFile_isOpen_FUN_005a1990 ; 004536e5
        ;   XREF to: 005a1990 (UNCONDITIONAL_CALL)  ; bool support_trstream.cpp_COutStreamFile_isOpen_FUN_005a1990(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004536ea
    TEST EAX,EAX                        ; 004536ed
    JNZ 0x0045371c                      ; 004536ef
        ;   XREF to: 0045371c (CONDITIONAL_JUMP)  ; LAB_0045371c
    LEA EAX,[ESP + 0x100]               ; 004536f1
    PUSH EAX                            ; 004536f8
    MOV EDX,0x5d7931                    ; 004536f9 | = "..\\core\\dcamera.cpp"
    MOV ECX,0x1329                      ; 004536fe
    PUSH 0x5d7945                       ; 00453703 | = "Can't create %s"
    MOV dword ptr [0x01d1d400],EDX      ; 00453708 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0045370e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00453714
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00453719
    PUSH 0x1000                         ; 0045371c
        ;   Label: LAB_0045371c
    PUSH 0x1480e2c                      ; 00453721
    LEA EAX,[ESP + 0x1b8]               ; 00453726
    PUSH EAX                            ; 0045372d
    CALL support_trstream.cpp_COutStreamFile_write_FUN_005a18f0 ; 0045372e
        ;   XREF to: 005a18f0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStreamFile_write_FUN_005a18f0(COutStreamFile * this_ptr, undefined4 param_2, int param_3)
    MOV EBX,dword ptr [0x01481e48]      ; 00453733 | DAT_01481e48
    ADD ESP,0xc                         ; 00453739
    TEST EBX,EBX                        ; 0045373c
    JZ 0x00453c0d                       ; 0045373e
        ;   XREF to: 00453c0d (CONDITIONAL_JUMP)  ; LAB_00453c0d
    MOV EAX,[0x00611298]                ; 00453744 | DAT_00611298
    PUSH 0x3                            ; 00453749
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0045374b | LAB_00444645
    LEA EAX,[ESP + 0x1bc]               ; 00453752
    PUSH EAX                            ; 00453759
    LEA EAX,[ESP + 0x1b8]               ; 0045375a
    PUSH EAX                            ; 00453761
    CALL support_trstream.cpp_COutStreamFile_write_FUN_005a18f0 ; 00453762
        ;   XREF to: 005a18f0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStreamFile_write_FUN_005a18f0(COutStreamFile * this_ptr, undefined4 param_2, int param_3)
    ADD ESP,0xc                         ; 00453767
    MOV EAX,dword ptr [ESP + 0x210]     ; 0045376a
    FLD double ptr [0x005d79ef]         ; 00453771 | DAT_005d79ef
    FLD float ptr [EAX + 0x4]           ; 00453777
    FMUL ST1                            ; 0045377a
    CALL crt_math.c_round_FUN_005c03a0  ; 0045377c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1a4]       ; 00453781
    FLD float ptr [EAX + 0x8]           ; 00453788
    FMUL ST1                            ; 0045378b
    PUSH 0x6                            ; 0045378d
    CALL crt_math.c_round_FUN_005c03a0  ; 0045378f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1ac]       ; 00453794
    FMUL float ptr [EAX + 0xc]          ; 0045379b
    PUSH 0x10000                        ; 0045379e
    LEA EAX,[ESP + 0x16c]               ; 004537a3
    CALL crt_math.c_round_FUN_005c03a0  ; 004537aa
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EAX                            ; 004537af
    FISTP dword ptr [ESP + 0x1b8]       ; 004537b0
    CALL support_codec.cpp_CLZWCompress_ctor_FUN_00443490 ; 004537b7
        ;   XREF to: 00443490 (UNCONDITIONAL_CALL)  ; CLZWCompress * support_codec.cpp_CLZWCompress_ctor_FUN_00443490(CLZWCompress * this_ptr, int buffer_size, int num_bits)
    ADD ESP,0xc                         ; 004537bc
    LEA EAX,[ESP + 0x164]               ; 004537bf
    PUSH EAX                            ; 004537c6
    XOR ESI,ESI                         ; 004537c7
    CALL support_codec.cpp_CLZWCompress_init_FUN_004434e0 ; 004537c9
        ;   XREF to: 004434e0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWCompress_init_FUN_004434e0(CLZWCompress * this_ptr)
    ADD ESP,0x4                         ; 004537ce
    MOV EDI,dword ptr [0x01480e28]      ; 004537d1 | DAT_01480e28
    MOV dword ptr [ESP + 0x1f4],ESI     ; 004537d7
    TEST EDI,EDI                        ; 004537de
    JLE 0x00453ba0                      ; 004537e0
        ;   XREF to: 00453ba0 (CONDITIONAL_JUMP)  ; LAB_00453ba0
    MOV dword ptr [ESP + 0x1c4],ESI     ; 004537e6
    MOV dword ptr [ESP + 0x1c0],0xfffed400 ; 004537ed
    PUSH 0x0                            ; 004537f8
        ;   Label: LAB_004537f8
    MOV EDI,dword ptr [ESP + 0x1f8]     ; 004537fa
    PUSH EDI                            ; 00453801
    PUSH 0x1480e2c                      ; 00453802
    CALL core_dcamera.cpp_updateFogScrollOffset_FUN_0044ca20 ; 00453807
        ;   XREF to: 0044ca20 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_updateFogScrollOffset_FUN_0044ca20()
    ADD ESP,0xc                         ; 0045380c
    MOV EAX,dword ptr [ESP + 0x210]     ; 0045380f
    MOV EBP,0x1                         ; 00453816
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045381b
    MOV dword ptr [ESP + 0x1dc],EBP     ; 00453821
    CMP EDX,EBP                         ; 00453828
    JLE 0x00453948                      ; 0045382a
        ;   XREF to: 00453948 (CONDITIONAL_JUMP)  ; LAB_00453948
    MOV EDI,0x140                       ; 00453830
    MOV EBP,0xf00                       ; 00453835
    MOV ESI,0x500                       ; 0045383a
    MOV dword ptr [ESP + 0x1cc],EDI     ; 0045383f
    MOV dword ptr [ESP + 0x1d0],EBP     ; 00453846
    MOV dword ptr [ESP + 0x1c8],ESI     ; 0045384d
    MOV EDI,0x857cd8                    ; 00453854 | DAT_00857cd8
        ;   Label: LAB_00453854
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00453859
    MOV EBX,0x1342220                   ; 00453860
    MOV EDX,dword ptr [ESP + 0x1cc]     ; 00453865
    MOV ESI,0xb36198                    ; 0045386c
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 00453871
    ADD EDI,EAX                         ; 00453878
    MOV EAX,dword ptr [ESP + 0x210]     ; 0045387a
    MOV EBP,0x1                         ; 00453881
    ADD EBX,EDX                         ; 00453886
    MOV EDX,dword ptr [EAX + 0x150]     ; 00453888
    ADD ESI,ECX                         ; 0045388e
    CMP EDX,EBP                         ; 00453890
    JLE 0x004538e8                      ; 00453892
        ;   XREF to: 004538e8 (CONDITIONAL_JUMP)  ; LAB_004538e8
    MOV EAX,dword ptr [ESI]             ; 00453894 | DAT_00b36698 | DAT_00b36b98 | DAT_00b36b9c
        ;   Label: LAB_00453894
    CMP EAX,0x7fffffff                  ; 00453896
    JZ 0x00453c10                       ; 0045389b
        ;   XREF to: 00453c10 (CONDITIONAL_JUMP)  ; LAB_00453c10
    PUSH EAX                            ; 004538a1
    PUSH EDI                            ; 004538a2 | DAT_00858bd8 | DAT_00859ae4
    LEA EAX,[ESP + 0x1ac]               ; 004538a3
    PUSH EAX                            ; 004538aa
    PUSH 0x1480e2c                      ; 004538ab
    CALL core_dcamera.cpp_sampleFogAlongRay_FUN_0044c840 ; 004538b0
        ;   XREF to: 0044c840 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_sampleFogAlongRay_FUN_0044c840()
    IMUL EAX,EAX,0xff                   ; 004538b5
    SHR EAX,0xe                         ; 004538bb
    ADD ESP,0x10                        ; 004538be
    CMP EAX,0xff                        ; 004538c1
    JBE 0x004538cd                      ; 004538c6
        ;   XREF to: 004538cd (CONDITIONAL_JUMP)  ; LAB_004538cd
    MOV EAX,0xff                        ; 004538c8
    MOV byte ptr [EBX],AL               ; 004538cd | DAT_01342360
        ;   Label: LAB_004538cd
    MOV EAX,dword ptr [ESP + 0x210]     ; 004538cf
        ;   Label: LAB_004538cf
    ADD EDI,0xc                         ; 004538d6
    INC EBX                             ; 004538d9
    INC EBP                             ; 004538da
    MOV ECX,dword ptr [EAX + 0x150]     ; 004538db
    ADD ESI,0x4                         ; 004538e1
    CMP EBP,ECX                         ; 004538e4
    JL 0x00453894                       ; 004538e6
        ;   XREF to: 00453894 (CONDITIONAL_JUMP)  ; LAB_00453894
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 004538e8
        ;   Label: LAB_004538e8
    MOV EBX,dword ptr [ESP + 0x1cc]     ; 004538ef
    MOV ESI,dword ptr [ESP + 0x1d0]     ; 004538f6
    MOV EDI,dword ptr [ESP + 0x1dc]     ; 004538fd
    MOV EDX,dword ptr [ESP + 0x210]     ; 00453904
    ADD ECX,0x500                       ; 0045390b
    ADD EBX,0x140                       ; 00453911
    ADD ESI,0xf00                       ; 00453917
    INC EDI                             ; 0045391d
    MOV EBP,dword ptr [EDX + 0x154]     ; 0045391e
    MOV dword ptr [ESP + 0x1c8],ECX     ; 00453924
    MOV dword ptr [ESP + 0x1cc],EBX     ; 0045392b
    MOV dword ptr [ESP + 0x1d0],ESI     ; 00453932
    MOV dword ptr [ESP + 0x1dc],EDI     ; 00453939
    CMP EDI,EBP                         ; 00453940
    JL 0x00453854                       ; 00453942
        ;   XREF to: 00453854 (CONDITIONAL_JUMP)  ; LAB_00453854
    MOV EAX,dword ptr [ESP + 0x1f4]     ; 00453948
        ;   Label: LAB_00453948
    PUSH EAX                            ; 0045394f
    MOV EDX,dword ptr [ESP + 0x214]     ; 00453950
    PUSH EDX                            ; 00453957
    CALL core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453c90 ; 00453958
        ;   XREF to: 00453c90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453c90(CDemonCamera * this_ptr, int plane_index)
    ADD ESP,0x8                         ; 0045395d
    MOV EAX,dword ptr [ESP + 0x210]     ; 00453960
    XOR ECX,ECX                         ; 00453967
    MOV EBX,dword ptr [EAX + 0x154]     ; 00453969
    MOV dword ptr [ESP + 0x1d8],ECX     ; 0045396f
    TEST EBX,EBX                        ; 00453976
    JLE 0x00453ad6                      ; 00453978
        ;   XREF to: 00453ad6 (CONDITIONAL_JUMP)  ; LAB_00453ad6
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0045397e
    MOV dword ptr [ESP + 0x1e8],EAX     ; 00453985
    MOV dword ptr [ESP + 0x1ec],EAX     ; 0045398c
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00453993
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0045399a
    MOV dword ptr [ESP + 0x1e4],EAX     ; 004539a1
    MOV dword ptr [ESP + 0x1d4],EAX     ; 004539a8
    XOR EBP,EBP                         ; 004539af
    MOV EAX,dword ptr [ESP + 0x210]     ; 004539b1
        ;   Label: LAB_004539b1
    MOV EDX,EBP                         ; 004539b8
    MOV ECX,dword ptr [EAX + 0x150]     ; 004539ba
    MOV EBX,EBP                         ; 004539c0
    CMP EBP,ECX                         ; 004539c2
    JGE 0x00453a8a                      ; 004539c4
        ;   XREF to: 00453a8a (CONDITIONAL_JUMP)  ; LAB_00453a8a
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004539ca
    MOV ECX,dword ptr [ESP + 0x1d4]     ; 004539d1
    MOV dword ptr [ESP + 0x1f8],EAX     ; 004539d8
    MOV ESI,EAX                         ; 004539df
    MOV dword ptr [ESP + 0x1f0],EAX     ; 004539e1
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004539e8
        ;   Label: LAB_004539e8
    ADD EAX,dword ptr [ESP + 0x1f8]     ; 004539ef
    MOV AL,byte ptr [EDX + EAX*0x1 + 0x1354e20] ; 004539f6
    MOV EDI,dword ptr [ESP + 0x1f4]     ; 004539fd
    AND EAX,0xff                        ; 00453a04
    CMP EBP,EDI                         ; 00453a09
    JGE 0x00453a25                      ; 00453a0b
        ;   XREF to: 00453a25 (CONDITIONAL_JUMP)  ; LAB_00453a25
    MOV EDI,dword ptr [ESP + 0x1e8]     ; 00453a0d
    ADD EDI,dword ptr [ESP + 0x1f8]     ; 00453a14
    MOVZX EDI,byte ptr [EDX + EDI*0x1 + 0x1354e20] ; 00453a1b
    SUB EAX,EDI                         ; 00453a23
    SAR EAX,0x2                         ; 00453a25
        ;   Label: LAB_00453a25
    SUB EAX,EBX                         ; 00453a28
    CMP EAX,-0x20                       ; 00453a2a
    JGE 0x00453c18                      ; 00453a2d
        ;   XREF to: 00453c18 (CONDITIONAL_JUMP)  ; LAB_00453c18
    MOV EAX,0xffffffe0                  ; 00453a33
    MOV byte ptr [ESI + 0x1342220],AL   ; 00453a38 | DAT_01342220 | DAT_01342221
        ;   Label: LAB_00453a38
    ADD EAX,EBX                         ; 00453a3e
    MOV EDI,dword ptr [ESP + 0x1f4]     ; 00453a40
    LEA EBX,[EAX*0x4 + 0x0]             ; 00453a47
    CMP EBP,EDI                         ; 00453a4e
    JGE 0x00453a6a                      ; 00453a50
        ;   XREF to: 00453a6a (CONDITIONAL_JUMP)  ; LAB_00453a6a
    MOV EDI,dword ptr [ESP + 0x1ec]     ; 00453a52
    ADD EDI,dword ptr [ESP + 0x1f0]     ; 00453a59
    MOVZX EDI,byte ptr [EDX + EDI*0x1 + 0x1354e20] ; 00453a60
    ADD EBX,EDI                         ; 00453a68
    MOV byte ptr [ECX + 0x1354e20],BL   ; 00453a6a
        ;   Label: LAB_00453a6a
    MOV EBX,EAX                         ; 00453a70
    MOV EAX,dword ptr [ESP + 0x210]     ; 00453a72
    INC ESI                             ; 00453a79
    INC EDX                             ; 00453a7a
    MOV EDI,dword ptr [EAX + 0x150]     ; 00453a7b
    INC ECX                             ; 00453a81
    CMP EDX,EDI                         ; 00453a82
    JL 0x004539e8                       ; 00453a84
        ;   XREF to: 004539e8 (CONDITIONAL_JUMP)  ; LAB_004539e8
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 00453a8a
        ;   Label: LAB_00453a8a
    MOV EBX,dword ptr [ESP + 0x1d4]     ; 00453a91
    MOV ESI,dword ptr [ESP + 0x1d8]     ; 00453a98
    MOV EDX,dword ptr [ESP + 0x210]     ; 00453a9f
    ADD ECX,0x140                       ; 00453aa6
    ADD EBX,0x140                       ; 00453aac
    INC ESI                             ; 00453ab2
    MOV EDI,dword ptr [EDX + 0x154]     ; 00453ab3
    MOV dword ptr [ESP + 0x1e0],ECX     ; 00453ab9
    MOV dword ptr [ESP + 0x1d4],EBX     ; 00453ac0
    MOV dword ptr [ESP + 0x1d8],ESI     ; 00453ac7
    CMP ESI,EDI                         ; 00453ace
    JL 0x004539b1                       ; 00453ad0
        ;   XREF to: 004539b1 (CONDITIONAL_JUMP)  ; LAB_004539b1
    LEA EAX,[ESP + 0x1b0]               ; 00453ad6
        ;   Label: LAB_00453ad6
    PUSH EAX                            ; 00453add
    LEA EAX,[ESP + 0x1c0]               ; 00453ade
    PUSH EAX                            ; 00453ae5
    PUSH 0x1342220                      ; 00453ae6 | DAT_01342220
    LEA EAX,[ESP + 0x170]               ; 00453aeb
    MOV EBP,0x12c00                     ; 00453af2
    PUSH EAX                            ; 00453af7
    MOV dword ptr [ESP + 0x1cc],EBP     ; 00453af8
    CALL support_codec.cpp_FUN_00442d10 ; 00453aff
        ;   XREF to: 00442d10 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00442d10()
    ADD ESP,0x10                        ; 00453b04
    TEST EAX,EAX                        ; 00453b07
    JZ 0x00453c2b                       ; 00453b09
        ;   XREF to: 00453c2b (CONDITIONAL_JUMP)  ; LAB_00453c2b
    CMP dword ptr [ESP + 0x1bc],0x0     ; 00453b0f
        ;   Label: LAB_00453b0f
    JZ 0x00453b44                       ; 00453b17
        ;   XREF to: 00453b44 (CONDITIONAL_JUMP)  ; LAB_00453b44
    LEA EAX,[ESP + 0x100]               ; 00453b19
    PUSH EAX                            ; 00453b20
    MOV EBX,0x5d797e                    ; 00453b21 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x1398                      ; 00453b26
    PUSH 0x5d7992                       ; 00453b2b | = "Not all bytes consumed compressing %s"
    MOV dword ptr [0x01d1d400],EBX      ; 00453b30 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00453b36 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00453b3c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00453b41
    LEA EAX,[ESP + 0x1b0]               ; 00453b44
        ;   Label: LAB_00453b44
    PUSH EAX                            ; 00453b4b
    CALL support_trstream.cpp_COutStreamFile_isOpen_FUN_005a1990 ; 00453b4c
        ;   XREF to: 005a1990 (UNCONDITIONAL_CALL)  ; bool support_trstream.cpp_COutStreamFile_isOpen_FUN_005a1990(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00453b51
    TEST EAX,EAX                        ; 00453b54
    JZ 0x00453c5a                       ; 00453b56
        ;   XREF to: 00453c5a (CONDITIONAL_JUMP)  ; LAB_00453c5a
    MOV EBP,dword ptr [ESP + 0x1c4]     ; 00453b5c
        ;   Label: LAB_00453b5c
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00453b63
    MOV EDX,dword ptr [ESP + 0x1f4]     ; 00453b6a
    MOV ECX,dword ptr [0x01480e28]      ; 00453b71 | DAT_01480e28
    ADD EBP,0x12c00                     ; 00453b77
    ADD EAX,0x12c00                     ; 00453b7d
    INC EDX                             ; 00453b82
    MOV dword ptr [ESP + 0x1c4],EBP     ; 00453b83
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00453b8a
    MOV dword ptr [ESP + 0x1f4],EDX     ; 00453b91
    CMP EDX,ECX                         ; 00453b98
    JL 0x004537f8                       ; 00453b9a
        ;   XREF to: 004537f8 (CONDITIONAL_JUMP)  ; LAB_004537f8
    LEA EAX,[ESP + 0x1b0]               ; 00453ba0
        ;   Label: LAB_00453ba0
    PUSH EAX                            ; 00453ba7
    LEA EAX,[ESP + 0x168]               ; 00453ba8
    PUSH EAX                            ; 00453baf
    CALL support_codec.cpp_FUN_00443630 ; 00453bb0
        ;   XREF to: 00443630 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00443630()
    ADD ESP,0x8                         ; 00453bb5
    PUSH 0x0                            ; 00453bb8
    LEA EAX,[ESP + 0x16c]               ; 00453bba
    PUSH EAX                            ; 00453bc1
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00442f90 ; 00453bc2
        ;   XREF to: 00442f90 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00442f90(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00453bc7
    PUSH 0x1                            ; 00453bca
    LEA EAX,[ESP + 0x168]               ; 00453bcc
    PUSH EAX                            ; 00453bd3
    CALL support_codec.cpp_CCodec_dtor_FUN_00442bb0 ; 00453bd4
        ;   XREF to: 00442bb0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00442bb0(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00453bd9
    PUSH 0x0                            ; 00453bdc
    LEA EAX,[ESP + 0x1b4]               ; 00453bde
        ;   Label: LAB_00453bde
    PUSH EAX                            ; 00453be5
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860 ; 00453be6
        ;   XREF to: 005a1860 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00453beb
    ADD ESP,0x1fc                       ; 00453bee
    POP EBP                             ; 00453bf4
        ;   Label: LAB_00453bf4
    POP EDI                             ; 00453bf5
    POP ESI                             ; 00453bf6
    POP EBX                             ; 00453bf7
    RET                                 ; 00453bf8
    PUSH EAX                            ; 00453bf9
        ;   Label: LAB_00453bf9
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00453bfa
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00453bff
    ADD ESP,0x1fc                       ; 00453c02
    POP EBP                             ; 00453c08
    POP EDI                             ; 00453c09
    POP ESI                             ; 00453c0a
    POP EBX                             ; 00453c0b
    RET                                 ; 00453c0c
    PUSH EBX                            ; 00453c0d
        ;   Label: LAB_00453c0d
    JMP 0x00453bde                      ; 00453c0e
        ;   XREF to: 00453bde (UNCONDITIONAL_JUMP)  ; LAB_00453bde
    MOV byte ptr [EBX],0xff             ; 00453c10 | DAT_013424a0
        ;   Label: LAB_00453c10
    JMP 0x004538cf                      ; 00453c13
        ;   XREF to: 004538cf (UNCONDITIONAL_JUMP)  ; LAB_004538cf
    CMP EAX,0x3f                        ; 00453c18
        ;   Label: LAB_00453c18
    JLE 0x00453a38                      ; 00453c1b
        ;   XREF to: 00453a38 (CONDITIONAL_JUMP)  ; LAB_00453a38
    MOV EAX,0x3f                        ; 00453c21
    JMP 0x00453a38                      ; 00453c26
        ;   XREF to: 00453a38 (UNCONDITIONAL_JUMP)  ; LAB_00453a38
    MOV dword ptr [0x01d1d400],0x5d7955 ; 00453c2b | DAT_01d1d400 | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_00453c2b
    LEA EAX,[ESP + 0x100]               ; 00453c35
    PUSH EAX                            ; 00453c3c
    MOV EDX,0x1396                      ; 00453c3d
    PUSH 0x5d7969                       ; 00453c42 | = "Error compressing %s"
    MOV dword ptr [0x01d1d404],EDX      ; 00453c47 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00453c4d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00453c52
    JMP 0x00453b0f                      ; 00453c55
        ;   XREF to: 00453b0f (UNCONDITIONAL_JUMP)  ; LAB_00453b0f
    LEA EAX,[ESP + 0x100]               ; 00453c5a
        ;   Label: LAB_00453c5a
    PUSH EAX                            ; 00453c61
    MOV EDI,0x5d79b8                    ; 00453c62 | = "..\\core\\dcamera.cpp"
    MOV EBP,0x1399                      ; 00453c67
    PUSH 0x5d79cc                       ; 00453c6c | = "Error writing compressed file %s"
    MOV dword ptr [0x01d1d400],EDI      ; 00453c71 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00453c77 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00453c7d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00453c82
    JMP 0x00453b5c                      ; 00453c85
        ;   XREF to: 00453b5c (UNCONDITIONAL_JUMP)  ; LAB_00453b5c

