; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840(CDemonCube * this_ptr)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData at 00456f53
;   core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0 at 004572dc
;   core_dcube.cpp_CDemonCube_load_FUN_00457530 at 004575f3
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_0061a5be
;   TerminatedCString s_core_dcube_cpp_0061a5d0
;   TerminatedCString s_CDemonCube_allocMemory_O_0061a5e2
;   TerminatedCString s_core_dcube_cpp_0061a611
;   TerminatedCString s_core_dcube_cpp_0061a623
;   TerminatedCString s_CDemonCube_allocMemory_O_0061a635
;   TerminatedCString s_core_dcube_cpp_0061a661
;   TerminatedCString s_core_dcube_cpp_0061a673
;   TerminatedCString s_CDemonCube_allocMemory_O_0061a685
;   TerminatedCString s_core_dcube_cpp_0061a6b9
;   TerminatedCString s_core_dcube_cpp_0061a6cb
;   TerminatedCString s_CDemonCube_allocMemory_O_0061a6dd
;   TerminatedCString s_core_dcube_cpp_0061a70b
;   TerminatedCString s_core_dcube_cpp_0061a71d
;   TerminatedCString s_CDemonCube_allocMemory_O_0061a72f
;   ... and 2 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456840
        ;   Label: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
    PUSH ESI                            ; 00456841
    PUSH EBP                            ; 00456842
    MOV EBX,dword ptr [ESP + 0x10]      ; 00456843
    MOV ESI,dword ptr [EBX + 0x20]      ; 00456847
    LEA EAX,[ESI*0x4 + 0x0]             ; 0045684a
    SUB EAX,ESI                         ; 00456851
    PUSH 0x5ff                          ; 00456853
    SHL EAX,0x2                         ; 00456858
    PUSH 0x61a5be                       ; 0045685b | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a5be = ..\core\dcube.cpp
    ADD EAX,0x4                         ; 00456860
    PUSH EAX                            ; 00456863
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00456864 | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00456869
    TEST EAX,EAX                        ; 0045686c
    JNZ 0x0045697d                      ; 0045686e | LAB_0045697d
        ;   XREF to: 0045697d (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x24],EAX      ; 00456874
        ;   Label: LAB_00456874
    TEST EAX,EAX                        ; 00456877
    JNZ 0x0045689e                      ; 00456879 | LAB_0045689e
        ;   XREF to: 0045689e (CONDITIONAL_JUMP)
    MOV ECX,0x61a5d0                    ; 0045687b | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a5d0 = ..\core\dcube.cpp
    MOV ESI,0x600                       ; 00456880
    PUSH 0x61a5e2                       ; 00456885 | = "CDemonCube::allocMemory - Out of vert..." | s_CDemonCube_allocMemory_O_0061a5e2 = CDemonCube::allocMemory - Out of vertex memory
    MOV dword ptr [0x02f0ca48],ECX      ; 0045688a | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00456890 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00456896 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045689b
    PUSH 0x601                          ; 0045689e
        ;   Label: LAB_0045689e
    MOV EAX,dword ptr [EBX + 0x28]      ; 004568a3
    PUSH 0x61a611                       ; 004568a6 | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a611 = ..\core\dcube.cpp
    SHL EAX,0x5                         ; 004568ab
    PUSH EAX                            ; 004568ae
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 004568af | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004568b4
    MOV dword ptr [EBX + 0x2c],EAX      ; 004568b7
    TEST EAX,EAX                        ; 004568ba
    JNZ 0x004568e0                      ; 004568bc | LAB_004568e0
        ;   XREF to: 004568e0 (CONDITIONAL_JUMP)
    MOV EBP,0x61a623                    ; 004568be | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a623 = ..\core\dcube.cpp
    MOV EAX,0x602                       ; 004568c3
    PUSH 0x61a635                       ; 004568c8 | = "CDemonCube::allocMemory - Out of tri ..." | s_CDemonCube_allocMemory_O_0061a635 = CDemonCube::allocMemory - Out of tri memory
    MOV dword ptr [0x02f0ca48],EBP      ; 004568cd | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004568d3 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004568d8 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004568dd
    PUSH 0x603                          ; 004568e0
        ;   Label: LAB_004568e0
    PUSH 0x61a661                       ; 004568e5 | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a661 = ..\core\dcube.cpp
    MOV EDX,dword ptr [EBX + 0x28]      ; 004568ea
    PUSH EDX                            ; 004568ed
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004568ee | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004568f3
    MOV dword ptr [EBX + 0x30],EAX      ; 004568f6
    TEST EAX,EAX                        ; 004568f9
    JNZ 0x00456922                      ; 004568fb | LAB_00456922
        ;   XREF to: 00456922 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004568fd
    MOV ESI,0x61a673                    ; 004568fe | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a673 = ..\core\dcube.cpp
    MOV EDI,0x604                       ; 00456903
    PUSH 0x61a685                       ; 00456908 | = "CDemonCube::allocMemory - Out of grou..." | s_CDemonCube_allocMemory_O_0061a685 = CDemonCube::allocMemory - Out of ground type memory
    MOV dword ptr [0x02f0ca48],ESI      ; 0045690d | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00456913 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00456919 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045691e
    POP EDI                             ; 00456921
    PUSH 0x605                          ; 00456922
        ;   Label: LAB_00456922
    PUSH 0x61a6b9                       ; 00456927 | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a6b9 = ..\core\dcube.cpp
    PUSH 0x40                           ; 0045692c
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0045692e | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00456933
    MOV dword ptr [EBX],EAX             ; 00456936
    TEST EAX,EAX                        ; 00456938
    JNZ 0x0045695e                      ; 0045693a | LAB_0045695e
        ;   XREF to: 0045695e (CONDITIONAL_JUMP)
    MOV EAX,0x61a6cb                    ; 0045693c | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a6cb = ..\core\dcube.cpp
    MOV EDX,0x606                       ; 00456941
    PUSH 0x61a6dd                       ; 00456946 | = "CDemonCube::allocMemory - Out of voxe..." | s_CDemonCube_allocMemory_O_0061a6dd = CDemonCube::allocMemory - Out of voxel memory
    MOV [0x02f0ca48],EAX                ; 0045694b | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00456950 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00456956 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045695b
    PUSH 0x607                          ; 0045695e
        ;   Label: LAB_0045695e
    PUSH 0x61a70b                       ; 00456963 | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a70b = ..\core\dcube.cpp
    PUSH 0x40                           ; 00456968
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0045696a | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045696f
    MOV dword ptr [EBX + 0x4],EAX       ; 00456972
    TEST EAX,EAX                        ; 00456975
    JZ 0x00456988                       ; 00456977 | LAB_00456988
        ;   XREF to: 00456988 (CONDITIONAL_JUMP)
    POP EBP                             ; 00456979
    POP ESI                             ; 0045697a
    POP EBX                             ; 0045697b
    RET                                 ; 0045697c
    ADD EAX,0x4                         ; 0045697d
        ;   Label: LAB_0045697d
    MOV dword ptr [EAX + -0x4],ESI      ; 00456980
    JMP 0x00456874                      ; 00456983 | LAB_00456874
        ;   XREF to: 00456874 (UNCONDITIONAL_JUMP)
    MOV EBX,0x61a71d                    ; 00456988 | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a71d = ..\core\dcube.cpp
        ;   Label: LAB_00456988
    MOV ESI,0x608                       ; 0045698d
    PUSH 0x61a72f                       ; 00456992 | = "CDemonCube::allocMemory - Out of voxe..." | s_CDemonCube_allocMemory_O_0061a72f = CDemonCube::allocMemory - Out of voxel memory
    MOV dword ptr [0x02f0ca48],EBX      ; 00456997 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0045699d | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004569a3 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004569a8
    POP EBP                             ; 004569ab
    POP ESI                             ; 004569ac
    POP EBX                             ; 004569ad
    RET                                 ; 004569ae

