; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_00579f30(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSoundDevice_killSf_005f5552
;
; Called Functions:
;   sound_snddx.cpp_FUN_00577880
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00579f30
        ;   Label: sound_snddx.cpp_FUN_00579f30
    MOV EDX,dword ptr [EDX + 0x60]      ; 00579f34
    TEST EDX,EDX                        ; 00579f37
    JLE 0x00579f40                      ; 00579f39
        ;   XREF to: 00579f40 (CONDITIONAL_JUMP)  ; LAB_00579f40
    CMP EDX,0x1f                        ; 00579f3b
    JL 0x00579f4e                       ; 00579f3e
        ;   XREF to: 00579f4e (CONDITIONAL_JUMP)  ; LAB_00579f4e
    PUSH 0x5f5552                       ; 00579f40 | = "DirectSoundDevice::killSfx - handle w..."
        ;   Label: LAB_00579f40
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 00579f45
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x4                         ; 00579f4a
    RET                                 ; 00579f4d
    LEA EAX,[EDX*0x8 + 0x0]             ; 00579f4e
        ;   Label: LAB_00579f4e
    ADD EAX,EDX                         ; 00579f55
    CMP dword ptr [EAX*0x4 + 0x2c823e0],0x0 ; 00579f57
    JZ 0x00579f40                       ; 00579f5f
        ;   XREF to: 00579f40 (CONDITIONAL_JUMP)  ; LAB_00579f40
    PUSH EDX                            ; 00579f61
    CALL sound_snddx.cpp_FUN_00577880   ; 00579f62
        ;   XREF to: 00577880 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_00577880()
    ADD ESP,0x4                         ; 00579f67
    RET                                 ; 00579f6a

