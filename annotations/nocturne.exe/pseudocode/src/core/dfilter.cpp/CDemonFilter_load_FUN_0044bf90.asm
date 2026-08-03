; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_0044bf90(CDemonFilter *this_ptr,char *filename)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_boxactor.cpp_FUN_0041f6e0 at 0041f9b3
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20 at 0044bdf1
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_0044c310 at 0044c44b
;
; Referenced Globals:
;   TerminatedCString s_rb_0057bf1e
;   TerminatedCString s_art_0057bf21
;   TerminatedCString s_core_dfilter_cpp_0057bf25
;   TerminatedCString s_CDemonFilter_load_Bad_fi_0057bf39
;   TerminatedCString s_art_0057bf60
;   TerminatedCString s_core_dfilter_cpp_0057bf64
;   TerminatedCString s_CDemonFilter_load_Non_sq_0057bf78
;   TerminatedCString s_core_dfilter_cpp_0057bfa5
;   TerminatedCString s_CDemonFilter_load_Bad_fi_0057bfb9
;   TerminatedCString s_core_dfilter_cpp_0057bfe1
;   TerminatedCString s_CDemonFilter_load_Bad_fi_0057bff5
;   TerminatedCString s_rb_0057c01d
;   TerminatedCString s_art_0057c020
;   TerminatedCString s_core_dfilter_cpp_0057c024
;   TerminatedCString s_CDemonFilter_load_Bad_fi_0057c038
;   ... and 2 more
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20
;   core_main.c_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bf90
        ;   Label: core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90
    PUSH ESI                            ; 0044bf91
    PUSH EDI                            ; 0044bf92
    PUSH EBP                            ; 0044bf93
    SUB ESP,0x4                         ; 0044bf94
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044bf97
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0044bf9b
    PUSH 0x57bf1e                       ; 0044bf9f | = "rb"
    PUSH EDI                            ; 0044bfa4
    PUSH 0x57bf21                       ; 0044bfa5 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0044bfaa
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044bfaf
    MOV ESI,EAX                         ; 0044bfb2
    TEST EAX,EAX                        ; 0044bfb4
    JZ 0x0044c0f2                       ; 0044bfb6
        ;   XREF to: 0044c0f2 (CONDITIONAL_JUMP)  ; LAB_0044c0f2
    PUSH ESI                            ; 0044bfbc
        ;   Label: LAB_0044bfbc
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0044bfbd
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0044bfc2
    PUSH EDI                            ; 0044bfc5
    PUSH 0x57bf60                       ; 0044bfc6 | = "art"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 0044bfcb
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0044bfd0
    MOV dword ptr [ESP],EAX             ; 0044bfd3
    MOV EDX,EAX                         ; 0044bfd6
    FILD dword ptr [ESP]                ; 0044bfd8
    FSQRT                               ; 0044bfdb
    CALL crt_math.c_round_FUN_00563a30  ; 0044bfdd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EAX,EDX                         ; 0044bfe2
    FISTP dword ptr [EBX]               ; 0044bfe4
    SAR EDX,0x1f                        ; 0044bfe6
    MOV ECX,dword ptr [EBX]             ; 0044bfe9
    IDIV ECX                            ; 0044bfeb
    MOV dword ptr [EBX + 0x4],EAX       ; 0044bfed
    MOV EAX,dword ptr [EBX]             ; 0044bff0
    MOV ESI,dword ptr [EBX + 0x4]       ; 0044bff2
    CMP EAX,ESI                         ; 0044bff5
    JZ 0x0044c01f                       ; 0044bff7
        ;   XREF to: 0044c01f (CONDITIONAL_JUMP)  ; LAB_0044c01f
    PUSH ESI                            ; 0044bff9
    MOV ECX,dword ptr [EBX]             ; 0044bffa
    PUSH ECX                            ; 0044bffc
    MOV EBP,0x57bf64                    ; 0044bffd | = "..\\core\\dfilter.cpp"
    MOV EAX,0xb7                        ; 0044c002
    PUSH 0x57bf78                       ; 0044c007 | = "CDemonFilter::load - Non-square filte..."
    MOV dword ptr [0x01cc4800],EBP      ; 0044c00c | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0044c012 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044c017
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 0044c01c
    MOV ESI,dword ptr [EBX]             ; 0044c01f
        ;   Label: LAB_0044c01f
    CMP ESI,0x40                        ; 0044c021
    JGE 0x0044c11b                      ; 0044c024
        ;   XREF to: 0044c11b (CONDITIONAL_JUMP)  ; LAB_0044c11b
    MOV ECX,dword ptr [EBX]             ; 0044c02a
        ;   Label: LAB_0044c02a
    PUSH ECX                            ; 0044c02c
    MOV EAX,0x57bfa5                    ; 0044c02d | = "..\\core\\dfilter.cpp"
    MOV EDX,0xb9                        ; 0044c032
    PUSH 0x57bfb9                       ; 0044c037 | = "CDemonFilter::load - Bad filter size %d"
    MOV [0x01cc4800],EAX                ; 0044c03c | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0044c041 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044c047
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0044c04c
    MOV ESI,dword ptr [EBX + 0x4]       ; 0044c04f
        ;   Label: LAB_0044c04f
    CMP ESI,0x40                        ; 0044c052
    JGE 0x0044c12c                      ; 0044c055
        ;   XREF to: 0044c12c (CONDITIONAL_JUMP)  ; LAB_0044c12c
    MOV ECX,dword ptr [EBX + 0x4]       ; 0044c05b
        ;   Label: LAB_0044c05b
    PUSH ECX                            ; 0044c05e
    MOV EAX,0x57bfe1                    ; 0044c05f | = "..\\core\\dfilter.cpp"
    MOV EDX,0xbc                        ; 0044c064
    PUSH 0x57bff5                       ; 0044c069 | = "CDemonFilter::load - Bad filter size %d"
    MOV [0x01cc4800],EAX                ; 0044c06e | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0044c073 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044c079
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0044c07e
    PUSH EBX                            ; 0044c081
        ;   Label: LAB_0044c081
    CALL core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20 ; 0044c082
        ;   XREF to: 0044bf20 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 0044c087
    PUSH 0x57c01d                       ; 0044c08a | = "rb"
    PUSH EDI                            ; 0044c08f
    PUSH 0x57c020                       ; 0044c090 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0044c095
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044c09a
    MOV ESI,EAX                         ; 0044c09d
    TEST EAX,EAX                        ; 0044c09f
    JZ 0x0044c13d                       ; 0044c0a1
        ;   XREF to: 0044c13d (CONDITIONAL_JUMP)  ; LAB_0044c13d
    PUSH ESI                            ; 0044c0a7
        ;   Label: LAB_0044c0a7
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044c0a8
    PUSH EDX                            ; 0044c0ab
    MOV ECX,dword ptr [EBX]             ; 0044c0ac
    PUSH ECX                            ; 0044c0ae
    MOV EBP,dword ptr [EBX + 0x48]      ; 0044c0af
    PUSH EBP                            ; 0044c0b2
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044c0b3
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044c0b8
    PUSH ESI                            ; 0044c0bb
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0044c0bc
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0044c0c1
    XOR ECX,ECX                         ; 0044c0c4
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044c0c6
        ;   Label: LAB_0044c0c6
    MOV EDX,dword ptr [EBX]             ; 0044c0c9
    IMUL EDX,EAX                        ; 0044c0cb
    CMP ECX,EDX                         ; 0044c0ce
    JGE 0x0044c164                      ; 0044c0d0
        ;   XREF to: 0044c164 (CONDITIONAL_JUMP)  ; LAB_0044c164
    MOV ESI,dword ptr [EBX + 0x48]      ; 0044c0d6
    XOR EDX,EDX                         ; 0044c0d9
    MOV DL,byte ptr [ECX + ESI*0x1]     ; 0044c0db
    MOV EAX,EDX                         ; 0044c0de
    SAR EDX,0x1f                        ; 0044c0e0
    SHL EDX,0x2                         ; 0044c0e3
    SBB EAX,EDX                         ; 0044c0e6
    SAR EAX,0x2                         ; 0044c0e8
    INC ECX                             ; 0044c0eb
    MOV byte ptr [ECX + ESI*0x1 + -0x1],AL ; 0044c0ec
    JMP 0x0044c0c6                      ; 0044c0f0
        ;   XREF to: 0044c0c6 (UNCONDITIONAL_JUMP)  ; LAB_0044c0c6
    PUSH EDI                            ; 0044c0f2
        ;   Label: LAB_0044c0f2
    MOV EDX,0x57bf25                    ; 0044c0f3 | = "..\\core\\dfilter.cpp"
    MOV ECX,0xab                        ; 0044c0f8
    PUSH 0x57bf39                       ; 0044c0fd | = "CDemonFilter::load - Bad filename : %s"
    MOV dword ptr [0x01cc4800],EDX      ; 0044c102 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0044c108 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044c10e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0044c113
    JMP 0x0044bfbc                      ; 0044c116
        ;   XREF to: 0044bfbc (UNCONDITIONAL_JUMP)  ; LAB_0044bfbc
    CMP ESI,0x100                       ; 0044c11b
        ;   Label: LAB_0044c11b
    JG 0x0044c02a                       ; 0044c121
        ;   XREF to: 0044c02a (CONDITIONAL_JUMP)  ; LAB_0044c02a
    JMP 0x0044c04f                      ; 0044c127
        ;   XREF to: 0044c04f (UNCONDITIONAL_JUMP)  ; LAB_0044c04f
    CMP ESI,0x100                       ; 0044c12c
        ;   Label: LAB_0044c12c
    JG 0x0044c05b                       ; 0044c132
        ;   XREF to: 0044c05b (CONDITIONAL_JUMP)  ; LAB_0044c05b
    JMP 0x0044c081                      ; 0044c138
        ;   XREF to: 0044c081 (UNCONDITIONAL_JUMP)  ; LAB_0044c081
    MOV EBP,0x57c024                    ; 0044c13d | = "..\\core\\dfilter.cpp"
        ;   Label: LAB_0044c13d
    MOV EAX,0xc6                        ; 0044c142
    PUSH 0x57c038                       ; 0044c147 | = "CDemonFilter::load - Bad filename"
    MOV dword ptr [0x01cc4800],EBP      ; 0044c14c | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0044c152 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044c157
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044c15c
    JMP 0x0044c0a7                      ; 0044c15f
        ;   XREF to: 0044c0a7 (UNCONDITIONAL_JUMP)  ; LAB_0044c0a7
    ADD EBX,0x8                         ; 0044c164
        ;   Label: LAB_0044c164
    MOV ESI,EDI                         ; 0044c167
    MOV EDI,EBX                         ; 0044c169
    PUSH EDI                            ; 0044c16b
    MOV AL,byte ptr [ESI]               ; 0044c16c
        ;   Label: LAB_0044c16c
    MOV byte ptr [EDI],AL               ; 0044c16e
    CMP AL,0x0                          ; 0044c170
    JZ 0x0044c184                       ; 0044c172
        ;   XREF to: 0044c184 (CONDITIONAL_JUMP)  ; LAB_0044c184
    MOV AL,byte ptr [ESI + 0x1]         ; 0044c174
    ADD ESI,0x2                         ; 0044c177
    MOV byte ptr [EDI + 0x1],AL         ; 0044c17a
    ADD EDI,0x2                         ; 0044c17d
    CMP AL,0x0                          ; 0044c180
    JNZ 0x0044c16c                      ; 0044c182
        ;   XREF to: 0044c16c (CONDITIONAL_JUMP)  ; LAB_0044c16c
    POP EDI                             ; 0044c184
        ;   Label: LAB_0044c184
    ADD ESP,0x4                         ; 0044c185
    POP EBP                             ; 0044c188
    POP EDI                             ; 0044c189
    POP ESI                             ; 0044c18a
    POP EBX                             ; 0044c18b
    RET                                 ; 0044c18c

