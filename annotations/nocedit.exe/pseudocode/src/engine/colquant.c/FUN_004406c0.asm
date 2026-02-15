; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl engine_colquant_c_FUN_004406c0(void)
;
; Local Variables:
; undefined8       Stack[-0x160]:8  local_160
; undefined8       Stack[-0x158]:8  local_158
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 at 00545431
;
; Referenced Globals:
;   TerminatedCString s_Subdividing_histogram_ar_00618d41
;   TerminatedCString s_s_6_6d_00618d79
;   double DOUBLE_00618d81 = 0.577350270000000
;   double DOUBLE_00618d89 = 0.590000000000000
;   double DOUBLE_00618d91 = 0.300000000000000
;   double DOUBLE_00618d99 = 0.110000000000000
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_colquant.c_FUN_00440b40
;   engine_colquant.c_FUN_00440c80
;   engine_colquant.c_FUN_00440dc0
;   engine_colquant.c_FUN_00440f00
;   engine_colquant.c_FUN_00441260
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004406c0
        ;   Label: engine_colquant.c_FUN_004406c0
    PUSH ESI                            ; 004406c1
    PUSH EDI                            ; 004406c2
    PUSH EBP                            ; 004406c3
    MOV EBP,ESP                         ; 004406c4
    SUB ESP,0x14c                       ; 004406c6
    AND ESP,0xfffffff8                  ; 004406cc
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004406cf
    PUSH 0x2000                         ; 004406d2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004406d7
    PUSH 0x0                            ; 004406da
    ADD EAX,0x4                         ; 004406dc
    PUSH EAX                            ; 004406df
    CALL crt_memory.c_memset_FUN_005fde40 ; 004406e0
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004406e5
    PUSH 0x2000                         ; 004406e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004406ed
    PUSH 0x0                            ; 004406f0
    ADD EAX,0x2008                      ; 004406f2
    PUSH EAX                            ; 004406f7
    CALL crt_memory.c_memset_FUN_005fde40 ; 004406f8
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004406fd
    PUSH 0x4000                         ; 00440700
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440705
    PUSH 0x0                            ; 00440708
    ADD EAX,0x4008                      ; 0044070a
    PUSH EAX                            ; 0044070f
    CALL crt_memory.c_memset_FUN_005fde40 ; 00440710
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00440715
    PUSH 0x300                          ; 00440718
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044071d
    PUSH 0x0                            ; 00440720
    ADD EAX,0x8008                      ; 00440722
    PUSH EAX                            ; 00440727
    CALL crt_memory.c_memset_FUN_005fde40 ; 00440728
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0044072d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440730
    MOV EDX,dword ptr [EBP + 0x18]      ; 00440733
    MOV dword ptr [EAX + 0x2004],EDX    ; 00440736
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044073c
    MOV dword ptr [EAX],EDX             ; 0044073f
    TEST ESI,ESI                        ; 00440741
    JLE 0x004407ca                      ; 00440743
        ;   XREF to: 004407ca (CONDITIONAL_JUMP)  ; LAB_004407ca
    FLD double ptr [0x00618d81]         ; 00440749 | DOUBLE_00618d81
    LEA ECX,[ESI*0x4 + 0x0]             ; 0044074f
    XOR EBX,EBX                         ; 00440756
    MOV EDX,dword ptr [EBP + 0x14]      ; 00440758
        ;   Label: LAB_00440758
    MOV EDX,dword ptr [EDX + 0x2004]    ; 0044075b
    XOR EAX,EAX                         ; 00440761
    MOV AL,byte ptr [EDX + EBX*0x1]     ; 00440763
    MOV dword ptr [ESP + 0x148],EAX     ; 00440766
    XOR EAX,EAX                         ; 0044076d
    MOV AL,byte ptr [EDX + EBX*0x1 + 0x1] ; 0044076f
    MOV dword ptr [ESP + 0x144],EAX     ; 00440773
    FILD word ptr [ESP + 0x144]         ; 0044077a
    FMUL ST0                            ; 00440781
    XOR EAX,EAX                         ; 00440783
    FILD word ptr [ESP + 0x148]         ; 00440785
    MOV AL,byte ptr [EDX + EBX*0x1 + 0x2] ; 0044078c
    FMUL ST0                            ; 00440790
    MOV dword ptr [ESP + 0x148],EAX     ; 00440792
    FADDP                               ; 00440799
    FILD word ptr [ESP + 0x148]         ; 0044079b
    FMUL ST0                            ; 004407a2
    FADDP                               ; 004407a4
    FSQRT                               ; 004407a6
    FMUL ST1                            ; 004407a8
    CALL crt_math.c_round_FUN_005fe6b0  ; 004407aa
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x140]       ; 004407af
    MOV AL,byte ptr [ESP + 0x140]       ; 004407b6
    ADD EBX,0x4                         ; 004407bd
    MOV byte ptr [EDX + EBX*0x1 + -0x1],AL ; 004407c0
    CMP EBX,ECX                         ; 004407c4
    JL 0x00440758                       ; 004407c6
        ;   XREF to: 00440758 (CONDITIONAL_JUMP)  ; LAB_00440758
    FSTP ST0                            ; 004407c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004407ca
        ;   Label: LAB_004407ca
    PUSH 0x0                            ; 004407cd
    MOV dword ptr [EAX + 0x4040],0x0    ; 004407cf
    PUSH EAX                            ; 004407d9
    MOV dword ptr [EAX + 0x4044],ESI    ; 004407da
    CALL engine_colquant.c_FUN_00441260 ; 004407e0
        ;   XREF to: 00441260 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_FUN_00441260()
    ADD ESP,0x8                         ; 004407e5
    PUSH ESI                            ; 004407e8
    PUSH 0x618d41                       ; 004407e9 | = "Subdividing histogram array for %d pa..."
    LEA EAX,[ESP + 0x18]                ; 004407ee
    PUSH EAX                            ; 004407f2
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004407f3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004407f8
    PUSH 0x16                           ; 004407fb
    PUSH 0x0                            ; 004407fd
    LEA EAX,[ESP + 0x18]                ; 004407ff
    PUSH EAX                            ; 00440803
    MOV EDI,0x40                        ; 00440804
    XOR EBX,EBX                         ; 00440809
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0044080b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00440810
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440813
        ;   Label: LAB_00440813
    MOV EAX,dword ptr [EAX]             ; 00440816
    DEC EAX                             ; 00440818
    CMP EBX,EAX                         ; 00440819
    JGE 0x00440964                      ; 0044081b
        ;   XREF to: 00440964 (CONDITIONAL_JUMP)  ; LAB_00440964
    PUSH EBX                            ; 00440821
    PUSH 0x618d79                       ; 00440822 | = "%6.6d"
    LEA EAX,[ESP + 0x18]                ; 00440827
    PUSH EAX                            ; 0044082b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0044082c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00440831
    PUSH 0x21                           ; 00440834
    PUSH 0x0                            ; 00440836
    LEA EAX,[ESP + 0x18]                ; 00440838
    PUSH EAX                            ; 0044083c
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0044083d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00440842
    TEST BL,0x7                         ; 00440845
    JNZ 0x0044084f                      ; 00440848
        ;   XREF to: 0044084f (CONDITIONAL_JUMP)  ; LAB_0044084f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0044084a
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044084f
        ;   Label: LAB_0044084f
    MOV EAX,dword ptr [EAX + 0x4010]    ; 00440852
    MOV dword ptr [ESP],EAX             ; 00440858
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044085b
    MOV EAX,dword ptr [EAX + 0x4014]    ; 0044085e
    MOV dword ptr [ESP + 0x4],EAX       ; 00440864
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440868
    MOV EAX,dword ptr [EAX + 0x4038]    ; 0044086b
    MOV dword ptr [ESP + 0x8],EAX       ; 00440871
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440875
    MOV ECX,0x1                         ; 00440878
    MOV EAX,dword ptr [EAX + 0x403c]    ; 0044087d
    XOR ESI,ESI                         ; 00440883
    MOV dword ptr [ESP + 0xc],EAX       ; 00440885
    CMP EBX,ECX                         ; 00440889
    JL 0x004408d1                       ; 0044088b
        ;   XREF to: 004408d1 (CONDITIONAL_JUMP)  ; LAB_004408d1
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044088d
    ADD EDX,EDI                         ; 00440890
    FLD double ptr [EDX + 0x4010]       ; 00440892
        ;   Label: LAB_00440892
    FCOMP double ptr [ESP]              ; 00440898
    FNSTSW AX                           ; 0044089b
    SAHF                                ; 0044089d
    JBE 0x004408c9                      ; 0044089e
        ;   XREF to: 004408c9 (CONDITIONAL_JUMP)  ; LAB_004408c9
    MOV EAX,dword ptr [EDX + 0x4010]    ; 004408a0
    MOV dword ptr [ESP],EAX             ; 004408a6
    MOV EAX,dword ptr [EDX + 0x4014]    ; 004408a9
    MOV dword ptr [ESP + 0x4],EAX       ; 004408af
    MOV EAX,dword ptr [EDX + 0x4038]    ; 004408b3
    MOV dword ptr [ESP + 0x8],EAX       ; 004408b9
    MOV EAX,dword ptr [EDX + 0x403c]    ; 004408bd
    MOV ESI,ECX                         ; 004408c3
    MOV dword ptr [ESP + 0xc],EAX       ; 004408c5
    INC ECX                             ; 004408c9
        ;   Label: LAB_004408c9
    ADD EDX,0x40                        ; 004408ca
    CMP ECX,EBX                         ; 004408cd
    JLE 0x00440892                      ; 004408cf
        ;   XREF to: 00440892 (CONDITIONAL_JUMP)  ; LAB_00440892
    MOV ECX,ESI                         ; 004408d1
        ;   Label: LAB_004408d1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004408d3
    SHL ECX,0x6                         ; 004408d6
    ADD ECX,EAX                         ; 004408d9
    FLD double ptr [ESP + 0x8]          ; 004408db
    LEA EDX,[EBX + 0x1]                 ; 004408df
    FCOMP double ptr [ECX + 0x4018]     ; 004408e2
    FNSTSW AX                           ; 004408e8
    SAHF                                ; 004408ea
    JZ 0x00440920                       ; 004408eb
        ;   XREF to: 00440920 (CONDITIONAL_JUMP)  ; LAB_00440920
    FLD double ptr [ESP + 0x8]          ; 004408ed
    FCOMP double ptr [ECX + 0x4020]     ; 004408f1
    FNSTSW AX                           ; 004408f7
    SAHF                                ; 004408f9
    JZ 0x00440930                       ; 004408fa
        ;   XREF to: 00440930 (CONDITIONAL_JUMP)  ; LAB_00440930
    FLD double ptr [ESP + 0x8]          ; 004408fc
    FCOMP double ptr [ECX + 0x4028]     ; 00440900
    FNSTSW AX                           ; 00440906
    SAHF                                ; 00440908
    JZ 0x00440940                       ; 00440909
        ;   XREF to: 00440940 (CONDITIONAL_JUMP)  ; LAB_00440940
    FLD double ptr [ESP + 0x8]          ; 0044090b
    FCOMP double ptr [ECX + 0x4030]     ; 0044090f
    FNSTSW AX                           ; 00440915
    SAHF                                ; 00440917
    JZ 0x00440950                       ; 00440918
        ;   XREF to: 00440950 (CONDITIONAL_JUMP)  ; LAB_00440950
    INC EBX                             ; 0044091a
        ;   Label: LAB_0044091a
    JMP 0x00440813                      ; 0044091b
        ;   XREF to: 00440813 (UNCONDITIONAL_JUMP)  ; LAB_00440813
    PUSH EDX                            ; 00440920
        ;   Label: LAB_00440920
    PUSH ESI                            ; 00440921
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440922
    PUSH EAX                            ; 00440925
    CALL engine_colquant.c_FUN_00440b40 ; 00440926
        ;   XREF to: 00440b40 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_FUN_00440b40()
    ADD ESP,0xc                         ; 0044092b
    JMP 0x0044091a                      ; 0044092e
        ;   XREF to: 0044091a (UNCONDITIONAL_JUMP)  ; LAB_0044091a
    PUSH EDX                            ; 00440930
        ;   Label: LAB_00440930
    PUSH ESI                            ; 00440931
    MOV ESI,dword ptr [EBP + 0x14]      ; 00440932
    PUSH ESI                            ; 00440935
    CALL engine_colquant.c_FUN_00440c80 ; 00440936
        ;   XREF to: 00440c80 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_FUN_00440c80()
    ADD ESP,0xc                         ; 0044093b
    JMP 0x0044091a                      ; 0044093e
        ;   XREF to: 0044091a (UNCONDITIONAL_JUMP)  ; LAB_0044091a
    PUSH EDX                            ; 00440940
        ;   Label: LAB_00440940
    PUSH ESI                            ; 00440941
    MOV ECX,dword ptr [EBP + 0x14]      ; 00440942
    PUSH ECX                            ; 00440945
    CALL engine_colquant.c_FUN_00440dc0 ; 00440946
        ;   XREF to: 00440dc0 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_FUN_00440dc0()
    ADD ESP,0xc                         ; 0044094b
    JMP 0x0044091a                      ; 0044094e
        ;   XREF to: 0044091a (UNCONDITIONAL_JUMP)  ; LAB_0044091a
    PUSH EDX                            ; 00440950
        ;   Label: LAB_00440950
    PUSH ESI                            ; 00440951
    MOV EDX,dword ptr [EBP + 0x14]      ; 00440952
    PUSH EDX                            ; 00440955
    CALL engine_colquant.c_FUN_00440f00 ; 00440956
        ;   XREF to: 00440f00 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_FUN_00440f00()
    ADD ESP,0xc                         ; 0044095b
    INC EBX                             ; 0044095e
    JMP 0x00440813                      ; 0044095f
        ;   XREF to: 00440813 (UNCONDITIONAL_JUMP)  ; LAB_00440813
    MOV EDX,dword ptr [EBP + 0x14]      ; 00440964
        ;   Label: LAB_00440964
    MOV ECX,dword ptr [EDX]             ; 00440967
    XOR EAX,EAX                         ; 00440969
    TEST ECX,ECX                        ; 0044096b
    JLE 0x00440a1a                      ; 0044096d
        ;   XREF to: 00440a1a (CONDITIONAL_JUMP)  ; LAB_00440a1a
    FLD double ptr [0x00618d99]         ; 00440973 | DOUBLE_00618d99
    MOV EBX,dword ptr [EBP + 0x14]      ; 00440979
    FLD double ptr [0x00618d91]         ; 0044097c | DOUBLE_00618d91
    MOV ECX,EDX                         ; 00440982
    FLD double ptr [0x00618d89]         ; 00440984 | DOUBLE_00618d89
    FILD word ptr [ECX + 0x4008]        ; 0044098a
        ;   Label: LAB_0044098a
    FSTP double ptr [EDX + 0x2008]      ; 00440990
    ADD EDX,0x20                        ; 00440996
    FILD word ptr [ECX + 0x400a]        ; 00440999
    FSTP double ptr [EDX + 0x1ff0]      ; 0044099f
    FILD word ptr [ECX + 0x400c]        ; 004409a5
    MOV dword ptr [EDX + -0x1c],0x0     ; 004409ab
    MOV dword ptr [EDX + -0x18],0x0     ; 004409b2
    MOV dword ptr [EDX + -0x14],0x0     ; 004409b9
    MOV dword ptr [EDX + -0x10],0x0     ; 004409c0
    FLD double ptr [EDX + 0x1ff0]       ; 004409c7
    MOV dword ptr [EDX + -0xc],0x0      ; 004409cd
    FMUL ST2                            ; 004409d4
    MOV dword ptr [EDX + -0x8],0x0      ; 004409d6
    FLD double ptr [EDX + 0x1fe8]       ; 004409dd
    FMUL ST4                            ; 004409e3
    MOV dword ptr [EDX + -0x4],0x0      ; 004409e5
    FADDP                               ; 004409ec
    FXCH                                ; 004409ee
    FST double ptr [EDX + 0x1ff8]       ; 004409f0
    FMUL ST4                            ; 004409f6
    MOV dword ptr [EDX],0x0             ; 004409f8
    FADDP                               ; 004409fe
    INC EAX                             ; 00440a00
    FSTP double ptr [EDX + 0x2000]      ; 00440a01
    MOV ESI,dword ptr [EBX]             ; 00440a07
    ADD ECX,0x40                        ; 00440a09
    CMP EAX,ESI                         ; 00440a0c
    JL 0x0044098a                       ; 00440a0e
        ;   XREF to: 0044098a (CONDITIONAL_JUMP)  ; LAB_0044098a
    FSTP ST0                            ; 00440a14
    FSTP ST0                            ; 00440a16
    FSTP ST0                            ; 00440a18
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440a1a
        ;   Label: LAB_00440a1a
    XOR EDI,EDI                         ; 00440a1d
    MOV EDX,dword ptr [EAX]             ; 00440a1f
    MOV dword ptr [ESP + 0x13c],EDI     ; 00440a21
    TEST EDX,EDX                        ; 00440a28
    JLE 0x00440a6e                      ; 00440a2a
        ;   XREF to: 00440a6e (CONDITIONAL_JUMP)  ; LAB_00440a6e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00440a2c
        ;   Label: LAB_00440a2c
    XOR EBX,EBX                         ; 00440a2f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440a31
        ;   Label: LAB_00440a31
    MOV ECX,dword ptr [EAX]             ; 00440a34
    DEC ECX                             ; 00440a36
    CMP EBX,ECX                         ; 00440a37
    JGE 0x00440a56                      ; 00440a39
        ;   XREF to: 00440a56 (CONDITIONAL_JUMP)  ; LAB_00440a56
    FLD double ptr [EDX + 0x2020]       ; 00440a3b
    FCOMP double ptr [EDX + 0x2040]     ; 00440a41
    FNSTSW AX                           ; 00440a47
    SAHF                                ; 00440a49
    JA 0x00440aef                       ; 00440a4a
        ;   XREF to: 00440aef (CONDITIONAL_JUMP)  ; LAB_00440aef
    INC EBX                             ; 00440a50
    ADD EDX,0x20                        ; 00440a51
    JMP 0x00440a31                      ; 00440a54
        ;   XREF to: 00440a31 (UNCONDITIONAL_JUMP)  ; LAB_00440a31
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00440a56
        ;   Label: LAB_00440a56
    INC EDX                             ; 00440a5d
    MOV dword ptr [ESP + 0x13c],EDX     ; 00440a5e
    MOV EAX,EDX                         ; 00440a65
    MOV EDX,dword ptr [EBP + 0x14]      ; 00440a67
    CMP EAX,dword ptr [EDX]             ; 00440a6a
    JL 0x00440a2c                       ; 00440a6c
        ;   XREF to: 00440a2c (CONDITIONAL_JUMP)  ; LAB_00440a2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00440a6e
        ;   Label: LAB_00440a6e
    MOV EDX,EBX                         ; 00440a71
    LEA ECX,[EBX + 0x2000]              ; 00440a73
    FLD double ptr [EDX + 0x2008]       ; 00440a79
        ;   Label: LAB_00440a79
    CALL crt_math.c_round_FUN_005fe6b0  ; 00440a7f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    ADD EBX,0x3                         ; 00440a84
    FISTP dword ptr [ESP + 0x140]       ; 00440a87
    MOV AL,byte ptr [ESP + 0x140]       ; 00440a8e
    MOV byte ptr [EBX + 0x8005],AL      ; 00440a95
    FLD double ptr [EDX + 0x2010]       ; 00440a9b
    CALL crt_math.c_round_FUN_005fe6b0  ; 00440aa1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x140]       ; 00440aa6
    MOV AL,byte ptr [ESP + 0x140]       ; 00440aad
    MOV byte ptr [EBX + 0x8006],AL      ; 00440ab4
    FLD double ptr [EDX + 0x2018]       ; 00440aba
    CALL crt_math.c_round_FUN_005fe6b0  ; 00440ac0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x140]       ; 00440ac5
    MOV AL,byte ptr [ESP + 0x140]       ; 00440acc
    ADD EDX,0x20                        ; 00440ad3
    MOV byte ptr [EBX + 0x8007],AL      ; 00440ad6
    CMP EDX,ECX                         ; 00440adc
    JNZ 0x00440a79                      ; 00440ade
        ;   XREF to: 00440a79 (CONDITIONAL_JUMP)  ; LAB_00440a79
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440ae0
    ADD EAX,0x8008                      ; 00440ae3
    MOV ESP,EBP                         ; 00440ae8
    POP EBP                             ; 00440aea
    POP EDI                             ; 00440aeb
    POP ESI                             ; 00440aec
    POP EBX                             ; 00440aed
    RET                                 ; 00440aee
    MOV ECX,0x8                         ; 00440aef
        ;   Label: LAB_00440aef
    LEA EDI,[ESP + 0x110]               ; 00440af4
    LEA ESI,[EDX + 0x2008]              ; 00440afb
    MOVSD.REP ES:EDI,ESI                ; 00440b01
    MOV ECX,0x8                         ; 00440b03
    LEA EDI,[EDX + 0x2008]              ; 00440b08
    LEA ESI,[EDX + 0x2028]              ; 00440b0e
    MOVSD.REP ES:EDI,ESI                ; 00440b14
    MOV ECX,0x8                         ; 00440b16
    LEA ESI,[ESP + 0x110]               ; 00440b1b
    LEA EDI,[EDX + 0x2028]              ; 00440b22
    MOVSD.REP ES:EDI,ESI                ; 00440b28
    INC EBX                             ; 00440b2a
    ADD EDX,0x20                        ; 00440b2b
    JMP 0x00440a31                      ; 00440b2e
        ;   XREF to: 00440a31 (UNCONDITIONAL_JUMP)  ; LAB_00440a31

