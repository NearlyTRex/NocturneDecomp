; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convert16BitAudioSignedness_FUN_00557930(short *buffer,int num_samples)
;
; Parameters:
; short *          Stack[0x4]:4   buffer
; int              Stack[0x8]:4   num_samples
;
; XREF[1]:
;   sound_sndmain.cpp_resampleAndConvertAudio_FUN_00557950 at 00557f4d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00557930
        ;   Label: sound_sndmain.cpp_convert16BitAudioSignedness_FUN_00557930
    MOV EAX,dword ptr [ESP + 0x4]       ; 00557934
    TEST EDX,EDX                        ; 00557938
    JLE 0x0055794f                      ; 0055793a
        ;   XREF to: 0055794f (CONDITIONAL_JUMP)  ; LAB_0055794f
    PUSH EBX                            ; 0055793c
    MOV BL,byte ptr [EAX + 0x1]         ; 0055793d
        ;   Label: LAB_0055793d
    ADD EAX,0x2                         ; 00557940
    XOR BL,0x80                         ; 00557943
    DEC EDX                             ; 00557946
    MOV byte ptr [EAX + -0x1],BL        ; 00557947
    TEST EDX,EDX                        ; 0055794a
    JG 0x0055793d                       ; 0055794c
        ;   XREF to: 0055793d (CONDITIONAL_JUMP)  ; LAB_0055793d
    POP EBX                             ; 0055794e
    RET                                 ; 0055794f
        ;   Label: LAB_0055794f

