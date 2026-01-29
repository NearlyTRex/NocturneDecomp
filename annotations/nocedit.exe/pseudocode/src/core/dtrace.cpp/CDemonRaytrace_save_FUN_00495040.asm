; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtrace_cpp_CDemonRaytrace_save_FUN_00495040(CDemonRaytrace *this_ptr,char *filename)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 at 00494f2d
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 005793c6
;
; Referenced Globals:
;   TerminatedCString s_wb_00622a46
;   TerminatedCString s_data_00622a49
;   TerminatedCString s_core_dtrace_cpp_00622a4e
;   TerminatedCString s_CDemonRaytrace_save_Unab_00622a61
;   TerminatedCString s_core_dtrace_cpp_00622a8c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495040
        ;   Label: core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
    PUSH EDI                            ; 00495041
    PUSH 0x622a46                       ; 00495042 | = "wb"
    MOV EDX,dword ptr [ESP + 0x14]      ; 00495047
    PUSH EDX                            ; 0049504b
    PUSH 0x622a49                       ; 0049504c | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00495051
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00495056
    MOV EBX,EAX                         ; 00495059
    TEST EAX,EAX                        ; 0049505b
    JZ 0x00495083                       ; 0049505d
        ;   XREF to: 00495083 (CONDITIONAL_JUMP)  ; LAB_00495083
    PUSH EBX                            ; 0049505f
        ;   Label: LAB_0049505f
    MOV EDI,dword ptr [ESP + 0x10]      ; 00495060
    PUSH EDI                            ; 00495064
    CALL core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50 ; 00495065
        ;   XREF to: 00494f50 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50(CDemonRaytrace * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0049506a
    PUSH 0x261                          ; 0049506d
    PUSH 0x622a8c                       ; 00495072 | = "..\\core\\dtrace.cpp"
    PUSH EBX                            ; 00495077
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00495078
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0049507d
    POP EDI                             ; 00495080
    POP EBX                             ; 00495081
    RET                                 ; 00495082
    PUSH ESI                            ; 00495083
        ;   Label: LAB_00495083
    MOV ECX,0x622a4e                    ; 00495084 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x25f                       ; 00495089
    PUSH 0x622a61                       ; 0049508e | = "CDemonRaytrace::save - Unable to save..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00495093 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00495099 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049509f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004950a4
    POP ESI                             ; 004950a7
    JMP 0x0049505f                      ; 004950a8
        ;   XREF to: 0049505f (UNCONDITIONAL_JUMP)  ; LAB_0049505f

