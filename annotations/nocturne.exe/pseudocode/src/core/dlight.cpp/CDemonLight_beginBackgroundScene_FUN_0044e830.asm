; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044e830(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508fc7
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0057c6de
;   TerminatedCString s_CDemonLight_beginBackgro_0057c6f1
;   TerminatedCString s_core_dlight_cpp_0057c724
;   TerminatedCString s_CDemonLight_beginBackgro_0057c737
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01ab99f0
;   undefined4 DAT_01ab99f4
;   undefined4 DAT_01ab99f8
;   undefined4 DAT_01ab99f9
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01bd2fa5
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e830
        ;   Label: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044e830
    PUSH ESI                            ; 0044e831
    PUSH EDI                            ; 0044e832
    PUSH EBP                            ; 0044e833
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044e834
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0044e838
    JZ 0x0044e8f6                       ; 0044e83f
        ;   XREF to: 0044e8f6 (CONDITIONAL_JUMP)  ; LAB_0044e8f6
    MOV EDI,dword ptr [0x01ab99f0]      ; 0044e845 | DAT_01ab99f0
        ;   Label: LAB_0044e845
    INC EDI                             ; 0044e84b
    MOV dword ptr [0x01ab99f0],EDI      ; 0044e84c | DAT_01ab99f0
    CMP EDI,0x1                         ; 0044e852
    JNZ 0x0044e8f1                      ; 0044e855
        ;   XREF to: 0044e8f1 (CONDITIONAL_JUMP)  ; LAB_0044e8f1
    MOV ESI,0x1bd2fa0                   ; 0044e85b
    MOV ECX,dword ptr [EBX + 0x1cc4]    ; 0044e860
    MOV EDI,0x1ab99f4                   ; 0044e866
    SHL ECX,0x2                         ; 0044e86b
    PUSH EDI                            ; 0044e86e | DAT_01ab99f4
    MOV EAX,ECX                         ; 0044e86f
    SHR ECX,0x2                         ; 0044e871
    MOVSD.REP ES:EDI,ESI                ; 0044e874 | DAT_01bd2fa0 | DAT_01ab99f4 | DAT_01bd2fa4
    MOV CL,AL                           ; 0044e876
    AND CL,0x3                          ; 0044e878
    MOVSB.REP ES:EDI,ESI                ; 0044e87b | DAT_01bd2fa4 | DAT_01ab99f8 | DAT_01bd2fa5
    POP EDI                             ; 0044e87d
    CMP dword ptr [EBX + 0x2f9c],0x0    ; 0044e87e
    JNZ 0x0044e8aa                      ; 0044e885
        ;   XREF to: 0044e8aa (CONDITIONAL_JUMP)  ; LAB_0044e8aa
    MOV EDX,0x57c724                    ; 0044e887 | = "..\\core\\dlight.cpp"
    MOV ECX,0x1bc                       ; 0044e88c
    PUSH 0x57c737                       ; 0044e891 | = "CDemonLight::beginBackgroundScene - N..."
    MOV dword ptr [0x01cc4800],EDX      ; 0044e896 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0044e89c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0044e8a2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0044e8a7
    MOV ESI,dword ptr [EBX + 0x1cc4]    ; 0044e8aa
        ;   Label: LAB_0044e8aa
    XOR EAX,EAX                         ; 0044e8b0
    TEST ESI,ESI                        ; 0044e8b2
    JLE 0x0044e8e0                      ; 0044e8b4
        ;   XREF to: 0044e8e0 (CONDITIONAL_JUMP)  ; LAB_0044e8e0
    XOR EDX,EDX                         ; 0044e8b6
    MOV ESI,dword ptr [EBX + 0x1cc0]    ; 0044e8b8
        ;   Label: LAB_0044e8b8
    IMUL ESI,EAX                        ; 0044e8be
    MOV ECX,dword ptr [EBX + 0x2f9c]    ; 0044e8c1
    ADD ESI,ESI                         ; 0044e8c7
    ADD ECX,ESI                         ; 0044e8c9
    MOV dword ptr [EDX + 0x1bd2fa0],ECX ; 0044e8cb | DAT_01bd2fa0 | DAT_01bd2fa4
    INC EAX                             ; 0044e8d1
    MOV EDI,dword ptr [EBX + 0x1cc4]    ; 0044e8d2
    ADD EDX,0x4                         ; 0044e8d8
    CMP EAX,EDI                         ; 0044e8db
    JL 0x0044e8b8                       ; 0044e8dd
        ;   XREF to: 0044e8b8 (CONDITIONAL_JUMP)  ; LAB_0044e8b8
    NOP                                 ; 0044e8df
    PUSH 0x1                            ; 0044e8e0
        ;   Label: LAB_0044e8e0
    MOV EBP,dword ptr [0x005ae704]      ; 0044e8e2 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 0044e8e8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070 ; 0044e8e9
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0044e8ee
    POP EBP                             ; 0044e8f1
        ;   Label: LAB_0044e8f1
    POP EDI                             ; 0044e8f2
    POP ESI                             ; 0044e8f3
    POP EBX                             ; 0044e8f4
    RET                                 ; 0044e8f5
    MOV ECX,0x57c6de                    ; 0044e8f6 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0044e8f6
    MOV ESI,0x1af                       ; 0044e8fb
    PUSH 0x57c6f1                       ; 0044e900 | = "CDemonLight::beginBackgroundScene - S..."
    MOV dword ptr [0x01cc4800],ECX      ; 0044e905 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 0044e90b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0044e911
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0044e916
    JMP 0x0044e845                      ; 0044e919
        ;   XREF to: 0044e845 (UNCONDITIONAL_JUMP)  ; LAB_0044e845

