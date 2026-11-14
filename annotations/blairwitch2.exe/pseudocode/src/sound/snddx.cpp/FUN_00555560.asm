; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_00555560(undefined4 *param_1,int param_2,ushort param_3,int param_4,uint *param_5)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_Create_temp_secondary_bu_005e9b2f
;   TerminatedCString s_Set_Primary_buffer_forma_005e9b66
;   TerminatedCString s_Get_Primary_buffer_forma_005e9b80
;   TerminatedCString s_Create_the_secondary_buf_005e9b9a
;   undefined4 DAT_0061bf50
;   undefined4 DAT_0061bf60
;   undefined4 DAT_00621070
;   undefined4 DAT_0264a5c4
;   undefined4 DAT_0264a5c8
;   undefined4 DAT_0264a5cc
;   undefined4 DAT_0264a5d4
;   undefined4 DAT_0264a5d8
;   undefined4 DAT_0264a5dc
;   undefined4 DAT_0264a5e0
;   ... and 3 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_snddx.cpp_FUN_00554ad0
;   sound_sndmain.cpp_getMaxSwLatency_FUN_00553600
;   sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555560
        ;   Label: sound_snddx.cpp_FUN_00555560
    PUSH ESI                            ; 00555561
    PUSH EDI                            ; 00555562
    PUSH EBP                            ; 00555563
    SUB ESP,0x6a0                       ; 00555564
    MOV EBX,dword ptr [ESP + 0x6b8]     ; 0055556a
    MOV EDX,dword ptr [0x0264a5d4]      ; 00555571 | DAT_0264a5d4
    TEST EDX,EDX                        ; 00555577
    JNZ 0x005555a8                      ; 00555579
        ;   XREF to: 005555a8 (CONDITIONAL_JUMP)  ; LAB_005555a8
    CMP dword ptr [0x0264a5c8],0x0      ; 0055557b | DAT_0264a5c8
        ;   Label: LAB_0055557b
    JNZ 0x005555ba                      ; 00555582
        ;   XREF to: 005555ba (CONDITIONAL_JUMP)  ; LAB_005555ba
    MOV EAX,[0x0264a5cc]                ; 00555584 | DAT_0264a5cc
        ;   Label: LAB_00555584
    TEST EAX,EAX                        ; 00555589
    JZ 0x0055559b                       ; 0055558b
        ;   XREF to: 0055559b (CONDITIONAL_JUMP)  ; LAB_0055559b
    PUSH EAX                            ; 0055558d
    MOV EBX,dword ptr [EAX]             ; 0055558e
    CALL dword ptr [EBX + 0x8]          ; 00555590
    XOR EDX,EDX                         ; 00555593
    MOV dword ptr [0x0264a5cc],EDX      ; 00555595 | DAT_0264a5cc
    XOR EAX,EAX                         ; 0055559b
        ;   Label: LAB_0055559b
    ADD ESP,0x6a0                       ; 0055559d
    POP EBP                             ; 005555a3
    POP EDI                             ; 005555a4
    POP ESI                             ; 005555a5
    POP EBX                             ; 005555a6
    RET                                 ; 005555a7
    MOV EAX,EDX                         ; 005555a8
        ;   Label: LAB_005555a8
    PUSH EAX                            ; 005555aa
    MOV EDX,dword ptr [EDX]             ; 005555ab
    CALL dword ptr [EDX + 0x8]          ; 005555ad
    XOR ECX,ECX                         ; 005555b0
    MOV dword ptr [0x0264a5d4],ECX      ; 005555b2 | DAT_0264a5d4
    JMP 0x0055557b                      ; 005555b8
        ;   XREF to: 0055557b (UNCONDITIONAL_JUMP)  ; LAB_0055557b
    PUSH 0x12                           ; 005555ba
        ;   Label: LAB_005555ba
    PUSH 0x0                            ; 005555bc
    LEA EAX,[ESP + 0x670]               ; 005555be
    PUSH EAX                            ; 005555c5
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005555c6
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005555cb
    MOV EDX,0x1                         ; 005555ce
    MOV EAX,dword ptr [ESP + 0x6bc]     ; 005555d3
    MOV word ptr [ESP + 0x668],DX       ; 005555da
    MOV word ptr [ESP + 0x66a],AX       ; 005555e2
    MOV EDX,EBX                         ; 005555ea
    MOV EAX,dword ptr [ESP + 0x6c0]     ; 005555ec
    SAR EDX,0x1f                        ; 005555f3
    MOV dword ptr [ESP + 0x66c],EAX     ; 005555f6
    MOV EAX,EBX                         ; 005555fd
    SHL EDX,0x3                         ; 005555ff
    SBB EAX,EDX                         ; 00555602
    SAR EAX,0x3                         ; 00555604
    XOR ECX,ECX                         ; 00555607
    MOV CX,word ptr [ESP + 0x6bc]       ; 00555609
    IMUL EAX,ECX                        ; 00555611
    MOV word ptr [ESP + 0x674],AX       ; 00555614
    XOR EAX,EAX                         ; 0055561c
    MOV EDX,dword ptr [ESP + 0x6c0]     ; 0055561e
    MOV AX,word ptr [ESP + 0x674]       ; 00555625
    IMUL EDX,EAX                        ; 0055562d
    MOV EAX,[0x0264a5c8]                ; 00555630 | DAT_0264a5c8
    MOV dword ptr [ESP + 0x670],EDX     ; 00555635
    LEA EDX,[ESP + 0x668]               ; 0055563c
    MOV word ptr [ESP + 0x676],BX       ; 00555643
    PUSH EDX                            ; 0055564b
    MOV ECX,dword ptr [EAX]             ; 0055564c
    PUSH EAX                            ; 0055564e
    CALL dword ptr [ECX + 0x38]         ; 0055564f
    TEST EAX,EAX                        ; 00555652
    JNZ 0x00555929                      ; 00555654
        ;   XREF to: 00555929 (CONDITIONAL_JUMP)  ; LAB_00555929
    PUSH 0x0                            ; 0055565a
    PUSH 0x12                           ; 0055565c
    LEA EDX,[ESP + 0x670]               ; 0055565e
    MOV EAX,[0x0264a5c8]                ; 00555665 | DAT_0264a5c8
    PUSH EDX                            ; 0055566a
    MOV EBX,dword ptr [EAX]             ; 0055566b
    PUSH EAX                            ; 0055566d
    CALL dword ptr [EBX + 0x14]         ; 0055566e
    TEST EAX,EAX                        ; 00555671
    JNZ 0x00555962                      ; 00555673
        ;   XREF to: 00555962 (CONDITIONAL_JUMP)  ; LAB_00555962
    MOV AX,word ptr [ESP + 0x676]       ; 00555679
    MOV [0x0264a5d8],EAX                ; 00555681 | DAT_0264a5d8
    MOV EAX,dword ptr [ESP + 0x66c]     ; 00555686
    MOV [0x0264a5dc],EAX                ; 0055568d | DAT_0264a5dc
    XOR EAX,EAX                         ; 00555692
    MOV AX,word ptr [ESP + 0x66a]       ; 00555694
    MOV EDI,dword ptr [0x0264a5d4]      ; 0055569c | DAT_0264a5d4
    MOV [0x0264a5e0],EAX                ; 005556a2 | DAT_0264a5e0
    TEST EDI,EDI                        ; 005556a7
    JZ 0x005556b9                       ; 005556a9
        ;   XREF to: 005556b9 (CONDITIONAL_JUMP)  ; LAB_005556b9
    PUSH EDI                            ; 005556ab
    MOV EDX,dword ptr [EDI]             ; 005556ac
    XOR EBP,EBP                         ; 005556ae
    CALL dword ptr [EDX + 0x8]          ; 005556b0
    MOV dword ptr [0x0264a5d4],EBP      ; 005556b3 | DAT_0264a5d4
    PUSH 0x12                           ; 005556b9
        ;   Label: LAB_005556b9
    XOR EAX,EAX                         ; 005556bb
    MOV EBX,0x1                         ; 005556bd
    MOV dword ptr [ESP + 0x694],EAX     ; 005556c2
    MOV dword ptr [ESP + 0x698],EAX     ; 005556c9
    PUSH EAX                            ; 005556d0
    LEA EAX,[ESP + 0x684]               ; 005556d1
    MOV ESI,0x10                        ; 005556d8
    PUSH EAX                            ; 005556dd
    MOV EDI,0x2                         ; 005556de
    MOV EBP,0x400                       ; 005556e3
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005556e8
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005556ed
    MOV ECX,0x5622                      ; 005556f0
    LEA EAX,[ESP + 0x654]               ; 005556f5
    PUSH 0x14                           ; 005556fc
    MOV word ptr [ESP + 0x680],BX       ; 005556fe
    MOV word ptr [ESP + 0x682],BX       ; 00555706
    MOV dword ptr [ESP + 0x684],ECX     ; 0055570e
    MOV word ptr [ESP + 0x68e],SI       ; 00555715
    MOV word ptr [ESP + 0x68c],DI       ; 0055571d
    PUSH 0x0                            ; 00555725
    MOV EBX,0xac44                      ; 00555727
    MOV ESI,0x14                        ; 0055572c
    PUSH EAX                            ; 00555731
    MOV EDI,0x12                        ; 00555732
    MOV dword ptr [ESP + 0x690],EBX     ; 00555737
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0055573e
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00555743
    LEA EAX,[ESP + 0x67c]               ; 00555746
    LEA EDX,[ESP + 0x690]               ; 0055574d
    PUSH 0x0                            ; 00555754
    MOV dword ptr [ESP + 0x658],ESI     ; 00555756
    MOV dword ptr [ESP + 0x65c],EDI     ; 0055575d
    MOV dword ptr [ESP + 0x668],EAX     ; 00555764
    MOV EAX,[0x0264a5c4]                ; 0055576b | DAT_0264a5c4
    PUSH EDX                            ; 00555770
    LEA EDX,[ESP + 0x65c]               ; 00555771
    MOV dword ptr [ESP + 0x664],EBP     ; 00555778
    PUSH EDX                            ; 0055577f
    MOV ECX,dword ptr [EAX]             ; 00555780
    PUSH EAX                            ; 00555782
    CALL dword ptr [ECX + 0xc]          ; 00555783
    TEST EAX,EAX                        ; 00555786
    JNZ 0x0055599b                      ; 00555788
        ;   XREF to: 0055599b (CONDITIONAL_JUMP)  ; LAB_0055599b
    LEA EDX,[ESP + 0x694]               ; 0055578e
    PUSH EDX                            ; 00555795
    MOV EAX,dword ptr [ESP + 0x694]     ; 00555796
    PUSH 0x621070                       ; 0055579d | DAT_00621070
    MOV EDX,dword ptr [ESP + 0x698]     ; 005557a2
    MOV EAX,dword ptr [EAX]             ; 005557a9
    PUSH EDX                            ; 005557ab
    CALL dword ptr [EAX]                ; 005557ac
    MOV ECX,dword ptr [ESP + 0x694]     ; 005557ae
    TEST ECX,ECX                        ; 005557b5
    JNZ 0x005559d4                      ; 005557b7
        ;   XREF to: 005559d4 (CONDITIONAL_JUMP)  ; LAB_005559d4
    MOV EBX,dword ptr [ESP + 0x690]     ; 005557bd
    TEST EBX,EBX                        ; 005557c4
    JZ 0x005557d7                       ; 005557c6
        ;   XREF to: 005557d7 (CONDITIONAL_JUMP)  ; LAB_005557d7
    PUSH EBX                            ; 005557c8
    MOV EAX,dword ptr [EBX]             ; 005557c9
    XOR EDI,EDI                         ; 005557cb
    CALL dword ptr [EAX + 0x8]          ; 005557cd
    MOV dword ptr [ESP + 0x690],EDI     ; 005557d0
    MOV EBP,dword ptr [0x0264a5d4]      ; 005557d7 | DAT_0264a5d4
        ;   Label: LAB_005557d7
    TEST EBP,EBP                        ; 005557dd
    JZ 0x00555809                       ; 005557df
        ;   XREF to: 00555809 (CONDITIONAL_JUMP)  ; LAB_00555809
    PUSH 0x4                            ; 005557e1
    LEA EBX,[ESP + 0x69c]               ; 005557e3
    PUSH EBX                            ; 005557ea
    PUSH 0x0                            ; 005557eb
    PUSH 0x0                            ; 005557ed
    MOV EAX,0x1                         ; 005557ef
    PUSH 0x0                            ; 005557f4
    MOV dword ptr [ESP + 0x6ac],EAX     ; 005557f6
    PUSH 0x61bf60                       ; 005557fd | DAT_0061bf60
    MOV EDX,dword ptr [EBP]             ; 00555802
    PUSH EBP                            ; 00555805
    CALL dword ptr [EDX + 0x10]         ; 00555806
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30 ; 00555809
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30()
        ;   Label: LAB_00555809
    CMP EAX,0x1                         ; 0055580e
    JGE 0x00555a27                      ; 00555811
        ;   XREF to: 00555a27 (CONDITIONAL_JUMP)  ; LAB_00555a27
    MOV dword ptr [0x0264a5ec],0x8      ; 00555817 | DAT_0264a5ec
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_00553600 ; 00555821
        ;   XREF to: 00553600 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getMaxSwLatency_FUN_00553600()
    MOV dword ptr [ESP + 0x69c],EAX     ; 00555826
    FLD float ptr [ESP + 0x69c]         ; 0055582d
    FILD dword ptr [0x0264a5dc]         ; 00555834 | DAT_0264a5dc
    FMULP                               ; 0055583a
    FILD dword ptr [0x0264a5ec]         ; 0055583c | DAT_0264a5ec
    FDIVP                               ; 00555842
    CALL crt_math.c_round_FUN_005b7ff0  ; 00555844
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x0264a5e4]        ; 00555849 | DAT_0264a5e4
    MOV EAX,[0x0264a5e4]                ; 0055584f | DAT_0264a5e4
    ADD EAX,0xf                         ; 00555854
    AND AL,0xf0                         ; 00555857
    MOV [0x0264a5e4],EAX                ; 00555859 | DAT_0264a5e4
    MOV EAX,[0x0264a5d8]                ; 0055585e | DAT_0264a5d8
    MOV EDX,EAX                         ; 00555863
    SAR EDX,0x1f                        ; 00555865
    SHL EDX,0x3                         ; 00555868
    SBB EAX,EDX                         ; 0055586b
    SAR EAX,0x3                         ; 0055586d
    MOV EBX,dword ptr [0x0264a5e4]      ; 00555870 | DAT_0264a5e4
    IMUL EBX,EAX                        ; 00555876
    MOV EAX,[0x0264a5e0]                ; 00555879 | DAT_0264a5e0
    IMUL EBX,EAX                        ; 0055587e
    PUSH 0x14                           ; 00555881
    PUSH 0x0                            ; 00555883
    LEA EAX,[ESP + 0x648]               ; 00555885
    PUSH EAX                            ; 0055588c
    MOV dword ptr [0x0264a5e8],EBX      ; 0055588d | DAT_0264a5e8
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00555893
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    LEA EAX,[ESP + 0x674]               ; 00555898
    ADD ESP,0xc                         ; 0055589f
    MOV ESI,dword ptr [0x0264a5ec]      ; 005558a2 | DAT_0264a5ec
    MOV dword ptr [ESP + 0x650],EAX     ; 005558a8
    MOV EAX,[0x0264a5e8]                ; 005558af | DAT_0264a5e8
    IMUL EAX,ESI                        ; 005558b4
    XOR EBX,EBX                         ; 005558b7
    MOV ECX,0x14                        ; 005558b9
    MOV EDI,dword ptr [0x0264a5cc]      ; 005558be | DAT_0264a5cc
    MOV dword ptr [ESP + 0x640],ECX     ; 005558c4
    MOV dword ptr [ESP + 0x644],EBX     ; 005558cb
    MOV dword ptr [ESP + 0x648],EAX     ; 005558d2
    TEST EDI,EDI                        ; 005558d9
    JZ 0x005558e9                       ; 005558db
        ;   XREF to: 005558e9 (CONDITIONAL_JUMP)  ; LAB_005558e9
    PUSH EDI                            ; 005558dd
    MOV EDX,dword ptr [EDI]             ; 005558de
    CALL dword ptr [EDX + 0x8]          ; 005558e0
    MOV dword ptr [0x0264a5cc],EBX      ; 005558e3 | DAT_0264a5cc
    PUSH 0x0                            ; 005558e9
        ;   Label: LAB_005558e9
    PUSH 0x264a5cc                      ; 005558eb | DAT_0264a5cc
    LEA EDX,[ESP + 0x648]               ; 005558f0
    MOV EAX,[0x0264a5c4]                ; 005558f7 | DAT_0264a5c4
    PUSH EDX                            ; 005558fc
    MOV EBX,dword ptr [EAX]             ; 005558fd
    PUSH EAX                            ; 005558ff
    CALL dword ptr [EBX + 0xc]          ; 00555900
    TEST EAX,EAX                        ; 00555903
    JNZ 0x00555a44                      ; 00555905
        ;   XREF to: 00555a44 (CONDITIONAL_JUMP)  ; LAB_00555a44
    MOV EDX,dword ptr [ESP + 0x6c4]     ; 0055590b
    MOV EAX,[0x0264a5e4]                ; 00555912 | DAT_0264a5e4
    MOV dword ptr [EDX],EAX             ; 00555917
    MOV EAX,0x1                         ; 00555919
    ADD ESP,0x6a0                       ; 0055591e
    POP EBP                             ; 00555924
    POP EDI                             ; 00555925
    POP ESI                             ; 00555926
    POP EBX                             ; 00555927
    RET                                 ; 00555928
    PUSH EAX                            ; 00555929
        ;   Label: LAB_00555929
    CALL sound_snddx.cpp_FUN_00554ad0   ; 0055592a
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 0055592f
    PUSH EAX                            ; 00555932
    PUSH 0x5e9b66                       ; 00555933 | = "Set Primary buffer format"
    PUSH 0x5e9a3b                       ; 00555938 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 0055593d
    PUSH EAX                            ; 00555944
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00555945
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055594a
    LEA EAX,[ESP + 0x320]               ; 0055594d
    PUSH EAX                            ; 00555954
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 00555955
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 0055595a
    JMP 0x00555584                      ; 0055595d
        ;   XREF to: 00555584 (UNCONDITIONAL_JUMP)  ; LAB_00555584
    PUSH EAX                            ; 00555962
        ;   Label: LAB_00555962
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00555963
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00555968
    PUSH EAX                            ; 0055596b
    PUSH 0x5e9b80                       ; 0055596c | = "Get Primary buffer format"
    PUSH 0x5e9a3b                       ; 00555971 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 00555976
    PUSH EAX                            ; 0055597d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0055597e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00555983
    LEA EAX,[ESP + 0x4b0]               ; 00555986
    PUSH EAX                            ; 0055598d
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 0055598e
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 00555993
    JMP 0x00555584                      ; 00555996
        ;   XREF to: 00555584 (UNCONDITIONAL_JUMP)  ; LAB_00555584
    PUSH EAX                            ; 0055599b
        ;   Label: LAB_0055599b
    CALL sound_snddx.cpp_FUN_00554ad0   ; 0055599c
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 005559a1
    PUSH EAX                            ; 005559a4
    PUSH 0x5e9b2f                       ; 005559a5 | = "Create temp secondary buffer for prop..."
    PUSH 0x5e9a3b                       ; 005559aa | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 005559af
    PUSH EAX                            ; 005559b6
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005559b7
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 005559bc
    LEA EAX,[ESP + 0x190]               ; 005559bf
    PUSH EAX                            ; 005559c6
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 005559c7
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 005559cc
    JMP 0x005557d7                      ; 005559cf
        ;   XREF to: 005557d7 (UNCONDITIONAL_JUMP)  ; LAB_005557d7
    PUSH 0x264a5d4                      ; 005559d4 | DAT_0264a5d4
        ;   Label: LAB_005559d4
    PUSH 0x61bf50                       ; 005559d9 | DAT_0061bf50
    MOV EAX,dword ptr [ECX]             ; 005559de
    PUSH ECX                            ; 005559e0
    CALL dword ptr [EAX]                ; 005559e1
    MOV ESI,dword ptr [ESP + 0x690]     ; 005559e3
    TEST ESI,ESI                        ; 005559ea
    JZ 0x005559fd                       ; 005559ec
        ;   XREF to: 005559fd (CONDITIONAL_JUMP)  ; LAB_005559fd
    PUSH ESI                            ; 005559ee
    MOV EAX,dword ptr [ESI]             ; 005559ef
    XOR EBP,EBP                         ; 005559f1
    CALL dword ptr [EAX + 0x8]          ; 005559f3
    MOV dword ptr [ESP + 0x690],EBP     ; 005559f6
    MOV EAX,dword ptr [ESP + 0x694]     ; 005559fd
        ;   Label: LAB_005559fd
    TEST EAX,EAX                        ; 00555a04
    JZ 0x005557d7                       ; 00555a06
        ;   XREF to: 005557d7 (CONDITIONAL_JUMP)  ; LAB_005557d7
    MOV EDX,dword ptr [ESP + 0x694]     ; 00555a0c
    MOV EAX,dword ptr [EAX]             ; 00555a13
    PUSH EDX                            ; 00555a15
    CALL dword ptr [EAX + 0x8]          ; 00555a16
    XOR ECX,ECX                         ; 00555a19
    MOV dword ptr [ESP + 0x694],ECX     ; 00555a1b
    JMP 0x005557d7                      ; 00555a22
        ;   XREF to: 005557d7 (UNCONDITIONAL_JUMP)  ; LAB_005557d7
    MOV EAX,dword ptr [ESP + 0x6c4]     ; 00555a27
        ;   Label: LAB_00555a27
    MOV dword ptr [EAX],0x0             ; 00555a2e
    MOV EAX,0x1                         ; 00555a34
    ADD ESP,0x6a0                       ; 00555a39
    POP EBP                             ; 00555a3f
    POP EDI                             ; 00555a40
    POP ESI                             ; 00555a41
    POP EBX                             ; 00555a42
    RET                                 ; 00555a43
    PUSH EAX                            ; 00555a44
        ;   Label: LAB_00555a44
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00555a45
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00555a4a
    PUSH EAX                            ; 00555a4d
    PUSH 0x5e9b9a                       ; 00555a4e | = "Create the secondary buffer"
    PUSH 0x5e9a3b                       ; 00555a53 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00555a58
    PUSH EAX                            ; 00555a5c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00555a5d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00555a62
    MOV EAX,ESP                         ; 00555a65
    PUSH EAX                            ; 00555a67
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 00555a68
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 00555a6d
    JMP 0x00555584                      ; 00555a70
        ;   XREF to: 00555584 (UNCONDITIONAL_JUMP)  ; LAB_00555584

