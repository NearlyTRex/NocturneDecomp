; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_unlockFrameX_FUN_005b7f40(void)
;
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   APIDLL_unlockFrameX* g_APIDLL_unlockFrameX
;   int g_SavedBitsPerPixel
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f6b940],0x0      ; 005b7f40 | APIDLL_unlockFrameX * g_APIDLL_unlockFrameX
        ;   Label: wincore_windll.cpp_unlockFrameX_FUN_005b7f40
    JNZ 0x005b7f4c                      ; 005b7f47 | LAB_005b7f4c
        ;   XREF to: 005b7f4c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005b7f49
    RET                                 ; 005b7f4b
        ;   Label: LAB_005b7f4b
    CALL dword ptr [0x03f6b940]         ; 005b7f4c | APIDLL_unlockFrameX * g_APIDLL_unlockFrameX
        ;   Label: LAB_005b7f4c
    TEST EAX,EAX                        ; 005b7f52
    JZ 0x005b7f4b                       ; 005b7f54 | LAB_005b7f4b
        ;   XREF to: 005b7f4b (CONDITIONAL_JUMP)
    MOV EAX,[0x03f6b998]                ; 005b7f56 | int g_SavedBitsPerPixel
    MOV [0x0067939c],EAX                ; 005b7f5b | int g_BitsPerPixel
    MOV EAX,0x1                         ; 005b7f60
    RET                                 ; 005b7f65

