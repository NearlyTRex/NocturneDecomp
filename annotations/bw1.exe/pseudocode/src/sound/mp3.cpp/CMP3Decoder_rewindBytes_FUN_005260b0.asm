; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_005260b0(CMP3Decoder *this_ptr,int num_bytes)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_bytes
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052bac6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005260b0
        ;   Label: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_005260b0
    PUSH ESI                            ; 005260b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005260b2
    MOV ECX,dword ptr [ESP + 0x10]      ; 005260b6
    LEA EDX,[ECX*0x8 + 0x0]             ; 005260ba
    MOV EBX,dword ptr [EAX + 0x1314]    ; 005260c1
    MOV ESI,dword ptr [EAX + 0x1318]    ; 005260c7
    SUB EBX,EDX                         ; 005260cd
    SUB ESI,ECX                         ; 005260cf
    MOV dword ptr [EAX + 0x1314],EBX    ; 005260d1
    MOV dword ptr [EAX + 0x1318],ESI    ; 005260d7
    POP ESI                             ; 005260dd
    POP EBX                             ; 005260de
    RET                                 ; 005260df

