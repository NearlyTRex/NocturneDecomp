; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SIZE_T __cdecl crt_stdio_c_fread_FUN_005fd990(void *buffer,SIZE_T size,SIZE_T count,_FILE *file)
;
; Parameters:
; void *           Stack[0x4]:4   buffer
; SIZE_T           Stack[0x8]:4   size
; SIZE_T           Stack[0xc]:4   count
; _FILE *          Stack[0x10]:4   file
;
; XREF[51]:
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0 at 00431b78
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 at 00433260
;   cockpit_ckptutil.c_readBitmapFile_FUN_00431870 at 004318dc
;   cockpit_pkbitmap.cpp_CPackedBitmap_parsePBGFile_FUN_0054b9b0 at 0054b9c9
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 at 0054b7c7
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 at 0054c0a8
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 at 0054c351
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 at 0044f907
;   core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0 at 00455243
;   core_dcube.cpp_CDemonCube_load_FUN_00457530 at 00457545
;   ... and 41 more
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_stdio.c_FillInputBuffer_FUN_005fe940
;   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
;   crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fd990
        ;   Label: crt_stdio.c_fread_FUN_005fd990
    PUSH ESI                            ; 005fd991
    PUSH EDI                            ; 005fd992
    PUSH EBP                            ; 005fd993
    SUB ESP,0x4                         ; 005fd994
    MOV ESI,dword ptr [ESP + 0x20]      ; 005fd997
    MOV EBX,dword ptr [ESP + 0x24]      ; 005fd99b
    MOV EDX,dword ptr [EBX + 0x10]      ; 005fd99f
    PUSH EDX                            ; 005fd9a2
    CALL dword ptr [0x00684ee8]         ; 005fd9a3 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV AH,byte ptr [EBX + 0xc]         ; 005fd9a9
    ADD ESP,0x4                         ; 005fd9ac
    TEST AH,0x1                         ; 005fd9af
    JNZ 0x005fd9d6                      ; 005fd9b2
        ;   XREF to: 005fd9d6 (CONDITIONAL_JUMP)  ; LAB_005fd9d6
    PUSH 0x4                            ; 005fd9b4
    CALL crt_errno.c_setErrno_FUN_00602790 ; 005fd9b6
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    OR byte ptr [EBX + 0xc],0x20        ; 005fd9bb
    ADD ESP,0x4                         ; 005fd9bf
    MOV EDX,dword ptr [EBX + 0x10]      ; 005fd9c2
    PUSH EDX                            ; 005fd9c5
    CALL dword ptr [0x00684eec]         ; 005fd9c6 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 005fd9cc
    XOR EAX,EAX                         ; 005fd9cf
    JMP 0x005fdb7f                      ; 005fd9d1
        ;   XREF to: 005fdb7f (UNCONDITIONAL_JUMP)  ; LAB_005fdb7f
    IMUL ESI,dword ptr [ESP + 0x1c]     ; 005fd9d6
        ;   Label: LAB_005fd9d6
    TEST ESI,ESI                        ; 005fd9db
    JNZ 0x005fd9f6                      ; 005fd9dd
        ;   XREF to: 005fd9f6 (CONDITIONAL_JUMP)  ; LAB_005fd9f6
    MOV EAX,dword ptr [EBX + 0x10]      ; 005fd9df
    PUSH EAX                            ; 005fd9e2
    CALL dword ptr [0x00684eec]         ; 005fd9e3 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 005fd9e9
    MOV EAX,ESI                         ; 005fd9ec
    ADD ESP,0x4                         ; 005fd9ee
    POP EBP                             ; 005fd9f1
    POP EDI                             ; 005fd9f2
    POP ESI                             ; 005fd9f3
    POP EBX                             ; 005fd9f4
    RET                                 ; 005fd9f5
    MOV EAX,dword ptr [EBX + 0x8]       ; 005fd9f6
        ;   Label: LAB_005fd9f6
    CMP dword ptr [EAX + 0x8],0x0       ; 005fd9f9
    JNZ 0x005fda08                      ; 005fd9fd
        ;   XREF to: 005fda08 (CONDITIONAL_JUMP)  ; LAB_005fda08
    PUSH EBX                            ; 005fd9ff
    CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0 ; 005fda00
        ;   XREF to: 006027e0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_InitializeFileBuffer_FUN_006027e0(_FILE * file)
    ADD ESP,0x4                         ; 005fda05
    XOR EBP,EBP                         ; 005fda08
        ;   Label: LAB_005fda08
    MOV DL,byte ptr [EBX + 0xc]         ; 005fda0a
    MOV dword ptr [ESP],EBP             ; 005fda0d
    TEST DL,0x40                        ; 005fda10
    JZ 0x005fdaf8                       ; 005fda13
        ;   XREF to: 005fdaf8 (CONDITIONAL_JUMP)  ; LAB_005fdaf8
    MOV EBP,ESI                         ; 005fda19
    MOV ECX,dword ptr [EBX + 0x4]       ; 005fda1b
        ;   Label: LAB_005fda1b
    TEST ECX,ECX                        ; 005fda1e
    JZ 0x005fda66                       ; 005fda20
        ;   XREF to: 005fda66 (CONDITIONAL_JUMP)  ; LAB_005fda66
    MOV EDX,ECX                         ; 005fda22
    CMP ECX,EBP                         ; 005fda24
    JBE 0x005fda2a                      ; 005fda26
        ;   XREF to: 005fda2a (CONDITIONAL_JUMP)  ; LAB_005fda2a
    MOV EDX,EBP                         ; 005fda28
    MOV EDI,dword ptr [ESP + 0x18]      ; 005fda2a
        ;   Label: LAB_005fda2a
    MOV ECX,EDX                         ; 005fda2e
    MOV ESI,dword ptr [EBX]             ; 005fda30
    PUSH ES                             ; 005fda32
    MOV AX,DS                           ; 005fda33
    MOV ES,AX                           ; 005fda35
    PUSH EDI                            ; 005fda37
    MOV EAX,ECX                         ; 005fda38
    SHR ECX,0x2                         ; 005fda3a
    MOVSD.REP ES:EDI,ESI                ; 005fda3d
    MOV CL,AL                           ; 005fda3f
    AND CL,0x3                          ; 005fda41
    MOVSB.REP ES:EDI,ESI                ; 005fda44
    POP EDI                             ; 005fda46
    POP ES                              ; 005fda47
    SUB EBP,EDX                         ; 005fda48
    MOV ECX,dword ptr [ESP]             ; 005fda4a
    MOV ESI,dword ptr [EBX]             ; 005fda4d
    ADD EDI,EDX                         ; 005fda4f
    MOV EAX,dword ptr [EBX + 0x4]       ; 005fda51
    MOV dword ptr [ESP + 0x18],EDI      ; 005fda54
    ADD ESI,EDX                         ; 005fda58
    SUB EAX,EDX                         ; 005fda5a
    ADD ECX,EDX                         ; 005fda5c
    MOV dword ptr [EBX],ESI             ; 005fda5e
    MOV dword ptr [ESP],ECX             ; 005fda60
    MOV dword ptr [EBX + 0x4],EAX       ; 005fda63
    TEST EBP,EBP                        ; 005fda66
        ;   Label: LAB_005fda66
    JZ 0x005fdb69                       ; 005fda68
        ;   XREF to: 005fdb69 (CONDITIONAL_JUMP)  ; LAB_005fdb69
    CMP EBP,dword ptr [EBX + 0x14]      ; 005fda6e
    JNC 0x005fda79                      ; 005fda71
        ;   XREF to: 005fda79 (CONDITIONAL_JUMP)  ; LAB_005fda79
    TEST byte ptr [EBX + 0xd],0x4       ; 005fda73
    JZ 0x005fdae2                       ; 005fda77
        ;   XREF to: 005fdae2 (CONDITIONAL_JUMP)  ; LAB_005fdae2
    MOV EDX,dword ptr [EBX + 0x8]       ; 005fda79
        ;   Label: LAB_005fda79
    MOV EDX,dword ptr [EDX + 0x8]       ; 005fda7c
    MOV dword ptr [EBX],EDX             ; 005fda7f
    MOV EAX,EBP                         ; 005fda81
    MOV DL,byte ptr [EBX + 0xd]         ; 005fda83
    MOV dword ptr [EBX + 0x4],0x0       ; 005fda86
    TEST DL,0x4                         ; 005fda8d
    JNZ 0x005fda9f                      ; 005fda90
        ;   XREF to: 005fda9f (CONDITIONAL_JUMP)  ; LAB_005fda9f
    CMP EBP,0x200                       ; 005fda92
    JBE 0x005fda9f                      ; 005fda98
        ;   XREF to: 005fda9f (CONDITIONAL_JUMP)  ; LAB_005fda9f
    XOR AL,AL                           ; 005fda9a
    AND AH,0xfe                         ; 005fda9c
    PUSH EAX                            ; 005fda9f
        ;   Label: LAB_005fda9f
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005fdaa0
    PUSH EDI                            ; 005fdaa4
    MOV EAX,dword ptr [EBX + 0x10]      ; 005fdaa5
    PUSH EAX                            ; 005fdaa8
    CALL crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880 ; 005fdaa9
        ;   XREF to: 00602880 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880(int file_handle_index, void * buffer, int bytes_to_read)
    ADD ESP,0xc                         ; 005fdaae
    CMP EAX,-0x1                        ; 005fdab1
    JNZ 0x005fdabf                      ; 005fdab4
        ;   XREF to: 005fdabf (CONDITIONAL_JUMP)  ; LAB_005fdabf
    OR byte ptr [EBX + 0xc],0x20        ; 005fdab6
    JMP 0x005fdb69                      ; 005fdaba
        ;   XREF to: 005fdb69 (UNCONDITIONAL_JUMP)  ; LAB_005fdb69
    TEST EAX,EAX                        ; 005fdabf
        ;   Label: LAB_005fdabf
    JNZ 0x005fdacc                      ; 005fdac1
        ;   XREF to: 005fdacc (CONDITIONAL_JUMP)  ; LAB_005fdacc
    OR byte ptr [EBX + 0xc],0x10        ; 005fdac3
    JMP 0x005fdb69                      ; 005fdac7
        ;   XREF to: 005fdb69 (UNCONDITIONAL_JUMP)  ; LAB_005fdb69
    MOV ECX,dword ptr [ESP]             ; 005fdacc
        ;   Label: LAB_005fdacc
    LEA EDX,[EDI + EAX*0x1]             ; 005fdacf
    SUB EBP,EAX                         ; 005fdad2
    ADD ECX,EAX                         ; 005fdad4
    MOV dword ptr [ESP + 0x18],EDX      ; 005fdad6
    MOV dword ptr [ESP],ECX             ; 005fdada
    JMP 0x005fda1b                      ; 005fdadd
        ;   XREF to: 005fda1b (UNCONDITIONAL_JUMP)  ; LAB_005fda1b
    PUSH EBX                            ; 005fdae2
        ;   Label: LAB_005fdae2
    CALL crt_stdio.c_FillInputBuffer_FUN_005fe940 ; 005fdae3
        ;   XREF to: 005fe940 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_FillInputBuffer_FUN_005fe940(_FILE * file)
    ADD ESP,0x4                         ; 005fdae8
    TEST EAX,EAX                        ; 005fdaeb
    JZ 0x005fdb69                       ; 005fdaed
        ;   XREF to: 005fdb69 (CONDITIONAL_JUMP)  ; LAB_005fdb69
    JMP 0x005fda1b                      ; 005fdaf3
        ;   XREF to: 005fda1b (UNCONDITIONAL_JUMP)  ; LAB_005fda1b
    MOV EBP,dword ptr [ESP + 0x18]      ; 005fdaf8
        ;   Label: LAB_005fdaf8
    ADD ESI,EBP                         ; 005fdafc
    XOR EDI,EDI                         ; 005fdafe
    CMP EDI,dword ptr [EBX + 0x4]       ; 005fdb00
        ;   Label: LAB_005fdb00
    JNZ 0x005fdb12                      ; 005fdb03
        ;   XREF to: 005fdb12 (CONDITIONAL_JUMP)  ; LAB_005fdb12
    PUSH EBX                            ; 005fdb05
    CALL crt_stdio.c_FillInputBuffer_FUN_005fe940 ; 005fdb06
        ;   XREF to: 005fe940 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_FillInputBuffer_FUN_005fe940(_FILE * file)
    ADD ESP,0x4                         ; 005fdb0b
    TEST EAX,EAX                        ; 005fdb0e
    JZ 0x005fdb69                       ; 005fdb10
        ;   XREF to: 005fdb69 (CONDITIONAL_JUMP)  ; LAB_005fdb69
    MOV EDX,dword ptr [EBX + 0x4]       ; 005fdb12
        ;   Label: LAB_005fdb12
    DEC EDX                             ; 005fdb15
    MOV EAX,dword ptr [EBX]             ; 005fdb16
    MOV dword ptr [EBX + 0x4],EDX       ; 005fdb18
    LEA EDX,[EAX + 0x1]                 ; 005fdb1b
    MOV dword ptr [EBX],EDX             ; 005fdb1e
    MOV AL,byte ptr [EAX]               ; 005fdb20
    AND EAX,0xff                        ; 005fdb22
    CMP EAX,0xd                         ; 005fdb27
    JNZ 0x005fdb4f                      ; 005fdb2a
        ;   XREF to: 005fdb4f (CONDITIONAL_JUMP)  ; LAB_005fdb4f
    CMP EDI,dword ptr [EBX + 0x4]       ; 005fdb2c
    JNZ 0x005fdb3e                      ; 005fdb2f
        ;   XREF to: 005fdb3e (CONDITIONAL_JUMP)  ; LAB_005fdb3e
    PUSH EBX                            ; 005fdb31
    CALL crt_stdio.c_FillInputBuffer_FUN_005fe940 ; 005fdb32
        ;   XREF to: 005fe940 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_FillInputBuffer_FUN_005fe940(_FILE * file)
    ADD ESP,0x4                         ; 005fdb37
    TEST EAX,EAX                        ; 005fdb3a
    JZ 0x005fdb69                       ; 005fdb3c
        ;   XREF to: 005fdb69 (CONDITIONAL_JUMP)  ; LAB_005fdb69
    DEC dword ptr [EBX + 0x4]           ; 005fdb3e
        ;   Label: LAB_005fdb3e
    MOV EAX,dword ptr [EBX]             ; 005fdb41
    LEA EDX,[EAX + 0x1]                 ; 005fdb43
    MOV dword ptr [EBX],EDX             ; 005fdb46
    MOV AL,byte ptr [EAX]               ; 005fdb48
    AND EAX,0xff                        ; 005fdb4a
    CMP EAX,0x1a                        ; 005fdb4f
        ;   Label: LAB_005fdb4f
    JNZ 0x005fdb5a                      ; 005fdb52
        ;   XREF to: 005fdb5a (CONDITIONAL_JUMP)  ; LAB_005fdb5a
    OR byte ptr [EBX + 0xc],0x10        ; 005fdb54
    JMP 0x005fdb69                      ; 005fdb58
        ;   XREF to: 005fdb69 (UNCONDITIONAL_JUMP)  ; LAB_005fdb69
    MOV EDX,dword ptr [ESP]             ; 005fdb5a
        ;   Label: LAB_005fdb5a
    INC EBP                             ; 005fdb5d
    INC EDX                             ; 005fdb5e
    MOV byte ptr [EBP + -0x1],AL        ; 005fdb5f
    MOV dword ptr [ESP],EDX             ; 005fdb62
    CMP EBP,ESI                         ; 005fdb65
    JNZ 0x005fdb00                      ; 005fdb67
        ;   XREF to: 005fdb00 (CONDITIONAL_JUMP)  ; LAB_005fdb00
    MOV ESI,dword ptr [EBX + 0x10]      ; 005fdb69
        ;   Label: LAB_005fdb69
    PUSH ESI                            ; 005fdb6c
    CALL dword ptr [0x00684eec]         ; 005fdb6d | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 005fdb73
    XOR EDX,EDX                         ; 005fdb76
    MOV EAX,dword ptr [ESP]             ; 005fdb78
    DIV dword ptr [ESP + 0x1c]          ; 005fdb7b
    ADD ESP,0x4                         ; 005fdb7f
        ;   Label: LAB_005fdb7f
    POP EBP                             ; 005fdb82
    POP EDI                             ; 005fdb83
    POP ESI                             ; 005fdb84
    POP EBX                             ; 005fdb85
    RET                                 ; 005fdb86

