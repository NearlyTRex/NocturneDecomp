; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_004fd9c0(CMP3Decoder *this_ptr,int num_bytes)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_bytes
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 005033d6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd9c0
        ;   Label: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_004fd9c0
    PUSH ESI                            ; 004fd9c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fd9c2
    MOV ECX,dword ptr [ESP + 0x10]      ; 004fd9c6
    LEA EDX,[ECX*0x8 + 0x0]             ; 004fd9ca
    MOV EBX,dword ptr [EAX + 0x1314]    ; 004fd9d1
    MOV ESI,dword ptr [EAX + 0x1318]    ; 004fd9d7
    SUB EBX,EDX                         ; 004fd9dd
    SUB ESI,ECX                         ; 004fd9df
    MOV dword ptr [EAX + 0x1314],EBX    ; 004fd9e1
    MOV dword ptr [EAX + 0x1318],ESI    ; 004fd9e7
    POP ESI                             ; 004fd9ed
    POP EBX                             ; 004fd9ee
    RET                                 ; 004fd9ef

