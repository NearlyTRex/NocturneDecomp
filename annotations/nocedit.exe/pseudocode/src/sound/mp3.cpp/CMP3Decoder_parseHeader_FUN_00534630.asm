; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   file_size
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550 at 005345af
;   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 at 005acfba
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063ac5a
;   TerminatedCString s_MPEG_Layer_2_pick_table__0063ac6b
;   TerminatedCString s_sound_mp3_cpp_0063aca4
;   TerminatedCString s_js_bound_bad_layer_modex_0063acb5
;   TerminatedCString s_sound_mp3_cpp_0063ace1
;   TerminatedCString s_sound_mp3_cpp_0063acf2
;   TerminatedCString s_sound_mp3_cpp_0063ad03
;   TerminatedCString s_sound_mp3_cpp_0063ad14
;   TerminatedCString s_Out_of_memory_File_s_0063ad25
;   double DOUBLE_0063b2aa = 1000
;   void*[4][4] g_MpegLayer2AllocationTables
;   double[2][4] g_MpegSampleRateTable
;   int[2][3][15] g_MpegBitrateTable
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   ... and 1 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_ftell_FUN_00601560
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
;   sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534630
        ;   Label: sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630
    PUSH ESI                            ; 00534631
    PUSH EDI                            ; 00534632
    PUSH EBP                            ; 00534633
    SUB ESP,0x68                        ; 00534634
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00534637
    PUSH EDX                            ; 0053463b
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0 ; 0053463c
        ;   XREF to: 005349e0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00534641
    MOV ECX,0x1000                      ; 00534644
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00534649
    MOV EBP,dword ptr [ESP + 0x80]      ; 0053464d
    MOV EAX,dword ptr [ESP + 0x84]      ; 00534654
    MOV dword ptr [ESP + 0x5c],ECX      ; 0053465b
    ADD ESI,0x5320                      ; 0053465f
    MOV dword ptr [ESP + 0x54],EAX      ; 00534665
    MOV EBX,ESI                         ; 00534669
    MOV EAX,dword ptr [ESI]             ; 0053466b
    MOV EDI,ESI                         ; 0053466d
    TEST EAX,EAX                        ; 0053466f
    JNZ 0x0053477e                      ; 00534671
        ;   XREF to: 0053477e (CONDITIONAL_JUMP)  ; LAB_0053477e
    MOV ECX,dword ptr [EDI + 0x4]       ; 00534677
        ;   Label: LAB_00534677
    TEST ECX,ECX                        ; 0053467a
    JZ 0x00534698                       ; 0053467c
        ;   XREF to: 00534698 (CONDITIONAL_JUMP)  ; LAB_00534698
    PUSH 0x210                          ; 0053467e
    PUSH 0x63acf2                       ; 00534683 | = "..\\sound\\mp3.cpp"
    PUSH ECX                            ; 00534688
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00534689
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0053468e
    MOV dword ptr [EDI + 0x4],0x0       ; 00534691
    PUSH EBP                            ; 00534698
        ;   Label: LAB_00534698
    MOV dword ptr [EBX],EBP             ; 00534699
    CALL crt_stdio.c_ftell_FUN_00601560 ; 0053469b
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 005346a0
    PUSH 0x1ff                          ; 005346a3
    MOV dword ptr [EBX + 0x20],EAX      ; 005346a8
    MOV EAX,dword ptr [ESP + 0x58]      ; 005346ab
    PUSH 0x63ad03                       ; 005346af | = "..\\sound\\mp3.cpp"
    MOV dword ptr [EBX + 0x24],EAX      ; 005346b4
    MOV EAX,dword ptr [ESP + 0x64]      ; 005346b7
    PUSH EAX                            ; 005346bb
    MOV dword ptr [EBX + 0x8],EAX       ; 005346bc
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005346bf
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005346c4
    MOV dword ptr [EBX + 0x4],EAX       ; 005346c7
    TEST EAX,EAX                        ; 005346ca
    JNZ 0x005346f5                      ; 005346cc
        ;   XREF to: 005346f5 (CONDITIONAL_JUMP)  ; LAB_005346f5
    PUSH 0x2f68188                      ; 005346ce | g_CurrentMp3Filename
    MOV EAX,0x63ad14                    ; 005346d3 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x200                       ; 005346d8
    PUSH 0x63ad25                       ; 005346dd | = "Out of memory.  File: %s"
    MOV [0x02f0ca48],EAX                ; 005346e2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005346e7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005346ed
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005346f2
    PUSH 0x0                            ; 005346f5
        ;   Label: LAB_005346f5
    MOV ECX,dword ptr [EBX + 0x20]      ; 005346f7
    PUSH ECX                            ; 005346fa
    MOV ESI,dword ptr [EBX]             ; 005346fb
    PUSH ESI                            ; 005346fd
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 005346fe
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    MOV dword ptr [EBX + 0x10],0x0      ; 00534703
    MOV dword ptr [EBX + 0x14],0x0      ; 0053470a
    MOV EDI,0xfff                       ; 00534711
    MOV dword ptr [EBX + 0xc],0x0       ; 00534716
    MOV EBP,0x1fff                      ; 0053471d
    MOV EAX,dword ptr [EBX + 0x24]      ; 00534722
    ADD ESP,0xc                         ; 00534725
    MOV dword ptr [EBX + 0x28],EAX      ; 00534728
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0053472b
    MOV dword ptr [EBX + 0x18],0x0      ; 0053472f
    ADD EAX,0x5320                      ; 00534736
    MOV dword ptr [EBX + 0x1c],0x0      ; 0053473b
    MOV EBX,0xc                         ; 00534742
    MOV EDX,dword ptr [EAX + 0xc]       ; 00534747
    MOV ESI,EAX                         ; 0053474a
    AND EDX,0x7                         ; 0053474c
    JNZ 0x0053479c                      ; 0053474f
        ;   XREF to: 0053479c (CONDITIONAL_JUMP)  ; LAB_0053479c
    PUSH EBX                            ; 00534751
        ;   Label: LAB_00534751
    PUSH ESI                            ; 00534752
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00534753
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00534758
    MOV EBX,EAX                         ; 0053475b
    MOV EAX,EBX                         ; 0053475d
        ;   Label: LAB_0053475d
    AND EAX,EBP                         ; 0053475f
    CMP EAX,EDI                         ; 00534761
    JZ 0x005347af                       ; 00534763
        ;   XREF to: 005347af (CONDITIONAL_JUMP)  ; LAB_005347af
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00534765
    TEST EAX,EAX                        ; 00534768
    JNZ 0x005347af                      ; 0053476a
        ;   XREF to: 005347af (CONDITIONAL_JUMP)  ; LAB_005347af
    PUSH 0x8                            ; 0053476c
    PUSH ESI                            ; 0053476e
    SHL EBX,0x8                         ; 0053476f
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 00534772
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 00534777
    OR EBX,EAX                          ; 0053477a
    JMP 0x0053475d                      ; 0053477c
        ;   XREF to: 0053475d (UNCONDITIONAL_JUMP)  ; LAB_0053475d
    PUSH 0x20b                          ; 0053477e
        ;   Label: LAB_0053477e
    PUSH 0x63ace1                       ; 00534783 | = "..\\sound\\mp3.cpp"
    PUSH EAX                            ; 00534788
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00534789
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0053478e
    MOV dword ptr [ESI],0x0             ; 00534791
    JMP 0x00534677                      ; 00534797
        ;   XREF to: 00534677 (UNCONDITIONAL_JUMP)  ; LAB_00534677
    MOV ECX,0x8                         ; 0053479c
        ;   Label: LAB_0053479c
    SUB ECX,EDX                         ; 005347a1
    PUSH ECX                            ; 005347a3
    PUSH EAX                            ; 005347a4
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 005347a5
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 005347aa
    JMP 0x00534751                      ; 005347ad
        ;   XREF to: 00534751 (UNCONDITIONAL_JUMP)  ; LAB_00534751
    MOV EAX,ESP                         ; 005347af
        ;   Label: LAB_005347af
    MOV dword ptr [ESP + 0x30],EAX      ; 005347b1
    LEA EAX,[ESP + 0x30]                ; 005347b5
    PUSH EAX                            ; 005347b9
    MOV EAX,dword ptr [ESP + 0x80]      ; 005347ba
    ADD EAX,0x5320                      ; 005347c1
    PUSH EAX                            ; 005347c6
    CALL sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0 ; 005347c7
        ;   XREF to: 0052f5b0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0(CFileBitStream * this_ptr, SMpegFrameHeader * header_out)
    ADD ESP,0x8                         ; 005347cc
    MOV EDI,dword ptr [ESP + 0x30]      ; 005347cf
    MOV EAX,dword ptr [EDI + 0x1c]      ; 005347d3
    LEA EBX,[ESP + 0x30]                ; 005347d6
    MOV dword ptr [ESP + 0x34],EAX      ; 005347da
    CMP EAX,0x3                         ; 005347de
    SETNZ AL                            ; 005347e1
    AND EAX,0xff                        ; 005347e4
    INC EAX                             ; 005347e9
    MOV dword ptr [EBX + 0x10],EAX      ; 005347ea
    CMP dword ptr [EDI + 0x4],0x2       ; 005347ed
    JNZ 0x005349b4                      ; 005347f1
        ;   XREF to: 005349b4 (CONDITIONAL_JUMP)  ; LAB_005349b4
    MOV EAX,dword ptr [EBX + 0x18]      ; 005347f7
    MOV ESI,dword ptr [EBX]             ; 005347fa
    MOV dword ptr [ESP + 0x60],EAX      ; 005347fc
    MOV EAX,dword ptr [ESI + 0x4]       ; 00534800
    DEC EAX                             ; 00534803
    MOV dword ptr [ESP + 0x4c],EAX      ; 00534804
    MOV EAX,dword ptr [ESI + 0xc]       ; 00534808
    MOV EBP,dword ptr [ESI]             ; 0053480b
    MOV dword ptr [ESP + 0x50],EAX      ; 0053480d
    LEA EAX,[EBP*0x4 + 0x0]             ; 00534811
    SUB EAX,EBP                         ; 00534818
    SHL EAX,0x2                         ; 0053481a
    MOV ECX,EAX                         ; 0053481d
    SHL ECX,0x4                         ; 0053481f
    SUB ECX,EAX                         ; 00534822
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00534824
    SHL EAX,0x2                         ; 00534828
    MOV EDX,EAX                         ; 0053482b
    SHL EAX,0x4                         ; 0053482d
    SUB EAX,EDX                         ; 00534830
    ADD ECX,EAX                         ; 00534832
    MOV EAX,dword ptr [ESP + 0x50]      ; 00534834
    MOV EDX,dword ptr [ECX + EAX*0x4 + 0x67e258] ; 00534838 | g_MpegBitrateTable
    MOV EAX,EDX                         ; 0053483f
    MOV ECX,dword ptr [EBX + 0x10]      ; 00534841
    SAR EDX,0x1f                        ; 00534844
    IDIV ECX                            ; 00534847
    MOV EDX,EAX                         ; 00534849
    MOV EAX,EBP                         ; 0053484b
    MOV ECX,dword ptr [ESI + 0x10]      ; 0053484d
    SHL EAX,0x5                         ; 00534850
    MOV dword ptr [ESP + 0x58],EBX      ; 00534853
    FLD double ptr [EAX + ECX*0x8 + 0x67e218] ; 00534857 | g_MpegSampleRateTable
    CALL crt_math.c_round_FUN_005fe6b0  ; 0053485e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x64]        ; 00534863
    CMP EBP,0x1                         ; 00534867
    JNZ 0x005349aa                      ; 0053486a
        ;   XREF to: 005349aa (CONDITIONAL_JUMP)  ; LAB_005349aa
    CMP dword ptr [ESP + 0x64],0x30     ; 00534870
    JNZ 0x00534966                      ; 00534875
        ;   XREF to: 00534966 (CONDITIONAL_JUMP)  ; LAB_00534966
    CMP EDX,0x38                        ; 0053487b
    JL 0x00534966                       ; 0053487e
        ;   XREF to: 00534966 (CONDITIONAL_JUMP)  ; LAB_00534966
    XOR EAX,EAX                         ; 00534884
        ;   Label: LAB_00534884
    MOV EDX,dword ptr [ESP + 0x58]      ; 00534886
        ;   Label: LAB_00534886
    CMP EAX,dword ptr [EDX + 0xc]       ; 0053488a
    JZ 0x005348b7                       ; 0053488d
        ;   XREF to: 005348b7 (CONDITIONAL_JUMP)  ; LAB_005348b7
    PUSH 0x2f68188                      ; 0053488f | g_CurrentMp3Filename
    MOV ESI,0x63ac5a                    ; 00534894 | = "..\\sound\\mp3.cpp"
    MOV EBP,0x1a2                       ; 00534899
    PUSH 0x63ac6b                       ; 0053489e | = "MPEG Layer 2 - pick_table - can't loa..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005348a3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005348a9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005348af
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005348b4
    MOV EAX,dword ptr [ESP + 0x60]      ; 005348b7
        ;   Label: LAB_005348b7
    MOV dword ptr [EBX + 0x18],EAX      ; 005348bb
    MOV EAX,dword ptr [EDI + 0x1c]      ; 005348be
        ;   Label: LAB_005348be
    CMP EAX,0x1                         ; 005348c1
    JNZ 0x005349d6                      ; 005348c4
        ;   XREF to: 005349d6 (CONDITIONAL_JUMP)  ; LAB_005349d6
    MOV EBP,dword ptr [EDI + 0x4]       ; 005348ca
    MOV ESI,dword ptr [EDI + 0x20]      ; 005348cd
    CMP EBP,EAX                         ; 005348d0
    JL 0x005348dd                       ; 005348d2
        ;   XREF to: 005348dd (CONDITIONAL_JUMP)  ; LAB_005348dd
    CMP EBP,0x3                         ; 005348d4
    JLE 0x005349c0                      ; 005348d7
        ;   XREF to: 005349c0 (CONDITIONAL_JUMP)  ; LAB_005349c0
    PUSH 0x2f68188                      ; 005348dd | g_CurrentMp3Filename
        ;   Label: LAB_005348dd
    PUSH ESI                            ; 005348e2
    PUSH EBP                            ; 005348e3
    MOV EDX,0x63aca4                    ; 005348e4 | = "..\\sound\\mp3.cpp"
    MOV ECX,0x1b2                       ; 005348e9
    PUSH 0x63acb5                       ; 005348ee | = "js_bound bad layer/modext (%d/%d)  Fi..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005348f3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005348f9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005348ff
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 00534904
    SHL ESI,0x2                         ; 00534907
        ;   Label: LAB_00534907
    SHL EBP,0x4                         ; 0053490a
    LEA EAX,[ESI + EBP*0x1]             ; 0053490d
    MOV EAX,dword ptr [EAX + 0x67d820]  ; 00534910 | g_MpegLayer2AllocationTables
    MOV dword ptr [EBX + 0x14],EAX      ; 00534916
        ;   Label: LAB_00534916
    MOV EDX,dword ptr [ESP]             ; 00534919
    MOV EAX,dword ptr [ESP + 0x10]      ; 0053491c
    SHL EDX,0x5                         ; 00534920
    FLD double ptr [EDX + EAX*0x8 + 0x67e218] ; 00534923 | g_MpegSampleRateTable
    FMUL double ptr [0x0063b2aa]        ; 0053492a | DOUBLE_0063b2aa
    PUSH 0x0                            ; 00534930
    MOV EAX,dword ptr [ESP + 0x80]      ; 00534932
    MOV EDX,dword ptr [ESP + 0x80]      ; 00534939
    CALL crt_math.c_round_FUN_005fe6b0  ; 00534940
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX + 0x100]       ; 00534945
    MOV EAX,dword ptr [ESP + 0x44]      ; 0053494b
    PUSH EDX                            ; 0053494f
    MOV dword ptr [EDX + 0x104],EAX     ; 00534950
    CALL sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0 ; 00534956
        ;   XREF to: 00534ba0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0(CMP3Decoder * this_ptr, int sample_offset)
    ADD ESP,0x8                         ; 0053495b
    ADD ESP,0x68                        ; 0053495e
    POP EBP                             ; 00534961
    POP EDI                             ; 00534962
    POP ESI                             ; 00534963
    POP EBX                             ; 00534964
    RET                                 ; 00534965
    CMP EDX,0x38                        ; 00534966
        ;   Label: LAB_00534966
    JL 0x00534974                       ; 00534969
        ;   XREF to: 00534974 (CONDITIONAL_JUMP)  ; LAB_00534974
    CMP EDX,0x50                        ; 0053496b
    JLE 0x00534884                      ; 0053496e
        ;   XREF to: 00534884 (CONDITIONAL_JUMP)  ; LAB_00534884
    CMP dword ptr [ESP + 0x64],0x30     ; 00534974
        ;   Label: LAB_00534974
    JZ 0x0053498a                       ; 00534979
        ;   XREF to: 0053498a (CONDITIONAL_JUMP)  ; LAB_0053498a
    CMP EDX,0x60                        ; 0053497b
    JL 0x0053498a                       ; 0053497e
        ;   XREF to: 0053498a (CONDITIONAL_JUMP)  ; LAB_0053498a
    MOV EAX,0x1                         ; 00534980
    JMP 0x00534886                      ; 00534985
        ;   XREF to: 00534886 (UNCONDITIONAL_JUMP)  ; LAB_00534886
    CMP dword ptr [ESP + 0x64],0x20     ; 0053498a
        ;   Label: LAB_0053498a
    JZ 0x005349a0                       ; 0053498f
        ;   XREF to: 005349a0 (CONDITIONAL_JUMP)  ; LAB_005349a0
    CMP EDX,0x30                        ; 00534991
    JG 0x005349a0                       ; 00534994
        ;   XREF to: 005349a0 (CONDITIONAL_JUMP)  ; LAB_005349a0
    MOV EAX,0x2                         ; 00534996
    JMP 0x00534886                      ; 0053499b
        ;   XREF to: 00534886 (UNCONDITIONAL_JUMP)  ; LAB_00534886
    MOV EAX,0x3                         ; 005349a0
        ;   Label: LAB_005349a0
    JMP 0x00534886                      ; 005349a5
        ;   XREF to: 00534886 (UNCONDITIONAL_JUMP)  ; LAB_00534886
    MOV EAX,0x4                         ; 005349aa
        ;   Label: LAB_005349aa
    JMP 0x00534886                      ; 005349af
        ;   XREF to: 00534886 (UNCONDITIONAL_JUMP)  ; LAB_00534886
    MOV dword ptr [EBX + 0x18],0x20     ; 005349b4
        ;   Label: LAB_005349b4
    JMP 0x005348be                      ; 005349bb
        ;   XREF to: 005348be (UNCONDITIONAL_JUMP)  ; LAB_005348be
    TEST ESI,ESI                        ; 005349c0
        ;   Label: LAB_005349c0
    JL 0x005348dd                       ; 005349c2
        ;   XREF to: 005348dd (CONDITIONAL_JUMP)  ; LAB_005348dd
    CMP ESI,0x3                         ; 005349c8
    JG 0x005348dd                       ; 005349cb
        ;   XREF to: 005348dd (CONDITIONAL_JUMP)  ; LAB_005348dd
    JMP 0x00534907                      ; 005349d1
        ;   XREF to: 00534907 (UNCONDITIONAL_JUMP)  ; LAB_00534907
    MOV EAX,dword ptr [EBX + 0x18]      ; 005349d6
        ;   Label: LAB_005349d6
    JMP 0x00534916                      ; 005349d9
        ;   XREF to: 00534916 (UNCONDITIONAL_JUMP)  ; LAB_00534916

