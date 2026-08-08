; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_unlockFrame_FUN_00532320(void)
;
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020 at 00445091
;   core_game.cpp_CGame_FUN_004a57c0 at 004a598e
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d5ab
;   engine_special.cpp_setResolutionAndColorTable_FUN_005324a0 at 00532576
;   engine_special.cpp_toggle_FUN_00532ba0 at 00532c40
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50 at 00471e40
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_UseExternalRenderer
;   APIDLL_unlockFrame* g_APIDLL_unlockFrame
;   int g_SavedBitsPerPixel
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532320 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_unlockFrame_FUN_00532320
    JNZ 0x0053232c                      ; 00532327
        ;   XREF to: 0053232c (CONDITIONAL_JUMP)  ; LAB_0053232c
    XOR EAX,EAX                         ; 00532329
    RET                                 ; 0053232b
    MOV EAX,[0x02dc9e20]                ; 0053232c | g_SavedBitsPerPixel
        ;   Label: LAB_0053232c
    MOV [0x005b7624],EAX                ; 00532331 | g_BitsPerPixel
    CALL dword ptr [0x02dc9d98]         ; 00532336 | g_APIDLL_unlockFrame
    RET                                 ; 0053233c

