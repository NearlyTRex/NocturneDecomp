; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044a4d0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e708
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;   int g_BackgroundSceneNestingCount
;   void*[1200] g_SavedScreenBufferArray
;   undefined4 g_SavedScreenBufferArray[1]
;   undefined4 g_SavedScreenBufferArray[1]+1
;   CDemonRenderer g_CDemonRenderer_01ba5c50
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   undefined4 g_ScreenBufferArray[1]+1
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01b11db4]      ; 0044a4d0 | g_BackgroundSceneNestingCount
        ;   Label: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0044a4d0
    DEC EDX                             ; 0044a4d6
    MOV dword ptr [0x01b11db4],EDX      ; 0044a4d7 | g_BackgroundSceneNestingCount
    JZ 0x0044a4e0                       ; 0044a4dd
        ;   XREF to: 0044a4e0 (CONDITIONAL_JUMP)  ; LAB_0044a4e0
    RET                                 ; 0044a4df
    PUSH EDI                            ; 0044a4e0
        ;   Label: LAB_0044a4e0
    PUSH ESI                            ; 0044a4e1
    PUSH EBX                            ; 0044a4e2
    MOV ECX,dword ptr [ESP + 0x10]      ; 0044a4e3
    MOV ESI,0x1b11db8                   ; 0044a4e7
    MOV ECX,dword ptr [ECX + 0x1cc4]    ; 0044a4ec
    MOV EDI,0x1c2a38c                   ; 0044a4f2
    SHL ECX,0x2                         ; 0044a4f7
    PUSH EDI                            ; 0044a4fa | g_ScreenBufferArray
    MOV EAX,ECX                         ; 0044a4fb
    SHR ECX,0x2                         ; 0044a4fd
    MOVSD.REP ES:EDI,ESI                ; 0044a500 | g_SavedScreenBufferArray | g_ScreenBufferArray | g_SavedScreenBufferArray[1]
    MOV CL,AL                           ; 0044a502
    AND CL,0x3                          ; 0044a504
    MOVSB.REP ES:EDI,ESI                ; 0044a507 | g_SavedScreenBufferArray[1] | g_ScreenBufferArray[1] | g_SavedScreenBufferArray[1]+1
    POP EDI                             ; 0044a509
    PUSH EDX                            ; 0044a50a
    MOV EBX,dword ptr [0x0060b280]      ; 0044a50b | g_CDemonRenderer_PTR_0060b280
    PUSH EBX                            ; 0044a511 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940 ; 0044a512
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0044a517
    POP EBX                             ; 0044a51a
    POP ESI                             ; 0044a51b
    POP EDI                             ; 0044a51c
    RET                                 ; 0044a51d

