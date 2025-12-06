; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_unmapFrameBuffer_FUN_00403670(void)
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
;   void*[1024] g_ScreenBufferArray
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
    MOV EBX,dword ptr [0x00772a58]      ; 00403673 | int g_ScreenBufferStride
    CMP dword ptr [0x00772a38],0x0      ; 00403679 | int g_StoredWindowWidth
    JZ 0x00403712                       ; 00403680 | LAB_00403712
        ;   XREF to: 00403712 (CONDITIONAL_JUMP)
    MOV EAX,[0x00772a38]                ; 00403686 | int g_StoredWindowWidth
        ;   Label: LAB_00403686
    MOV [0x00679394],EAX                ; 0040368b | int g_WindowWidth
    MOV EAX,[0x00772a3c]                ; 00403690 | int g_StoredWindowHeight
    MOV [0x00679398],EAX                ; 00403695 | int g_WindowHeight
    MOV EAX,[0x00772a40]                ; 0040369a | int g_StoredClipLeft
    MOV [0x02d02558],EAX                ; 0040369f | int g_ClipLeft
    MOV EAX,[0x00772a44]                ; 004036a4 | int g_StoredClipTop
    MOV [0x02d0255c],EAX                ; 004036a9 | int g_ClipTop
    MOV EAX,[0x00772a48]                ; 004036ae | int g_StoredClipRight
    MOV EDX,dword ptr [0x00772a54]      ; 004036b3 | void * g_StoredMappedFrameBuffer
    MOV [0x02d02560],EAX                ; 004036b9 | int g_ClipRight
    MOV EAX,[0x00772a4c]                ; 004036be | int g_StoredClipBottom
    MOV EBX,dword ptr [0x00772a58]      ; 004036c3 | int g_ScreenBufferStride
    MOV [0x02d02564],EAX                ; 004036c9 | int g_ClipBottom
    MOV EAX,[0x00772a50]                ; 004036ce | int g_StoredBitsPerPixel
    MOV EDI,dword ptr [0x00679398]      ; 004036d3 | int g_WindowHeight
    MOV [0x0067939c],EAX                ; 004036d9 | int g_BitsPerPixel
    TEST EDI,EDI                        ; 004036de
    JLE 0x00403700                      ; 004036e0 | LAB_00403700
        ;   XREF to: 00403700 (CONDITIONAL_JUMP)
    LEA ECX,[EDI*0x4 + 0x0]             ; 004036e2
    XOR EAX,EAX                         ; 004036e9
    MOV dword ptr [EAX + 0x2cf6a9c],EDX ; 004036eb | void *[1024] g_ScreenBufferArray
        ;   Label: LAB_004036eb
    ADD EAX,0x4                         ; 004036f1
    ADD EDX,EBX                         ; 004036f4
    CMP EAX,ECX                         ; 004036f6
    JL 0x004036eb                       ; 004036f8 | LAB_004036eb
        ;   XREF to: 004036eb (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004036fa
    XOR EBP,EBP                         ; 00403700
        ;   Label: LAB_00403700
    MOV dword ptr [0x00772a38],EBP      ; 00403702 | int g_StoredWindowWidth
    MOV dword ptr [0x00772a58],EBX      ; 00403708 | int g_ScreenBufferStride
    POP EBP                             ; 0040370e
    POP EDI                             ; 0040370f
    POP EBX                             ; 00403710
    RET                                 ; 00403711
    PUSH ESI                            ; 00403712
        ;   Label: LAB_00403712
    MOV ECX,0x613357                    ; 00403713 | = "..\\engine\\2d.c" | s_engine_2d_c_00613357 = ..\engine\2d.c
    MOV ESI,0x9ea                       ; 00403718
    PUSH 0x613366                       ; 0040371d | = "unmapFrameBuffer - frame buffer was n..." | s_unmapFrameBuffer_frame_b_00613366 = unmapFrameBuffer - frame buffer was not mapped!
    MOV dword ptr [0x02f0ca48],ECX      ; 00403722 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00403728 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040372e | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00403733
    POP ESI                             ; 00403736
    JMP 0x00403686                      ; 00403737 | LAB_00403686
        ;   XREF to: 00403686 (UNCONDITIONAL_JUMP)

