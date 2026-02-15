; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_0052f320(CMP3Decoder *this_ptr,int num_bytes)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_bytes
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 005356d5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f320
        ;   Label: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_0052f320
    PUSH ESI                            ; 0052f321
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052f322
    MOV ECX,dword ptr [ESP + 0x10]      ; 0052f326
    LEA EDX,[ECX*0x8 + 0x0]             ; 0052f32a
    MOV EBX,dword ptr [EAX + 0x1314]    ; 0052f331
    MOV ESI,dword ptr [EAX + 0x1318]    ; 0052f337
    SUB EBX,EDX                         ; 0052f33d
    SUB ESI,ECX                         ; 0052f33f
    MOV dword ptr [EAX + 0x1314],EBX    ; 0052f341
    MOV dword ptr [EAX + 0x1318],ESI    ; 0052f347
    POP ESI                             ; 0052f34d
    POP EBX                             ; 0052f34e
    RET                                 ; 0052f34f

