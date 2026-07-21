; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_004e7720(int param_1,undefined4 param_2,float *param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x4c]:4  local_4c
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e9237
;
; Called Functions:
;   sound_mp3.cpp_applyPolyphaseWindow_FUN_004e7210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7720
        ;   Label: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_004e7720
    SUB ESP,0x90                        ; 004e7721
    MOV EBX,dword ptr [ESP + 0xa4]      ; 004e7727
    MOV EAX,dword ptr [ESP + 0xac]      ; 004e772e
    CMP dword ptr [EAX + 0x10],0x0      ; 004e7735
    JZ 0x004e77c6                       ; 004e7739
        ;   XREF to: 004e77c6 (CONDITIONAL_JUMP)  ; LAB_004e77c6
    CMP dword ptr [EAX + 0x18],0x0      ; 004e773f
    JZ 0x004e77c6                       ; 004e7743
        ;   XREF to: 004e77c6 (CONDITIONAL_JUMP)  ; LAB_004e77c6
    CMP EBX,0x2                         ; 004e7749
    JGE 0x004e77c6                      ; 004e774c
        ;   XREF to: 004e77c6 (CONDITIONAL_JUMP)  ; LAB_004e77c6
    XOR EAX,EAX                         ; 004e774e
    PUSH ESI                            ; 004e7750
        ;   Label: LAB_004e7750
    PUSH EAX                            ; 004e7751
    LEA EAX,[ESP + 0x8]                 ; 004e7752
    PUSH EAX                            ; 004e7756
    MOV ESI,dword ptr [ESP + 0xa8]      ; 004e7757
    PUSH ESI                            ; 004e775e
    CALL sound_mp3.cpp_applyPolyphaseWindow_FUN_004e7210 ; 004e775f
        ;   XREF to: 004e7210 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_applyPolyphaseWindow_FUN_004e7210()
    ADD ESP,0xc                         ; 004e7764
    MOV EDX,dword ptr [ESP + 0xac]      ; 004e7767
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e776e
    MOV ECX,dword ptr [ESP + 0x9c]      ; 004e7775
    ADD EAX,EDX                         ; 004e777c
    ADD ECX,0x7430                      ; 004e777e
    SHL EAX,0x8                         ; 004e7784
    ADD ECX,EAX                         ; 004e7787
    LEA EAX,[EBX*0x8 + 0x0]             ; 004e7789
    ADD EAX,EBX                         ; 004e7790
    SHL EAX,0x3                         ; 004e7792
    LEA EDX,[ECX + EAX*0x1]             ; 004e7795
    MOV ECX,dword ptr [ESP + 0xa4]      ; 004e7798
    XOR EAX,EAX                         ; 004e779f
    POP ESI                             ; 004e77a1
    ADD EDX,0x4                         ; 004e77a2
        ;   Label: LAB_004e77a2
    FLD float ptr [ESP + EAX*0x4]       ; 004e77a5
    ADD ECX,0x4                         ; 004e77a8
    FADD float ptr [EDX + -0x4]         ; 004e77ab
    INC EAX                             ; 004e77ae
    FSTP float ptr [ECX + -0x4]         ; 004e77af
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x44] ; 004e77b2
    MOV dword ptr [EDX + -0x4],EBX      ; 004e77b6
    CMP EAX,0x12                        ; 004e77b9
    JL 0x004e77a2                       ; 004e77bc
        ;   XREF to: 004e77a2 (CONDITIONAL_JUMP)  ; LAB_004e77a2
    ADD ESP,0x90                        ; 004e77be
    POP EBX                             ; 004e77c4
    RET                                 ; 004e77c5
    MOV EAX,dword ptr [EAX + 0x14]      ; 004e77c6
        ;   Label: LAB_004e77c6
    JMP 0x004e7750                      ; 004e77c9
        ;   XREF to: 004e7750 (UNCONDITIONAL_JUMP)  ; LAB_004e7750

