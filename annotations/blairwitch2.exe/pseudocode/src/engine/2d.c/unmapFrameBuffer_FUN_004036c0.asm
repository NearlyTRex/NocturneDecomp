; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_unmapFrameBuffer_FUN_004036c0(void)
;
;
; Referenced Globals:
;   int g_INT_006141b8 = 0x140
;   int g_INT_006141bc = 0xc8
;   int g_INT_006141c0 = 0x8
;   int g_StoredWindowWidth
;   int g_StoredWindowHeight
;   int g_StoredClipLeft
;   int g_StoredClipTop
;   int g_StoredClipRight
;   int g_StoredClipBottom
;   int g_StoredBitsPerPixel
;   void* g_StoredMappedFrameBuffer
;   int g_ScreenBufferStride
;   int g_INT_01c35e48
;   int g_INT_01c35e4c
;   int g_ClipRight
;   ... and 3 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004036c0
        ;   Label: engine_2d.c_unmapFrameBuffer_FUN_004036c0
    PUSH EDI                            ; 004036c1
    PUSH EBP                            ; 004036c2
    MOV EBX,dword ptr [0x0070ca58]      ; 004036c3 | g_ScreenBufferStride
    CMP dword ptr [0x0070ca38],0x0      ; 004036c9 | g_StoredWindowWidth
    JZ 0x00403762                       ; 004036d0
        ;   XREF to: 00403762 (CONDITIONAL_JUMP)  ; LAB_00403762
    MOV EAX,[0x0070ca38]                ; 004036d6 | g_StoredWindowWidth
        ;   Label: LAB_004036d6
    MOV [0x006141b8],EAX                ; 004036db | g_INT_006141b8
    MOV EAX,[0x0070ca3c]                ; 004036e0 | g_StoredWindowHeight
    MOV [0x006141bc],EAX                ; 004036e5 | g_INT_006141bc
    MOV EAX,[0x0070ca40]                ; 004036ea | g_StoredClipLeft
    MOV [0x01c35e48],EAX                ; 004036ef | g_INT_01c35e48
    MOV EAX,[0x0070ca44]                ; 004036f4 | g_StoredClipTop
    MOV [0x01c35e4c],EAX                ; 004036f9 | g_INT_01c35e4c
    MOV EAX,[0x0070ca48]                ; 004036fe | g_StoredClipRight
    MOV EDX,dword ptr [0x0070ca54]      ; 00403703 | g_StoredMappedFrameBuffer
    MOV [0x01c35e50],EAX                ; 00403709 | g_ClipRight
    MOV EAX,[0x0070ca4c]                ; 0040370e | g_StoredClipBottom
    MOV EBX,dword ptr [0x0070ca58]      ; 00403713 | g_ScreenBufferStride
    MOV [0x01c35e54],EAX                ; 00403719 | g_INT_01c35e54
    MOV EAX,[0x0070ca50]                ; 0040371e | g_StoredBitsPerPixel
    MOV EDI,dword ptr [0x006141bc]      ; 00403723 | g_INT_006141bc
    MOV [0x006141c0],EAX                ; 00403729 | g_INT_006141c0
    TEST EDI,EDI                        ; 0040372e
    JLE 0x00403750                      ; 00403730
        ;   XREF to: 00403750 (CONDITIONAL_JUMP)  ; LAB_00403750
    LEA ECX,[EDI*0x4 + 0x0]             ; 00403732
    XOR EAX,EAX                         ; 00403739
    MOV dword ptr [EAX + 0x1c2a38c],EDX ; 0040373b
        ;   Label: LAB_0040373b
    ADD EAX,0x4                         ; 00403741
    ADD EDX,EBX                         ; 00403744
    CMP EAX,ECX                         ; 00403746
    JL 0x0040373b                       ; 00403748
        ;   XREF to: 0040373b (CONDITIONAL_JUMP)  ; LAB_0040373b
    LEA EAX,[EAX]                       ; 0040374a
    XOR EBP,EBP                         ; 00403750
        ;   Label: LAB_00403750
    MOV dword ptr [0x0070ca38],EBP      ; 00403752 | g_StoredWindowWidth
    MOV dword ptr [0x0070ca58],EBX      ; 00403758 | g_ScreenBufferStride
    POP EBP                             ; 0040375e
    POP EDI                             ; 0040375f
    POP EBX                             ; 00403760
    RET                                 ; 00403761
    PUSH ESI                            ; 00403762
        ;   Label: LAB_00403762
    MOV ECX,0x5ca2d6                    ; 00403763
    MOV ESI,0x9cb                       ; 00403768
    PUSH 0x5ca2e5                       ; 0040376d
    MOV dword ptr [0x01d046a0],ECX      ; 00403772 | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00403778 | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 0040377e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 00403783
    POP ESI                             ; 00403786
    JMP 0x004036d6                      ; 00403787
        ;   XREF to: 004036d6 (UNCONDITIONAL_JUMP)  ; LAB_004036d6

