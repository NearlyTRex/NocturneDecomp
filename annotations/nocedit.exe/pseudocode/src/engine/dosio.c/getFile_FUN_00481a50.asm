; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl _FILE * __cdecl engine_dosio_c_getFile_FUN_00481a50(char *directory,char *filename,char *mode)
;
; Parameters:
; char *           Stack[0x4]:4   directory
; char *           Stack[0x8]:4   filename
; char *           Stack[0xc]:4   mode
; Local Variables:
; undefined1       Stack[-0x220]:1  local_220
; undefined1       Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[94]:
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0 at 00431b61
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 at 0043320a
;   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 at 004346c1
;   cockpit_ckptutil.c_readBitmapFile_FUN_00431870 at 00431896
;   cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480 at 004334a5
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 at 0054b88b
;   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 at 0054bb6a
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 at 0054bf8a
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 at 0054c1ff
;   core_cloth.cpp_CCloth_load_FUN_00438cf0 at 00438d13
;   ... and 84 more
;
; Referenced Globals:
;   TerminatedCString s_engine_dosio_c_006215a8
;   TerminatedCString s_engine_dosio_c_006215ba
;   TerminatedCString s_engine_dosio_c_006215cc
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_watcom.c__mkdir_FUN_00600e10
;   engine_dosio.c_findFile_FUN_00481760
;   engine_dosio.c_getRelativeFilePath_FUN_004816c0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481a50
        ;   Label: engine_dosio.c_getFile_FUN_00481a50
    PUSH ESI                            ; 00481a51
    PUSH EDI                            ; 00481a52
    SUB ESP,0x214                       ; 00481a53
    MOV EDI,dword ptr [ESP + 0x224]     ; 00481a59
    MOV ESI,dword ptr [ESP + 0x22c]     ; 00481a60
    MOV EDX,dword ptr [ESP + 0x228]     ; 00481a67
    PUSH EDX                            ; 00481a6e
    PUSH EDI                            ; 00481a6f
    LEA EAX,[ESP + 0x8]                 ; 00481a70
    PUSH EAX                            ; 00481a74
    MOV EBX,ESI                         ; 00481a75
    CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0 ; 00481a77
        ;   XREF to: 004816c0 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_getRelativeFilePath_FUN_004816c0(char * dest_path, char * directory, char * filename)
    MOV AH,byte ptr [ESI]               ; 00481a7c
    ADD ESP,0xc                         ; 00481a7e
    TEST AH,AH                          ; 00481a81
    JZ 0x00481ad0                       ; 00481a83
        ;   XREF to: 00481ad0 (CONDITIONAL_JUMP)  ; LAB_00481ad0
    XOR EAX,EAX                         ; 00481a85
        ;   Label: LAB_00481a85
    MOV AL,byte ptr [EBX]               ; 00481a87
    PUSH EAX                            ; 00481a89
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00481a8a
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 00481a8f
    CMP EAX,0x57                        ; 00481a92
    JNZ 0x00481ac8                      ; 00481a95
        ;   XREF to: 00481ac8 (CONDITIONAL_JUMP)  ; LAB_00481ac8
    TEST EDI,EDI                        ; 00481a97
    JZ 0x00481aa4                       ; 00481a99
        ;   XREF to: 00481aa4 (CONDITIONAL_JUMP)  ; LAB_00481aa4
    PUSH EDI                            ; 00481a9b
    CALL crt_watcom.c__mkdir_FUN_00600e10 ; 00481a9c
        ;   XREF to: 00600e10 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_00600e10(char * path)
    ADD ESP,0x4                         ; 00481aa1
    PUSH 0x198                          ; 00481aa4
        ;   Label: LAB_00481aa4
    PUSH 0x6215a8                       ; 00481aa9 | = "..\\engine\\dosio.c"
    PUSH ESI                            ; 00481aae
    PUSH 0x0                            ; 00481aaf
    LEA EAX,[ESP + 0x10]                ; 00481ab1
    PUSH EAX                            ; 00481ab5
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00481ab6
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00481abb
    ADD ESP,0x214                       ; 00481abe
        ;   Label: LAB_00481abe
    POP EDI                             ; 00481ac4
    POP ESI                             ; 00481ac5
    POP EBX                             ; 00481ac6
    RET                                 ; 00481ac7
    MOV DL,byte ptr [EBX + 0x1]         ; 00481ac8
        ;   Label: LAB_00481ac8
    INC EBX                             ; 00481acb
    TEST DL,DL                          ; 00481acc
    JNZ 0x00481a85                      ; 00481ace
        ;   XREF to: 00481a85 (CONDITIONAL_JUMP)  ; LAB_00481a85
    MOV EAX,ESP                         ; 00481ad0
        ;   Label: LAB_00481ad0
    PUSH EAX                            ; 00481ad2
    CALL engine_dosio.c_findFile_FUN_00481760 ; 00481ad3
        ;   XREF to: 00481760 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFile_FUN_00481760(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 00481ad8
    TEST EAX,EAX                        ; 00481adb
    JZ 0x00481abe                       ; 00481add
        ;   XREF to: 00481abe (CONDITIONAL_JUMP)  ; LAB_00481abe
    MOV ECX,dword ptr [ESP + 0x208]     ; 00481adf
    TEST ECX,ECX                        ; 00481ae6
    JNZ 0x00481b2f                      ; 00481ae8
        ;   XREF to: 00481b2f (CONDITIONAL_JUMP)  ; LAB_00481b2f
    PUSH 0x1ac                          ; 00481aea
    PUSH 0x6215cc                       ; 00481aef | = "..\\engine\\dosio.c"
    PUSH ESI                            ; 00481af4
    PUSH ECX                            ; 00481af5
    LEA EAX,[ESP + 0x110]               ; 00481af6
        ;   Label: LAB_00481af6
    PUSH EAX                            ; 00481afd
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00481afe
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00481b03
    MOV EBX,EAX                         ; 00481b06
    TEST EBX,EBX                        ; 00481b08
    JZ 0x00481b41                       ; 00481b0a
        ;   XREF to: 00481b41 (CONDITIONAL_JUMP)  ; LAB_00481b41
    MOV ESI,dword ptr [ESP + 0x200]     ; 00481b0c
    TEST ESI,ESI                        ; 00481b13
    JZ 0x00481b23                       ; 00481b15
        ;   XREF to: 00481b23 (CONDITIONAL_JUMP)  ; LAB_00481b23
    PUSH 0x0                            ; 00481b17
    PUSH ESI                            ; 00481b19
    PUSH EBX                            ; 00481b1a
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00481b1b
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00481b20
    MOV EAX,EBX                         ; 00481b23
        ;   Label: LAB_00481b23
    ADD ESP,0x214                       ; 00481b25
    POP EDI                             ; 00481b2b
    POP ESI                             ; 00481b2c
    POP EBX                             ; 00481b2d
    RET                                 ; 00481b2e
    PUSH 0x1aa                          ; 00481b2f
        ;   Label: LAB_00481b2f
    PUSH 0x6215ba                       ; 00481b34 | = "..\\engine\\dosio.c"
    PUSH ESI                            ; 00481b39
    LEA EAX,[ESP + 0xc]                 ; 00481b3a
    PUSH EAX                            ; 00481b3e
    JMP 0x00481af6                      ; 00481b3f
        ;   XREF to: 00481af6 (UNCONDITIONAL_JUMP)  ; LAB_00481af6
    XOR EAX,EAX                         ; 00481b41
        ;   Label: LAB_00481b41
    ADD ESP,0x214                       ; 00481b43
    POP EDI                             ; 00481b49
    POP ESI                             ; 00481b4a
    POP EBX                             ; 00481b4b
    RET                                 ; 00481b4c

