; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0(CDemonRaytrace * this_ptr, int * output_count, int * * input_indices_array, int * * output_indices_array)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   output_count
; int * *          Stack[0xc]:4   input_indices_array
; int * *          Stack[0x10]:4   output_indices_array
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a233
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_00622c3b
;   TerminatedCString s_CDemonRenderer_getPVS_PV_00622c4e
;   TerminatedCString s_core_dtrace_cpp_00622c79
;   TerminatedCString s_core_dtrace_cpp_00622c8c
;   TerminatedCString s_CDemonRaytrace_getPVS_no_00622c9f
;   TerminatedCString s_core_dtrace_cpp_00622ccd
;   TerminatedCString s_CDemonRaytrace_getPVS_ou_00622ce0
;   TerminatedCString s_core_dtrace_cpp_00622d07
;   TerminatedCString s_CDemonRenderer_savePVS_c_00622d1a
;   int g_PVSDrawnCubeCount
;   int g_PVSReadyFlag
;   CDemonCube*[20000] g_PVSCubePointers
;   undefined4 DAT_02ca03b0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498fb0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0
    PUSH ESI                            ; 00498fb1
    PUSH EDI                            ; 00498fb2
    PUSH EBP                            ; 00498fb3
    MOV EBX,dword ptr [ESP + 0x18]      ; 00498fb4
    CMP dword ptr [0x02ca03a8],0x0      ; 00498fb8 | g_PVSReadyFlag
    JNZ 0x00498fe4                      ; 00498fbf
        ;   XREF to: 00498fe4 (CONDITIONAL_JUMP)  ; LAB_00498fe4
    MOV ECX,0x622c3b                    ; 00498fc1 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x8ea                       ; 00498fc6
    PUSH 0x622c4e                       ; 00498fcb | = "CDemonRenderer::getPVS - PVS is not v..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00498fd0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00498fd6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00498fdc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00498fe1
    PUSH 0x8f2                          ; 00498fe4
        ;   Label: LAB_00498fe4
    MOV EAX,[0x02ca03a4]                ; 00498fe9 | g_PVSDrawnCubeCount
    PUSH 0x622c79                       ; 00498fee | = "..\\core\\dtrace.cpp"
    MOV dword ptr [EBX],EAX             ; 00498ff3
    SHL EAX,0x2                         ; 00498ff5
    PUSH EAX                            ; 00498ff8
    MOV EAX,dword ptr [ESP + 0x28]      ; 00498ff9
    MOV EDI,dword ptr [EAX]             ; 00498ffd
    PUSH EDI                            ; 00498fff
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00499000
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 00499005
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00499008
    MOV dword ptr [EDX],EAX             ; 0049900c
    CMP dword ptr [EBX],0x1             ; 0049900e
    JGE 0x00499035                      ; 00499011
        ;   XREF to: 00499035 (CONDITIONAL_JUMP)  ; LAB_00499035
    MOV EAX,0x622c8c                    ; 00499013 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x8f6                       ; 00499018
    PUSH 0x622c9f                       ; 0049901d | = "CDemonRaytrace::getPVS - no cubes ren..."
    MOV [0x02f0ca48],EAX                ; 00499022 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00499027 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049902d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00499032
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00499035
        ;   Label: LAB_00499035
    CMP dword ptr [EAX],0x0             ; 00499039
    JNZ 0x00499061                      ; 0049903c
        ;   XREF to: 00499061 (CONDITIONAL_JUMP)  ; LAB_00499061
    MOV EBX,0x622ccd                    ; 0049903e | = "..\\core\\dtrace.cpp"
    MOV ESI,0x8fa                       ; 00499043
    PUSH 0x622ce0                       ; 00499048 | = "CDemonRaytrace::getPVS - out of memory"
    MOV dword ptr [0x02f0ca48],EBX      ; 0049904d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00499053 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00499059
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049905e
    MOV EDX,dword ptr [ESP + 0x14]      ; 00499061
        ;   Label: LAB_00499061
    MOV EAX,dword ptr [ESP + 0x14]      ; 00499065
    MOV EDI,dword ptr [EDX + 0x44]      ; 00499069
    MOV EAX,dword ptr [EAX + 0x40]      ; 0049906c
    IMUL EAX,EDI                        ; 0049906f
    MOV ESI,dword ptr [EDX + 0x48]      ; 00499072
    IMUL ESI,EAX                        ; 00499075
    MOV EAX,[0x02ca03a4]                ; 00499078 | g_PVSDrawnCubeCount
    XOR EBP,EBP                         ; 0049907d
    TEST EAX,EAX                        ; 0049907f
    JLE 0x004990da                      ; 00499081
        ;   XREF to: 004990da (CONDITIONAL_JUMP)  ; LAB_004990da
    XOR EDI,EDI                         ; 00499083
    XOR EBX,EBX                         ; 00499085
        ;   Label: LAB_00499085
    TEST ESI,ESI                        ; 00499087
    JLE 0x0049909c                      ; 00499089
        ;   XREF to: 0049909c (CONDITIONAL_JUMP)  ; LAB_0049909c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049908b
    MOV EDX,EDI                         ; 0049908f
    MOV EAX,dword ptr [EAX + 0x50]      ; 00499091
    CMP EAX,dword ptr [EDX + 0x2ca03ac] ; 00499094 | g_PVSCubePointers | DAT_02ca03b0
        ;   Label: LAB_00499094
    JNZ 0x004990df                      ; 0049909a
        ;   XREF to: 004990df (CONDITIONAL_JUMP)  ; LAB_004990df
    CMP EBX,ESI                         ; 0049909c
        ;   Label: LAB_0049909c
    JL 0x004990c2                       ; 0049909e
        ;   XREF to: 004990c2 (CONDITIONAL_JUMP)  ; LAB_004990c2
    MOV EAX,0x622d07                    ; 004990a0 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x907                       ; 004990a5
    PUSH 0x622d1a                       ; 004990aa | = "CDemonRenderer::savePVS - can't find ..."
    MOV [0x02f0ca48],EAX                ; 004990af | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004990b4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004990ba
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004990bf
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004990c2
        ;   Label: LAB_004990c2
    ADD EDI,0x4                         ; 004990c6
    MOV EAX,dword ptr [EAX]             ; 004990c9
    MOV EDX,dword ptr [0x02ca03a4]      ; 004990cb | g_PVSDrawnCubeCount
    INC EBP                             ; 004990d1
    MOV dword ptr [EDI + EAX*0x1 + -0x4],EBX ; 004990d2
    CMP EBP,EDX                         ; 004990d6
    JL 0x00499085                       ; 004990d8
        ;   XREF to: 00499085 (CONDITIONAL_JUMP)  ; LAB_00499085
    POP EBP                             ; 004990da
        ;   Label: LAB_004990da
    POP EDI                             ; 004990db
    POP ESI                             ; 004990dc
    POP EBX                             ; 004990dd
    RET                                 ; 004990de
    INC EBX                             ; 004990df
        ;   Label: LAB_004990df
    ADD EAX,0x34                        ; 004990e0
    CMP EBX,ESI                         ; 004990e3
    JL 0x00499094                       ; 004990e5
        ;   XREF to: 00499094 (CONDITIONAL_JUMP)  ; LAB_00499094
    JMP 0x0049909c                      ; 004990e7
        ;   XREF to: 0049909c (UNCONDITIONAL_JUMP)  ; LAB_0049909c

