; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_FUN_004c85f0(int argc,char **argv)
;
; Parameters:
; int              Stack[0x4]:4   argc
; char * *         Stack[0x8]:4   argv
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_00559260 at 005594de
;
; Referenced Globals:
;   TerminatedCString s_PROCESSOR_LEVEL_00587b55
;   TerminatedCString s_rb_00587b65
;   TerminatedCString s_stderr_txt_00587b68
;   TerminatedCString s_stderr_txt_00587b73
;   TerminatedCString s_core_main_c_00587b7e
;   TerminatedCString s_Please_copy_Nocturne_to_00587b8d
;   TerminatedCString s_wt_00587bb5
;   TerminatedCString s_stderr_txt_00587bb8
;   TerminatedCString s_msglist_txt_00587bc3
;   TerminatedCString s_core_main_c_00587bcf
;   TerminatedCString s_This_CPU_does_not_have_a_00587bde
;   TerminatedCString s_core_main_c_00587c02
;   TerminatedCString s_Unable_to_set_640x480x32_00587c11
;   TerminatedCString s_Windows_is_reporting_00587ca2
;   TerminatedCString s_s_1f_00587cb8
;   ... and 73 more
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_init_FUN_0044c190
;   core_dfont.cpp_FUN_0044c560
;   core_inivar.cpp_FUN_004bdb80
;   core_main.c_FUN_004c8440
;   core_menu.cpp_showCalibrationTest_FUN_004cffa0
;   core_mission.cpp_FUN_004d7e00
;   core_mmx.c_detectCPUFeatures_FUN_004d9e70
;   core_netgame.cpp_CNetGame_init_FUN_004e9910
;   core_sound.cpp_CSound_findAllSoundFiles_FUN_0052dd20
;   crt_env.c_getenv_FUN_00566e10
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_freopen_FUN_00565724
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_FUN_00401010
;   ... and 24 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c85f0
        ;   Label: core_main.c_FUN_004c85f0
    PUSH ESI                            ; 004c85f1
    PUSH EDI                            ; 004c85f2
    PUSH EBP                            ; 004c85f3
    MOV EBP,ESP                         ; 004c85f4
    SUB ESP,0x718                       ; 004c85f6
    AND ESP,0xfffffff8                  ; 004c85fc
    MOV ECX,0x10000                     ; 004c85ff
    MOV EBX,0x1                         ; 004c8604
    XOR EDX,EDX                         ; 004c8609
    PUSH 0x587b55                       ; 004c860b | = "PROCESSOR_LEVEL"
    MOV dword ptr [0x01c0399c],EDX      ; 004c8610 | DAT_01c0399c
    MOV dword ptr [0x005c0f8c],ECX      ; 004c8616 | DAT_005c0f8c
    MOV dword ptr [0x005c0f80],EBX      ; 004c861c | DAT_005c0f80
    CALL crt_env.c_getenv_FUN_00566e10  ; 004c8622
        ;   XREF to: 00566e10 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_00566e10(char * name)
    ADD ESP,0x4                         ; 004c8627
    TEST EAX,EAX                        ; 004c862a
    JNZ 0x004c8d70                      ; 004c862c
        ;   XREF to: 004c8d70 (CONDITIONAL_JUMP)  ; LAB_004c8d70
    MOV dword ptr [0x006af628],0x3      ; 004c8632 | DAT_006af628
    PUSH 0x587b65                       ; 004c863c | = "rb"
        ;   Label: LAB_004c863c
    PUSH 0x587b68                       ; 004c8641 | = "stderr.txt"
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004c8646
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004c864b
    TEST EAX,EAX                        ; 004c864e
    JZ 0x004c8694                       ; 004c8650
        ;   XREF to: 004c8694 (CONDITIONAL_JUMP)  ; LAB_004c8694
    PUSH EAX                            ; 004c8652
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004c8653
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004c8658
    PUSH 0x1c0                          ; 004c865b
    PUSH 0x587b73                       ; 004c8660 | = "stderr.txt"
    CALL engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0 ; 004c8665
        ;   XREF to: 00565dd0 (UNCONDITIONAL_CALL)  ; DWORD engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0(char * filename, DWORD file_attributes)
    ADD ESP,0x8                         ; 004c866a
    TEST EAX,EAX                        ; 004c866d
    JZ 0x004c8694                       ; 004c866f
        ;   XREF to: 004c8694 (CONDITIONAL_JUMP)  ; LAB_004c8694
    MOV EDX,0x587b7e                    ; 004c8671 | = "..\\core\\main.c"
    MOV ECX,0x28c                       ; 004c8676
    PUSH 0x587b8d                       ; 004c867b | = "Please copy Nocturne to your hard drive"
    MOV dword ptr [0x01cc4800],EDX      ; 004c8680 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004c8686 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004c868c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004c8691
    PUSH 0x5c18c8                       ; 004c8694 | DAT_005c18c8
        ;   Label: LAB_004c8694
    PUSH 0x587bb5                       ; 004c8699 | = "wt"
    PUSH 0x587bb8                       ; 004c869e | = "stderr.txt"
    MOV EBX,0x3                         ; 004c86a3
    CALL crt_stdio.c_freopen_FUN_00565724 ; 004c86a8
        ;   XREF to: 00565724 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_freopen_FUN_00565724(char * filename, char * mode, _FILE * stream)
    ADD ESP,0xc                         ; 004c86ad
    MOV dword ptr [0x006af628],EBX      ; 004c86b0 | DAT_006af628
    CALL xxx_unk.c_FUN_0048ee80         ; 004c86b6
        ;   XREF to: 0048ee80 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_0048ee80()
    CALL core_inivar.cpp_FUN_004bdb80   ; 004c86bb
        ;   XREF to: 004bdb80 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_FUN_004bdb80()
    MOV EDI,dword ptr [0x005be1cc]      ; 004c86c0 | DAT_005be1cc
    MOV ESI,0x2                         ; 004c86c6
    PUSH EDI                            ; 004c86cb
    MOV dword ptr [0x02dc9d6c],ESI      ; 004c86cc | DAT_02dc9d6c
    CALL engine_pod.cpp_CPod_init_FUN_004f8af0 ; 004c86d2
        ;   XREF to: 004f8af0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_init_FUN_004f8af0(CPod * this_ptr)
    ADD ESP,0x4                         ; 004c86d7
    PUSH 0x4f9250                       ; 004c86da | LAB_004f9250
    CALL engine_dosio.c_FUN_00456750    ; 004c86df
        ;   XREF to: 00456750 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.c_FUN_00456750()
    ADD ESP,0x4                         ; 004c86e4
    PUSH 0x456800                       ; 004c86e7
    CALL engine_dosio.c_FUN_00456750    ; 004c86ec
        ;   XREF to: 00456750 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.c_FUN_00456750()
    ADD ESP,0x4                         ; 004c86f1
    PUSH 0x587bc3                       ; 004c86f4 | = "msglist.txt"
    CALL support_newmsg.cpp_FUN_004edfc0 ; 004c86f9
        ;   XREF to: 004edfc0 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_FUN_004edfc0()
    ADD ESP,0x4                         ; 004c86fe
    CALL core_mmx.c_detectCPUFeatures_FUN_004d9e70 ; 004c8701
        ;   XREF to: 004d9e70 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectCPUFeatures_FUN_004d9e70()
    CMP dword ptr [0x01c03948],0x0      ; 004c8706 | DAT_01c03948
    JNZ 0x004c873b                      ; 004c870d
        ;   XREF to: 004c873b (CONDITIONAL_JUMP)  ; LAB_004c873b
    MOV EDX,0x587bcf                    ; 004c870f | = "..\\core\\main.c"
    MOV ECX,0x2b7                       ; 004c8714
    PUSH 0x587bde                       ; 004c8719 | = "This CPU does not have an MMX unit."
    MOV dword ptr [0x01cc4800],EDX      ; 004c871e | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004c8724 | INT_01cc4804
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c872a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c872f
    PUSH EAX                            ; 004c8732
    CALL core_main.c_FUN_004c8440       ; 004c8733
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004c8738
    CALL engine_matrix.c_initializeTrigTables_FUN_004cc9d0 ; 004c873b
        ;   XREF to: 004cc9d0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_initializeTrigTables_FUN_004cc9d0()
        ;   Label: LAB_004c873b
    CALL engine_3d.c_FUN_005458a0       ; 004c8740
        ;   XREF to: 00404480 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_005458a0()
    CALL engine_2d.c_FUN_00401010       ; 004c8745
        ;   XREF to: 00401010 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00401010()
    CALL wincore_winrun.cpp_calibrateCPUSpeed_FUN_005587f0 ; 004c874a
        ;   XREF to: 005587f0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_calibrateCPUSpeed_FUN_005587f0()
    CALL wincore_winrun.cpp_initJoystick_FUN_00559e20 ; 004c874f
        ;   XREF to: 00559e20 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_initJoystick_FUN_00559e20()
    PUSH 0x20                           ; 004c8754
    PUSH 0x1e0                          ; 004c8756
    PUSH 0x280                          ; 004c875b
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00 ; 004c8760
        ;   XREF to: 00552e00 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 004c8765
    TEST EAX,EAX                        ; 004c8768
    JNZ 0x004c878f                      ; 004c876a
        ;   XREF to: 004c878f (CONDITIONAL_JUMP)  ; LAB_004c878f
    MOV EBX,0x587c02                    ; 004c876c | = "..\\core\\main.c"
    MOV ESI,0x2c8                       ; 004c8771
    PUSH 0x587c11                       ; 004c8776 | = "Unable to set 640x480x32bpp.  Please ..."
    MOV dword ptr [0x01cc4800],EBX      ; 004c877b | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004c8781 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004c8787
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004c878c
    CALL core_dfont.cpp_FUN_0044c560    ; 004c878f
        ;   XREF to: 0044c560 (UNCONDITIONAL_CALL)  ; void core_dfont.cpp_FUN_0044c560()
        ;   Label: LAB_004c878f
    CMP dword ptr [0x02de20a8],0x3c00000 ; 004c8794 | DAT_02de20a8
    JGE 0x004c8a11                      ; 004c879e
        ;   XREF to: 004c8a11 (CONDITIONAL_JUMP)  ; LAB_004c8a11
    PUSH 0x587ca2                       ; 004c87a4 | = "Windows is reporting "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c87a9
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c87ae
    LEA EDI,[ESP + 0x200]               ; 004c87b1
    MOV ESI,EAX                         ; 004c87b8
    PUSH EDI                            ; 004c87ba
    MOV AL,byte ptr [ESI]               ; 004c87bb
        ;   Label: LAB_004c87bb
    MOV byte ptr [EDI],AL               ; 004c87bd
    CMP AL,0x0                          ; 004c87bf
    JZ 0x004c87d3                       ; 004c87c1
        ;   XREF to: 004c87d3 (CONDITIONAL_JUMP)  ; LAB_004c87d3
    MOV AL,byte ptr [ESI + 0x1]         ; 004c87c3
    ADD ESI,0x2                         ; 004c87c6
    MOV byte ptr [EDI + 0x1],AL         ; 004c87c9
    ADD EDI,0x2                         ; 004c87cc
    CMP AL,0x0                          ; 004c87cf
    JNZ 0x004c87bb                      ; 004c87d1
        ;   XREF to: 004c87bb (CONDITIONAL_JUMP)  ; LAB_004c87bb
    POP EDI                             ; 004c87d3
        ;   Label: LAB_004c87d3
    FILD dword ptr [0x02de20a8]         ; 004c87d4 | DAT_02de20a8
    FMUL float ptr [0x00587e64]         ; 004c87da | FLOAT_00587e64
    SUB ESP,0x8                         ; 004c87e0
    FSTP double ptr [ESP]               ; 004c87e3
    PUSH 0x587cb8                       ; 004c87e6 | = "%.1f"
    LEA EAX,[ESP + 0x50c]               ; 004c87eb
    PUSH EAX                            ; 004c87f2
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c87f3
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004c87f8
    LEA ESI,[ESP + 0x500]               ; 004c87fb
    LEA EDI,[ESP + 0x200]               ; 004c8802
    PUSH EDI                            ; 004c8809
    SUB ECX,ECX                         ; 004c880a
    DEC ECX                             ; 004c880c
    MOV AL,0x0                          ; 004c880d
    SCASB.REPNE ES:EDI                  ; 004c880f
    DEC EDI                             ; 004c8811
    MOV AL,byte ptr [ESI]               ; 004c8812
        ;   Label: LAB_004c8812
    MOV byte ptr [EDI],AL               ; 004c8814
    CMP AL,0x0                          ; 004c8816
    JZ 0x004c882a                       ; 004c8818
        ;   XREF to: 004c882a (CONDITIONAL_JUMP)  ; LAB_004c882a
    MOV AL,byte ptr [ESI + 0x1]         ; 004c881a
    ADD ESI,0x2                         ; 004c881d
    MOV byte ptr [EDI + 0x1],AL         ; 004c8820
    ADD EDI,0x2                         ; 004c8823
    CMP AL,0x0                          ; 004c8826
    JNZ 0x004c8812                      ; 004c8828
        ;   XREF to: 004c8812 (CONDITIONAL_JUMP)  ; LAB_004c8812
    POP EDI                             ; 004c882a
        ;   Label: LAB_004c882a
    PUSH 0x587cbd                       ; 004c882b | = "MB of system RAM."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c8830
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c8835
    LEA EDI,[ESP + 0x200]               ; 004c8838
    MOV ESI,EAX                         ; 004c883f
    PUSH EDI                            ; 004c8841
    SUB ECX,ECX                         ; 004c8842
    DEC ECX                             ; 004c8844
    MOV AL,0x0                          ; 004c8845
    SCASB.REPNE ES:EDI                  ; 004c8847
    DEC EDI                             ; 004c8849
    MOV AL,byte ptr [ESI]               ; 004c884a
        ;   Label: LAB_004c884a
    MOV byte ptr [EDI],AL               ; 004c884c
    CMP AL,0x0                          ; 004c884e
    JZ 0x004c8862                       ; 004c8850
        ;   XREF to: 004c8862 (CONDITIONAL_JUMP)  ; LAB_004c8862
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8852
    ADD ESI,0x2                         ; 004c8855
    MOV byte ptr [EDI + 0x1],AL         ; 004c8858
    ADD EDI,0x2                         ; 004c885b
    CMP AL,0x0                          ; 004c885e
    JNZ 0x004c884a                      ; 004c8860
        ;   XREF to: 004c884a (CONDITIONAL_JUMP)  ; LAB_004c884a
    POP EDI                             ; 004c8862
        ;   Label: LAB_004c8862
    MOV ESI,0x587ccf                    ; 004c8863 | = "\n"
    LEA EDI,[ESP + 0x200]               ; 004c8868
    PUSH EDI                            ; 004c886f
    SUB ECX,ECX                         ; 004c8870
    DEC ECX                             ; 004c8872
    MOV AL,0x0                          ; 004c8873
    SCASB.REPNE ES:EDI                  ; 004c8875
    DEC EDI                             ; 004c8877
    MOV AL,byte ptr [ESI]               ; 004c8878 | = "\n" | s_Nocturne_requires_at_lea_00587cd1
        ;   Label: LAB_004c8878
    MOV byte ptr [EDI],AL               ; 004c887a
    CMP AL,0x0                          ; 004c887c
    JZ 0x004c8890                       ; 004c887e
        ;   XREF to: 004c8890 (CONDITIONAL_JUMP)  ; LAB_004c8890
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8880 | s_anon_00587ccf+1 | s_Nocturne_requires_at_lea_00587cd1+1
    ADD ESI,0x2                         ; 004c8883
    MOV byte ptr [EDI + 0x1],AL         ; 004c8886
    ADD EDI,0x2                         ; 004c8889
    CMP AL,0x0                          ; 004c888c
    JNZ 0x004c8878                      ; 004c888e
        ;   XREF to: 004c8878 (CONDITIONAL_JUMP)  ; LAB_004c8878
    POP EDI                             ; 004c8890
        ;   Label: LAB_004c8890
    PUSH 0x587cd1                       ; 004c8891 | = "Nocturne requires at least 64MB of sy..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c8896
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c889b
    LEA EDI,[ESP + 0x200]               ; 004c889e
    MOV ESI,EAX                         ; 004c88a5
    PUSH EDI                            ; 004c88a7
    SUB ECX,ECX                         ; 004c88a8
    DEC ECX                             ; 004c88aa
    MOV AL,0x0                          ; 004c88ab
    SCASB.REPNE ES:EDI                  ; 004c88ad
    DEC EDI                             ; 004c88af
    MOV AL,byte ptr [ESI]               ; 004c88b0
        ;   Label: LAB_004c88b0
    MOV byte ptr [EDI],AL               ; 004c88b2
    CMP AL,0x0                          ; 004c88b4
    JZ 0x004c88c8                       ; 004c88b6
        ;   XREF to: 004c88c8 (CONDITIONAL_JUMP)  ; LAB_004c88c8
    MOV AL,byte ptr [ESI + 0x1]         ; 004c88b8
    ADD ESI,0x2                         ; 004c88bb
    MOV byte ptr [EDI + 0x1],AL         ; 004c88be
    ADD EDI,0x2                         ; 004c88c1
    CMP AL,0x0                          ; 004c88c4
    JNZ 0x004c88b0                      ; 004c88c6
        ;   XREF to: 004c88b0 (CONDITIONAL_JUMP)  ; LAB_004c88b0
    POP EDI                             ; 004c88c8
        ;   Label: LAB_004c88c8
    MOV ESI,0x587d00                    ; 004c88c9 | = "\n"
    LEA EDI,[ESP + 0x200]               ; 004c88ce
    PUSH EDI                            ; 004c88d5
    SUB ECX,ECX                         ; 004c88d6
    DEC ECX                             ; 004c88d8
    MOV AL,0x0                          ; 004c88d9
    SCASB.REPNE ES:EDI                  ; 004c88db
    DEC EDI                             ; 004c88dd
    MOV AL,byte ptr [ESI]               ; 004c88de | = "\n" | s_If_you_think_you_have_at_00587d02
        ;   Label: LAB_004c88de
    MOV byte ptr [EDI],AL               ; 004c88e0
    CMP AL,0x0                          ; 004c88e2
    JZ 0x004c88f6                       ; 004c88e4
        ;   XREF to: 004c88f6 (CONDITIONAL_JUMP)  ; LAB_004c88f6
    MOV AL,byte ptr [ESI + 0x1]         ; 004c88e6 | s_anon_00587d00+1 | s_If_you_think_you_have_at_00587d02+1
    ADD ESI,0x2                         ; 004c88e9
    MOV byte ptr [EDI + 0x1],AL         ; 004c88ec
    ADD EDI,0x2                         ; 004c88ef
    CMP AL,0x0                          ; 004c88f2
    JNZ 0x004c88de                      ; 004c88f4
        ;   XREF to: 004c88de (CONDITIONAL_JUMP)  ; LAB_004c88de
    POP EDI                             ; 004c88f6
        ;   Label: LAB_004c88f6
    PUSH 0x587d02                       ; 004c88f7 | = "If you think you have at least 64MB o..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c88fc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c8901
    LEA EDI,[ESP + 0x200]               ; 004c8904
    MOV ESI,EAX                         ; 004c890b
    PUSH EDI                            ; 004c890d
    SUB ECX,ECX                         ; 004c890e
    DEC ECX                             ; 004c8910
    MOV AL,0x0                          ; 004c8911
    SCASB.REPNE ES:EDI                  ; 004c8913
    DEC EDI                             ; 004c8915
    MOV AL,byte ptr [ESI]               ; 004c8916
        ;   Label: LAB_004c8916
    MOV byte ptr [EDI],AL               ; 004c8918
    CMP AL,0x0                          ; 004c891a
    JZ 0x004c892e                       ; 004c891c
        ;   XREF to: 004c892e (CONDITIONAL_JUMP)  ; LAB_004c892e
    MOV AL,byte ptr [ESI + 0x1]         ; 004c891e
    ADD ESI,0x2                         ; 004c8921
    MOV byte ptr [EDI + 0x1],AL         ; 004c8924
    ADD EDI,0x2                         ; 004c8927
    CMP AL,0x0                          ; 004c892a
    JNZ 0x004c8916                      ; 004c892c
        ;   XREF to: 004c8916 (CONDITIONAL_JUMP)  ; LAB_004c8916
    POP EDI                             ; 004c892e
        ;   Label: LAB_004c892e
    MOV ESI,0x587d34                    ; 004c892f | = "\n"
    LEA EDI,[ESP + 0x200]               ; 004c8934
    PUSH EDI                            ; 004c893b
    SUB ECX,ECX                         ; 004c893c
    DEC ECX                             ; 004c893e
    MOV AL,0x0                          ; 004c893f
    SCASB.REPNE ES:EDI                  ; 004c8941
    DEC EDI                             ; 004c8943
    MOV AL,byte ptr [ESI]               ; 004c8944 | = "\n" | s_then_ignore_this_message_00587d36
        ;   Label: LAB_004c8944
    MOV byte ptr [EDI],AL               ; 004c8946
    CMP AL,0x0                          ; 004c8948
    JZ 0x004c895c                       ; 004c894a
        ;   XREF to: 004c895c (CONDITIONAL_JUMP)  ; LAB_004c895c
    MOV AL,byte ptr [ESI + 0x1]         ; 004c894c | s_anon_00587d34+1 | s_then_ignore_this_message_00587d36+1
    ADD ESI,0x2                         ; 004c894f
    MOV byte ptr [EDI + 0x1],AL         ; 004c8952
    ADD EDI,0x2                         ; 004c8955
    CMP AL,0x0                          ; 004c8958
    JNZ 0x004c8944                      ; 004c895a
        ;   XREF to: 004c8944 (CONDITIONAL_JUMP)  ; LAB_004c8944
    POP EDI                             ; 004c895c
        ;   Label: LAB_004c895c
    PUSH 0x587d36                       ; 004c895d | = "then ignore this message."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c8962
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c8967
    LEA EDI,[ESP + 0x200]               ; 004c896a
    MOV ESI,EAX                         ; 004c8971
    PUSH EDI                            ; 004c8973
    SUB ECX,ECX                         ; 004c8974
    DEC ECX                             ; 004c8976
    MOV AL,0x0                          ; 004c8977
    SCASB.REPNE ES:EDI                  ; 004c8979
    DEC EDI                             ; 004c897b
    MOV AL,byte ptr [ESI]               ; 004c897c
        ;   Label: LAB_004c897c
    MOV byte ptr [EDI],AL               ; 004c897e
    CMP AL,0x0                          ; 004c8980
    JZ 0x004c8994                       ; 004c8982
        ;   XREF to: 004c8994 (CONDITIONAL_JUMP)  ; LAB_004c8994
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8984
    ADD ESI,0x2                         ; 004c8987
    MOV byte ptr [EDI + 0x1],AL         ; 004c898a
    ADD EDI,0x2                         ; 004c898d
    CMP AL,0x0                          ; 004c8990
    JNZ 0x004c897c                      ; 004c8992
        ;   XREF to: 004c897c (CONDITIONAL_JUMP)  ; LAB_004c897c
    POP EDI                             ; 004c8994
        ;   Label: LAB_004c8994
    MOV ESI,0x587d50                    ; 004c8995 | = "\n"
    LEA EDI,[ESP + 0x200]               ; 004c899a
    PUSH EDI                            ; 004c89a1
    SUB ECX,ECX                         ; 004c89a2
    DEC ECX                             ; 004c89a4
    MOV AL,0x0                          ; 004c89a5
    SCASB.REPNE ES:EDI                  ; 004c89a7
    DEC EDI                             ; 004c89a9
    MOV AL,byte ptr [ESI]               ; 004c89aa | = "\n" | s_See_README_TXT_for_more_00587d52
        ;   Label: LAB_004c89aa
    MOV byte ptr [EDI],AL               ; 004c89ac
    CMP AL,0x0                          ; 004c89ae
    JZ 0x004c89c2                       ; 004c89b0
        ;   XREF to: 004c89c2 (CONDITIONAL_JUMP)  ; LAB_004c89c2
    MOV AL,byte ptr [ESI + 0x1]         ; 004c89b2 | s_anon_00587d50+1 | s_See_README_TXT_for_more_00587d52+1
    ADD ESI,0x2                         ; 004c89b5
    MOV byte ptr [EDI + 0x1],AL         ; 004c89b8
    ADD EDI,0x2                         ; 004c89bb
    CMP AL,0x0                          ; 004c89be
    JNZ 0x004c89aa                      ; 004c89c0
        ;   XREF to: 004c89aa (CONDITIONAL_JUMP)  ; LAB_004c89aa
    POP EDI                             ; 004c89c2
        ;   Label: LAB_004c89c2
    PUSH 0x587d52                       ; 004c89c3 | = "See README.TXT for more information."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c89c8
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c89cd
    LEA EDI,[ESP + 0x200]               ; 004c89d0
    MOV ESI,EAX                         ; 004c89d7
    PUSH EDI                            ; 004c89d9
    SUB ECX,ECX                         ; 004c89da
    DEC ECX                             ; 004c89dc
    MOV AL,0x0                          ; 004c89dd
    SCASB.REPNE ES:EDI                  ; 004c89df
    DEC EDI                             ; 004c89e1
    MOV AL,byte ptr [ESI]               ; 004c89e2
        ;   Label: LAB_004c89e2
    MOV byte ptr [EDI],AL               ; 004c89e4
    CMP AL,0x0                          ; 004c89e6
    JZ 0x004c89fa                       ; 004c89e8
        ;   XREF to: 004c89fa (CONDITIONAL_JUMP)  ; LAB_004c89fa
    MOV AL,byte ptr [ESI + 0x1]         ; 004c89ea
    ADD ESI,0x2                         ; 004c89ed
    MOV byte ptr [EDI + 0x1],AL         ; 004c89f0
    ADD EDI,0x2                         ; 004c89f3
    CMP AL,0x0                          ; 004c89f6
    JNZ 0x004c89e2                      ; 004c89f8
        ;   XREF to: 004c89e2 (CONDITIONAL_JUMP)  ; LAB_004c89e2
    POP EDI                             ; 004c89fa
        ;   Label: LAB_004c89fa
    LEA EAX,[ESP + 0x200]               ; 004c89fb
    PUSH EAX                            ; 004c8a02
    MOV EAX,[0x005b6d50]                ; 004c8a03 | DAT_005b6d50
    PUSH EAX                            ; 004c8a08
    CALL shape_edittool.cpp_FUN_0046fb40 ; 004c8a09
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fb40()
    ADD ESP,0x8                         ; 004c8a0e
    CMP dword ptr [0x02de20ac],0xc800000 ; 004c8a11 | DAT_02de20ac
        ;   Label: LAB_004c8a11
    JGE 0x004c8b9b                      ; 004c8a1b
        ;   XREF to: 004c8b9b (CONDITIONAL_JUMP)  ; LAB_004c8b9b
    PUSH 0x587d77                       ; 004c8a21 | = "Windows is reporting "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c8a26
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c8a2b
    MOV EDI,ESP                         ; 004c8a2e
    MOV ESI,EAX                         ; 004c8a30
    PUSH EDI                            ; 004c8a32
    MOV AL,byte ptr [ESI]               ; 004c8a33
        ;   Label: LAB_004c8a33
    MOV byte ptr [EDI],AL               ; 004c8a35
    CMP AL,0x0                          ; 004c8a37
    JZ 0x004c8a4b                       ; 004c8a39
        ;   XREF to: 004c8a4b (CONDITIONAL_JUMP)  ; LAB_004c8a4b
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8a3b
    ADD ESI,0x2                         ; 004c8a3e
    MOV byte ptr [EDI + 0x1],AL         ; 004c8a41
    ADD EDI,0x2                         ; 004c8a44
    CMP AL,0x0                          ; 004c8a47
    JNZ 0x004c8a33                      ; 004c8a49
        ;   XREF to: 004c8a33 (CONDITIONAL_JUMP)  ; LAB_004c8a33
    POP EDI                             ; 004c8a4b
        ;   Label: LAB_004c8a4b
    FILD dword ptr [0x02de20ac]         ; 004c8a4c | DAT_02de20ac
    FMUL float ptr [0x00587e64]         ; 004c8a52 | FLOAT_00587e64
    SUB ESP,0x8                         ; 004c8a58
    FSTP double ptr [ESP]               ; 004c8a5b
    PUSH 0x587d8d                       ; 004c8a5e | = "%.1f"
    LEA EAX,[ESP + 0x60c]               ; 004c8a63
    PUSH EAX                            ; 004c8a6a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c8a6b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004c8a70
    LEA ESI,[ESP + 0x600]               ; 004c8a73
    MOV EDI,ESP                         ; 004c8a7a
    PUSH EDI                            ; 004c8a7c
    SUB ECX,ECX                         ; 004c8a7d
    DEC ECX                             ; 004c8a7f
    MOV AL,0x0                          ; 004c8a80
    SCASB.REPNE ES:EDI                  ; 004c8a82
    DEC EDI                             ; 004c8a84
    MOV AL,byte ptr [ESI]               ; 004c8a85
        ;   Label: LAB_004c8a85
    MOV byte ptr [EDI],AL               ; 004c8a87
    CMP AL,0x0                          ; 004c8a89
    JZ 0x004c8a9d                       ; 004c8a8b
        ;   XREF to: 004c8a9d (CONDITIONAL_JUMP)  ; LAB_004c8a9d
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8a8d
    ADD ESI,0x2                         ; 004c8a90
    MOV byte ptr [EDI + 0x1],AL         ; 004c8a93
    ADD EDI,0x2                         ; 004c8a96
    CMP AL,0x0                          ; 004c8a99
    JNZ 0x004c8a85                      ; 004c8a9b
        ;   XREF to: 004c8a85 (CONDITIONAL_JUMP)  ; LAB_004c8a85
    POP EDI                             ; 004c8a9d
        ;   Label: LAB_004c8a9d
    PUSH 0x587d92                       ; 004c8a9e | = "MB of free swap disk space."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c8aa3
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c8aa8
    MOV EDI,ESP                         ; 004c8aab
    MOV ESI,EAX                         ; 004c8aad
    PUSH EDI                            ; 004c8aaf
    SUB ECX,ECX                         ; 004c8ab0
    DEC ECX                             ; 004c8ab2
    MOV AL,0x0                          ; 004c8ab3
    SCASB.REPNE ES:EDI                  ; 004c8ab5
    DEC EDI                             ; 004c8ab7
    MOV AL,byte ptr [ESI]               ; 004c8ab8
        ;   Label: LAB_004c8ab8
    MOV byte ptr [EDI],AL               ; 004c8aba
    CMP AL,0x0                          ; 004c8abc
    JZ 0x004c8ad0                       ; 004c8abe
        ;   XREF to: 004c8ad0 (CONDITIONAL_JUMP)  ; LAB_004c8ad0
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8ac0
    ADD ESI,0x2                         ; 004c8ac3
    MOV byte ptr [EDI + 0x1],AL         ; 004c8ac6
    ADD EDI,0x2                         ; 004c8ac9
    CMP AL,0x0                          ; 004c8acc
    JNZ 0x004c8ab8                      ; 004c8ace
        ;   XREF to: 004c8ab8 (CONDITIONAL_JUMP)  ; LAB_004c8ab8
    POP EDI                             ; 004c8ad0
        ;   Label: LAB_004c8ad0
    MOV ESI,0x587dae                    ; 004c8ad1 | = "\n"
    MOV EDI,ESP                         ; 004c8ad6
    PUSH EDI                            ; 004c8ad8
    SUB ECX,ECX                         ; 004c8ad9
    DEC ECX                             ; 004c8adb
    MOV AL,0x0                          ; 004c8adc
    SCASB.REPNE ES:EDI                  ; 004c8ade
    DEC EDI                             ; 004c8ae0
    MOV AL,byte ptr [ESI]               ; 004c8ae1 | = "\n" | s_Nocturne_runs_best_with_00587db0
        ;   Label: LAB_004c8ae1
    MOV byte ptr [EDI],AL               ; 004c8ae3
    CMP AL,0x0                          ; 004c8ae5
    JZ 0x004c8af9                       ; 004c8ae7
        ;   XREF to: 004c8af9 (CONDITIONAL_JUMP)  ; LAB_004c8af9
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8ae9 | s_anon_00587dae+1 | s_Nocturne_runs_best_with_00587db0+1
    ADD ESI,0x2                         ; 004c8aec
    MOV byte ptr [EDI + 0x1],AL         ; 004c8aef
    ADD EDI,0x2                         ; 004c8af2
    CMP AL,0x0                          ; 004c8af5
    JNZ 0x004c8ae1                      ; 004c8af7
        ;   XREF to: 004c8ae1 (CONDITIONAL_JUMP)  ; LAB_004c8ae1
    POP EDI                             ; 004c8af9
        ;   Label: LAB_004c8af9
    PUSH 0x587db0                       ; 004c8afa | = "Nocturne runs best with at least 200M..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c8aff
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c8b04
    MOV EDI,ESP                         ; 004c8b07
    MOV ESI,EAX                         ; 004c8b09
    PUSH EDI                            ; 004c8b0b
    SUB ECX,ECX                         ; 004c8b0c
    DEC ECX                             ; 004c8b0e
    MOV AL,0x0                          ; 004c8b0f
    SCASB.REPNE ES:EDI                  ; 004c8b11
    DEC EDI                             ; 004c8b13
    MOV AL,byte ptr [ESI]               ; 004c8b14
        ;   Label: LAB_004c8b14
    MOV byte ptr [EDI],AL               ; 004c8b16
    CMP AL,0x0                          ; 004c8b18
    JZ 0x004c8b2c                       ; 004c8b1a
        ;   XREF to: 004c8b2c (CONDITIONAL_JUMP)  ; LAB_004c8b2c
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8b1c
    ADD ESI,0x2                         ; 004c8b1f
    MOV byte ptr [EDI + 0x1],AL         ; 004c8b22
    ADD EDI,0x2                         ; 004c8b25
    CMP AL,0x0                          ; 004c8b28
    JNZ 0x004c8b14                      ; 004c8b2a
        ;   XREF to: 004c8b14 (CONDITIONAL_JUMP)  ; LAB_004c8b14
    POP EDI                             ; 004c8b2c
        ;   Label: LAB_004c8b2c
    MOV ESI,0x587ddd                    ; 004c8b2d | = "\n"
    MOV EDI,ESP                         ; 004c8b32
    PUSH EDI                            ; 004c8b34
    SUB ECX,ECX                         ; 004c8b35
    DEC ECX                             ; 004c8b37
    MOV AL,0x0                          ; 004c8b38
    SCASB.REPNE ES:EDI                  ; 004c8b3a
    DEC EDI                             ; 004c8b3c
    MOV AL,byte ptr [ESI]               ; 004c8b3d | = "\n" | s_See_README_TXT_for_more_00587ddf
        ;   Label: LAB_004c8b3d
    MOV byte ptr [EDI],AL               ; 004c8b3f
    CMP AL,0x0                          ; 004c8b41
    JZ 0x004c8b55                       ; 004c8b43
        ;   XREF to: 004c8b55 (CONDITIONAL_JUMP)  ; LAB_004c8b55
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8b45 | s_anon_00587ddd+1 | s_See_README_TXT_for_more_00587ddf+1
    ADD ESI,0x2                         ; 004c8b48
    MOV byte ptr [EDI + 0x1],AL         ; 004c8b4b
    ADD EDI,0x2                         ; 004c8b4e
    CMP AL,0x0                          ; 004c8b51
    JNZ 0x004c8b3d                      ; 004c8b53
        ;   XREF to: 004c8b3d (CONDITIONAL_JUMP)  ; LAB_004c8b3d
    POP EDI                             ; 004c8b55
        ;   Label: LAB_004c8b55
    PUSH 0x587ddf                       ; 004c8b56 | = "See README.TXT for more information."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c8b5b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c8b60
    MOV EDI,ESP                         ; 004c8b63
    MOV ESI,EAX                         ; 004c8b65
    PUSH EDI                            ; 004c8b67
    SUB ECX,ECX                         ; 004c8b68
    DEC ECX                             ; 004c8b6a
    MOV AL,0x0                          ; 004c8b6b
    SCASB.REPNE ES:EDI                  ; 004c8b6d
    DEC EDI                             ; 004c8b6f
    MOV AL,byte ptr [ESI]               ; 004c8b70
        ;   Label: LAB_004c8b70
    MOV byte ptr [EDI],AL               ; 004c8b72
    CMP AL,0x0                          ; 004c8b74
    JZ 0x004c8b88                       ; 004c8b76
        ;   XREF to: 004c8b88 (CONDITIONAL_JUMP)  ; LAB_004c8b88
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8b78
    ADD ESI,0x2                         ; 004c8b7b
    MOV byte ptr [EDI + 0x1],AL         ; 004c8b7e
    ADD EDI,0x2                         ; 004c8b81
    CMP AL,0x0                          ; 004c8b84
    JNZ 0x004c8b70                      ; 004c8b86
        ;   XREF to: 004c8b70 (CONDITIONAL_JUMP)  ; LAB_004c8b70
    POP EDI                             ; 004c8b88
        ;   Label: LAB_004c8b88
    MOV EAX,ESP                         ; 004c8b89
    PUSH EAX                            ; 004c8b8b
    MOV ECX,dword ptr [0x005b6d50]      ; 004c8b8c | DAT_005b6d50
    PUSH ECX                            ; 004c8b92
    CALL shape_edittool.cpp_FUN_0046fb40 ; 004c8b93
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fb40()
    ADD ESP,0x8                         ; 004c8b98
    CMP dword ptr [0x01cae37c],0x0      ; 004c8b9b | DAT_01cae37c
        ;   Label: LAB_004c8b9b
    JNZ 0x004c8d81                      ; 004c8ba2
        ;   XREF to: 004c8d81 (CONDITIONAL_JUMP)  ; LAB_004c8d81
    PUSH 0x587e04                       ; 004c8ba8 | = "opening.avi"
        ;   Label: LAB_004c8ba8
    PUSH 0x587e10                       ; 004c8bad | = "video"
    CALL wincore_winvideo.cpp_FUN_0055a510 ; 004c8bb2
        ;   XREF to: 0055a510 (UNCONDITIONAL_CALL)  ; int wincore_winvideo.cpp_FUN_0055a510(char * directory_path, char * movie_filename)
    ADD ESP,0x8                         ; 004c8bb7
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 004c8bba
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    PUSH 0x587e16                       ; 004c8bbf | = "Loading..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c8bc4
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004c8bc9
    LEA EDI,[ESP + 0x400]               ; 004c8bcc
    MOV ESI,EAX                         ; 004c8bd3
    PUSH EDI                            ; 004c8bd5
    MOV AL,byte ptr [ESI]               ; 004c8bd6
        ;   Label: LAB_004c8bd6
    MOV byte ptr [EDI],AL               ; 004c8bd8
    CMP AL,0x0                          ; 004c8bda
    JZ 0x004c8bee                       ; 004c8bdc
        ;   XREF to: 004c8bee (CONDITIONAL_JUMP)  ; LAB_004c8bee
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8bde
    ADD ESI,0x2                         ; 004c8be1
    MOV byte ptr [EDI + 0x1],AL         ; 004c8be4
    ADD EDI,0x2                         ; 004c8be7
    CMP AL,0x0                          ; 004c8bea
    JNZ 0x004c8bd6                      ; 004c8bec
        ;   XREF to: 004c8bd6 (CONDITIONAL_JUMP)  ; LAB_004c8bd6
    POP EDI                             ; 004c8bee
        ;   Label: LAB_004c8bee
    LEA EAX,[ESP + 0x400]               ; 004c8bef
    PUSH EAX                            ; 004c8bf6
    MOV EAX,[0x014b9900]                ; 004c8bf7 | DAT_014b9900
    PUSH EAX                            ; 004c8bfc
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c8bfd
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004c8c02
    PUSH 0x58                           ; 004c8c05
    MOV EDX,dword ptr [0x014b9900]      ; 004c8c07 | DAT_014b9900
    PUSH EDX                            ; 004c8c0d
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004c8c0e
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004c8c13
    LEA EAX,[ESP + 0x700]               ; 004c8c16
    PUSH EAX                            ; 004c8c1d
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004c8c1e
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004c8c23
    PUSH 0x1e0                          ; 004c8c26
    PUSH 0x280                          ; 004c8c2b
    PUSH 0x587e21                       ; 004c8c30 | = "fangs"
    LEA EAX,[ESP + 0x70c]               ; 004c8c35
    PUSH EAX                            ; 004c8c3c
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004c8c3d
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004c8c42
    PUSH 0x8000                         ; 004c8c45
    PUSH 0x0                            ; 004c8c4a
    PUSH 0x0                            ; 004c8c4c
    LEA EAX,[ESP + 0x70c]               ; 004c8c4e
    PUSH EAX                            ; 004c8c55
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004c8c56
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004c8c5b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004c8c5e
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    PUSH 0x0                            ; 004c8c63
    LEA EAX,[ESP + 0x704]               ; 004c8c65
    PUSH EAX                            ; 004c8c6c
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340 ; 004c8c6d
        ;   XREF to: 0040e340 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c8c72
    MOV ECX,dword ptr [0x005bed68]      ; 004c8c75 | DAT_005bed68
    PUSH ECX                            ; 004c8c7b
    CALL core_sound.cpp_CSound_findAllSoundFiles_FUN_0052dd20 ; 004c8c7c
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_findAllSoundFiles_FUN_0052dd20(CSound * this_ptr)
    ADD ESP,0x4                         ; 004c8c81
    MOV EBX,dword ptr [0x005baf90]      ; 004c8c84 | DAT_005baf90
    PUSH EBX                            ; 004c8c8a
    XOR ESI,ESI                         ; 004c8c8b
    CALL core_mission.cpp_FUN_004d7e00  ; 004c8c8d
        ;   XREF to: 004d7e00 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004d7e00()
    ADD ESP,0x4                         ; 004c8c92
    XOR EBX,EBX                         ; 004c8c95
    MOV dword ptr [ESP + 0x714],EBX     ; 004c8c97
        ;   Label: LAB_004c8c97
    FILD dword ptr [ESP + 0x714]        ; 004c8c9e
    FMUL double ptr [0x00587e68]        ; 004c8ca5 | DOUBLE_00587e68
    PUSH 0x0                            ; 004c8cab
    FADD double ptr [0x00587e68]        ; 004c8cad | DOUBLE_00587e68
    SUB ESP,0x4                         ; 004c8cb3
    FSTP float ptr [ESP]                ; 004c8cb6
    MOV EDI,dword ptr [ESI + 0x5ad51c]  ; 004c8cb9 | DAT_005ad51c | DAT_005ad520
    PUSH EDI                            ; 004c8cbf
    ADD ESI,0x4                         ; 004c8cc0
    INC EBX                             ; 004c8cc3
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_0044c190 ; 004c8cc4
        ;   XREF to: 0044c190 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_0044c190(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 004c8cc9
    CMP EBX,0x8                         ; 004c8ccc
    JL 0x004c8c97                       ; 004c8ccf
        ;   XREF to: 004c8c97 (CONDITIONAL_JUMP)  ; LAB_004c8c97
    MOV EDI,0x100                       ; 004c8cd1
    XOR ESI,ESI                         ; 004c8cd6
    XOR EBX,EBX                         ; 004c8cd8
    MOV dword ptr [ESP + 0x714],ESI     ; 004c8cda
        ;   Label: LAB_004c8cda
    MOV EAX,dword ptr [EBX + 0x5ad53c]  ; 004c8ce1 | DAT_005ad53c | DAT_005ad540
    FILD dword ptr [ESP + 0x714]        ; 004c8ce7
    MOV dword ptr [EAX],EDI             ; 004c8cee | DAT_014b8a58 | DAT_014b8aa4
    FMUL double ptr [0x00587e70]        ; 004c8cf0 | DOUBLE_00587e70
    MOV EAX,dword ptr [EBX + 0x5ad53c]  ; 004c8cf6 | DAT_005ad53c | DAT_005ad540
    PUSH 0x0                            ; 004c8cfc
    MOV dword ptr [EAX + 0x4],EDI       ; 004c8cfe | DAT_014b8a5c | DAT_014b8aa8
    FADD double ptr [0x00587e70]        ; 004c8d01 | DOUBLE_00587e70
    SUB ESP,0x4                         ; 004c8d07
    FSTP float ptr [ESP]                ; 004c8d0a
    MOV EAX,dword ptr [EBX + 0x5ad53c]  ; 004c8d0d | DAT_005ad53c | DAT_005ad540
    PUSH EAX                            ; 004c8d13 | DAT_014b8a58 | DAT_014b8aa4
    ADD EBX,0x4                         ; 004c8d14
    INC ESI                             ; 004c8d17
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_0044c190 ; 004c8d18
        ;   XREF to: 0044c190 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_0044c190(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 004c8d1d
    CMP ESI,0x4                         ; 004c8d20
    JL 0x004c8cda                       ; 004c8d23
        ;   XREF to: 004c8cda (CONDITIONAL_JUMP)  ; LAB_004c8cda
    MOV EDX,dword ptr [0x005be060]      ; 004c8d25 | DAT_005be060
    PUSH EDX                            ; 004c8d2b
    CALL engine_ncursfx.cpp_CMouse_load_FUN_004ee5a0 ; 004c8d2c
        ;   XREF to: 004ee5a0 (UNCONDITIONAL_CALL)  ; void engine_ncursfx.cpp_CMouse_load_FUN_004ee5a0(CMouse * this_ptr)
    ADD ESP,0x4                         ; 004c8d31
    MOV ECX,dword ptr [0x005b9284]      ; 004c8d34 | INT_005b9284
    PUSH ECX                            ; 004c8d3a
    CALL xxx_unk.c_FUN_004940d0         ; 004c8d3b
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    ADD ESP,0x4                         ; 004c8d40
    MOV EBX,dword ptr [0x005bdee0]      ; 004c8d43 | DAT_005bdee0
    PUSH EBX                            ; 004c8d49 | DAT_01cea280
    CALL core_netgame.cpp_CNetGame_init_FUN_004e9910 ; 004c8d4a
        ;   XREF to: 004e9910 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_init_FUN_004e9910(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004c8d4f
    PUSH 0x587e27                       ; 004c8d52 | = "0"
    PUSH 0x587e29                       ; 004c8d57 | = "Flip on VBlank"
    PUSH 0x587e38                       ; 004c8d5c | = "SOFTWARE\\Matrox\\PowerDesk\\Current ..."
    CALL wincore_winrun.cpp_setRegistryStringValue_FUN_00559da0 ; 004c8d61
        ;   XREF to: 00559da0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setRegistryStringValue_FUN_00559da0(char * key_path, char * value_name, char * value_data)
    ADD ESP,0xc                         ; 004c8d66
    MOV ESP,EBP                         ; 004c8d69
    POP EBP                             ; 004c8d6b
    POP EDI                             ; 004c8d6c
    POP ESI                             ; 004c8d6d
    POP EBX                             ; 004c8d6e
    RET                                 ; 004c8d6f
    MOV dword ptr [0x006af628],EBX      ; 004c8d70 | DAT_006af628
        ;   Label: LAB_004c8d70
    MOV dword ptr [0x01c038f0],EBX      ; 004c8d76 | DAT_01c038f0
    JMP 0x004c863c                      ; 004c8d7c
        ;   XREF to: 004c863c (UNCONDITIONAL_JUMP)  ; LAB_004c863c
    MOV EAX,[0x005b9354]                ; 004c8d81 | DAT_005b9354
        ;   Label: LAB_004c8d81
    XOR ESI,ESI                         ; 004c8d86
    MOV dword ptr [EAX],0x280           ; 004c8d88 | DAT_01c775ec
    MOV dword ptr [0x01cae37c],ESI      ; 004c8d8e | DAT_01cae37c
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004c8d94 | DAT_01c775f0
    MOV dword ptr [0x02dc9d60],ESI      ; 004c8d9b | INT_02dc9d60
    MOV dword ptr [EAX + 0x8],0x20      ; 004c8da1 | DAT_01c775f4
    CALL core_menu.cpp_showCalibrationTest_FUN_004cffa0 ; 004c8da8
        ;   XREF to: 004cffa0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTest_FUN_004cffa0()
    JMP 0x004c8ba8                      ; 004c8dad
        ;   XREF to: 004c8ba8 (UNCONDITIONAL_JUMP)  ; LAB_004c8ba8

