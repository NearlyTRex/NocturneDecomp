; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_004fea40(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fea40
        ;   Label: sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_004fea40
    PUSH ESI                            ; 004fea41
    PUSH EDI                            ; 004fea42
    SUB ESP,0x8                         ; 004fea43
    MOV ESI,dword ptr [ESP + 0x20]      ; 004fea46
    XOR EDI,EDI                         ; 004fea4a
    MOV ESI,dword ptr [ESI + 0x10]      ; 004fea4c
    XOR EDX,EDX                         ; 004fea4f
        ;   Label: LAB_004fea4f
    TEST ESI,ESI                        ; 004fea51
    JLE 0x004fea86                      ; 004fea53
        ;   XREF to: 004fea86 (CONDITIONAL_JUMP)  ; LAB_004fea86
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fea55
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004fea59
    ADD EAX,EDI                         ; 004fea5d
    ADD ECX,EDI                         ; 004fea5f
    FLD float ptr [EAX]                 ; 004fea61
        ;   Label: LAB_004fea61
    MOV EBX,dword ptr [ECX]             ; 004fea63
    FLD ST0                             ; 004fea65
    FMUL double ptr [EBX*0x8 + 0x601360] ; 004fea67
    ADD ECX,0x180                       ; 004fea6e
    ADD EAX,0x180                       ; 004fea74
    INC EDX                             ; 004fea79
    FSTP ST1                            ; 004fea7a
    FSTP float ptr [EAX + 0xfffffe80]   ; 004fea7c
    CMP EDX,ESI                         ; 004fea82
    JL 0x004fea61                       ; 004fea84
        ;   XREF to: 004fea61 (CONDITIONAL_JUMP)  ; LAB_004fea61
    ADD EDI,0x4                         ; 004fea86
        ;   Label: LAB_004fea86
    CMP EDI,0x80                        ; 004fea89
    JNZ 0x004fea4f                      ; 004fea8f
        ;   XREF to: 004fea4f (CONDITIONAL_JUMP)  ; LAB_004fea4f
    ADD ESP,0x8                         ; 004fea91
    POP EDI                             ; 004fea94
    POP ESI                             ; 004fea95
    POP EBX                             ; 004fea96
    RET                                 ; 004fea97

