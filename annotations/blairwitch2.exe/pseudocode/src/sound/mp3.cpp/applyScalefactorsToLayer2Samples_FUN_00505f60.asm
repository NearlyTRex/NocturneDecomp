; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_00505f60(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505f60
        ;   Label: sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_00505f60
    PUSH ESI                            ; 00505f61
    PUSH EDI                            ; 00505f62
    SUB ESP,0x8                         ; 00505f63
    MOV ESI,dword ptr [ESP + 0x20]      ; 00505f66
    XOR EDI,EDI                         ; 00505f6a
    MOV ESI,dword ptr [ESI + 0x10]      ; 00505f6c
    XOR EDX,EDX                         ; 00505f6f
        ;   Label: LAB_00505f6f
    TEST ESI,ESI                        ; 00505f71
    JLE 0x00505fa6                      ; 00505f73
        ;   XREF to: 00505fa6 (CONDITIONAL_JUMP)  ; LAB_00505fa6
    MOV EAX,dword ptr [ESP + 0x18]      ; 00505f75
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00505f79
    ADD EAX,EDI                         ; 00505f7d
    ADD ECX,EDI                         ; 00505f7f
    FLD float ptr [EAX]                 ; 00505f81
        ;   Label: LAB_00505f81
    MOV EBX,dword ptr [ECX]             ; 00505f83
    FLD ST0                             ; 00505f85
    FMUL double ptr [EBX*0x8 + 0x619030] ; 00505f87
    ADD ECX,0x180                       ; 00505f8e
    ADD EAX,0x180                       ; 00505f94
    INC EDX                             ; 00505f99
    FSTP ST1                            ; 00505f9a
    FSTP float ptr [EAX + 0xfffffe80]   ; 00505f9c
    CMP EDX,ESI                         ; 00505fa2
    JL 0x00505f81                       ; 00505fa4
        ;   XREF to: 00505f81 (CONDITIONAL_JUMP)  ; LAB_00505f81
    ADD EDI,0x4                         ; 00505fa6
        ;   Label: LAB_00505fa6
    CMP EDI,0x80                        ; 00505fa9
    JNZ 0x00505f6f                      ; 00505faf
        ;   XREF to: 00505f6f (CONDITIONAL_JUMP)  ; LAB_00505f6f
    ADD ESP,0x8                         ; 00505fb1
    POP EDI                             ; 00505fb4
    POP ESI                             ; 00505fb5
    POP EBX                             ; 00505fb6
    RET                                 ; 00505fb7

