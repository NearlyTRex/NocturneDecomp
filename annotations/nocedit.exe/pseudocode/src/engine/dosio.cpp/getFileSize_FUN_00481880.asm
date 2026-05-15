; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_getFileSize_FUN_00481880(char *directory,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   directory
; char *           Stack[0x8]:4   filename
; Local Variables:
; SFoundFileInfo   Stack[-0x214]:532  local_214
;
; XREF[36]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 at 0054bf6e
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 at 0044f606
;   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0 at 00470335
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ab444
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdedd
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1510
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e0f76
;   core_game.cpp_CGame_showFullscreenBitmap_FUN_004e2910 at 004e294b
;   core_msnedit.cpp_CDemonMission_saveWithNewName_FUN_00537f60 at 00538042
;   core_msnedit.cpp_copyFile_FUN_00537dd0 at 00537dde
;   ... and 26 more
;
; Called Functions:
;   engine_dosio.cpp_findFile_FUN_00481760
;   engine_dosio.cpp_getRelativeFilePath_FUN_004816c0
;
; *****************************************************************************

section .text

    SUB ESP,0x214                       ; 00481880
        ;   Label: engine_dosio.cpp_getFileSize_FUN_00481880
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00481886
    PUSH EDX                            ; 0048188d
    MOV ECX,dword ptr [ESP + 0x21c]     ; 0048188e
    PUSH ECX                            ; 00481895
    LEA EAX,[ESP + 0x8]                 ; 00481896
    PUSH EAX                            ; 0048189a
    CALL engine_dosio.cpp_getRelativeFilePath_FUN_004816c0 ; 0048189b
        ;   XREF to: 004816c0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_getRelativeFilePath_FUN_004816c0(char * dest_path, char * directory, char * filename)
    ADD ESP,0xc                         ; 004818a0
    MOV EAX,ESP                         ; 004818a3
    PUSH EAX                            ; 004818a5
    CALL engine_dosio.cpp_findFile_FUN_00481760 ; 004818a6
        ;   XREF to: 00481760 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFile_FUN_00481760(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 004818ab
    TEST EAX,EAX                        ; 004818ae
    JZ 0x004818c0                       ; 004818b0
        ;   XREF to: 004818c0 (CONDITIONAL_JUMP)  ; LAB_004818c0
    MOV EAX,dword ptr [ESP + 0x204]     ; 004818b2
    ADD ESP,0x214                       ; 004818b9
    RET                                 ; 004818bf
    MOV EAX,0xffffffff                  ; 004818c0
        ;   Label: LAB_004818c0
    ADD ESP,0x214                       ; 004818c5
    RET                                 ; 004818cb

