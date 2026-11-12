; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_initializeGameSystems_FUN_004e46c0(int argc,char **argv)
;
; Parameters:
; int              Stack[0x4]:4   argc
; char * *         Stack[0x8]:4   argv
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_0058f310 at 0058f58a
;
; Referenced Globals:
;   undefined4 DAT_005dc18a
;   TerminatedCString s_stderr_txt_005dc18d
;   TerminatedCString s_stderr_txt_005dc198
;   TerminatedCString s_core_main_c_005dc1a3
;   TerminatedCString s_Please_copy_Nocturne_to_005dc1b2
;   undefined4 DAT_005dc1da
;   TerminatedCString s_stderr_txt_005dc1dd
;   TerminatedCString s_msglist_txt_005dc1e8
;   TerminatedCString s_core_main_c_005dc1f4
;   TerminatedCString s_This_CPU_does_not_have_a_005dc203
;   TerminatedCString s_core_main_c_005dc227
;   TerminatedCString s_Unable_to_set_640x480x32_005dc236
;   TerminatedCString s_Windows_is_reporting_005dc2c7
;   undefined4 DAT_005dc2dd
;   TerminatedCString s_MB_of_system_RAM_005dc2e2
;   ... and 68 more
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_init_FUN_00447ad0
;   core_dfont.cpp_FUN_00447ea0
;   core_flattn.cpp_FUN_004a67a0
;   core_inivar.cpp_readIniData_FUN_004d8d60
;   core_main.c_FUN_004e4500
;   core_marquee.cpp_FUN_004e8620
;   core_menu.cpp_showCalibrationTest_FUN_004ebe30
;   core_mission.cpp_FUN_004fb380
;   core_mmx.c_detectCPUFeatures_FUN_004fd490
;   core_netgame.cpp_CNetGame_init_FUN_0050b340
;   core_sound.cpp_FUN_0055a100
;   core_zombie.cpp_FUN_0059abb0
;   crt_io.c__chmod_FUN_005b99e0
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fopen_FUN_005b910c
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e46c0
        ;   Label: core_main.c_initializeGameSystems_FUN_004e46c0
    PUSH ESI                            ; 004e46c1
    PUSH EDI                            ; 004e46c2
    PUSH EBP                            ; 004e46c3
    MOV EBP,ESP                         ; 004e46c4
    SUB ESP,0x718                       ; 004e46c6
    AND ESP,0xfffffff8                  ; 004e46cc
    MOV ECX,0x10000                     ; 004e46cf
    PUSH 0x5dc18a                       ; 004e46d4 | DAT_005dc18a
    MOV EBX,0x1                         ; 004e46d9
    XOR EDX,EDX                         ; 004e46de
    PUSH 0x5dc18d                       ; 004e46e0 | = "stderr.txt"
    MOV dword ptr [0x01c38b50],EDX      ; 004e46e5 | DAT_01c38b50
    MOV dword ptr [0x0061e28c],ECX      ; 004e46eb | DAT_0061e28c
    MOV dword ptr [0x0061e280],EBX      ; 004e46f1 | DAT_0061e280
    CALL crt_stdio.c_fopen_FUN_005b910c ; 004e46f7
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 004e46fc
    TEST EAX,EAX                        ; 004e46ff
    JNZ 0x004e4da1                      ; 004e4701
        ;   XREF to: 004e4da1 (CONDITIONAL_JUMP)  ; LAB_004e4da1
    PUSH 0x61ef88                       ; 004e4707 | DAT_0061ef88
        ;   Label: LAB_004e4707
    PUSH 0x5dc1da                       ; 004e470c | DAT_005dc1da
    PUSH 0x5dc1dd                       ; 004e4711 | = "stderr.txt"
    CALL crt_stdio.c_freopen_FUN_005b91a4 ; 004e4716
        ;   XREF to: 005b91a4 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_freopen_FUN_005b91a4()
    ADD ESP,0xc                         ; 004e471b
    CALL core_flattn.cpp_FUN_004a67a0   ; 004e471e
        ;   XREF to: 004a67a0 (UNCONDITIONAL_CALL)  ; undefined core_flattn.cpp_FUN_004a67a0()
    CALL core_inivar.cpp_readIniData_FUN_004d8d60 ; 004e4723
        ;   XREF to: 004d8d60 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_readIniData_FUN_004d8d60()
    MOV EDX,dword ptr [0x0061b40c]      ; 004e4728 | g_CDemonPodPtr
    MOV EAX,0x2                         ; 004e472e
    PUSH EDX                            ; 004e4733
    MOV [0x0264bbac],EAX                ; 004e4734 | DAT_0264bbac
    CALL engine_pod.cpp_CPod_init_FUN_0051b320 ; 004e4739
        ;   XREF to: 0051b320 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_init_FUN_0051b320(CPod * this_ptr)
    ADD ESP,0x4                         ; 004e473e
    PUSH 0x51bfa0                       ; 004e4741
    CALL engine_dosio.cpp_addGetFileInfoHook_FUN_00460930 ; 004e4746
        ;   XREF to: 00460930 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_addGetFileInfoHook_FUN_00460930()
    ADD ESP,0x4                         ; 004e474b
    PUSH 0x4609e0                       ; 004e474e
    CALL engine_dosio.cpp_addGetFileInfoHook_FUN_00460930 ; 004e4753
        ;   XREF to: 00460930 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_addGetFileInfoHook_FUN_00460930()
    ADD ESP,0x4                         ; 004e4758
    PUSH 0x5dc1e8                       ; 004e475b | = "msglist.txt"
    CALL support_newmsg.cpp_readMessageFile_FUN_0050f9e0 ; 004e4760
        ;   XREF to: 0050f9e0 (UNCONDITIONAL_CALL)  ; void support_newmsg.cpp_readMessageFile_FUN_0050f9e0(char * message_file)
    ADD ESP,0x4                         ; 004e4765
    CALL core_mmx.c_detectCPUFeatures_FUN_004fd490 ; 004e4768
        ;   XREF to: 004fd490 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectCPUFeatures_FUN_004fd490()
    CMP dword ptr [0x01c38b40],0x0      ; 004e476d | DAT_01c38b40
    JNZ 0x004e47a2                      ; 004e4774
        ;   XREF to: 004e47a2 (CONDITIONAL_JUMP)  ; LAB_004e47a2
    MOV EBX,0x5dc1f4                    ; 004e4776 | = "..\\core\\main.c"
    MOV ESI,0x3da                       ; 004e477b
    PUSH 0x5dc203                       ; 004e4780 | = "This CPU does not have an MMX unit."
    MOV dword ptr [0x01d046a0],EBX      ; 004e4785 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004e478b | DAT_01d046a4
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004e4791
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004e4796
    PUSH EAX                            ; 004e4799
    CALL core_main.c_FUN_004e4500       ; 004e479a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004e479f
    CALL core_marquee.cpp_FUN_004e8620  ; 004e47a2
        ;   XREF to: 004e8620 (UNCONDITIONAL_CALL)  ; undefined core_marquee.cpp_FUN_004e8620()
        ;   Label: LAB_004e47a2
    CALL engine_3d.c_initTextureCache_FUN_004037e0 ; 004e47a7
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; CTextureCache * engine_3d.c_initTextureCache_FUN_004037e0()
    CALL engine_2d.c_initGraphicsSystem_FUN_00401010 ; 004e47ac
        ;   XREF to: 00401010 (UNCONDITIONAL_CALL)  ; void engine_2d.c_initGraphicsSystem_FUN_00401010()
    CALL wincore_winrun.cpp_calibrateCPUSpeed_FUN_0058e7a0 ; 004e47b1
        ;   XREF to: 0058e7a0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_calibrateCPUSpeed_FUN_0058e7a0()
    CALL wincore_winrun.cpp_initJoystick_FUN_0058ffd0 ; 004e47b6
        ;   XREF to: 0058ffd0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_initJoystick_FUN_0058ffd0()
    PUSH 0x20                           ; 004e47bb
    PUSH 0x1e0                          ; 004e47bd
    PUSH 0x280                          ; 004e47c2
    CALL wincore_wddvmem.cpp_FUN_00588a50 ; 004e47c7
        ;   XREF to: 00588a50 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_FUN_00588a50(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 004e47cc
    TEST EAX,EAX                        ; 004e47cf
    JNZ 0x004e47f5                      ; 004e47d1
        ;   XREF to: 004e47f5 (CONDITIONAL_JUMP)  ; LAB_004e47f5
    MOV EDI,0x5dc227                    ; 004e47d3 | = "..\\core\\main.c"
    MOV EAX,0x3f2                       ; 004e47d8
    PUSH 0x5dc236                       ; 004e47dd | = "Unable to set 640x480x32bpp.  Please ..."
    MOV dword ptr [0x01d046a0],EDI      ; 004e47e2 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004e47e8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004e47ed
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004e47f2
    CALL core_dfont.cpp_FUN_00447ea0    ; 004e47f5
        ;   XREF to: 00447ea0 (UNCONDITIONAL_CALL)  ; void core_dfont.cpp_FUN_00447ea0()
        ;   Label: LAB_004e47f5
    CMP dword ptr [0x02664638],0x3c00000 ; 004e47fa | DAT_02664638
    JGE 0x004e4a78                      ; 004e4804
        ;   XREF to: 004e4a78 (CONDITIONAL_JUMP)  ; LAB_004e4a78
    PUSH 0x5dc2c7                       ; 004e480a | = "Windows is reporting "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004e480f
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004e4814
    LEA EDI,[ESP + 0x200]               ; 004e4817
    MOV ESI,EAX                         ; 004e481e
    PUSH EDI                            ; 004e4820
    MOV AL,byte ptr [ESI]               ; 004e4821
        ;   Label: LAB_004e4821
    MOV byte ptr [EDI],AL               ; 004e4823
    CMP AL,0x0                          ; 004e4825
    JZ 0x004e4839                       ; 004e4827
        ;   XREF to: 004e4839 (CONDITIONAL_JUMP)  ; LAB_004e4839
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4829
    ADD ESI,0x2                         ; 004e482c
    MOV byte ptr [EDI + 0x1],AL         ; 004e482f
    ADD EDI,0x2                         ; 004e4832
    CMP AL,0x0                          ; 004e4835
    JNZ 0x004e4821                      ; 004e4837
        ;   XREF to: 004e4821 (CONDITIONAL_JUMP)  ; LAB_004e4821
    POP EDI                             ; 004e4839
        ;   Label: LAB_004e4839
    FILD dword ptr [0x02664638]         ; 004e483a | DAT_02664638
    FMUL float ptr [0x005dc481]         ; 004e4840 | DAT_005dc481
    SUB ESP,0x8                         ; 004e4846
    FSTP double ptr [ESP]               ; 004e4849
    PUSH 0x5dc2dd                       ; 004e484c | DAT_005dc2dd
    LEA EAX,[ESP + 0x40c]               ; 004e4851
    PUSH EAX                            ; 004e4858
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004e4859
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004e485e
    LEA ESI,[ESP + 0x400]               ; 004e4861
    LEA EDI,[ESP + 0x200]               ; 004e4868
    PUSH EDI                            ; 004e486f
    SUB ECX,ECX                         ; 004e4870
    DEC ECX                             ; 004e4872
    MOV AL,0x0                          ; 004e4873
    SCASB.REPNE ES:EDI                  ; 004e4875
    DEC EDI                             ; 004e4877
    MOV AL,byte ptr [ESI]               ; 004e4878
        ;   Label: LAB_004e4878
    MOV byte ptr [EDI],AL               ; 004e487a
    CMP AL,0x0                          ; 004e487c
    JZ 0x004e4890                       ; 004e487e
        ;   XREF to: 004e4890 (CONDITIONAL_JUMP)  ; LAB_004e4890
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4880
    ADD ESI,0x2                         ; 004e4883
    MOV byte ptr [EDI + 0x1],AL         ; 004e4886
    ADD EDI,0x2                         ; 004e4889
    CMP AL,0x0                          ; 004e488c
    JNZ 0x004e4878                      ; 004e488e
        ;   XREF to: 004e4878 (CONDITIONAL_JUMP)  ; LAB_004e4878
    POP EDI                             ; 004e4890
        ;   Label: LAB_004e4890
    PUSH 0x5dc2e2                       ; 004e4891 | = "MB of system RAM."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004e4896
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004e489b
    LEA EDI,[ESP + 0x200]               ; 004e489e
    MOV ESI,EAX                         ; 004e48a5
    PUSH EDI                            ; 004e48a7
    SUB ECX,ECX                         ; 004e48a8
    DEC ECX                             ; 004e48aa
    MOV AL,0x0                          ; 004e48ab
    SCASB.REPNE ES:EDI                  ; 004e48ad
    DEC EDI                             ; 004e48af
    MOV AL,byte ptr [ESI]               ; 004e48b0
        ;   Label: LAB_004e48b0
    MOV byte ptr [EDI],AL               ; 004e48b2
    CMP AL,0x0                          ; 004e48b4
    JZ 0x004e48c8                       ; 004e48b6
        ;   XREF to: 004e48c8 (CONDITIONAL_JUMP)  ; LAB_004e48c8
    MOV AL,byte ptr [ESI + 0x1]         ; 004e48b8
    ADD ESI,0x2                         ; 004e48bb
    MOV byte ptr [EDI + 0x1],AL         ; 004e48be
    ADD EDI,0x2                         ; 004e48c1
    CMP AL,0x0                          ; 004e48c4
    JNZ 0x004e48b0                      ; 004e48c6
        ;   XREF to: 004e48b0 (CONDITIONAL_JUMP)  ; LAB_004e48b0
    POP EDI                             ; 004e48c8
        ;   Label: LAB_004e48c8
    MOV ESI,0x5dc2f4                    ; 004e48c9 | DAT_005dc2f4
    LEA EDI,[ESP + 0x200]               ; 004e48ce
    PUSH EDI                            ; 004e48d5
    SUB ECX,ECX                         ; 004e48d6
    DEC ECX                             ; 004e48d8
    MOV AL,0x0                          ; 004e48d9
    SCASB.REPNE ES:EDI                  ; 004e48db
    DEC EDI                             ; 004e48dd
    MOV AL,byte ptr [ESI]               ; 004e48de | DAT_005dc2f4 | = "Nocturne requires at least 64MB of sy..."
        ;   Label: LAB_004e48de
    MOV byte ptr [EDI],AL               ; 004e48e0
    CMP AL,0x0                          ; 004e48e2
    JZ 0x004e48f6                       ; 004e48e4
        ;   XREF to: 004e48f6 (CONDITIONAL_JUMP)  ; LAB_004e48f6
    MOV AL,byte ptr [ESI + 0x1]         ; 004e48e6 | DAT_005dc2f5 | s_Nocturne_requires_at_lea_005dc2f6+1
    ADD ESI,0x2                         ; 004e48e9
    MOV byte ptr [EDI + 0x1],AL         ; 004e48ec
    ADD EDI,0x2                         ; 004e48ef
    CMP AL,0x0                          ; 004e48f2
    JNZ 0x004e48de                      ; 004e48f4
        ;   XREF to: 004e48de (CONDITIONAL_JUMP)  ; LAB_004e48de
    POP EDI                             ; 004e48f6
        ;   Label: LAB_004e48f6
    PUSH 0x5dc2f6                       ; 004e48f7 | = "Nocturne requires at least 64MB of sy..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004e48fc
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004e4901
    LEA EDI,[ESP + 0x200]               ; 004e4904
    MOV ESI,EAX                         ; 004e490b
    PUSH EDI                            ; 004e490d
    SUB ECX,ECX                         ; 004e490e
    DEC ECX                             ; 004e4910
    MOV AL,0x0                          ; 004e4911
    SCASB.REPNE ES:EDI                  ; 004e4913
    DEC EDI                             ; 004e4915
    MOV AL,byte ptr [ESI]               ; 004e4916
        ;   Label: LAB_004e4916
    MOV byte ptr [EDI],AL               ; 004e4918
    CMP AL,0x0                          ; 004e491a
    JZ 0x004e492e                       ; 004e491c
        ;   XREF to: 004e492e (CONDITIONAL_JUMP)  ; LAB_004e492e
    MOV AL,byte ptr [ESI + 0x1]         ; 004e491e
    ADD ESI,0x2                         ; 004e4921
    MOV byte ptr [EDI + 0x1],AL         ; 004e4924
    ADD EDI,0x2                         ; 004e4927
    CMP AL,0x0                          ; 004e492a
    JNZ 0x004e4916                      ; 004e492c
        ;   XREF to: 004e4916 (CONDITIONAL_JUMP)  ; LAB_004e4916
    POP EDI                             ; 004e492e
        ;   Label: LAB_004e492e
    MOV ESI,0x5dc325                    ; 004e492f | DAT_005dc325
    LEA EDI,[ESP + 0x200]               ; 004e4934
    PUSH EDI                            ; 004e493b
    SUB ECX,ECX                         ; 004e493c
    DEC ECX                             ; 004e493e
    MOV AL,0x0                          ; 004e493f
    SCASB.REPNE ES:EDI                  ; 004e4941
    DEC EDI                             ; 004e4943
    MOV AL,byte ptr [ESI]               ; 004e4944 | DAT_005dc325 | = "If you think you have at least 64MB o..."
        ;   Label: LAB_004e4944
    MOV byte ptr [EDI],AL               ; 004e4946
    CMP AL,0x0                          ; 004e4948
    JZ 0x004e495c                       ; 004e494a
        ;   XREF to: 004e495c (CONDITIONAL_JUMP)  ; LAB_004e495c
    MOV AL,byte ptr [ESI + 0x1]         ; 004e494c | DAT_005dc326 | s_If_you_think_you_have_at_005dc327+1
    ADD ESI,0x2                         ; 004e494f
    MOV byte ptr [EDI + 0x1],AL         ; 004e4952
    ADD EDI,0x2                         ; 004e4955
    CMP AL,0x0                          ; 004e4958
    JNZ 0x004e4944                      ; 004e495a
        ;   XREF to: 004e4944 (CONDITIONAL_JUMP)  ; LAB_004e4944
    POP EDI                             ; 004e495c
        ;   Label: LAB_004e495c
    PUSH 0x5dc327                       ; 004e495d | = "If you think you have at least 64MB o..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004e4962
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004e4967
    LEA EDI,[ESP + 0x200]               ; 004e496a
    MOV ESI,EAX                         ; 004e4971
    PUSH EDI                            ; 004e4973
    SUB ECX,ECX                         ; 004e4974
    DEC ECX                             ; 004e4976
    MOV AL,0x0                          ; 004e4977
    SCASB.REPNE ES:EDI                  ; 004e4979
    DEC EDI                             ; 004e497b
    MOV AL,byte ptr [ESI]               ; 004e497c
        ;   Label: LAB_004e497c
    MOV byte ptr [EDI],AL               ; 004e497e
    CMP AL,0x0                          ; 004e4980
    JZ 0x004e4994                       ; 004e4982
        ;   XREF to: 004e4994 (CONDITIONAL_JUMP)  ; LAB_004e4994
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4984
    ADD ESI,0x2                         ; 004e4987
    MOV byte ptr [EDI + 0x1],AL         ; 004e498a
    ADD EDI,0x2                         ; 004e498d
    CMP AL,0x0                          ; 004e4990
    JNZ 0x004e497c                      ; 004e4992
        ;   XREF to: 004e497c (CONDITIONAL_JUMP)  ; LAB_004e497c
    POP EDI                             ; 004e4994
        ;   Label: LAB_004e4994
    MOV ESI,0x5dc359                    ; 004e4995 | DAT_005dc359
    LEA EDI,[ESP + 0x200]               ; 004e499a
    PUSH EDI                            ; 004e49a1
    SUB ECX,ECX                         ; 004e49a2
    DEC ECX                             ; 004e49a4
    MOV AL,0x0                          ; 004e49a5
    SCASB.REPNE ES:EDI                  ; 004e49a7
    DEC EDI                             ; 004e49a9
    MOV AL,byte ptr [ESI]               ; 004e49aa | DAT_005dc359 | = "then ignore this message."
        ;   Label: LAB_004e49aa
    MOV byte ptr [EDI],AL               ; 004e49ac
    CMP AL,0x0                          ; 004e49ae
    JZ 0x004e49c2                       ; 004e49b0
        ;   XREF to: 004e49c2 (CONDITIONAL_JUMP)  ; LAB_004e49c2
    MOV AL,byte ptr [ESI + 0x1]         ; 004e49b2 | DAT_005dc35a | s_then_ignore_this_message_005dc35b+1
    ADD ESI,0x2                         ; 004e49b5
    MOV byte ptr [EDI + 0x1],AL         ; 004e49b8
    ADD EDI,0x2                         ; 004e49bb
    CMP AL,0x0                          ; 004e49be
    JNZ 0x004e49aa                      ; 004e49c0
        ;   XREF to: 004e49aa (CONDITIONAL_JUMP)  ; LAB_004e49aa
    POP EDI                             ; 004e49c2
        ;   Label: LAB_004e49c2
    PUSH 0x5dc35b                       ; 004e49c3 | = "then ignore this message."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004e49c8
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004e49cd
    LEA EDI,[ESP + 0x200]               ; 004e49d0
    MOV ESI,EAX                         ; 004e49d7
    PUSH EDI                            ; 004e49d9
    SUB ECX,ECX                         ; 004e49da
    DEC ECX                             ; 004e49dc
    MOV AL,0x0                          ; 004e49dd
    SCASB.REPNE ES:EDI                  ; 004e49df
    DEC EDI                             ; 004e49e1
    MOV AL,byte ptr [ESI]               ; 004e49e2
        ;   Label: LAB_004e49e2
    MOV byte ptr [EDI],AL               ; 004e49e4
    CMP AL,0x0                          ; 004e49e6
    JZ 0x004e49fa                       ; 004e49e8
        ;   XREF to: 004e49fa (CONDITIONAL_JUMP)  ; LAB_004e49fa
    MOV AL,byte ptr [ESI + 0x1]         ; 004e49ea
    ADD ESI,0x2                         ; 004e49ed
    MOV byte ptr [EDI + 0x1],AL         ; 004e49f0
    ADD EDI,0x2                         ; 004e49f3
    CMP AL,0x0                          ; 004e49f6
    JNZ 0x004e49e2                      ; 004e49f8
        ;   XREF to: 004e49e2 (CONDITIONAL_JUMP)  ; LAB_004e49e2
    POP EDI                             ; 004e49fa
        ;   Label: LAB_004e49fa
    MOV ESI,0x5dc375                    ; 004e49fb | DAT_005dc375
    LEA EDI,[ESP + 0x200]               ; 004e4a00
    PUSH EDI                            ; 004e4a07
    SUB ECX,ECX                         ; 004e4a08
    DEC ECX                             ; 004e4a0a
    MOV AL,0x0                          ; 004e4a0b
    SCASB.REPNE ES:EDI                  ; 004e4a0d
    DEC EDI                             ; 004e4a0f
    MOV AL,byte ptr [ESI]               ; 004e4a10 | DAT_005dc375 | = "See README.TXT for more information."
        ;   Label: LAB_004e4a10
    MOV byte ptr [EDI],AL               ; 004e4a12
    CMP AL,0x0                          ; 004e4a14
    JZ 0x004e4a28                       ; 004e4a16
        ;   XREF to: 004e4a28 (CONDITIONAL_JUMP)  ; LAB_004e4a28
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4a18 | DAT_005dc376 | s_See_README_TXT_for_more_005dc377+1
    ADD ESI,0x2                         ; 004e4a1b
    MOV byte ptr [EDI + 0x1],AL         ; 004e4a1e
    ADD EDI,0x2                         ; 004e4a21
    CMP AL,0x0                          ; 004e4a24
    JNZ 0x004e4a10                      ; 004e4a26
        ;   XREF to: 004e4a10 (CONDITIONAL_JUMP)  ; LAB_004e4a10
    POP EDI                             ; 004e4a28
        ;   Label: LAB_004e4a28
    PUSH 0x5dc377                       ; 004e4a29 | = "See README.TXT for more information."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004e4a2e
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004e4a33
    LEA EDI,[ESP + 0x200]               ; 004e4a36
    MOV ESI,EAX                         ; 004e4a3d
    PUSH EDI                            ; 004e4a3f
    SUB ECX,ECX                         ; 004e4a40
    DEC ECX                             ; 004e4a42
    MOV AL,0x0                          ; 004e4a43
    SCASB.REPNE ES:EDI                  ; 004e4a45
    DEC EDI                             ; 004e4a47
    MOV AL,byte ptr [ESI]               ; 004e4a48
        ;   Label: LAB_004e4a48
    MOV byte ptr [EDI],AL               ; 004e4a4a
    CMP AL,0x0                          ; 004e4a4c
    JZ 0x004e4a60                       ; 004e4a4e
        ;   XREF to: 004e4a60 (CONDITIONAL_JUMP)  ; LAB_004e4a60
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4a50
    ADD ESI,0x2                         ; 004e4a53
    MOV byte ptr [EDI + 0x1],AL         ; 004e4a56
    ADD EDI,0x2                         ; 004e4a59
    CMP AL,0x0                          ; 004e4a5c
    JNZ 0x004e4a48                      ; 004e4a5e
        ;   XREF to: 004e4a48 (CONDITIONAL_JUMP)  ; LAB_004e4a48
    POP EDI                             ; 004e4a60
        ;   Label: LAB_004e4a60
    LEA EAX,[ESP + 0x200]               ; 004e4a61
    PUSH EAX                            ; 004e4a68
    MOV ECX,dword ptr [0x006138e0]      ; 004e4a69 | g_CEditorToolsPtr
    PUSH ECX                            ; 004e4a6f
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 004e4a70
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e4a75
    CMP dword ptr [0x0266463c],0xc800000 ; 004e4a78 | DAT_0266463c
        ;   Label: LAB_004e4a78
    JGE 0x004e4c02                      ; 004e4a82
        ;   XREF to: 004e4c02 (CONDITIONAL_JUMP)  ; LAB_004e4c02
    PUSH 0x5dc39c                       ; 004e4a88 | = "Windows is reporting "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004e4a8d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004e4a92
    MOV EDI,ESP                         ; 004e4a95
    MOV ESI,EAX                         ; 004e4a97
    PUSH EDI                            ; 004e4a99
    MOV AL,byte ptr [ESI]               ; 004e4a9a
        ;   Label: LAB_004e4a9a
    MOV byte ptr [EDI],AL               ; 004e4a9c
    CMP AL,0x0                          ; 004e4a9e
    JZ 0x004e4ab2                       ; 004e4aa0
        ;   XREF to: 004e4ab2 (CONDITIONAL_JUMP)  ; LAB_004e4ab2
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4aa2
    ADD ESI,0x2                         ; 004e4aa5
    MOV byte ptr [EDI + 0x1],AL         ; 004e4aa8
    ADD EDI,0x2                         ; 004e4aab
    CMP AL,0x0                          ; 004e4aae
    JNZ 0x004e4a9a                      ; 004e4ab0
        ;   XREF to: 004e4a9a (CONDITIONAL_JUMP)  ; LAB_004e4a9a
    POP EDI                             ; 004e4ab2
        ;   Label: LAB_004e4ab2
    FILD dword ptr [0x0266463c]         ; 004e4ab3 | DAT_0266463c
    FMUL float ptr [0x005dc481]         ; 004e4ab9 | DAT_005dc481
    SUB ESP,0x8                         ; 004e4abf
    FSTP double ptr [ESP]               ; 004e4ac2
    PUSH 0x5dc3b2                       ; 004e4ac5 | DAT_005dc3b2
    LEA EAX,[ESP + 0x60c]               ; 004e4aca
    PUSH EAX                            ; 004e4ad1
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004e4ad2
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004e4ad7
    LEA ESI,[ESP + 0x600]               ; 004e4ada
    MOV EDI,ESP                         ; 004e4ae1
    PUSH EDI                            ; 004e4ae3
    SUB ECX,ECX                         ; 004e4ae4
    DEC ECX                             ; 004e4ae6
    MOV AL,0x0                          ; 004e4ae7
    SCASB.REPNE ES:EDI                  ; 004e4ae9
    DEC EDI                             ; 004e4aeb
    MOV AL,byte ptr [ESI]               ; 004e4aec
        ;   Label: LAB_004e4aec
    MOV byte ptr [EDI],AL               ; 004e4aee
    CMP AL,0x0                          ; 004e4af0
    JZ 0x004e4b04                       ; 004e4af2
        ;   XREF to: 004e4b04 (CONDITIONAL_JUMP)  ; LAB_004e4b04
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4af4
    ADD ESI,0x2                         ; 004e4af7
    MOV byte ptr [EDI + 0x1],AL         ; 004e4afa
    ADD EDI,0x2                         ; 004e4afd
    CMP AL,0x0                          ; 004e4b00
    JNZ 0x004e4aec                      ; 004e4b02
        ;   XREF to: 004e4aec (CONDITIONAL_JUMP)  ; LAB_004e4aec
    POP EDI                             ; 004e4b04
        ;   Label: LAB_004e4b04
    PUSH 0x5dc3b7                       ; 004e4b05 | = "MB of free swap disk space."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004e4b0a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004e4b0f
    MOV EDI,ESP                         ; 004e4b12
    MOV ESI,EAX                         ; 004e4b14
    PUSH EDI                            ; 004e4b16
    SUB ECX,ECX                         ; 004e4b17
    DEC ECX                             ; 004e4b19
    MOV AL,0x0                          ; 004e4b1a
    SCASB.REPNE ES:EDI                  ; 004e4b1c
    DEC EDI                             ; 004e4b1e
    MOV AL,byte ptr [ESI]               ; 004e4b1f
        ;   Label: LAB_004e4b1f
    MOV byte ptr [EDI],AL               ; 004e4b21
    CMP AL,0x0                          ; 004e4b23
    JZ 0x004e4b37                       ; 004e4b25
        ;   XREF to: 004e4b37 (CONDITIONAL_JUMP)  ; LAB_004e4b37
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4b27
    ADD ESI,0x2                         ; 004e4b2a
    MOV byte ptr [EDI + 0x1],AL         ; 004e4b2d
    ADD EDI,0x2                         ; 004e4b30
    CMP AL,0x0                          ; 004e4b33
    JNZ 0x004e4b1f                      ; 004e4b35
        ;   XREF to: 004e4b1f (CONDITIONAL_JUMP)  ; LAB_004e4b1f
    POP EDI                             ; 004e4b37
        ;   Label: LAB_004e4b37
    MOV ESI,0x5dc3d3                    ; 004e4b38 | DAT_005dc3d3
    MOV EDI,ESP                         ; 004e4b3d
    PUSH EDI                            ; 004e4b3f
    SUB ECX,ECX                         ; 004e4b40
    DEC ECX                             ; 004e4b42
    MOV AL,0x0                          ; 004e4b43
    SCASB.REPNE ES:EDI                  ; 004e4b45
    DEC EDI                             ; 004e4b47
    MOV AL,byte ptr [ESI]               ; 004e4b48 | DAT_005dc3d3 | = "Nocturne runs best with at least 200M..."
        ;   Label: LAB_004e4b48
    MOV byte ptr [EDI],AL               ; 004e4b4a
    CMP AL,0x0                          ; 004e4b4c
    JZ 0x004e4b60                       ; 004e4b4e
        ;   XREF to: 004e4b60 (CONDITIONAL_JUMP)  ; LAB_004e4b60
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4b50 | DAT_005dc3d4 | s_Nocturne_runs_best_with_005dc3d5+1
    ADD ESI,0x2                         ; 004e4b53
    MOV byte ptr [EDI + 0x1],AL         ; 004e4b56
    ADD EDI,0x2                         ; 004e4b59
    CMP AL,0x0                          ; 004e4b5c
    JNZ 0x004e4b48                      ; 004e4b5e
        ;   XREF to: 004e4b48 (CONDITIONAL_JUMP)  ; LAB_004e4b48
    POP EDI                             ; 004e4b60
        ;   Label: LAB_004e4b60
    PUSH 0x5dc3d5                       ; 004e4b61 | = "Nocturne runs best with at least 200M..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004e4b66
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004e4b6b
    MOV EDI,ESP                         ; 004e4b6e
    MOV ESI,EAX                         ; 004e4b70
    PUSH EDI                            ; 004e4b72
    SUB ECX,ECX                         ; 004e4b73
    DEC ECX                             ; 004e4b75
    MOV AL,0x0                          ; 004e4b76
    SCASB.REPNE ES:EDI                  ; 004e4b78
    DEC EDI                             ; 004e4b7a
    MOV AL,byte ptr [ESI]               ; 004e4b7b
        ;   Label: LAB_004e4b7b
    MOV byte ptr [EDI],AL               ; 004e4b7d
    CMP AL,0x0                          ; 004e4b7f
    JZ 0x004e4b93                       ; 004e4b81
        ;   XREF to: 004e4b93 (CONDITIONAL_JUMP)  ; LAB_004e4b93
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4b83
    ADD ESI,0x2                         ; 004e4b86
    MOV byte ptr [EDI + 0x1],AL         ; 004e4b89
    ADD EDI,0x2                         ; 004e4b8c
    CMP AL,0x0                          ; 004e4b8f
    JNZ 0x004e4b7b                      ; 004e4b91
        ;   XREF to: 004e4b7b (CONDITIONAL_JUMP)  ; LAB_004e4b7b
    POP EDI                             ; 004e4b93
        ;   Label: LAB_004e4b93
    MOV ESI,0x5dc402                    ; 004e4b94 | DAT_005dc402
    MOV EDI,ESP                         ; 004e4b99
    PUSH EDI                            ; 004e4b9b
    SUB ECX,ECX                         ; 004e4b9c
    DEC ECX                             ; 004e4b9e
    MOV AL,0x0                          ; 004e4b9f
    SCASB.REPNE ES:EDI                  ; 004e4ba1
    DEC EDI                             ; 004e4ba3
    MOV AL,byte ptr [ESI]               ; 004e4ba4 | DAT_005dc402 | = "See README.TXT for more information."
        ;   Label: LAB_004e4ba4
    MOV byte ptr [EDI],AL               ; 004e4ba6
    CMP AL,0x0                          ; 004e4ba8
    JZ 0x004e4bbc                       ; 004e4baa
        ;   XREF to: 004e4bbc (CONDITIONAL_JUMP)  ; LAB_004e4bbc
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4bac | DAT_005dc403 | s_See_README_TXT_for_more_005dc404+1
    ADD ESI,0x2                         ; 004e4baf
    MOV byte ptr [EDI + 0x1],AL         ; 004e4bb2
    ADD EDI,0x2                         ; 004e4bb5
    CMP AL,0x0                          ; 004e4bb8
    JNZ 0x004e4ba4                      ; 004e4bba
        ;   XREF to: 004e4ba4 (CONDITIONAL_JUMP)  ; LAB_004e4ba4
    POP EDI                             ; 004e4bbc
        ;   Label: LAB_004e4bbc
    PUSH 0x5dc404                       ; 004e4bbd | = "See README.TXT for more information."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004e4bc2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004e4bc7
    MOV EDI,ESP                         ; 004e4bca
    MOV ESI,EAX                         ; 004e4bcc
    PUSH EDI                            ; 004e4bce
    SUB ECX,ECX                         ; 004e4bcf
    DEC ECX                             ; 004e4bd1
    MOV AL,0x0                          ; 004e4bd2
    SCASB.REPNE ES:EDI                  ; 004e4bd4
    DEC EDI                             ; 004e4bd6
    MOV AL,byte ptr [ESI]               ; 004e4bd7
        ;   Label: LAB_004e4bd7
    MOV byte ptr [EDI],AL               ; 004e4bd9
    CMP AL,0x0                          ; 004e4bdb
    JZ 0x004e4bef                       ; 004e4bdd
        ;   XREF to: 004e4bef (CONDITIONAL_JUMP)  ; LAB_004e4bef
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4bdf
    ADD ESI,0x2                         ; 004e4be2
    MOV byte ptr [EDI + 0x1],AL         ; 004e4be5
    ADD EDI,0x2                         ; 004e4be8
    CMP AL,0x0                          ; 004e4beb
    JNZ 0x004e4bd7                      ; 004e4bed
        ;   XREF to: 004e4bd7 (CONDITIONAL_JUMP)  ; LAB_004e4bd7
    POP EDI                             ; 004e4bef
        ;   Label: LAB_004e4bef
    MOV EAX,ESP                         ; 004e4bf0
    PUSH EAX                            ; 004e4bf2
    MOV ESI,dword ptr [0x006138e0]      ; 004e4bf3 | g_CEditorToolsPtr
    PUSH ESI                            ; 004e4bf9
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 004e4bfa
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e4bff
    CMP dword ptr [0x01cee1a8],0x0      ; 004e4c02 | DAT_01cee1a8
        ;   Label: LAB_004e4c02
    JNZ 0x004e4dec                      ; 004e4c09
        ;   XREF to: 004e4dec (CONDITIONAL_JUMP)  ; LAB_004e4dec
    PUSH 0x5dc429                       ; 004e4c0f | = "opening.avi"
        ;   Label: LAB_004e4c0f
    PUSH 0x5dc435                       ; 004e4c14 | = "video"
    CALL wincore_winvideo.cpp_playMovie_FUN_00591190 ; 004e4c19
        ;   XREF to: 00591190 (UNCONDITIONAL_CALL)  ; int wincore_winvideo.cpp_playMovie_FUN_00591190(char * directory_path, char * movie_filename)
    ADD ESP,0x8                         ; 004e4c1e
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004e4c21
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    LEA EAX,[ESP + 0x500]               ; 004e4c26
    PUSH EAX                            ; 004e4c2d
    MOV ECX,dword ptr [0x01511cc0]      ; 004e4c2e | DAT_01511cc0
    PUSH ECX                            ; 004e4c34
    CALL engine_font.cpp_FUN_004aaf00   ; 004e4c35
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    ADD ESP,0x8                         ; 004e4c3a
    PUSH 0x58                           ; 004e4c3d
    MOV EBX,dword ptr [0x01511cc0]      ; 004e4c3f | DAT_01511cc0
    PUSH EBX                            ; 004e4c45
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004e4c46
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004e4c4b
    LEA EAX,[ESP + 0x700]               ; 004e4c4e
    PUSH EAX                            ; 004e4c55
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004e4c56
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e4c5b
    PUSH 0x1e0                          ; 004e4c5e
    PUSH 0x280                          ; 004e4c63
    PUSH 0x5dc43b                       ; 004e4c68 | = "test_logo"
    LEA EAX,[ESP + 0x70c]               ; 004e4c6d
    PUSH EAX                            ; 004e4c74
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004e4c75
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004e4c7a
    PUSH 0xffff                         ; 004e4c7d
    PUSH 0x0                            ; 004e4c82
    PUSH 0x0                            ; 004e4c84
    LEA EAX,[ESP + 0x70c]               ; 004e4c86
    PUSH EAX                            ; 004e4c8d
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004e4c8e
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004e4c93
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004e4c96
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    PUSH 0x0                            ; 004e4c9b
    LEA EAX,[ESP + 0x704]               ; 004e4c9d
    PUSH EAX                            ; 004e4ca4
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440 ; 004e4ca5
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e4caa
    MOV ESI,dword ptr [0x0061c068]      ; 004e4cad | DAT_0061c068
    PUSH ESI                            ; 004e4cb3
    CALL core_sound.cpp_FUN_0055a100    ; 004e4cb4
        ;   XREF to: 0055a100 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055a100(CSound * this_ptr)
    ADD ESP,0x4                         ; 004e4cb9
    MOV EDI,dword ptr [0x00618170]      ; 004e4cbc | DAT_00618170
    PUSH EDI                            ; 004e4cc2
    XOR EBX,EBX                         ; 004e4cc3
    XOR ESI,ESI                         ; 004e4cc5
    CALL core_mission.cpp_FUN_004fb380  ; 004e4cc7
        ;   XREF to: 004fb380 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fb380()
    ADD ESP,0x4                         ; 004e4ccc
    MOV dword ptr [ESP + 0x714],EBX     ; 004e4ccf
        ;   Label: LAB_004e4ccf
    FILD dword ptr [ESP + 0x714]        ; 004e4cd6
    FMUL double ptr [0x005dc485]        ; 004e4cdd | DAT_005dc485
    PUSH 0x0                            ; 004e4ce3
    FADD double ptr [0x005dc485]        ; 004e4ce5 | DAT_005dc485
    SUB ESP,0x4                         ; 004e4ceb
    FSTP float ptr [ESP]                ; 004e4cee
    MOV EAX,dword ptr [ESI + 0x60a084]  ; 004e4cf1 | g_GlobalFilters | DAT_0060a088
    PUSH EAX                            ; 004e4cf7
    ADD ESI,0x4                         ; 004e4cf8
    INC EBX                             ; 004e4cfb
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_00447ad0 ; 004e4cfc
        ;   XREF to: 00447ad0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_00447ad0(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 004e4d01
    CMP EBX,0x8                         ; 004e4d04
    JL 0x004e4ccf                       ; 004e4d07
        ;   XREF to: 004e4ccf (CONDITIONAL_JUMP)  ; LAB_004e4ccf
    XOR ESI,ESI                         ; 004e4d09
    XOR EBX,EBX                         ; 004e4d0b
    MOV dword ptr [ESP + 0x714],ESI     ; 004e4d0d
        ;   Label: LAB_004e4d0d
    MOV EAX,dword ptr [EBX + 0x60a0a4]  ; 004e4d14 | g_PlayerFilters | DAT_0060a0a8
    FILD dword ptr [ESP + 0x714]        ; 004e4d1a
    MOV dword ptr [EAX],0x100           ; 004e4d21 | CDemonFilter_ARRAY_01510e18 | CDemonFilter_ARRAY_01510e18[1].size
    FMUL double ptr [0x005dc48d]        ; 004e4d27 | DAT_005dc48d
    MOV EAX,dword ptr [EBX + 0x60a0a4]  ; 004e4d2d | g_PlayerFilters | DAT_0060a0a8
    PUSH 0x0                            ; 004e4d33
    MOV dword ptr [EAX + 0x4],0x100     ; 004e4d35 | CDemonFilter_ARRAY_01510e18[0].count | CDemonFilter_ARRAY_01510e18[1].count
    FADD double ptr [0x005dc48d]        ; 004e4d3c | DAT_005dc48d
    SUB ESP,0x4                         ; 004e4d42
    FSTP float ptr [ESP]                ; 004e4d45
    MOV EDX,dword ptr [EBX + 0x60a0a4]  ; 004e4d48 | g_PlayerFilters | DAT_0060a0a8
    PUSH EDX                            ; 004e4d4e | CDemonFilter_ARRAY_01510e18 | CDemonFilter_ARRAY_01510e18[1].size
    ADD EBX,0x4                         ; 004e4d4f
    INC ESI                             ; 004e4d52
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_00447ad0 ; 004e4d53
        ;   XREF to: 00447ad0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_00447ad0(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 004e4d58
    CMP ESI,0x4                         ; 004e4d5b
    JL 0x004e4d0d                       ; 004e4d5e
        ;   XREF to: 004e4d0d (CONDITIONAL_JUMP)  ; LAB_004e4d0d
    MOV ECX,dword ptr [0x0061b2a0]      ; 004e4d60 | g_CMousePtr
    PUSH ECX                            ; 004e4d66
    CALL engine_ncursfx.cpp_CMouse_load_FUN_005100b0 ; 004e4d67
        ;   XREF to: 005100b0 (UNCONDITIONAL_CALL)  ; void engine_ncursfx.cpp_CMouse_load_FUN_005100b0(CMouse * this_ptr)
    ADD ESP,0x4                         ; 004e4d6c
    MOV EBX,dword ptr [0x0061b120]      ; 004e4d6f | g_CNetGamePtr
    PUSH EBX                            ; 004e4d75 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_init_FUN_0050b340 ; 004e4d76
        ;   XREF to: 0050b340 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_init_FUN_0050b340(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004e4d7b
    CALL core_zombie.cpp_FUN_0059abb0   ; 004e4d7e
        ;   XREF to: 0059abb0 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_FUN_0059abb0()
    PUSH 0x5dc445                       ; 004e4d83 | DAT_005dc445
    PUSH 0x5dc447                       ; 004e4d88 | = "Flip on VBlank"
    PUSH 0x5dc456                       ; 004e4d8d | = "SOFTWARE\\Matrox\\PowerDesk\\Current ..."
    CALL wincore_winrun.cpp_setRegistryStringValue_FUN_0058ff40 ; 004e4d92
        ;   XREF to: 0058ff40 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setRegistryStringValue_FUN_0058ff40(char * key_path, char * value_name, char * value_data)
    ADD ESP,0xc                         ; 004e4d97
    MOV ESP,EBP                         ; 004e4d9a
    POP EBP                             ; 004e4d9c
    POP EDI                             ; 004e4d9d
    POP ESI                             ; 004e4d9e
    POP EBX                             ; 004e4d9f
    RET                                 ; 004e4da0
    PUSH EAX                            ; 004e4da1
        ;   Label: LAB_004e4da1
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004e4da2
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004e4da7
    PUSH 0x1c0                          ; 004e4daa
    PUSH 0x5dc198                       ; 004e4daf | = "stderr.txt"
    CALL crt_io.c__chmod_FUN_005b99e0   ; 004e4db4
        ;   XREF to: 005b99e0 (UNCONDITIONAL_CALL)  ; int crt_io.c__chmod_FUN_005b99e0(char * path, int mode)
    ADD ESP,0x8                         ; 004e4db9
    TEST EAX,EAX                        ; 004e4dbc
    JZ 0x004e4707                       ; 004e4dbe
        ;   XREF to: 004e4707 (CONDITIONAL_JUMP)  ; LAB_004e4707
    MOV ESI,0x5dc1a3                    ; 004e4dc4 | = "..\\core\\main.c"
    MOV EDI,0x3b5                       ; 004e4dc9
    PUSH 0x5dc1b2                       ; 004e4dce | = "Please copy Nocturne to your hard drive"
    MOV dword ptr [0x01d046a0],ESI      ; 004e4dd3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004e4dd9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004e4ddf
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004e4de4
    JMP 0x004e4707                      ; 004e4de7
        ;   XREF to: 004e4707 (UNCONDITIONAL_JUMP)  ; LAB_004e4707
    XOR EAX,EAX                         ; 004e4dec
        ;   Label: LAB_004e4dec
    MOV [0x01cee1a8],EAX                ; 004e4dee | DAT_01cee1a8
    MOV EAX,[0x00616494]                ; 004e4df3 | g_CGamePtr
    MOV dword ptr [EAX],0x280           ; 004e4df8 | g_CGameInstance
    XOR EDX,EDX                         ; 004e4dfe
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e4e00 | g_CGameInstance.game_pixy
    MOV dword ptr [0x0264bba0],EDX      ; 004e4e07 | DAT_0264bba0
    MOV dword ptr [EAX + 0x8],0x20      ; 004e4e0d | g_CGameInstance.game_bpp
    CALL core_menu.cpp_showCalibrationTest_FUN_004ebe30 ; 004e4e14
        ;   XREF to: 004ebe30 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTest_FUN_004ebe30()
    JMP 0x004e4c0f                      ; 004e4e19
        ;   XREF to: 004e4c0f (UNCONDITIONAL_JUMP)  ; LAB_004e4c0f

