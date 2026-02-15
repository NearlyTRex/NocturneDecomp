; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_loadPaletteFile_FUN_004015a0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[3]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 00401054
;   shape_design.c_loadPalette_FUN_0046e810 at 0046e9d3
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f2bc
;
; Referenced Globals:
;   TerminatedCString s_rb_006130ac
;   TerminatedCString s_art_006130af
;   TerminatedCString s_engine_2d_c_006130b3
;   TerminatedCString s_Unable_to_open_VGA_palet_006130c2
;   TerminatedCString s_engine_2d_c_006130dd
;   char[768] g_SourcePaletteData
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004015a0
        ;   Label: engine_2d.c_loadPaletteFile_FUN_004015a0
    PUSH 0x6130ac                       ; 004015a1 | = "rb"
    MOV EDX,dword ptr [ESP + 0xc]       ; 004015a6
    PUSH EDX                            ; 004015aa
    PUSH 0x6130af                       ; 004015ab | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004015b0
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004015b5
    MOV EBX,EAX                         ; 004015b8
    TEST EAX,EAX                        ; 004015ba
    JZ 0x004015e8                       ; 004015bc
        ;   XREF to: 004015e8 (CONDITIONAL_JUMP)  ; LAB_004015e8
    PUSH EBX                            ; 004015be
        ;   Label: LAB_004015be
    PUSH 0x1                            ; 004015bf
    PUSH 0x300                          ; 004015c1
    PUSH 0x2d01f48                      ; 004015c6 | g_SourcePaletteData
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004015cb
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004015d0
    PUSH 0x2c5                          ; 004015d3
    PUSH 0x6130dd                       ; 004015d8 | = "..\\engine\\2d.c"
    PUSH EBX                            ; 004015dd
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004015de
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004015e3
    POP EBX                             ; 004015e6
    RET                                 ; 004015e7
    PUSH ESI                            ; 004015e8
        ;   Label: LAB_004015e8
    MOV ECX,0x6130b3                    ; 004015e9 | = "..\\engine\\2d.c"
    MOV ESI,0x2c3                       ; 004015ee
    PUSH 0x6130c2                       ; 004015f3 | = "Unable to open VGA palette"
    MOV dword ptr [0x02f0ca48],ECX      ; 004015f8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004015fe | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00401604
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00401609
    POP ESI                             ; 0040160c
    JMP 0x004015be                      ; 0040160d
        ;   XREF to: 004015be (UNCONDITIONAL_JUMP)  ; LAB_004015be

