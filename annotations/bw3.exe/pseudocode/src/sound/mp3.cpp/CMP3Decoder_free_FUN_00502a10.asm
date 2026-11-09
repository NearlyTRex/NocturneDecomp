; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_00502a10(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   sound_mp3.cpp_CMP3Decoder_dtor_FUN_00502790 at 00502796
;   sound_mp3.cpp_FUN_00502890 at 0050289c
;   sound_sndmain.cpp_FUN_00551d20 at 00551f9d
;   sound_sndmain.cpp_FUN_00557570 at 00557798
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502a10
        ;   Label: sound_mp3.cpp_CMP3Decoder_free_FUN_00502a10
    PUSH ESI                            ; 00502a11
    PUSH EDI                            ; 00502a12
    MOV EDI,dword ptr [ESP + 0x10]      ; 00502a13
    MOV dword ptr [EDI + 0x10c],0x0     ; 00502a17
    LEA EBX,[EDI + 0x5320]              ; 00502a21
    MOV dword ptr [EDI + 0x108],0x0     ; 00502a27
    MOV EDX,dword ptr [EBX]             ; 00502a31
    MOV ESI,EBX                         ; 00502a33
    TEST EDX,EDX                        ; 00502a35
    JNZ 0x00502a47                      ; 00502a37
        ;   XREF to: 00502a47 (CONDITIONAL_JUMP)  ; LAB_00502a47
    MOV EBX,dword ptr [ESI + 0x4]       ; 00502a39
    TEST EBX,EBX                        ; 00502a3c
    JNZ 0x00502a64                      ; 00502a3e
        ;   XREF to: 00502a64 (CONDITIONAL_JUMP)  ; LAB_00502a64
    MOV byte ptr [EDI],0x0              ; 00502a40
    POP EDI                             ; 00502a43
    POP ESI                             ; 00502a44
    POP EBX                             ; 00502a45
    RET                                 ; 00502a46
    PUSH EDX                            ; 00502a47
        ;   Label: LAB_00502a47
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00502a48
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00502a4d
    MOV dword ptr [EBX],0x0             ; 00502a50
    MOV EBX,dword ptr [ESI + 0x4]       ; 00502a56
    TEST EBX,EBX                        ; 00502a59
    JNZ 0x00502a64                      ; 00502a5b
        ;   XREF to: 00502a64 (CONDITIONAL_JUMP)  ; LAB_00502a64
    MOV byte ptr [EDI],0x0              ; 00502a5d
    POP EDI                             ; 00502a60
    POP ESI                             ; 00502a61
    POP EBX                             ; 00502a62
    RET                                 ; 00502a63
    PUSH EBX                            ; 00502a64
        ;   Label: LAB_00502a64
    CALL crt_unknown.c_FUN_005a3770     ; 00502a65
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00502a6a
    MOV dword ptr [ESI + 0x4],0x0       ; 00502a6d
    MOV byte ptr [EDI],0x0              ; 00502a74
    POP EDI                             ; 00502a77
    POP ESI                             ; 00502a78
    POP EBX                             ; 00502a79
    RET                                 ; 00502a7a

