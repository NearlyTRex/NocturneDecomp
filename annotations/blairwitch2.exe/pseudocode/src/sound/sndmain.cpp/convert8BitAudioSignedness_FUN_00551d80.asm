; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convert8BitAudioSignedness_FUN_00551d80(byte *buffer,int num_bytes)
;
; Parameters:
; byte *           Stack[0x4]:4   buffer
; int              Stack[0x8]:4   num_bytes
;
; XREF[1]:
;   sound_sndmain.cpp_resampleAndConvertAudio_FUN_00551dc0 at 00551e78
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00551d80
        ;   Label: sound_sndmain.cpp_convert8BitAudioSignedness_FUN_00551d80
    MOV EAX,dword ptr [ESP + 0x4]       ; 00551d84
    TEST EDX,EDX                        ; 00551d88
    JLE 0x00551d9c                      ; 00551d8a
        ;   XREF to: 00551d9c (CONDITIONAL_JUMP)  ; LAB_00551d9c
    PUSH EBX                            ; 00551d8c
    MOV BL,byte ptr [EAX]               ; 00551d8d
        ;   Label: LAB_00551d8d
    INC EAX                             ; 00551d8f
    XOR BL,0x80                         ; 00551d90
    DEC EDX                             ; 00551d93
    MOV byte ptr [EAX + -0x1],BL        ; 00551d94
    TEST EDX,EDX                        ; 00551d97
    JG 0x00551d8d                       ; 00551d99
        ;   XREF to: 00551d8d (CONDITIONAL_JUMP)  ; LAB_00551d8d
    POP EBX                             ; 00551d9b
    RET                                 ; 00551d9c
        ;   Label: LAB_00551d9c

