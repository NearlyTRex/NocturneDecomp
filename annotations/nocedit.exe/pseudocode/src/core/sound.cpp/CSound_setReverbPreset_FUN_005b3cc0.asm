; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(CSound *this_ptr,int index)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b082
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00580f7e
;
; Referenced Globals:
;   TerminatedCString s_core_sound_cpp_0065281b
;   TerminatedCString s_CSound_setReverbPreset_i_0065282d
;   undefined4 DAT_00681f00
;   undefined4 DAT_00681f04
;   undefined4 DAT_00681f08
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3cc0
        ;   Label: core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b3cc1
    TEST EBX,EBX                        ; 005b3cc5
    JL 0x005b3cf4                       ; 005b3cc7
        ;   XREF to: 005b3cf4 (CONDITIONAL_JUMP)  ; LAB_005b3cf4
    CMP EBX,0x1b                        ; 005b3cc9
    JGE 0x005b3cf4                      ; 005b3ccc
        ;   XREF to: 005b3cf4 (CONDITIONAL_JUMP)  ; LAB_005b3cf4
    MOV EAX,EBX                         ; 005b3cce
        ;   Label: LAB_005b3cce
    SHL EAX,0x4                         ; 005b3cd0
    PUSH dword ptr [EAX + 0x681f08]     ; 005b3cd3 | DAT_00681f08
    PUSH dword ptr [EAX + 0x681f04]     ; 005b3cd9 | DAT_00681f04
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b3cdf
    PUSH dword ptr [EAX + 0x681f00]     ; 005b3ce3 | DAT_00681f00
    PUSH EBX                            ; 005b3ce9
    CALL core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90 ; 005b3cea
        ;   XREF to: 005b3c90 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90(CSound * this_ptr, float listener_orient_x, float listener_orient_y, float listener_orient_z)
    ADD ESP,0x10                        ; 005b3cef
    POP EBX                             ; 005b3cf2
    RET                                 ; 005b3cf3
    MOV EDX,0x65281b                    ; 005b3cf4 | = "..\\core\\sound.cpp"
        ;   Label: LAB_005b3cf4
    MOV ECX,0x402                       ; 005b3cf9
    PUSH 0x65282d                       ; 005b3cfe | = "CSound::setReverbPreset - invalid index"
    MOV dword ptr [0x02f0ca48],EDX      ; 005b3d03 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005b3d09 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005b3d0f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005b3d14
    JMP 0x005b3cce                      ; 005b3d17
        ;   XREF to: 005b3cce (UNCONDITIONAL_JUMP)  ; LAB_005b3cce

