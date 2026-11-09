; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_00504ee0(CMP3Decoder *this_ptr,int num_bytes)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_bytes
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a8f6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504ee0
        ;   Label: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_00504ee0
    PUSH ESI                            ; 00504ee1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00504ee2
    MOV ECX,dword ptr [ESP + 0x10]      ; 00504ee6
    LEA EDX,[ECX*0x8 + 0x0]             ; 00504eea
    MOV EBX,dword ptr [EAX + 0x1314]    ; 00504ef1
    MOV ESI,dword ptr [EAX + 0x1318]    ; 00504ef7
    SUB EBX,EDX                         ; 00504efd
    SUB ESI,ECX                         ; 00504eff
    MOV dword ptr [EAX + 0x1314],EBX    ; 00504f01
    MOV dword ptr [EAX + 0x1318],ESI    ; 00504f07
    POP ESI                             ; 00504f0d
    POP EBX                             ; 00504f0e
    RET                                 ; 00504f0f

