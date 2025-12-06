; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_C3DSCamera_apply_FUN_00585870(C3DSCamera * this_ptr, CDemonCamera * camera)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; CDemonCamera *   Stack[0x8]:4   camera
;
; XREF[2]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a75f
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b2de
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_006492b3
;   TerminatedCString s_C3DSCamera_apply_shouldn_006492c7
;   TerminatedCString s_Ambient_set_low_by_scrip_0064930a
;   TerminatedCString s_Ambient_set_ridiculously_00649325
;   double g_MaxRecommendedAmbient = 0.25
;   CConsole* g_CConsolePtr = 0083b1a4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CConsole g_ConsolePtr
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_032613c8
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585870
        ;   Label: core_setutil.cpp_C3DSCamera_apply_FUN_00585870
    PUSH ESI                            ; 00585871
    PUSH EDI                            ; 00585872
    PUSH EBP                            ; 00585873
    MOV EBX,dword ptr [ESP + 0x14]      ; 00585874
    MOV EBP,dword ptr [ESP + 0x18]      ; 00585878
    CMP dword ptr [EBX + 0x140],0x0     ; 0058587c
    JNZ 0x0058592d                      ; 00585883 | LAB_0058592d
        ;   XREF to: 0058592d (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0x4]                 ; 00585889
        ;   Label: LAB_00585889
    LEA EDX,[EBX + 0x100]               ; 0058588c
    CMP EAX,EDX                         ; 00585892
    JZ 0x005858a6                       ; 00585894 | LAB_005858a6
        ;   XREF to: 005858a6 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDX]             ; 00585896
    MOV dword ptr [EAX],ECX             ; 00585898
    MOV ECX,dword ptr [EDX + 0x4]       ; 0058589a
    MOV dword ptr [EAX + 0x4],ECX       ; 0058589d
    MOV ECX,dword ptr [EDX + 0x8]       ; 005858a0
    MOV dword ptr [EAX + 0x8],ECX       ; 005858a3
    MOV ECX,0xa                         ; 005858a6
        ;   Label: LAB_005858a6
    LEA ESI,[EBX + 0x118]               ; 005858ab
    LEA EDI,[EBP + 0x10]                ; 005858b1
    MOVSD.REP ES:EDI,ESI                ; 005858b4
    FLD float ptr [EBX + 0x144]         ; 005858b6
    LEA EDI,[EBP + 0x40]                ; 005858bc
    MOV ESI,EBX                         ; 005858bf
    FSTP float ptr [EBP + 0x38]         ; 005858c1
    PUSH EDI                            ; 005858c4
    MOV AL,byte ptr [ESI]               ; 005858c5
        ;   Label: LAB_005858c5
    MOV byte ptr [EDI],AL               ; 005858c7
    CMP AL,0x0                          ; 005858c9
    JZ 0x005858dd                       ; 005858cb | LAB_005858dd
        ;   XREF to: 005858dd (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005858cd
    ADD ESI,0x2                         ; 005858d0
    MOV byte ptr [EDI + 0x1],AL         ; 005858d3
    ADD EDI,0x2                         ; 005858d6
    CMP AL,0x0                          ; 005858d9
    JNZ 0x005858c5                      ; 005858db | LAB_005858c5
        ;   XREF to: 005858c5 (CONDITIONAL_JUMP)
    POP EDI                             ; 005858dd
        ;   Label: LAB_005858dd
    PUSH dword ptr [EBX + 0x148]        ; 005858de
    PUSH EBP                            ; 005858e4
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0 ; 005858e5 | void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity)
        ;   XREF to: 004528e0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x006810c8]                ; 005858ea | CDemonSet * g_CDemonSetPtr
    FLD float ptr [EBX + 0x148]         ; 005858ef
    ADD ESP,0x8                         ; 005858f5
    FCOMP float ptr [EAX + 0x14d150]    ; 005858f8 | DAT_032613c8
    FNSTSW AX                           ; 005858fe
    SAHF                                ; 00585900
    JNC 0x00585917                      ; 00585901 | LAB_00585917
        ;   XREF to: 00585917 (CONDITIONAL_JUMP)
    PUSH 0x64930a                       ; 00585903 | = "Ambient set low by script\n" | s_Ambient_set_low_by_scrip_0064930a = Ambient set low by script

    MOV EDI,dword ptr [0x0066e8e0]      ; 00585908 | CConsole * g_CConsolePtr
    PUSH EDI                            ; 0058590e | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0058590f | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00585914
    FLD float ptr [EBX + 0x148]         ; 00585917
        ;   Label: LAB_00585917
    FCOMP double ptr [0x0064934b]       ; 0058591d | double g_MaxRecommendedAmbient
    FNSTSW AX                           ; 00585923
    SAHF                                ; 00585925
    JA 0x00585956                       ; 00585926 | LAB_00585956
        ;   XREF to: 00585956 (CONDITIONAL_JUMP)
    POP EBP                             ; 00585928
    POP EDI                             ; 00585929
    POP ESI                             ; 0058592a
    POP EBX                             ; 0058592b
    RET                                 ; 0058592c
    PUSH EBX                            ; 0058592d
        ;   Label: LAB_0058592d
    MOV ECX,0x6492b3                    ; 0058592e | = "..\\core\\setutil.cpp" | s_core_setutil_cpp_006492b3 = ..\core\setutil.cpp
    MOV ESI,0xf7                        ; 00585933
    PUSH 0x6492c7                       ; 00585938 | = "C3DSCamera::apply - shouldn't ever do..." | s_C3DSCamera_apply_shouldn_006492c7 = C3DSCamera::apply - shouldn't ever do this on panning camera '%s'!
    MOV dword ptr [0x02f0ca48],ECX      ; 0058593d | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00585943 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00585949 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058594e
    JMP 0x00585889                      ; 00585951 | LAB_00585889
        ;   XREF to: 00585889 (UNCONDITIONAL_JUMP)
    PUSH 0x649325                       ; 00585956 | = "Ambient set ridiculously high\n" | s_Ambient_set_ridiculously_00649325 = Ambient set ridiculously high

        ;   Label: LAB_00585956
    MOV EBP,dword ptr [0x0066e8e0]      ; 0058595b | CConsole * g_CConsolePtr
    PUSH EBP                            ; 00585961 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00585962 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00585967
    POP EBP                             ; 0058596a
    POP EDI                             ; 0058596b
    POP ESI                             ; 0058596c
    POP EBX                             ; 0058596d
    RET                                 ; 0058596e

