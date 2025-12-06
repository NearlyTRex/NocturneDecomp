; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_getActiveSfxCount_FUN_005a43a0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064f54e
;   TerminatedCString s_SfxSlot_kill_must_be_loc_0064f563
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 g_SfxSlots[0].field7_0x74
;   undefined4 DAT_03f5dc40
;   undefined4 g_SfxSlots[2].field_116
;   int g_SoundLockCount
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a43a0
        ;   Label: sound_sndmain.cpp_getActiveSfxCount_FUN_005a43a0
    CMP dword ptr [0x03f6940c],0x0      ; 005a43a1 | int g_SoundLockCount
    JLE 0x005a43d2                      ; 005a43a8 | LAB_005a43d2
        ;   XREF to: 005a43d2 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x03f5db18]      ; 005a43aa | g_SfxSlots[0].field7_0x74
        ;   Label: LAB_005a43aa
    XOR EAX,EAX                         ; 005a43b0
    XOR EDX,EDX                         ; 005a43b2
    TEST ESI,ESI                        ; 005a43b4
    JZ 0x005a43ce                       ; 005a43b6 | LAB_005a43ce
        ;   XREF to: 005a43ce (CONDITIONAL_JUMP)
    ADD EAX,0x128                       ; 005a43b8
        ;   Label: LAB_005a43b8
    INC EDX                             ; 005a43bd
    CMP EAX,0x4a00                      ; 005a43be
    JGE 0x005a43f9                      ; 005a43c3 | LAB_005a43f9
        ;   XREF to: 005a43f9 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x3f5db18],0x0 ; 005a43c5 | DAT_03f5dc40
    JNZ 0x005a43b8                      ; 005a43cc | LAB_005a43b8
        ;   XREF to: 005a43b8 (CONDITIONAL_JUMP)
    MOV EAX,EDX                         ; 005a43ce
        ;   Label: LAB_005a43ce
    POP ESI                             ; 005a43d0
    RET                                 ; 005a43d1
    PUSH EBX                            ; 005a43d2
        ;   Label: LAB_005a43d2
    MOV ECX,0x64f54e                    ; 005a43d3 | = "..\\sound\\sndmain.cpp" | s_sound_sndmain_cpp_0064f54e = ..\sound\sndmain.cpp
    MOV EBX,0x1f6                       ; 005a43d8
    PUSH 0x64f563                       ; 005a43dd | = "SfxSlot::kill - must be locked!" | s_SfxSlot_kill_must_be_loc_0064f563 = SfxSlot::kill - must be locked!
    MOV dword ptr [0x02f0ca48],ECX      ; 005a43e2 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005a43e8 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a43ee | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a43f3
    POP EBX                             ; 005a43f6
    JMP 0x005a43aa                      ; 005a43f7 | LAB_005a43aa
        ;   XREF to: 005a43aa (UNCONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 005a43f9
        ;   Label: LAB_005a43f9
    POP ESI                             ; 005a43fe
    RET                                 ; 005a43ff

