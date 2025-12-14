; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_pod.cpp_CPod_mount_FUN_00550a10(CPod * this_ptr, char * pod_filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_0064069f
;   TerminatedCString s_Too_many_POD_files_at_on_006406b1
;   TerminatedCString s_engine_pod_cpp_006406ce
;   TerminatedCString s_engine_pod_cpp_006406e0
;   TerminatedCString s_Out_of_memory_006406f2
;   TerminatedCString s_engine_pod_cpp_00640701
;   TerminatedCString s_Can_t_mount_s_00640713
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550a10
        ;   Label: engine_pod.cpp_CPod_mount_FUN_00550a10
    PUSH ESI                            ; 00550a11
    PUSH EBP                            ; 00550a12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00550a13
    CMP dword ptr [EBX],0x64            ; 00550a17
    JGE 0x00550a93                      ; 00550a1a
        ;   XREF to: 00550a93 (CONDITIONAL_JUMP)  ; LAB_00550a93
    PUSH 0x39f                          ; 00550a20
        ;   Label: LAB_00550a20
    PUSH 0x6406ce                       ; 00550a25 | = "..\\engine\\pod.cpp"
    PUSH 0x42c                          ; 00550a2a
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00550a2f
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00550a34
    TEST EAX,EAX                        ; 00550a37
    JZ 0x00550a44                       ; 00550a39
        ;   XREF to: 00550a44 (CONDITIONAL_JUMP)  ; LAB_00550a44
    PUSH EAX                            ; 00550a3b
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 00550a3c
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 00550a41
    MOV EDX,dword ptr [EBX]             ; 00550a44
        ;   Label: LAB_00550a44
    MOV dword ptr [EBX + EDX*0x4 + 0x4],EAX ; 00550a46
    MOV EAX,dword ptr [EBX]             ; 00550a4a
    CMP dword ptr [EBX + EAX*0x4 + 0x4],0x0 ; 00550a4c
    JNZ 0x00550a75                      ; 00550a51
        ;   XREF to: 00550a75 (CONDITIONAL_JUMP)  ; LAB_00550a75
    MOV EBP,0x6406e0                    ; 00550a53 | = "..\\engine\\pod.cpp"
    MOV EAX,0x3a0                       ; 00550a58
    PUSH 0x6406f2                       ; 00550a5d | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00550a62 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00550a68 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00550a6d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00550a72
    MOV EDX,dword ptr [ESP + 0x14]      ; 00550a75
        ;   Label: LAB_00550a75
    MOV EAX,dword ptr [EBX]             ; 00550a79
    PUSH EDX                            ; 00550a7b
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x4] ; 00550a7c
    PUSH ECX                            ; 00550a80
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 00550a81
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 00550a86
    TEST EAX,EAX                        ; 00550a89
    JZ 0x00550abb                       ; 00550a8b
        ;   XREF to: 00550abb (CONDITIONAL_JUMP)  ; LAB_00550abb
    INC dword ptr [EBX]                 ; 00550a8d
    POP EBP                             ; 00550a8f
    POP ESI                             ; 00550a90
    POP EBX                             ; 00550a91
    RET                                 ; 00550a92
    MOV ECX,0x64069f                    ; 00550a93 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_00550a93
    MOV ESI,0x39a                       ; 00550a98
    PUSH 0x6406b1                       ; 00550a9d | = "Too many .POD files at once!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00550aa2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00550aa8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00550aae
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00550ab3
    JMP 0x00550a20                      ; 00550ab6
        ;   XREF to: 00550a20 (UNCONDITIONAL_JUMP)  ; LAB_00550a20
    PUSH EDI                            ; 00550abb
        ;   Label: LAB_00550abb
    MOV EBP,dword ptr [ESP + 0x18]      ; 00550abc
    PUSH EBP                            ; 00550ac0
    MOV ESI,0x640701                    ; 00550ac1 | = "..\\engine\\pod.cpp"
    MOV EDI,0x3a1                       ; 00550ac6
    PUSH 0x640713                       ; 00550acb | = "Can't mount %s"
    MOV dword ptr [0x02f0ca48],ESI      ; 00550ad0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00550ad6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00550adc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00550ae1
    POP EDI                             ; 00550ae4
    INC dword ptr [EBX]                 ; 00550ae5
    POP EBP                             ; 00550ae7
    POP ESI                             ; 00550ae8
    POP EBX                             ; 00550ae9
    RET                                 ; 00550aea

