; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_004e2e40(int param_1,int param_2)
;
;
; XREF[1]:
;   sound_mp3.cpp_FUN_004e5200 at 004e583c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2e40
        ;   Label: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_004e2e40
    PUSH EBP                            ; 004e2e41
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e2e42
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e2e46
    MOV EBX,dword ptr [EAX + 0x531c]    ; 004e2e4a
    MOV ECX,dword ptr [EAX + 0x1314]    ; 004e2e50
    ADD EBX,EDX                         ; 004e2e56
    SUB ECX,EDX                         ; 004e2e58
    MOV dword ptr [EAX + 0x531c],EBX    ; 004e2e5a
    MOV dword ptr [EAX + 0x1314],ECX    ; 004e2e60
    CMP EBX,0x8                         ; 004e2e66
    JC 0x004e2e94                       ; 004e2e69
        ;   XREF to: 004e2e94 (CONDITIONAL_JUMP)  ; LAB_004e2e94
    PUSH EDI                            ; 004e2e6b
    MOV EDI,dword ptr [EAX + 0x531c]    ; 004e2e6c
        ;   Label: LAB_004e2e6c
    SUB EDI,0x8                         ; 004e2e72
    MOV EBP,dword ptr [EAX + 0x1318]    ; 004e2e75
    MOV dword ptr [EAX + 0x531c],EDI    ; 004e2e7b
    DEC EBP                             ; 004e2e81
    MOV EDX,dword ptr [EAX + 0x531c]    ; 004e2e82
    MOV dword ptr [EAX + 0x1318],EBP    ; 004e2e88
    CMP EDX,0x8                         ; 004e2e8e
    JNC 0x004e2e6c                      ; 004e2e91
        ;   XREF to: 004e2e6c (CONDITIONAL_JUMP)  ; LAB_004e2e6c
    POP EDI                             ; 004e2e93
    POP EBP                             ; 004e2e94
        ;   Label: LAB_004e2e94
    POP EBX                             ; 004e2e95
    RET                                 ; 004e2e96

