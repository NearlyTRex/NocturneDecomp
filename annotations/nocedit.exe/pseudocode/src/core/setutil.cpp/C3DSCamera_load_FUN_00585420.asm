; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_00585420(C3DSCamera *this_ptr,FILE *file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 0056980a
;
; Referenced Globals:
;   TerminatedCString s_s_006491cf
;   TerminatedCString s_f_f_f_006491d3
;   TerminatedCString s_f_f_f_006491dd
;   TerminatedCString s_f_006491e7
;   TerminatedCString s_f_f_f_006491eb
;   TerminatedCString s_f_f_f_006491f5
;   TerminatedCString s_f_f_f_006491ff
;   TerminatedCString s_d_00649209
;   TerminatedCString s_f_f_f_0064920d
;   TerminatedCString s_f_f_f_00649217
;   TerminatedCString s_d_00649221
;   TerminatedCString s_d_00649225
;   TerminatedCString s_core_setutil_cpp_00649229
;   TerminatedCString s_Panning_cameras_not_supp_0064923d
;   CDemonSet* g_CDemonSetPtr = 03114278
;   ... and 13 more
;
; Called Functions:
;   core_dcamera.cpp_loadCameraFog_FUN_00453e50
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdio.c_sscanf_FUN_0060013c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585420
        ;   Label: core_setutil.cpp_C3DSCamera_load_FUN_00585420
    PUSH ESI                            ; 00585421
    PUSH EDI                            ; 00585422
    PUSH EBP                            ; 00585423
    SUB ESP,0x100                       ; 00585424
    MOV EBX,dword ptr [ESP + 0x114]     ; 0058542a
    MOV ESI,dword ptr [ESP + 0x118]     ; 00585431
    PUSH EBX                            ; 00585438
    CALL core_setutil.cpp_C3DSCamera_reset_FUN_005853b0 ; 00585439
        ;   XREF to: 005853b0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera * this_ptr)
    MOV EAX,[0x006810c8]                ; 0058543e | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15acac]  ; 00585443 | DAT_0326ef24
    ADD ESP,0x4                         ; 00585449
    CMP EDX,0xb                         ; 0058544c
    JGE 0x005856ce                      ; 0058544f
        ;   XREF to: 005856ce (CONDITIONAL_JUMP)  ; LAB_005856ce
    PUSH ESI                            ; 00585455
        ;   Label: LAB_00585455
    PUSH 0xff                           ; 00585456
    LEA EAX,[ESP + 0x8]                 ; 0058545b
    PUSH EAX                            ; 0058545f
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00585460
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00585465
    PUSH EBX                            ; 00585468
    PUSH 0x6491cf                       ; 00585469 | = "%s\n"
    LEA EAX,[ESP + 0x8]                 ; 0058546e
    PUSH EAX                            ; 00585472
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00585473
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EAX,[0x006810c8]                ; 00585478 | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x15acac]  ; 0058547d | DAT_0326ef24
    ADD ESP,0xc                         ; 00585483
    CMP ECX,0xb                         ; 00585486
    JL 0x0058549e                       ; 00585489
        ;   XREF to: 0058549e (CONDITIONAL_JUMP)  ; LAB_0058549e
    PUSH ESI                            ; 0058548b
    PUSH 0xff                           ; 0058548c
    LEA EAX,[ESP + 0x8]                 ; 00585491
    PUSH EAX                            ; 00585495
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00585496
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 0058549b
    LEA EAX,[EBX + 0x108]               ; 0058549e
        ;   Label: LAB_0058549e
    PUSH EAX                            ; 005854a4
    LEA EAX,[EBX + 0x104]               ; 005854a5
    PUSH EAX                            ; 005854ab
    LEA EAX,[EBX + 0x100]               ; 005854ac
    PUSH EAX                            ; 005854b2
    PUSH 0x6491d3                       ; 005854b3 | = "%f,%f,%f\n"
    PUSH ESI                            ; 005854b8
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005854b9
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 005854be | g_CDemonSetPtr
    MOV EDI,dword ptr [EAX + 0x15acac]  ; 005854c3 | DAT_0326ef24
    ADD ESP,0x14                        ; 005854c9
    CMP EDI,0xb                         ; 005854cc
    JL 0x005854e4                       ; 005854cf
        ;   XREF to: 005854e4 (CONDITIONAL_JUMP)  ; LAB_005854e4
    PUSH ESI                            ; 005854d1
    PUSH 0xff                           ; 005854d2
    LEA EAX,[ESP + 0x8]                 ; 005854d7
    PUSH EAX                            ; 005854db
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005854dc
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 005854e1
    LEA EAX,[EBX + 0x110]               ; 005854e4
        ;   Label: LAB_005854e4
    PUSH EAX                            ; 005854ea
    LEA EAX,[EBX + 0x114]               ; 005854eb
    PUSH EAX                            ; 005854f1
    LEA EAX,[EBX + 0x10c]               ; 005854f2
    PUSH EAX                            ; 005854f8
    PUSH 0x6491dd                       ; 005854f9 | = "%f,%f,%f\n"
    PUSH ESI                            ; 005854fe
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005854ff
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 00585504 | g_CDemonSetPtr
    MOV EBP,dword ptr [EAX + 0x15acac]  ; 00585509 | DAT_0326ef24
    ADD ESP,0x14                        ; 0058550f
    CMP EBP,0xb                         ; 00585512
    JL 0x0058552a                       ; 00585515
        ;   XREF to: 0058552a (CONDITIONAL_JUMP)  ; LAB_0058552a
    PUSH ESI                            ; 00585517
    PUSH 0xff                           ; 00585518
    LEA EAX,[ESP + 0x8]                 ; 0058551d
    PUSH EAX                            ; 00585521
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00585522
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00585527
    LEA EAX,[EBX + 0x144]               ; 0058552a
        ;   Label: LAB_0058552a
    PUSH EAX                            ; 00585530
    PUSH 0x6491e7                       ; 00585531 | = "%f\n"
    PUSH ESI                            ; 00585536
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00585537
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0058553c
    PUSH ESI                            ; 0058553f
    PUSH 0xff                           ; 00585540
    LEA EAX,[ESP + 0x8]                 ; 00585545
    PUSH EAX                            ; 00585549
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0058554a
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 0058554f
    LEA EAX,[EBX + 0x120]               ; 00585552
    PUSH EAX                            ; 00585558
    LEA EAX,[EBX + 0x11c]               ; 00585559
    PUSH EAX                            ; 0058555f
    LEA EAX,[EBX + 0x118]               ; 00585560
    PUSH EAX                            ; 00585566
    PUSH 0x6491eb                       ; 00585567 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0058556c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058556d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 00585572
    LEA EAX,[EBX + 0x12c]               ; 00585575
    PUSH EAX                            ; 0058557b
    LEA EAX,[EBX + 0x128]               ; 0058557c
    PUSH EAX                            ; 00585582
    LEA EAX,[EBX + 0x124]               ; 00585583
    PUSH EAX                            ; 00585589
    PUSH 0x6491f5                       ; 0058558a | = "%f,%f,%f\n"
    PUSH ESI                            ; 0058558f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00585590
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 00585595
    LEA EAX,[EBX + 0x138]               ; 00585598
    PUSH EAX                            ; 0058559e
    LEA EAX,[EBX + 0x134]               ; 0058559f
    PUSH EAX                            ; 005855a5
    LEA EAX,[EBX + 0x130]               ; 005855a6
    PUSH EAX                            ; 005855ac
    PUSH 0x6491ff                       ; 005855ad | = "%f,%f,%f\n"
    PUSH ESI                            ; 005855b2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005855b3
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,[0x006810c8]                ; 005855b8 | g_CDemonSetPtr
    LEA EDI,[EBX + 0x154]               ; 005855bd
    MOV EDX,dword ptr [EAX + 0x15acac]  ; 005855c3 | DAT_0326ef24
    ADD ESP,0x14                        ; 005855c9
    CMP EDX,0x12                        ; 005855cc
    JL 0x005856e6                       ; 005855cf
        ;   XREF to: 005856e6 (CONDITIONAL_JUMP)  ; LAB_005856e6
    LEA EAX,[EBX + 0x150]               ; 005855d5
    PUSH EAX                            ; 005855db
    PUSH 0x649209                       ; 005855dc | = "%d\n"
    PUSH ESI                            ; 005855e1
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005855e2
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x150]     ; 005855e7
    ADD ESP,0xc                         ; 005855ed
    TEST ECX,ECX                        ; 005855f0
    JNZ 0x0058560a                      ; 005855f2
        ;   XREF to: 0058560a (CONDITIONAL_JUMP)  ; LAB_0058560a
    MOV EAX,[0x006810c8]                ; 005855f4 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EBP,dword ptr [EAX + 0x15acac]  ; 005855f9 | DAT_0326ef24
    PUSH EBP                            ; 005855ff
    PUSH ESI                            ; 00585600
    PUSH EDI                            ; 00585601
    CALL core_dcamera.cpp_loadCameraFog_FUN_00453e50 ; 00585602
        ;   XREF to: 00453e50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_loadCameraFog_FUN_00453e50(SFog * fog, FILE * file_handle, int file_version)
    ADD ESP,0xc                         ; 00585607
    MOV EAX,[0x006810c8]                ; 0058560a | g_CDemonSetPtr
        ;   Label: LAB_0058560a
    CMP dword ptr [EAX + 0x15acac],0x17 ; 0058560f | DAT_0326ef24
    JL 0x00585671                       ; 00585616
        ;   XREF to: 00585671 (CONDITIONAL_JUMP)  ; LAB_00585671
    PUSH ESI                            ; 00585618
    PUSH 0xff                           ; 00585619
    LEA EAX,[ESP + 0x8]                 ; 0058561e
    PUSH EAX                            ; 00585622
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00585623
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00585628
    LEA EAX,[EBX + 0x184]               ; 0058562b
    PUSH EAX                            ; 00585631
    LEA EAX,[EBX + 0x180]               ; 00585632
    PUSH EAX                            ; 00585638
    LEA EAX,[EBX + 0x17c]               ; 00585639
    PUSH EAX                            ; 0058563f
    PUSH 0x64920d                       ; 00585640 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00585645
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00585646
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0058564b
    LEA EAX,[EBX + 0x190]               ; 0058564e
    PUSH EAX                            ; 00585654
    LEA EAX,[EBX + 0x18c]               ; 00585655
    PUSH EAX                            ; 0058565b
    LEA EAX,[EBX + 0x188]               ; 0058565c
    PUSH EAX                            ; 00585662
    PUSH 0x649217                       ; 00585663 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00585668
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00585669
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0058566e
    MOV EAX,[0x006810c8]                ; 00585671 | g_CDemonSetPtr
        ;   Label: LAB_00585671
    CMP dword ptr [EAX + 0x15acac],0x17 ; 00585676 | DAT_0326ef24
    JL 0x005856a7                       ; 0058567d
        ;   XREF to: 005856a7 (CONDITIONAL_JUMP)  ; LAB_005856a7
    PUSH ESI                            ; 0058567f
    PUSH 0xff                           ; 00585680
    LEA EAX,[ESP + 0x8]                 ; 00585685
    PUSH EAX                            ; 00585689
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0058568a
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 0058568f
    LEA EAX,[EBX + 0x178]               ; 00585692
    PUSH EAX                            ; 00585698
    PUSH 0x649221                       ; 00585699 | = "%d\n"
    PUSH ESI                            ; 0058569e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058569f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 005856a4
    MOV EAX,[0x006810c8]                ; 005856a7 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005856a7
    CMP dword ptr [EAX + 0x15acac],0x1b ; 005856ac | DAT_0326ef24
    JZ 0x0058573e                       ; 005856b3
        ;   XREF to: 0058573e (CONDITIONAL_JUMP)  ; LAB_0058573e
    MOV dword ptr [EBX + 0x140],0x0     ; 005856b9
    ADD ESP,0x100                       ; 005856c3
        ;   Label: LAB_005856c3
    POP EBP                             ; 005856c9
    POP EDI                             ; 005856ca
    POP ESI                             ; 005856cb
    POP EBX                             ; 005856cc
    RET                                 ; 005856cd
    PUSH ESI                            ; 005856ce
        ;   Label: LAB_005856ce
    PUSH 0xff                           ; 005856cf
    LEA EAX,[ESP + 0x8]                 ; 005856d4
    PUSH EAX                            ; 005856d8
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005856d9
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 005856de
    JMP 0x00585455                      ; 005856e1
        ;   XREF to: 00585455 (UNCONDITIONAL_JUMP)  ; LAB_00585455
    MOV dword ptr [EBX + 0x150],0x1     ; 005856e6
        ;   Label: LAB_005856e6
    MOV EBP,dword ptr [EAX + 0x15ac30]  ; 005856f0 | DAT_0326eea8
    ADD EAX,0x15ac30                    ; 005856f6
    MOV dword ptr [EDI],EBP             ; 005856fb
    MOV ECX,EDI                         ; 005856fd
    MOV EBP,dword ptr [EAX + 0x4]       ; 005856ff | DAT_0326eeac
    MOV EDX,EAX                         ; 00585702
    MOV dword ptr [EDI + 0x4],EBP       ; 00585704
    ADD EDI,0xc                         ; 00585707
    MOV EBP,dword ptr [EAX + 0x8]       ; 0058570a | DAT_0326eeb0
    ADD EAX,0xc                         ; 0058570d
    MOV dword ptr [EDI + -0x4],EBP      ; 00585710
    CMP EDI,EAX                         ; 00585713
    JZ 0x00585727                       ; 00585715
        ;   XREF to: 00585727 (CONDITIONAL_JUMP)  ; LAB_00585727
    MOV EBP,dword ptr [EAX]             ; 00585717 | DAT_0326eeb4
    MOV dword ptr [EDI],EBP             ; 00585719
    MOV EBP,dword ptr [EAX + 0x4]       ; 0058571b | DAT_0326eeb8
    MOV dword ptr [EDI + 0x4],EBP       ; 0058571e
    MOV EBP,dword ptr [EAX + 0x8]       ; 00585721 | DAT_0326eebc
    MOV dword ptr [EDI + 0x8],EBP       ; 00585724
    MOV EAX,dword ptr [EDX + 0x18]      ; 00585727 | DAT_0326eec0
        ;   Label: LAB_00585727
    MOV dword ptr [ECX + 0x18],EAX      ; 0058572a
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0058572d | DAT_0326eec4
    MOV dword ptr [ECX + 0x1c],EAX      ; 00585730
    MOV EAX,dword ptr [EDX + 0x20]      ; 00585733 | DAT_0326eec8
    MOV dword ptr [ECX + 0x20],EAX      ; 00585736
    JMP 0x0058560a                      ; 00585739
        ;   XREF to: 0058560a (UNCONDITIONAL_JUMP)  ; LAB_0058560a
    PUSH ESI                            ; 0058573e
        ;   Label: LAB_0058573e
    PUSH 0xff                           ; 0058573f
    LEA EAX,[ESP + 0x8]                 ; 00585744
    PUSH EAX                            ; 00585748
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00585749
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 0058574e
    LEA EAX,[EBX + 0x140]               ; 00585751
    PUSH EAX                            ; 00585757
    PUSH 0x649225                       ; 00585758 | = "%d\n"
    PUSH ESI                            ; 0058575d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058575e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EBP,dword ptr [EBX + 0x140]     ; 00585763
    ADD ESP,0xc                         ; 00585769
    TEST EBP,EBP                        ; 0058576c
    JZ 0x005856c3                       ; 0058576e
        ;   XREF to: 005856c3 (CONDITIONAL_JUMP)  ; LAB_005856c3
    MOV EAX,0x649229                    ; 00585774 | = "..\\core\\setutil.cpp"
    MOV EDX,0xd5                        ; 00585779
    PUSH 0x64923d                       ; 0058577e | = "Panning cameras not supported, bucko!"
    MOV [0x02f0ca48],EAX                ; 00585783 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00585788 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058578e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00585793
    ADD ESP,0x100                       ; 00585796
    POP EBP                             ; 0058579c
    POP EDI                             ; 0058579d
    POP ESI                             ; 0058579e
    POP EBX                             ; 0058579f
    RET                                 ; 005857a0

