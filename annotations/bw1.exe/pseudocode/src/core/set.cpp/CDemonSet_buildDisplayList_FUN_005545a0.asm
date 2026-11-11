; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_005545a0(CDemonSet *this_ptr,uint dirty_flags_mask)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   dirty_flags_mask
; Local Variables:
; undefined8       Stack[-0xdc]:8  local_dc
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_set.cpp_CDemonSet_renderDecals_FUN_00556080 at 00556089
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260 at 00550399
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f758
;   core_set.cpp_FUN_00550580 at 00550883
;   core_set.cpp_FUN_00550da0 at 00550f41
;   core_set.cpp_FUN_00551170 at 0055131a
;
; Referenced Globals:
;   TerminatedCString s_buildDispList_d_items_3_005f0b6a
;   undefined4 DAT_005f0b8e
;   undefined4 DAT_005f0b96
;   undefined4 DAT_005f0b9e
;   undefined4 DAT_005f0ba6
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01bc120c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.profile_mode
;   undefined4 g_CGameInstance.goggles_active
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_01d06ab4
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_set.cpp_CDemonSet_isCameraPanning_FUN_00555fe0
;   crt_stdlib.c__qsort_FUN_005bfc68
;   engine_console.cpp_FUN_00445430
;   engine_matrix.c_FUN_00483ac0
;   engine_matrix.c_FUN_00483ae0
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005545a0
        ;   Label: core_set.cpp_CDemonSet_buildDisplayList_FUN_005545a0
    PUSH ESI                            ; 005545a1
    PUSH EDI                            ; 005545a2
    PUSH EBP                            ; 005545a3
    SUB ESP,0xc4                        ; 005545a4
    MOV EAX,[0x0061d95c]                ; 005545aa | g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x0     ; 005545af | g_CGameInstance.profile_mode
    JNZ 0x00554740                      ; 005545b6
        ;   XREF to: 00554740 (CONDITIONAL_JUMP)  ; LAB_00554740
    MOV EBX,dword ptr [0x00612560]      ; 005545bc | DAT_00612560
        ;   Label: LAB_005545bc
    XOR ECX,ECX                         ; 005545c2
    PUSH EBX                            ; 005545c4 | DAT_01bc120c
    LEA ESI,[ESP + 0x64]                ; 005545c5
    MOV dword ptr [0x020ab728],ECX      ; 005545c9 | DAT_020ab728
    CALL engine_matrix.c_FUN_00483ac0   ; 005545cf
        ;   XREF to: 00483ac0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ac0()
    ADD ESP,0x4                         ; 005545d4
    MOV ESI,dword ptr [0x00612560]      ; 005545d7 | DAT_00612560
    PUSH ESI                            ; 005545dd | DAT_01bc120c
    LEA ESI,[ESP + 0x70]                ; 005545de
    LEA EDI,[ESP + 0x34]                ; 005545e2
    CALL engine_matrix.c_FUN_00483ae0   ; 005545e6
        ;   XREF to: 00483ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ae0()
    LEA ESI,[ESP + 0x70]                ; 005545eb
    ADD ESP,0x4                         ; 005545ef
    MOVSD ES:EDI,ESI                    ; 005545f2
    MOVSD ES:EDI,ESI                    ; 005545f3
    MOVSD ES:EDI,ESI                    ; 005545f4
    MOV EDI,0xc                         ; 005545f5
    MOV EBP,dword ptr [0x01fe55bc]      ; 005545fa | DAT_01fe55bc
    MOV dword ptr [ESP + 0xac],EDI      ; 00554600
    TEST EBP,EBP                        ; 00554607
    JZ 0x00554751                       ; 00554609
        ;   XREF to: 00554751 (CONDITIONAL_JUMP)  ; LAB_00554751
    OR byte ptr [ESP + 0xac],0x1        ; 0055460f
        ;   Label: LAB_0055460f
    CMP dword ptr [0x01fe4e38],0x0      ; 00554617 | DAT_01fe4e38
        ;   Label: LAB_00554617
    JZ 0x00554628                       ; 0055461e
        ;   XREF to: 00554628 (CONDITIONAL_JUMP)  ; LAB_00554628
    OR byte ptr [ESP + 0xac],0x22       ; 00554620
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00554628
        ;   Label: LAB_00554628
    MOV EBX,dword ptr [EAX + 0x158cfc]  ; 0055462f
    XOR EBP,EBP                         ; 00554635
    TEST EBX,EBX                        ; 00554637
    JLE 0x0055469b                      ; 00554639
        ;   XREF to: 0055469b (CONDITIONAL_JUMP)  ; LAB_0055469b
    LEA EAX,[ESP + 0x18]                ; 0055463b
    ADD EAX,0xc                         ; 0055463f
    MOV dword ptr [ESP + 0xbc],EAX      ; 00554642
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00554649
    MOV dword ptr [ESP + 0xb0],EAX      ; 00554650
    MOV EAX,[0x01d06ab4]                ; 00554657 | DAT_01d06ab4
        ;   Label: LAB_00554657
    MOV EBX,dword ptr [ESP + 0xb0]      ; 0055465c
    MOV ESI,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00554663
    MOV EBX,dword ptr [EBX + 0x158d00]  ; 0055466a
    CMP EBX,ESI                         ; 00554670
    JNZ 0x00554768                      ; 00554672
        ;   XREF to: 00554768 (CONDITIONAL_JUMP)  ; LAB_00554768
    MOV ESI,dword ptr [ESP + 0xb0]      ; 00554678
        ;   Label: LAB_00554678
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0055467f
    INC EBP                             ; 00554686
    ADD ESI,0x4                         ; 00554687
    MOV EDI,dword ptr [EAX + 0x158cfc]  ; 0055468a
    MOV dword ptr [ESP + 0xb0],ESI      ; 00554690
    CMP EBP,EDI                         ; 00554697
    JL 0x00554657                       ; 00554699
        ;   XREF to: 00554657 (CONDITIONAL_JUMP)  ; LAB_00554657
    PUSH 0x554570                       ; 0055469b
        ;   Label: LAB_0055469b
    PUSH 0x8                            ; 005546a0
    MOV EBP,dword ptr [0x020ab728]      ; 005546a2 | DAT_020ab728
    PUSH EBP                            ; 005546a8
    PUSH 0x20ab72c                      ; 005546a9 | DAT_020ab72c
    CALL crt_stdlib.c__qsort_FUN_005bfc68 ; 005546ae
        ;   XREF to: 005bfc68 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__qsort_FUN_005bfc68()
    MOV ESI,dword ptr [0x01d06ab4]      ; 005546b3 | DAT_01d06ab4
    SHL ESI,0x2                         ; 005546b9
    MOV EAX,dword ptr [ESI + 0x1d06aa4] ; 005546bc
    ADD ESP,0x10                        ; 005546c2
    TEST EAX,EAX                        ; 005546c5
    JZ 0x005549a4                       ; 005546c7
        ;   XREF to: 005549a4 (CONDITIONAL_JUMP)  ; LAB_005549a4
    MOV EDX,dword ptr [ESP + 0xd8]      ; 005546cd
    MOV ECX,dword ptr [0x020ab728]      ; 005546d4 | DAT_020ab728
    XOR ESI,ESI                         ; 005546da
    MOV dword ptr [EDX + 0x15f700],EAX  ; 005546dc
    TEST ECX,ECX                        ; 005546e2
    JLE 0x00554710                      ; 005546e4
        ;   XREF to: 00554710 (CONDITIONAL_JUMP)  ; LAB_00554710
    MOV ECX,EDX                         ; 005546e6
    XOR EDX,EDX                         ; 005546e8
    MOV EDI,dword ptr [0x020ab728]      ; 005546ea | DAT_020ab728
        ;   Label: LAB_005546ea
    ADD ECX,0x4                         ; 005546f0
    MOV EAX,dword ptr [EDX + 0x20ab72c] ; 005546f3
    ADD EDX,0x8                         ; 005546f9
    INC ESI                             ; 005546fc
    MOV dword ptr [ECX + 0x15f700],EAX  ; 005546fd
    CMP ESI,EDI                         ; 00554703
    JL 0x005546ea                       ; 00554705
        ;   XREF to: 005546ea (CONDITIONAL_JUMP)  ; LAB_005546ea
    LEA EAX,[EAX]                       ; 00554707
    LEA EDX,[EDX]                       ; 0055470d
    MOV EAX,[0x020ab728]                ; 00554710 | DAT_020ab728
        ;   Label: LAB_00554710
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00554715
    INC EAX                             ; 0055471c
    MOV dword ptr [EDX + 0x15f6fc],EAX  ; 0055471d
        ;   Label: LAB_0055471d
    MOV EAX,[0x0061d95c]                ; 00554723 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x228],0x0     ; 00554728 | g_CGameInstance.profile_mode
    JNZ 0x005549f1                      ; 0055472f
        ;   XREF to: 005549f1 (CONDITIONAL_JUMP)  ; LAB_005549f1
    ADD ESP,0xc4                        ; 00554735
    POP EBP                             ; 0055473b
    POP EDI                             ; 0055473c
    POP ESI                             ; 0055473d
    POP EBX                             ; 0055473e
    RET                                 ; 0055473f
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 00554740
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_00554740
    MOV dword ptr [ESP + 0xb4],EAX      ; 00554745
    JMP 0x005545bc                      ; 0055474c
        ;   XREF to: 005545bc (UNCONDITIONAL_JUMP)  ; LAB_005545bc
    MOV EAX,[0x0061d95c]                ; 00554751 | g_CGamePtr
        ;   Label: LAB_00554751
    CMP dword ptr [EAX + 0x25c],0x0     ; 00554756 | g_CGameInstance.goggles_active
    JNZ 0x0055460f                      ; 0055475d
        ;   XREF to: 0055460f (CONDITIONAL_JUMP)  ; LAB_0055460f
    JMP 0x00554617                      ; 00554763
        ;   XREF to: 00554617 (UNCONDITIONAL_JUMP)  ; LAB_00554617
    MOV EAX,[0x0061d95c]                ; 00554768 | g_CGamePtr
        ;   Label: LAB_00554768
    CMP dword ptr [EAX + 0x25c],0x0     ; 0055476d | g_CGameInstance.goggles_active
    JZ 0x005548b7                       ; 00554774
        ;   XREF to: 005548b7 (CONDITIONAL_JUMP)  ; LAB_005548b7
    LEA ECX,[EBX + 0x20]                ; 0055477a
        ;   Label: LAB_0055477a
    LEA EDX,[EBX + 0x12c]               ; 0055477d
    FLD float ptr [ECX]                 ; 00554783
    FCOMP float ptr [EDX]               ; 00554785
    FNSTSW AX                           ; 00554787
    SAHF                                ; 00554789
    JZ 0x0055493a                       ; 0055478a
        ;   XREF to: 0055493a (CONDITIONAL_JUMP)  ; LAB_0055493a
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00554790
        ;   Label: LAB_00554790
    OR dword ptr [EBX + 0x144],EAX      ; 00554797
    MOV EDI,dword ptr [ESP + 0xac]      ; 0055479d
        ;   Label: LAB_0055479d
    TEST dword ptr [EBX + 0x144],EDI    ; 005547a4
    JZ 0x00554678                       ; 005547aa
        ;   XREF to: 00554678 (CONDITIONAL_JUMP)  ; LAB_00554678
        ;   Label: LAB_005547aa
    PUSH EBX                            ; 005547b0
        ;   Label: LAB_005547b0
    MOV EAX,dword ptr [EBX + 0x154]     ; 005547b1
    LEA ESI,[ESP + 0x4]                 ; 005547b7
    LEA EDI,[ESP + 0x1c]                ; 005547bb
    CALL dword ptr [EAX + 0x1c]         ; 005547bf
    MOV ECX,0x6                         ; 005547c2
    LEA ESI,[ESP + 0x4]                 ; 005547c7
    ADD ESP,0x4                         ; 005547cb
    MOVSD.REP ES:EDI,ESI                ; 005547ce
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005547d0
    FLD float ptr [ESP + 0x18]          ; 005547d7
    FLD float ptr [ESP + 0x1c]          ; 005547db
    FLD float ptr [ESP + 0x20]          ; 005547df
    LEA EDI,[ESP + 0x90]                ; 005547e3
    LEA ESI,[ESP + 0x48]                ; 005547ea
    FXCH ST2                            ; 005547ee
    FADD float ptr [EAX]                ; 005547f0
    FXCH                                ; 005547f2
    FADD float ptr [EAX + 0x4]          ; 005547f4
    FXCH ST2                            ; 005547f7
    FADD float ptr [EAX + 0x8]          ; 005547f9
    FXCH                                ; 005547fc
    FSTP float ptr [ESP + 0x48]         ; 005547fe
    FXCH                                ; 00554802
    FSTP float ptr [ESP + 0x4c]         ; 00554804
    FSTP float ptr [ESP + 0x50]         ; 00554808
    MOVSD ES:EDI,ESI                    ; 0055480c
    MOVSD ES:EDI,ESI                    ; 0055480d
    MOVSD ES:EDI,ESI                    ; 0055480e
    FLD float ptr [0x005f0b8e]          ; 0055480f | DAT_005f0b8e
    FLD float ptr [ESP + 0x90]          ; 00554815
    FMUL ST1                            ; 0055481c
    FLD float ptr [ESP + 0x94]          ; 0055481e
    FMUL ST2                            ; 00554825
    LEA EAX,[ESP + 0x84]                ; 00554827
    FLD float ptr [ESP + 0x98]          ; 0055482e
    FMULP ST3                           ; 00554835
    PUSH EAX                            ; 00554837
    LEA EDI,[ESP + 0x88]                ; 00554838
    LEA ESI,[ESP + 0x7c]                ; 0055483f
    FXCH                                ; 00554843
    FSTP float ptr [ESP + 0x7c]         ; 00554845
    FSTP float ptr [ESP + 0x80]         ; 00554849
    FSTP float ptr [ESP + 0x84]         ; 00554850
    MOVSD ES:EDI,ESI                    ; 00554857
    MOVSD ES:EDI,ESI                    ; 00554858
    MOVSD ES:EDI,ESI                    ; 00554859
    PUSH EBX                            ; 0055485a
    LEA ESI,[ESP + 0x5c]                ; 0055485b
    LEA EDI,[ESP + 0x44]                ; 0055485f
    CALL core_actor.cpp_FUN_00408b40    ; 00554863
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x5c]                ; 00554868
    ADD ESP,0x8                         ; 0055486c
    MOVSD ES:EDI,ESI                    ; 0055486f
    MOVSD ES:EDI,ESI                    ; 00554870
    MOVSD ES:EDI,ESI                    ; 00554871
    FLD float ptr [ESP + 0x30]          ; 00554872
    FSUB float ptr [ESP + 0x3c]         ; 00554876
    FMUL ST0                            ; 0055487a
    FLD float ptr [ESP + 0x34]          ; 0055487c
    FSUB float ptr [ESP + 0x40]         ; 00554880
    FMUL ST0                            ; 00554884
    MOV EDX,dword ptr [0x020ab728]      ; 00554886 | DAT_020ab728
    FLD float ptr [ESP + 0x38]          ; 0055488c
    FXCH                                ; 00554890
    FADDP ST2,ST0                       ; 00554892
    FSUB float ptr [ESP + 0x44]         ; 00554894
    FMUL ST0                            ; 00554898
    LEA EAX,[EDX + 0x1]                 ; 0055489a
    MOV dword ptr [EDX*0x8 + 0x20ab72c],EBX ; 0055489d | DAT_020ab72c
    FADDP                               ; 005548a4
    MOV [0x020ab728],EAX                ; 005548a6 | DAT_020ab728
    FSTP float ptr [EDX*0x8 + 0x20ab730] ; 005548ab | DAT_020ab730
    JMP 0x00554678                      ; 005548b2
        ;   XREF to: 00554678 (UNCONDITIONAL_JUMP)  ; LAB_00554678
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005548b7
        ;   Label: LAB_005548b7
    PUSH EAX                            ; 005548be
    CALL core_set.cpp_CDemonSet_isCameraPanning_FUN_00555fe0 ; 005548bf
        ;   XREF to: 00555fe0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_isCameraPanning_FUN_00555fe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005548c4
    TEST EAX,EAX                        ; 005548c7
    JZ 0x0055477a                       ; 005548c9
        ;   XREF to: 0055477a (CONDITIONAL_JUMP)  ; LAB_0055477a
    LEA EDX,[EBX + 0x20]                ; 005548cf
    LEA ECX,[EBX + 0x12c]               ; 005548d2
    FLD float ptr [EDX]                 ; 005548d8
    FCOMP float ptr [ECX]               ; 005548da
    FNSTSW AX                           ; 005548dc
    SAHF                                ; 005548de
    JZ 0x005548f0                       ; 005548df
        ;   XREF to: 005548f0 (CONDITIONAL_JUMP)  ; LAB_005548f0
    MOV dword ptr [EBX + 0x148],0x1     ; 005548e1
        ;   Label: LAB_005548e1
    JMP 0x005547b0                      ; 005548eb
        ;   XREF to: 005547b0 (UNCONDITIONAL_JUMP)  ; LAB_005547b0
    FLD float ptr [EDX + 0x4]           ; 005548f0
        ;   Label: LAB_005548f0
    FCOMP float ptr [ECX + 0x4]         ; 005548f3
    FNSTSW AX                           ; 005548f6
    SAHF                                ; 005548f8
    JNZ 0x005548e1                      ; 005548f9
        ;   XREF to: 005548e1 (CONDITIONAL_JUMP)  ; LAB_005548e1
    FLD float ptr [EDX + 0x8]           ; 005548fb
    FCOMP float ptr [ECX + 0x8]         ; 005548fe
    FNSTSW AX                           ; 00554901
    SAHF                                ; 00554903
    JNZ 0x005548e1                      ; 00554904
        ;   XREF to: 005548e1 (CONDITIONAL_JUMP)  ; LAB_005548e1
    LEA ECX,[EBX + 0x30]                ; 00554906
    LEA EDX,[EBX + 0x138]               ; 00554909
    FLD float ptr [ECX]                 ; 0055490f
    FCOMP float ptr [EDX]               ; 00554911
    FNSTSW AX                           ; 00554913
    SAHF                                ; 00554915
    JNZ 0x005548e1                      ; 00554916
        ;   XREF to: 005548e1 (CONDITIONAL_JUMP)  ; LAB_005548e1
    FLD float ptr [ECX + 0x4]           ; 00554918
    FCOMP float ptr [EDX + 0x4]         ; 0055491b
    FNSTSW AX                           ; 0055491e
    SAHF                                ; 00554920
    JNZ 0x005548e1                      ; 00554921
        ;   XREF to: 005548e1 (CONDITIONAL_JUMP)  ; LAB_005548e1
    FLD float ptr [ECX + 0x8]           ; 00554923
    FCOMP float ptr [EDX + 0x8]         ; 00554926
    FNSTSW AX                           ; 00554929
    SAHF                                ; 0055492b
    JNZ 0x005548e1                      ; 0055492c
        ;   XREF to: 005548e1 (CONDITIONAL_JUMP)  ; LAB_005548e1
    CMP dword ptr [EBX + 0x148],0x0     ; 0055492e
    JMP 0x005547aa                      ; 00554935
        ;   XREF to: 005547aa (UNCONDITIONAL_JUMP)  ; LAB_005547aa
    FLD float ptr [ECX + 0x4]           ; 0055493a
        ;   Label: LAB_0055493a
    FCOMP float ptr [EDX + 0x4]         ; 0055493d
    FNSTSW AX                           ; 00554940
    SAHF                                ; 00554942
    JNZ 0x00554790                      ; 00554943
        ;   XREF to: 00554790 (CONDITIONAL_JUMP)  ; LAB_00554790
    FLD float ptr [ECX + 0x8]           ; 00554949
    FCOMP float ptr [EDX + 0x8]         ; 0055494c
    FNSTSW AX                           ; 0055494f
    SAHF                                ; 00554951
    JNZ 0x00554790                      ; 00554952
        ;   XREF to: 00554790 (CONDITIONAL_JUMP)  ; LAB_00554790
    LEA ECX,[EBX + 0x30]                ; 00554958
    LEA EDX,[EBX + 0x138]               ; 0055495b
    FLD float ptr [ECX]                 ; 00554961
    FCOMP float ptr [EDX]               ; 00554963
    FNSTSW AX                           ; 00554965
    SAHF                                ; 00554967
    JNZ 0x00554790                      ; 00554968
        ;   XREF to: 00554790 (CONDITIONAL_JUMP)  ; LAB_00554790
    FLD float ptr [ECX + 0x4]           ; 0055496e
    FCOMP float ptr [EDX + 0x4]         ; 00554971
    FNSTSW AX                           ; 00554974
    SAHF                                ; 00554976
    JNZ 0x00554790                      ; 00554977
        ;   XREF to: 00554790 (CONDITIONAL_JUMP)  ; LAB_00554790
    FLD float ptr [ECX + 0x8]           ; 0055497d
    FCOMP float ptr [EDX + 0x8]         ; 00554980
    FNSTSW AX                           ; 00554983
    SAHF                                ; 00554985
    JNZ 0x00554790                      ; 00554986
        ;   XREF to: 00554790 (CONDITIONAL_JUMP)  ; LAB_00554790
    MOV ESI,dword ptr [ESP + 0xac]      ; 0055498c
    TEST dword ptr [EBX + 0x144],ESI    ; 00554993
    JZ 0x00554678                       ; 00554999
        ;   XREF to: 00554678 (CONDITIONAL_JUMP)  ; LAB_00554678
    JMP 0x0055479d                      ; 0055499f
        ;   XREF to: 0055479d (UNCONDITIONAL_JUMP)  ; LAB_0055479d
    MOV EDX,dword ptr [0x020ab728]      ; 005549a4 | DAT_020ab728
        ;   Label: LAB_005549a4
    XOR ESI,ESI                         ; 005549aa
    TEST EDX,EDX                        ; 005549ac
    JLE 0x005549e0                      ; 005549ae
        ;   XREF to: 005549e0 (CONDITIONAL_JUMP)  ; LAB_005549e0
    MOV EDX,dword ptr [ESP + 0xd8]      ; 005549b0
    XOR ECX,ECX                         ; 005549b7
    MOV EBX,dword ptr [0x020ab728]      ; 005549b9 | DAT_020ab728
        ;   Label: LAB_005549b9
    ADD EDX,0x4                         ; 005549bf
    MOV EAX,dword ptr [ECX + 0x20ab72c] ; 005549c2
    ADD ECX,0x8                         ; 005549c8
    INC ESI                             ; 005549cb
    MOV dword ptr [EDX + 0x15f6fc],EAX  ; 005549cc
    CMP ESI,EBX                         ; 005549d2
    JL 0x005549b9                       ; 005549d4
        ;   XREF to: 005549b9 (CONDITIONAL_JUMP)  ; LAB_005549b9
    LEA EAX,[EAX]                       ; 005549d6
    LEA EDX,[EDX]                       ; 005549dc
    MOV EDX,dword ptr [ESP + 0xd8]      ; 005549e0
        ;   Label: LAB_005549e0
    MOV EAX,[0x020ab728]                ; 005549e7 | DAT_020ab728
    JMP 0x0055471d                      ; 005549ec
        ;   XREF to: 0055471d (UNCONDITIONAL_JUMP)  ; LAB_0055471d
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 005549f1
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_005549f1
    MOV EDX,dword ptr [ESP + 0xb4]      ; 005549f6
    SUB EAX,EDX                         ; 005549fd
    MOV dword ptr [ESP + 0xc0],EAX      ; 005549ff
    FILD dword ptr [ESP + 0xc0]         ; 00554a06
    FMUL double ptr [0x005f0b96]        ; 00554a0d | DAT_005f0b96
    MOV EAX,[0x0061d95c]                ; 00554a13 | g_CGamePtr
    FMUL double ptr [0x005f0b9e]        ; 00554a18 | DAT_005f0b9e
    FLD float ptr [EAX + 0x294]         ; 00554a1e | g_CGameInstance.delta_time_float
    FXCH                                ; 00554a24
    FMUL double ptr [0x005f0ba6]        ; 00554a26 | DAT_005f0ba6
    FDIVRP                              ; 00554a2c
    SUB ESP,0x8                         ; 00554a2e
    MOV ECX,dword ptr [0x020ab728]      ; 00554a31 | DAT_020ab728
    FSTP double ptr [ESP]               ; 00554a37
    PUSH ECX                            ; 00554a3a
    PUSH 0x5f0b6a                       ; 00554a3b | = "buildDispList %d items : %3.2f ms\n"
    MOV EBX,dword ptr [0x00611100]      ; 00554a40 | g_CConsolePtr
    PUSH EBX                            ; 00554a46 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00554a47
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 00554a4c
    ADD ESP,0xc4                        ; 00554a4f
    POP EBP                             ; 00554a55
    POP EDI                             ; 00554a56
    POP ESI                             ; 00554a57
    POP EBX                             ; 00554a58
    RET                                 ; 00554a59

