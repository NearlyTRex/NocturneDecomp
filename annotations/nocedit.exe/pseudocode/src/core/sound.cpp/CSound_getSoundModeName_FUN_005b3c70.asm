; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * core_sound.cpp_CSound_getSoundModeName_FUN_005b3c70(CSound * this_ptr, int sound_mode_index)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sound_mode_index
;
; XREF[1]:
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00580b45
;
; Referenced Globals:
;   TerminatedCString s_anon_00652816
;   SSoundModeEntry[27] g_SoundModeTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005b3c70
        ;   Label: core_sound.cpp_CSound_getSoundModeName_FUN_005b3c70
    TEST EAX,EAX                        ; 005b3c74
    JL 0x005b3c7d                       ; 005b3c76
        ;   XREF to: 005b3c7d (CONDITIONAL_JUMP)  ; LAB_005b3c7d
    CMP EAX,0x1b                        ; 005b3c78
    JL 0x005b3c83                       ; 005b3c7b
        ;   XREF to: 005b3c83 (CONDITIONAL_JUMP)  ; LAB_005b3c83
    MOV EAX,0x652816                    ; 005b3c7d | = "????"
        ;   Label: LAB_005b3c7d
    RET                                 ; 005b3c82
    SHL EAX,0x4                         ; 005b3c83
        ;   Label: LAB_005b3c83
    MOV EAX,dword ptr [EAX + 0x681efc]  ; 005b3c86 | g_SoundModeTable
    RET                                 ; 005b3c8c

