; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_005a8aa0(int index,void *userdata)
;
; Parameters:
; int              Stack[0x4]:4   index
; void *           Stack[0x8]:4   userdata
;
; XREF[1]:
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b21e5
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650812
;   TerminatedCString s_setNextSfxUserData_inval_00650827
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[68]
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8aa0
        ;   Label: sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a8aa1
    TEST EBX,EBX                        ; 005a8aa5
    JL 0x005a8aca                       ; 005a8aa7
        ;   XREF to: 005a8aca (CONDITIONAL_JUMP)  ; LAB_005a8aca
    CMP EBX,0x2                         ; 005a8aa9
    JGE 0x005a8aca                      ; 005a8aac
        ;   XREF to: 005a8aca (CONDITIONAL_JUMP)  ; LAB_005a8aca
    MOV EAX,[0x03f624a4]                ; 005a8aae | g_SfxLastSlot
        ;   Label: LAB_005a8aae
    SHL EAX,0x4                         ; 005a8ab3
    MOV EDX,EAX                         ; 005a8ab6
    SHL EAX,0x3                         ; 005a8ab8
    SUB EAX,EDX                         ; 005a8abb
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a8abd
    MOV dword ptr [EAX + EBX*0x4 + 0x3f624fc],EDX ; 005a8ac1 | g_SfxLastSlot.field_20[68]
    POP EBX                             ; 005a8ac8
    RET                                 ; 005a8ac9
    PUSH EBX                            ; 005a8aca
        ;   Label: LAB_005a8aca
    MOV EDX,0x650812                    ; 005a8acb | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xcf3                       ; 005a8ad0
    PUSH 0x650827                       ; 005a8ad5 | = "setNextSfxUserData - invalid user dat..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005a8ada | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005a8ae0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a8ae6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a8aeb
    JMP 0x005a8aae                      ; 005a8aee
        ;   XREF to: 005a8aae (UNCONDITIONAL_JUMP)  ; LAB_005a8aae

