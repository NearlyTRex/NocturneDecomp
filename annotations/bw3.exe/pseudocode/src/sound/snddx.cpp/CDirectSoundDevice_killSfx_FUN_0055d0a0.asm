; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_0055d0a0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; CSfxSlot *       Stack[0x8]:4   slot
;
; Referenced Globals:
;   TerminatedCString s_DirectSoundDevice_killSf_005d4e4c
;
; Called Functions:
;   sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_0055a9f0
;   sound_sndmain.cpp_logSoundError_FUN_0055a560
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0055d0a0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_0055d0a0
    MOV EDX,dword ptr [EDX + 0x60]      ; 0055d0a4
    TEST EDX,EDX                        ; 0055d0a7
    JLE 0x0055d0b0                      ; 0055d0a9
        ;   XREF to: 0055d0b0 (CONDITIONAL_JUMP)  ; LAB_0055d0b0
    CMP EDX,0x1f                        ; 0055d0ab
    JL 0x0055d0be                       ; 0055d0ae
        ;   XREF to: 0055d0be (CONDITIONAL_JUMP)  ; LAB_0055d0be
    PUSH 0x5d4e4c                       ; 0055d0b0 | = "DirectSoundDevice::killSfx - handle w..."
        ;   Label: LAB_0055d0b0
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055d0b5
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055d0ba
    RET                                 ; 0055d0bd
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055d0be
        ;   Label: LAB_0055d0be
    ADD EAX,EDX                         ; 0055d0c5
    CMP dword ptr [EAX*0x4 + 0x2cf500c],0x0 ; 0055d0c7
    JZ 0x0055d0b0                       ; 0055d0cf
        ;   XREF to: 0055d0b0 (CONDITIONAL_JUMP)  ; LAB_0055d0b0
    PUSH EDX                            ; 0055d0d1
    CALL sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_0055a9f0 ; 0055d0d2
        ;   XREF to: 0055a9f0 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_0055a9f0(int sfx_handle)
    ADD ESP,0x4                         ; 0055d0d7
    RET                                 ; 0055d0da

