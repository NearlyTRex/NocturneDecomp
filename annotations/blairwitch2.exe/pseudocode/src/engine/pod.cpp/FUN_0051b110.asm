; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_0051b110(int *param_1,char *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_005e2794
;   TerminatedCString s_Too_many_POD_files_at_on_005e27a6
;   TerminatedCString s_engine_pod_cpp_005e27c3
;   TerminatedCString s_Out_of_memory_005e27d5
;   TerminatedCString s_engine_pod_cpp_005e27e4
;   TerminatedCString s_Can_t_mount_s_005e27f6
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b8be2
;   engine_pod.cpp_CPodFile_ctor_FUN_00519e50
;   engine_pod.cpp_FUN_00519f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b110
        ;   Label: engine_pod.cpp_FUN_0051b110
    PUSH ESI                            ; 0051b111
    PUSH EBP                            ; 0051b112
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051b113
    CMP dword ptr [EBX],0x64            ; 0051b117
    JGE 0x0051b185                      ; 0051b11a
        ;   XREF to: 0051b185 (CONDITIONAL_JUMP)  ; LAB_0051b185
    PUSH 0x42c                          ; 0051b11c
        ;   Label: LAB_0051b11c
    CALL crt_unknown.c_FUN_005b8be2     ; 0051b121
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 0051b126
    TEST EAX,EAX                        ; 0051b129
    JZ 0x0051b136                       ; 0051b12b
        ;   XREF to: 0051b136 (CONDITIONAL_JUMP)  ; LAB_0051b136
    PUSH EAX                            ; 0051b12d
    CALL engine_pod.cpp_CPodFile_ctor_FUN_00519e50 ; 0051b12e
        ;   XREF to: 00519e50 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_00519e50(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 0051b133
    MOV EDX,dword ptr [EBX]             ; 0051b136
        ;   Label: LAB_0051b136
    MOV dword ptr [EBX + EDX*0x4 + 0x4],EAX ; 0051b138
    MOV EAX,dword ptr [EBX]             ; 0051b13c
    CMP dword ptr [EBX + EAX*0x4 + 0x4],0x0 ; 0051b13e
    JNZ 0x0051b167                      ; 0051b143
        ;   XREF to: 0051b167 (CONDITIONAL_JUMP)  ; LAB_0051b167
    MOV EBP,0x5e27c3                    ; 0051b145 | = "..\\engine\\pod.cpp"
    MOV EAX,0x3f1                       ; 0051b14a
    PUSH 0x5e27d5                       ; 0051b14f | = "Out of memory!"
    MOV dword ptr [0x01d046a0],EBP      ; 0051b154 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0051b15a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051b15f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051b164
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051b167
        ;   Label: LAB_0051b167
    MOV EAX,dword ptr [EBX]             ; 0051b16b
    PUSH EDX                            ; 0051b16d
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x4] ; 0051b16e
    PUSH ECX                            ; 0051b172
    CALL engine_pod.cpp_FUN_00519f00    ; 0051b173
        ;   XREF to: 00519f00 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_FUN_00519f00(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 0051b178
    TEST EAX,EAX                        ; 0051b17b
    JZ 0x0051b1ad                       ; 0051b17d
        ;   XREF to: 0051b1ad (CONDITIONAL_JUMP)  ; LAB_0051b1ad
    INC dword ptr [EBX]                 ; 0051b17f
    POP EBP                             ; 0051b181
    POP ESI                             ; 0051b182
    POP EBX                             ; 0051b183
    RET                                 ; 0051b184
    MOV ECX,0x5e2794                    ; 0051b185 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_0051b185
    MOV ESI,0x3eb                       ; 0051b18a
    PUSH 0x5e27a6                       ; 0051b18f | = "Too many .POD files at once!"
    MOV dword ptr [0x01d046a0],ECX      ; 0051b194 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0051b19a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051b1a0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051b1a5
    JMP 0x0051b11c                      ; 0051b1a8
        ;   XREF to: 0051b11c (UNCONDITIONAL_JUMP)  ; LAB_0051b11c
    PUSH EDI                            ; 0051b1ad
        ;   Label: LAB_0051b1ad
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051b1ae
    PUSH EBP                            ; 0051b1b2
    MOV ESI,0x5e27e4                    ; 0051b1b3 | = "..\\engine\\pod.cpp"
    MOV EDI,0x3f2                       ; 0051b1b8
    PUSH 0x5e27f6                       ; 0051b1bd | = "Can't mount %s"
    MOV dword ptr [0x01d046a0],ESI      ; 0051b1c2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0051b1c8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051b1ce
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0051b1d3
    POP EDI                             ; 0051b1d6
    INC dword ptr [EBX]                 ; 0051b1d7
    POP EBP                             ; 0051b1d9
    POP ESI                             ; 0051b1da
    POP EBX                             ; 0051b1db
    RET                                 ; 0051b1dc

