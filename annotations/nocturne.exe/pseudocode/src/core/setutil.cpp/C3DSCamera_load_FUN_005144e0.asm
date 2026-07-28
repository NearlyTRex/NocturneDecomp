; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_005144e0(C3DSCamera *this_ptr,_FILE *file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 0050730a
;
; Referenced Globals:
;   TerminatedCString s_s_00590c71
;   TerminatedCString s_f_f_f_00590c75
;   TerminatedCString s_f_f_f_00590c7f
;   TerminatedCString s_f_00590c89
;   TerminatedCString s_f_f_f_00590c8d
;   TerminatedCString s_f_f_f_00590c97
;   TerminatedCString s_f_f_f_00590ca1
;   TerminatedCString s_d_00590cab
;   TerminatedCString s_f_f_f_00590caf
;   TerminatedCString s_f_f_f_00590cb9
;   TerminatedCString s_d_00590cc3
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fb1acc
;   undefined4 DAT_01fb1ad0
;   ... and 8 more
;
; Called Functions:
;   core_dcamera.cpp_loadCameraFog_FUN_00447d10
;   core_setutil.cpp_FUN_00514470
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;   crt_stdio.c_sscanf_FUN_00566b5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005144e0
        ;   Label: core_setutil.cpp_C3DSCamera_load_FUN_005144e0
    PUSH ESI                            ; 005144e1
    PUSH EDI                            ; 005144e2
    PUSH EBP                            ; 005144e3
    SUB ESP,0x100                       ; 005144e4
    MOV EBX,dword ptr [ESP + 0x114]     ; 005144ea
    MOV ESI,dword ptr [ESP + 0x118]     ; 005144f1
    PUSH EBX                            ; 005144f8
    CALL core_setutil.cpp_FUN_00514470  ; 005144f9
        ;   XREF to: 00514470 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_FUN_00514470()
    MOV EAX,[0x005be368]                ; 005144fe | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x15a8c4]  ; 00514503 | DAT_01fb1b48
    ADD ESP,0x4                         ; 00514509
    CMP EDX,0xb                         ; 0051450c
    JGE 0x0051474e                      ; 0051450f
        ;   XREF to: 0051474e (CONDITIONAL_JUMP)  ; LAB_0051474e
    PUSH ESI                            ; 00514515
        ;   Label: LAB_00514515
    PUSH 0xff                           ; 00514516
    LEA EAX,[ESP + 0x8]                 ; 0051451b
    PUSH EAX                            ; 0051451f
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514520
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514525
    PUSH EBX                            ; 00514528
    PUSH 0x590c71                       ; 00514529 | = "%s\n"
    LEA EAX,[ESP + 0x8]                 ; 0051452e
    PUSH EAX                            ; 00514532
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00514533
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    MOV EAX,[0x005be368]                ; 00514538 | DAT_005be368
    MOV ECX,dword ptr [EAX + 0x15a8c4]  ; 0051453d | DAT_01fb1b48
    ADD ESP,0xc                         ; 00514543
    CMP ECX,0xb                         ; 00514546
    JL 0x0051455e                       ; 00514549
        ;   XREF to: 0051455e (CONDITIONAL_JUMP)  ; LAB_0051455e
    PUSH ESI                            ; 0051454b
    PUSH 0xff                           ; 0051454c
    LEA EAX,[ESP + 0x8]                 ; 00514551
    PUSH EAX                            ; 00514555
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514556
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0051455b
    LEA EAX,[EBX + 0x108]               ; 0051455e
        ;   Label: LAB_0051455e
    PUSH EAX                            ; 00514564
    LEA EAX,[EBX + 0x104]               ; 00514565
    PUSH EAX                            ; 0051456b
    LEA EAX,[EBX + 0x100]               ; 0051456c
    PUSH EAX                            ; 00514572
    PUSH 0x590c75                       ; 00514573 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00514578
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514579
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 0051457e | DAT_005be368
    MOV EDI,dword ptr [EAX + 0x15a8c4]  ; 00514583 | DAT_01fb1b48
    ADD ESP,0x14                        ; 00514589
    CMP EDI,0xb                         ; 0051458c
    JL 0x005145a4                       ; 0051458f
        ;   XREF to: 005145a4 (CONDITIONAL_JUMP)  ; LAB_005145a4
    PUSH ESI                            ; 00514591
    PUSH 0xff                           ; 00514592
    LEA EAX,[ESP + 0x8]                 ; 00514597
    PUSH EAX                            ; 0051459b
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0051459c
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005145a1
    LEA EAX,[EBX + 0x110]               ; 005145a4
        ;   Label: LAB_005145a4
    PUSH EAX                            ; 005145aa
    LEA EAX,[EBX + 0x114]               ; 005145ab
    PUSH EAX                            ; 005145b1
    LEA EAX,[EBX + 0x10c]               ; 005145b2
    PUSH EAX                            ; 005145b8
    PUSH 0x590c7f                       ; 005145b9 | = "%f,%f,%f\n"
    PUSH ESI                            ; 005145be
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005145bf
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 005145c4 | DAT_005be368
    MOV EBP,dword ptr [EAX + 0x15a8c4]  ; 005145c9 | DAT_01fb1b48
    ADD ESP,0x14                        ; 005145cf
    CMP EBP,0xb                         ; 005145d2
    JL 0x005145ea                       ; 005145d5
        ;   XREF to: 005145ea (CONDITIONAL_JUMP)  ; LAB_005145ea
    PUSH ESI                            ; 005145d7
    PUSH 0xff                           ; 005145d8
    LEA EAX,[ESP + 0x8]                 ; 005145dd
    PUSH EAX                            ; 005145e1
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005145e2
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005145e7
    LEA EAX,[EBX + 0x140]               ; 005145ea
        ;   Label: LAB_005145ea
    PUSH EAX                            ; 005145f0
    PUSH 0x590c89                       ; 005145f1 | = "%f\n"
    PUSH ESI                            ; 005145f6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005145f7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 005145fc
    PUSH ESI                            ; 005145ff
    PUSH 0xff                           ; 00514600
    LEA EAX,[ESP + 0x8]                 ; 00514605
    PUSH EAX                            ; 00514609
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0051460a
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0051460f
    LEA EAX,[EBX + 0x120]               ; 00514612
    PUSH EAX                            ; 00514618
    LEA EAX,[EBX + 0x11c]               ; 00514619
    PUSH EAX                            ; 0051461f
    LEA EAX,[EBX + 0x118]               ; 00514620
    PUSH EAX                            ; 00514626
    PUSH 0x590c8d                       ; 00514627 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0051462c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0051462d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00514632
    LEA EAX,[EBX + 0x12c]               ; 00514635
    PUSH EAX                            ; 0051463b
    LEA EAX,[EBX + 0x128]               ; 0051463c
    PUSH EAX                            ; 00514642
    LEA EAX,[EBX + 0x124]               ; 00514643
    PUSH EAX                            ; 00514649
    PUSH 0x590c97                       ; 0051464a | = "%f,%f,%f\n"
    PUSH ESI                            ; 0051464f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514650
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00514655
    LEA EAX,[EBX + 0x138]               ; 00514658
    PUSH EAX                            ; 0051465e
    LEA EAX,[EBX + 0x134]               ; 0051465f
    PUSH EAX                            ; 00514665
    LEA EAX,[EBX + 0x130]               ; 00514666
    PUSH EAX                            ; 0051466c
    PUSH 0x590ca1                       ; 0051466d | = "%f,%f,%f\n"
    PUSH ESI                            ; 00514672
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514673
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 00514678 | DAT_005be368
    LEA EDI,[EBX + 0x150]               ; 0051467d
    MOV EDX,dword ptr [EAX + 0x15a8c4]  ; 00514683 | DAT_01fb1b48
    ADD ESP,0x14                        ; 00514689
    CMP EDX,0x12                        ; 0051468c
    JL 0x00514766                       ; 0051468f
        ;   XREF to: 00514766 (CONDITIONAL_JUMP)  ; LAB_00514766
    LEA EAX,[EBX + 0x14c]               ; 00514695
    PUSH EAX                            ; 0051469b
    PUSH 0x590cab                       ; 0051469c | = "%d\n"
    PUSH ESI                            ; 005146a1
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005146a2
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV ECX,dword ptr [EBX + 0x14c]     ; 005146a7
    ADD ESP,0xc                         ; 005146ad
    TEST ECX,ECX                        ; 005146b0
    JNZ 0x005146ca                      ; 005146b2
        ;   XREF to: 005146ca (CONDITIONAL_JUMP)  ; LAB_005146ca
    MOV EAX,[0x005be368]                ; 005146b4 | DAT_005be368
    MOV EBP,dword ptr [EAX + 0x15a8c4]  ; 005146b9 | DAT_01fb1b48
    PUSH EBP                            ; 005146bf
    PUSH ESI                            ; 005146c0
    PUSH EDI                            ; 005146c1
    CALL core_dcamera.cpp_loadCameraFog_FUN_00447d10 ; 005146c2
        ;   XREF to: 00447d10 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_loadCameraFog_FUN_00447d10(SFog * fog, _FILE * file_handle, int file_version)
    ADD ESP,0xc                         ; 005146c7
    MOV EAX,[0x005be368]                ; 005146ca | DAT_005be368
        ;   Label: LAB_005146ca
    CMP dword ptr [EAX + 0x15a8c4],0x17 ; 005146cf | DAT_01fb1b48
    JL 0x00514731                       ; 005146d6
        ;   XREF to: 00514731 (CONDITIONAL_JUMP)  ; LAB_00514731
    PUSH ESI                            ; 005146d8
    PUSH 0xff                           ; 005146d9
    LEA EAX,[ESP + 0x8]                 ; 005146de
    PUSH EAX                            ; 005146e2
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005146e3
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005146e8
    LEA EAX,[EBX + 0x180]               ; 005146eb
    PUSH EAX                            ; 005146f1
    LEA EAX,[EBX + 0x17c]               ; 005146f2
    PUSH EAX                            ; 005146f8
    LEA EAX,[EBX + 0x178]               ; 005146f9
    PUSH EAX                            ; 005146ff
    PUSH 0x590caf                       ; 00514700 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00514705
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514706
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 0051470b
    LEA EAX,[EBX + 0x18c]               ; 0051470e
    PUSH EAX                            ; 00514714
    LEA EAX,[EBX + 0x188]               ; 00514715
    PUSH EAX                            ; 0051471b
    LEA EAX,[EBX + 0x184]               ; 0051471c
    PUSH EAX                            ; 00514722
    PUSH 0x590cb9                       ; 00514723 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00514728
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514729
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 0051472e
    MOV EAX,[0x005be368]                ; 00514731 | DAT_005be368 | DAT_01e57284
        ;   Label: LAB_00514731
    CMP dword ptr [EAX + 0x15a8c4],0x17 ; 00514736 | DAT_01fb1b48
    JGE 0x005147be                      ; 0051473d
        ;   XREF to: 005147be (CONDITIONAL_JUMP)  ; LAB_005147be
    ADD ESP,0x100                       ; 00514743
    POP EBP                             ; 00514749
    POP EDI                             ; 0051474a
    POP ESI                             ; 0051474b
    POP EBX                             ; 0051474c
    RET                                 ; 0051474d
    PUSH ESI                            ; 0051474e
        ;   Label: LAB_0051474e
    PUSH 0xff                           ; 0051474f
    LEA EAX,[ESP + 0x8]                 ; 00514754
    PUSH EAX                            ; 00514758
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514759
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0051475e
    JMP 0x00514515                      ; 00514761
        ;   XREF to: 00514515 (UNCONDITIONAL_JUMP)  ; LAB_00514515
    MOV dword ptr [EBX + 0x14c],0x1     ; 00514766
        ;   Label: LAB_00514766
    MOV EBP,dword ptr [EAX + 0x15a848]  ; 00514770 | DAT_01fb1acc
    ADD EAX,0x15a848                    ; 00514776
    MOV dword ptr [EDI],EBP             ; 0051477b
    MOV ECX,EDI                         ; 0051477d
    MOV EBP,dword ptr [EAX + 0x4]       ; 0051477f | DAT_01fb1ad0
    MOV EDX,EAX                         ; 00514782
    MOV dword ptr [EDI + 0x4],EBP       ; 00514784
    ADD EDI,0xc                         ; 00514787
    MOV EBP,dword ptr [EAX + 0x8]       ; 0051478a | DAT_01fb1ad4
    ADD EAX,0xc                         ; 0051478d
    MOV dword ptr [EDI + -0x4],EBP      ; 00514790
    CMP EDI,EAX                         ; 00514793
    JZ 0x005147a7                       ; 00514795
        ;   XREF to: 005147a7 (CONDITIONAL_JUMP)  ; LAB_005147a7
    MOV EBP,dword ptr [EAX]             ; 00514797 | DAT_01fb1ad8
    MOV dword ptr [EDI],EBP             ; 00514799
    MOV EBP,dword ptr [EAX + 0x4]       ; 0051479b | DAT_01fb1adc
    MOV dword ptr [EDI + 0x4],EBP       ; 0051479e
    MOV EBP,dword ptr [EAX + 0x8]       ; 005147a1 | DAT_01fb1ae0
    MOV dword ptr [EDI + 0x8],EBP       ; 005147a4
    MOV EAX,dword ptr [EDX + 0x18]      ; 005147a7 | DAT_01fb1ae4
        ;   Label: LAB_005147a7
    MOV dword ptr [ECX + 0x18],EAX      ; 005147aa
    MOV EAX,dword ptr [EDX + 0x1c]      ; 005147ad | DAT_01fb1ae8
    MOV dword ptr [ECX + 0x1c],EAX      ; 005147b0
    MOV EAX,dword ptr [EDX + 0x20]      ; 005147b3 | DAT_01fb1aec
    MOV dword ptr [ECX + 0x20],EAX      ; 005147b6
    JMP 0x005146ca                      ; 005147b9
        ;   XREF to: 005146ca (UNCONDITIONAL_JUMP)  ; LAB_005146ca
    PUSH ESI                            ; 005147be
        ;   Label: LAB_005147be
    PUSH 0xff                           ; 005147bf
    LEA EAX,[ESP + 0x8]                 ; 005147c4
    PUSH EAX                            ; 005147c8
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005147c9
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005147ce
    ADD EBX,0x174                       ; 005147d1
    PUSH EBX                            ; 005147d7
    PUSH 0x590cc3                       ; 005147d8 | = "%d\n"
    PUSH ESI                            ; 005147dd
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005147de
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 005147e3
    ADD ESP,0x100                       ; 005147e6
    POP EBP                             ; 005147ec
    POP EDI                             ; 005147ed
    POP ESI                             ; 005147ee
    POP EBX                             ; 005147ef
    RET                                 ; 005147f0

