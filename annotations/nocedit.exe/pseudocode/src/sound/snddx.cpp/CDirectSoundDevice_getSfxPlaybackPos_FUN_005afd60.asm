; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60(CDirectSoundDevice * this_ptr, CSfxSlot * slot)
;
; Parameters:
; CDirectSoundDevice * Stack[0x8]:4   this_ptr
; CSfxSlot *       Stack[0xc]:4   slot
; Local Variables:
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_sound_snddx_cpp_006520a3
;   TerminatedCString s_DirectSoundDevice_getSfx_006520b6
;   TerminatedCString s_Get_playback_cursor_of_h_006520ec
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers
;   IDirectSound3DBuffer*[31] g_DirectSound3DBufferInterfaces
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afd60
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60
    PUSH ESI                            ; 005afd61
    PUSH EDI                            ; 005afd62
    PUSH EBP                            ; 005afd63
    MOV EBP,ESP                         ; 005afd64
    SUB ESP,0x1a8                       ; 005afd66
    AND ESP,0xfffffff8                  ; 005afd6c
    MOV EBX,dword ptr [EBP + 0x18]      ; 005afd6f
    MOV EBX,dword ptr [EBX + 0x70]      ; 005afd72
    TEST EBX,EBX                        ; 005afd75
    JLE 0x005afd82                      ; 005afd77
        ;   XREF to: 005afd82 (CONDITIONAL_JUMP)  ; LAB_005afd82
    CMP EBX,0x1f                        ; 005afd79
    JL 0x005afe0a                       ; 005afd7c
        ;   XREF to: 005afe0a (CONDITIONAL_JUMP)  ; LAB_005afe0a
    MOV ESI,0x6520a3                    ; 005afd82 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_005afd82
    MOV EDI,0x3d6                       ; 005afd87
    PUSH 0x6520b6                       ; 005afd8c | = "DirectSoundDevice::getSfxPlaybackPos ..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005afd91 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005afd97 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005afd9d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005afda2
    LEA EDX,[ESP + 0x1a0]               ; 005afda5
        ;   Label: LAB_005afda5
    PUSH EDX                            ; 005afdac
    LEA EDX,[ESP + 0x1a8]               ; 005afdad
    MOV EAX,dword ptr [EBX*0x4 + 0x3f6aa44] ; 005afdb4 | g_DirectSoundHardwareSfxBuffers
    PUSH EDX                            ; 005afdbb
    MOV EBX,dword ptr [EAX]             ; 005afdbc
    PUSH EAX                            ; 005afdbe
    CALL dword ptr [EBX + 0x10]         ; 005afdbf
    TEST EAX,EAX                        ; 005afdc2
    JNZ 0x005afe30                      ; 005afdc4
        ;   XREF to: 005afe30 (CONDITIONAL_JUMP)  ; LAB_005afe30
    MOV EAX,dword ptr [EBP + 0x18]      ; 005afdc6
    MOV ECX,dword ptr [EAX + 0x78]      ; 005afdc9
    PUSH ECX                            ; 005afdcc
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005afdcd
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    MOV EBX,EAX                         ; 005afdd2
    ADD ESP,0x4                         ; 005afdd4
    XOR EDX,EDX                         ; 005afdd7
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 005afdd9
    DIV EBX                             ; 005afde0
    XOR EBX,EBX                         ; 005afde2
    MOV dword ptr [ESP + 0x198],EAX     ; 005afde4
    MOV dword ptr [ESP + 0x19c],EBX     ; 005afdeb
    FILD qword ptr [ESP + 0x198]        ; 005afdf2
    FSTP double ptr [ESP]               ; 005afdf9
    MOV EAX,dword ptr [ESP]             ; 005afdfc
    MOV EDX,dword ptr [ESP + 0x4]       ; 005afdff
    MOV ESP,EBP                         ; 005afe03
    POP EBP                             ; 005afe05
    POP EDI                             ; 005afe06
    POP ESI                             ; 005afe07
    POP EBX                             ; 005afe08
    RET                                 ; 005afe09
    LEA EAX,[EBX*0x4 + 0x0]             ; 005afe0a
        ;   Label: LAB_005afe0a
    CMP dword ptr [EAX + 0x3f6aa44],0x0 ; 005afe11 | g_DirectSoundHardwareSfxBuffers
    JZ 0x005afd82                       ; 005afe18
        ;   XREF to: 005afd82 (CONDITIONAL_JUMP)  ; LAB_005afd82
    CMP dword ptr [EAX + 0x3f6aac0],0x0 ; 005afe1e | g_DirectSound3DBufferInterfaces
    JZ 0x005afd82                       ; 005afe25
        ;   XREF to: 005afd82 (CONDITIONAL_JUMP)  ; LAB_005afd82
    JMP 0x005afda5                      ; 005afe2b
        ;   XREF to: 005afda5 (UNCONDITIONAL_JUMP)  ; LAB_005afda5
    PUSH EAX                            ; 005afe30
        ;   Label: LAB_005afe30
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005afe31
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005afe36
    PUSH EAX                            ; 005afe39
    PUSH 0x6520ec                       ; 005afe3a | = "Get playback cursor of hardware sfx s..."
    PUSH 0x651a6c                       ; 005afe3f | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x14]                ; 005afe44
    PUSH EAX                            ; 005afe48
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005afe49
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005afe4e
    LEA EAX,[ESP + 0x8]                 ; 005afe51
    PUSH EAX                            ; 005afe55
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005afe56
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005afe5b
    XOR EAX,EAX                         ; 005afe5e
    MOV EDX,0xbff00000                  ; 005afe60
    MOV dword ptr [ESP],EAX             ; 005afe65
    MOV dword ptr [ESP + 0x4],EDX       ; 005afe68
    MOV EAX,dword ptr [ESP]             ; 005afe6c
    MOV EDX,dword ptr [ESP + 0x4]       ; 005afe6f
    MOV ESP,EBP                         ; 005afe73
    POP EBP                             ; 005afe75
    POP EDI                             ; 005afe76
    POP ESI                             ; 005afe77
    POP EBX                             ; 005afe78
    RET                                 ; 005afe79

