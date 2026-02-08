; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680 (CMP3Decoder *this_ptr,float *spectral_dest,SMpegLayer3Granule *granule_info,int channel, int granule,SMpegFrame *frame,int bit_budget)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   spectral_dest
; SMpegLayer3Granule * Stack[0xc]:4   granule_info
; int              Stack[0x10]:4   channel
; int              Stack[0x14]:4   granule
; SMpegFrame *     Stack[0x18]:4   frame
; int              Stack[0x1c]:4   bit_budget
; Local Variables:
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535858
;
; Referenced Globals:
;   TerminatedCString s_d_0063af26
;   TerminatedCString s_u_0063af29
;   TerminatedCString s_sound_mp3_cpp_0063af2c
;   TerminatedCString s_wrong_table_number_u_Fil_0063af3d
;   TerminatedCString s_sound_mp3_cpp_0063af5e
;   TerminatedCString s_wrong_table_u_reference__0063af6f
;   TerminatedCString s_sound_mp3_cpp_0063af93
;   TerminatedCString s_MP3_Huffman_tree_overflo_0063afa4
;   TerminatedCString s_sound_mp3_cpp_0063afc9
;   TerminatedCString s_huffman_decodertable_err_0063afda
;   TerminatedCString s_sound_mp3_cpp_0063b00c
;   TerminatedCString s_decoder_table_read_error_0063b01d
;   undefined4 DAT_0067e6cc
;   undefined4 DAT_0067e6d0
;   SHuffmanTableSource[34] g_HuffmanTableSources
;   ... and 23 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
;   sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
;   sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531680
        ;   Label: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
    PUSH ESI                            ; 00531681
    PUSH EDI                            ; 00531682
    PUSH EBP                            ; 00531683
    SUB ESP,0x38                        ; 00531684
    MOV ECX,dword ptr [ESP + 0x64]      ; 00531687
    MOV ECX,dword ptr [ECX]             ; 0053168b
    MOV EDX,dword ptr [ECX]             ; 0053168d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053168f
    SUB EAX,EDX                         ; 00531696
    MOV EDX,dword ptr [ECX + 0x10]      ; 00531698
    ADD EDX,EAX                         ; 0053169b
    MOV dword ptr [ESP + 0x14],EDX      ; 0053169d
    MOV EDX,dword ptr [0x02f45980]      ; 005316a1 | g_HuffmanTablesInitialized
    TEST EDX,EDX                        ; 005316a7
    JZ 0x005318e0                       ; 005316a9
        ;   XREF to: 005318e0 (CONDITIONAL_JUMP)  ; LAB_005318e0
    MOV EDX,dword ptr [ESP + 0x58]      ; 005316af
        ;   Label: LAB_005316af
    LEA EAX,[EDX*0x4 + 0x0]             ; 005316b3
    ADD EAX,EDX                         ; 005316ba
    MOV ECX,dword ptr [ESP + 0x54]      ; 005316bc
    SHL EAX,0x5                         ; 005316c0
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005316c3
    ADD ECX,EAX                         ; 005316c7
    LEA EAX,[EDX*0x8 + 0x0]             ; 005316c9
    ADD EAX,EDX                         ; 005316d0
    SHL EAX,0x3                         ; 005316d2
    ADD EAX,ECX                         ; 005316d5
    CMP dword ptr [EAX + 0x28],0x0      ; 005316d7
    JZ 0x00531b44                       ; 005316db
        ;   XREF to: 00531b44 (CONDITIONAL_JUMP)  ; LAB_00531b44
    CMP dword ptr [EAX + 0x2c],0x2      ; 005316e1
    JNZ 0x00531b44                      ; 005316e5
        ;   XREF to: 00531b44 (CONDITIONAL_JUMP)  ; LAB_00531b44
    MOV EBX,0x24                        ; 005316eb
    MOV EBP,0x240                       ; 005316f0
    MOV dword ptr [ESP + 0x28],EBX      ; 005316f5
    MOV EDX,dword ptr [ESP + 0x58]      ; 005316f9
        ;   Label: LAB_005316f9
    MOV EBX,dword ptr [ESP + 0x54]      ; 005316fd
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00531701
    LEA EAX,[EDX*0x4 + 0x0]             ; 00531705
    PUSH ESI                            ; 0053170c
    ADD EAX,EDX                         ; 0053170d
    XOR ESI,ESI                         ; 0053170f
    MOV EDX,dword ptr [ESP + 0x60]      ; 00531711
    SHL EAX,0x5                         ; 00531715
    LEA EDI,[EDX*0x8 + 0x0]             ; 00531718
    ADD EBX,EAX                         ; 0053171f
    ADD EDI,EDX                         ; 00531721
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160 ; 00531723
        ;   XREF to: 0052f160 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00531728
    SHL EDI,0x3                         ; 0053172b
    MOV dword ptr [ESP + 0x24],EBX      ; 0053172e
    MOV dword ptr [ESP + 0x18],EDI      ; 00531732
    MOV EBX,0x1                         ; 00531736
    MOV EDI,dword ptr [ESP + 0x24]      ; 0053173b
        ;   Label: LAB_0053173b
    ADD EDI,dword ptr [ESP + 0x18]      ; 0053173f
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00531743
    ADD EAX,EAX                         ; 00531746
    CMP ESI,EAX                         ; 00531748
    JC 0x00531ba0                       ; 0053174a
        ;   XREF to: 00531ba0 (CONDITIONAL_JUMP)  ; LAB_00531ba0
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00531750
    PUSH EDX                            ; 00531754
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160 ; 00531755
        ;   XREF to: 0052f160 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
    MOV EDX,dword ptr [EDI + 0x5c]      ; 0053175a
    ADD EDX,0x20                        ; 0053175d
    MOV EAX,EDX                         ; 00531760
    SHL EAX,0x6                         ; 00531762
    ADD EAX,EDX                         ; 00531765
    SHL EAX,0x2                         ; 00531767
    ADD EAX,EDX                         ; 0053176a
    MOV EDX,0x2f68288                   ; 0053176c | g_HuffmanTables
    SHL EAX,0x3                         ; 00531771
    ADD ESP,0x4                         ; 00531774
    ADD EDX,EAX                         ; 00531777
    MOV dword ptr [ESP + 0x20],EDX      ; 00531779
    MOV EDX,dword ptr [ESP + 0x58]      ; 0053177d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00531781
    ADD EAX,EDX                         ; 00531788
    MOV ECX,dword ptr [ESP + 0x54]      ; 0053178a
    SHL EAX,0x5                         ; 0053178e
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00531791
    ADD ECX,EAX                         ; 00531795
    LEA EAX,[EDX*0x8 + 0x0]             ; 00531797
    ADD EAX,EDX                         ; 0053179e
    LEA EDI,[ESI + 0x3]                 ; 005317a0
    SHL EAX,0x3                         ; 005317a3
    LEA EBP,[ESI + 0x2]                 ; 005317a6
    ADD ECX,EAX                         ; 005317a9
    LEA EBX,[ESI + 0x1]                 ; 005317ab
    MOV dword ptr [ESP + 0x1c],ECX      ; 005317ae
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005317b2
        ;   Label: LAB_005317b2
    MOV EAX,dword ptr [ESP + 0x60]      ; 005317b6
    MOV ECX,dword ptr [EDX + 0x18]      ; 005317ba
    ADD EAX,ECX                         ; 005317bd
    MOV dword ptr [ESP + 0x34],EAX      ; 005317bf
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005317c3
    PUSH EAX                            ; 005317c7
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160 ; 005317c8
        ;   XREF to: 0052f160 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005317cd
    CMP EAX,dword ptr [ESP + 0x34]      ; 005317d0
    JNC 0x00531c4c                      ; 005317d4
        ;   XREF to: 00531c4c (CONDITIONAL_JUMP)  ; LAB_00531c4c
    CMP ESI,0x240                       ; 005317da
    JGE 0x00531c4c                      ; 005317e0
        ;   XREF to: 00531c4c (CONDITIONAL_JUMP)  ; LAB_00531c4c
    LEA EAX,[ESP + 0xc]                 ; 005317e6
    PUSH EAX                            ; 005317ea
    LEA EAX,[ESP + 0xc]                 ; 005317eb
    PUSH EAX                            ; 005317ef
    LEA EAX,[ESP + 0xc]                 ; 005317f0
    PUSH EAX                            ; 005317f4
    LEA EAX,[ESP + 0xc]                 ; 005317f5
    PUSH EAX                            ; 005317f9
    MOV EAX,dword ptr [ESP + 0x30]      ; 005317fa
    PUSH EAX                            ; 005317fe
    MOV EDX,dword ptr [ESP + 0x60]      ; 005317ff
    PUSH EDX                            ; 00531803
    CALL sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350 ; 00531804
        ;   XREF to: 0052f350 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350(CMP3Decoder * this_ptr, SHuffmanTable * huffman_table, int * x_out, int * y_out, ...)
    MOV ECX,0x12                        ; 00531809
    MOV EDX,ESI                         ; 0053180e
    MOV EAX,ESI                         ; 00531810
    SAR EDX,0x1f                        ; 00531812
    IDIV ECX                            ; 00531815
    IMUL EAX,EAX,0x48                   ; 00531817
    ADD ESP,0x18                        ; 0053181a
    MOV dword ptr [ESP + 0x34],0x12     ; 0053181d
    MOV EDX,ESI                         ; 00531825
    MOV ECX,dword ptr [ESP + 0x50]      ; 00531827
    SAR EDX,0x1f                        ; 0053182b
    ADD ECX,EAX                         ; 0053182e
    MOV EAX,ESI                         ; 00531830
    IDIV dword ptr [ESP + 0x34]         ; 00531832
    MOV EAX,dword ptr [ESP + 0x8]       ; 00531836
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 0053183a
    MOV ECX,0x12                        ; 0053183d
    MOV EDX,EBX                         ; 00531842
    MOV EAX,EBX                         ; 00531844
    SAR EDX,0x1f                        ; 00531846
    IDIV ECX                            ; 00531849
    IMUL EAX,EAX,0x48                   ; 0053184b
    MOV dword ptr [ESP + 0x34],0x12     ; 0053184e
    MOV EDX,EBX                         ; 00531856
    MOV ECX,dword ptr [ESP + 0x50]      ; 00531858
    SAR EDX,0x1f                        ; 0053185c
    ADD ECX,EAX                         ; 0053185f
    MOV EAX,EBX                         ; 00531861
    IDIV dword ptr [ESP + 0x34]         ; 00531863
    MOV EAX,dword ptr [ESP + 0xc]       ; 00531867
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 0053186b
    MOV ECX,0x12                        ; 0053186e
    MOV EDX,EBP                         ; 00531873
    MOV EAX,EBP                         ; 00531875
    SAR EDX,0x1f                        ; 00531877
    IDIV ECX                            ; 0053187a
    IMUL EAX,EAX,0x48                   ; 0053187c
    MOV dword ptr [ESP + 0x34],0x12     ; 0053187f
    MOV EDX,EBP                         ; 00531887
    MOV ECX,dword ptr [ESP + 0x50]      ; 00531889
    SAR EDX,0x1f                        ; 0053188d
    ADD ECX,EAX                         ; 00531890
    MOV EAX,EBP                         ; 00531892
    IDIV dword ptr [ESP + 0x34]         ; 00531894
    MOV EAX,dword ptr [ESP]             ; 00531898
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 0053189b
    MOV ECX,0x12                        ; 0053189e
    MOV EDX,EDI                         ; 005318a3
    MOV EAX,EDI                         ; 005318a5
    SAR EDX,0x1f                        ; 005318a7
    IDIV ECX                            ; 005318aa
    IMUL EAX,EAX,0x48                   ; 005318ac
    MOV dword ptr [ESP + 0x34],0x12     ; 005318af
    MOV EDX,EDI                         ; 005318b7
    MOV ECX,dword ptr [ESP + 0x50]      ; 005318b9
    SAR EDX,0x1f                        ; 005318bd
    ADD ECX,EAX                         ; 005318c0
    MOV EAX,EDI                         ; 005318c2
    IDIV dword ptr [ESP + 0x34]         ; 005318c4
    ADD ESI,0x4                         ; 005318c8
    ADD EBX,0x4                         ; 005318cb
    ADD EBP,0x4                         ; 005318ce
    MOV EAX,dword ptr [ESP + 0x4]       ; 005318d1
    ADD EDI,0x4                         ; 005318d5
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 005318d8
    JMP 0x005317b2                      ; 005318db
        ;   XREF to: 005317b2 (UNCONDITIONAL_JUMP)  ; LAB_005317b2
    MOV ECX,0x2f68288                   ; 005318e0 | g_HuffmanTables
        ;   Label: LAB_005318e0
    MOV dword ptr [ESP + 0x30],EDX      ; 005318e5
    XOR EBX,EBX                         ; 005318e9
    XOR EBP,EBP                         ; 005318eb
    MOV dword ptr [ESP + 0x2c],ECX      ; 005318ed | g_HuffmanTables
    PUSH EBP                            ; 005318f1
        ;   Label: LAB_005318f1
    PUSH 0x63af26                       ; 005318f2 | = "%d"
    MOV EDI,dword ptr [ESP + 0x34]      ; 005318f7
    PUSH EDI                            ; 005318fb | g_HuffmanTables | DAT_02f68ab0
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005318fc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00531901
    MOV EAX,dword ptr [ESP + 0x30]      ; 00531904
    MOV EAX,dword ptr [EAX + 0x680170]  ; 00531908 | g_HuffmanTableSources
    MOV dword ptr [EBX + 0x2f68aac],EAX ; 0053190e | g_HuffmanTables[0].table_size
    MOV EAX,dword ptr [ESP + 0x30]      ; 00531914
    MOV EAX,dword ptr [EAX + 0x680174]  ; 00531918 | DAT_00680174
    MOV dword ptr [EBX + 0x2f6828c],EAX ; 0053191e | DAT_02f6828c
    MOV EAX,dword ptr [ESP + 0x30]      ; 00531924
    MOV EAX,dword ptr [EAX + 0x680178]  ; 00531928 | DAT_00680178
    MOV dword ptr [EBX + 0x2f68290],EAX ; 0053192e | DAT_02f68290
    MOV EAX,dword ptr [ESP + 0x30]      ; 00531934
    MOV EAX,dword ptr [EAX + 0x68017c]  ; 00531938 | DAT_0068017c
    MOV dword ptr [EBX + 0x2f68294],EAX ; 0053193e | DAT_02f68294
    MOV EAX,0x1                         ; 00531944
    MOV CL,byte ptr [EBX + 0x2f68294]   ; 00531949 | DAT_02f68294
    SHL EAX,CL                          ; 0053194f
    DEC EAX                             ; 00531951
    MOV dword ptr [EBX + 0x2f68298],EAX ; 00531952 | DAT_02f68298
    LEA EAX,[ESP + 0x10]                ; 00531958
    PUSH EAX                            ; 0053195c
    PUSH 0x63af29                       ; 0053195d | = "%u"
    PUSH EDI                            ; 00531962 | g_HuffmanTables
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00531963
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 00531968
    CMP EBP,dword ptr [ESP + 0x10]      ; 0053196b
    JZ 0x0053199a                       ; 0053196f
        ;   XREF to: 0053199a (CONDITIONAL_JUMP)  ; LAB_0053199a
    PUSH 0x2f68188                      ; 00531971 | g_CurrentMp3Filename
    PUSH EBP                            ; 00531976
    MOV ECX,0x63af2c                    ; 00531977 | = "..\\sound\\mp3.cpp"
    MOV ESI,0xd72                       ; 0053197c
    PUSH 0x63af3d                       ; 00531981 | = "wrong table number %u.  File: %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 00531986 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0053198c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00531992
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00531997
    MOV EAX,dword ptr [ESP + 0x30]      ; 0053199a
        ;   Label: LAB_0053199a
    MOV EAX,dword ptr [EAX + 0x680180]  ; 0053199e | DAT_00680180
    TEST EAX,EAX                        ; 005319a4
    JL 0x00531a9d                       ; 005319a6
        ;   XREF to: 00531a9d (CONDITIONAL_JUMP)  ; LAB_00531a9d
    MOV dword ptr [EBX + 0x2f6829c],EAX ; 005319ac | DAT_02f6829c
    IMUL EDX,EAX,0x828                  ; 005319b2
    MOV ESI,0x2f68288                   ; 005319b8 | g_HuffmanTables
    MOV EDI,0x2f68288                   ; 005319bd | g_HuffmanTables
    MOV ECX,0x802                       ; 005319c2
    ADD EDI,EBX                         ; 005319c7
    ADD ESI,EDX                         ; 005319c9
    ADD EDI,0x20                        ; 005319cb
    ADD ESI,0x20                        ; 005319ce
    PUSH EDI                            ; 005319d1 | DAT_02f682a8
    MOV EAX,ECX                         ; 005319d2
    SHR ECX,0x2                         ; 005319d4
    MOVSD.REP ES:EDI,ESI                ; 005319d7 | DAT_02f682ac | DAT_02f682a8
    MOV CL,AL                           ; 005319d9
    AND CL,0x3                          ; 005319db
    MOVSB.REP ES:EDI,ESI                ; 005319de | DAT_02f682ad | DAT_02f682ac
    POP EDI                             ; 005319e0
    MOV EAX,dword ptr [EDX + 0x2f68aac] ; 005319e1 | g_HuffmanTables[0].table_size
    MOV dword ptr [EBX + 0x2f68aac],EAX ; 005319e7 | g_HuffmanTables[0].table_size
    MOV EAX,dword ptr [EBX + 0x2f6828c] ; 005319ed | DAT_02f6828c
    CMP EAX,dword ptr [EDX + 0x2f6828c] ; 005319f3 | DAT_02f6828c
    JZ 0x00531a89                       ; 005319f9
        ;   XREF to: 00531a89 (CONDITIONAL_JUMP)  ; LAB_00531a89
    PUSH 0x2f68188                      ; 005319ff | g_CurrentMp3Filename
        ;   Label: LAB_005319ff
    PUSH EBP                            ; 00531a04
    MOV EDI,0x63af5e                    ; 00531a05 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xd7d                       ; 00531a0a
    PUSH 0x63af6f                       ; 00531a0f | = "wrong table %u reference.  File: %s"
    MOV dword ptr [0x02f0ca48],EDI      ; 00531a14 | g_CurrentFilename
        ;   Label: LAB_00531a14
    MOV [0x02f0ca4c],EAX                ; 00531a1a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00531a1f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00531a24
    MOV ESI,dword ptr [ESP + 0x30]      ; 00531a27
        ;   Label: LAB_00531a27
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00531a2b
    ADD EBX,0x828                       ; 00531a2f
    INC EBP                             ; 00531a35
    ADD ESI,0x18                        ; 00531a36
    ADD ECX,0x828                       ; 00531a39
    MOV dword ptr [ESP + 0x30],ESI      ; 00531a3f
    MOV dword ptr [ESP + 0x2c],ECX      ; 00531a43 | DAT_02f68ab0
    CMP EBP,0x22                        ; 00531a47
    JL 0x005318f1                       ; 00531a4a
        ;   XREF to: 005318f1 (CONDITIONAL_JUMP)  ; LAB_005318f1
    JZ 0x00531a7a                       ; 00531a50
        ;   XREF to: 00531a7a (CONDITIONAL_JUMP)  ; LAB_00531a7a
    PUSH 0x2f68188                      ; 00531a52 | g_CurrentMp3Filename
    MOV EDI,0x63b00c                    ; 00531a57 | = "..\\sound\\mp3.cpp"
    MOV EBP,0xda8                       ; 00531a5c
    PUSH 0x63b01d                       ; 00531a61 | = "decoder table read error.  File: %s"
    MOV dword ptr [0x02f0ca48],EDI      ; 00531a66 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00531a6c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00531a72
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00531a77
    MOV dword ptr [0x02f45980],0x1      ; 00531a7a | g_HuffmanTablesInitialized
        ;   Label: LAB_00531a7a
    JMP 0x005316af                      ; 00531a84
        ;   XREF to: 005316af (UNCONDITIONAL_JUMP)  ; LAB_005316af
    MOV ESI,dword ptr [EDX + 0x2f68290] ; 00531a89 | DAT_02f68290
        ;   Label: LAB_00531a89
    CMP ESI,dword ptr [EBX + 0x2f68290] ; 00531a8f | DAT_02f68290
    JNZ 0x005319ff                      ; 00531a95
        ;   XREF to: 005319ff (CONDITIONAL_JUMP)  ; LAB_005319ff
    JMP 0x00531a27                      ; 00531a9b
        ;   XREF to: 00531a27 (UNCONDITIONAL_JUMP)  ; LAB_00531a27
    CMP EAX,-0x1                        ; 00531a9d
        ;   Label: LAB_00531a9d
    JNZ 0x00531b2a                      ; 00531aa0
        ;   XREF to: 00531b2a (CONDITIONAL_JUMP)  ; LAB_00531b2a
    MOV ECX,dword ptr [EBX + 0x2f68aac] ; 00531aa6 | g_HuffmanTables[0].table_size
    MOV dword ptr [EBX + 0x2f6829c],EAX ; 00531aac | DAT_02f6829c
    CMP ECX,0x401                       ; 00531ab2
    JC 0x00531ae2                       ; 00531ab8
        ;   XREF to: 00531ae2 (CONDITIONAL_JUMP)  ; LAB_00531ae2
    PUSH 0x2f68188                      ; 00531aba | g_CurrentMp3Filename
    MOV ESI,0x63af93                    ; 00531abf | = "..\\sound\\mp3.cpp"
    MOV EDI,0xd85                       ; 00531ac4
    PUSH 0x63afa4                       ; 00531ac9 | = "MP3 Huffman tree overflow!  File: %s"
    MOV dword ptr [0x02f0ca48],ESI      ; 00531ace | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00531ad4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00531ada
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00531adf
    MOV EAX,dword ptr [ESP + 0x30]      ; 00531ae2
        ;   Label: LAB_00531ae2
    MOV EDI,EBX                         ; 00531ae6
    MOV ECX,EBX                         ; 00531ae8
    MOV EDX,dword ptr [EBX + 0x2f68aac] ; 00531aea | g_HuffmanTables[0].table_size
    XOR ESI,ESI                         ; 00531af0
    MOV EAX,dword ptr [EAX + 0x680184]  ; 00531af2 | DAT_00680184
    TEST EDX,EDX                        ; 00531af8
    JBE 0x00531a27                      ; 00531afa
        ;   XREF to: 00531a27 (CONDITIONAL_JUMP)  ; LAB_00531a27
    MOV EDX,EAX                         ; 00531b00
        ;   Label: LAB_00531b00
    MOV DL,byte ptr [EDX]               ; 00531b02
    INC EAX                             ; 00531b04
    MOV byte ptr [ECX + 0x2f682a8],DL   ; 00531b05 | DAT_02f682a8 | DAT_02f682a8+2
    MOV EDX,EAX                         ; 00531b0b
    ADD ECX,0x2                         ; 00531b0d
    MOV DL,byte ptr [EDX]               ; 00531b10
    MOV byte ptr [ECX + 0x2f682a7],DL   ; 00531b12 | DAT_02f682a8+1 | DAT_02f682a8+3
    INC ESI                             ; 00531b18
    MOV EDX,dword ptr [EDI + 0x2f68aac] ; 00531b19 | g_HuffmanTables[0].table_size
    INC EAX                             ; 00531b1f
    CMP ESI,EDX                         ; 00531b20
    JNC 0x00531a27                      ; 00531b22
        ;   XREF to: 00531a27 (CONDITIONAL_JUMP)  ; LAB_00531a27
    JMP 0x00531b00                      ; 00531b28
        ;   XREF to: 00531b00 (UNCONDITIONAL_JUMP)  ; LAB_00531b00
    PUSH 0x2f68188                      ; 00531b2a | g_CurrentMp3Filename
        ;   Label: LAB_00531b2a
    PUSH EBP                            ; 00531b2f
    MOV EDI,0x63afc9                    ; 00531b30 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xd94                       ; 00531b35
    PUSH 0x63afda                       ; 00531b3a | = "huffman decodertable error at table %..."
    JMP 0x00531a14                      ; 00531b3f
        ;   XREF to: 00531a14 (UNCONDITIONAL_JUMP)  ; LAB_00531a14
    MOV EDX,dword ptr [ESP + 0x58]      ; 00531b44
        ;   Label: LAB_00531b44
    LEA EAX,[EDX*0x4 + 0x0]             ; 00531b48
    ADD EAX,EDX                         ; 00531b4f
    MOV ECX,dword ptr [ESP + 0x54]      ; 00531b51
    SHL EAX,0x5                         ; 00531b55
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00531b58
    ADD ECX,EAX                         ; 00531b5c
    LEA EAX,[EDX*0x8 + 0x0]             ; 00531b5e
    ADD EAX,EDX                         ; 00531b65
    SHL EAX,0x3                         ; 00531b67
    MOV EDX,dword ptr [ESP + 0x14]      ; 00531b6a
    ADD ECX,EAX                         ; 00531b6e
    LEA EAX,[EDX*0x8 + 0x0]             ; 00531b70
    ADD EAX,EDX                         ; 00531b77
    SHL EAX,0x2                         ; 00531b79
    ADD EAX,EDX                         ; 00531b7c
    MOV EBX,dword ptr [ECX + 0x4c]      ; 00531b7e
    SHL EAX,0x2                         ; 00531b81
    MOV EDX,dword ptr [EAX + EBX*0x4 + 0x67e6cc] ; 00531b84 | DAT_0067e6cc
    MOV dword ptr [ESP + 0x28],EDX      ; 00531b8b
    MOV EDX,dword ptr [ECX + 0x50]      ; 00531b8f
    ADD EDX,EBX                         ; 00531b92
    MOV EBP,dword ptr [EAX + EDX*0x4 + 0x67e6d0] ; 00531b94 | DAT_0067e6d0
    JMP 0x005316f9                      ; 00531b9b
        ;   XREF to: 005316f9 (UNCONDITIONAL_JUMP)  ; LAB_005316f9
    CMP ESI,dword ptr [ESP + 0x28]      ; 00531ba0
        ;   Label: LAB_00531ba0
    JGE 0x00531bb4                      ; 00531ba4
        ;   XREF to: 00531bb4 (CONDITIONAL_JUMP)  ; LAB_00531bb4
    IMUL EAX,dword ptr [EDI + 0x34],0x828 ; 00531ba6
    ADD EAX,0x2f68288                   ; 00531bad | g_HuffmanTables
    JMP 0x00531bd2                      ; 00531bb2
        ;   XREF to: 00531bd2 (UNCONDITIONAL_JUMP)  ; LAB_00531bd2
    CMP ESI,EBP                         ; 00531bb4
        ;   Label: LAB_00531bb4
    JGE 0x00531bc6                      ; 00531bb6
        ;   XREF to: 00531bc6 (CONDITIONAL_JUMP)  ; LAB_00531bc6
    IMUL EAX,dword ptr [EDI + 0x38],0x828 ; 00531bb8
    ADD EAX,0x2f68288                   ; 00531bbf | g_HuffmanTables
    JMP 0x00531bd2                      ; 00531bc4
        ;   XREF to: 00531bd2 (UNCONDITIONAL_JUMP)  ; LAB_00531bd2
    IMUL EAX,dword ptr [EDI + 0x3c],0x828 ; 00531bc6
        ;   Label: LAB_00531bc6
    ADD EAX,0x2f68288                   ; 00531bcd | g_HuffmanTables
    LEA EDX,[ESP + 0xc]                 ; 00531bd2
        ;   Label: LAB_00531bd2
    PUSH EDX                            ; 00531bd6
    LEA EDX,[ESP + 0xc]                 ; 00531bd7
    PUSH EDX                            ; 00531bdb
    LEA EDX,[ESP + 0xc]                 ; 00531bdc
    PUSH EDX                            ; 00531be0
    LEA EDX,[ESP + 0xc]                 ; 00531be1
    PUSH EDX                            ; 00531be5
    PUSH EAX                            ; 00531be6
    MOV ECX,dword ptr [ESP + 0x60]      ; 00531be7
    PUSH ECX                            ; 00531beb
    CALL sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350 ; 00531bec
        ;   XREF to: 0052f350 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350(CMP3Decoder * this_ptr, SHuffmanTable * huffman_table, int * x_out, int * y_out, ...)
    MOV ECX,0x12                        ; 00531bf1
    MOV EDX,ESI                         ; 00531bf6
    MOV EAX,ESI                         ; 00531bf8
    SAR EDX,0x1f                        ; 00531bfa
    IDIV ECX                            ; 00531bfd
    IMUL EAX,EAX,0x48                   ; 00531bff
    MOV EDI,0x12                        ; 00531c02
    ADD ESP,0x18                        ; 00531c07
    MOV EDX,ESI                         ; 00531c0a
    MOV ECX,dword ptr [ESP + 0x50]      ; 00531c0c
    SAR EDX,0x1f                        ; 00531c10
    ADD ECX,EAX                         ; 00531c13
    MOV EAX,ESI                         ; 00531c15
    IDIV EDI                            ; 00531c17
    MOV EAX,dword ptr [ESP]             ; 00531c19
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 00531c1c
    MOV EDX,EBX                         ; 00531c1f
    MOV EAX,EBX                         ; 00531c21
    SAR EDX,0x1f                        ; 00531c23
    IDIV EDI                            ; 00531c26
    IMUL EAX,EAX,0x48                   ; 00531c28
    MOV EDX,EBX                         ; 00531c2b
    MOV ECX,dword ptr [ESP + 0x50]      ; 00531c2d
    SAR EDX,0x1f                        ; 00531c31
    ADD ECX,EAX                         ; 00531c34
    MOV EAX,EBX                         ; 00531c36
    IDIV EDI                            ; 00531c38
    ADD ESI,0x2                         ; 00531c3a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00531c3d
    ADD EBX,0x2                         ; 00531c41
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 00531c44
    JMP 0x0053173b                      ; 00531c47
        ;   XREF to: 0053173b (UNCONDITIONAL_JUMP)  ; LAB_0053173b
    MOV EDX,dword ptr [ESP + 0x58]      ; 00531c4c
        ;   Label: LAB_00531c4c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00531c50
    ADD EAX,EDX                         ; 00531c57
    MOV EBX,dword ptr [ESP + 0x54]      ; 00531c59
    SHL EAX,0x5                         ; 00531c5d
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00531c60
    ADD EBX,EAX                         ; 00531c64
    LEA EAX,[EDX*0x8 + 0x0]             ; 00531c66
    ADD EAX,EDX                         ; 00531c6d
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00531c6f
    SHL EAX,0x3                         ; 00531c73
    PUSH ECX                            ; 00531c76
    ADD EBX,EAX                         ; 00531c77
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160 ; 00531c79
        ;   XREF to: 0052f160 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00531c7e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00531c81
    PUSH EAX                            ; 00531c85
    MOV EBP,dword ptr [EBX + 0x18]      ; 00531c86
    MOV EDI,dword ptr [ESP + 0x64]      ; 00531c89
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160 ; 00531c8d
        ;   XREF to: 0052f160 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
    ADD EDI,EBP                         ; 00531c92
    ADD ESP,0x4                         ; 00531c94
    CMP EAX,EDI                         ; 00531c97
    JBE 0x00531cc4                      ; 00531c99
        ;   XREF to: 00531cc4 (CONDITIONAL_JUMP)  ; LAB_00531cc4
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00531c9b
    PUSH EDX                            ; 00531c9f
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160 ; 00531ca0
        ;   XREF to: 0052f160 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00531ca5
    MOV ECX,dword ptr [ESP + 0x60]      ; 00531ca8
    MOV EDI,dword ptr [EBX + 0x18]      ; 00531cac
    SUB EAX,ECX                         ; 00531caf
    SUB EAX,EDI                         ; 00531cb1
    PUSH EAX                            ; 00531cb3
    MOV EBP,dword ptr [ESP + 0x50]      ; 00531cb4
    PUSH EBP                            ; 00531cb8
    SUB ESI,0x4                         ; 00531cb9
    CALL sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0 ; 00531cbc
        ;   XREF to: 0052f2c0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0(CMP3Decoder * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00531cc1
    MOV EDX,dword ptr [ESP + 0x58]      ; 00531cc4
        ;   Label: LAB_00531cc4
    LEA EAX,[EDX*0x4 + 0x0]             ; 00531cc8
    ADD EAX,EDX                         ; 00531ccf
    MOV ECX,dword ptr [ESP + 0x54]      ; 00531cd1
    SHL EAX,0x5                         ; 00531cd5
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00531cd8
    ADD ECX,EAX                         ; 00531cdc
    LEA EAX,[EDX*0x8 + 0x0]             ; 00531cde
    ADD EAX,EDX                         ; 00531ce5
    MOV EDX,dword ptr [ECX + EAX*0x8 + 0x18] ; 00531ce7
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00531ceb
    MOV EBX,dword ptr [ESP + 0x60]      ; 00531cef
    PUSH ECX                            ; 00531cf3
    ADD EBX,EDX                         ; 00531cf4
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160 ; 00531cf6
        ;   XREF to: 0052f160 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00531cfb
    CMP EAX,EBX                         ; 00531cfe
    JL 0x00531d34                       ; 00531d00
        ;   XREF to: 00531d34 (CONDITIONAL_JUMP)  ; LAB_00531d34
    MOV EBX,0x12                        ; 00531d02
        ;   Label: LAB_00531d02
    CMP ESI,0x240                       ; 00531d07
        ;   Label: LAB_00531d07
    JGE 0x00531d46                      ; 00531d0d
        ;   XREF to: 00531d46 (CONDITIONAL_JUMP)  ; LAB_00531d46
    MOV EDX,ESI                         ; 00531d0f
    MOV EAX,ESI                         ; 00531d11
    SAR EDX,0x1f                        ; 00531d13
    IDIV EBX                            ; 00531d16
    IMUL EAX,EAX,0x48                   ; 00531d18
    MOV EDX,ESI                         ; 00531d1b
    MOV ECX,dword ptr [ESP + 0x50]      ; 00531d1d
    SAR EDX,0x1f                        ; 00531d21
    ADD ECX,EAX                         ; 00531d24
    MOV EAX,ESI                         ; 00531d26
    IDIV EBX                            ; 00531d28
    INC ESI                             ; 00531d2a
    MOV dword ptr [ECX + EDX*0x4],0x0   ; 00531d2b
    JMP 0x00531d07                      ; 00531d32
        ;   XREF to: 00531d07 (UNCONDITIONAL_JUMP)  ; LAB_00531d07
    SUB EBX,EAX                         ; 00531d34
        ;   Label: LAB_00531d34
    PUSH EBX                            ; 00531d36
    MOV EBX,dword ptr [ESP + 0x50]      ; 00531d37
    PUSH EBX                            ; 00531d3b
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 00531d3c
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00531d41
    JMP 0x00531d02                      ; 00531d44
        ;   XREF to: 00531d02 (UNCONDITIONAL_JUMP)  ; LAB_00531d02
    ADD ESP,0x38                        ; 00531d46
        ;   Label: LAB_00531d46
    POP EBP                             ; 00531d49
    POP EDI                             ; 00531d4a
    POP ESI                             ; 00531d4b
    POP EBX                             ; 00531d4c
    RET                                 ; 00531d4d

