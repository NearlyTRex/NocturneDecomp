; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_00557500(CDirectSoundDevice *this_ptr,CSfxSlot *slot)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; CSfxSlot *       Stack[0x8]:4   slot
;
; Referenced Globals:
;   TerminatedCString s_DirectSoundDevice_killSf_005ea358
;
; Called Functions:
;   sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_00554e50
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00557500
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_00557500
    MOV EDX,dword ptr [EDX + 0x60]      ; 00557504
    TEST EDX,EDX                        ; 00557507
    JLE 0x00557510                      ; 00557509
        ;   XREF to: 00557510 (CONDITIONAL_JUMP)  ; LAB_00557510
    CMP EDX,0x1f                        ; 0055750b
    JL 0x0055751e                       ; 0055750e
        ;   XREF to: 0055751e (CONDITIONAL_JUMP)  ; LAB_0055751e
    PUSH 0x5ea358                       ; 00557510 | = "DirectSoundDevice::killSfx - handle w..."
        ;   Label: LAB_00557510
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 00557515
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 0055751a
    RET                                 ; 0055751d
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055751e
        ;   Label: LAB_0055751e
    ADD EAX,EDX                         ; 00557525
    CMP dword ptr [EAX*0x4 + 0x264ac10],0x0 ; 00557527
    JZ 0x00557510                       ; 0055752f
        ;   XREF to: 00557510 (CONDITIONAL_JUMP)  ; LAB_00557510
    PUSH EDX                            ; 00557531
    CALL sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_00554e50 ; 00557532
        ;   XREF to: 00554e50 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_00554e50(int sfx_handle)
    ADD ESP,0x4                         ; 00557537
    RET                                 ; 0055753a

