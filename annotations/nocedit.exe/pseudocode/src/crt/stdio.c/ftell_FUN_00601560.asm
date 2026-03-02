; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; long __cdecl crt_stdio_c_ftell_FUN_00601560(_FILE *file_handle)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
;
; XREF[17]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e142f
;   core_script.cpp_CScript_dbLoad_FUN_005603c0 at 00560444
;   core_script.cpp_CScript_loadScript_FUN_00559f80 at 0055a06c
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00579080
;   core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690 at 005929fc
;   crt_stdio.c__fclose_FUN_00601fd0 at 00602014
;   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 at 004b2f64
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b690b
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 at 0054fe27
;   sound_mp3.cpp_CFileBitStream_init_FUN_0052ecf0 at 0052ed2c
;   ... and 7 more
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_io.c_tell_FUN_00606720
;   crt_stdio.c_fflush_FUN_00601540
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601560
        ;   Label: crt_stdio.c_ftell_FUN_00601560
    PUSH ESI                            ; 00601561
    PUSH EDI                            ; 00601562
    PUSH EBP                            ; 00601563
    MOV EBX,dword ptr [ESP + 0x14]      ; 00601564
    TEST byte ptr [EBX + 0xc],0x80      ; 00601568
    JZ 0x0060157d                       ; 0060156c
        ;   XREF to: 0060157d (CONDITIONAL_JUMP)  ; LAB_0060157d
    TEST byte ptr [EBX + 0xd],0x10      ; 0060156e
    JZ 0x0060157d                       ; 00601572
        ;   XREF to: 0060157d (CONDITIONAL_JUMP)  ; LAB_0060157d
    PUSH EBX                            ; 00601574
    CALL crt_stdio.c_fflush_FUN_00601540 ; 00601575
        ;   XREF to: 00601540 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflush_FUN_00601540(_FILE * stream)
    ADD ESP,0x4                         ; 0060157a
    MOV EDX,dword ptr [EBX + 0x10]      ; 0060157d
        ;   Label: LAB_0060157d
    PUSH EDX                            ; 00601580
    CALL crt_io.c_tell_FUN_00606720     ; 00601581
        ;   XREF to: 00606720 (UNCONDITIONAL_CALL)  ; long crt_io.c_tell_FUN_00606720(int file_handle_index)
    MOV ESI,EAX                         ; 00601586
    ADD ESP,0x4                         ; 00601588
    MOV EDI,EAX                         ; 0060158b
    CMP EAX,-0x1                        ; 0060158d
    JZ 0x006015c0                       ; 00601590
        ;   XREF to: 006015c0 (CONDITIONAL_JUMP)  ; LAB_006015c0
    MOV ECX,dword ptr [EBX + 0x10]      ; 00601592
    PUSH ECX                            ; 00601595
    CALL dword ptr [0x00684ee8]         ; 00601596 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV EBP,dword ptr [EBX + 0x4]       ; 0060159c
    ADD ESP,0x4                         ; 0060159f
    TEST EBP,EBP                        ; 006015a2
    JZ 0x006015b3                       ; 006015a4
        ;   XREF to: 006015b3 (CONDITIONAL_JUMP)  ; LAB_006015b3
    TEST byte ptr [EBX + 0xd],0x10      ; 006015a6
    JZ 0x006015b1                       ; 006015aa
        ;   XREF to: 006015b1 (CONDITIONAL_JUMP)  ; LAB_006015b1
    LEA EDI,[ESI + EBP*0x1]             ; 006015ac
    JMP 0x006015b3                      ; 006015af
        ;   XREF to: 006015b3 (UNCONDITIONAL_JUMP)  ; LAB_006015b3
    SUB EDI,EBP                         ; 006015b1
        ;   Label: LAB_006015b1
    MOV EDX,dword ptr [EBX + 0x10]      ; 006015b3
        ;   Label: LAB_006015b3
    PUSH EDX                            ; 006015b6
    CALL dword ptr [0x00684eec]         ; 006015b7 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 006015bd
    MOV EAX,EDI                         ; 006015c0
        ;   Label: LAB_006015c0
    POP EBP                             ; 006015c2
    POP EDI                             ; 006015c3
    POP ESI                             ; 006015c4
    POP EBX                             ; 006015c5
    RET                                 ; 006015c6

