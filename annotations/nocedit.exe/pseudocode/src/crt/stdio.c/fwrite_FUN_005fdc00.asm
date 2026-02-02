; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SIZE_T __cdecl crt_stdio_c_fwrite_FUN_005fdc00(void *ptr,SIZE_T size,SIZE_T count,_FILE *file)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; SIZE_T           Stack[0x8]:4   size
; SIZE_T           Stack[0xc]:4   count
; _FILE *          Stack[0x10]:4   file
;
; XREF[23]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_writePBGHeader_FUN_0054b930 at 0054b967
;   cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0 at 0054b64a
;   core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250 at 004552ab
;   core_dcube.cpp_CDemonCube_save_FUN_00457430 at 00457445
;   core_dpart.cpp_CDemonPart_write_FUN_00482330 at 00482363
;   core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50 at 00494f66
;   core_dtri.cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0 at 0049a600
;   core_procedur.cpp_CProceduralTexture_createWaterFrames_FUN_005542b0 at 005544cd
;   core_setdir.cpp_CZThumb_write_FUN_00574b20 at 00574b37
;   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 at 00577007
;   ... and 13 more
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_stdio.c_fflushInternal_FUN_006039d0
;   crt_stdio.c_fputc_FUN_006007a0
;   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
;   crt_stdio.c_write_FUN_006038c0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fdc00
        ;   Label: crt_stdio.c_fwrite_FUN_005fdc00
    PUSH ESI                            ; 005fdc01
    PUSH EDI                            ; 005fdc02
    PUSH EBP                            ; 005fdc03
    SUB ESP,0x10                        ; 005fdc04
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005fdc07
    MOV EBX,dword ptr [ESP + 0x30]      ; 005fdc0b
    MOV EDX,dword ptr [EBX + 0x10]      ; 005fdc0f
    PUSH EDX                            ; 005fdc12
    CALL dword ptr [0x00684ee8]         ; 005fdc13 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV AH,byte ptr [EBX + 0xc]         ; 005fdc19
    ADD ESP,0x4                         ; 005fdc1c
    TEST AH,0x2                         ; 005fdc1f
    JNZ 0x005fdc4b                      ; 005fdc22
        ;   XREF to: 005fdc4b (CONDITIONAL_JUMP)  ; LAB_005fdc4b
    PUSH 0x4                            ; 005fdc24
    CALL crt_errno.c_setErrno_FUN_00602790 ; 005fdc26
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 005fdc2b
    MOV AH,byte ptr [EBX + 0xc]         ; 005fdc2e
    MOV EDX,dword ptr [EBX + 0x10]      ; 005fdc31
    OR AH,0x20                          ; 005fdc34
    PUSH EDX                            ; 005fdc37
    MOV byte ptr [EBX + 0xc],AH         ; 005fdc38
    CALL dword ptr [0x00684eec]         ; 005fdc3b | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 005fdc41
    XOR EAX,EAX                         ; 005fdc44
    JMP 0x005fde31                      ; 005fdc46
        ;   XREF to: 005fde31 (UNCONDITIONAL_JUMP)  ; LAB_005fde31
    IMUL EDI,dword ptr [ESP + 0x28]     ; 005fdc4b
        ;   Label: LAB_005fdc4b
    TEST EDI,EDI                        ; 005fdc50
    JNZ 0x005fdc6b                      ; 005fdc52
        ;   XREF to: 005fdc6b (CONDITIONAL_JUMP)  ; LAB_005fdc6b
    MOV EAX,dword ptr [EBX + 0x10]      ; 005fdc54
    PUSH EAX                            ; 005fdc57
    CALL dword ptr [0x00684eec]         ; 005fdc58 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 005fdc5e
    MOV EAX,EDI                         ; 005fdc61
    ADD ESP,0x10                        ; 005fdc63
    POP EBP                             ; 005fdc66
    POP EDI                             ; 005fdc67
    POP ESI                             ; 005fdc68
    POP EBX                             ; 005fdc69
    RET                                 ; 005fdc6a
    MOV EAX,dword ptr [EBX + 0x8]       ; 005fdc6b
        ;   Label: LAB_005fdc6b
    CMP dword ptr [EAX + 0x8],0x0       ; 005fdc6e
    JNZ 0x005fdc7d                      ; 005fdc72
        ;   XREF to: 005fdc7d (CONDITIONAL_JUMP)  ; LAB_005fdc7d
    PUSH EBX                            ; 005fdc74
    CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0 ; 005fdc75
        ;   XREF to: 006027e0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_InitializeFileBuffer_FUN_006027e0(_FILE * file)
    ADD ESP,0x4                         ; 005fdc7a
    MOV EAX,dword ptr [EBX + 0xc]       ; 005fdc7d
        ;   Label: LAB_005fdc7d
    MOV DL,byte ptr [EBX + 0xc]         ; 005fdc80
    XOR EBP,EBP                         ; 005fdc83
    AND EAX,0x30                        ; 005fdc85
    AND DL,0xcf                         ; 005fdc88
    MOV dword ptr [ESP + 0x8],EBP       ; 005fdc8b
    MOV dword ptr [ESP],EAX             ; 005fdc8f
    MOV byte ptr [EBX + 0xc],DL         ; 005fdc92
    TEST DL,0x40                        ; 005fdc95
    JZ 0x005fdd83                       ; 005fdc98
        ;   XREF to: 005fdd83 (CONDITIONAL_JUMP)  ; LAB_005fdd83
    MOV dword ptr [ESP + 0xc],EDI       ; 005fdc9e
    CMP dword ptr [EBX + 0x4],0x0       ; 005fdca2
        ;   Label: LAB_005fdca2
    JNZ 0x005fdcf2                      ; 005fdca6
        ;   XREF to: 005fdcf2 (CONDITIONAL_JUMP)  ; LAB_005fdcf2
    MOV EAX,dword ptr [ESP + 0xc]       ; 005fdca8
    CMP EAX,dword ptr [EBX + 0x14]      ; 005fdcac
    JC 0x005fdcf2                       ; 005fdcaf
        ;   XREF to: 005fdcf2 (CONDITIONAL_JUMP)  ; LAB_005fdcf2
    XOR AL,AL                           ; 005fdcb1
    AND AH,0xfe                         ; 005fdcb3
    TEST EAX,EAX                        ; 005fdcb6
    JNZ 0x005fdcbe                      ; 005fdcb8
        ;   XREF to: 005fdcbe (CONDITIONAL_JUMP)  ; LAB_005fdcbe
    MOV EAX,dword ptr [ESP + 0xc]       ; 005fdcba
    PUSH EAX                            ; 005fdcbe
        ;   Label: LAB_005fdcbe
    MOV ESI,dword ptr [ESP + 0x28]      ; 005fdcbf
    PUSH ESI                            ; 005fdcc3
    MOV EDI,dword ptr [EBX + 0x10]      ; 005fdcc4
    PUSH EDI                            ; 005fdcc7
    CALL crt_stdio.c_write_FUN_006038c0 ; 005fdcc8
        ;   XREF to: 006038c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_write_FUN_006038c0(int file_handle_index, void * buffer, int bytes_to_write)
    ADD ESP,0xc                         ; 005fdccd
    MOV EBP,EAX                         ; 005fdcd0
    CMP EAX,-0x1                        ; 005fdcd2
    JZ 0x005fdcec                       ; 005fdcd5
        ;   XREF to: 005fdcec (CONDITIONAL_JUMP)  ; LAB_005fdcec
    TEST EAX,EAX                        ; 005fdcd7
    JNZ 0x005fdd50                      ; 005fdcd9
        ;   XREF to: 005fdd50 (CONDITIONAL_JUMP)  ; LAB_005fdd50
    CALL dword ptr [0x00684ee4]         ; 005fdcdf | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    MOV dword ptr [EAX + 0x4],0xc       ; 005fdce5
    OR byte ptr [EBX + 0xc],0x20        ; 005fdcec
        ;   Label: LAB_005fdcec
    JMP 0x005fdd50                      ; 005fdcf0
        ;   XREF to: 005fdd50 (UNCONDITIONAL_JUMP)  ; LAB_005fdd50
    MOV EBP,dword ptr [EBX + 0x14]      ; 005fdcf2
        ;   Label: LAB_005fdcf2
    MOV ESI,dword ptr [EBX + 0x4]       ; 005fdcf5
    MOV EDI,dword ptr [ESP + 0xc]       ; 005fdcf8
    SUB EBP,ESI                         ; 005fdcfc
    CMP EBP,EDI                         ; 005fdcfe
    JBE 0x005fdd04                      ; 005fdd00
        ;   XREF to: 005fdd04 (CONDITIONAL_JUMP)  ; LAB_005fdd04
    MOV EBP,EDI                         ; 005fdd02
    MOV ESI,dword ptr [ESP + 0x24]      ; 005fdd04
        ;   Label: LAB_005fdd04
    MOV ECX,EBP                         ; 005fdd08
    MOV EDI,dword ptr [EBX]             ; 005fdd0a
    PUSH ES                             ; 005fdd0c
    MOV AX,DS                           ; 005fdd0d
    MOV ES,AX                           ; 005fdd0f
    PUSH EDI                            ; 005fdd11
    MOV EAX,ECX                         ; 005fdd12
    SHR ECX,0x2                         ; 005fdd14
    MOVSD.REP ES:EDI,ESI                ; 005fdd17
    MOV CL,AL                           ; 005fdd19
    AND CL,0x3                          ; 005fdd1b
    MOVSB.REP ES:EDI,ESI                ; 005fdd1e
    POP EDI                             ; 005fdd20
    POP ES                              ; 005fdd21
    MOV EAX,dword ptr [EBX]             ; 005fdd22
    MOV EDX,dword ptr [EBX + 0x4]       ; 005fdd24
    MOV CH,byte ptr [EBX + 0xd]         ; 005fdd27
    ADD EAX,EBP                         ; 005fdd2a
    ADD EDX,EBP                         ; 005fdd2c
    MOV dword ptr [EBX],EAX             ; 005fdd2e
    OR CH,0x10                          ; 005fdd30
    MOV dword ptr [EBX + 0x4],EDX       ; 005fdd33
    MOV byte ptr [EBX + 0xd],CH         ; 005fdd36
    MOV EAX,dword ptr [EBX + 0x4]       ; 005fdd39
    CMP EAX,dword ptr [EBX + 0x14]      ; 005fdd3c
    JZ 0x005fdd47                       ; 005fdd3f
        ;   XREF to: 005fdd47 (CONDITIONAL_JUMP)  ; LAB_005fdd47
    TEST byte ptr [EBX + 0xd],0x4       ; 005fdd41
    JZ 0x005fdd50                       ; 005fdd45
        ;   XREF to: 005fdd50 (CONDITIONAL_JUMP)  ; LAB_005fdd50
    PUSH EBX                            ; 005fdd47
        ;   Label: LAB_005fdd47
    CALL crt_stdio.c_fflushInternal_FUN_006039d0 ; 005fdd48
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflushInternal_FUN_006039d0(_FILE * file_handle)
    ADD ESP,0x4                         ; 005fdd4d
    MOV EAX,dword ptr [ESP + 0x24]      ; 005fdd50
        ;   Label: LAB_005fdd50
    MOV EDX,dword ptr [ESP + 0x8]       ; 005fdd54
    MOV ECX,dword ptr [ESP + 0xc]       ; 005fdd58
    ADD EAX,EBP                         ; 005fdd5c
    ADD EDX,EBP                         ; 005fdd5e
    MOV dword ptr [ESP + 0x24],EAX      ; 005fdd60
    MOV dword ptr [ESP + 0x8],EDX       ; 005fdd64
    SUB ECX,EBP                         ; 005fdd68
    MOV dword ptr [ESP + 0xc],ECX       ; 005fdd6a
    JZ 0x005fde03                       ; 005fdd6e
        ;   XREF to: 005fde03 (CONDITIONAL_JUMP)  ; LAB_005fde03
    TEST byte ptr [EBX + 0xc],0x20      ; 005fdd74
    JZ 0x005fdca2                       ; 005fdd78
        ;   XREF to: 005fdca2 (CONDITIONAL_JUMP)  ; LAB_005fdca2
    JMP 0x005fde03                      ; 005fdd7e
        ;   XREF to: 005fde03 (UNCONDITIONAL_JUMP)  ; LAB_005fde03
    MOV CL,byte ptr [EBX + 0xd]         ; 005fdd83
        ;   Label: LAB_005fdd83
    XOR ESI,ESI                         ; 005fdd86
    TEST CL,0x4                         ; 005fdd88
    JZ 0x005fdda1                       ; 005fdd8b
        ;   XREF to: 005fdda1 (CONDITIONAL_JUMP)  ; LAB_005fdda1
    MOV CH,CL                           ; 005fdd8d
    AND CH,0xfa                         ; 005fdd8f
    MOV AL,CH                           ; 005fdd92
    MOV byte ptr [EBX + 0xd],CH         ; 005fdd94
    OR AL,0x1                           ; 005fdd97
    MOV ESI,0x1                         ; 005fdd99
    MOV byte ptr [EBX + 0xd],AL         ; 005fdd9e
    MOV EAX,dword ptr [EBX + 0x8]       ; 005fdda1
        ;   Label: LAB_005fdda1
    MOV EBP,dword ptr [EAX + 0xc]       ; 005fdda4
    MOV dword ptr [ESP + 0x4],EBP       ; 005fdda7
    MOV dword ptr [EAX + 0xc],0x1       ; 005fddab
    MOV EBP,dword ptr [ESP + 0x24]      ; 005fddb2
    XOR EAX,EAX                         ; 005fddb6
        ;   Label: LAB_005fddb6
    PUSH EBX                            ; 005fddb8
    MOV AL,byte ptr [EBP]               ; 005fddb9
    PUSH EAX                            ; 005fddbc
    INC EBP                             ; 005fddbd
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 005fddbe
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    MOV DL,byte ptr [EBX + 0xc]         ; 005fddc3
    ADD ESP,0x8                         ; 005fddc6
    TEST DL,0x30                        ; 005fddc9
    JNZ 0x005fdddb                      ; 005fddcc
        ;   XREF to: 005fdddb (CONDITIONAL_JUMP)  ; LAB_005fdddb
    MOV ECX,dword ptr [ESP + 0x8]       ; 005fddce
    INC ECX                             ; 005fddd2
    MOV dword ptr [ESP + 0x8],ECX       ; 005fddd3
    CMP EDI,ECX                         ; 005fddd7
    JNZ 0x005fddb6                      ; 005fddd9
        ;   XREF to: 005fddb6 (CONDITIONAL_JUMP)  ; LAB_005fddb6
    MOV EAX,dword ptr [EBX + 0x8]       ; 005fdddb
        ;   Label: LAB_005fdddb
    MOV EDI,dword ptr [ESP + 0x4]       ; 005fddde
    MOV dword ptr [EAX + 0xc],EDI       ; 005fdde2
    TEST ESI,ESI                        ; 005fdde5
    JZ 0x005fde03                       ; 005fdde7
        ;   XREF to: 005fde03 (CONDITIONAL_JUMP)  ; LAB_005fde03
    MOV DH,byte ptr [EBX + 0xd]         ; 005fdde9
    AND DH,0xfa                         ; 005fddec
    MOV CL,DH                           ; 005fddef
    MOV byte ptr [EBX + 0xd],DH         ; 005fddf1
    OR CL,0x4                           ; 005fddf4
    PUSH EBX                            ; 005fddf7
    MOV byte ptr [EBX + 0xd],CL         ; 005fddf8
    CALL crt_stdio.c_fflushInternal_FUN_006039d0 ; 005fddfb
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflushInternal_FUN_006039d0(_FILE * file_handle)
    ADD ESP,0x4                         ; 005fde00
    TEST byte ptr [EBX + 0xc],0x20      ; 005fde03
        ;   Label: LAB_005fde03
    JZ 0x005fde0f                       ; 005fde07
        ;   XREF to: 005fde0f (CONDITIONAL_JUMP)  ; LAB_005fde0f
    XOR EDI,EDI                         ; 005fde09
    MOV dword ptr [ESP + 0x8],EDI       ; 005fde0b
    MOV EAX,dword ptr [ESP]             ; 005fde0f
        ;   Label: LAB_005fde0f
    MOV EBP,dword ptr [EBX + 0xc]       ; 005fde12
    OR EBP,EAX                          ; 005fde15
    MOV EAX,dword ptr [EBX + 0x10]      ; 005fde17
    PUSH EAX                            ; 005fde1a
    MOV dword ptr [EBX + 0xc],EBP       ; 005fde1b
    CALL dword ptr [0x00684eec]         ; 005fde1e | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 005fde24
    XOR EDX,EDX                         ; 005fde27
    MOV EAX,dword ptr [ESP + 0x8]       ; 005fde29
    DIV dword ptr [ESP + 0x28]          ; 005fde2d
    ADD ESP,0x10                        ; 005fde31
        ;   Label: LAB_005fde31
    POP EBP                             ; 005fde34
    POP EDI                             ; 005fde35
    POP ESI                             ; 005fde36
    POP EBX                             ; 005fde37
    RET                                 ; 005fde38

