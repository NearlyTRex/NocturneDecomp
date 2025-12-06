; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_CScript_checkInitSection_FUN_0055a6c0()
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_FUN_00524760 at 00524873
;
; Referenced Globals:
;   TerminatedCString s_initSection_00641a99
;   TerminatedCString s_initSectionEnd_00641aa5
;   TerminatedCString s_core_script_cpp_00641ab4
;   TerminatedCString s_Script_has_initSection_l_00641ac7
;   TerminatedCString s_core_script_cpp_00641b06
;   TerminatedCString s_Error_processing_script__00641b19
;   TerminatedCString s_core_script_cpp_00641b56
;   TerminatedCString s_Infinite_loop_detected_i_00641b69
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_0310ec9c
;   undefined1 DAT_0310eca0
;   undefined4 DAT_0310f4a4
;
; Called Functions:
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_script.cpp_CScript_step_FUN_0055a810
;   core_script.cpp_FUN_00560160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a6c0
        ;   Label: core_script.cpp_CScript_checkInitSection_FUN_0055a6c0
    PUSH ESI                            ; 0055a6c1
    PUSH EBP                            ; 0055a6c2
    SUB ESP,0x8                         ; 0055a6c3
    MOV EBX,dword ptr [ESP + 0x18]      ; 0055a6c6
    XOR EDX,EDX                         ; 0055a6ca
    MOV ECX,dword ptr [EBX + 0x30]      ; 0055a6cc
    MOV dword ptr [0x0310ec9c],EDX      ; 0055a6cf | undefined4 DAT_0310ec9c
    CMP ECX,0x1                         ; 0055a6d5
    JL 0x0055a6e0                       ; 0055a6d8 | LAB_0055a6e0
        ;   XREF to: 0055a6e0 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x34],0x0      ; 0055a6da
    JNZ 0x0055a6e7                      ; 0055a6de | LAB_0055a6e7
        ;   XREF to: 0055a6e7 (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 0055a6e0
        ;   Label: LAB_0055a6e0
    POP EBP                             ; 0055a6e3
    POP ESI                             ; 0055a6e4
    POP EBX                             ; 0055a6e5
    RET                                 ; 0055a6e6
    PUSH 0x641a99                       ; 0055a6e7 | = "initSection" | s_initSection_00641a99 = initSection
        ;   Label: LAB_0055a6e7
    PUSH EBX                            ; 0055a6ec
    CALL core_script.cpp_FUN_00560160   ; 0055a6ed | undefined core_script.cpp_FUN_00560160()
        ;   XREF to: 00560160 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055a6f2
    MOV ESI,EAX                         ; 0055a6f5
    TEST EAX,EAX                        ; 0055a6f7
    JL 0x0055a6e0                       ; 0055a6f9 | LAB_0055a6e0
        ;   XREF to: 0055a6e0 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0055a6fb
    PUSH 0x641aa5                       ; 0055a6fc | = "initSectionEnd" | s_initSectionEnd_00641aa5 = initSectionEnd
    PUSH EBX                            ; 0055a701
    CALL core_script.cpp_FUN_00560160   ; 0055a702 | undefined core_script.cpp_FUN_00560160()
        ;   XREF to: 00560160 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055a707
    MOV EBP,EAX                         ; 0055a70a
    TEST EAX,EAX                        ; 0055a70c
    JL 0x0055a77a                       ; 0055a70e | LAB_0055a77a
        ;   XREF to: 0055a77a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x48]      ; 0055a710
        ;   Label: LAB_0055a710
    XOR EDX,EDX                         ; 0055a713
    MOV dword ptr [ESP + 0x8],EAX       ; 0055a715
    MOV dword ptr [0x0310f4a4],EDX      ; 0055a719 | undefined4 DAT_0310f4a4
    MOV dword ptr [EBX + 0x48],ESI      ; 0055a71f
    XOR ESI,ESI                         ; 0055a722
    LEA EAX,[ESP + 0x4]                 ; 0055a724
        ;   Label: LAB_0055a724
    PUSH EAX                            ; 0055a728
    MOV ECX,0x3e800000                  ; 0055a729
    PUSH EBX                            ; 0055a72e
    MOV EDI,dword ptr [EBX + 0x48]      ; 0055a72f
    MOV dword ptr [ESP + 0xc],ECX       ; 0055a732
    CALL core_script.cpp_CScript_step_FUN_0055a810 ; 0055a736 | undefined core_script.cpp_CScript_step_FUN_0055a810()
        ;   XREF to: 0055a810 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055a73b
    TEST EAX,EAX                        ; 0055a73e
    JL 0x0055a7a1                       ; 0055a740 | LAB_0055a7a1
        ;   XREF to: 0055a7a1 (CONDITIONAL_JUMP)
    CMP EBP,dword ptr [EBX + 0x48]      ; 0055a742
        ;   Label: LAB_0055a742
    JNZ 0x0055a7d9                      ; 0055a745 | LAB_0055a7d9
        ;   XREF to: 0055a7d9 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0310f4a4],0x0      ; 0055a74b | undefined4 DAT_0310f4a4
    JZ 0x0055a76b                       ; 0055a752 | LAB_0055a76b
        ;   XREF to: 0055a76b (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x0067b654]      ; 0055a754 | CGame g_CGameInstance | CGame * g_CGamePtr
    PUSH ECX                            ; 0055a75a | CGame g_CGameInstance
    XOR ESI,ESI                         ; 0055a75b
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 ; 0055a75d | void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame * this_ptr)
        ;   XREF to: 004dce70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0055a762
    MOV dword ptr [0x0310f4a4],ESI      ; 0055a765 | undefined4 DAT_0310f4a4
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055a76b
        ;   Label: LAB_0055a76b
    MOV dword ptr [EBX + 0x48],EAX      ; 0055a76f
    POP EDI                             ; 0055a772
    ADD ESP,0x8                         ; 0055a773
    POP EBP                             ; 0055a776
    POP ESI                             ; 0055a777
    POP EBX                             ; 0055a778
    RET                                 ; 0055a779
    MOV EDI,0x641ab4                    ; 0055a77a | = "..\\core\\script.cpp" | s_core_script_cpp_00641ab4 = ..\core\script.cpp
        ;   Label: LAB_0055a77a
    MOV EAX,0x41c                       ; 0055a77f
    PUSH 0x641ac7                       ; 0055a784 | = "Script has \"initSection\" label, but..." | s_Script_has_initSection_l_00641ac7 = Script has "initSection" label, but no "initSectionEnd" label.
    MOV dword ptr [0x02f0ca48],EDI      ; 0055a789 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0055a78f | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0055a794 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0055a799
    JMP 0x0055a710                      ; 0055a79c | LAB_0055a710
        ;   XREF to: 0055a710 (UNCONDITIONAL_JUMP)
    MOV EAX,0x641b06                    ; 0055a7a1 | = "..\\core\\script.cpp" | s_core_script_cpp_00641b06 = ..\core\script.cpp
        ;   Label: LAB_0055a7a1
    MOV EDX,0x438                       ; 0055a7a6
    MOV [0x02f0ca48],EAX                ; 0055a7ab | char * g_CurrentFilename
    MOV EAX,dword ptr [EBX + 0x34]      ; 0055a7b0
    MOV dword ptr [0x02f0ca4c],EDX      ; 0055a7b3 | int g_CurrentLineNumber
    PUSH 0x310eca0                      ; 0055a7b9 | undefined1 DAT_0310eca0
    MOV ECX,dword ptr [EAX + EDI*0x8 + 0x4] ; 0055a7be
    PUSH ECX                            ; 0055a7c2
    MOV EDX,dword ptr [EAX + EDI*0x8]   ; 0055a7c3
    PUSH EDX                            ; 0055a7c6
    PUSH 0x641b19                       ; 0055a7c7 | = "Error processing script.\nLine: %d\nT..." | s_Error_processing_script__00641b19 = Error processing script.
    %d                                  ; Line
    %s                                  ; Text
    %s                                  ; What's wrong

    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0055a7cc | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0055a7d1
    JMP 0x0055a742                      ; 0055a7d4 | LAB_0055a742
        ;   XREF to: 0055a742 (UNCONDITIONAL_JUMP)
    INC ESI                             ; 0055a7d9
        ;   Label: LAB_0055a7d9
    CMP ESI,0x2710                      ; 0055a7da
    JLE 0x0055a724                      ; 0055a7e0 | LAB_0055a724
        ;   XREF to: 0055a724 (CONDITIONAL_JUMP)
    MOV EDI,0x641b56                    ; 0055a7e6 | = "..\\core\\script.cpp" | s_core_script_cpp_00641b56 = ..\core\script.cpp
    MOV EAX,0x44a                       ; 0055a7eb
    PUSH 0x641b69                       ; 0055a7f0 | = "Infinite loop detected in initSection.\n" | s_Infinite_loop_detected_i_00641b69 = Infinite loop detected in initSection.

    MOV dword ptr [0x02f0ca48],EDI      ; 0055a7f5 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0055a7fb | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0055a800 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0055a805
    JMP 0x0055a724                      ; 0055a808 | LAB_0055a724
        ;   XREF to: 0055a724 (UNCONDITIONAL_JUMP)

