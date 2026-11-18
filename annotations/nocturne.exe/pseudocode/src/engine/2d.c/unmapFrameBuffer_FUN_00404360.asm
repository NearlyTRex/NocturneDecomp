; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_unmapFrameBuffer_FUN_00404360(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_00577489
;   TerminatedCString s_unmapFrameBuffer_frame_b_00577498
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
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404360
        ;   Label: engine_2d.c_unmapFrameBuffer_FUN_00404360
    PUSH EDI                            ; 00404361
    PUSH EBP                            ; 00404362
    MOV EBX,dword ptr [0x006b025c]      ; 00404363 | g_ScreenBufferStride
    CMP dword ptr [0x006b023c],0x0      ; 00404369 | g_StoredWindowWidth
    JZ 0x00404402                       ; 00404370
        ;   XREF to: 00404402 (CONDITIONAL_JUMP)  ; LAB_00404402
    MOV EAX,[0x006b023c]                ; 00404376 | g_StoredWindowWidth
        ;   Label: LAB_00404376
    MOV [0x005b761c],EAX                ; 0040437b | g_WindowWidth
    MOV EAX,[0x006b0240]                ; 00404380 | g_StoredWindowHeight
    MOV [0x005b7620],EAX                ; 00404385 | g_WindowHeight
    MOV EAX,[0x006b0244]                ; 0040438a | g_StoredClipLeft
    MOV [0x01c00c58],EAX                ; 0040438f | g_ClipLeft
    MOV EAX,[0x006b0248]                ; 00404394 | g_StoredClipTop
    MOV [0x01c00c5c],EAX                ; 00404399 | g_ClipTop
    MOV EAX,[0x006b024c]                ; 0040439e | g_StoredClipRight
    MOV EDX,dword ptr [0x006b0258]      ; 004043a3 | g_StoredMappedFrameBuffer
    MOV [0x01c00c60],EAX                ; 004043a9 | g_ClipRight
    MOV EAX,[0x006b0250]                ; 004043ae | g_StoredClipBottom
    MOV EBX,dword ptr [0x006b025c]      ; 004043b3 | g_ScreenBufferStride
    MOV [0x01c00c64],EAX                ; 004043b9 | g_ClipBottom
    MOV EAX,[0x006b0254]                ; 004043be | g_StoredBitsPerPixel
    MOV EDI,dword ptr [0x005b7620]      ; 004043c3 | g_WindowHeight
    MOV [0x005b7624],EAX                ; 004043c9 | g_BitsPerPixel
    TEST EDI,EDI                        ; 004043ce
    JLE 0x004043f0                      ; 004043d0
        ;   XREF to: 004043f0 (CONDITIONAL_JUMP)  ; LAB_004043f0
    LEA ECX,[EDI*0x4 + 0x0]             ; 004043d2
    XOR EAX,EAX                         ; 004043d9
    MOV dword ptr [EAX + 0x1bd2fa0],EDX ; 004043db | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_004043db
    ADD EAX,0x4                         ; 004043e1
    ADD EDX,EBX                         ; 004043e4
    CMP EAX,ECX                         ; 004043e6
    JL 0x004043db                       ; 004043e8
        ;   XREF to: 004043db (CONDITIONAL_JUMP)  ; LAB_004043db
    LEA EAX,[EAX]                       ; 004043ea
    XOR EBP,EBP                         ; 004043f0
        ;   Label: LAB_004043f0
    MOV dword ptr [0x006b023c],EBP      ; 004043f2 | g_StoredWindowWidth
    MOV dword ptr [0x006b025c],EBX      ; 004043f8 | g_ScreenBufferStride
    POP EBP                             ; 004043fe
    POP EDI                             ; 004043ff
    POP EBX                             ; 00404400
    RET                                 ; 00404401
    PUSH ESI                            ; 00404402
        ;   Label: LAB_00404402
    MOV ECX,0x577489                    ; 00404403 | = "..\\engine\\2d.c"
    MOV ESI,0x9e8                       ; 00404408
    PUSH 0x577498                       ; 0040440d | = "unmapFrameBuffer - frame buffer was n..."
    MOV dword ptr [0x01cc4800],ECX      ; 00404412 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 00404418 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040441e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00404423
    POP ESI                             ; 00404426
    JMP 0x00404376                      ; 00404427
        ;   XREF to: 00404376 (UNCONDITIONAL_JUMP)  ; LAB_00404376

