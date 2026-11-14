; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_findFreeSfxSample_FUN_0056df60(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c78ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056df60
        ;   Label: sound_sndmain.cpp_findFreeSfxSample_FUN_0056df60
    PUSH ESI                            ; 0056df61
    PUSH EDI                            ; 0056df62
    PUSH EBP                            ; 0056df63
    MOV EDX,dword ptr [0x02c78ff0]      ; 0056df64 | DAT_02c78ff0
    XOR ECX,ECX                         ; 0056df6a
    XOR EBX,EBX                         ; 0056df6c
    INC EDX                             ; 0056df6e
        ;   Label: LAB_0056df6e
    CMP EDX,0x40                        ; 0056df6f
    JL 0x0056df76                       ; 0056df72
        ;   XREF to: 0056df76 (CONDITIONAL_JUMP)  ; LAB_0056df76
    MOV EDX,EBX                         ; 0056df74
    IMUL EAX,EDX,0x1b0                  ; 0056df76
        ;   Label: LAB_0056df76
    MOV ESI,dword ptr [EAX + 0x2c79144] ; 0056df7c
    CMP EBX,ESI                         ; 0056df82
    JZ 0x0056df99                       ; 0056df84
        ;   XREF to: 0056df99 (CONDITIONAL_JUMP)  ; LAB_0056df99
    INC ECX                             ; 0056df86
        ;   Label: LAB_0056df86
    CMP ECX,0x40                        ; 0056df87
    JL 0x0056df6e                       ; 0056df8a
        ;   XREF to: 0056df6e (CONDITIONAL_JUMP)  ; LAB_0056df6e
    XOR EAX,EAX                         ; 0056df8c
    MOV dword ptr [0x02c78ff0],EDX      ; 0056df8e | DAT_02c78ff0
    POP EBP                             ; 0056df94
    POP EDI                             ; 0056df95
    POP ESI                             ; 0056df96
    POP EBX                             ; 0056df97
    RET                                 ; 0056df98
    MOV EDI,dword ptr [EAX + 0x2c79148] ; 0056df99
        ;   Label: LAB_0056df99
    CMP ESI,EDI                         ; 0056df9f
    JNZ 0x0056df86                      ; 0056dfa1
        ;   XREF to: 0056df86 (CONDITIONAL_JUMP)  ; LAB_0056df86
    MOV EBP,dword ptr [EAX + 0x2c79150] ; 0056dfa3
    CMP EDI,EBP                         ; 0056dfa9
    JNZ 0x0056df86                      ; 0056dfab
        ;   XREF to: 0056df86 (CONDITIONAL_JUMP)  ; LAB_0056df86
    CMP EBP,dword ptr [EAX + 0x2c791a0] ; 0056dfad
    JNZ 0x0056df86                      ; 0056dfb3
        ;   XREF to: 0056df86 (CONDITIONAL_JUMP)  ; LAB_0056df86
    ADD EAX,0x2c78ff4                   ; 0056dfb5
    MOV dword ptr [0x02c78ff0],EDX      ; 0056dfba | DAT_02c78ff0
    POP EBP                             ; 0056dfc0
    POP EDI                             ; 0056dfc1
    POP ESI                             ; 0056dfc2
    POP EBX                             ; 0056dfc3
    RET                                 ; 0056dfc4

