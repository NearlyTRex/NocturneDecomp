; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CSkeleton_load_FUN_00599b10(CSkeleton * this_ptr, char * filename)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   core_skeleton.cpp_loadSkeleton_FUN_005a1df0 at 005a1e86
;
; Referenced Globals:
;   TerminatedCString s_rt_0064e29e
;   TerminatedCString s_data_0064e2a1
;   TerminatedCString s_core_skeleton_cpp_0064e2a6
;   TerminatedCString s_CSkeleton_load_Can_t_ope_0064e2bb
;   TerminatedCString s_core_skeleton_cpp_0064e2db
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599b10
        ;   Label: core_skeleton.cpp_CSkeleton_load_FUN_00599b10
    PUSH ESI                            ; 00599b11
    PUSH EDI                            ; 00599b12
    MOV EBX,dword ptr [ESP + 0x14]      ; 00599b13
    MOV EDI,dword ptr [ESP + 0x10]      ; 00599b17
    MOV ESI,EBX                         ; 00599b1b
    ADD EDI,0x28508                     ; 00599b1d
    PUSH EDI                            ; 00599b23
    MOV AL,byte ptr [ESI]               ; 00599b24
        ;   Label: LAB_00599b24
    MOV byte ptr [EDI],AL               ; 00599b26
    CMP AL,0x0                          ; 00599b28
    JZ 0x00599b3c                       ; 00599b2a
        ;   XREF to: 00599b3c (CONDITIONAL_JUMP)  ; LAB_00599b3c
    MOV AL,byte ptr [ESI + 0x1]         ; 00599b2c
    ADD ESI,0x2                         ; 00599b2f
    MOV byte ptr [EDI + 0x1],AL         ; 00599b32
    ADD EDI,0x2                         ; 00599b35
    CMP AL,0x0                          ; 00599b38
    JNZ 0x00599b24                      ; 00599b3a
        ;   XREF to: 00599b24 (CONDITIONAL_JUMP)  ; LAB_00599b24
    POP EDI                             ; 00599b3c
        ;   Label: LAB_00599b3c
    PUSH 0x64e29e                       ; 00599b3d | = "rt"
    PUSH EBX                            ; 00599b42
    PUSH 0x64e2a1                       ; 00599b43 | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00599b48
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00599b4d
    MOV EDI,EAX                         ; 00599b50
    TEST EAX,EAX                        ; 00599b52
    JZ 0x00599b7b                       ; 00599b54
        ;   XREF to: 00599b7b (CONDITIONAL_JUMP)  ; LAB_00599b7b
    PUSH EDI                            ; 00599b56
        ;   Label: LAB_00599b56
    MOV EBX,dword ptr [ESP + 0x14]      ; 00599b57
    PUSH EBX                            ; 00599b5b
    CALL core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0 ; 00599b5c
        ;   XREF to: 00599bb0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0(CSkeleton * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 00599b61
    PUSH 0xf8                           ; 00599b64
    PUSH 0x64e2db                       ; 00599b69 | = "..\\core\\skeleton.cpp"
    PUSH EDI                            ; 00599b6e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00599b6f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00599b74
    POP EDI                             ; 00599b77
    POP ESI                             ; 00599b78
    POP EBX                             ; 00599b79
    RET                                 ; 00599b7a
    PUSH EBX                            ; 00599b7b
        ;   Label: LAB_00599b7b
    MOV EDX,0x64e2a6                    ; 00599b7c | = "..\\core\\skeleton.cpp"
    MOV ECX,0xf6                        ; 00599b81
    PUSH 0x64e2bb                       ; 00599b86 | = "CSkeleton::load - Can't open %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 00599b8b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00599b91 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00599b97
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00599b9c
    JMP 0x00599b56                      ; 00599b9f
        ;   XREF to: 00599b56 (UNCONDITIONAL_JUMP)  ; LAB_00599b56

