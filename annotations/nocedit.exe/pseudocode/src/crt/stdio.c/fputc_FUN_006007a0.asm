; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_fputc_FUN_006007a0(int character,_FILE *file)
;
; Parameters:
; int              Stack[0x4]:4   character
; _FILE *          Stack[0x8]:4   file
;
; XREF[25]:
;   core_dfilter.cpp_CDemonFilter_save_FUN_00470510 at 00470591
;   core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260 at 004792c0
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 00479a02
;   core_dmodel.cpp_copyFile_FUN_0047c930 at 0047c9d8
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004dad32
;   core_game.cpp_captureDebugMovieFrame_FUN_004d7810 at 004d7a7e
;   core_msnedit.cpp_CDemonMission_saveWithNewName_FUN_00537f60 at 005380ca
;   core_msnedit.cpp_FUN_00537dd0 at 00537e59
;   core_procedur.cpp_CProceduralTexture_createWaterFrames_FUN_005542b0 at 00554524
;   core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0 at 0057fc44
;   ... and 15 more
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_stdio.c_fflushInternal_FUN_006039d0
;   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006007a0
        ;   Label: crt_stdio.c_fputc_FUN_006007a0
    PUSH ESI                            ; 006007a1
    PUSH EDI                            ; 006007a2
    PUSH EBP                            ; 006007a3
    MOV EBX,dword ptr [ESP + 0x18]      ; 006007a4
    MOV EDX,dword ptr [EBX + 0x10]      ; 006007a8
    PUSH EDX                            ; 006007ab
    CALL dword ptr [0x00684ee8]         ; 006007ac | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV EAX,dword ptr [EBX + 0x8]       ; 006007b2
    MOV ECX,dword ptr [EAX + 0xc]       ; 006007b5
    ADD ESP,0x4                         ; 006007b8
    CMP ECX,0x1                         ; 006007bb
    JZ 0x006007e2                       ; 006007be
        ;   XREF to: 006007e2 (CONDITIONAL_JUMP)  ; LAB_006007e2
    TEST ECX,ECX                        ; 006007c0
    JZ 0x006007db                       ; 006007c2
        ;   XREF to: 006007db (CONDITIONAL_JUMP)  ; LAB_006007db
    MOV EDI,dword ptr [EBX + 0x10]      ; 006007c4
    PUSH EDI                            ; 006007c7
    CALL dword ptr [0x00684eec]         ; 006007c8 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 006007ce
    ADD ESP,0x4                         ; 006007d3
    POP EBP                             ; 006007d6
    POP EDI                             ; 006007d7
    POP ESI                             ; 006007d8
    POP EBX                             ; 006007d9
    RET                                 ; 006007da
    MOV dword ptr [EAX + 0xc],0x1       ; 006007db
        ;   Label: LAB_006007db
    TEST byte ptr [EBX + 0xc],0x2       ; 006007e2
        ;   Label: LAB_006007e2
    JNZ 0x00600812                      ; 006007e6
        ;   XREF to: 00600812 (CONDITIONAL_JUMP)  ; LAB_00600812
    PUSH 0x4                            ; 006007e8
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006007ea
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 006007ef
    MOV CH,byte ptr [EBX + 0xc]         ; 006007f2
    MOV EAX,dword ptr [EBX + 0x10]      ; 006007f5
    OR CH,0x20                          ; 006007f8
    PUSH EAX                            ; 006007fb
    MOV byte ptr [EBX + 0xc],CH         ; 006007fc
    CALL dword ptr [0x00684eec]         ; 006007ff | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 00600805
    ADD ESP,0x4                         ; 0060080a
    POP EBP                             ; 0060080d
    POP EDI                             ; 0060080e
    POP ESI                             ; 0060080f
    POP EBX                             ; 00600810
    RET                                 ; 00600811
    MOV EAX,dword ptr [EBX + 0x8]       ; 00600812
        ;   Label: LAB_00600812
    CMP dword ptr [EAX + 0x8],0x0       ; 00600815
    JNZ 0x00600824                      ; 00600819
        ;   XREF to: 00600824 (CONDITIONAL_JUMP)  ; LAB_00600824
    PUSH EBX                            ; 0060081b
    CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0 ; 0060081c
        ;   XREF to: 006027e0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_InitializeFileBuffer_FUN_006027e0(_FILE * file)
    ADD ESP,0x4                         ; 00600821
    MOV EAX,dword ptr [ESP + 0x14]      ; 00600824
        ;   Label: LAB_00600824
    MOV ESI,0x400                       ; 00600828
    CMP EAX,0xa                         ; 0060082d
    JNZ 0x00600884                      ; 00600830
        ;   XREF to: 00600884 (CONDITIONAL_JUMP)  ; LAB_00600884
    MOV DL,byte ptr [EBX + 0xc]         ; 00600832
    MOV ESI,0x600                       ; 00600835
    TEST DL,0x40                        ; 0060083a
    JNZ 0x00600884                      ; 0060083d
        ;   XREF to: 00600884 (CONDITIONAL_JUMP)  ; LAB_00600884
    MOV DH,byte ptr [EBX + 0xd]         ; 0060083f
    OR DH,0x10                          ; 00600842
    MOV EAX,dword ptr [EBX]             ; 00600845
    MOV byte ptr [EBX + 0xd],DH         ; 00600847
    MOV byte ptr [EAX],0xd              ; 0060084a
    MOV EDX,dword ptr [EBX]             ; 0060084d
    INC EDX                             ; 0060084f
    MOV ECX,dword ptr [EBX + 0x4]       ; 00600850
    MOV dword ptr [EBX],EDX             ; 00600853
    INC ECX                             ; 00600855
    MOV EDI,dword ptr [EBX + 0x14]      ; 00600856
    MOV dword ptr [EBX + 0x4],ECX       ; 00600859
    CMP ECX,EDI                         ; 0060085c
    JNZ 0x00600884                      ; 0060085e
        ;   XREF to: 00600884 (CONDITIONAL_JUMP)  ; LAB_00600884
    PUSH EBX                            ; 00600860
    CALL crt_stdio.c_fflushInternal_FUN_006039d0 ; 00600861
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflushInternal_FUN_006039d0(_FILE * file_handle)
    ADD ESP,0x4                         ; 00600866
    TEST EAX,EAX                        ; 00600869
    JZ 0x00600884                       ; 0060086b
        ;   XREF to: 00600884 (CONDITIONAL_JUMP)  ; LAB_00600884
    MOV EBP,dword ptr [EBX + 0x10]      ; 0060086d
    PUSH EBP                            ; 00600870
    CALL dword ptr [0x00684eec]         ; 00600871 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 00600877
    ADD ESP,0x4                         ; 0060087c
    POP EBP                             ; 0060087f
    POP EDI                             ; 00600880
    POP ESI                             ; 00600881
    POP EBX                             ; 00600882
    RET                                 ; 00600883
    MOV CL,byte ptr [EBX + 0xd]         ; 00600884
        ;   Label: LAB_00600884
    MOV EAX,dword ptr [EBX]             ; 00600887
    OR CL,0x10                          ; 00600889
    MOV DL,byte ptr [ESP + 0x14]        ; 0060088c
    MOV byte ptr [EBX + 0xd],CL         ; 00600890
    MOV byte ptr [EAX],DL               ; 00600893
    MOV EBP,dword ptr [EBX]             ; 00600895
    INC EBP                             ; 00600897
    MOV EAX,dword ptr [EBX + 0x4]       ; 00600898
    MOV dword ptr [EBX],EBP             ; 0060089b
    INC EAX                             ; 0060089d
    MOV EDX,dword ptr [EBX + 0xc]       ; 0060089e
    MOV dword ptr [EBX + 0x4],EAX       ; 006008a1
    TEST ESI,EDX                        ; 006008a4
    JNZ 0x006008ad                      ; 006008a6
        ;   XREF to: 006008ad (CONDITIONAL_JUMP)  ; LAB_006008ad
    CMP EAX,dword ptr [EBX + 0x14]      ; 006008a8
    JNZ 0x006008d1                      ; 006008ab
        ;   XREF to: 006008d1 (CONDITIONAL_JUMP)  ; LAB_006008d1
    PUSH EBX                            ; 006008ad
        ;   Label: LAB_006008ad
    CALL crt_stdio.c_fflushInternal_FUN_006039d0 ; 006008ae
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflushInternal_FUN_006039d0(_FILE * file_handle)
    ADD ESP,0x4                         ; 006008b3
    TEST EAX,EAX                        ; 006008b6
    JZ 0x006008d1                       ; 006008b8
        ;   XREF to: 006008d1 (CONDITIONAL_JUMP)  ; LAB_006008d1
    MOV EDI,dword ptr [EBX + 0x10]      ; 006008ba
    PUSH EDI                            ; 006008bd
    CALL dword ptr [0x00684eec]         ; 006008be | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 006008c4
    ADD ESP,0x4                         ; 006008c9
    POP EBP                             ; 006008cc
    POP EDI                             ; 006008cd
    POP ESI                             ; 006008ce
    POP EBX                             ; 006008cf
    RET                                 ; 006008d0
    MOV ESI,dword ptr [EBX + 0x10]      ; 006008d1
        ;   Label: LAB_006008d1
    PUSH ESI                            ; 006008d4
    CALL dword ptr [0x00684eec]         ; 006008d5 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 006008db
    XOR EAX,EAX                         ; 006008de
    MOV AL,byte ptr [ESP + 0x14]        ; 006008e0
    POP EBP                             ; 006008e4
    POP EDI                             ; 006008e5
    POP ESI                             ; 006008e6
    POP EBX                             ; 006008e7
    RET                                 ; 006008e8

