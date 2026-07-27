; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_FUN_004e7ed0(int param_1,int param_2,int param_3)
;
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
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0 at 004e7e4f
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0058b4e0
;   TerminatedCString s_MPEG_Layer_2_pick_table_0058b4f1
;   TerminatedCString s_sound_mp3_cpp_0058b52a
;   TerminatedCString s_js_bound_bad_layer_modex_0058b53b
;   TerminatedCString s_sound_mp3_cpp_0058b567
;   TerminatedCString s_Out_of_memory_File_s_0058b578
;   double DOUBLE_0058b9b8 = 1000
;   undefined4 s_CMotionController_005bb246+0xa
;   undefined4 DAT_005bbc48
;   undefined4 DAT_005bbc88
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fseek_FUN_0056582c
;   crt_stdio.c_ftell_FUN_00566e70
;   crt_unknown.c_FUN_005638d0
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004e3130
;   sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_004e8410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7ed0
        ;   Label: sound_mp3.cpp_FUN_004e7ed0
    PUSH ESI                            ; 004e7ed1
    PUSH EDI                            ; 004e7ed2
    PUSH EBP                            ; 004e7ed3
    SUB ESP,0x68                        ; 004e7ed4
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004e7ed7
    PUSH EDX                            ; 004e7edb
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260 ; 004e7edc
        ;   XREF to: 004e8260 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260()
    ADD ESP,0x4                         ; 004e7ee1
    MOV ECX,0x1000                      ; 004e7ee4
    MOV ESI,dword ptr [ESP + 0x7c]      ; 004e7ee9
    MOV EBP,dword ptr [ESP + 0x80]      ; 004e7eed
    MOV EAX,dword ptr [ESP + 0x84]      ; 004e7ef4
    MOV dword ptr [ESP + 0x5c],ECX      ; 004e7efb
    ADD ESI,0x5320                      ; 004e7eff
    MOV dword ptr [ESP + 0x54],EAX      ; 004e7f05
    MOV EBX,ESI                         ; 004e7f09
    MOV EAX,dword ptr [ESI]             ; 004e7f0b
    MOV EDI,ESI                         ; 004e7f0d
    TEST EAX,EAX                        ; 004e7f0f
    JNZ 0x004e800a                      ; 004e7f11
        ;   XREF to: 004e800a (CONDITIONAL_JUMP)  ; LAB_004e800a
    MOV ECX,dword ptr [EDI + 0x4]       ; 004e7f17
        ;   Label: LAB_004e7f17
    TEST ECX,ECX                        ; 004e7f1a
    JZ 0x004e7f2e                       ; 004e7f1c
        ;   XREF to: 004e7f2e (CONDITIONAL_JUMP)  ; LAB_004e7f2e
    PUSH ECX                            ; 004e7f1e
    CALL crt_unknown.c_FUN_005638d0     ; 004e7f1f
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 004e7f24
    MOV dword ptr [EDI + 0x4],0x0       ; 004e7f27
    PUSH EBP                            ; 004e7f2e
        ;   Label: LAB_004e7f2e
    MOV dword ptr [EBX],EBP             ; 004e7f2f
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 004e7f31
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_00566e70()
    ADD ESP,0x4                         ; 004e7f36
    MOV dword ptr [EBX + 0x20],EAX      ; 004e7f39
    MOV EAX,dword ptr [ESP + 0x54]      ; 004e7f3c
    MOV dword ptr [EBX + 0x24],EAX      ; 004e7f40
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004e7f43
    PUSH EAX                            ; 004e7f47
    MOV dword ptr [EBX + 0x8],EAX       ; 004e7f48
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004e7f4b
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 004e7f50
    MOV dword ptr [EBX + 0x4],EAX       ; 004e7f53
    TEST EAX,EAX                        ; 004e7f56
    JNZ 0x004e7f81                      ; 004e7f58
        ;   XREF to: 004e7f81 (CONDITIONAL_JUMP)  ; LAB_004e7f81
    PUSH 0x1cd8b28                      ; 004e7f5a
    MOV EAX,0x58b567                    ; 004e7f5f | = "..\\sound\\mp3.cpp"
    MOV EDX,0x1ff                       ; 004e7f64
    PUSH 0x58b578                       ; 004e7f69 | = "Out of memory.  File: %s"
    MOV [0x01cc4800],EAX                ; 004e7f6e | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004e7f73 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e7f79
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e7f7e
    PUSH 0x0                            ; 004e7f81
        ;   Label: LAB_004e7f81
    MOV ECX,dword ptr [EBX + 0x20]      ; 004e7f83
    PUSH ECX                            ; 004e7f86
    MOV ESI,dword ptr [EBX]             ; 004e7f87
    PUSH ESI                            ; 004e7f89
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004e7f8a
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_0056582c()
    MOV dword ptr [EBX + 0x10],0x0      ; 004e7f8f
    MOV dword ptr [EBX + 0x14],0x0      ; 004e7f96
    MOV EDI,0xfff                       ; 004e7f9d
    MOV dword ptr [EBX + 0xc],0x0       ; 004e7fa2
    MOV EBP,0x1fff                      ; 004e7fa9
    MOV EAX,dword ptr [EBX + 0x24]      ; 004e7fae
    ADD ESP,0xc                         ; 004e7fb1
    MOV dword ptr [EBX + 0x28],EAX      ; 004e7fb4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e7fb7
    MOV dword ptr [EBX + 0x18],0x0      ; 004e7fbb
    ADD EAX,0x5320                      ; 004e7fc2
    MOV dword ptr [EBX + 0x1c],0x0      ; 004e7fc7
    MOV EBX,0xc                         ; 004e7fce
    MOV EDX,dword ptr [EAX + 0xc]       ; 004e7fd3
    MOV ESI,EAX                         ; 004e7fd6
    AND EDX,0x7                         ; 004e7fd8
    JNZ 0x004e801e                      ; 004e7fdb
        ;   XREF to: 004e801e (CONDITIONAL_JUMP)  ; LAB_004e801e
    PUSH EBX                            ; 004e7fdd
        ;   Label: LAB_004e7fdd
    PUSH ESI                            ; 004e7fde
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e7fdf
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e7fe4
    MOV EBX,EAX                         ; 004e7fe7
    MOV EAX,EBX                         ; 004e7fe9
        ;   Label: LAB_004e7fe9
    AND EAX,EBP                         ; 004e7feb
    CMP EAX,EDI                         ; 004e7fed
    JZ 0x004e8031                       ; 004e7fef
        ;   XREF to: 004e8031 (CONDITIONAL_JUMP)  ; LAB_004e8031
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004e7ff1
    TEST EAX,EAX                        ; 004e7ff4
    JNZ 0x004e8031                      ; 004e7ff6
        ;   XREF to: 004e8031 (CONDITIONAL_JUMP)  ; LAB_004e8031
    PUSH 0x8                            ; 004e7ff8
    PUSH ESI                            ; 004e7ffa
    SHL EBX,0x8                         ; 004e7ffb
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e7ffe
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e8003
    OR EBX,EAX                          ; 004e8006
    JMP 0x004e7fe9                      ; 004e8008
        ;   XREF to: 004e7fe9 (UNCONDITIONAL_JUMP)  ; LAB_004e7fe9
    PUSH EAX                            ; 004e800a
        ;   Label: LAB_004e800a
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004e800b
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004e8010
    MOV dword ptr [ESI],0x0             ; 004e8013
    JMP 0x004e7f17                      ; 004e8019
        ;   XREF to: 004e7f17 (UNCONDITIONAL_JUMP)  ; LAB_004e7f17
    MOV ECX,0x8                         ; 004e801e
        ;   Label: LAB_004e801e
    SUB ECX,EDX                         ; 004e8023
    PUSH ECX                            ; 004e8025
    PUSH EAX                            ; 004e8026
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e8027
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e802c
    JMP 0x004e7fdd                      ; 004e802f
        ;   XREF to: 004e7fdd (UNCONDITIONAL_JUMP)  ; LAB_004e7fdd
    MOV EAX,ESP                         ; 004e8031
        ;   Label: LAB_004e8031
    MOV dword ptr [ESP + 0x30],EAX      ; 004e8033
    LEA EAX,[ESP + 0x30]                ; 004e8037
    PUSH EAX                            ; 004e803b
    MOV EAX,dword ptr [ESP + 0x80]      ; 004e803c
    ADD EAX,0x5320                      ; 004e8043
    PUSH EAX                            ; 004e8048
    CALL sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004e3130 ; 004e8049
        ;   XREF to: 004e3130 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004e3130()
    ADD ESP,0x8                         ; 004e804e
    MOV EDI,dword ptr [ESP + 0x30]      ; 004e8051
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004e8055
    LEA EBX,[ESP + 0x30]                ; 004e8058
    MOV dword ptr [ESP + 0x34],EAX      ; 004e805c
    CMP EAX,0x3                         ; 004e8060
    SETNZ AL                            ; 004e8063
    AND EAX,0xff                        ; 004e8066
    INC EAX                             ; 004e806b
    MOV dword ptr [EBX + 0x10],EAX      ; 004e806c
    CMP dword ptr [EDI + 0x4],0x2       ; 004e806f
    JNZ 0x004e8236                      ; 004e8073
        ;   XREF to: 004e8236 (CONDITIONAL_JUMP)  ; LAB_004e8236
    MOV EAX,dword ptr [EBX + 0x18]      ; 004e8079
    MOV ESI,dword ptr [EBX]             ; 004e807c
    MOV dword ptr [ESP + 0x60],EAX      ; 004e807e
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e8082
    DEC EAX                             ; 004e8085
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e8086
    MOV EAX,dword ptr [ESI + 0xc]       ; 004e808a
    MOV EBP,dword ptr [ESI]             ; 004e808d
    MOV dword ptr [ESP + 0x50],EAX      ; 004e808f
    LEA EAX,[EBP*0x4 + 0x0]             ; 004e8093
    SUB EAX,EBP                         ; 004e809a
    SHL EAX,0x2                         ; 004e809c
    MOV ECX,EAX                         ; 004e809f
    SHL ECX,0x4                         ; 004e80a1
    SUB ECX,EAX                         ; 004e80a4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004e80a6
    SHL EAX,0x2                         ; 004e80aa
    MOV EDX,EAX                         ; 004e80ad
    SHL EAX,0x4                         ; 004e80af
    SUB EAX,EDX                         ; 004e80b2
    ADD ECX,EAX                         ; 004e80b4
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e80b6
    MOV EDX,dword ptr [ECX + EAX*0x4 + 0x5bbc88] ; 004e80ba | DAT_005bbc88
    MOV EAX,EDX                         ; 004e80c1
    MOV ECX,dword ptr [EBX + 0x10]      ; 004e80c3
    SAR EDX,0x1f                        ; 004e80c6
    IDIV ECX                            ; 004e80c9
    MOV EDX,EAX                         ; 004e80cb
    MOV EAX,EBP                         ; 004e80cd
    MOV ECX,dword ptr [ESI + 0x10]      ; 004e80cf
    SHL EAX,0x5                         ; 004e80d2
    MOV dword ptr [ESP + 0x58],EBX      ; 004e80d5
    FLD double ptr [EAX + ECX*0x8 + 0x5bbc48] ; 004e80d9 | DAT_005bbc48
    CALL crt_math.c_round_FUN_00563a30  ; 004e80e0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x64]        ; 004e80e5
    CMP EBP,0x1                         ; 004e80e9
    JNZ 0x004e822c                      ; 004e80ec
        ;   XREF to: 004e822c (CONDITIONAL_JUMP)  ; LAB_004e822c
    CMP dword ptr [ESP + 0x64],0x30     ; 004e80f2
    JNZ 0x004e81e8                      ; 004e80f7
        ;   XREF to: 004e81e8 (CONDITIONAL_JUMP)  ; LAB_004e81e8
    CMP EDX,0x38                        ; 004e80fd
    JL 0x004e81e8                       ; 004e8100
        ;   XREF to: 004e81e8 (CONDITIONAL_JUMP)  ; LAB_004e81e8
    XOR EAX,EAX                         ; 004e8106
        ;   Label: LAB_004e8106
    MOV EDX,dword ptr [ESP + 0x58]      ; 004e8108
        ;   Label: LAB_004e8108
    CMP EAX,dword ptr [EDX + 0xc]       ; 004e810c
    JZ 0x004e8139                       ; 004e810f
        ;   XREF to: 004e8139 (CONDITIONAL_JUMP)  ; LAB_004e8139
    PUSH 0x1cd8b28                      ; 004e8111
    MOV ESI,0x58b4e0                    ; 004e8116 | = "..\\sound\\mp3.cpp"
    MOV EBP,0x1a1                       ; 004e811b
    PUSH 0x58b4f1                       ; 004e8120 | = "MPEG Layer 2 - pick_table - can't loa..."
    MOV dword ptr [0x01cc4800],ESI      ; 004e8125 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004e812b | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e8131
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e8136
    MOV EAX,dword ptr [ESP + 0x60]      ; 004e8139
        ;   Label: LAB_004e8139
    MOV dword ptr [EBX + 0x18],EAX      ; 004e813d
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004e8140
        ;   Label: LAB_004e8140
    CMP EAX,0x1                         ; 004e8143
    JNZ 0x004e8258                      ; 004e8146
        ;   XREF to: 004e8258 (CONDITIONAL_JUMP)  ; LAB_004e8258
    MOV EBP,dword ptr [EDI + 0x4]       ; 004e814c
    MOV ESI,dword ptr [EDI + 0x20]      ; 004e814f
    CMP EBP,EAX                         ; 004e8152
    JL 0x004e815f                       ; 004e8154
        ;   XREF to: 004e815f (CONDITIONAL_JUMP)  ; LAB_004e815f
    CMP EBP,0x3                         ; 004e8156
    JLE 0x004e8242                      ; 004e8159
        ;   XREF to: 004e8242 (CONDITIONAL_JUMP)  ; LAB_004e8242
    PUSH 0x1cd8b28                      ; 004e815f
        ;   Label: LAB_004e815f
    PUSH ESI                            ; 004e8164
    PUSH EBP                            ; 004e8165
    MOV EDX,0x58b52a                    ; 004e8166 | = "..\\sound\\mp3.cpp"
    MOV ECX,0x1b1                       ; 004e816b
    PUSH 0x58b53b                       ; 004e8170 | = "js_bound bad layer/modext (%d/%d)  Fi..."
    MOV dword ptr [0x01cc4800],EDX      ; 004e8175 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004e817b | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e8181
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x10                        ; 004e8186
    SHL ESI,0x2                         ; 004e8189
        ;   Label: LAB_004e8189
    SHL EBP,0x4                         ; 004e818c
    LEA EAX,[ESI + EBP*0x1]             ; 004e818f
    MOV EAX,dword ptr [EAX + 0x5bb250]  ; 004e8192 | s_CMotionController_005bb246+0xa
    MOV dword ptr [EBX + 0x14],EAX      ; 004e8198
        ;   Label: LAB_004e8198
    MOV EDX,dword ptr [ESP]             ; 004e819b
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e819e
    SHL EDX,0x5                         ; 004e81a2
    FLD double ptr [EDX + EAX*0x8 + 0x5bbc48] ; 004e81a5 | DAT_005bbc48
    FMUL double ptr [0x0058b9b8]        ; 004e81ac | DOUBLE_0058b9b8
    PUSH 0x0                            ; 004e81b2
    MOV EAX,dword ptr [ESP + 0x80]      ; 004e81b4
    MOV EDX,dword ptr [ESP + 0x80]      ; 004e81bb
    CALL crt_math.c_round_FUN_00563a30  ; 004e81c2
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EAX + 0x100]       ; 004e81c7
    MOV EAX,dword ptr [ESP + 0x44]      ; 004e81cd
    PUSH EDX                            ; 004e81d1
    MOV dword ptr [EDX + 0x104],EAX     ; 004e81d2
    CALL sound_mp3.cpp_CMP3Decoder_seek_FUN_004e8410 ; 004e81d8
        ;   XREF to: 004e8410 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_seek_FUN_004e8410()
    ADD ESP,0x8                         ; 004e81dd
    ADD ESP,0x68                        ; 004e81e0
    POP EBP                             ; 004e81e3
    POP EDI                             ; 004e81e4
    POP ESI                             ; 004e81e5
    POP EBX                             ; 004e81e6
    RET                                 ; 004e81e7
    CMP EDX,0x38                        ; 004e81e8
        ;   Label: LAB_004e81e8
    JL 0x004e81f6                       ; 004e81eb
        ;   XREF to: 004e81f6 (CONDITIONAL_JUMP)  ; LAB_004e81f6
    CMP EDX,0x50                        ; 004e81ed
    JLE 0x004e8106                      ; 004e81f0
        ;   XREF to: 004e8106 (CONDITIONAL_JUMP)  ; LAB_004e8106
    CMP dword ptr [ESP + 0x64],0x30     ; 004e81f6
        ;   Label: LAB_004e81f6
    JZ 0x004e820c                       ; 004e81fb
        ;   XREF to: 004e820c (CONDITIONAL_JUMP)  ; LAB_004e820c
    CMP EDX,0x60                        ; 004e81fd
    JL 0x004e820c                       ; 004e8200
        ;   XREF to: 004e820c (CONDITIONAL_JUMP)  ; LAB_004e820c
    MOV EAX,0x1                         ; 004e8202
    JMP 0x004e8108                      ; 004e8207
        ;   XREF to: 004e8108 (UNCONDITIONAL_JUMP)  ; LAB_004e8108
    CMP dword ptr [ESP + 0x64],0x20     ; 004e820c
        ;   Label: LAB_004e820c
    JZ 0x004e8222                       ; 004e8211
        ;   XREF to: 004e8222 (CONDITIONAL_JUMP)  ; LAB_004e8222
    CMP EDX,0x30                        ; 004e8213
    JG 0x004e8222                       ; 004e8216
        ;   XREF to: 004e8222 (CONDITIONAL_JUMP)  ; LAB_004e8222
    MOV EAX,0x2                         ; 004e8218
    JMP 0x004e8108                      ; 004e821d
        ;   XREF to: 004e8108 (UNCONDITIONAL_JUMP)  ; LAB_004e8108
    MOV EAX,0x3                         ; 004e8222
        ;   Label: LAB_004e8222
    JMP 0x004e8108                      ; 004e8227
        ;   XREF to: 004e8108 (UNCONDITIONAL_JUMP)  ; LAB_004e8108
    MOV EAX,0x4                         ; 004e822c
        ;   Label: LAB_004e822c
    JMP 0x004e8108                      ; 004e8231
        ;   XREF to: 004e8108 (UNCONDITIONAL_JUMP)  ; LAB_004e8108
    MOV dword ptr [EBX + 0x18],0x20     ; 004e8236
        ;   Label: LAB_004e8236
    JMP 0x004e8140                      ; 004e823d
        ;   XREF to: 004e8140 (UNCONDITIONAL_JUMP)  ; LAB_004e8140
    TEST ESI,ESI                        ; 004e8242
        ;   Label: LAB_004e8242
    JL 0x004e815f                       ; 004e8244
        ;   XREF to: 004e815f (CONDITIONAL_JUMP)  ; LAB_004e815f
    CMP ESI,0x3                         ; 004e824a
    JG 0x004e815f                       ; 004e824d
        ;   XREF to: 004e815f (CONDITIONAL_JUMP)  ; LAB_004e815f
    JMP 0x004e8189                      ; 004e8253
        ;   XREF to: 004e8189 (UNCONDITIONAL_JUMP)  ; LAB_004e8189
    MOV EAX,dword ptr [EBX + 0x18]      ; 004e8258
        ;   Label: LAB_004e8258
    JMP 0x004e8198                      ; 004e825b
        ;   XREF to: 004e8198 (UNCONDITIONAL_JUMP)  ; LAB_004e8198

