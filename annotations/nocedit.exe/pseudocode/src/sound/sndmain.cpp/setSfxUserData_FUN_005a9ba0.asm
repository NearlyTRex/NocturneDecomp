; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_setSfxUserData_FUN_005a9ba0(uint sfx_handle, int index, void * value)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; int              Stack[0x8]:4   index
; void *           Stack[0xc]:4   value
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_006509ae
;   TerminatedCString s_setSfxUserData_invalid_u_006509c3
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9ba0
        ;   Label: sound_sndmain.cpp_setSfxUserData_FUN_005a9ba0
    PUSH ESI                            ; 005a9ba1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a9ba2
    TEST EBX,EBX                        ; 005a9ba6
    JL 0x005a9baf                       ; 005a9ba8 | LAB_005a9baf
        ;   XREF to: 005a9baf (CONDITIONAL_JUMP)
    CMP EBX,0x2                         ; 005a9baa
    JL 0x005a9bd3                       ; 005a9bad | LAB_005a9bd3
        ;   XREF to: 005a9bd3 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005a9baf
        ;   Label: LAB_005a9baf
    MOV EDX,0x6509ae                    ; 005a9bb0 | = "..\\sound\\sndmain.cpp" | s_sound_sndmain_cpp_006509ae = ..\sound\sndmain.cpp
    MOV ECX,0xf40                       ; 005a9bb5
    PUSH 0x6509c3                       ; 005a9bba | = "setSfxUserData - invalid user data in..." | s_setSfxUserData_invalid_u_006509c3 = setSfxUserData - invalid user data index: %d
    MOV dword ptr [0x02f0ca48],EDX      ; 005a9bbf | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005a9bc5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a9bcb | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a9bd0
    PUSH 0x1                            ; 005a9bd3
        ;   Label: LAB_005a9bd3
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a9bd5
    PUSH ESI                            ; 005a9bd9
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9bda | CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a9bdf
    TEST EAX,EAX                        ; 005a9be2
    JNZ 0x005a9be9                      ; 005a9be4 | LAB_005a9be9
        ;   XREF to: 005a9be9 (CONDITIONAL_JUMP)
    POP ESI                             ; 005a9be6
    POP EBX                             ; 005a9be7
    RET                                 ; 005a9be8
    SHL EBX,0x2                         ; 005a9be9
        ;   Label: LAB_005a9be9
    ADD EAX,EBX                         ; 005a9bec
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a9bee
    MOV dword ptr [EAX + 0x54],EBX      ; 005a9bf2
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9bf5 | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 005a9bfa
    POP ESI                             ; 005a9bff
    POP EBX                             ; 005a9c00
    RET                                 ; 005a9c01

