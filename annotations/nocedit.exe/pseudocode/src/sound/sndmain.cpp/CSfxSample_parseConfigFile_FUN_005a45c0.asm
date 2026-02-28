; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x480]:8  local_480
; undefined8       Stack[-0x478]:8  local_478
; undefined8       Stack[-0x470]:8  local_470
; undefined4       Stack[-0x468]:4  local_468
; undefined1       Stack[-0x464]:1  local_464
; undefined1       Stack[-0x463]:1  local_463
; undefined1       Stack[-0x462]:1  local_462
; undefined1       Stack[-0x461]:1  local_461
; undefined1       Stack[-0x338]:1  local_338
; undefined1       Stack[-0x238]:1  local_238
; undefined1       Stack[-0x138]:1  local_138
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 at 005aa53d
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 at 005a5055
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200 at 005a537f
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a9356
;
; Referenced Globals:
;   TerminatedCString s_anon_0064f583
;   TerminatedCString s_klp_0064f586
;   TerminatedCString s_sound_0064f58a
;   TerminatedCString s_sfx_0064f590
;   TerminatedCString s_sound_0064f594
;   TerminatedCString s_rb_0064f59a
;   TerminatedCString s_sound_0064f59d
;   TerminatedCString s_refDist_f_0064f5a3
;   TerminatedCString s_sound_sndmain_cpp_0064f5af
;   TerminatedCString s_Reference_distance_speci_0064f5c4
;   TerminatedCString s_sound_sndmain_cpp_0064f609
;   TerminatedCString s_Reference_volume_distanc_0064f61e
;   TerminatedCString s_minDist_f_0064f657
;   TerminatedCString s_sound_sndmain_cpp_0064f663
;   TerminatedCString s_Minimum_distance_specifi_0064f678
;   ... and 29 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_ftell_FUN_00601560
;   crt_stdio.c_sscanf_FUN_0060013c
;   crt_string.c__stricmp_FUN_005fe7f0
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_string.c_strstr_FUN_005fedd0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a45c0
        ;   Label: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0
    PUSH ESI                            ; 005a45c1
    PUSH EDI                            ; 005a45c2
    PUSH EBP                            ; 005a45c3
    MOV EBP,ESP                         ; 005a45c4
    SUB ESP,0x46c                       ; 005a45c6
    AND ESP,0xfffffff8                  ; 005a45cc
    FLD double ptr [0x00681b38]         ; 005a45cf | g_Cached3DDistanceFactorInverse
    FLD float ptr [0x0066315c]          ; 005a45d5 | g_SoundReferenceDistanceConstant
    FMUL ST1                            ; 005a45db
    FLD float ptr [0x03f5daa0]          ; 005a45dd | g_SoundReferenceVolumeDistance
    FMUL ST2                            ; 005a45e3
    FLD float ptr [0x00663160]          ; 005a45e5 | FLOAT_00663160
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a45eb
    FMULP ST3                           ; 005a45ee
    MOV dword ptr [EAX + 0x124],0x1     ; 005a45f0
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a45fa
    FXCH                                ; 005a45fd
    FSTP float ptr [EAX + 0x114]        ; 005a45ff
    FSTP float ptr [EAX + 0x118]        ; 005a4605
    FSTP float ptr [EAX + 0x11c]        ; 005a460b
    MOV EAX,dword ptr [EAX + 0x110]     ; 005a4611
    PUSH 0x0                            ; 005a4617
    MOV dword ptr [ECX + 0x128],EAX     ; 005a4619
    LEA EAX,[ESP + 0x24c]               ; 005a461f
    PUSH EAX                            ; 005a4626
    PUSH 0x0                            ; 005a4627
    PUSH 0x0                            ; 005a4629
    PUSH ECX                            ; 005a462b
    MOV dword ptr [ECX + 0x13c],0xffffffff ; 005a462c
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 005a4636
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005a463b
    PUSH 0x64f586                       ; 005a463e | = "klp"
    LEA EAX,[ESP + 0x24c]               ; 005a4643
    PUSH EAX                            ; 005a464a
    PUSH 0x0                            ; 005a464b
    PUSH 0x0                            ; 005a464d
    LEA EAX,[ESP + 0x158]               ; 005a464f
    PUSH EAX                            ; 005a4656
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 005a4657
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005a465c
    LEA EAX,[ESP + 0x148]               ; 005a465f
    PUSH EAX                            ; 005a4666
    PUSH 0x64f58a                       ; 005a4667 | = "sound"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005a466c
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005a4671
    TEST EAX,EAX                        ; 005a4674
    JLE 0x005a469e                      ; 005a4676
        ;   XREF to: 005a469e (CONDITIONAL_JUMP)  ; LAB_005a469e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a4678
    MOV dword ptr [EAX + 0x124],0x1     ; 005a467b
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a4685
    MOV EAX,dword ptr [EAX + 0x110]     ; 005a4688
    MOV dword ptr [ECX + 0x13c],0x0     ; 005a468e
    MOV dword ptr [ECX + 0x128],EAX     ; 005a4698
    PUSH 0x64f590                       ; 005a469e | = "sfx"
        ;   Label: LAB_005a469e
    LEA EAX,[ESP + 0x24c]               ; 005a46a3
    PUSH EAX                            ; 005a46aa
    PUSH 0x0                            ; 005a46ab
    PUSH 0x0                            ; 005a46ad
    LEA EAX,[ESP + 0x358]               ; 005a46af
    PUSH EAX                            ; 005a46b6
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 005a46b7
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005a46bc
    LEA EAX,[ESP + 0x348]               ; 005a46bf
    PUSH EAX                            ; 005a46c6
    PUSH 0x64f594                       ; 005a46c7 | = "sound"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005a46cc
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    MOV EBX,EAX                         ; 005a46d1
    ADD ESP,0x8                         ; 005a46d3
    TEST EAX,EAX                        ; 005a46d6
    JG 0x005a46e1                       ; 005a46d8
        ;   XREF to: 005a46e1 (CONDITIONAL_JUMP)  ; LAB_005a46e1
    MOV ESP,EBP                         ; 005a46da
        ;   Label: LAB_005a46da
    POP EBP                             ; 005a46dc
    POP EDI                             ; 005a46dd
    POP ESI                             ; 005a46de
    POP EBX                             ; 005a46df
    RET                                 ; 005a46e0
    PUSH 0x64f59a                       ; 005a46e1 | = "rb"
        ;   Label: LAB_005a46e1
    LEA EAX,[ESP + 0x34c]               ; 005a46e6
    PUSH EAX                            ; 005a46ed
    PUSH 0x64f59d                       ; 005a46ee | = "sound"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005a46f3
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005a46f8
    MOV dword ptr [ESP + 0x45c],EAX     ; 005a46fb
    TEST EAX,EAX                        ; 005a4702
    JZ 0x005a46da                       ; 005a4704
        ;   XREF to: 005a46da (CONDITIONAL_JUMP)  ; LAB_005a46da
    PUSH EAX                            ; 005a4706
    CALL crt_stdio.c_ftell_FUN_00601560 ; 005a4707
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 005a470c
    ADD EBX,EAX                         ; 005a470f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a4711
    ADD EAX,0x11c                       ; 005a4714
    XOR ECX,ECX                         ; 005a4719
    MOV dword ptr [ESP + 0x450],EAX     ; 005a471b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a4722
    MOV dword ptr [ESP + 0x458],EBX     ; 005a4725
    ADD EAX,0x118                       ; 005a472c
    MOV dword ptr [ESP + 0x464],ECX     ; 005a4731
    MOV dword ptr [ESP + 0x454],EAX     ; 005a4738
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a473f
    MOV dword ptr [ESP + 0x460],ECX     ; 005a4742
    ADD EAX,0x114                       ; 005a4749
    MOV dword ptr [ESP + 0x468],ECX     ; 005a474e
    MOV dword ptr [ESP + 0x44c],EAX     ; 005a4755
    MOV EDI,dword ptr [ESP + 0x45c]     ; 005a475c
        ;   Label: LAB_005a475c
    PUSH EDI                            ; 005a4763
    CALL crt_stdio.c_ftell_FUN_00601560 ; 005a4764
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 005a4769
    CMP EAX,dword ptr [ESP + 0x458]     ; 005a476c
    JGE 0x005a4c5c                      ; 005a4773
        ;   XREF to: 005a4c5c (CONDITIONAL_JUMP)  ; LAB_005a4c5c
    PUSH EDI                            ; 005a4779
    MOV EBX,dword ptr [ESP + 0x46c]     ; 005a477a
    PUSH 0x12c                          ; 005a4781
    LEA EAX,[ESP + 0x24]                ; 005a4786
    INC EBX                             ; 005a478a
    PUSH EAX                            ; 005a478b
    MOV dword ptr [ESP + 0x474],EBX     ; 005a478c
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005a4793
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005a4798
    TEST EAX,EAX                        ; 005a479b
    JZ 0x005a4c5c                       ; 005a479d
        ;   XREF to: 005a4c5c (CONDITIONAL_JUMP)  ; LAB_005a4c5c
    PUSH 0x64f583                       ; 005a47a3 | = "//"
    LEA EBX,[ESP + 0x20]                ; 005a47a8
    PUSH EBX                            ; 005a47ac
    CALL crt_string.c_strstr_FUN_005fedd0 ; 005a47ad
        ;   XREF to: 005fedd0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 005a47b2
    TEST EAX,EAX                        ; 005a47b5
    JZ 0x005a47bc                       ; 005a47b7
        ;   XREF to: 005a47bc (CONDITIONAL_JUMP)  ; LAB_005a47bc
    MOV byte ptr [EAX],0x0              ; 005a47b9
    MOV ESI,EBX                         ; 005a47bc
        ;   Label: LAB_005a47bc
    XOR DL,DL                           ; 005a47be
    MOV AL,byte ptr [ESI]               ; 005a47c0
        ;   Label: LAB_005a47c0
    CMP AL,DL                           ; 005a47c2
    JZ 0x005a47d8                       ; 005a47c4
        ;   XREF to: 005a47d8 (CONDITIONAL_JUMP)  ; LAB_005a47d8
    CMP AL,0x0                          ; 005a47c6
    JZ 0x005a47d6                       ; 005a47c8
        ;   XREF to: 005a47d6 (CONDITIONAL_JUMP)  ; LAB_005a47d6
    INC ESI                             ; 005a47ca
    MOV AL,byte ptr [ESI]               ; 005a47cb
    CMP AL,DL                           ; 005a47cd
    JZ 0x005a47d8                       ; 005a47cf
        ;   XREF to: 005a47d8 (CONDITIONAL_JUMP)  ; LAB_005a47d8
    INC ESI                             ; 005a47d1
    CMP AL,0x0                          ; 005a47d2
    JNZ 0x005a47c0                      ; 005a47d4
        ;   XREF to: 005a47c0 (CONDITIONAL_JUMP)  ; LAB_005a47c0
    SUB ESI,ESI                         ; 005a47d6
        ;   Label: LAB_005a47d6
    MOV EAX,ESI                         ; 005a47d8
        ;   Label: LAB_005a47d8
    CMP ESI,EBX                         ; 005a47da
    JBE 0x005a47f2                      ; 005a47dc
        ;   XREF to: 005a47f2 (CONDITIONAL_JUMP)  ; LAB_005a47f2
    MOV CL,byte ptr [EAX + -0x1]        ; 005a47de
        ;   Label: LAB_005a47de
    INC CL                              ; 005a47e1
    AND ECX,0xff                        ; 005a47e3
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 005a47e9 | g_CharacterClassificationTable
    JNZ 0x005a4823                      ; 005a47f0
        ;   XREF to: 005a4823 (CONDITIONAL_JUMP)  ; LAB_005a4823
    LEA ESI,[EBX + 0x1]                 ; 005a47f2
        ;   Label: LAB_005a47f2
    MOV byte ptr [EAX],0x0              ; 005a47f5
    MOV AL,byte ptr [EBX]               ; 005a47f8
        ;   Label: LAB_005a47f8
    INC AL                              ; 005a47fa
    AND EAX,0xff                        ; 005a47fc
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 005a4801 | g_CharacterClassificationTable
    JZ 0x005a482a                       ; 005a4808
        ;   XREF to: 005a482a (CONDITIONAL_JUMP)  ; LAB_005a482a
    MOV EDI,EBX                         ; 005a480a
    SUB ECX,ECX                         ; 005a480c
    DEC ECX                             ; 005a480e
    XOR EAX,EAX                         ; 005a480f
    SCASB.REPNE ES:EDI                  ; 005a4811
    NOT ECX                             ; 005a4813
    DEC ECX                             ; 005a4815
    PUSH ECX                            ; 005a4816
    PUSH ESI                            ; 005a4817
    PUSH EBX                            ; 005a4818
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005a4819
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005a481e
    JMP 0x005a47f8                      ; 005a4821
        ;   XREF to: 005a47f8 (UNCONDITIONAL_JUMP)  ; LAB_005a47f8
    DEC EAX                             ; 005a4823
        ;   Label: LAB_005a4823
    CMP EAX,EBX                         ; 005a4824
    JA 0x005a47de                       ; 005a4826
        ;   XREF to: 005a47de (CONDITIONAL_JUMP)  ; LAB_005a47de
    JMP 0x005a47f2                      ; 005a4828
        ;   XREF to: 005a47f2 (UNCONDITIONAL_JUMP)  ; LAB_005a47f2
    CMP byte ptr [ESP + 0x1c],0x0       ; 005a482a
        ;   Label: LAB_005a482a
    JZ 0x005a475c                       ; 005a482f
        ;   XREF to: 005a475c (CONDITIONAL_JUMP)  ; LAB_005a475c
    MOV EDI,dword ptr [ESP + 0x44c]     ; 005a4835
    PUSH EDI                            ; 005a483c
    PUSH 0x64f5a3                       ; 005a483d | = "refDist =%f"
    LEA EAX,[ESP + 0x24]                ; 005a4842
    PUSH EAX                            ; 005a4846
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005a4847
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 005a484c
    CMP EAX,0x1                         ; 005a484f
    JNZ 0x005a4922                      ; 005a4852
        ;   XREF to: 005a4922 (CONDITIONAL_JUMP)  ; LAB_005a4922
    MOV EBX,dword ptr [ESP + 0x460]     ; 005a4858
    TEST EBX,EBX                        ; 005a485f
    JZ 0x005a4897                       ; 005a4861
        ;   XREF to: 005a4897 (CONDITIONAL_JUMP)  ; LAB_005a4897
    MOV EAX,dword ptr [ESP + 0x468]     ; 005a4863
    PUSH EAX                            ; 005a486a
    PUSH EBX                            ; 005a486b
    LEA EAX,[ESP + 0x350]               ; 005a486c
    PUSH EAX                            ; 005a4873
    MOV ESI,0x64f5af                    ; 005a4874 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x290                       ; 005a4879
    PUSH 0x64f5c4                       ; 005a487e | = "Reference distance specified in %s on..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005a4883 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a4889 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a488f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 005a4894
    MOV EAX,dword ptr [ESP + 0x468]     ; 005a4897
        ;   Label: LAB_005a4897
    MOV dword ptr [ESP + 0x460],EAX     ; 005a489e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a48a5
    FLD float ptr [EAX + 0x114]         ; 005a48a8
    FST double ptr [ESP + 0x8]          ; 005a48ae
    FCOMP double ptr [0x0064f8ff]       ; 005a48b2 | DOUBLE_0064f8ff
    FNSTSW AX                           ; 005a48b8
    SAHF                                ; 005a48ba
    JNC 0x005a48fa                      ; 005a48bb
        ;   XREF to: 005a48fa (CONDITIONAL_JUMP)  ; LAB_005a48fa
    MOV ESI,dword ptr [ESP + 0x468]     ; 005a48bd
    PUSH ESI                            ; 005a48c4
    LEA EAX,[ESP + 0x34c]               ; 005a48c5
    PUSH EAX                            ; 005a48cc
    MOV EDI,dword ptr [ESP + 0x14]      ; 005a48cd
    PUSH EDI                            ; 005a48d1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a48d2
    PUSH EAX                            ; 005a48d6
    MOV ECX,0x64f609                    ; 005a48d7 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x292                       ; 005a48dc
    PUSH 0x64f61e                       ; 005a48e1 | = "Reference volume distance %g is too s..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005a48e6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005a48ec | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a48f2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x14                        ; 005a48f7
    CMP dword ptr [ESP + 0x464],0x0     ; 005a48fa
        ;   Label: LAB_005a48fa
    JNZ 0x005a475c                      ; 005a4902
        ;   XREF to: 005a475c (CONDITIONAL_JUMP)  ; LAB_005a475c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a4908
    FLD float ptr [EAX + 0x114]         ; 005a490b
    FDIV float ptr [0x00663158]         ; 005a4911 | g_SoundDivisorConstant
    FSTP float ptr [EAX + 0x118]        ; 005a4917
    JMP 0x005a475c                      ; 005a491d
        ;   XREF to: 005a475c (UNCONDITIONAL_JUMP)  ; LAB_005a475c
    MOV EAX,dword ptr [ESP + 0x454]     ; 005a4922
        ;   Label: LAB_005a4922
    PUSH EAX                            ; 005a4929
    PUSH 0x64f657                       ; 005a492a | = "minDist =%f"
    LEA EAX,[ESP + 0x24]                ; 005a492f
    PUSH EAX                            ; 005a4933
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005a4934
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 005a4939
    CMP EAX,0x1                         ; 005a493c
    JNZ 0x005a49ef                      ; 005a493f
        ;   XREF to: 005a49ef (CONDITIONAL_JUMP)  ; LAB_005a49ef
    MOV EDI,dword ptr [ESP + 0x464]     ; 005a4945
    TEST EDI,EDI                        ; 005a494c
    JZ 0x005a4983                       ; 005a494e
        ;   XREF to: 005a4983 (CONDITIONAL_JUMP)  ; LAB_005a4983
    MOV ECX,dword ptr [ESP + 0x468]     ; 005a4950
    PUSH ECX                            ; 005a4957
    MOV EAX,0x64f663                    ; 005a4958 | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 005a495d
    MOV [0x02f0ca48],EAX                ; 005a495e | g_CurrentFilename
    LEA EAX,[ESP + 0x350]               ; 005a4963
    PUSH EAX                            ; 005a496a
    MOV EDX,0x298                       ; 005a496b
    PUSH 0x64f678                       ; 005a4970 | = "Minimum distance specified in %s on l..."
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a4975 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a497b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 005a4980
    MOV EAX,dword ptr [ESP + 0x468]     ; 005a4983
        ;   Label: LAB_005a4983
    MOV dword ptr [ESP + 0x464],EAX     ; 005a498a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a4991
    FLD float ptr [EAX + 0x118]         ; 005a4994
    FST double ptr [ESP + 0x10]         ; 005a499a
    FCOMP double ptr [0x0064f8ff]       ; 005a499e | DOUBLE_0064f8ff
    FNSTSW AX                           ; 005a49a4
    SAHF                                ; 005a49a6
    JNC 0x005a475c                      ; 005a49a7
        ;   XREF to: 005a475c (CONDITIONAL_JUMP)  ; LAB_005a475c
    MOV EAX,dword ptr [ESP + 0x468]     ; 005a49ad
    PUSH EAX                            ; 005a49b4
    LEA EAX,[ESP + 0x34c]               ; 005a49b5
    PUSH EAX                            ; 005a49bc
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005a49bd
    PUSH EDX                            ; 005a49c1
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005a49c2
    PUSH ECX                            ; 005a49c6
    MOV ESI,0x64f6bb                    ; 005a49c7 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x29a                       ; 005a49cc
    PUSH 0x64f6d0                       ; 005a49d1 | = "Reference volume distance %g is too s..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005a49d6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a49dc | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a49e2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x14                        ; 005a49e7
    JMP 0x005a475c                      ; 005a49ea
        ;   XREF to: 005a475c (UNCONDITIONAL_JUMP)  ; LAB_005a475c
    MOV EDX,dword ptr [ESP + 0x450]     ; 005a49ef
        ;   Label: LAB_005a49ef
    PUSH EDX                            ; 005a49f6
    PUSH 0x64f709                       ; 005a49f7 | = "maxDist =%f"
    LEA EAX,[ESP + 0x24]                ; 005a49fc
    PUSH EAX                            ; 005a4a00
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005a4a01
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 005a4a06
    CMP EAX,0x1                         ; 005a4a09
    JZ 0x005a475c                       ; 005a4a0c
        ;   XREF to: 005a475c (CONDITIONAL_JUMP)  ; LAB_005a475c
    LEA EAX,[ESP + 0x18]                ; 005a4a12
    PUSH EAX                            ; 005a4a16
    PUSH 0x64f715                       ; 005a4a17 | = "maxVol =%f"
    LEA EAX,[ESP + 0x24]                ; 005a4a1c
    PUSH EAX                            ; 005a4a20
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005a4a21
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 005a4a26
    CMP EAX,0x1                         ; 005a4a29
    JNZ 0x005a4b24                      ; 005a4a2c
        ;   XREF to: 005a4b24 (CONDITIONAL_JUMP)  ; LAB_005a4b24
    CMP dword ptr [ESP + 0x460],0x0     ; 005a4a32
    JNZ 0x005a4a6f                      ; 005a4a3a
        ;   XREF to: 005a4a6f (CONDITIONAL_JUMP)  ; LAB_005a4a6f
    MOV EAX,dword ptr [ESP + 0x468]     ; 005a4a3c
    PUSH EAX                            ; 005a4a43
    LEA EAX,[ESP + 0x34c]               ; 005a4a44
    PUSH EAX                            ; 005a4a4b
    MOV ESI,0x64f720                    ; 005a4a4c | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x2a4                       ; 005a4a51
    PUSH 0x64f735                       ; 005a4a56 | = "%s specified maxVol on line %d withou..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005a4a5b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a4a61 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a4a67
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 005a4a6c
    MOV EDX,dword ptr [ESP + 0x464]     ; 005a4a6f
        ;   Label: LAB_005a4a6f
    TEST EDX,EDX                        ; 005a4a76
    JZ 0x005a4aae                       ; 005a4a78
        ;   XREF to: 005a4aae (CONDITIONAL_JUMP)  ; LAB_005a4aae
    MOV ESI,dword ptr [ESP + 0x468]     ; 005a4a7a
    PUSH ESI                            ; 005a4a81
    PUSH EDX                            ; 005a4a82
    LEA EAX,[ESP + 0x350]               ; 005a4a83
    PUSH EAX                            ; 005a4a8a
    MOV ECX,0x64f780                    ; 005a4a8b | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x2a5                       ; 005a4a90
    PUSH 0x64f795                       ; 005a4a95 | = "Minimum distance specified in %s on l..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005a4a9a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005a4aa0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a4aa6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 005a4aab
    FLD float ptr [ESP + 0x18]          ; 005a4aae
        ;   Label: LAB_005a4aae
    MOV EAX,dword ptr [ESP + 0x468]     ; 005a4ab2
    FST double ptr [ESP]                ; 005a4ab9
    MOV dword ptr [ESP + 0x464],EAX     ; 005a4abc
    FCOMP double ptr [0x0064f8f7]       ; 005a4ac3 | DOUBLE_0064f8f7
    FNSTSW AX                           ; 005a4ac9
    SAHF                                ; 005a4acb
    JC 0x005a4ae6                       ; 005a4acc
        ;   XREF to: 005a4ae6 (CONDITIONAL_JUMP)  ; LAB_005a4ae6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a4ace
        ;   Label: LAB_005a4ace
    FLD float ptr [EAX + 0x114]         ; 005a4ad1
    FDIV float ptr [ESP + 0x18]         ; 005a4ad7
    FSTP float ptr [EAX + 0x118]        ; 005a4adb
    JMP 0x005a475c                      ; 005a4ae1
        ;   XREF to: 005a475c (UNCONDITIONAL_JUMP)  ; LAB_005a475c
    MOV ECX,dword ptr [ESP + 0x468]     ; 005a4ae6
        ;   Label: LAB_005a4ae6
    MOV EAX,0x64f7d8                    ; 005a4aed | = "..\\sound\\sndmain.cpp"
    PUSH ECX                            ; 005a4af2
    MOV [0x02f0ca48],EAX                ; 005a4af3 | g_CurrentFilename
    LEA EAX,[ESP + 0x34c]               ; 005a4af8
    PUSH EAX                            ; 005a4aff
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a4b00
    PUSH EBX                            ; 005a4b04
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a4b05
    PUSH ESI                            ; 005a4b09
    MOV EDX,0x2a7                       ; 005a4b0a
    PUSH 0x64f7ed                       ; 005a4b0f | = "maxVol %g is too small in %s line %d!"
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a4b14 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a4b1a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x14                        ; 005a4b1f
    JMP 0x005a4ace                      ; 005a4b22
        ;   XREF to: 005a4ace (UNCONDITIONAL_JUMP)  ; LAB_005a4ace
    LEA EAX,[ESP + 0x448]               ; 005a4b24
        ;   Label: LAB_005a4b24
    PUSH EAX                            ; 005a4b2b
    PUSH 0x64f813                       ; 005a4b2c | = "length =%d"
    LEA EAX,[ESP + 0x24]                ; 005a4b31
    PUSH EAX                            ; 005a4b35
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005a4b36
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 005a4b3b
    CMP EAX,0x1                         ; 005a4b3e
    JNZ 0x005a4bde                      ; 005a4b41
        ;   XREF to: 005a4bde (CONDITIONAL_JUMP)  ; LAB_005a4bde
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a4b47
    CMP dword ptr [EAX + 0x110],0x0     ; 005a4b4a
    JL 0x005a4b89                       ; 005a4b51
        ;   XREF to: 005a4b89 (CONDITIONAL_JUMP)  ; LAB_005a4b89
    MOV ECX,dword ptr [ESP + 0x468]     ; 005a4b53
    MOV EAX,0x64f81e                    ; 005a4b5a | = "..\\sound\\sndmain.cpp"
    PUSH ECX                            ; 005a4b5f
    MOV [0x02f0ca48],EAX                ; 005a4b60 | g_CurrentFilename
    LEA EAX,[ESP + 0x34c]               ; 005a4b65
    PUSH EAX                            ; 005a4b6c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a4b6d
    PUSH EBX                            ; 005a4b70
    MOV EDX,0x2ae                       ; 005a4b71
    PUSH 0x64f833                       ; 005a4b76 | = "Length for %s already known, then spe..."
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a4b7b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a4b81
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 005a4b86
    MOV ESI,dword ptr [ESP + 0x448]     ; 005a4b89
        ;   Label: LAB_005a4b89
    TEST ESI,ESI                        ; 005a4b90
    JLE 0x005a4ba9                      ; 005a4b92
        ;   XREF to: 005a4ba9 (CONDITIONAL_JUMP)  ; LAB_005a4ba9
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a4b94
        ;   Label: LAB_005a4b94
    MOV EAX,dword ptr [ESP + 0x448]     ; 005a4b97
    MOV dword ptr [ECX + 0x110],EAX     ; 005a4b9e
    JMP 0x005a475c                      ; 005a4ba4
        ;   XREF to: 005a475c (UNCONDITIONAL_JUMP)  ; LAB_005a475c
    MOV EDX,dword ptr [ESP + 0x468]     ; 005a4ba9
        ;   Label: LAB_005a4ba9
    MOV EAX,0x2af                       ; 005a4bb0
    PUSH EDX                            ; 005a4bb5
    MOV [0x02f0ca4c],EAX                ; 005a4bb6 | g_CurrentLineNumber
    LEA EAX,[ESP + 0x34c]               ; 005a4bbb
    PUSH EAX                            ; 005a4bc2
    PUSH ESI                            ; 005a4bc3
    MOV EDI,0x64f873                    ; 005a4bc4 | = "..\\sound\\sndmain.cpp"
    PUSH 0x64f888                       ; 005a4bc9 | = "Invalid length %d in %s line %d"
    MOV dword ptr [0x02f0ca48],EDI      ; 005a4bce | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a4bd4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 005a4bd9
    JMP 0x005a4b94                      ; 005a4bdc
        ;   XREF to: 005a4b94 (UNCONDITIONAL_JUMP)  ; LAB_005a4b94
    PUSH 0x64f8a8                       ; 005a4bde | = "loop"
        ;   Label: LAB_005a4bde
    LEA EAX,[ESP + 0x20]                ; 005a4be3
    PUSH EAX                            ; 005a4be7
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005a4be8
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a4bed
    TEST EAX,EAX                        ; 005a4bf0
    JNZ 0x005a4c1f                      ; 005a4bf2
        ;   XREF to: 005a4c1f (CONDITIONAL_JUMP)  ; LAB_005a4c1f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a4bf4
    MOV dword ptr [EAX + 0x124],0x1     ; 005a4bf7
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a4c01
    MOV EAX,dword ptr [EAX + 0x110]     ; 005a4c04
    MOV dword ptr [ECX + 0x13c],0x0     ; 005a4c0a
    MOV dword ptr [ECX + 0x128],EAX     ; 005a4c14
    JMP 0x005a475c                      ; 005a4c1a
        ;   XREF to: 005a475c (UNCONDITIONAL_JUMP)  ; LAB_005a475c
    LEA EAX,[ESP + 0x1c]                ; 005a4c1f
        ;   Label: LAB_005a4c1f
    PUSH EAX                            ; 005a4c23
    MOV ESI,dword ptr [ESP + 0x46c]     ; 005a4c24
    PUSH ESI                            ; 005a4c2b
    LEA EAX,[ESP + 0x350]               ; 005a4c2c
    PUSH EAX                            ; 005a4c33
    MOV ECX,0x64f8ad                    ; 005a4c34 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x2bc                       ; 005a4c39
    PUSH 0x64f8c2                       ; 005a4c3e | = "Error parsing %s line %d: %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a4c43 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005a4c49 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a4c4f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 005a4c54
    JMP 0x005a475c                      ; 005a4c57
        ;   XREF to: 005a475c (UNCONDITIONAL_JUMP)  ; LAB_005a475c
    PUSH 0x2bf                          ; 005a4c5c
        ;   Label: LAB_005a4c5c
    PUSH 0x64f8df                       ; 005a4c61 | = "..\\sound\\sndmain.cpp"
    MOV ESI,dword ptr [ESP + 0x464]     ; 005a4c66
    PUSH ESI                            ; 005a4c6d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005a4c6e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005a4c73
    MOV ESP,EBP                         ; 005a4c76
    POP EBP                             ; 005a4c78
    POP EDI                             ; 005a4c79
    POP ESI                             ; 005a4c7a
    POP EBX                             ; 005a4c7b
    RET                                 ; 005a4c7c

