; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_loadOrBuildColorMap_FUN_00402930(char * palette_filename)
;
; Parameters:
; char *           Stack[0x4]:4   palette_filename
; Local Variables:
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x5b]:1  local_5b
;
; XREF[3]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 00401069
;   shape_design.c_loadPalette_FUN_0046e810 at 0046e9eb
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f2d8
;
; Referenced Globals:
;   undefined4 s_Please_run_SETUP_0061302e
;   TerminatedCString s_engine_2d_c_006130f4
;   TerminatedCString s_hose_00613103
;   TerminatedCString s_map_00613109
;   TerminatedCString s_rb_0061310e
;   TerminatedCString s_fog_00613111
;   TerminatedCString s_wb_00613115
;   TerminatedCString s_fog_00613118
;   TerminatedCString s_engine_2d_c_0061311c
;   TerminatedCString s_Unable_to_write_quick_ma_0061312b
;   TerminatedCString s_engine_2d_c_00613146
;   TerminatedCString s_engine_2d_c_00613155
;   uchar[32768] g_ColorCubeLookup
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fwrite_FUN_005fdc00
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_buildColorLookupTable_FUN_00402870
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402930
        ;   Label: engine_2d.c_loadOrBuildColorMap_FUN_00402930
    PUSH ESI                            ; 00402931
    PUSH EDI                            ; 00402932
    SUB ESP,0x50                        ; 00402933
    MOV ESI,dword ptr [ESP + 0x60]      ; 00402936
    MOV EDI,ESP                         ; 0040293a
    MOV DL,0x2e                         ; 0040293c
    PUSH EDI                            ; 0040293e
    MOV AL,byte ptr [ESI]               ; 0040293f
        ;   Label: LAB_0040293f
    MOV byte ptr [EDI],AL               ; 00402941
    CMP AL,0x0                          ; 00402943
    JZ 0x00402957                       ; 00402945
        ;   XREF to: 00402957 (CONDITIONAL_JUMP)  ; LAB_00402957
    MOV AL,byte ptr [ESI + 0x1]         ; 00402947
    ADD ESI,0x2                         ; 0040294a
    MOV byte ptr [EDI + 0x1],AL         ; 0040294d
    ADD EDI,0x2                         ; 00402950
    CMP AL,0x0                          ; 00402953
    JNZ 0x0040293f                      ; 00402955
        ;   XREF to: 0040293f (CONDITIONAL_JUMP)  ; LAB_0040293f
    POP EDI                             ; 00402957
        ;   Label: LAB_00402957
    MOV ESI,ESP                         ; 00402958
    MOV AL,byte ptr [ESI]               ; 0040295a
        ;   Label: LAB_0040295a
    CMP AL,DL                           ; 0040295c
    JZ 0x00402972                       ; 0040295e
        ;   XREF to: 00402972 (CONDITIONAL_JUMP)  ; LAB_00402972
    CMP AL,0x0                          ; 00402960
    JZ 0x00402970                       ; 00402962
        ;   XREF to: 00402970 (CONDITIONAL_JUMP)  ; LAB_00402970
    INC ESI                             ; 00402964
    MOV AL,byte ptr [ESI]               ; 00402965
    CMP AL,DL                           ; 00402967
    JZ 0x00402972                       ; 00402969
        ;   XREF to: 00402972 (CONDITIONAL_JUMP)  ; LAB_00402972
    INC ESI                             ; 0040296b
    CMP AL,0x0                          ; 0040296c
    JNZ 0x0040295a                      ; 0040296e
        ;   XREF to: 0040295a (CONDITIONAL_JUMP)  ; LAB_0040295a
    SUB ESI,ESI                         ; 00402970
        ;   Label: LAB_00402970
    MOV EBX,ESI                         ; 00402972
        ;   Label: LAB_00402972
    TEST ESI,ESI                        ; 00402974
    JNZ 0x0040299b                      ; 00402976
        ;   XREF to: 0040299b (CONDITIONAL_JUMP)  ; LAB_0040299b
    MOV EDX,0x6130f4                    ; 00402978 | = "..\\engine\\2d.c"
    MOV ECX,0x770                       ; 0040297d
    PUSH 0x613103                       ; 00402982 | = "hose!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00402987 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0040298d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00402993
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00402998
    PUSH 0x613109                       ; 0040299b | = ".map"
        ;   Label: LAB_0040299b
    PUSH EBX                            ; 004029a0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004029a1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format) | s_Please_run_SETUP_0061302e
    ADD ESP,0x8                         ; 004029a6
    PUSH 0x61310e                       ; 004029a9 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 004029ae
    PUSH EAX                            ; 004029b2
    PUSH 0x613111                       ; 004029b3 | = "fog"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004029b8
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 004029bd
    ADD ESP,0xc                         ; 004029bf
    TEST EAX,EAX                        ; 004029c2
    JNZ 0x00402a3a                      ; 004029c4
        ;   XREF to: 00402a3a (CONDITIONAL_JUMP)  ; LAB_00402a3a
    CALL engine_2d.c_buildColorLookupTable_FUN_00402870 ; 004029c6
        ;   XREF to: 00402870 (UNCONDITIONAL_CALL)  ; void engine_2d.c_buildColorLookupTable_FUN_00402870()
    PUSH 0x613115                       ; 004029cb | = "wb"
    LEA EAX,[ESP + 0x4]                 ; 004029d0
    PUSH EAX                            ; 004029d4
    PUSH 0x613118                       ; 004029d5 | = "fog"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004029da
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004029df
    MOV EBX,EAX                         ; 004029e2
    TEST EAX,EAX                        ; 004029e4
    JNZ 0x00402a0b                      ; 004029e6
        ;   XREF to: 00402a0b (CONDITIONAL_JUMP)  ; LAB_00402a0b
    MOV ESI,0x61311c                    ; 004029e8 | = "..\\engine\\2d.c"
    MOV EDI,0x777                       ; 004029ed
    PUSH 0x61312b                       ; 004029f2 | = "Unable to write quick map!"
    MOV dword ptr [0x02f0ca48],ESI      ; 004029f7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004029fd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00402a03
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00402a08
    PUSH EBX                            ; 00402a0b
        ;   Label: LAB_00402a0b
    PUSH 0x8000                         ; 00402a0c
    PUSH 0x1                            ; 00402a11
    PUSH 0x2cf9020                      ; 00402a13 | g_ColorCubeLookup
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00402a18
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00402a1d
    PUSH 0x779                          ; 00402a20
    PUSH 0x613146                       ; 00402a25 | = "..\\engine\\2d.c"
    PUSH EBX                            ; 00402a2a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00402a2b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00402a30
    ADD ESP,0x50                        ; 00402a33
    POP EDI                             ; 00402a36
    POP ESI                             ; 00402a37
    POP EBX                             ; 00402a38
    RET                                 ; 00402a39
    PUSH EAX                            ; 00402a3a
        ;   Label: LAB_00402a3a
    PUSH 0x8000                         ; 00402a3b
    PUSH 0x1                            ; 00402a40
    PUSH 0x2cf9020                      ; 00402a42 | g_ColorCubeLookup
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00402a47
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00402a4c
    PUSH 0x77c                          ; 00402a4f
    PUSH 0x613155                       ; 00402a54 | = "..\\engine\\2d.c"
    PUSH EBX                            ; 00402a59
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00402a5a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00402a5f
    ADD ESP,0x50                        ; 00402a62
    POP EDI                             ; 00402a65
    POP ESI                             ; 00402a66
    POP EBX                             ; 00402a67
    RET                                 ; 00402a68

