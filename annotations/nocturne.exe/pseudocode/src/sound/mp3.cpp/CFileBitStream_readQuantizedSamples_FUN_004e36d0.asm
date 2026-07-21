; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0(undefined4 param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e893b
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e36d0
        ;   Label: sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0
    PUSH ESI                            ; 004e36d1
    PUSH EDI                            ; 004e36d2
    PUSH EBP                            ; 004e36d3
    SUB ESP,0x10                        ; 004e36d4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e36d7
    MOV EBP,dword ptr [EAX + 0x10]      ; 004e36db
    MOV EAX,dword ptr [EAX + 0x14]      ; 004e36de
    MOV dword ptr [ESP],EAX             ; 004e36e1
    TEST EAX,EAX                        ; 004e36e4
    JLE 0x004e373f                      ; 004e36e6
        ;   XREF to: 004e373f (CONDITIONAL_JUMP)  ; LAB_004e373f
    SHL EAX,0x2                         ; 004e36e8
    XOR EDI,EDI                         ; 004e36eb
    MOV dword ptr [ESP + 0x4],EAX       ; 004e36ed
    MOV dword ptr [ESP + 0xc],EDI       ; 004e36f1
    XOR EDI,EDI                         ; 004e36f5
        ;   Label: LAB_004e36f5
    TEST EBP,EBP                        ; 004e36f7
    JLE 0x004e372c                      ; 004e36f9
        ;   XREF to: 004e372c (CONDITIONAL_JUMP)  ; LAB_004e372c
    MOV ESI,dword ptr [ESP + 0xc]       ; 004e36fb
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e36ff
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e3703
    MOV EAX,dword ptr [ESP + 0x28]      ; 004e3707
    ADD ESI,EDX                         ; 004e370b
    ADD EBX,EAX                         ; 004e370d
    MOV EAX,dword ptr [ESI]             ; 004e370f
        ;   Label: LAB_004e370f
    TEST EAX,EAX                        ; 004e3711
    JNZ 0x004e379d                      ; 004e3713
        ;   XREF to: 004e379d (CONDITIONAL_JUMP)  ; LAB_004e379d
    MOV dword ptr [EBX],EAX             ; 004e3719
        ;   Label: LAB_004e3719
    ADD EBX,0x180                       ; 004e371b
    INC EDI                             ; 004e3721
    ADD ESI,0x80                        ; 004e3722
    CMP EDI,EBP                         ; 004e3728
    JL 0x004e370f                       ; 004e372a
        ;   XREF to: 004e370f (CONDITIONAL_JUMP)  ; LAB_004e370f
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e372c
        ;   Label: LAB_004e372c
    ADD ECX,0x4                         ; 004e3730
    MOV EBX,dword ptr [ESP + 0x4]       ; 004e3733
    MOV dword ptr [ESP + 0xc],ECX       ; 004e3737
    CMP ECX,EBX                         ; 004e373b
    JL 0x004e36f5                       ; 004e373d
        ;   XREF to: 004e36f5 (CONDITIONAL_JUMP)  ; LAB_004e36f5
    MOV ESI,dword ptr [ESP]             ; 004e373f
        ;   Label: LAB_004e373f
    CMP ESI,0x20                        ; 004e3742
    JGE 0x004e3795                      ; 004e3745
        ;   XREF to: 004e3795 (CONDITIONAL_JUMP)  ; LAB_004e3795
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e3747
    LEA EDI,[ESI*0x4 + 0x0]             ; 004e374b
    ADD EAX,EDI                         ; 004e3752
    MOV dword ptr [ESP + 0x8],EAX       ; 004e3754
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e3758
        ;   Label: LAB_004e3758
    MOV EAX,dword ptr [EAX]             ; 004e375c
    TEST EAX,EAX                        ; 004e375e
    JNZ 0x004e37b1                      ; 004e3760
        ;   XREF to: 004e37b1 (CONDITIONAL_JUMP)  ; LAB_004e37b1
    XOR EBX,EBX                         ; 004e3762
        ;   Label: LAB_004e3762
    TEST EBP,EBP                        ; 004e3764
    JLE 0x004e377f                      ; 004e3766
        ;   XREF to: 004e377f (CONDITIONAL_JUMP)  ; LAB_004e377f
    MOV ESI,dword ptr [ESP + 0x28]      ; 004e3768
    ADD ESI,EDI                         ; 004e376c
    ADD ESI,0x180                       ; 004e376e
        ;   Label: LAB_004e376e
    INC EBX                             ; 004e3774
    MOV dword ptr [ESI + 0xfffffe80],EAX ; 004e3775
    CMP EBX,EBP                         ; 004e377b
    JL 0x004e376e                       ; 004e377d
        ;   XREF to: 004e376e (CONDITIONAL_JUMP)  ; LAB_004e376e
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e377f
        ;   Label: LAB_004e377f
    ADD EBX,0x4                         ; 004e3783
    ADD EDI,0x4                         ; 004e3786
    MOV dword ptr [ESP + 0x8],EBX       ; 004e3789
    CMP EDI,0x80                        ; 004e378d
    JL 0x004e3758                       ; 004e3793
        ;   XREF to: 004e3758 (CONDITIONAL_JUMP)  ; LAB_004e3758
    ADD ESP,0x10                        ; 004e3795
        ;   Label: LAB_004e3795
    POP EBP                             ; 004e3798
    POP EDI                             ; 004e3799
    POP ESI                             ; 004e379a
    POP EBX                             ; 004e379b
    RET                                 ; 004e379c
    INC EAX                             ; 004e379d
        ;   Label: LAB_004e379d
    PUSH EAX                            ; 004e379e
    MOV ECX,dword ptr [ESP + 0x28]      ; 004e379f
    PUSH ECX                            ; 004e37a3
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e37a4
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e37a9
    JMP 0x004e3719                      ; 004e37ac
        ;   XREF to: 004e3719 (UNCONDITIONAL_JUMP)  ; LAB_004e3719
    INC EAX                             ; 004e37b1
        ;   Label: LAB_004e37b1
    PUSH EAX                            ; 004e37b2
    MOV ESI,dword ptr [ESP + 0x28]      ; 004e37b3
    PUSH ESI                            ; 004e37b7
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e37b8
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e37bd
    JMP 0x004e3762                      ; 004e37c0
        ;   XREF to: 004e3762 (UNCONDITIONAL_JUMP)  ; LAB_004e3762

