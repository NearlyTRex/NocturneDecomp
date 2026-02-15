; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_005aed50(CDirectSoundDevice *this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xc]:1  local_c
; undefined1       Stack[-0x8]:1  local_8
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_Get_position_of_secondar_00651be1
;   IDirectSoundBuffer* g_DirectSoundSecondaryBuffer
;   IDirectSound3DListener* g_DirectSound3DListener
;   int g_StreamBlockSizeBytes
;   int g_StreamBlockCount
;   int g_StreamCurrentBlock
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   sound_snddx.cpp_fillStreamBuffer_FUN_005adff0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aed50
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50
    SUB ESP,0x198                       ; 005aed51
    CMP dword ptr [0x03f6a9bc],0x0      ; 005aed57 | g_DirectSound3DListener
    JNZ 0x005aed74                      ; 005aed5e
        ;   XREF to: 005aed74 (CONDITIONAL_JUMP)  ; LAB_005aed74
    MOV ECX,dword ptr [0x03f6a9b8]      ; 005aed60 | g_DirectSoundSecondaryBuffer
    TEST ECX,ECX                        ; 005aed66
    JNZ 0x005aed80                      ; 005aed68
        ;   XREF to: 005aed80 (CONDITIONAL_JUMP)  ; LAB_005aed80
    XOR EAX,EAX                         ; 005aed6a
    ADD ESP,0x198                       ; 005aed6c
        ;   Label: LAB_005aed6c
    POP EBX                             ; 005aed72
    RET                                 ; 005aed73
    CALL sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0 ; 005aed74
        ;   XREF to: 005acdb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0()
        ;   Label: LAB_005aed74
    MOV EAX,0x1                         ; 005aed79
    JMP 0x005aed6c                      ; 005aed7e
        ;   XREF to: 005aed6c (UNCONDITIONAL_JUMP)  ; LAB_005aed6c
    LEA EBX,[ESP + 0x194]               ; 005aed80
        ;   Label: LAB_005aed80
    PUSH EBX                            ; 005aed87
    LEA EBX,[ESP + 0x194]               ; 005aed88
    PUSH EBX                            ; 005aed8f
    MOV EDX,dword ptr [ECX]             ; 005aed90
    PUSH ECX                            ; 005aed92
    CALL dword ptr [EDX + 0x10]         ; 005aed93
    TEST EAX,EAX                        ; 005aed96
    JNZ 0x005aedd5                      ; 005aed98
        ;   XREF to: 005aedd5 (CONDITIONAL_JUMP)  ; LAB_005aedd5
    PUSH ESI                            ; 005aed9a
    MOV EAX,dword ptr [ESP + 0x194]     ; 005aed9b
    MOV EBX,dword ptr [0x03f6a9d4]      ; 005aeda2 | g_StreamBlockSizeBytes
    XOR EDX,EDX                         ; 005aeda8
    DIV EBX                             ; 005aedaa
    MOV ESI,dword ptr [0x03f6a9d8]      ; 005aedac | g_StreamBlockCount
    MOV EBX,EAX                         ; 005aedb2
    CMP EAX,ESI                         ; 005aedb4
    JL 0x005aedbb                       ; 005aedb6
        ;   XREF to: 005aedbb (CONDITIONAL_JUMP)  ; LAB_005aedbb
    LEA EBX,[ESI + -0x1]                ; 005aedb8
    TEST EBX,EBX                        ; 005aedbb
        ;   Label: LAB_005aedbb
    JL 0x005aee0b                       ; 005aedbd
        ;   XREF to: 005aee0b (CONDITIONAL_JUMP)  ; LAB_005aee0b
    POP ESI                             ; 005aedbf
        ;   Label: LAB_005aedbf
    CMP EBX,dword ptr [0x03f6a9dc]      ; 005aedc0 | g_StreamCurrentBlock
        ;   Label: LAB_005aedc0
    JNZ 0x005aee0f                      ; 005aedc6
        ;   XREF to: 005aee0f (CONDITIONAL_JUMP)  ; LAB_005aee0f
    MOV EAX,0x1                         ; 005aedc8
    ADD ESP,0x198                       ; 005aedcd
    POP EBX                             ; 005aedd3
    RET                                 ; 005aedd4
    PUSH EAX                            ; 005aedd5
        ;   Label: LAB_005aedd5
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005aedd6
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005aeddb
    PUSH EAX                            ; 005aedde
    PUSH 0x651be1                       ; 005aeddf | = "Get position of secondary buffer"
    PUSH 0x651a6c                       ; 005aede4 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005aede9
    PUSH EAX                            ; 005aeded
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005aedee
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005aedf3
    MOV EAX,ESP                         ; 005aedf6
    PUSH EAX                            ; 005aedf8
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005aedf9
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005aedfe
    XOR EAX,EAX                         ; 005aee01
    ADD ESP,0x198                       ; 005aee03
    POP EBX                             ; 005aee09
    RET                                 ; 005aee0a
    XOR EBX,EBX                         ; 005aee0b
        ;   Label: LAB_005aee0b
    JMP 0x005aedbf                      ; 005aee0d
        ;   XREF to: 005aedbf (UNCONDITIONAL_JUMP)  ; LAB_005aedbf
    CALL sound_snddx.cpp_fillStreamBuffer_FUN_005adff0 ; 005aee0f
        ;   XREF to: 005adff0 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_fillStreamBuffer_FUN_005adff0()
        ;   Label: LAB_005aee0f
    TEST EAX,EAX                        ; 005aee14
    JNZ 0x005aedc0                      ; 005aee16
        ;   XREF to: 005aedc0 (CONDITIONAL_JUMP)  ; LAB_005aedc0
    ADD ESP,0x198                       ; 005aee18
    POP EBX                             ; 005aee1e
    RET                                 ; 005aee1f

