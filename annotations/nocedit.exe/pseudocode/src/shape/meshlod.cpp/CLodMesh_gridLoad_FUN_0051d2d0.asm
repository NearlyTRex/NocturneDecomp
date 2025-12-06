; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0(CLodMesh * this_ptr, FILE * file_handle)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 at 0051b8db
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_00638147
;   TerminatedCString s_shape_meshlod_cpp_0063815c
;   TerminatedCString s_Out_of_memory_00638171
;   TerminatedCString s_d_00638180
;   TerminatedCString s_shape_meshlod_cpp_00638184
;   TerminatedCString s_LodMesh_gridLoad_file_is_00638199
;   TerminatedCString s_d_006381ba
;   TerminatedCString s_shape_meshlod_cpp_006381be
;   TerminatedCString s_shape_meshlod_cpp_006381d3
;   TerminatedCString s_Out_of_memory_006381e8
;   TerminatedCString s_d_006381f7
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d2d0
        ;   Label: shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0
    PUSH ESI                            ; 0051d2d1
    PUSH EDI                            ; 0051d2d2
    PUSH EBP                            ; 0051d2d3
    SUB ESP,0x4                         ; 0051d2d4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0051d2d7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0051d2db
    PUSH 0x146f                         ; 0051d2df
    PUSH 0x638147                       ; 0051d2e4 | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00638147 = ..\shape\meshlod.cpp
    PUSH 0x4004                         ; 0051d2e9
    MOV EDX,dword ptr [ESI + 0x54]      ; 0051d2ee
    PUSH EDX                            ; 0051d2f1
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0051d2f2 | void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0051d2f7
    MOV dword ptr [ESI + 0x54],EAX      ; 0051d2fa
    TEST EAX,EAX                        ; 0051d2fd
    JZ 0x0051d386                       ; 0051d2ff | LAB_0051d386
        ;   XREF to: 0051d386 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0051d305
        ;   Label: LAB_0051d305
    PUSH EAX                            ; 0051d307
    PUSH 0x638180                       ; 0051d308 | = "%d\n" | s_d_00638180 = %d

    PUSH EBP                            ; 0051d30d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051d30e | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051d313
    CMP dword ptr [ESP],0x10            ; 0051d316
    JNZ 0x0051d3ae                      ; 0051d31a | LAB_0051d3ae
        ;   XREF to: 0051d3ae (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0051d320
        ;   Label: LAB_0051d320
    MOV EAX,dword ptr [ESI + 0x54]      ; 0051d322
        ;   Label: LAB_0051d322
    ADD EAX,EBX                         ; 0051d325
    PUSH EAX                            ; 0051d327
    PUSH 0x6381ba                       ; 0051d328 | = "%d\n" | s_d_006381ba = %d

    PUSH EBP                            ; 0051d32d
    ADD EBX,0x4                         ; 0051d32e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051d331 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051d336
    CMP EBX,0x4004                      ; 0051d339
    JNZ 0x0051d322                      ; 0051d33f | LAB_0051d322
        ;   XREF to: 0051d322 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x54]      ; 0051d341
    PUSH 0x147a                         ; 0051d344
    MOV EAX,dword ptr [EAX + 0x4000]    ; 0051d349
    PUSH 0x6381be                       ; 0051d34f | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_006381be = ..\shape\meshlod.cpp
    SHL EAX,0x2                         ; 0051d354
    PUSH EAX                            ; 0051d357
    MOV EBX,dword ptr [ESI + 0x58]      ; 0051d358
    PUSH EBX                            ; 0051d35b
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0051d35c | void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0051d361
    MOV dword ptr [ESI + 0x58],EAX      ; 0051d364
    TEST EAX,EAX                        ; 0051d367
    JZ 0x0051d3d6                       ; 0051d369 | LAB_0051d3d6
        ;   XREF to: 0051d3d6 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0051d36b
        ;   Label: LAB_0051d36b
    XOR EDI,EDI                         ; 0051d36d
    MOV EAX,dword ptr [ESI + 0x54]      ; 0051d36f
        ;   Label: LAB_0051d36f
    CMP EDI,dword ptr [EAX + 0x4000]    ; 0051d372
    JL 0x0051d3fd                       ; 0051d378 | LAB_0051d3fd
        ;   XREF to: 0051d3fd (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 0051d37e
    POP EBP                             ; 0051d381
    POP EDI                             ; 0051d382
    POP ESI                             ; 0051d383
    POP EBX                             ; 0051d384
    RET                                 ; 0051d385
    MOV EBX,0x63815c                    ; 0051d386 | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_0063815c = ..\shape\meshlod.cpp
        ;   Label: LAB_0051d386
    MOV EDI,0x1470                      ; 0051d38b
    PUSH 0x638171                       ; 0051d390 | = "Out of memory!" | s_Out_of_memory_00638171 = Out of memory!
    MOV dword ptr [0x02f0ca48],EBX      ; 0051d395 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0051d39b | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051d3a1 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051d3a6
    JMP 0x0051d305                      ; 0051d3a9 | LAB_0051d305
        ;   XREF to: 0051d305 (UNCONDITIONAL_JUMP)
    MOV EDX,0x638184                    ; 0051d3ae | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00638184 = ..\shape\meshlod.cpp
        ;   Label: LAB_0051d3ae
    MOV ECX,0x1474                      ; 0051d3b3
    PUSH 0x638199                       ; 0051d3b8 | = "LodMesh::gridLoad - file is old!" | s_LodMesh_gridLoad_file_is_00638199 = LodMesh::gridLoad - file is old!
    MOV dword ptr [0x02f0ca48],EDX      ; 0051d3bd | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0051d3c3 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051d3c9 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051d3ce
    JMP 0x0051d320                      ; 0051d3d1 | LAB_0051d320
        ;   XREF to: 0051d320 (UNCONDITIONAL_JUMP)
    MOV EAX,0x6381d3                    ; 0051d3d6 | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_006381d3 = ..\shape\meshlod.cpp
        ;   Label: LAB_0051d3d6
    MOV EDX,0x147b                      ; 0051d3db
    PUSH 0x6381e8                       ; 0051d3e0 | = "Out of memory!" | s_Out_of_memory_006381e8 = Out of memory!
    MOV [0x02f0ca48],EAX                ; 0051d3e5 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0051d3ea | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051d3f0 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051d3f5
    JMP 0x0051d36b                      ; 0051d3f8 | LAB_0051d36b
        ;   XREF to: 0051d36b (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x58]      ; 0051d3fd
        ;   Label: LAB_0051d3fd
    ADD EAX,EBX                         ; 0051d400
    PUSH EAX                            ; 0051d402
    PUSH 0x6381f7                       ; 0051d403 | = "%d\n" | s_d_006381f7 = %d

    PUSH EBP                            ; 0051d408
    INC EDI                             ; 0051d409
    ADD EBX,0x4                         ; 0051d40a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051d40d | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051d412
    JMP 0x0051d36f                      ; 0051d415 | LAB_0051d36f
        ;   XREF to: 0051d36f (UNCONDITIONAL_JUMP)

