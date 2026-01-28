; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList *this_ptr)
;
; Parameters:
; CCheckOutList *  Stack[0x4]:4   this_ptr
;
; XREF[12]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3b2c
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b5290
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4a5f
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 at 004b3844
;   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 at 004b3ffd
;   engine_fileio.cpp_CCheckOutList_dtor_FUN_004bd730 at 004bd736
;   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 at 004b28a2
;   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 at 004b2a79
;   engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70 at 004b2e48
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bbbc6
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_0062627e
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2860
        ;   Label: engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b2861
    MOV EDX,dword ptr [EBX + 0x4]       ; 004b2865
    MOV dword ptr [EBX],0x0             ; 004b2868
    TEST EDX,EDX                        ; 004b286e
    JNZ 0x004b2874                      ; 004b2870
        ;   XREF to: 004b2874 (CONDITIONAL_JUMP)  ; LAB_004b2874
    POP EBX                             ; 004b2872
    RET                                 ; 004b2873
    PUSH 0x277                          ; 004b2874
        ;   Label: LAB_004b2874
    PUSH 0x62627e                       ; 004b2879 | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004b287e
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b287f
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b2884
    MOV dword ptr [EBX + 0x4],0x0       ; 004b2887
    POP EBX                             ; 004b288e
    RET                                 ; 004b288f

