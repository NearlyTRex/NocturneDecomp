; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0 (CDirectSoundDevice *this_ptr,CSfxSlot *slot)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; CSfxSlot *       Stack[0x8]:4   slot
; Local Variables:
; undefined1       Stack[-0x4]:1  local_4
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_Get_active_sfx_secondary_0065207c
;   IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers
;   IDirectSound3DBuffer*[31] g_DirectSound3DBufferInterfaces
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    SUB ESP,0x194                       ; 005afcc0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0
    MOV EAX,dword ptr [ESP + 0x19c]     ; 005afcc6
    MOV EAX,dword ptr [EAX + 0x70]      ; 005afccd
    TEST EAX,EAX                        ; 005afcd0
    JLE 0x005afcd9                      ; 005afcd2
        ;   XREF to: 005afcd9 (CONDITIONAL_JUMP)  ; LAB_005afcd9
    CMP EAX,0x1f                        ; 005afcd4
    JL 0x005afce2                       ; 005afcd7
        ;   XREF to: 005afce2 (CONDITIONAL_JUMP)  ; LAB_005afce2
    XOR EAX,EAX                         ; 005afcd9
        ;   Label: LAB_005afcd9
    ADD ESP,0x194                       ; 005afcdb
    RET                                 ; 005afce1
    LEA EDX,[EAX*0x4 + 0x0]             ; 005afce2
        ;   Label: LAB_005afce2
    CMP dword ptr [EDX + 0x3f6aa44],0x0 ; 005afce9 | g_DirectSoundHardwareSfxBuffers
    JZ 0x005afcd9                       ; 005afcf0
        ;   XREF to: 005afcd9 (CONDITIONAL_JUMP)  ; LAB_005afcd9
    CMP dword ptr [EDX + 0x3f6aac0],0x0 ; 005afcf2 | g_DirectSound3DBufferInterfaces
    JZ 0x005afcd9                       ; 005afcf9
        ;   XREF to: 005afcd9 (CONDITIONAL_JUMP)  ; LAB_005afcd9
    LEA ECX,[ESP + 0x190]               ; 005afcfb
    MOV EAX,dword ptr [EAX*0x4 + 0x3f6aa44] ; 005afd02 | g_DirectSoundHardwareSfxBuffers
    PUSH ECX                            ; 005afd09
    MOV EDX,dword ptr [EAX]             ; 005afd0a
    PUSH EAX                            ; 005afd0c
    CALL dword ptr [EDX + 0x24]         ; 005afd0d
    TEST EAX,EAX                        ; 005afd10
    JNZ 0x005afd2a                      ; 005afd12
        ;   XREF to: 005afd2a (CONDITIONAL_JUMP)  ; LAB_005afd2a
    TEST byte ptr [ESP + 0x190],0x1     ; 005afd14
    JZ 0x005afcd9                       ; 005afd1c
        ;   XREF to: 005afcd9 (CONDITIONAL_JUMP)  ; LAB_005afcd9
    MOV EAX,0x1                         ; 005afd1e
    ADD ESP,0x194                       ; 005afd23
    RET                                 ; 005afd29
    PUSH EAX                            ; 005afd2a
        ;   Label: LAB_005afd2a
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005afd2b
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005afd30
    PUSH EAX                            ; 005afd33
    PUSH 0x65207c                       ; 005afd34 | = "Get active sfx secondary buffer status"
    PUSH 0x651a6c                       ; 005afd39 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005afd3e
    PUSH EAX                            ; 005afd42
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005afd43
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005afd48
    MOV EAX,ESP                         ; 005afd4b
    PUSH EAX                            ; 005afd4d
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005afd4e
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005afd53
    XOR EAX,EAX                         ; 005afd56
    ADD ESP,0x194                       ; 005afd58
    RET                                 ; 005afd5e

