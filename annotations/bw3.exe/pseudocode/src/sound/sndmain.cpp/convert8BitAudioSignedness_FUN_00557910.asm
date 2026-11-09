; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convert8BitAudioSignedness_FUN_00557910(byte *buffer,int num_bytes)
;
; Parameters:
; byte *           Stack[0x4]:4   buffer
; int              Stack[0x8]:4   num_bytes
;
; XREF[1]:
;   sound_sndmain.cpp_resampleAndConvertAudio_FUN_00557950 at 00557a08
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00557910
        ;   Label: sound_sndmain.cpp_convert8BitAudioSignedness_FUN_00557910
    MOV EAX,dword ptr [ESP + 0x4]       ; 00557914
    TEST EDX,EDX                        ; 00557918
    JLE 0x0055792c                      ; 0055791a
        ;   XREF to: 0055792c (CONDITIONAL_JUMP)  ; LAB_0055792c
    PUSH EBX                            ; 0055791c
    MOV BL,byte ptr [EAX]               ; 0055791d
        ;   Label: LAB_0055791d
    INC EAX                             ; 0055791f
    XOR BL,0x80                         ; 00557920
    DEC EDX                             ; 00557923
    MOV byte ptr [EAX + -0x1],BL        ; 00557924
    TEST EDX,EDX                        ; 00557927
    JG 0x0055791d                       ; 00557929
        ;   XREF to: 0055791d (CONDITIONAL_JUMP)  ; LAB_0055791d
    POP EBX                             ; 0055792b
    RET                                 ; 0055792c
        ;   Label: LAB_0055792c

