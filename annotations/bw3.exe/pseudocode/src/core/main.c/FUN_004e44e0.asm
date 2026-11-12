; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_FUN_004e44e0(int argc,char **argv)
;
; Parameters:
; int              Stack[0x4]:4   argc
; char * *         Stack[0x8]:4   argv
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_00581080 at 005812ca
;
; Referenced Globals:
;   undefined4 DAT_005c6b99
;   TerminatedCString s_stderr_txt_005c6b9c
;   TerminatedCString s_stderr_txt_005c6ba7
;   TerminatedCString s_core_main_c_005c6bb2
;   TerminatedCString s_Please_copy_Blair_Witch_005c6bc1
;   undefined4 DAT_005c6bee
;   TerminatedCString s_stderr_txt_005c6bf1
;   TerminatedCString s_msglist_txt_005c6bfc
;   TerminatedCString s_core_main_c_005c6c08
;   TerminatedCString s_This_CPU_does_not_have_a_005c6c17
;   TerminatedCString s_core_main_c_005c6c3b
;   TerminatedCString s_Unable_to_set_640x480x32_005c6c4a
;   TerminatedCString s_Windows_is_reporting_005c6cdb
;   undefined4 DAT_005c6cf1
;   TerminatedCString s_MB_of_system_RAM_005c6cf6
;   ... and 70 more
;
; Called Functions:
;   core_bmppuzzl.cpp_FUN_004119e0
;   core_dfilter.cpp_CDemonFilter_init_FUN_00459b80
;   core_dfont.cpp_FUN_00459f50
;   core_flattn.cpp_FUN_004ad4c0
;   core_inivar.cpp_readIniData_FUN_004d8e70
;   core_main.c_FUN_004e4330
;   core_main.c_FUN_004e4d00
;   core_menu.cpp_showCalibrationTest_FUN_004e84d0
;   core_mission.cpp_FUN_004f5aa0
;   core_mmx.c_detectCPUFeatures_FUN_004f7c30
;   core_netgame.cpp_CNetGame_init_FUN_00503e20
;   core_sound.cpp_FUN_0055fc60
;   crt_io.c__chmod_FUN_005a4bd0
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e44e0
        ;   Label: core_main.c_FUN_004e44e0
    PUSH ESI                            ; 004e44e1
    PUSH EDI                            ; 004e44e2
    PUSH EBP                            ; 004e44e3
    MOV EBP,ESP                         ; 004e44e4
    SUB ESP,0x718                       ; 004e44e6
    AND ESP,0xfffffff8                  ; 004e44ec
    MOV ECX,0x10000                     ; 004e44ef
    PUSH 0x5c6b99                       ; 004e44f4 | DAT_005c6b99
    MOV EBX,0x1                         ; 004e44f9
    XOR EDX,EDX                         ; 004e44fe
    PUSH 0x5c6b9c                       ; 004e4500 | = "stderr.txt"
    MOV dword ptr [0x01c6e2b0],EDX      ; 004e4505 | DAT_01c6e2b0
    MOV dword ptr [0x0060683c],ECX      ; 004e450b | DAT_0060683c
    MOV dword ptr [0x00606830],EBX      ; 004e4511 | DAT_00606830
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 004e4517
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 004e451c
    TEST EAX,EAX                        ; 004e451f
    JNZ 0x004e4bf1                      ; 004e4521
        ;   XREF to: 004e4bf1 (CONDITIONAL_JUMP)  ; LAB_004e4bf1
    PUSH 0x6076ac                       ; 004e4527 | DAT_006076ac
        ;   Label: LAB_004e4527
    PUSH 0x5c6bee                       ; 004e452c | DAT_005c6bee
    PUSH 0x5c6bf1                       ; 004e4531 | = "stderr.txt"
    CALL crt_stdio.c_freopen_FUN_005a4484 ; 004e4536
        ;   XREF to: 005a4484 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_freopen_FUN_005a4484()
    ADD ESP,0xc                         ; 004e453b
    CALL core_flattn.cpp_FUN_004ad4c0   ; 004e453e
        ;   XREF to: 004ad4c0 (UNCONDITIONAL_CALL)  ; undefined core_flattn.cpp_FUN_004ad4c0()
    CALL core_inivar.cpp_readIniData_FUN_004d8e70 ; 004e4543
        ;   XREF to: 004d8e70 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_readIniData_FUN_004d8e70()
    MOV EDX,dword ptr [0x0060395c]      ; 004e4548 | g_CDemonPodPtr
    MOV EAX,0x2                         ; 004e454e
    PUSH EDX                            ; 004e4553
    MOV [0x02cf5fd8],EAX                ; 004e4554 | DAT_02cf5fd8
    CALL engine_pod.cpp_CPod_init_FUN_00514600 ; 004e4559
        ;   XREF to: 00514600 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_init_FUN_00514600(CPod * this_ptr)
    ADD ESP,0x4                         ; 004e455e
    PUSH 0x465730                       ; 004e4561
    CALL engine_dosio.cpp_addGetFileInfoHook_FUN_00465680 ; 004e4566
        ;   XREF to: 00465680 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_addGetFileInfoHook_FUN_00465680()
    ADD ESP,0x4                         ; 004e456b
    PUSH 0x515280                       ; 004e456e
    CALL engine_dosio.cpp_addGetFileInfoHook_FUN_00465680 ; 004e4573
        ;   XREF to: 00465680 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_addGetFileInfoHook_FUN_00465680()
    ADD ESP,0x4                         ; 004e4578
    PUSH 0x5c6bfc                       ; 004e457b | = "msglist.txt"
    CALL support_newmsg.cpp_readMessageFile_FUN_005084c0 ; 004e4580
        ;   XREF to: 005084c0 (UNCONDITIONAL_CALL)  ; void support_newmsg.cpp_readMessageFile_FUN_005084c0(char * message_file)
    ADD ESP,0x4                         ; 004e4585
    CALL core_mmx.c_detectCPUFeatures_FUN_004f7c30 ; 004e4588
        ;   XREF to: 004f7c30 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectCPUFeatures_FUN_004f7c30()
    CMP dword ptr [0x01c6e2a0],0x0      ; 004e458d | DAT_01c6e2a0
    JNZ 0x004e45c2                      ; 004e4594
        ;   XREF to: 004e45c2 (CONDITIONAL_JUMP)  ; LAB_004e45c2
    MOV EBX,0x5c6c08                    ; 004e4596 | = "..\\core\\main.c"
    MOV ESI,0x3df                       ; 004e459b
    PUSH 0x5c6c17                       ; 004e45a0 | = "This CPU does not have an MMX unit."
    MOV dword ptr [0x01d71de0],EBX      ; 004e45a5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004e45ab | DAT_01d71de4
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e45b1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e45b6
    PUSH EAX                            ; 004e45b9
    CALL core_main.c_FUN_004e4330       ; 004e45ba
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004e45bf
    CALL core_main.c_FUN_004e4d00       ; 004e45c2
        ;   XREF to: 004e4d00 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4d00()
        ;   Label: LAB_004e45c2
    CALL engine_3d.c_initTextureCache_FUN_00403790 ; 004e45c7
        ;   XREF to: 00403790 (UNCONDITIONAL_CALL)  ; CTextureCache * engine_3d.c_initTextureCache_FUN_00403790()
    CALL engine_2d.c_initGraphicsSystem_FUN_00401010 ; 004e45cc
        ;   XREF to: 00401010 (UNCONDITIONAL_CALL)  ; void engine_2d.c_initGraphicsSystem_FUN_00401010()
    CALL wincore_winrun.cpp_calibrateCPUSpeed_FUN_00580460 ; 004e45d1
        ;   XREF to: 00580460 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_calibrateCPUSpeed_FUN_00580460()
    CALL wincore_winrun.cpp_initJoystick_FUN_00581c80 ; 004e45d6
        ;   XREF to: 00581c80 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_initJoystick_FUN_00581c80()
    PUSH 0x20                           ; 004e45db
    PUSH 0x1e0                          ; 004e45dd
    PUSH 0x280                          ; 004e45e2
    CALL wincore_wddvmem.cpp_FUN_00579bb0 ; 004e45e7
        ;   XREF to: 00579bb0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00579bb0()
    ADD ESP,0xc                         ; 004e45ec
    TEST EAX,EAX                        ; 004e45ef
    JNZ 0x004e4615                      ; 004e45f1
        ;   XREF to: 004e4615 (CONDITIONAL_JUMP)  ; LAB_004e4615
    MOV EDI,0x5c6c3b                    ; 004e45f3 | = "..\\core\\main.c"
    MOV EAX,0x3f7                       ; 004e45f8
    PUSH 0x5c6c4a                       ; 004e45fd | = "Unable to set 640x480x32bpp.  Please ..."
    MOV dword ptr [0x01d71de0],EDI      ; 004e4602 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004e4608 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004e460d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004e4612
    CALL core_dfont.cpp_FUN_00459f50    ; 004e4615
        ;   XREF to: 00459f50 (UNCONDITIONAL_CALL)  ; undefined core_dfont.cpp_FUN_00459f50()
        ;   Label: LAB_004e4615
    CMP dword ptr [0x02d21b88],0x3c00000 ; 004e461a | DAT_02d21b88
    JGE 0x004e4898                      ; 004e4624
        ;   XREF to: 004e4898 (CONDITIONAL_JUMP)  ; LAB_004e4898
    PUSH 0x5c6cdb                       ; 004e462a | = "Windows is reporting "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e462f
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e4634
    LEA EDI,[ESP + 0x200]               ; 004e4637
    MOV ESI,EAX                         ; 004e463e
    PUSH EDI                            ; 004e4640
    MOV AL,byte ptr [ESI]               ; 004e4641
        ;   Label: LAB_004e4641
    MOV byte ptr [EDI],AL               ; 004e4643
    CMP AL,0x0                          ; 004e4645
    JZ 0x004e4659                       ; 004e4647
        ;   XREF to: 004e4659 (CONDITIONAL_JUMP)  ; LAB_004e4659
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4649
    ADD ESI,0x2                         ; 004e464c
    MOV byte ptr [EDI + 0x1],AL         ; 004e464f
    ADD EDI,0x2                         ; 004e4652
    CMP AL,0x0                          ; 004e4655
    JNZ 0x004e4641                      ; 004e4657
        ;   XREF to: 004e4641 (CONDITIONAL_JUMP)  ; LAB_004e4641
    POP EDI                             ; 004e4659
        ;   Label: LAB_004e4659
    FILD dword ptr [0x02d21b88]         ; 004e465a | DAT_02d21b88
    FMUL float ptr [0x005c6ea6]         ; 004e4660 | DAT_005c6ea6
    SUB ESP,0x8                         ; 004e4666
    FSTP double ptr [ESP]               ; 004e4669
    PUSH 0x5c6cf1                       ; 004e466c | DAT_005c6cf1
    LEA EAX,[ESP + 0x40c]               ; 004e4671
    PUSH EAX                            ; 004e4678
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e4679
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004e467e
    LEA ESI,[ESP + 0x400]               ; 004e4681
    LEA EDI,[ESP + 0x200]               ; 004e4688
    PUSH EDI                            ; 004e468f
    SUB ECX,ECX                         ; 004e4690
    DEC ECX                             ; 004e4692
    MOV AL,0x0                          ; 004e4693
    SCASB.REPNE ES:EDI                  ; 004e4695
    DEC EDI                             ; 004e4697
    MOV AL,byte ptr [ESI]               ; 004e4698
        ;   Label: LAB_004e4698
    MOV byte ptr [EDI],AL               ; 004e469a
    CMP AL,0x0                          ; 004e469c
    JZ 0x004e46b0                       ; 004e469e
        ;   XREF to: 004e46b0 (CONDITIONAL_JUMP)  ; LAB_004e46b0
    MOV AL,byte ptr [ESI + 0x1]         ; 004e46a0
    ADD ESI,0x2                         ; 004e46a3
    MOV byte ptr [EDI + 0x1],AL         ; 004e46a6
    ADD EDI,0x2                         ; 004e46a9
    CMP AL,0x0                          ; 004e46ac
    JNZ 0x004e4698                      ; 004e46ae
        ;   XREF to: 004e4698 (CONDITIONAL_JUMP)  ; LAB_004e4698
    POP EDI                             ; 004e46b0
        ;   Label: LAB_004e46b0
    PUSH 0x5c6cf6                       ; 004e46b1 | = "MB of system RAM."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e46b6
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e46bb
    LEA EDI,[ESP + 0x200]               ; 004e46be
    MOV ESI,EAX                         ; 004e46c5
    PUSH EDI                            ; 004e46c7
    SUB ECX,ECX                         ; 004e46c8
    DEC ECX                             ; 004e46ca
    MOV AL,0x0                          ; 004e46cb
    SCASB.REPNE ES:EDI                  ; 004e46cd
    DEC EDI                             ; 004e46cf
    MOV AL,byte ptr [ESI]               ; 004e46d0
        ;   Label: LAB_004e46d0
    MOV byte ptr [EDI],AL               ; 004e46d2
    CMP AL,0x0                          ; 004e46d4
    JZ 0x004e46e8                       ; 004e46d6
        ;   XREF to: 004e46e8 (CONDITIONAL_JUMP)  ; LAB_004e46e8
    MOV AL,byte ptr [ESI + 0x1]         ; 004e46d8
    ADD ESI,0x2                         ; 004e46db
    MOV byte ptr [EDI + 0x1],AL         ; 004e46de
    ADD EDI,0x2                         ; 004e46e1
    CMP AL,0x0                          ; 004e46e4
    JNZ 0x004e46d0                      ; 004e46e6
        ;   XREF to: 004e46d0 (CONDITIONAL_JUMP)  ; LAB_004e46d0
    POP EDI                             ; 004e46e8
        ;   Label: LAB_004e46e8
    MOV ESI,0x5c6d08                    ; 004e46e9 | DAT_005c6d08
    LEA EDI,[ESP + 0x200]               ; 004e46ee
    PUSH EDI                            ; 004e46f5
    SUB ECX,ECX                         ; 004e46f6
    DEC ECX                             ; 004e46f8
    MOV AL,0x0                          ; 004e46f9
    SCASB.REPNE ES:EDI                  ; 004e46fb
    DEC EDI                             ; 004e46fd
    MOV AL,byte ptr [ESI]               ; 004e46fe | DAT_005c6d08 | = "Blair Witch 3 requires at least 64MB ..."
        ;   Label: LAB_004e46fe
    MOV byte ptr [EDI],AL               ; 004e4700
    CMP AL,0x0                          ; 004e4702
    JZ 0x004e4716                       ; 004e4704
        ;   XREF to: 004e4716 (CONDITIONAL_JUMP)  ; LAB_004e4716
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4706 | DAT_005c6d09 | s_Blair_Witch_3_requires_a_005c6d0a+1
    ADD ESI,0x2                         ; 004e4709
    MOV byte ptr [EDI + 0x1],AL         ; 004e470c
    ADD EDI,0x2                         ; 004e470f
    CMP AL,0x0                          ; 004e4712
    JNZ 0x004e46fe                      ; 004e4714
        ;   XREF to: 004e46fe (CONDITIONAL_JUMP)  ; LAB_004e46fe
    POP EDI                             ; 004e4716
        ;   Label: LAB_004e4716
    PUSH 0x5c6d0a                       ; 004e4717 | = "Blair Witch 3 requires at least 64MB ..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e471c
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e4721
    LEA EDI,[ESP + 0x200]               ; 004e4724
    MOV ESI,EAX                         ; 004e472b
    PUSH EDI                            ; 004e472d
    SUB ECX,ECX                         ; 004e472e
    DEC ECX                             ; 004e4730
    MOV AL,0x0                          ; 004e4731
    SCASB.REPNE ES:EDI                  ; 004e4733
    DEC EDI                             ; 004e4735
    MOV AL,byte ptr [ESI]               ; 004e4736
        ;   Label: LAB_004e4736
    MOV byte ptr [EDI],AL               ; 004e4738
    CMP AL,0x0                          ; 004e473a
    JZ 0x004e474e                       ; 004e473c
        ;   XREF to: 004e474e (CONDITIONAL_JUMP)  ; LAB_004e474e
    MOV AL,byte ptr [ESI + 0x1]         ; 004e473e
    ADD ESI,0x2                         ; 004e4741
    MOV byte ptr [EDI + 0x1],AL         ; 004e4744
    ADD EDI,0x2                         ; 004e4747
    CMP AL,0x0                          ; 004e474a
    JNZ 0x004e4736                      ; 004e474c
        ;   XREF to: 004e4736 (CONDITIONAL_JUMP)  ; LAB_004e4736
    POP EDI                             ; 004e474e
        ;   Label: LAB_004e474e
    MOV ESI,0x5c6d3e                    ; 004e474f | DAT_005c6d3e
    LEA EDI,[ESP + 0x200]               ; 004e4754
    PUSH EDI                            ; 004e475b
    SUB ECX,ECX                         ; 004e475c
    DEC ECX                             ; 004e475e
    MOV AL,0x0                          ; 004e475f
    SCASB.REPNE ES:EDI                  ; 004e4761
    DEC EDI                             ; 004e4763
    MOV AL,byte ptr [ESI]               ; 004e4764 | DAT_005c6d3e | = "If you think you have at least 64MB o..."
        ;   Label: LAB_004e4764
    MOV byte ptr [EDI],AL               ; 004e4766
    CMP AL,0x0                          ; 004e4768
    JZ 0x004e477c                       ; 004e476a
        ;   XREF to: 004e477c (CONDITIONAL_JUMP)  ; LAB_004e477c
    MOV AL,byte ptr [ESI + 0x1]         ; 004e476c | DAT_005c6d3f | s_If_you_think_you_have_at_005c6d40+1
    ADD ESI,0x2                         ; 004e476f
    MOV byte ptr [EDI + 0x1],AL         ; 004e4772
    ADD EDI,0x2                         ; 004e4775
    CMP AL,0x0                          ; 004e4778
    JNZ 0x004e4764                      ; 004e477a
        ;   XREF to: 004e4764 (CONDITIONAL_JUMP)  ; LAB_004e4764
    POP EDI                             ; 004e477c
        ;   Label: LAB_004e477c
    PUSH 0x5c6d40                       ; 004e477d | = "If you think you have at least 64MB o..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e4782
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e4787
    LEA EDI,[ESP + 0x200]               ; 004e478a
    MOV ESI,EAX                         ; 004e4791
    PUSH EDI                            ; 004e4793
    SUB ECX,ECX                         ; 004e4794
    DEC ECX                             ; 004e4796
    MOV AL,0x0                          ; 004e4797
    SCASB.REPNE ES:EDI                  ; 004e4799
    DEC EDI                             ; 004e479b
    MOV AL,byte ptr [ESI]               ; 004e479c
        ;   Label: LAB_004e479c
    MOV byte ptr [EDI],AL               ; 004e479e
    CMP AL,0x0                          ; 004e47a0
    JZ 0x004e47b4                       ; 004e47a2
        ;   XREF to: 004e47b4 (CONDITIONAL_JUMP)  ; LAB_004e47b4
    MOV AL,byte ptr [ESI + 0x1]         ; 004e47a4
    ADD ESI,0x2                         ; 004e47a7
    MOV byte ptr [EDI + 0x1],AL         ; 004e47aa
    ADD EDI,0x2                         ; 004e47ad
    CMP AL,0x0                          ; 004e47b0
    JNZ 0x004e479c                      ; 004e47b2
        ;   XREF to: 004e479c (CONDITIONAL_JUMP)  ; LAB_004e479c
    POP EDI                             ; 004e47b4
        ;   Label: LAB_004e47b4
    MOV ESI,0x5c6d72                    ; 004e47b5 | DAT_005c6d72
    LEA EDI,[ESP + 0x200]               ; 004e47ba
    PUSH EDI                            ; 004e47c1
    SUB ECX,ECX                         ; 004e47c2
    DEC ECX                             ; 004e47c4
    MOV AL,0x0                          ; 004e47c5
    SCASB.REPNE ES:EDI                  ; 004e47c7
    DEC EDI                             ; 004e47c9
    MOV AL,byte ptr [ESI]               ; 004e47ca | DAT_005c6d72 | = "then ignore this message."
        ;   Label: LAB_004e47ca
    MOV byte ptr [EDI],AL               ; 004e47cc
    CMP AL,0x0                          ; 004e47ce
    JZ 0x004e47e2                       ; 004e47d0
        ;   XREF to: 004e47e2 (CONDITIONAL_JUMP)  ; LAB_004e47e2
    MOV AL,byte ptr [ESI + 0x1]         ; 004e47d2 | DAT_005c6d73 | s_then_ignore_this_message_005c6d74+1
    ADD ESI,0x2                         ; 004e47d5
    MOV byte ptr [EDI + 0x1],AL         ; 004e47d8
    ADD EDI,0x2                         ; 004e47db
    CMP AL,0x0                          ; 004e47de
    JNZ 0x004e47ca                      ; 004e47e0
        ;   XREF to: 004e47ca (CONDITIONAL_JUMP)  ; LAB_004e47ca
    POP EDI                             ; 004e47e2
        ;   Label: LAB_004e47e2
    PUSH 0x5c6d74                       ; 004e47e3 | = "then ignore this message."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e47e8
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e47ed
    LEA EDI,[ESP + 0x200]               ; 004e47f0
    MOV ESI,EAX                         ; 004e47f7
    PUSH EDI                            ; 004e47f9
    SUB ECX,ECX                         ; 004e47fa
    DEC ECX                             ; 004e47fc
    MOV AL,0x0                          ; 004e47fd
    SCASB.REPNE ES:EDI                  ; 004e47ff
    DEC EDI                             ; 004e4801
    MOV AL,byte ptr [ESI]               ; 004e4802
        ;   Label: LAB_004e4802
    MOV byte ptr [EDI],AL               ; 004e4804
    CMP AL,0x0                          ; 004e4806
    JZ 0x004e481a                       ; 004e4808
        ;   XREF to: 004e481a (CONDITIONAL_JUMP)  ; LAB_004e481a
    MOV AL,byte ptr [ESI + 0x1]         ; 004e480a
    ADD ESI,0x2                         ; 004e480d
    MOV byte ptr [EDI + 0x1],AL         ; 004e4810
    ADD EDI,0x2                         ; 004e4813
    CMP AL,0x0                          ; 004e4816
    JNZ 0x004e4802                      ; 004e4818
        ;   XREF to: 004e4802 (CONDITIONAL_JUMP)  ; LAB_004e4802
    POP EDI                             ; 004e481a
        ;   Label: LAB_004e481a
    MOV ESI,0x5c6d8e                    ; 004e481b | DAT_005c6d8e
    LEA EDI,[ESP + 0x200]               ; 004e4820
    PUSH EDI                            ; 004e4827
    SUB ECX,ECX                         ; 004e4828
    DEC ECX                             ; 004e482a
    MOV AL,0x0                          ; 004e482b
    SCASB.REPNE ES:EDI                  ; 004e482d
    DEC EDI                             ; 004e482f
    MOV AL,byte ptr [ESI]               ; 004e4830 | DAT_005c6d8e | = "See README.TXT for more information."
        ;   Label: LAB_004e4830
    MOV byte ptr [EDI],AL               ; 004e4832
    CMP AL,0x0                          ; 004e4834
    JZ 0x004e4848                       ; 004e4836
        ;   XREF to: 004e4848 (CONDITIONAL_JUMP)  ; LAB_004e4848
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4838 | DAT_005c6d8f | s_See_README_TXT_for_more_005c6d90+1
    ADD ESI,0x2                         ; 004e483b
    MOV byte ptr [EDI + 0x1],AL         ; 004e483e
    ADD EDI,0x2                         ; 004e4841
    CMP AL,0x0                          ; 004e4844
    JNZ 0x004e4830                      ; 004e4846
        ;   XREF to: 004e4830 (CONDITIONAL_JUMP)  ; LAB_004e4830
    POP EDI                             ; 004e4848
        ;   Label: LAB_004e4848
    PUSH 0x5c6d90                       ; 004e4849 | = "See README.TXT for more information."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e484e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e4853
    LEA EDI,[ESP + 0x200]               ; 004e4856
    MOV ESI,EAX                         ; 004e485d
    PUSH EDI                            ; 004e485f
    SUB ECX,ECX                         ; 004e4860
    DEC ECX                             ; 004e4862
    MOV AL,0x0                          ; 004e4863
    SCASB.REPNE ES:EDI                  ; 004e4865
    DEC EDI                             ; 004e4867
    MOV AL,byte ptr [ESI]               ; 004e4868
        ;   Label: LAB_004e4868
    MOV byte ptr [EDI],AL               ; 004e486a
    CMP AL,0x0                          ; 004e486c
    JZ 0x004e4880                       ; 004e486e
        ;   XREF to: 004e4880 (CONDITIONAL_JUMP)  ; LAB_004e4880
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4870
    ADD ESI,0x2                         ; 004e4873
    MOV byte ptr [EDI + 0x1],AL         ; 004e4876
    ADD EDI,0x2                         ; 004e4879
    CMP AL,0x0                          ; 004e487c
    JNZ 0x004e4868                      ; 004e487e
        ;   XREF to: 004e4868 (CONDITIONAL_JUMP)  ; LAB_004e4868
    POP EDI                             ; 004e4880
        ;   Label: LAB_004e4880
    LEA EAX,[ESP + 0x200]               ; 004e4881
    PUSH EAX                            ; 004e4888
    MOV ECX,dword ptr [0x005fb140]      ; 004e4889 | g_CEditorToolsPtr
    PUSH ECX                            ; 004e488f
    CALL shape_edittool.cpp_FUN_0047cee0 ; 004e4890
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047cee0()
    ADD ESP,0x8                         ; 004e4895
    CMP dword ptr [0x02d21b8c],0xc800000 ; 004e4898 | DAT_02d21b8c
        ;   Label: LAB_004e4898
    JGE 0x004e4a22                      ; 004e48a2
        ;   XREF to: 004e4a22 (CONDITIONAL_JUMP)  ; LAB_004e4a22
    PUSH 0x5c6db5                       ; 004e48a8 | = "Windows is reporting "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e48ad
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e48b2
    MOV EDI,ESP                         ; 004e48b5
    MOV ESI,EAX                         ; 004e48b7
    PUSH EDI                            ; 004e48b9
    MOV AL,byte ptr [ESI]               ; 004e48ba
        ;   Label: LAB_004e48ba
    MOV byte ptr [EDI],AL               ; 004e48bc
    CMP AL,0x0                          ; 004e48be
    JZ 0x004e48d2                       ; 004e48c0
        ;   XREF to: 004e48d2 (CONDITIONAL_JUMP)  ; LAB_004e48d2
    MOV AL,byte ptr [ESI + 0x1]         ; 004e48c2
    ADD ESI,0x2                         ; 004e48c5
    MOV byte ptr [EDI + 0x1],AL         ; 004e48c8
    ADD EDI,0x2                         ; 004e48cb
    CMP AL,0x0                          ; 004e48ce
    JNZ 0x004e48ba                      ; 004e48d0
        ;   XREF to: 004e48ba (CONDITIONAL_JUMP)  ; LAB_004e48ba
    POP EDI                             ; 004e48d2
        ;   Label: LAB_004e48d2
    FILD dword ptr [0x02d21b8c]         ; 004e48d3 | DAT_02d21b8c
    FMUL float ptr [0x005c6ea6]         ; 004e48d9 | DAT_005c6ea6
    SUB ESP,0x8                         ; 004e48df
    FSTP double ptr [ESP]               ; 004e48e2
    PUSH 0x5c6dcb                       ; 004e48e5 | DAT_005c6dcb
    LEA EAX,[ESP + 0x60c]               ; 004e48ea
    PUSH EAX                            ; 004e48f1
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e48f2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004e48f7
    LEA ESI,[ESP + 0x600]               ; 004e48fa
    MOV EDI,ESP                         ; 004e4901
    PUSH EDI                            ; 004e4903
    SUB ECX,ECX                         ; 004e4904
    DEC ECX                             ; 004e4906
    MOV AL,0x0                          ; 004e4907
    SCASB.REPNE ES:EDI                  ; 004e4909
    DEC EDI                             ; 004e490b
    MOV AL,byte ptr [ESI]               ; 004e490c
        ;   Label: LAB_004e490c
    MOV byte ptr [EDI],AL               ; 004e490e
    CMP AL,0x0                          ; 004e4910
    JZ 0x004e4924                       ; 004e4912
        ;   XREF to: 004e4924 (CONDITIONAL_JUMP)  ; LAB_004e4924
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4914
    ADD ESI,0x2                         ; 004e4917
    MOV byte ptr [EDI + 0x1],AL         ; 004e491a
    ADD EDI,0x2                         ; 004e491d
    CMP AL,0x0                          ; 004e4920
    JNZ 0x004e490c                      ; 004e4922
        ;   XREF to: 004e490c (CONDITIONAL_JUMP)  ; LAB_004e490c
    POP EDI                             ; 004e4924
        ;   Label: LAB_004e4924
    PUSH 0x5c6dd0                       ; 004e4925 | = "MB of free swap disk space."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e492a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e492f
    MOV EDI,ESP                         ; 004e4932
    MOV ESI,EAX                         ; 004e4934
    PUSH EDI                            ; 004e4936
    SUB ECX,ECX                         ; 004e4937
    DEC ECX                             ; 004e4939
    MOV AL,0x0                          ; 004e493a
    SCASB.REPNE ES:EDI                  ; 004e493c
    DEC EDI                             ; 004e493e
    MOV AL,byte ptr [ESI]               ; 004e493f
        ;   Label: LAB_004e493f
    MOV byte ptr [EDI],AL               ; 004e4941
    CMP AL,0x0                          ; 004e4943
    JZ 0x004e4957                       ; 004e4945
        ;   XREF to: 004e4957 (CONDITIONAL_JUMP)  ; LAB_004e4957
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4947
    ADD ESI,0x2                         ; 004e494a
    MOV byte ptr [EDI + 0x1],AL         ; 004e494d
    ADD EDI,0x2                         ; 004e4950
    CMP AL,0x0                          ; 004e4953
    JNZ 0x004e493f                      ; 004e4955
        ;   XREF to: 004e493f (CONDITIONAL_JUMP)  ; LAB_004e493f
    POP EDI                             ; 004e4957
        ;   Label: LAB_004e4957
    MOV ESI,0x5c6dec                    ; 004e4958 | DAT_005c6dec
    MOV EDI,ESP                         ; 004e495d
    PUSH EDI                            ; 004e495f
    SUB ECX,ECX                         ; 004e4960
    DEC ECX                             ; 004e4962
    MOV AL,0x0                          ; 004e4963
    SCASB.REPNE ES:EDI                  ; 004e4965
    DEC EDI                             ; 004e4967
    MOV AL,byte ptr [ESI]               ; 004e4968 | DAT_005c6dec | = "Blair Witch 3 runs best with at least..."
        ;   Label: LAB_004e4968
    MOV byte ptr [EDI],AL               ; 004e496a
    CMP AL,0x0                          ; 004e496c
    JZ 0x004e4980                       ; 004e496e
        ;   XREF to: 004e4980 (CONDITIONAL_JUMP)  ; LAB_004e4980
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4970 | DAT_005c6ded | s_Blair_Witch_3_runs_best_005c6dee+1
    ADD ESI,0x2                         ; 004e4973
    MOV byte ptr [EDI + 0x1],AL         ; 004e4976
    ADD EDI,0x2                         ; 004e4979
    CMP AL,0x0                          ; 004e497c
    JNZ 0x004e4968                      ; 004e497e
        ;   XREF to: 004e4968 (CONDITIONAL_JUMP)  ; LAB_004e4968
    POP EDI                             ; 004e4980
        ;   Label: LAB_004e4980
    PUSH 0x5c6dee                       ; 004e4981 | = "Blair Witch 3 runs best with at least..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e4986
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e498b
    MOV EDI,ESP                         ; 004e498e
    MOV ESI,EAX                         ; 004e4990
    PUSH EDI                            ; 004e4992
    SUB ECX,ECX                         ; 004e4993
    DEC ECX                             ; 004e4995
    MOV AL,0x0                          ; 004e4996
    SCASB.REPNE ES:EDI                  ; 004e4998
    DEC EDI                             ; 004e499a
    MOV AL,byte ptr [ESI]               ; 004e499b
        ;   Label: LAB_004e499b
    MOV byte ptr [EDI],AL               ; 004e499d
    CMP AL,0x0                          ; 004e499f
    JZ 0x004e49b3                       ; 004e49a1
        ;   XREF to: 004e49b3 (CONDITIONAL_JUMP)  ; LAB_004e49b3
    MOV AL,byte ptr [ESI + 0x1]         ; 004e49a3
    ADD ESI,0x2                         ; 004e49a6
    MOV byte ptr [EDI + 0x1],AL         ; 004e49a9
    ADD EDI,0x2                         ; 004e49ac
    CMP AL,0x0                          ; 004e49af
    JNZ 0x004e499b                      ; 004e49b1
        ;   XREF to: 004e499b (CONDITIONAL_JUMP)  ; LAB_004e499b
    POP EDI                             ; 004e49b3
        ;   Label: LAB_004e49b3
    MOV ESI,0x5c6e20                    ; 004e49b4 | DAT_005c6e20
    MOV EDI,ESP                         ; 004e49b9
    PUSH EDI                            ; 004e49bb
    SUB ECX,ECX                         ; 004e49bc
    DEC ECX                             ; 004e49be
    MOV AL,0x0                          ; 004e49bf
    SCASB.REPNE ES:EDI                  ; 004e49c1
    DEC EDI                             ; 004e49c3
    MOV AL,byte ptr [ESI]               ; 004e49c4 | DAT_005c6e20 | = "See README.TXT for more information."
        ;   Label: LAB_004e49c4
    MOV byte ptr [EDI],AL               ; 004e49c6
    CMP AL,0x0                          ; 004e49c8
    JZ 0x004e49dc                       ; 004e49ca
        ;   XREF to: 004e49dc (CONDITIONAL_JUMP)  ; LAB_004e49dc
    MOV AL,byte ptr [ESI + 0x1]         ; 004e49cc | DAT_005c6e21 | s_See_README_TXT_for_more_005c6e22+1
    ADD ESI,0x2                         ; 004e49cf
    MOV byte ptr [EDI + 0x1],AL         ; 004e49d2
    ADD EDI,0x2                         ; 004e49d5
    CMP AL,0x0                          ; 004e49d8
    JNZ 0x004e49c4                      ; 004e49da
        ;   XREF to: 004e49c4 (CONDITIONAL_JUMP)  ; LAB_004e49c4
    POP EDI                             ; 004e49dc
        ;   Label: LAB_004e49dc
    PUSH 0x5c6e22                       ; 004e49dd | = "See README.TXT for more information."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e49e2
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e49e7
    MOV EDI,ESP                         ; 004e49ea
    MOV ESI,EAX                         ; 004e49ec
    PUSH EDI                            ; 004e49ee
    SUB ECX,ECX                         ; 004e49ef
    DEC ECX                             ; 004e49f1
    MOV AL,0x0                          ; 004e49f2
    SCASB.REPNE ES:EDI                  ; 004e49f4
    DEC EDI                             ; 004e49f6
    MOV AL,byte ptr [ESI]               ; 004e49f7
        ;   Label: LAB_004e49f7
    MOV byte ptr [EDI],AL               ; 004e49f9
    CMP AL,0x0                          ; 004e49fb
    JZ 0x004e4a0f                       ; 004e49fd
        ;   XREF to: 004e4a0f (CONDITIONAL_JUMP)  ; LAB_004e4a0f
    MOV AL,byte ptr [ESI + 0x1]         ; 004e49ff
    ADD ESI,0x2                         ; 004e4a02
    MOV byte ptr [EDI + 0x1],AL         ; 004e4a05
    ADD EDI,0x2                         ; 004e4a08
    CMP AL,0x0                          ; 004e4a0b
    JNZ 0x004e49f7                      ; 004e4a0d
        ;   XREF to: 004e49f7 (CONDITIONAL_JUMP)  ; LAB_004e49f7
    POP EDI                             ; 004e4a0f
        ;   Label: LAB_004e4a0f
    MOV EAX,ESP                         ; 004e4a10
    PUSH EAX                            ; 004e4a12
    MOV ESI,dword ptr [0x005fb140]      ; 004e4a13 | g_CEditorToolsPtr
    PUSH ESI                            ; 004e4a19
    CALL shape_edittool.cpp_FUN_0047cee0 ; 004e4a1a
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047cee0()
    ADD ESP,0x8                         ; 004e4a1f
    CMP dword ptr [0x01d5bc7c],0x0      ; 004e4a22 | DAT_01d5bc7c
        ;   Label: LAB_004e4a22
    JNZ 0x004e4c3c                      ; 004e4a29
        ;   XREF to: 004e4c3c (CONDITIONAL_JUMP)  ; LAB_004e4c3c
    PUSH 0x5c6e47                       ; 004e4a2f | = "opening.avi"
        ;   Label: LAB_004e4a2f
    PUSH 0x5c6e53                       ; 004e4a34 | = "video"
    CALL wincore_winvideo.cpp_playMovie_FUN_00582eb0 ; 004e4a39
        ;   XREF to: 00582eb0 (UNCONDITIONAL_CALL)  ; int wincore_winvideo.cpp_playMovie_FUN_00582eb0(char * directory_path, char * movie_filename)
    ADD ESP,0x8                         ; 004e4a3e
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 004e4a41
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    PUSH 0x5c6e59                       ; 004e4a46 | = "Loading..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e4a4b
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e4a50
    LEA EDI,[ESP + 0x500]               ; 004e4a53
    MOV ESI,EAX                         ; 004e4a5a
    PUSH EDI                            ; 004e4a5c
    MOV AL,byte ptr [ESI]               ; 004e4a5d
        ;   Label: LAB_004e4a5d
    MOV byte ptr [EDI],AL               ; 004e4a5f
    CMP AL,0x0                          ; 004e4a61
    JZ 0x004e4a75                       ; 004e4a63
        ;   XREF to: 004e4a75 (CONDITIONAL_JUMP)  ; LAB_004e4a75
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4a65
    ADD ESI,0x2                         ; 004e4a68
    MOV byte ptr [EDI + 0x1],AL         ; 004e4a6b
    ADD EDI,0x2                         ; 004e4a6e
    CMP AL,0x0                          ; 004e4a71
    JNZ 0x004e4a5d                      ; 004e4a73
        ;   XREF to: 004e4a5d (CONDITIONAL_JUMP)  ; LAB_004e4a5d
    POP EDI                             ; 004e4a75
        ;   Label: LAB_004e4a75
    LEA EAX,[ESP + 0x500]               ; 004e4a76
    PUSH EAX                            ; 004e4a7d
    MOV ECX,dword ptr [0x01549aa8]      ; 004e4a7e | DAT_01549aa8
    PUSH ECX                            ; 004e4a84
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004e4a85
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004e4a8a
    PUSH 0x58                           ; 004e4a8d
    MOV EBX,dword ptr [0x01549aa8]      ; 004e4a8f | DAT_01549aa8
    PUSH EBX                            ; 004e4a95
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 004e4a96
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004e4a9b
    LEA EAX,[ESP + 0x700]               ; 004e4a9e
    PUSH EAX                            ; 004e4aa5
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004e4aa6
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e4aab
    PUSH 0x1e0                          ; 004e4aae
    PUSH 0x280                          ; 004e4ab3
    PUSH 0x5c6e64                       ; 004e4ab8 | = "fangs"
    LEA EAX,[ESP + 0x70c]               ; 004e4abd
    PUSH EAX                            ; 004e4ac4
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004e4ac5
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004e4aca
    PUSH 0x8000                         ; 004e4acd
    PUSH 0x0                            ; 004e4ad2
    PUSH 0x0                            ; 004e4ad4
    LEA EAX,[ESP + 0x70c]               ; 004e4ad6
    PUSH EAX                            ; 004e4add
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004e4ade
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004e4ae3
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 004e4ae6
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    PUSH 0x0                            ; 004e4aeb
    LEA EAX,[ESP + 0x704]               ; 004e4aed
    PUSH EAX                            ; 004e4af4
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 004e4af5
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e4afa
    MOV ESI,dword ptr [0x006045f8]      ; 004e4afd | DAT_006045f8
    PUSH ESI                            ; 004e4b03
    CALL core_sound.cpp_FUN_0055fc60    ; 004e4b04
        ;   XREF to: 0055fc60 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055fc60(CSound * this_ptr)
    ADD ESP,0x4                         ; 004e4b09
    MOV EDI,dword ptr [0x00600530]      ; 004e4b0c | DAT_00600530
    PUSH EDI                            ; 004e4b12 | DAT_01d81080
    XOR EBX,EBX                         ; 004e4b13
    XOR ESI,ESI                         ; 004e4b15
    CALL core_mission.cpp_FUN_004f5aa0  ; 004e4b17
        ;   XREF to: 004f5aa0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f5aa0()
    ADD ESP,0x4                         ; 004e4b1c
    MOV dword ptr [ESP + 0x714],EBX     ; 004e4b1f
        ;   Label: LAB_004e4b1f
    FILD dword ptr [ESP + 0x714]        ; 004e4b26
    FMUL double ptr [0x005c6eaa]        ; 004e4b2d | DAT_005c6eaa
    PUSH 0x0                            ; 004e4b33
    FADD double ptr [0x005c6eaa]        ; 004e4b35 | DAT_005c6eaa
    SUB ESP,0x4                         ; 004e4b3b
    FSTP float ptr [ESP]                ; 004e4b3e
    MOV EAX,dword ptr [ESI + 0x5f18dc]  ; 004e4b41 | g_GlobalFilters | DAT_005f18e0
    PUSH EAX                            ; 004e4b47
    ADD ESI,0x4                         ; 004e4b48
    INC EBX                             ; 004e4b4b
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_00459b80 ; 004e4b4c
        ;   XREF to: 00459b80 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_00459b80(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 004e4b51
    CMP EBX,0x8                         ; 004e4b54
    JL 0x004e4b1f                       ; 004e4b57
        ;   XREF to: 004e4b1f (CONDITIONAL_JUMP)  ; LAB_004e4b1f
    XOR ESI,ESI                         ; 004e4b59
    XOR EBX,EBX                         ; 004e4b5b
    MOV dword ptr [ESP + 0x714],ESI     ; 004e4b5d
        ;   Label: LAB_004e4b5d
    MOV EAX,dword ptr [EBX + 0x5f18fc]  ; 004e4b64 | g_PlayerFilters | DAT_005f1900
    FILD dword ptr [ESP + 0x714]        ; 004e4b6a
    MOV dword ptr [EAX],0x100           ; 004e4b71 | CDemonFilter_ARRAY_01548c00 | CDemonFilter_ARRAY_01548c00[1].size
    FMUL double ptr [0x005c6eb2]        ; 004e4b77 | DAT_005c6eb2
    MOV EAX,dword ptr [EBX + 0x5f18fc]  ; 004e4b7d | g_PlayerFilters | DAT_005f1900
    PUSH 0x0                            ; 004e4b83
    MOV dword ptr [EAX + 0x4],0x100     ; 004e4b85 | CDemonFilter_ARRAY_01548c00[0].count | CDemonFilter_ARRAY_01548c00[1].count
    FADD double ptr [0x005c6eb2]        ; 004e4b8c | DAT_005c6eb2
    SUB ESP,0x4                         ; 004e4b92
    FSTP float ptr [ESP]                ; 004e4b95
    MOV EDX,dword ptr [EBX + 0x5f18fc]  ; 004e4b98 | g_PlayerFilters | DAT_005f1900
    PUSH EDX                            ; 004e4b9e | CDemonFilter_ARRAY_01548c00 | CDemonFilter_ARRAY_01548c00[1].size
    ADD EBX,0x4                         ; 004e4b9f
    INC ESI                             ; 004e4ba2
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_00459b80 ; 004e4ba3
        ;   XREF to: 00459b80 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_00459b80(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 004e4ba8
    CMP ESI,0x4                         ; 004e4bab
    JL 0x004e4b5d                       ; 004e4bae
        ;   XREF to: 004e4b5d (CONDITIONAL_JUMP)  ; LAB_004e4b5d
    MOV ECX,dword ptr [0x006035d0]      ; 004e4bb0 | g_CMousePtr
    PUSH ECX                            ; 004e4bb6
    CALL engine_ncursfx.cpp_CMouse_load_FUN_00508b90 ; 004e4bb7
        ;   XREF to: 00508b90 (UNCONDITIONAL_CALL)  ; void engine_ncursfx.cpp_CMouse_load_FUN_00508b90(CMouse * this_ptr)
    ADD ESP,0x4                         ; 004e4bbc
    MOV EBX,dword ptr [0x00603450]      ; 004e4bbf | g_CNetGamePtr
    PUSH EBX                            ; 004e4bc5 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_init_FUN_00503e20 ; 004e4bc6
        ;   XREF to: 00503e20 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_init_FUN_00503e20(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004e4bcb
    CALL core_bmppuzzl.cpp_FUN_004119e0 ; 004e4bce
        ;   XREF to: 004119e0 (UNCONDITIONAL_CALL)  ; undefined core_bmppuzzl.cpp_FUN_004119e0()
    PUSH 0x5c6e6a                       ; 004e4bd3 | DAT_005c6e6a
    PUSH 0x5c6e6c                       ; 004e4bd8 | = "Flip on VBlank"
    PUSH 0x5c6e7b                       ; 004e4bdd | = "SOFTWARE\\Matrox\\PowerDesk\\Current ..."
    CALL wincore_winrun.cpp_setRegistryStringValue_FUN_00581bf0 ; 004e4be2
        ;   XREF to: 00581bf0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setRegistryStringValue_FUN_00581bf0(char * key_path, char * value_name, char * value_data)
    ADD ESP,0xc                         ; 004e4be7
    MOV ESP,EBP                         ; 004e4bea
    POP EBP                             ; 004e4bec
    POP EDI                             ; 004e4bed
    POP ESI                             ; 004e4bee
    POP EBX                             ; 004e4bef
    RET                                 ; 004e4bf0
    PUSH EAX                            ; 004e4bf1
        ;   Label: LAB_004e4bf1
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004e4bf2
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004e4bf7
    PUSH 0x1c0                          ; 004e4bfa
    PUSH 0x5c6ba7                       ; 004e4bff | = "stderr.txt"
    CALL crt_io.c__chmod_FUN_005a4bd0   ; 004e4c04
        ;   XREF to: 005a4bd0 (UNCONDITIONAL_CALL)  ; int crt_io.c__chmod_FUN_005a4bd0(char * path, int mode)
    ADD ESP,0x8                         ; 004e4c09
    TEST EAX,EAX                        ; 004e4c0c
    JZ 0x004e4527                       ; 004e4c0e
        ;   XREF to: 004e4527 (CONDITIONAL_JUMP)  ; LAB_004e4527
    MOV ESI,0x5c6bb2                    ; 004e4c14 | = "..\\core\\main.c"
    MOV EDI,0x3b8                       ; 004e4c19
    PUSH 0x5c6bc1                       ; 004e4c1e | = "Please copy Blair Witch 3 to your har..."
    MOV dword ptr [0x01d71de0],ESI      ; 004e4c23 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004e4c29 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004e4c2f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004e4c34
    JMP 0x004e4527                      ; 004e4c37
        ;   XREF to: 004e4527 (UNCONDITIONAL_JUMP)  ; LAB_004e4527
    XOR EAX,EAX                         ; 004e4c3c
        ;   Label: LAB_004e4c3c
    MOV [0x01d5bc7c],EAX                ; 004e4c3e | DAT_01d5bc7c
    MOV EAX,[0x005fe9dc]                ; 004e4c43 | g_CGamePtr
    MOV dword ptr [EAX],0x280           ; 004e4c48 | g_CGameInstance
    XOR EDX,EDX                         ; 004e4c4e
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004e4c50 | g_CGameInstance.game_pixy
    MOV dword ptr [0x02cf5fcc],EDX      ; 004e4c57 | DAT_02cf5fcc
    MOV dword ptr [EAX + 0x8],0x20      ; 004e4c5d | g_CGameInstance.game_bpp
    CALL core_menu.cpp_showCalibrationTest_FUN_004e84d0 ; 004e4c64
        ;   XREF to: 004e84d0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTest_FUN_004e84d0()
    JMP 0x004e4a2f                      ; 004e4c69
        ;   XREF to: 004e4a2f (UNCONDITIONAL_JUMP)  ; LAB_004e4a2f

