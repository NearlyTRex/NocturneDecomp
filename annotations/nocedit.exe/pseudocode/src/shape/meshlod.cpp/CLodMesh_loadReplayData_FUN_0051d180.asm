; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180(CLodMesh * this_ptr, FILE * file_handle)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 at 0051b90d
;   shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0 at 0051743c
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_006380d5
;   TerminatedCString s_d_006380ea
;   TerminatedCString s_shape_meshlod_cpp_006380ee
;   TerminatedCString s_shape_meshlod_cpp_00638103
;   TerminatedCString s_Out_of_memory_00638118
;   TerminatedCString s_d_d_lg_g_00638127
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d180
        ;   Label: shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180
    PUSH ESI                            ; 0051d181
    PUSH EDI                            ; 0051d182
    PUSH EBP                            ; 0051d183
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051d184
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051d188
    MOV EDX,dword ptr [EDI + 0x50]      ; 0051d18c
    TEST EDX,EDX                        ; 0051d18f
    JNZ 0x0051d235                      ; 0051d191 | LAB_0051d235
        ;   XREF to: 0051d235 (CONDITIONAL_JUMP)
    LEA EAX,[EDI + 0x4c]                ; 0051d197
        ;   Label: LAB_0051d197
    PUSH EAX                            ; 0051d19a
    PUSH 0x6380ea                       ; 0051d19b | = "%d\n" | s_d_006380ea = %d

    PUSH EBP                            ; 0051d1a0
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051d1a1 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051d1a6
    PUSH 0x1446                         ; 0051d1a9
    PUSH 0x6380ee                       ; 0051d1ae | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_006380ee = ..\shape\meshlod.cpp
    PUSH 0xf0                           ; 0051d1b3
    MOV EBX,dword ptr [EDI + 0x4c]      ; 0051d1b8
    PUSH EBX                            ; 0051d1bb
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 0051d1bc | void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0051d1c1
    MOV dword ptr [EDI + 0x50],EAX      ; 0051d1c4
    TEST EAX,EAX                        ; 0051d1c7
    JNZ 0x0051d1ed                      ; 0051d1c9 | LAB_0051d1ed
        ;   XREF to: 0051d1ed (CONDITIONAL_JUMP)
    MOV EAX,0x638103                    ; 0051d1cb | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00638103 = ..\shape\meshlod.cpp
    MOV EDX,0x1447                      ; 0051d1d0
    PUSH 0x638118                       ; 0051d1d5 | = "Out of memory!" | s_Out_of_memory_00638118 = Out of memory!
    MOV [0x02f0ca48],EAX                ; 0051d1da | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0051d1df | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051d1e5 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051d1ea
    MOV ECX,dword ptr [EDI + 0x4c]      ; 0051d1ed
        ;   Label: LAB_0051d1ed
    XOR ESI,ESI                         ; 0051d1f0
    TEST ECX,ECX                        ; 0051d1f2
    JLE 0x0051d230                      ; 0051d1f4 | LAB_0051d230
        ;   XREF to: 0051d230 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0051d1f6
    MOV EAX,dword ptr [EDI + 0x50]      ; 0051d1f8
        ;   Label: LAB_0051d1f8
    ADD EAX,EBX                         ; 0051d1fb
    LEA EDX,[EAX + 0x10]                ; 0051d1fd
    PUSH EDX                            ; 0051d200
    LEA EDX,[EAX + 0x8]                 ; 0051d201
    PUSH EDX                            ; 0051d204
    LEA EDX,[EAX + 0x4]                 ; 0051d205
    PUSH EDX                            ; 0051d208
    PUSH EAX                            ; 0051d209
    PUSH 0x638127                       ; 0051d20a | = "%d,%d,%lg,%g\n" | s_d_d_lg_g_00638127 = %d,%d,%lg,%g

    PUSH EBP                            ; 0051d20f
    INC ESI                             ; 0051d210
    ADD EBX,0xf0                        ; 0051d211
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051d217 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EDI + 0x4c]      ; 0051d21c
    ADD ESP,0x18                        ; 0051d21f
    CMP ESI,EAX                         ; 0051d222
    JL 0x0051d1f8                       ; 0051d224 | LAB_0051d1f8
        ;   XREF to: 0051d1f8 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0051d226
    LEA EDX,[EDX]                       ; 0051d22c
    POP EBP                             ; 0051d230
        ;   Label: LAB_0051d230
    POP EDI                             ; 0051d231
    POP ESI                             ; 0051d232
    POP EBX                             ; 0051d233
    RET                                 ; 0051d234
    PUSH 0x1441                         ; 0051d235
        ;   Label: LAB_0051d235
    PUSH 0x6380d5                       ; 0051d23a | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_006380d5 = ..\shape\meshlod.cpp
    PUSH EDX                            ; 0051d23f
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0051d240 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051d245
    JMP 0x0051d197                      ; 0051d248 | LAB_0051d197
        ;   XREF to: 0051d197 (UNCONDITIONAL_JUMP)

