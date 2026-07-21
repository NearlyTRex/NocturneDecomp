; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0(int param_1,int param_2)
;
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e8f45
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2ea0
        ;   Label: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0
    PUSH ESI                            ; 004e2ea1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e2ea2
    MOV ECX,dword ptr [ESP + 0x10]      ; 004e2ea6
    LEA EDX,[ECX*0x8 + 0x0]             ; 004e2eaa
    MOV EBX,dword ptr [EAX + 0x1314]    ; 004e2eb1
    MOV ESI,dword ptr [EAX + 0x1318]    ; 004e2eb7
    SUB EBX,EDX                         ; 004e2ebd
    SUB ESI,ECX                         ; 004e2ebf
    MOV dword ptr [EAX + 0x1314],EBX    ; 004e2ec1
    MOV dword ptr [EAX + 0x1318],ESI    ; 004e2ec7
    POP ESI                             ; 004e2ecd
    POP EBX                             ; 004e2ece
    RET                                 ; 004e2ecf

