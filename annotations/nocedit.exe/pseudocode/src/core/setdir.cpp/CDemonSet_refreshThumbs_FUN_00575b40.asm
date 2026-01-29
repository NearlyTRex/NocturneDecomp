; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00575b40(CDemonSet *this_ptr,char *filename)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 00569dfd
;
; Referenced Globals:
;   TerminatedCString s_rb_006464de
;   TerminatedCString s_data_006464e1
;   TerminatedCString s_core_setdir_cpp_006464e6
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
;   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
;   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575b40
        ;   Label: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40
    PUSH ESI                            ; 00575b41
    MOV ESI,dword ptr [ESP + 0xc]       ; 00575b42
    PUSH 0x6464de                       ; 00575b46 | = "rb"
    MOV EDX,dword ptr [ESP + 0x14]      ; 00575b4b
    PUSH EDX                            ; 00575b4f
    PUSH 0x6464e1                       ; 00575b50 | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00575b55
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 00575b5a
    ADD ESP,0xc                         ; 00575b5c
    TEST EAX,EAX                        ; 00575b5f
    JNZ 0x00575b7d                      ; 00575b61
        ;   XREF to: 00575b7d (CONDITIONAL_JUMP)  ; LAB_00575b7d
    PUSH ESI                            ; 00575b63
    CALL core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60 ; 00575b64
        ;   XREF to: 00575f60 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00575b69
    MOV ECX,dword ptr [ESP + 0x10]      ; 00575b6c
    PUSH ECX                            ; 00575b70
    PUSH ESI                            ; 00575b71
    CALL core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40 ; 00575b72
        ;   XREF to: 00575e40 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40(CDemonSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00575b77
    POP ESI                             ; 00575b7a
    POP EBX                             ; 00575b7b
    RET                                 ; 00575b7c
    PUSH EAX                            ; 00575b7d
        ;   Label: LAB_00575b7d
    PUSH ESI                            ; 00575b7e
    CALL core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0 ; 00575b7f
        ;   XREF to: 00575bc0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0(CDemonSet * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00575b84
    PUSH 0x363                          ; 00575b87
    PUSH 0x6464e6                       ; 00575b8c | = "..\\core\\setdir.cpp"
    PUSH EBX                            ; 00575b91
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00575b92
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00575b97
    POP ESI                             ; 00575b9a
    POP EBX                             ; 00575b9b
    RET                                 ; 00575b9c

