; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_FUN_005c6660()
;
;
; Referenced Globals:
;   TerminatedCString s_flashlit_wav_00653f94
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.auto_save_blocked
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c6660
        ;   Label: core_stranger.cpp_FUN_005c6660
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c6664
    MOV dword ptr [EDX + 0x1fbd4],EAX   ; 005c6668
    TEST EAX,EAX                        ; 005c666e
    JNZ 0x005c6680                      ; 005c6670 | LAB_005c6680
        ;   XREF to: 005c6680 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 005c6672 | CGame g_CGameInstance | CGame * g_CGamePtr
    CMP dword ptr [EAX + 0x244],0x0     ; 005c6677 | g_CGameInstance.auto_save_blocked
    JNZ 0x005c6681                      ; 005c667e | LAB_005c6681
        ;   XREF to: 005c6681 (CONDITIONAL_JUMP)
    RET                                 ; 005c6680
        ;   Label: LAB_005c6680
    PUSH 0x653f94                       ; 005c6681 | = "flashlit.wav" | s_flashlit_wav_00653f94 = flashlit.wav
        ;   Label: LAB_005c6681
    MOV dword ptr [EAX + 0x244],0x0     ; 005c6686 | g_CGameInstance.auto_save_blocked
    PUSH EDX                            ; 005c6690
    MOV EAX,dword ptr [EDX + 0x154]     ; 005c6691
    CALL dword ptr [EAX + 0x24]         ; 005c6697
    ADD ESP,0x8                         ; 005c669a
    RET                                 ; 005c669d

