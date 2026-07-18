; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_lockFrameX_FUN_005b7f10(void)
;
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   APIDLL_lockFrameX* g_APIDLL_lockFrameX
;   int g_SavedBitsPerPixel
;   int g_VideoModeXBPP
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f6b93c],0x0      ; 005b7f10 | g_APIDLL_lockFrameX
        ;   Label: wincore_windll.cpp_lockFrameX_FUN_005b7f10
    JNZ 0x005b7f1c                      ; 005b7f17
        ;   XREF to: 005b7f1c (CONDITIONAL_JUMP)  ; LAB_005b7f1c
    XOR EAX,EAX                         ; 005b7f19
    RET                                 ; 005b7f1b
        ;   Label: LAB_005b7f1b
    CALL dword ptr [0x03f6b93c]         ; 005b7f1c | g_APIDLL_lockFrameX
        ;   Label: LAB_005b7f1c
    TEST EAX,EAX                        ; 005b7f22
    JZ 0x005b7f1b                       ; 005b7f24
        ;   XREF to: 005b7f1b (CONDITIONAL_JUMP)  ; LAB_005b7f1b
    MOV EAX,[0x0067939c]                ; 005b7f26 | g_BitsPerPixel
    MOV [0x03f6b998],EAX                ; 005b7f2b | g_SavedBitsPerPixel
    MOV EAX,[0x03f6b9a0]                ; 005b7f30 | g_VideoModeXBPP
    MOV [0x0067939c],EAX                ; 005b7f35 | g_BitsPerPixel
    MOV EAX,0x1                         ; 005b7f3a
    RET                                 ; 005b7f3f

