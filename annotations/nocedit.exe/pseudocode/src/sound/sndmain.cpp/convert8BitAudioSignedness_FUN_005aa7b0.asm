; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_convert8BitAudioSignedness_FUN_005aa7b0(byte * buffer, int num_bytes)
;
; Parameters:
; byte *           Stack[0x4]:4   buffer
; int              Stack[0x8]:4   num_bytes
;
; XREF[1]:
;   sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0 at 005aa8a8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005aa7b0
        ;   Label: sound_sndmain.cpp_convert8BitAudioSignedness_FUN_005aa7b0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005aa7b4
    TEST EDX,EDX                        ; 005aa7b8
    JLE 0x005aa7cc                      ; 005aa7ba
        ;   XREF to: 005aa7cc (CONDITIONAL_JUMP)  ; LAB_005aa7cc
    PUSH EBX                            ; 005aa7bc
    MOV BL,byte ptr [EAX]               ; 005aa7bd
        ;   Label: LAB_005aa7bd
    INC EAX                             ; 005aa7bf
    XOR BL,0x80                         ; 005aa7c0
    DEC EDX                             ; 005aa7c3
    MOV byte ptr [EAX + -0x1],BL        ; 005aa7c4
    TEST EDX,EDX                        ; 005aa7c7
    JG 0x005aa7bd                       ; 005aa7c9
        ;   XREF to: 005aa7bd (CONDITIONAL_JUMP)  ; LAB_005aa7bd
    POP EBX                             ; 005aa7cb
    RET                                 ; 005aa7cc
        ;   Label: LAB_005aa7cc

