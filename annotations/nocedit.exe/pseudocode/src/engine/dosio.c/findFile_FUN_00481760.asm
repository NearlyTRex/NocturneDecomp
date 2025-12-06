; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_dosio.c_findFile_FUN_00481760(SFoundFileInfo * context)
;
; Parameters:
; SFoundFileInfo * Stack[0x4]:4   context
;
; XREF[7]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e7c1
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 at 00494e5e
;   engine_dosio.c_getFileSize_FUN_00481880 at 004818a6
;   engine_dosio.c_getFileTimestamp_FUN_004818d0 at 004818f6
;   engine_dosio.c_getFile_FUN_00481a50 at 00481ad3
;   engine_dosio.c_reopenFileStream_FUN_00481b50 at 00481bd8
;   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 at 005ad929
;
; Referenced Globals:
;   int g_NumSearchHandlers
;   FileSearchHandler*[5] g_SearchHandlers
;   undefined4 g_SearchHandlers[1]
;
; Called Functions:
;   engine_dosio.c_findFileNormally_FUN_004817c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481760
        ;   Label: engine_dosio.c_findFile_FUN_00481760
    PUSH ESI                            ; 00481761
    PUSH EDI                            ; 00481762
    PUSH EBP                            ; 00481763
    MOV EDI,dword ptr [ESP + 0x14]      ; 00481764
    MOV EDX,dword ptr [0x02c14d18]      ; 00481768 | int g_NumSearchHandlers
    CMP EDX,0x1                         ; 0048176e
    JL 0x004817a0                       ; 00481771 | LAB_004817a0
        ;   XREF to: 004817a0 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00481773
    TEST EDX,EDX                        ; 00481775
    JLE 0x00481799                      ; 00481777 | LAB_00481799
        ;   XREF to: 00481799 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00481779
    MOV EAX,EBX                         ; 0048177b
        ;   Label: LAB_0048177b
    PUSH EDI                            ; 0048177d
    CALL dword ptr [EAX + 0x2c14d1c]    ; 0048177e | FileSearchHandler *[5] g_SearchHandlers
    ADD ESP,0x4                         ; 00481784
    TEST EAX,EAX                        ; 00481787
    JNZ 0x004817ae                      ; 00481789 | LAB_004817ae
        ;   XREF to: 004817ae (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x02c14d18]      ; 0048178b | int g_NumSearchHandlers
    INC ESI                             ; 00481791
    ADD EBX,0x4                         ; 00481792
    CMP ESI,EBP                         ; 00481795
    JL 0x0048177b                       ; 00481797 | LAB_0048177b
        ;   XREF to: 0048177b (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00481799
        ;   Label: LAB_00481799
    POP EBP                             ; 0048179b
    POP EDI                             ; 0048179c
    POP ESI                             ; 0048179d
    POP EBX                             ; 0048179e
    RET                                 ; 0048179f
    PUSH EDI                            ; 004817a0
        ;   Label: LAB_004817a0
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004817a1 | int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004817a6
    POP EBP                             ; 004817a9
    POP EDI                             ; 004817aa
    POP ESI                             ; 004817ab
    POP EBX                             ; 004817ac
    RET                                 ; 004817ad
    MOV EAX,0x1                         ; 004817ae
        ;   Label: LAB_004817ae
    POP EBP                             ; 004817b3
    POP EDI                             ; 004817b4
    POP ESI                             ; 004817b5
    POP EBX                             ; 004817b6
    RET                                 ; 004817b7

