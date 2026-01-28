; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_unmapFrameBuffer_FUN_00403670(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_00613357
;   TerminatedCString s_unmapFrameBuffer_frame_b_00613366
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   int g_StoredWindowWidth
;   int g_StoredWindowHeight
;   int g_StoredClipLeft
;   int g_StoredClipTop
;   int g_StoredClipRight
;   int g_StoredClipBottom
;   int g_StoredBitsPerPixel
;   void* g_StoredMappedFrameBuffer
;   int g_ScreenBufferStride
;   void*[1200] g_ScreenBufferArray
;   ... and 7 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403670
        ;   Label: engine_2d.c_unmapFrameBuffer_FUN_00403670
    PUSH EDI                            ; 00403671
    PUSH EBP                            ; 00403672
    MOV EBX,dword ptr [0x00772a58]      ; 00403673 | g_ScreenBufferStride
    CMP dword ptr [0x00772a38],0x0      ; 00403679 | g_StoredWindowWidth
    JZ 0x00403712                       ; 00403680
        ;   XREF to: 00403712 (CONDITIONAL_JUMP)  ; LAB_00403712
    MOV EAX,[0x00772a38]                ; 00403686 | g_StoredWindowWidth
        ;   Label: LAB_00403686
    MOV [0x00679394],EAX                ; 0040368b | g_WindowWidth
    MOV EAX,[0x00772a3c]                ; 00403690 | g_StoredWindowHeight
    MOV [0x00679398],EAX                ; 00403695 | g_WindowHeight
    MOV EAX,[0x00772a40]                ; 0040369a | g_StoredClipLeft
    MOV [0x02d02558],EAX                ; 0040369f | g_ClipLeft
    MOV EAX,[0x00772a44]                ; 004036a4 | g_StoredClipTop
    MOV [0x02d0255c],EAX                ; 004036a9 | g_ClipTop
    MOV EAX,[0x00772a48]                ; 004036ae | g_StoredClipRight
    MOV EDX,dword ptr [0x00772a54]      ; 004036b3 | g_StoredMappedFrameBuffer
    MOV [0x02d02560],EAX                ; 004036b9 | g_ClipRight
    MOV EAX,[0x00772a4c]                ; 004036be | g_StoredClipBottom
    MOV EBX,dword ptr [0x00772a58]      ; 004036c3 | g_ScreenBufferStride
    MOV [0x02d02564],EAX                ; 004036c9 | g_ClipBottom
    MOV EAX,[0x00772a50]                ; 004036ce | g_StoredBitsPerPixel
    MOV EDI,dword ptr [0x00679398]      ; 004036d3 | g_WindowHeight
    MOV [0x0067939c],EAX                ; 004036d9 | g_BitsPerPixel
    TEST EDI,EDI                        ; 004036de
    JLE 0x00403700                      ; 004036e0
        ;   XREF to: 00403700 (CONDITIONAL_JUMP)  ; LAB_00403700
    LEA ECX,[EDI*0x4 + 0x0]             ; 004036e2
    XOR EAX,EAX                         ; 004036e9
    MOV dword ptr [EAX + 0x2cf6a9c],EDX ; 004036eb | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_004036eb
    ADD EAX,0x4                         ; 004036f1
    ADD EDX,EBX                         ; 004036f4
    CMP EAX,ECX                         ; 004036f6
    JL 0x004036eb                       ; 004036f8
        ;   XREF to: 004036eb (CONDITIONAL_JUMP)  ; LAB_004036eb
    LEA EAX,[EAX]                       ; 004036fa
    XOR EBP,EBP                         ; 00403700
        ;   Label: LAB_00403700
    MOV dword ptr [0x00772a38],EBP      ; 00403702 | g_StoredWindowWidth
    MOV dword ptr [0x00772a58],EBX      ; 00403708 | g_ScreenBufferStride
    POP EBP                             ; 0040370e
    POP EDI                             ; 0040370f
    POP EBX                             ; 00403710
    RET                                 ; 00403711
    PUSH ESI                            ; 00403712
        ;   Label: LAB_00403712
    MOV ECX,0x613357                    ; 00403713 | = "..\\engine\\2d.c"
    MOV ESI,0x9ea                       ; 00403718
    PUSH 0x613366                       ; 0040371d | = "unmapFrameBuffer - frame buffer was n..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00403722 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00403728 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040372e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00403733
    POP ESI                             ; 00403736
    JMP 0x00403686                      ; 00403737
        ;   XREF to: 00403686 (UNCONDITIONAL_JUMP)  ; LAB_00403686

