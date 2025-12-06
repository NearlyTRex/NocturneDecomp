; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50(CDemonRaytrace * this_ptr, FILE * file_handle)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 at 00494f00
;   core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040 at 00495065
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_00622a03
;   TerminatedCString s_CDemonRaytrace_saveBinar_00622a16
;   int g_GeoFileFormatVersion = 0x4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_save_FUN_00457430
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fwrite_FUN_005fdc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494f50
        ;   Label: core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
    PUSH ESI                            ; 00494f51
    PUSH EDI                            ; 00494f52
    PUSH EBP                            ; 00494f53
    MOV EBX,dword ptr [ESP + 0x14]      ; 00494f54
    MOV EBP,dword ptr [ESP + 0x18]      ; 00494f58
    PUSH EBP                            ; 00494f5c
    PUSH 0x1                            ; 00494f5d
    PUSH 0x4                            ; 00494f5f
    PUSH 0x6789f0                       ; 00494f61 | int g_GeoFileFormatVersion
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00494f66 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00494f6b
    PUSH EBP                            ; 00494f6e
    PUSH 0x1                            ; 00494f6f
    PUSH 0x4                            ; 00494f71
    LEA EAX,[EBX + 0x40]                ; 00494f73
    PUSH EAX                            ; 00494f76
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00494f77 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00494f7c
    PUSH EBP                            ; 00494f7f
    PUSH 0x1                            ; 00494f80
    PUSH 0x4                            ; 00494f82
    LEA EAX,[EBX + 0x44]                ; 00494f84
    PUSH EAX                            ; 00494f87
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00494f88 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00494f8d
    PUSH EBP                            ; 00494f90
    PUSH 0x1                            ; 00494f91
    PUSH 0x4                            ; 00494f93
    LEA EAX,[EBX + 0x48]                ; 00494f95
    PUSH EAX                            ; 00494f98
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00494f99 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00494f9e
    PUSH EBP                            ; 00494fa1
    PUSH 0x1                            ; 00494fa2
    PUSH 0xc                            ; 00494fa4
    LEA EAX,[EBX + 0x10]                ; 00494fa6
    PUSH EAX                            ; 00494fa9
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00494faa | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00494faf
    PUSH EBP                            ; 00494fb2
    PUSH 0x1                            ; 00494fb3
    PUSH 0xc                            ; 00494fb5
    LEA EAX,[EBX + 0x1c]                ; 00494fb7
    PUSH EAX                            ; 00494fba
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00494fbb | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00494fc0
    PUSH EBP                            ; 00494fc3
    PUSH 0x1                            ; 00494fc4
    PUSH 0xc                            ; 00494fc6
    LEA EAX,[EBX + 0x28]                ; 00494fc8
    PUSH EAX                            ; 00494fcb
    XOR EDI,EDI                         ; 00494fcc
    XOR ESI,ESI                         ; 00494fce
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00494fd0 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00494fd5
    MOV EDX,dword ptr [EBX + 0x44]      ; 00494fd8
        ;   Label: LAB_00494fd8
    MOV EAX,dword ptr [EBX + 0x40]      ; 00494fdb
    IMUL EAX,EDX                        ; 00494fde
    IMUL EAX,dword ptr [EBX + 0x48]     ; 00494fe1
    CMP EDI,EAX                         ; 00494fe5
    JL 0x00494ff4                       ; 00494fe7 | LAB_00494ff4
        ;   XREF to: 00494ff4 (CONDITIONAL_JUMP)
    TEST byte ptr [EBP + 0xc],0x20      ; 00494fe9
    JNZ 0x00495009                      ; 00494fed | LAB_00495009
        ;   XREF to: 00495009 (CONDITIONAL_JUMP)
    POP EBP                             ; 00494fef
    POP EDI                             ; 00494ff0
    POP ESI                             ; 00494ff1
    POP EBX                             ; 00494ff2
    RET                                 ; 00494ff3
    MOV EAX,dword ptr [EBX + 0x50]      ; 00494ff4
        ;   Label: LAB_00494ff4
    PUSH EBP                            ; 00494ff7
    ADD EAX,ESI                         ; 00494ff8
    PUSH EAX                            ; 00494ffa
    INC EDI                             ; 00494ffb
    CALL core_dcube.cpp_CDemonCube_save_FUN_00457430 ; 00494ffc | void core_dcube.cpp_CDemonCube_save_FUN_00457430(CDemonCube * this_ptr, FILE * file_handle)
        ;   XREF to: 00457430 (UNCONDITIONAL_CALL)
    ADD ESI,0x34                        ; 00495001
    ADD ESP,0x8                         ; 00495004
    JMP 0x00494fd8                      ; 00495007 | LAB_00494fd8
        ;   XREF to: 00494fd8 (UNCONDITIONAL_JUMP)
    MOV EBX,0x622a03                    ; 00495009 | = "..\\core\\dtrace.cpp" | s_core_dtrace_cpp_00622a03 = ..\core\dtrace.cpp
        ;   Label: LAB_00495009
    MOV ESI,0x251                       ; 0049500e
    PUSH 0x622a16                       ; 00495013 | = "CDemonRaytrace::saveBinary - error wr..." | s_CDemonRaytrace_saveBinar_00622a16 = CDemonRaytrace::saveBinary - error writing file
    MOV dword ptr [0x02f0ca48],EBX      ; 00495018 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0049501e | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00495024 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00495029
    POP EBP                             ; 0049502c
    POP EDI                             ; 0049502d
    POP ESI                             ; 0049502e
    POP EBX                             ; 0049502f
    RET                                 ; 00495030

