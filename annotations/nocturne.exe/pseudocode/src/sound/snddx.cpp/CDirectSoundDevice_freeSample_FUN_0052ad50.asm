; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_0052ad50(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_sound_snddx_cpp_005942a2
;   TerminatedCString s_DirectSoundDevice_freeSa_005942b5
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc9244
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ad50
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_0052ad50
    PUSH EDI                            ; 0052ad51
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052ad52
    TEST EBX,EBX                        ; 0052ad56
    JLE 0x0052ad5f                      ; 0052ad58
        ;   XREF to: 0052ad5f (CONDITIONAL_JUMP)  ; LAB_0052ad5f
    CMP EBX,0x19                        ; 0052ad5a
    JL 0x0052ad97                       ; 0052ad5d
        ;   XREF to: 0052ad97 (CONDITIONAL_JUMP)  ; LAB_0052ad97
    PUSH ESI                            ; 0052ad5f
        ;   Label: LAB_0052ad5f
    PUSH EBX                            ; 0052ad60
    MOV ECX,0x5942a2                    ; 0052ad61 | = "..\\sound\\snddx.cpp"
    MOV ESI,0x2a1                       ; 0052ad66
    PUSH 0x5942b5                       ; 0052ad6b | = "DirectSoundDevice::freeSample - Inval..."
    MOV dword ptr [0x01cc4800],ECX      ; 0052ad70 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0052ad76 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0052ad7c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0052ad81
    POP ESI                             ; 0052ad84
    SHL EBX,0x2                         ; 0052ad85
        ;   Label: LAB_0052ad85
    ADD EBX,0x2dc9244                   ; 0052ad88
    MOV EDI,dword ptr [EBX]             ; 0052ad8e | DAT_02dc9244
    TEST EDI,EDI                        ; 0052ad90
    JNZ 0x0052ada3                      ; 0052ad92
        ;   XREF to: 0052ada3 (CONDITIONAL_JUMP)  ; LAB_0052ada3
    POP EDI                             ; 0052ad94
    POP EBX                             ; 0052ad95
    RET                                 ; 0052ad96
    CMP dword ptr [EBX*0x4 + 0x2dc9244],0x0 ; 0052ad97 | DAT_02dc9244
        ;   Label: LAB_0052ad97
    JZ 0x0052ad5f                       ; 0052ad9f
        ;   XREF to: 0052ad5f (CONDITIONAL_JUMP)  ; LAB_0052ad5f
    JMP 0x0052ad85                      ; 0052ada1
        ;   XREF to: 0052ad85 (UNCONDITIONAL_JUMP)  ; LAB_0052ad85
    PUSH EDI                            ; 0052ada3
        ;   Label: LAB_0052ada3
    MOV EDX,dword ptr [EDI]             ; 0052ada4
    CALL dword ptr [EDX + 0x8]          ; 0052ada6
    MOV dword ptr [EBX],0x0             ; 0052ada9 | DAT_02dc9244
    POP EDI                             ; 0052adaf
    POP EBX                             ; 0052adb0
    RET                                 ; 0052adb1

