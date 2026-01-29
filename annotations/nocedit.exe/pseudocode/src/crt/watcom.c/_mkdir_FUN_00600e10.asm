; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_watcom_c__mkdir_FUN_00600e10(char *path)
;
; Parameters:
; char *           Stack[0x4]:4   path
;
; XREF[8]:
;   core_fileman.cpp_refreshSoundDirectory_FUN_004be590 at 004be59f
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e0d86
;   engine_dosio.c_getFile_FUN_00481a50 at 00481a9c
;   engine_dosio.c_reopenFileStream_FUN_00481b50 at 00481ba7
;   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 at 004b7dc9
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 at 00516d64
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 at 0051b8af
;   shape_meshlod.cpp_initializeLogDirectory_FUN_00515190 at 00515195
;
; Referenced Globals:
;   CreateDirectoryA* g_CreateDirectoryAFunc = 00211c46
;
; Called Functions:
;   CreateDirectoryA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00600e10
        ;   Label: crt_watcom.c__mkdir_FUN_00600e10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00600e12
    PUSH EDX                            ; 00600e16
    CALL dword ptr CS:[0x611508]        ; 00600e17 | g_CreateDirectoryAFunc
    TEST EAX,EAX                        ; 00600e1e
    JZ 0x006083fc                       ; 00600e20
        ;   XREF to: 006083fc (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00600e26
    RET                                 ; 00600e28

