; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0052adc0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   string s_DirectSux:_Unable_to_%s._(%s)_005940b7
;   string s_Lock_hw_sample_buffer_005942e8
;   undefined4 DAT_02dc9244
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   FUN_00529980
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052adc0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_0052adc0
    PUSH ESI                            ; 0052adc1
    SUB ESP,0x190                       ; 0052adc2
    MOV ESI,dword ptr [ESP + 0x1a0]     ; 0052adc8
    MOV EBX,dword ptr [ESP + 0x1ac]     ; 0052adcf
    TEST ESI,ESI                        ; 0052add6
    JLE 0x0052addf                      ; 0052add8
        ;   XREF to: 0052addf (CONDITIONAL_JUMP)  ; LAB_0052addf
    CMP ESI,0x19                        ; 0052adda
    JL 0x0052adea                       ; 0052addd
        ;   XREF to: 0052adea (CONDITIONAL_JUMP)  ; LAB_0052adea
    XOR EAX,EAX                         ; 0052addf
        ;   Label: LAB_0052addf
    ADD ESP,0x190                       ; 0052ade1
    POP ESI                             ; 0052ade7
    POP EBX                             ; 0052ade8
    RET                                 ; 0052ade9
    CMP dword ptr [ESI*0x4 + 0x2dc9244],0x0 ; 0052adea | DAT_02dc9244
        ;   Label: LAB_0052adea
    JZ 0x0052addf                       ; 0052adf2
        ;   XREF to: 0052addf (CONDITIONAL_JUMP)  ; LAB_0052addf
    PUSH EBX                            ; 0052adf4
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 0052adf5
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40()
    ADD ESP,0x4                         ; 0052adfa
    PUSH 0x0                            ; 0052adfd
    LEA EDX,[EBX + 0x15c]               ; 0052adff
    PUSH EDX                            ; 0052ae05
    LEA EDX,[EBX + 0x164]               ; 0052ae06
    PUSH EDX                            ; 0052ae0c
    LEA EDX,[EBX + 0x158]               ; 0052ae0d
    PUSH EDX                            ; 0052ae13
    LEA EDX,[EBX + 0x160]               ; 0052ae14
    PUSH EDX                            ; 0052ae1a
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 0052ae1b
    IMUL EDX,EAX                        ; 0052ae22
    IMUL EAX,dword ptr [ESP + 0x1b8]    ; 0052ae25
    PUSH EDX                            ; 0052ae2d
    MOV ESI,dword ptr [ESI*0x4 + 0x2dc9244] ; 0052ae2e | DAT_02dc9244
    PUSH EAX                            ; 0052ae35
    MOV ECX,dword ptr [ESI]             ; 0052ae36
    PUSH ESI                            ; 0052ae38
    CALL dword ptr [ECX + 0x2c]         ; 0052ae39
    TEST EAX,EAX                        ; 0052ae3c
    JNZ 0x0052ae4f                      ; 0052ae3e
        ;   XREF to: 0052ae4f (CONDITIONAL_JUMP)  ; LAB_0052ae4f
    MOV EAX,dword ptr [EBX + 0x160]     ; 0052ae40
    ADD ESP,0x190                       ; 0052ae46
    POP ESI                             ; 0052ae4c
    POP EBX                             ; 0052ae4d
    RET                                 ; 0052ae4e
    PUSH EAX                            ; 0052ae4f
        ;   Label: LAB_0052ae4f
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052ae50
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052ae55
    PUSH EAX                            ; 0052ae58
    PUSH 0x5942e8                       ; 0052ae59 | = "Lock hw sample buffer"
    PUSH 0x5940b7                       ; 0052ae5e | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052ae63
    PUSH EAX                            ; 0052ae67
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052ae68
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052ae6d
    MOV EAX,ESP                         ; 0052ae70
    PUSH EAX                            ; 0052ae72
    CALL FUN_00529980                   ; 0052ae73
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052ae78
    XOR EAX,EAX                         ; 0052ae7b
    ADD ESP,0x190                       ; 0052ae7d
    POP ESI                             ; 0052ae83
    POP EBX                             ; 0052ae84
    RET                                 ; 0052ae85

