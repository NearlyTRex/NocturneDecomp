; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dpart.cpp_CDemonPart_alloc_FUN_00482180(CDemonPart * this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x10c]:1  local_10c
;
; XREF[3]:
;   core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10 at 00482aac
;   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0 at 00482600
;   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 at 00482e94
;
; Referenced Globals:
;   TerminatedCString s_core_dpart_cpp_00621656
;   TerminatedCString s_CDemonPart_alloc_Out_of__00621668
;   TerminatedCString s_core_dpart_cpp_00621695
;   TerminatedCString s_core_dpart_cpp_006216a7
;   TerminatedCString s_core_dpart_cpp_006216b9
;   TerminatedCString s_CDemonPart_alloc_Out_of__006216cb
;   TerminatedCString s_core_dpart_cpp_006216f5
;   TerminatedCString s_core_dpart_cpp_00621707
;   TerminatedCString s_CDemonPart_alloc_Out_of__00621719
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_free_FUN_004822b0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482180
        ;   Label: core_dpart.cpp_CDemonPart_alloc_FUN_00482180
    PUSH EDI                            ; 00482181
    PUSH EBP                            ; 00482182
    SUB ESP,0x100                       ; 00482183
    MOV EBX,dword ptr [ESP + 0x110]     ; 00482189
    PUSH EBX                            ; 00482190
    CALL core_dpart.cpp_CDemonPart_free_FUN_004822b0 ; 00482191
        ;   XREF to: 004822b0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_free_FUN_004822b0(CDemonPart * this_ptr)
    MOV EDX,dword ptr [EBX + 0x20]      ; 00482196
    ADD ESP,0x4                         ; 00482199
    TEST EDX,EDX                        ; 0048219c
    JNZ 0x004821b5                      ; 0048219e
        ;   XREF to: 004821b5 (CONDITIONAL_JUMP)  ; LAB_004821b5
    MOV EBP,dword ptr [EBX + 0x24]      ; 004821a0
        ;   Label: LAB_004821a0
    TEST EBP,EBP                        ; 004821a3
    JNZ 0x00482254                      ; 004821a5
        ;   XREF to: 00482254 (CONDITIONAL_JUMP)  ; LAB_00482254
    ADD ESP,0x100                       ; 004821ab
        ;   Label: LAB_004821ab
    POP EBP                             ; 004821b1
    POP EDI                             ; 004821b2
    POP EBX                             ; 004821b3
    RET                                 ; 004821b4
    PUSH 0x87                           ; 004821b5
        ;   Label: LAB_004821b5
    PUSH 0x621656                       ; 004821ba | = "..\\core\\dpart.cpp"
    PUSH 0xc                            ; 004821bf
    PUSH EDX                            ; 004821c1
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 004821c2
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004821c7
    MOV dword ptr [EBX + 0x2c],EAX      ; 004821ca
    TEST EAX,EAX                        ; 004821cd
    JNZ 0x00482207                      ; 004821cf
        ;   XREF to: 00482207 (CONDITIONAL_JUMP)  ; LAB_00482207
    MOV EDI,dword ptr [EBX + 0x20]      ; 004821d1
    PUSH EDI                            ; 004821d4
    PUSH 0x621668                       ; 004821d5 | = "CDemonPart::alloc - Out of vertex %d ..."
    LEA EAX,[ESP + 0x8]                 ; 004821da
    PUSH EAX                            ; 004821de
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004821df
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x8b                        ; 004821e4
    ADD ESP,0xc                         ; 004821e9
    MOV [0x02f0ca4c],EAX                ; 004821ec | g_CurrentLineNumber
    MOV EAX,ESP                         ; 004821f1
    MOV EBP,0x621695                    ; 004821f3 | = "..\\core\\dpart.cpp"
    PUSH EAX                            ; 004821f8
    MOV dword ptr [0x02f0ca48],EBP      ; 004821f9 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004821ff
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00482204
    PUSH 0x90                           ; 00482207
        ;   Label: LAB_00482207
    PUSH 0x6216a7                       ; 0048220c | = "..\\core\\dpart.cpp"
    PUSH 0xc                            ; 00482211
    MOV EDX,dword ptr [EBX + 0x20]      ; 00482213
    PUSH EDX                            ; 00482216
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 00482217
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0048221c
    MOV dword ptr [EBX + 0x30],EAX      ; 0048221f
    TEST EAX,EAX                        ; 00482222
    JNZ 0x004821a0                      ; 00482224
        ;   XREF to: 004821a0 (CONDITIONAL_JUMP)  ; LAB_004821a0
    PUSH ESI                            ; 0048222a
    MOV ESI,0x6216b9                    ; 0048222b | = "..\\core\\dpart.cpp"
    MOV EDI,0x91                        ; 00482230
    PUSH 0x6216cb                       ; 00482235 | = "CDemonPart::alloc - Out of normal mem..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0048223a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00482240 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00482246
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0048224b
    POP ESI                             ; 0048224e
    JMP 0x004821a0                      ; 0048224f
        ;   XREF to: 004821a0 (UNCONDITIONAL_JUMP)  ; LAB_004821a0
    PUSH 0x98                           ; 00482254
        ;   Label: LAB_00482254
    PUSH 0x6216f5                       ; 00482259 | = "..\\core\\dpart.cpp"
    PUSH 0x20                           ; 0048225e
    PUSH EBP                            ; 00482260
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 00482261
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
    ADD ESP,0x10                        ; 00482266
    MOV dword ptr [EBX + 0x34],EAX      ; 00482269
    TEST EAX,EAX                        ; 0048226c
    JNZ 0x004821ab                      ; 0048226e
        ;   XREF to: 004821ab (CONDITIONAL_JUMP)  ; LAB_004821ab
    MOV ECX,0x621707                    ; 00482274 | = "..\\core\\dpart.cpp"
    MOV EBX,0x99                        ; 00482279
    PUSH 0x621719                       ; 0048227e | = "CDemonPart::alloc - Out of face memory!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00482283 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00482289 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048228f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00482294
    ADD ESP,0x100                       ; 00482297
    POP EBP                             ; 0048229d
    POP EDI                             ; 0048229e
    POP EBX                             ; 0048229f
    RET                                 ; 004822a0

