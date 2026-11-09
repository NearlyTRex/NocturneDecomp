; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_FUN_004fd900(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   byte_value
; uint             Stack[0xc]:4   bits_per_byte
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00503353
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005c9ff2
;   TerminatedCString s_hputbuf_Not_Supported_ye_005ca003
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd900
        ;   Label: sound_mp3.cpp_FUN_004fd900
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fd901
    CMP dword ptr [ESP + 0x10],0x8      ; 004fd905
    JNZ 0x004fd92a                      ; 004fd90a
        ;   XREF to: 004fd92a (CONDITIONAL_JUMP)  ; LAB_004fd92a
    MOV EAX,dword ptr [EBX + 0x1310]    ; 004fd90c
        ;   Label: LAB_004fd90c
    AND EAX,0xfff                       ; 004fd912
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fd917
    MOV dword ptr [EBX + EAX*0x4 + 0x131c],EDX ; 004fd91b
    INC dword ptr [EBX + 0x1310]        ; 004fd922
    POP EBX                             ; 004fd928
    RET                                 ; 004fd929
    PUSH ESI                            ; 004fd92a
        ;   Label: LAB_004fd92a
    PUSH 0x1d94b98                      ; 004fd92b
    MOV ECX,0x5c9ff2                    ; 004fd930 | = "..\\sound\\mp3.cpp"
    MOV ESI,0x320                       ; 004fd935
    PUSH 0x5ca003                       ; 004fd93a | = "hputbuf - Not Supported yet!!  File: %s"
    MOV dword ptr [0x01d71de0],ECX      ; 004fd93f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004fd945 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fd94b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004fd950
    POP ESI                             ; 004fd953
    JMP 0x004fd90c                      ; 004fd954
        ;   XREF to: 004fd90c (UNCONDITIONAL_JUMP)  ; LAB_004fd90c

