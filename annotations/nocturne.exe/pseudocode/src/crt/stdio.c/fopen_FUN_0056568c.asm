; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl crt_stdio_c_fopen_FUN_0056568c(char *filename,char *mode)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   mode
;
; XREF[22]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_004f4b30 at 004f4b3f
;   core_game.cpp_CGame_FUN_004a3b90 at 004a3c6a
;   core_game.cpp_CGame_FUN_004a4170 at 004a4541
;   core_game.cpp_CGame_FUN_004a4b50 at 004a4bdf
;   core_main.c_initializeGameSystems_FUN_004c85f0 at 004c8646
;   core_podmain.cpp_CDemonPod_load_FUN_004f92b0 at 004f92c9
;   crt_unknown.c_FUN_00568690 at 005686da
;   engine_console.cpp_CConsole_printf_FUN_0043ac60 at 0043acf7
;   engine_dosio.cpp_getFile_FUN_00456a60 at 00456aba
;   engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0 at 004bd2d8
;   ... and 12 more
;
; Called Functions:
;   crt_unknown.c_fopenWithFlags_FUN_00565630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056568c
        ;   Label: crt_stdio.c_fopen_FUN_0056568c
    PUSH 0x0                            ; 0056568d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056568f
    PUSH EDX                            ; 00565693
    MOV EBX,dword ptr [ESP + 0x10]      ; 00565694
    PUSH EBX                            ; 00565698
    CALL crt_unknown.c_fopenWithFlags_FUN_00565630 ; 00565699
        ;   XREF to: 00565630 (UNCONDITIONAL_CALL)  ; _FILE * crt_unknown.c_fopenWithFlags_FUN_00565630(char * filename, char * mode, int flags)
    ADD ESP,0xc                         ; 0056569e
    POP EBX                             ; 005656a1
    RET                                 ; 005656a2

