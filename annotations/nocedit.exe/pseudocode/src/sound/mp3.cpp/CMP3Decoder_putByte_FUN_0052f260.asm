; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_CMP3Decoder_putByte_FUN_0052f260(CMP3Decoder * this_ptr, uint byte_value, uint bits_per_byte)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   byte_value
; uint             Stack[0xc]:4   bits_per_byte
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 0053564f
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063adb8
;   TerminatedCString s_hputbuf_Not_Supported_ye_0063adc9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[256] g_CurrentMp3Filename
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f260
        ;   Label: sound_mp3.cpp_CMP3Decoder_putByte_FUN_0052f260
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052f261
    CMP dword ptr [ESP + 0x10],0x8      ; 0052f265
    JNZ 0x0052f28a                      ; 0052f26a
        ;   XREF to: 0052f28a (CONDITIONAL_JUMP)  ; LAB_0052f28a
    MOV EAX,dword ptr [EBX + 0x1310]    ; 0052f26c
        ;   Label: LAB_0052f26c
    AND EAX,0xfff                       ; 0052f272
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052f277
    MOV dword ptr [EBX + EAX*0x4 + 0x131c],EDX ; 0052f27b
    INC dword ptr [EBX + 0x1310]        ; 0052f282
    POP EBX                             ; 0052f288
    RET                                 ; 0052f289
    PUSH ESI                            ; 0052f28a
        ;   Label: LAB_0052f28a
    PUSH 0x2f68188                      ; 0052f28b | g_CurrentMp3Filename
    MOV ECX,0x63adb8                    ; 0052f290 | = "..\\sound\\mp3.cpp"
    MOV ESI,0x2d5                       ; 0052f295
    PUSH 0x63adc9                       ; 0052f29a | = "hputbuf - Not Supported yet!!  File: %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 0052f29f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0052f2a5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052f2ab
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0052f2b0
    POP ESI                             ; 0052f2b3
    JMP 0x0052f26c                      ; 0052f2b4
        ;   XREF to: 0052f26c (UNCONDITIONAL_JUMP)  ; LAB_0052f26c

