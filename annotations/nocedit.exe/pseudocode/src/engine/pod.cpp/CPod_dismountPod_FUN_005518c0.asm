; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_pod.cpp_CPod_dismountPod_FUN_005518c0(CPod * this_ptr, int index)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[2]:
;   engine_pod.cpp_CPod_dismount_FUN_00550b90 at 00550c0f
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0 at 00551447
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_006408b1
;   TerminatedCString s_CPod_dismountPod_invalid_006408c3
;   TerminatedCString s_engine_pod_cpp_006408e5
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005518c0
        ;   Label: engine_pod.cpp_CPod_dismountPod_FUN_005518c0
    PUSH ESI                            ; 005518c1
    PUSH EBP                            ; 005518c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005518c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005518c7
    TEST ESI,ESI                        ; 005518cb
    JL 0x005518d3                       ; 005518cd | LAB_005518d3
        ;   XREF to: 005518d3 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [EBX]             ; 005518cf
    JL 0x005518f8                       ; 005518d1 | LAB_005518f8
        ;   XREF to: 005518f8 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005518d3
        ;   Label: LAB_005518d3
    MOV ECX,0x6408b1                    ; 005518d4 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006408b1 = ..\engine\pod.cpp
    MOV EDI,0x5fd                       ; 005518d9
    PUSH 0x6408c3                       ; 005518de | = "CPod::dismountPod - invalid index" | s_CPod_dismountPod_invalid_006408c3 = CPod::dismountPod - invalid index
    MOV dword ptr [0x02f0ca48],ECX      ; 005518e3 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005518e9 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005518ef | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005518f4
    POP EDI                             ; 005518f7
    MOV EAX,0x602                       ; 005518f8
        ;   Label: LAB_005518f8
    MOV EBP,0x6408e5                    ; 005518fd | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006408e5 = ..\engine\pod.cpp
    MOV [0x02f0d944],EAX                ; 00551902 | int g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EBP      ; 00551907 | char * g_CurrentDebugFilename
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x4] ; 0055190d
    TEST EAX,EAX                        ; 00551911
    JZ 0x00551929                       ; 00551913 | LAB_00551929
        ;   XREF to: 00551929 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00551915
    PUSH EAX                            ; 00551917
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 00551918 | CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055191d
    PUSH EAX                            ; 00551920
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00551921 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00551926
    MOV ECX,dword ptr [EBX]             ; 00551929
        ;   Label: LAB_00551929
    DEC ECX                             ; 0055192b
    MOV EDX,ESI                         ; 0055192c
    MOV dword ptr [EBX],ECX             ; 0055192e
    CMP ESI,ECX                         ; 00551930
    JGE 0x00551950                      ; 00551932 | LAB_00551950
        ;   XREF to: 00551950 (CONDITIONAL_JUMP)
    LEA EAX,[ESI*0x4 + 0x0]             ; 00551934
    ADD EAX,EBX                         ; 0055193b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0055193d
        ;   Label: LAB_0055193d
    MOV dword ptr [EAX + 0x4],ECX       ; 00551940
    INC EDX                             ; 00551943
    MOV EBP,dword ptr [EBX]             ; 00551944
    ADD EAX,0x4                         ; 00551946
    CMP EDX,EBP                         ; 00551949
    JL 0x0055193d                       ; 0055194b | LAB_0055193d
        ;   XREF to: 0055193d (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0055194d
    MOV EAX,dword ptr [EBX]             ; 00551950
        ;   Label: LAB_00551950
    MOV dword ptr [EBX + EAX*0x4 + 0x4],0x0 ; 00551952
    POP EBP                             ; 0055195a
    POP ESI                             ; 0055195b
    POP EBX                             ; 0055195c
    RET                                 ; 0055195d

