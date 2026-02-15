; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00472e40(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b5ee
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0061f04b
;   TerminatedCString s_CDemonLight_beginBackgro_0061f05e
;   TerminatedCString s_core_dlight_cpp_0061f091
;   TerminatedCString s_CDemonLight_beginBackgro_0061f0a4
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_BackgroundSceneNestingCount
;   void*[1200] g_SavedScreenBufferArray
;   undefined4 DAT_026a5818
;   undefined4 DAT_026a5819
;   CDemonRenderer g_CDemonRendererInstance
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   undefined4 g_ScreenBufferArray[1]+1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472e40
        ;   Label: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40
    PUSH ESI                            ; 00472e41
    PUSH EDI                            ; 00472e42
    PUSH EBP                            ; 00472e43
    MOV EBX,dword ptr [ESP + 0x14]      ; 00472e44
    CMP dword ptr [EBX + 0x11e4],0x0    ; 00472e48
    JZ 0x00472f06                       ; 00472e4f
        ;   XREF to: 00472f06 (CONDITIONAL_JUMP)  ; LAB_00472f06
    MOV EDI,dword ptr [0x026a5810]      ; 00472e55 | g_BackgroundSceneNestingCount
        ;   Label: LAB_00472e55
    INC EDI                             ; 00472e5b
    MOV dword ptr [0x026a5810],EDI      ; 00472e5c | g_BackgroundSceneNestingCount
    CMP EDI,0x1                         ; 00472e62
    JNZ 0x00472f01                      ; 00472e65
        ;   XREF to: 00472f01 (CONDITIONAL_JUMP)  ; LAB_00472f01
    MOV ESI,0x2cf6a9c                   ; 00472e6b | g_ScreenBufferArray
    MOV ECX,dword ptr [EBX + 0x1cc4]    ; 00472e70
    MOV EDI,0x26a5814                   ; 00472e76 | g_SavedScreenBufferArray
    SHL ECX,0x2                         ; 00472e7b
    PUSH EDI                            ; 00472e7e | g_SavedScreenBufferArray
    MOV EAX,ECX                         ; 00472e7f
    SHR ECX,0x2                         ; 00472e81
    MOVSD.REP ES:EDI,ESI                ; 00472e84 | g_SavedScreenBufferArray | DAT_026a5818 | g_ScreenBufferArray
    MOV CL,AL                           ; 00472e86
    AND CL,0x3                          ; 00472e88
    MOVSB.REP ES:EDI,ESI                ; 00472e8b | g_SavedScreenBufferArray | DAT_026a5818 | DAT_026a5819
    POP EDI                             ; 00472e8d
    CMP dword ptr [EBX + 0x2f9c],0x0    ; 00472e8e
    JNZ 0x00472eba                      ; 00472e95
        ;   XREF to: 00472eba (CONDITIONAL_JUMP)  ; LAB_00472eba
    MOV EDX,0x61f091                    ; 00472e97 | = "..\\core\\dlight.cpp"
    MOV ECX,0x1bc                       ; 00472e9c
    PUSH 0x61f0a4                       ; 00472ea1 | = "CDemonLight::beginBackgroundScene - N..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00472ea6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00472eac | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00472eb2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00472eb7
    MOV ESI,dword ptr [EBX + 0x1cc4]    ; 00472eba
        ;   Label: LAB_00472eba
    XOR EAX,EAX                         ; 00472ec0
    TEST ESI,ESI                        ; 00472ec2
    JLE 0x00472ef0                      ; 00472ec4
        ;   XREF to: 00472ef0 (CONDITIONAL_JUMP)  ; LAB_00472ef0
    XOR EDX,EDX                         ; 00472ec6
    MOV ESI,dword ptr [EBX + 0x1cc0]    ; 00472ec8
        ;   Label: LAB_00472ec8
    IMUL ESI,EAX                        ; 00472ece
    MOV ECX,dword ptr [EBX + 0x2f9c]    ; 00472ed1
    ADD ESI,ESI                         ; 00472ed7
    ADD ECX,ESI                         ; 00472ed9
    MOV dword ptr [EDX + 0x2cf6a9c],ECX ; 00472edb | g_ScreenBufferArray | g_ScreenBufferArray[1]
    INC EAX                             ; 00472ee1
    MOV EDI,dword ptr [EBX + 0x1cc4]    ; 00472ee2
    ADD EDX,0x4                         ; 00472ee8
    CMP EAX,EDI                         ; 00472eeb
    JL 0x00472ec8                       ; 00472eed
        ;   XREF to: 00472ec8 (CONDITIONAL_JUMP)  ; LAB_00472ec8
    NOP                                 ; 00472eef
    PUSH 0x1                            ; 00472ef0
        ;   Label: LAB_00472ef0
    MOV EBP,dword ptr [0x006703ec]      ; 00472ef2 | g_CDemonRendererPtr2
    PUSH EBP                            ; 00472ef8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 00472ef9
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00472efe
    POP EBP                             ; 00472f01
        ;   Label: LAB_00472f01
    POP EDI                             ; 00472f02
    POP ESI                             ; 00472f03
    POP EBX                             ; 00472f04
    RET                                 ; 00472f05
    MOV ECX,0x61f04b                    ; 00472f06 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_00472f06
    MOV ESI,0x1af                       ; 00472f0b
    PUSH 0x61f05e                       ; 00472f10 | = "CDemonLight::beginBackgroundScene - S..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00472f15 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00472f1b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00472f21
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00472f26
    JMP 0x00472e55                      ; 00472f29
        ;   XREF to: 00472e55 (UNCONDITIONAL_JUMP)  ; LAB_00472e55

