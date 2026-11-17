; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00462be0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f9cd
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005d9084
;   TerminatedCString s_CDemonLight_beginBackgro_005d9097
;   TerminatedCString s_core_dlight_cpp_005d90ca
;   TerminatedCString s_CDemonLight_beginBackgro_005d90dd
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;   int g_BackgroundSceneNestingCount
;   void*[1200] g_SavedScreenBufferArray
;   undefined4 g_SavedScreenBufferArray[1]
;   undefined4 g_SavedScreenBufferArray[1]+1
;   CDemonRenderer g_CDemonRenderer_01bc120c
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   undefined4 g_ScreenBufferArray[1]+1
;   char* g_CHAR_PTR_01d1d400
;   int g_INT_01d1d404
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462be0
        ;   Label: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00462be0
    PUSH ESI                            ; 00462be1
    PUSH EDI                            ; 00462be2
    PUSH EBP                            ; 00462be3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00462be4
    CMP dword ptr [EBX + 0x11e4],0x0    ; 00462be8
    JZ 0x00462ca6                       ; 00462bef
        ;   XREF to: 00462ca6 (CONDITIONAL_JUMP)  ; LAB_00462ca6
    MOV EDI,dword ptr [0x01b2d374]      ; 00462bf5 | g_BackgroundSceneNestingCount
        ;   Label: LAB_00462bf5
    INC EDI                             ; 00462bfb
    MOV dword ptr [0x01b2d374],EDI      ; 00462bfc | g_BackgroundSceneNestingCount
    CMP EDI,0x1                         ; 00462c02
    JNZ 0x00462ca1                      ; 00462c05
        ;   XREF to: 00462ca1 (CONDITIONAL_JUMP)  ; LAB_00462ca1
    MOV ESI,0x1c4354c                   ; 00462c0b
    MOV ECX,dword ptr [EBX + 0x1cc4]    ; 00462c10
    MOV EDI,0x1b2d378                   ; 00462c16
    SHL ECX,0x2                         ; 00462c1b
    PUSH EDI                            ; 00462c1e | g_SavedScreenBufferArray
    MOV EAX,ECX                         ; 00462c1f
    SHR ECX,0x2                         ; 00462c21
    MOVSD.REP ES:EDI,ESI                ; 00462c24 | g_ScreenBufferArray | g_SavedScreenBufferArray | g_ScreenBufferArray[1]
    MOV CL,AL                           ; 00462c26
    AND CL,0x3                          ; 00462c28
    MOVSB.REP ES:EDI,ESI                ; 00462c2b | g_ScreenBufferArray[1] | g_SavedScreenBufferArray[1] | g_ScreenBufferArray[1]+1
    POP EDI                             ; 00462c2d
    CMP dword ptr [EBX + 0x2f9c],0x0    ; 00462c2e
    JNZ 0x00462c5a                      ; 00462c35
        ;   XREF to: 00462c5a (CONDITIONAL_JUMP)  ; LAB_00462c5a
    MOV EDX,0x5d90ca                    ; 00462c37 | = "..\\core\\dlight.cpp"
    MOV ECX,0x1bc                       ; 00462c3c
    PUSH 0x5d90dd                       ; 00462c41 | = "CDemonLight::beginBackgroundScene - N..."
    MOV dword ptr [0x01d1d400],EDX      ; 00462c46 | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00462c4c | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 00462c52
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 00462c57
    MOV ESI,dword ptr [EBX + 0x1cc4]    ; 00462c5a
        ;   Label: LAB_00462c5a
    XOR EAX,EAX                         ; 00462c60
    TEST ESI,ESI                        ; 00462c62
    JLE 0x00462c90                      ; 00462c64
        ;   XREF to: 00462c90 (CONDITIONAL_JUMP)  ; LAB_00462c90
    XOR EDX,EDX                         ; 00462c66
    MOV ESI,dword ptr [EBX + 0x1cc0]    ; 00462c68
        ;   Label: LAB_00462c68
    IMUL ESI,EAX                        ; 00462c6e
    MOV ECX,dword ptr [EBX + 0x2f9c]    ; 00462c71
    ADD ESI,ESI                         ; 00462c77
    ADD ECX,ESI                         ; 00462c79
    MOV dword ptr [EDX + 0x1c4354c],ECX ; 00462c7b | g_ScreenBufferArray | g_ScreenBufferArray[1]
    INC EAX                             ; 00462c81
    MOV EDI,dword ptr [EBX + 0x1cc4]    ; 00462c82
    ADD EDX,0x4                         ; 00462c88
    CMP EAX,EDI                         ; 00462c8b
    JL 0x00462c68                       ; 00462c8d
        ;   XREF to: 00462c68 (CONDITIONAL_JUMP)  ; LAB_00462c68
    NOP                                 ; 00462c8f
    PUSH 0x1                            ; 00462c90
        ;   Label: LAB_00462c90
    MOV EBP,dword ptr [0x00612560]      ; 00462c92 | g_CDemonRenderer_PTR_00612560
    PUSH EBP                            ; 00462c98 | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 00462c99
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00462c9e
    POP EBP                             ; 00462ca1
        ;   Label: LAB_00462ca1
    POP EDI                             ; 00462ca2
    POP ESI                             ; 00462ca3
    POP EBX                             ; 00462ca4
    RET                                 ; 00462ca5
    MOV ECX,0x5d9084                    ; 00462ca6 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_00462ca6
    MOV ESI,0x1af                       ; 00462cab
    PUSH 0x5d9097                       ; 00462cb0 | = "CDemonLight::beginBackgroundScene - S..."
    MOV dword ptr [0x01d1d400],ECX      ; 00462cb5 | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00462cbb | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 00462cc1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 00462cc6
    JMP 0x00462bf5                      ; 00462cc9
        ;   XREF to: 00462bf5 (UNCONDITIONAL_JUMP)  ; LAB_00462bf5

