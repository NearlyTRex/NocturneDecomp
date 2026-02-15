; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005f35e0(void)
;
; Local Variables:
; undefined1       Stack[-0x28]:1  local_28
;
; XREF[5]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d810
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db679
;   shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160 at 004473f8
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 at 005edc43
;   wincore_winvideo.cpp_playMovie_FUN_005f4a00 at 005f4d0f
;
; Referenced Globals:
;   DISPATCH_MESSAGE_A_FUNC* g_DispatchMessageAFunc = 00211a9e
;   PEEK_MESSAGE_A_FUNC* g_PeekMessageAFunc = 00211b70
;   TRANSLATE_MESSAGE_FUNC* g_TranslateMessageFunc = 00211c14
;   SLEEP_FUNC* g_SleepFunc = 00212228
;   int g_WindowActive = -0x1
;   int g_ForceMessagePump = 0x1
;   char[256] g_KeyboardState
;   undefined4 CHAR_ARRAY_02d03e99
;   int g_InputDisabled
;   undefined4 g_MessageFlags[1]
;   undefined4 g_MessageFlags[2]
;
; Called Functions:
;   DispatchMessageA
;   PeekMessageA
;   Sleep
;   TranslateMessage
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f35e0
        ;   Label: wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
    PUSH ESI                            ; 005f35e1
    PUSH EDI                            ; 005f35e2
    SUB ESP,0x1c                        ; 005f35e3
    XOR EDX,EDX                         ; 005f35e6
    XOR EAX,EAX                         ; 005f35e8
    XOR EBX,EBX                         ; 005f35ea
    CMP dword ptr [EDX + 0x3f9847c],0x1 ; 005f35ec | g_MessageFlags[1] | g_MessageFlags[2]
        ;   Label: LAB_005f35ec
    JZ 0x005f3633                       ; 005f35f3
        ;   XREF to: 005f3633 (CONDITIONAL_JUMP)  ; LAB_005f3633
    ADD EDX,0x4                         ; 005f35f5
        ;   Label: LAB_005f35f5
    INC EAX                             ; 005f35f8
    MOV dword ptr [EDX + 0x3f98478],EBX ; 005f35f9 | g_MessageFlags[1] | g_MessageFlags[2]
    CMP EAX,0x258                       ; 005f35ff
    JL 0x005f35ec                       ; 005f3604
        ;   XREF to: 005f35ec (CONDITIONAL_JUMP)  ; LAB_005f35ec
    XOR EBX,EBX                         ; 005f3606
    PUSH 0x1                            ; 005f3608
        ;   Label: LAB_005f3608
    PUSH EBX                            ; 005f360a
    PUSH EBX                            ; 005f360b
    PUSH EBX                            ; 005f360c
    LEA EAX,[ESP + 0x10]                ; 005f360d
    PUSH EAX                            ; 005f3611
    CALL dword ptr CS:[0x6114d0]        ; 005f3612 | g_PeekMessageAFunc
    TEST EAX,EAX                        ; 005f3619
    JZ 0x005f363b                       ; 005f361b
        ;   XREF to: 005f363b (CONDITIONAL_JUMP)  ; LAB_005f363b
    MOV EAX,ESP                         ; 005f361d
    PUSH EAX                            ; 005f361f
    CALL dword ptr CS:[0x6114f8]        ; 005f3620 | g_TranslateMessageFunc
    MOV EAX,ESP                         ; 005f3627
    PUSH EAX                            ; 005f3629
    CALL dword ptr CS:[0x61149c]        ; 005f362a | g_DispatchMessageAFunc
    JMP 0x005f3608                      ; 005f3631
        ;   XREF to: 005f3608 (UNCONDITIONAL_JUMP)  ; LAB_005f3608
    MOV byte ptr [EAX + 0x2d03e98],BL   ; 005f3633 | g_KeyboardState | CHAR_ARRAY_02d03e99
        ;   Label: LAB_005f3633
    JMP 0x005f35f5                      ; 005f3639
        ;   XREF to: 005f35f5 (UNCONDITIONAL_JUMP)  ; LAB_005f35f5
    MOV ESI,dword ptr [0x006849a4]      ; 005f363b | g_WindowActive
        ;   Label: LAB_005f363b
    CMP EBX,ESI                         ; 005f3641
    JNZ 0x005f366a                      ; 005f3643
        ;   XREF to: 005f366a (CONDITIONAL_JUMP)  ; LAB_005f366a
    MOV EDI,dword ptr [0x03f9846c]      ; 005f3645 | g_InputDisabled
    CMP ESI,EDI                         ; 005f364b
    JNZ 0x005f366a                      ; 005f364d
        ;   XREF to: 005f366a (CONDITIONAL_JUMP)  ; LAB_005f366a
    CMP EDI,dword ptr [0x006849a8]      ; 005f364f | g_ForceMessagePump
    JZ 0x005f366a                       ; 005f3655
        ;   XREF to: 005f366a (CONDITIONAL_JUMP)  ; LAB_005f366a
    CMP EDI,dword ptr [0x006849a4]      ; 005f3657 | g_WindowActive
    JNZ 0x005f3608                      ; 005f365d
        ;   XREF to: 005f3608 (CONDITIONAL_JUMP)  ; LAB_005f3608
    PUSH 0x14                           ; 005f365f
    CALL dword ptr CS:[0x611644]        ; 005f3661 | g_SleepFunc
    JMP 0x005f3608                      ; 005f3668
        ;   XREF to: 005f3608 (UNCONDITIONAL_JUMP)  ; LAB_005f3608
    ADD ESP,0x1c                        ; 005f366a
        ;   Label: LAB_005f366a
    POP EDI                             ; 005f366d
    POP ESI                             ; 005f366e
    POP EBX                             ; 005f366f
    RET                                 ; 005f3670

