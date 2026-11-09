; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_FUN_00504e20(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   byte_value
; uint             Stack[0xc]:4   bits_per_byte
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a873
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005dff86
;   TerminatedCString s_hputbuf_Not_Supported_ye_005dff97
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504e20
        ;   Label: sound_mp3.cpp_FUN_00504e20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00504e21
    CMP dword ptr [ESP + 0x10],0x8      ; 00504e25
    JNZ 0x00504e4a                      ; 00504e2a
        ;   XREF to: 00504e4a (CONDITIONAL_JUMP)  ; LAB_00504e4a
    MOV EAX,dword ptr [EBX + 0x1310]    ; 00504e2c
        ;   Label: LAB_00504e2c
    AND EAX,0xfff                       ; 00504e32
    MOV EDX,dword ptr [ESP + 0xc]       ; 00504e37
    MOV dword ptr [EBX + EAX*0x4 + 0x131c],EDX ; 00504e3b
    INC dword ptr [EBX + 0x1310]        ; 00504e42
    POP EBX                             ; 00504e48
    RET                                 ; 00504e49
    PUSH ESI                            ; 00504e4a
        ;   Label: LAB_00504e4a
    PUSH 0x1d23558                      ; 00504e4b
    MOV ECX,0x5dff86                    ; 00504e50 | = "..\\sound\\mp3.cpp"
    MOV ESI,0x320                       ; 00504e55
    PUSH 0x5dff97                       ; 00504e5a | = "hputbuf - Not Supported yet!!  File: %s"
    MOV dword ptr [0x01d046a0],ECX      ; 00504e5f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00504e65 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00504e6b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00504e70
    POP ESI                             ; 00504e73
    JMP 0x00504e2c                      ; 00504e74
        ;   XREF to: 00504e2c (UNCONDITIONAL_JUMP)  ; LAB_00504e2c

