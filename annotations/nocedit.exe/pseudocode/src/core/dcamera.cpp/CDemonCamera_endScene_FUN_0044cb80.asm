; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_zbuffer_copy
;
; XREF[11]:
;   core_msnedit.cpp_BeginAndEndScene_FUN_0053c970 at 0053c9ec
;   core_msnedit.cpp_FUN_0053b9f0 at 0053bb1c
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 00539702
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c6b9
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a79c
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b4a2
;   core_setedit.cpp_CDemonSet_FUN_00581aa0 at 00581e15
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 00583add
;   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 at 0057aad8
;   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 at 0057fe95
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_0061a013
;   TerminatedCString s_CDemonCamera_endScene_Sc_0061a027
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   uint*[1024] g_ZBufferScanlineArray
;   undefined4 g_ZBufferScanlineArray[1]
;   int g_UseExternalRenderer
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_FullscreenMode
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410
;   core_event.cpp_FUN_004b1a78
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
;   wincore_windll.cpp_endScene_FUN_005b72a0
;   wincore_windll.cpp_masterZBuffer_FUN_005b7d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044cb80
        ;   Label: core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
    PUSH ESI                            ; 0044cb81
    PUSH EBP                            ; 0044cb82
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044cb83
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0044cb87
    JZ 0x0044cc2c                       ; 0044cb8e | LAB_0044cc2c
        ;   XREF to: 0044cc2c (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x11e4],0x0    ; 0044cb94
    CMP dword ptr [0x03f6b878],0x0      ; 0044cb9e | int g_FullscreenMode
        ;   Label: LAB_0044cb9e
    JZ 0x0044cbac                       ; 0044cba5 | LAB_0044cbac
        ;   XREF to: 0044cbac (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_endScene_FUN_005b72a0 ; 0044cba7 | int wincore_windll.cpp_endScene_FUN_005b72a0()
        ;   XREF to: 005b72a0 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [EBX + 0x168]     ; 0044cbac
        ;   Label: LAB_0044cbac
    TEST EBP,EBP                        ; 0044cbb2
    JNZ 0x0044cc11                      ; 0044cbb4 | LAB_0044cc11
        ;   XREF to: 0044cc11 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x14],0x0      ; 0044cbb6
    JNZ 0x0044cc11                      ; 0044cbbb | LAB_0044cc11
        ;   XREF to: 0044cc11 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d03e94],0x0      ; 0044cbbd | int g_UseExternalRenderer
    JNZ 0x0044cc54                      ; 0044cbc4 | LAB_0044cc54
        ;   XREF to: 0044cc54 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x148]     ; 0044cbca
        ;   Label: LAB_0044cbca
    XOR ESI,ESI                         ; 0044cbd0
    TEST ECX,ECX                        ; 0044cbd2
    JLE 0x0044cc11                      ; 0044cbd4 | LAB_0044cc11
        ;   XREF to: 0044cc11 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0044cbd6
    XOR EDI,EDI                         ; 0044cbd7
    MOV ECX,dword ptr [EBX + 0x144]     ; 0044cbd9
        ;   Label: LAB_0044cbd9
    IMUL ECX,ESI                        ; 0044cbdf
    MOV EDX,dword ptr [EBX + 0x144]     ; 0044cbe2
    SHL EDX,0x2                         ; 0044cbe8
    MOV EAX,dword ptr [EBX + 0x15c]     ; 0044cbeb
    PUSH EDX                            ; 0044cbf1
    SHL ECX,0x2                         ; 0044cbf2
    MOV EDX,dword ptr [EDI + 0x2cf7d5c] ; 0044cbf5 | uint *[1024] g_ZBufferScanlineArray
    ADD ECX,EAX                         ; 0044cbfb
    INC ESI                             ; 0044cbfd
    CALL core_event.cpp_FUN_004b1a78    ; 0044cbfe | void core_event.cpp_FUN_004b1a78()
        ;   XREF to: 004b1a78 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [EBX + 0x148]     ; 0044cc03
    ADD EDI,0x4                         ; 0044cc09
    CMP ESI,EBP                         ; 0044cc0c
    JL 0x0044cbd9                       ; 0044cc0e | LAB_0044cbd9
        ;   XREF to: 0044cbd9 (CONDITIONAL_JUMP)
    POP EDI                             ; 0044cc10
    MOV EAX,[0x006703ec]                ; 0044cc11 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_0044cc11
    PUSH EAX                            ; 0044cc16 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480 ; 0044cc17 | void engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480(CDemonRenderer * this_ptr)
        ;   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044cc1c
    PUSH EBX                            ; 0044cc1f
    CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410 ; 0044cc20 | void core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(CDemonCamera * this_ptr)
        ;   XREF to: 0044c410 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044cc25
    POP EBP                             ; 0044cc28
    POP ESI                             ; 0044cc29
    POP EBX                             ; 0044cc2a
    RET                                 ; 0044cc2b
    MOV ECX,0x61a013                    ; 0044cc2c | = "..\\core\\dcamera.cpp" | s_core_dcamera_cpp_0061a013 = ..\core\dcamera.cpp
        ;   Label: LAB_0044cc2c
    MOV ESI,0x3e9                       ; 0044cc31
    PUSH 0x61a027                       ; 0044cc36 | = "CDemonCamera::endScene - Scene not open!" | s_CDemonCamera_endScene_Sc_0061a027 = CDemonCamera::endScene - Scene not open!
    MOV dword ptr [0x02f0ca48],ECX      ; 0044cc3b | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0044cc41 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044cc47 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044cc4c
    JMP 0x0044cb9e                      ; 0044cc4f | LAB_0044cb9e
        ;   XREF to: 0044cb9e (UNCONDITIONAL_JUMP)
    PUSH EBP                            ; 0044cc54
        ;   Label: LAB_0044cc54
    CALL wincore_windll.cpp_masterZBuffer_FUN_005b7d00 ; 0044cc55 | int wincore_windll.cpp_masterZBuffer_FUN_005b7d00(int z_buffer_mode)
        ;   XREF to: 005b7d00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044cc5a
    JMP 0x0044cbca                      ; 0044cc5d | LAB_0044cbca
        ;   XREF to: 0044cbca (UNCONDITIONAL_JUMP)

