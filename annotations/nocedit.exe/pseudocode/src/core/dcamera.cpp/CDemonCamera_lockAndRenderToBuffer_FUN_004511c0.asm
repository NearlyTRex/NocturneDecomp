; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0(CDemonCamera * this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c437
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_0061a2d2
;   TerminatedCString s_Unable_to_lock_hold_buff_0061a2e6
;   int g_WindowHeight = 0xc8
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_FullscreenMode
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   wincore_windll.cpp_beginScene_FUN_005b7280
;   wincore_windll.cpp_lockFrame_FUN_005b7210
;   wincore_windll.cpp_lockHoldBuffer_FUN_005b7df0
;   wincore_windll.cpp_unlockFrame_FUN_005b7250
;   wincore_windll.cpp_unlockHoldBuffer_FUN_005b7e10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004511c0
        ;   Label: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0
    PUSH EDI                            ; 004511c1
    CMP dword ptr [0x00679398],0x1e0    ; 004511c2 | int g_WindowHeight
    JG 0x00451201                       ; 004511cc | LAB_00451201
        ;   XREF to: 00451201 (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 004511ce | int wincore_windll.cpp_lockFrame_FUN_005b7210()
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [ESP + 0xc]       ; 004511d3
        ;   Label: LAB_004511d3
    PUSH ESI                            ; 004511d7
    CALL core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 ; 004511d8 | void core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270(CDemonCamera * this_ptr)
        ;   XREF to: 00453270 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x00679398]      ; 004511dd | int g_WindowHeight
    ADD ESP,0x4                         ; 004511e3
    CMP EDI,0x1e0                       ; 004511e6
    JLE 0x00451231                      ; 004511ec | LAB_00451231
        ;   XREF to: 00451231 (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_unlockHoldBuffer_FUN_005b7e10 ; 004511ee | int wincore_windll.cpp_unlockHoldBuffer_FUN_005b7e10()
        ;   XREF to: 005b7e10 (UNCONDITIONAL_CALL)
    CMP dword ptr [0x03f6b878],0x0      ; 004511f3 | int g_FullscreenMode
    JNZ 0x00451247                      ; 004511fa | LAB_00451247
        ;   XREF to: 00451247 (CONDITIONAL_JUMP)
    POP EDI                             ; 004511fc
    POP ESI                             ; 004511fd
    MOV EAX,EAX                         ; 004511fe
    RET                                 ; 00451200
    CALL wincore_windll.cpp_lockHoldBuffer_FUN_005b7df0 ; 00451201 | int wincore_windll.cpp_lockHoldBuffer_FUN_005b7df0()
        ;   Label: LAB_00451201
        ;   XREF to: 005b7df0 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 00451206
    JNZ 0x004511d3                      ; 00451208 | LAB_004511d3
        ;   XREF to: 004511d3 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0045120a
    MOV ECX,0x61a2d2                    ; 0045120b | = "..\\core\\dcamera.cpp" | s_core_dcamera_cpp_0061a2d2 = ..\core\dcamera.cpp
    MOV EBX,0xe37                       ; 00451210
    PUSH 0x61a2e6                       ; 00451215 | = "Unable to lock hold buffer.   Please ..." | s_Unable_to_lock_hold_buff_0061a2e6 = Unable to lock hold buffer.   Please set 640x480 as your resolution.
    MOV dword ptr [0x02f0ca48],ECX      ; 0045121a | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00451220 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00451226 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045122b
    POP EBX                             ; 0045122e
    JMP 0x004511d3                      ; 0045122f | LAB_004511d3
        ;   XREF to: 004511d3 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00451231
        ;   Label: LAB_00451231
    CALL wincore_windll.cpp_unlockFrame_FUN_005b7250 ; 00451233 | void wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00451238
    CMP dword ptr [0x03f6b878],0x0      ; 0045123b | int g_FullscreenMode
    JNZ 0x00451247                      ; 00451242 | LAB_00451247
        ;   XREF to: 00451247 (CONDITIONAL_JUMP)
    POP EDI                             ; 00451244
    POP ESI                             ; 00451245
    RET                                 ; 00451246
    CALL wincore_windll.cpp_beginScene_FUN_005b7280 ; 00451247 | int wincore_windll.cpp_beginScene_FUN_005b7280()
        ;   Label: LAB_00451247
        ;   XREF to: 005b7280 (UNCONDITIONAL_CALL)
    POP EDI                             ; 0045124c
    POP ESI                             ; 0045124d
    RET                                 ; 0045124e

