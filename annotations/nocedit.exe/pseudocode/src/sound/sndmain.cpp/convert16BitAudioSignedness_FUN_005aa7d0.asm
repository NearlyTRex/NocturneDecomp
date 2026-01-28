; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_convert16BitAudioSignedness_FUN_005aa7d0(short *buffer,int num_samples)
;
; Parameters:
; short *          Stack[0x4]:4   buffer
; int              Stack[0x8]:4   num_samples
;
; XREF[1]:
;   sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0 at 005aaded
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005aa7d0
        ;   Label: sound_sndmain.cpp_convert16BitAudioSignedness_FUN_005aa7d0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005aa7d4
    TEST EDX,EDX                        ; 005aa7d8
    JLE 0x005aa7ef                      ; 005aa7da
        ;   XREF to: 005aa7ef (CONDITIONAL_JUMP)  ; LAB_005aa7ef
    PUSH EBX                            ; 005aa7dc
    MOV BL,byte ptr [EAX + 0x1]         ; 005aa7dd
        ;   Label: LAB_005aa7dd
    ADD EAX,0x2                         ; 005aa7e0
    XOR BL,0x80                         ; 005aa7e3
    DEC EDX                             ; 005aa7e6
    MOV byte ptr [EAX + -0x1],BL        ; 005aa7e7
    TEST EDX,EDX                        ; 005aa7ea
    JG 0x005aa7dd                       ; 005aa7ec
        ;   XREF to: 005aa7dd (CONDITIONAL_JUMP)  ; LAB_005aa7dd
    POP EBX                             ; 005aa7ee
    RET                                 ; 005aa7ef
        ;   Label: LAB_005aa7ef

