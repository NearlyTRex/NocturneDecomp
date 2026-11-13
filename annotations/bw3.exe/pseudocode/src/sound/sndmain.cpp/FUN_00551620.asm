; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00551620(char *param_1)
;
; Local Variables:
; undefined8       Stack[-0x498]:8  local_498
; undefined4       Stack[-0x488]:4  local_488
; undefined        Stack[-0x484]:1  local_484
; undefined1       Stack[-0x483]:1  local_483
; undefined1       Stack[-0x482]:1  local_482
; undefined1       Stack[-0x481]:1  local_481
; undefined        Stack[-0x358]:1  local_358
; undefined        Stack[-0x258]:1  local_258
; undefined        Stack[-0x158]:1  local_158
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_00551d20 at 00551ec9
;   sound_sndmain.cpp_FUN_00552350 at 005524d9
;   sound_sndmain.cpp_FUN_00557570 at 005576c9
;
; Referenced Globals:
;   undefined4 DAT_005d253c
;   undefined4 DAT_005d253f
;   TerminatedCString s_sound_005d2543
;   undefined4 DAT_005d2549
;   TerminatedCString s_sound_005d254d
;   TerminatedCString s_refDist_f_005d2553
;   TerminatedCString s_sound_sndmain_cpp_005d255f
;   TerminatedCString s_Reference_distance_speci_005d2574
;   TerminatedCString s_sound_sndmain_cpp_005d25b9
;   TerminatedCString s_Reference_volume_distanc_005d25ce
;   TerminatedCString s_minDist_f_005d2607
;   TerminatedCString s_sound_sndmain_cpp_005d2613
;   TerminatedCString s_Minimum_distance_specifi_005d2628
;   TerminatedCString s_sound_sndmain_cpp_005d266b
;   TerminatedCString s_Reference_volume_distanc_005d2680
;   ... and 24 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_string.c__stricmp_FUN_005a3260
;   crt_string.c_memmove_FUN_005a54c0
;   crt_string.c_strstr_FUN_005a4010
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   engine_dosio.cpp_makePath_FUN_00465e80
;   engine_dosio.cpp_splitPath_FUN_00465e50
;   support_trstream.cpp_CInStream_readLine_FUN_00573790
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551620
        ;   Label: sound_sndmain.cpp_FUN_00551620
    PUSH ESI                            ; 00551621
    PUSH EDI                            ; 00551622
    PUSH EBP                            ; 00551623
    MOV EBP,ESP                         ; 00551624
    SUB ESP,0x478                       ; 00551626
    AND ESP,0xfffffff8                  ; 0055162c
    FLD float ptr [0x00604244]          ; 0055162f | DAT_00604244
    FLD float ptr [0x005e4854]          ; 00551635 | DAT_005e4854
    FMUL ST1                            ; 0055163b
    FLD float ptr [0x02ce7210]          ; 0055163d | DAT_02ce7210
    FMUL ST2                            ; 00551643
    FLD float ptr [0x005e4858]          ; 00551645 | DAT_005e4858
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055164b
    FMULP ST3                           ; 0055164e
    MOV dword ptr [EAX + 0x124],0x1     ; 00551650
    MOV ECX,dword ptr [EBP + 0x14]      ; 0055165a
    FXCH                                ; 0055165d
    FSTP float ptr [EAX + 0x114]        ; 0055165f
    FSTP float ptr [EAX + 0x118]        ; 00551665
    FSTP float ptr [EAX + 0x11c]        ; 0055166b
    MOV EAX,dword ptr [EAX + 0x110]     ; 00551671
    PUSH 0x0                            ; 00551677
    MOV dword ptr [ECX + 0x128],EAX     ; 00551679
    LEA EAX,[ESP + 0x334]               ; 0055167f
    PUSH EAX                            ; 00551686
    PUSH 0x0                            ; 00551687
    PUSH 0x0                            ; 00551689
    PUSH ECX                            ; 0055168b
    MOV dword ptr [ECX + 0x13c],0xffffffff ; 0055168c
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 00551696
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0055169b
    PUSH 0x5d253f                       ; 0055169e | DAT_005d253f
    LEA EAX,[ESP + 0x334]               ; 005516a3
    PUSH EAX                            ; 005516aa
    PUSH 0x0                            ; 005516ab
    PUSH 0x0                            ; 005516ad
    LEA EAX,[ESP + 0x240]               ; 005516af
    PUSH EAX                            ; 005516b6
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 005516b7
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005516bc
    LEA EAX,[ESP + 0x230]               ; 005516bf
    PUSH EAX                            ; 005516c6
    PUSH 0x5d2543                       ; 005516c7 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 005516cc
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 005516d1
    TEST EAX,EAX                        ; 005516d4
    JLE 0x005516fe                      ; 005516d6
        ;   XREF to: 005516fe (CONDITIONAL_JUMP)  ; LAB_005516fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 005516d8
    MOV dword ptr [EAX + 0x124],0x1     ; 005516db
    MOV ECX,dword ptr [EBP + 0x14]      ; 005516e5
    MOV EAX,dword ptr [EAX + 0x110]     ; 005516e8
    MOV dword ptr [ECX + 0x13c],0x0     ; 005516ee
    MOV dword ptr [ECX + 0x128],EAX     ; 005516f8
    PUSH 0x5d2549                       ; 005516fe | DAT_005d2549
        ;   Label: LAB_005516fe
    LEA EAX,[ESP + 0x334]               ; 00551703
    PUSH EAX                            ; 0055170a
    PUSH 0x0                            ; 0055170b
    PUSH 0x0                            ; 0055170d
    LEA EAX,[ESP + 0x140]               ; 0055170f
    PUSH EAX                            ; 00551716
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 00551717
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0055171c
    LEA EAX,[ESP + 0x430]               ; 0055171f
    PUSH EAX                            ; 00551726
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0 ; 00551727
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0055172c
    PUSH 0x1                            ; 0055172f
    LEA EAX,[ESP + 0x134]               ; 00551731
    PUSH EAX                            ; 00551738
    PUSH 0x5d254d                       ; 00551739 | = "sound"
    LEA EAX,[ESP + 0x43c]               ; 0055173e
    PUSH EAX                            ; 00551745
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 00551746
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, char * directory, char * filename, int binary_mode)
    ADD ESP,0x10                        ; 0055174b
    TEST EAX,EAX                        ; 0055174e
    JZ 0x005517fe                       ; 00551750
        ;   XREF to: 005517fe (CONDITIONAL_JUMP)  ; LAB_005517fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 00551756
    ADD EAX,0x11c                       ; 00551759
    MOV dword ptr [ESP + 0x468],EAX     ; 0055175e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00551765
    XOR ECX,ECX                         ; 00551768
    ADD EAX,0x118                       ; 0055176a
    MOV dword ptr [ESP + 0x470],ECX     ; 0055176f
    MOV dword ptr [ESP + 0x460],EAX     ; 00551776
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055177d
    MOV dword ptr [ESP + 0x46c],ECX     ; 00551780
    ADD EAX,0x114                       ; 00551787
    MOV dword ptr [ESP + 0x474],ECX     ; 0055178c
    MOV dword ptr [ESP + 0x464],EAX     ; 00551793
    PUSH 0x12c                          ; 0055179a
        ;   Label: LAB_0055179a
    LEA EAX,[ESP + 0x8]                 ; 0055179f
    PUSH EAX                            ; 005517a3
    LEA EAX,[ESP + 0x438]               ; 005517a4
    PUSH EAX                            ; 005517ab
    CALL support_trstream.cpp_CInStream_readLine_FUN_00573790 ; 005517ac
        ;   XREF to: 00573790 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_readLine_FUN_00573790(CInStream * this_ptr, char * buffer, int size)
    ADD ESP,0xc                         ; 005517b1
    TEST EAX,EAX                        ; 005517b4
    JGE 0x00551801                      ; 005517b6
        ;   XREF to: 00551801 (CONDITIONAL_JUMP)  ; LAB_00551801
    MOV EAX,dword ptr [EBP + 0x14]      ; 005517b8
    MOV EDI,dword ptr [EAX + 0x124]     ; 005517bb
    XOR ESI,ESI                         ; 005517c1
    TEST EDI,EDI                        ; 005517c3
    JLE 0x005517e5                      ; 005517c5
        ;   XREF to: 005517e5 (CONDITIONAL_JUMP)  ; LAB_005517e5
    CMP dword ptr [EAX + 0x128],0x0     ; 005517c7
        ;   Label: LAB_005517c7
    JL 0x00551cc7                       ; 005517ce
        ;   XREF to: 00551cc7 (CONDITIONAL_JUMP)  ; LAB_00551cc7
    MOV ECX,dword ptr [EBP + 0x14]      ; 005517d4
        ;   Label: LAB_005517d4
    INC ESI                             ; 005517d7
    MOV EDX,dword ptr [ECX + 0x124]     ; 005517d8
    ADD EAX,0x4                         ; 005517de
    CMP ESI,EDX                         ; 005517e1
    JL 0x005517c7                       ; 005517e3
        ;   XREF to: 005517c7 (CONDITIONAL_JUMP)  ; LAB_005517c7
    PUSH 0x0                            ; 005517e5
        ;   Label: LAB_005517e5
    LEA EAX,[ESP + 0x434]               ; 005517e7
        ;   Label: LAB_005517e7
    PUSH EAX                            ; 005517ee
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 005517ef
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005517f4
    MOV ESP,EBP                         ; 005517f7
    POP EBP                             ; 005517f9
    POP EDI                             ; 005517fa
    POP ESI                             ; 005517fb
    POP EBX                             ; 005517fc
    RET                                 ; 005517fd
    PUSH EAX                            ; 005517fe
        ;   Label: LAB_005517fe
    JMP 0x005517e7                      ; 005517ff
        ;   XREF to: 005517e7 (UNCONDITIONAL_JUMP)  ; LAB_005517e7
    PUSH 0x5d253c                       ; 00551801 | DAT_005d253c
        ;   Label: LAB_00551801
    MOV EAX,dword ptr [ESP + 0x478]     ; 00551806
    LEA EBX,[ESP + 0x8]                 ; 0055180d
    INC EAX                             ; 00551811
    PUSH EBX                            ; 00551812
    MOV dword ptr [ESP + 0x47c],EAX     ; 00551813
    CALL crt_string.c_strstr_FUN_005a4010 ; 0055181a
        ;   XREF to: 005a4010 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005a4010(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 0055181f
    TEST EAX,EAX                        ; 00551822
    JZ 0x00551829                       ; 00551824
        ;   XREF to: 00551829 (CONDITIONAL_JUMP)  ; LAB_00551829
    MOV byte ptr [EAX],0x0              ; 00551826
    MOV ESI,EBX                         ; 00551829
        ;   Label: LAB_00551829
    XOR DL,DL                           ; 0055182b
    MOV AL,byte ptr [ESI]               ; 0055182d
        ;   Label: LAB_0055182d
    CMP AL,DL                           ; 0055182f
    JZ 0x00551845                       ; 00551831
        ;   XREF to: 00551845 (CONDITIONAL_JUMP)  ; LAB_00551845
    CMP AL,0x0                          ; 00551833
    JZ 0x00551843                       ; 00551835
        ;   XREF to: 00551843 (CONDITIONAL_JUMP)  ; LAB_00551843
    INC ESI                             ; 00551837
    MOV AL,byte ptr [ESI]               ; 00551838
    CMP AL,DL                           ; 0055183a
    JZ 0x00551845                       ; 0055183c
        ;   XREF to: 00551845 (CONDITIONAL_JUMP)  ; LAB_00551845
    INC ESI                             ; 0055183e
    CMP AL,0x0                          ; 0055183f
    JNZ 0x0055182d                      ; 00551841
        ;   XREF to: 0055182d (CONDITIONAL_JUMP)  ; LAB_0055182d
    SUB ESI,ESI                         ; 00551843
        ;   Label: LAB_00551843
    MOV EAX,ESI                         ; 00551845
        ;   Label: LAB_00551845
    CMP ESI,EBX                         ; 00551847
    JBE 0x0055185f                      ; 00551849
        ;   XREF to: 0055185f (CONDITIONAL_JUMP)  ; LAB_0055185f
    MOV CL,byte ptr [EAX + -0x1]        ; 0055184b
        ;   Label: LAB_0055184b
    INC CL                              ; 0055184e
    AND ECX,0xff                        ; 00551850
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 00551856 | DAT_006074b8
    JNZ 0x00551890                      ; 0055185d
        ;   XREF to: 00551890 (CONDITIONAL_JUMP)  ; LAB_00551890
    LEA ESI,[EBX + 0x1]                 ; 0055185f
        ;   Label: LAB_0055185f
    MOV byte ptr [EAX],0x0              ; 00551862
    MOV AL,byte ptr [EBX]               ; 00551865
        ;   Label: LAB_00551865
    INC AL                              ; 00551867
    AND EAX,0xff                        ; 00551869
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0055186e | DAT_006074b8
    JZ 0x00551897                       ; 00551875
        ;   XREF to: 00551897 (CONDITIONAL_JUMP)  ; LAB_00551897
    MOV EDI,EBX                         ; 00551877
    SUB ECX,ECX                         ; 00551879
    DEC ECX                             ; 0055187b
    XOR EAX,EAX                         ; 0055187c
    SCASB.REPNE ES:EDI                  ; 0055187e
    NOT ECX                             ; 00551880
    DEC ECX                             ; 00551882
    PUSH ECX                            ; 00551883
    PUSH ESI                            ; 00551884
    PUSH EBX                            ; 00551885
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00551886
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0055188b
    JMP 0x00551865                      ; 0055188e
        ;   XREF to: 00551865 (UNCONDITIONAL_JUMP)  ; LAB_00551865
    DEC EAX                             ; 00551890
        ;   Label: LAB_00551890
    CMP EAX,EBX                         ; 00551891
    JA 0x0055184b                       ; 00551893
        ;   XREF to: 0055184b (CONDITIONAL_JUMP)  ; LAB_0055184b
    JMP 0x0055185f                      ; 00551895
        ;   XREF to: 0055185f (UNCONDITIONAL_JUMP)  ; LAB_0055185f
    CMP byte ptr [ESP + 0x4],0x0        ; 00551897
        ;   Label: LAB_00551897
    JZ 0x0055179a                       ; 0055189c
        ;   XREF to: 0055179a (CONDITIONAL_JUMP)  ; LAB_0055179a
    MOV EBX,dword ptr [ESP + 0x464]     ; 005518a2
    PUSH EBX                            ; 005518a9
    PUSH 0x5d2553                       ; 005518aa | = "refDist =%f"
    LEA EAX,[ESP + 0xc]                 ; 005518af
    PUSH EAX                            ; 005518b3
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 005518b4
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 005518b9
    CMP EAX,0x1                         ; 005518bc
    JNZ 0x00551992                      ; 005518bf
        ;   XREF to: 00551992 (CONDITIONAL_JUMP)  ; LAB_00551992
    MOV EDI,dword ptr [ESP + 0x46c]     ; 005518c5
    TEST EDI,EDI                        ; 005518cc
    JNZ 0x0055195a                      ; 005518ce
        ;   XREF to: 0055195a (CONDITIONAL_JUMP)  ; LAB_0055195a
    MOV EAX,dword ptr [ESP + 0x474]     ; 005518d4
        ;   Label: LAB_005518d4
    MOV dword ptr [ESP + 0x46c],EAX     ; 005518db
    MOV EAX,dword ptr [EBP + 0x14]      ; 005518e2
    CMP dword ptr [EAX + 0x114],0x3dcccccd ; 005518e5
    JGE 0x00551932                      ; 005518ef
        ;   XREF to: 00551932 (CONDITIONAL_JUMP)  ; LAB_00551932
    MOV EDX,dword ptr [ESP + 0x474]     ; 005518f1
    MOV EAX,0x2e9                       ; 005518f8
    PUSH EDX                            ; 005518fd
    MOV [0x01d71de4],EAX                ; 005518fe | DAT_01d71de4
    LEA EAX,[ESP + 0x134]               ; 00551903
    PUSH EAX                            ; 0055190a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055190b
    SUB ESP,0x8                         ; 0055190e
    FLD float ptr [EAX + 0x114]         ; 00551911
    FSTP double ptr [ESP]               ; 00551917
    MOV EDI,0x5d25b9                    ; 0055191a | = "..\\sound\\sndmain.cpp"
    PUSH 0x5d25ce                       ; 0055191f | = "Reference volume distance %g is too s..."
    MOV dword ptr [0x01d71de0],EDI      ; 00551924 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 0055192a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x14                        ; 0055192f
    CMP dword ptr [ESP + 0x470],0x0     ; 00551932
        ;   Label: LAB_00551932
    JNZ 0x0055179a                      ; 0055193a
        ;   XREF to: 0055179a (CONDITIONAL_JUMP)  ; LAB_0055179a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00551940
    FLD float ptr [EAX + 0x114]         ; 00551943
    FDIV float ptr [0x005e4850]         ; 00551949 | DAT_005e4850
    FSTP float ptr [EAX + 0x118]        ; 0055194f
    JMP 0x0055179a                      ; 00551955
        ;   XREF to: 0055179a (UNCONDITIONAL_JUMP)  ; LAB_0055179a
    MOV ECX,dword ptr [ESP + 0x474]     ; 0055195a
        ;   Label: LAB_0055195a
    PUSH ECX                            ; 00551961
    MOV EAX,0x5d255f                    ; 00551962 | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 00551967
    MOV [0x01d71de0],EAX                ; 00551968 | DAT_01d71de0
    LEA EAX,[ESP + 0x138]               ; 0055196d
    PUSH EAX                            ; 00551974
    MOV EDX,0x2e7                       ; 00551975
    PUSH 0x5d2574                       ; 0055197a | = "Reference distance specified in %s on..."
    MOV dword ptr [0x01d71de4],EDX      ; 0055197f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00551985
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 0055198a
    JMP 0x005518d4                      ; 0055198d
        ;   XREF to: 005518d4 (UNCONDITIONAL_JUMP)  ; LAB_005518d4
    MOV ESI,dword ptr [ESP + 0x460]     ; 00551992
        ;   Label: LAB_00551992
    PUSH ESI                            ; 00551999
    PUSH 0x5d2607                       ; 0055199a | = "minDist =%f"
    LEA EAX,[ESP + 0xc]                 ; 0055199f
    PUSH EAX                            ; 005519a3
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 005519a4
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 005519a9
    CMP EAX,0x1                         ; 005519ac
    JNZ 0x00551a5c                      ; 005519af
        ;   XREF to: 00551a5c (CONDITIONAL_JUMP)  ; LAB_00551a5c
    MOV ECX,dword ptr [ESP + 0x470]     ; 005519b5
    TEST ECX,ECX                        ; 005519bc
    JZ 0x005519f4                       ; 005519be
        ;   XREF to: 005519f4 (CONDITIONAL_JUMP)  ; LAB_005519f4
    MOV EDI,dword ptr [ESP + 0x474]     ; 005519c0
    PUSH EDI                            ; 005519c7
    PUSH ECX                            ; 005519c8
    LEA EAX,[ESP + 0x138]               ; 005519c9
    PUSH EAX                            ; 005519d0
    MOV EBX,0x5d2613                    ; 005519d1 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x2ef                       ; 005519d6
    PUSH 0x5d2628                       ; 005519db | = "Minimum distance specified in %s on l..."
    MOV dword ptr [0x01d71de0],EBX      ; 005519e0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005519e6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005519ec
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 005519f1
    MOV EAX,dword ptr [ESP + 0x474]     ; 005519f4
        ;   Label: LAB_005519f4
    MOV dword ptr [ESP + 0x470],EAX     ; 005519fb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00551a02
    CMP dword ptr [EAX + 0x118],0x3dcccccd ; 00551a05
    JGE 0x0055179a                      ; 00551a0f
        ;   XREF to: 0055179a (CONDITIONAL_JUMP)  ; LAB_0055179a
    MOV ESI,dword ptr [ESP + 0x474]     ; 00551a15
    PUSH ESI                            ; 00551a1c
    LEA EAX,[ESP + 0x134]               ; 00551a1d
    PUSH EAX                            ; 00551a24
    MOV ECX,0x5d266b                    ; 00551a25 | = "..\\sound\\sndmain.cpp"
    MOV EAX,dword ptr [EBP + 0x14]      ; 00551a2a
    SUB ESP,0x8                         ; 00551a2d
    FLD float ptr [EAX + 0x118]         ; 00551a30
    FSTP double ptr [ESP]               ; 00551a36
    MOV EBX,0x2f1                       ; 00551a39
    PUSH 0x5d2680                       ; 00551a3e | = "Reference volume distance %g is too s..."
    MOV dword ptr [0x01d71de0],ECX      ; 00551a43 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00551a49 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00551a4f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x14                        ; 00551a54
    JMP 0x0055179a                      ; 00551a57
        ;   XREF to: 0055179a (UNCONDITIONAL_JUMP)  ; LAB_0055179a
    MOV EDI,dword ptr [ESP + 0x468]     ; 00551a5c
        ;   Label: LAB_00551a5c
    PUSH EDI                            ; 00551a63
    PUSH 0x5d26b9                       ; 00551a64 | = "maxDist =%f"
    LEA EAX,[ESP + 0xc]                 ; 00551a69
    PUSH EAX                            ; 00551a6d
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00551a6e
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 00551a73
    CMP EAX,0x1                         ; 00551a76
    JZ 0x0055179a                       ; 00551a79
        ;   XREF to: 0055179a (CONDITIONAL_JUMP)  ; LAB_0055179a
    MOV EAX,ESP                         ; 00551a7f
    PUSH EAX                            ; 00551a81
    PUSH 0x5d26c5                       ; 00551a82 | = "maxVol =%f"
    LEA EAX,[ESP + 0xc]                 ; 00551a87
    PUSH EAX                            ; 00551a8b
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00551a8c
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 00551a91
    CMP EAX,0x1                         ; 00551a94
    JNZ 0x00551b8e                      ; 00551a97
        ;   XREF to: 00551b8e (CONDITIONAL_JUMP)  ; LAB_00551b8e
    CMP dword ptr [ESP + 0x46c],0x0     ; 00551a9d
    JZ 0x00551b15                       ; 00551aa5
        ;   XREF to: 00551b15 (CONDITIONAL_JUMP)  ; LAB_00551b15
    MOV EDI,dword ptr [ESP + 0x470]     ; 00551aa7
        ;   Label: LAB_00551aa7
    TEST EDI,EDI                        ; 00551aae
    JZ 0x00551ae5                       ; 00551ab0
        ;   XREF to: 00551ae5 (CONDITIONAL_JUMP)  ; LAB_00551ae5
    MOV ECX,dword ptr [ESP + 0x474]     ; 00551ab2
    PUSH ECX                            ; 00551ab9
    MOV EAX,0x5d2730                    ; 00551aba | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 00551abf
    MOV [0x01d71de0],EAX                ; 00551ac0 | DAT_01d71de0
    LEA EAX,[ESP + 0x138]               ; 00551ac5
    PUSH EAX                            ; 00551acc
    MOV EDX,0x2fc                       ; 00551acd
    PUSH 0x5d2745                       ; 00551ad2 | = "Minimum distance specified in %s on l..."
    MOV dword ptr [0x01d71de4],EDX      ; 00551ad7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00551add
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 00551ae2
    MOV EAX,dword ptr [ESP + 0x474]     ; 00551ae5
        ;   Label: LAB_00551ae5
    MOV ESI,dword ptr [ESP]             ; 00551aec
    MOV dword ptr [ESP + 0x470],EAX     ; 00551aef
    CMP ESI,0x3a83126f                  ; 00551af6
    JL 0x00551b4d                       ; 00551afc
        ;   XREF to: 00551b4d (CONDITIONAL_JUMP)  ; LAB_00551b4d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00551afe
        ;   Label: LAB_00551afe
    FLD float ptr [EAX + 0x114]         ; 00551b01
    FDIV float ptr [ESP]                ; 00551b07
    FSTP float ptr [EAX + 0x118]        ; 00551b0a
    JMP 0x0055179a                      ; 00551b10
        ;   XREF to: 0055179a (UNCONDITIONAL_JUMP)  ; LAB_0055179a
    MOV ESI,dword ptr [ESP + 0x474]     ; 00551b15
        ;   Label: LAB_00551b15
    PUSH ESI                            ; 00551b1c
    LEA EAX,[ESP + 0x134]               ; 00551b1d
    PUSH EAX                            ; 00551b24
    MOV ECX,0x5d26d0                    ; 00551b25 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x2fb                       ; 00551b2a
    PUSH 0x5d26e5                       ; 00551b2f | = "%s specified maxVol on line %d withou..."
    MOV dword ptr [0x01d71de0],ECX      ; 00551b34 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00551b3a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00551b40
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00551b45
    JMP 0x00551aa7                      ; 00551b48
        ;   XREF to: 00551aa7 (UNCONDITIONAL_JUMP)  ; LAB_00551aa7
    MOV EDX,dword ptr [ESP + 0x474]     ; 00551b4d
        ;   Label: LAB_00551b4d
    MOV EAX,0x2fe                       ; 00551b54
    PUSH EDX                            ; 00551b59
    MOV [0x01d71de4],EAX                ; 00551b5a | DAT_01d71de4
    LEA EAX,[ESP + 0x134]               ; 00551b5f
    PUSH EAX                            ; 00551b66
    FLD float ptr [ESP + 0x8]           ; 00551b67
    SUB ESP,0x8                         ; 00551b6b
    FSTP double ptr [ESP]               ; 00551b6e
    MOV EDI,0x5d2788                    ; 00551b71 | = "..\\sound\\sndmain.cpp"
    PUSH 0x5d279d                       ; 00551b76 | = "maxVol %g is too small in %s line %d!"
    MOV dword ptr [0x01d71de0],EDI      ; 00551b7b | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00551b81
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x14                        ; 00551b86
    JMP 0x00551afe                      ; 00551b89
        ;   XREF to: 00551afe (UNCONDITIONAL_JUMP)  ; LAB_00551afe
    LEA EAX,[ESP + 0x45c]               ; 00551b8e
        ;   Label: LAB_00551b8e
    PUSH EAX                            ; 00551b95
    PUSH 0x5d27c3                       ; 00551b96 | = "length =%d"
    LEA EAX,[ESP + 0xc]                 ; 00551b9b
    PUSH EAX                            ; 00551b9f
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00551ba0
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 00551ba5
    CMP EAX,0x1                         ; 00551ba8
    JNZ 0x00551c4a                      ; 00551bab
        ;   XREF to: 00551c4a (CONDITIONAL_JUMP)  ; LAB_00551c4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00551bb1
    CMP dword ptr [EAX + 0x110],0x0     ; 00551bb4
    JL 0x00551bf4                       ; 00551bbb
        ;   XREF to: 00551bf4 (CONDITIONAL_JUMP)  ; LAB_00551bf4
    MOV EAX,dword ptr [ESP + 0x474]     ; 00551bbd
    PUSH EAX                            ; 00551bc4
    LEA EAX,[ESP + 0x134]               ; 00551bc5
    PUSH EAX                            ; 00551bcc
    MOV EDX,dword ptr [EBP + 0x14]      ; 00551bcd
    PUSH EDX                            ; 00551bd0
    MOV ESI,0x5d27ce                    ; 00551bd1 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x305                       ; 00551bd6
    PUSH 0x5d27e3                       ; 00551bdb | = "Length for %s already known, then spe..."
    MOV dword ptr [0x01d71de0],ESI      ; 00551be0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00551be6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00551bec
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 00551bf1
    MOV ECX,dword ptr [ESP + 0x45c]     ; 00551bf4
        ;   Label: LAB_00551bf4
    TEST ECX,ECX                        ; 00551bfb
    JLE 0x00551c14                      ; 00551bfd
        ;   XREF to: 00551c14 (CONDITIONAL_JUMP)  ; LAB_00551c14
    MOV ECX,dword ptr [EBP + 0x14]      ; 00551bff
        ;   Label: LAB_00551bff
    MOV EAX,dword ptr [ESP + 0x45c]     ; 00551c02
    MOV dword ptr [ECX + 0x110],EAX     ; 00551c09
    JMP 0x0055179a                      ; 00551c0f
        ;   XREF to: 0055179a (UNCONDITIONAL_JUMP)  ; LAB_0055179a
    MOV EDI,dword ptr [ESP + 0x474]     ; 00551c14
        ;   Label: LAB_00551c14
    PUSH EDI                            ; 00551c1b
    LEA EAX,[ESP + 0x134]               ; 00551c1c
    PUSH EAX                            ; 00551c23
    PUSH ECX                            ; 00551c24
    MOV EBX,0x5d2823                    ; 00551c25 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x306                       ; 00551c2a
    PUSH 0x5d2838                       ; 00551c2f | = "Invalid length %d in %s line %d"
    MOV dword ptr [0x01d71de0],EBX      ; 00551c34 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00551c3a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00551c40
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 00551c45
    JMP 0x00551bff                      ; 00551c48
        ;   XREF to: 00551bff (UNCONDITIONAL_JUMP)  ; LAB_00551bff
    PUSH 0x5d2858                       ; 00551c4a | DAT_005d2858
        ;   Label: LAB_00551c4a
    LEA EAX,[ESP + 0x8]                 ; 00551c4f
    PUSH EAX                            ; 00551c53
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00551c54
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00551c59
    TEST EAX,EAX                        ; 00551c5c
    JNZ 0x00551c8b                      ; 00551c5e
        ;   XREF to: 00551c8b (CONDITIONAL_JUMP)  ; LAB_00551c8b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00551c60
    MOV dword ptr [EAX + 0x124],0x1     ; 00551c63
    MOV ECX,dword ptr [EBP + 0x14]      ; 00551c6d
    MOV EAX,dword ptr [EAX + 0x110]     ; 00551c70
    MOV dword ptr [ECX + 0x13c],0x0     ; 00551c76
    MOV dword ptr [ECX + 0x128],EAX     ; 00551c80
    JMP 0x0055179a                      ; 00551c86
        ;   XREF to: 0055179a (UNCONDITIONAL_JUMP)  ; LAB_0055179a
    MOV dword ptr [0x01d71de0],0x5d285d ; 00551c8b | DAT_01d71de0 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00551c8b
    LEA EAX,[ESP + 0x4]                 ; 00551c95
    PUSH EAX                            ; 00551c99
    MOV ECX,dword ptr [ESP + 0x478]     ; 00551c9a
    PUSH ECX                            ; 00551ca1
    LEA EAX,[ESP + 0x138]               ; 00551ca2
    PUSH EAX                            ; 00551ca9
    MOV EDX,0x313                       ; 00551caa
    PUSH 0x5d2872                       ; 00551caf | = "Error parsing %s line %d: %s"
    MOV dword ptr [0x01d71de4],EDX      ; 00551cb4 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00551cba
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 00551cbf
    JMP 0x0055179a                      ; 00551cc2
        ;   XREF to: 0055179a (UNCONDITIONAL_JUMP)  ; LAB_0055179a
    MOV ECX,dword ptr [EBP + 0x14]      ; 00551cc7
        ;   Label: LAB_00551cc7
    MOV ECX,dword ptr [ECX + 0x110]     ; 00551cca
    MOV dword ptr [EAX + 0x128],ECX     ; 00551cd0
    JMP 0x005517d4                      ; 00551cd6
        ;   XREF to: 005517d4 (UNCONDITIONAL_JUMP)  ; LAB_005517d4

