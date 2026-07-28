; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_mp3_cpp_calculateMainDataSize_FUN_004e77d0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e8e97
;
; Referenced Globals:
;   undefined4 DAT_005bbc48
;   undefined4 DAT_005bbd00
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e77d0
        ;   Label: sound_mp3.cpp_calculateMainDataSize_FUN_004e77d0
    PUSH ESI                            ; 004e77d1
    SUB ESP,0x8                         ; 004e77d2
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e77d5
    MOV EDX,dword ptr [EDX]             ; 004e77d9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e77db
    SUB EAX,EDX                         ; 004e77e2
    SHL EAX,0x2                         ; 004e77e4
    MOV EDX,EAX                         ; 004e77e7
    SHL EAX,0x4                         ; 004e77e9
    SUB EAX,EDX                         ; 004e77ec
    MOV EDX,EAX                         ; 004e77ee
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e77f0
    MOV EAX,dword ptr [EAX + 0xc]       ; 004e77f4
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x5bbd00] ; 004e77f7 | DAT_005bbd00
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e77fe
    ADD EAX,EDX                         ; 004e7805
    SHL EAX,0x4                         ; 004e7807
    MOV dword ptr [ESP + 0x4],EAX       ; 004e780a
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e780e
    MOV EDX,dword ptr [EAX]             ; 004e7812
    SHL EDX,0x5                         ; 004e7814
    MOV EAX,dword ptr [EAX + 0x10]      ; 004e7817
    FILD dword ptr [ESP + 0x4]          ; 004e781a
    FDIV double ptr [EDX + EAX*0x8 + 0x5bbc48] ; 004e781e | DAT_005bbc48
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e7825
    CALL crt_math.c_round_FUN_00563a30  ; 004e7829
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EDX,dword ptr [EAX]             ; 004e782e
    FISTP dword ptr [ESP]               ; 004e7830
    TEST EDX,EDX                        ; 004e7833
    JZ 0x004e7872                       ; 004e7835
        ;   XREF to: 004e7872 (CONDITIONAL_JUMP)  ; LAB_004e7872
    CMP dword ptr [ESP + 0x24],0x1      ; 004e7837
    JNZ 0x004e786c                      ; 004e783c
        ;   XREF to: 004e786c (CONDITIONAL_JUMP)  ; LAB_004e786c
    SUB dword ptr [ESP],0x11            ; 004e783e
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e7842
        ;   Label: LAB_004e7842
    CMP dword ptr [EAX + 0x14],0x0      ; 004e7846
    JZ 0x004e784f                       ; 004e784a
        ;   XREF to: 004e784f (CONDITIONAL_JUMP)  ; LAB_004e784f
    INC dword ptr [ESP]                 ; 004e784c
    MOV EBX,dword ptr [ESP]             ; 004e784f
        ;   Label: LAB_004e784f
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e7852
    SUB EBX,0x4                         ; 004e7856
    MOV ESI,dword ptr [EAX + 0x8]       ; 004e7859
    MOV dword ptr [ESP],EBX             ; 004e785c
    TEST ESI,ESI                        ; 004e785f
    JNZ 0x004e789a                      ; 004e7861
        ;   XREF to: 004e789a (CONDITIONAL_JUMP)  ; LAB_004e789a
    MOV EAX,dword ptr [ESP]             ; 004e7863
    ADD ESP,0x8                         ; 004e7866
    POP ESI                             ; 004e7869
    POP EBX                             ; 004e786a
    RET                                 ; 004e786b
    SUB dword ptr [ESP],0x20            ; 004e786c
        ;   Label: LAB_004e786c
    JMP 0x004e7842                      ; 004e7870
        ;   XREF to: 004e7842 (UNCONDITIONAL_JUMP)  ; LAB_004e7842
    MOV EAX,dword ptr [ESP]             ; 004e7872
        ;   Label: LAB_004e7872
    MOV EDX,EAX                         ; 004e7875
    SAR EDX,0x1f                        ; 004e7877
    SUB EAX,EDX                         ; 004e787a
    SAR EAX,0x1                         ; 004e787c
    MOV ECX,dword ptr [ESP + 0x24]      ; 004e787e
    MOV dword ptr [ESP],EAX             ; 004e7882
    CMP ECX,0x1                         ; 004e7885
    JNZ 0x004e7892                      ; 004e7888
        ;   XREF to: 004e7892 (CONDITIONAL_JUMP)  ; LAB_004e7892
    LEA ESI,[EAX + -0x9]                ; 004e788a
    MOV dword ptr [ESP],ESI             ; 004e788d
    JMP 0x004e7842                      ; 004e7890
        ;   XREF to: 004e7842 (UNCONDITIONAL_JUMP)  ; LAB_004e7842
    LEA EBX,[EAX + -0x11]               ; 004e7892
        ;   Label: LAB_004e7892
    MOV dword ptr [ESP],EBX             ; 004e7895
    JMP 0x004e7842                      ; 004e7898
        ;   XREF to: 004e7842 (UNCONDITIONAL_JUMP)  ; LAB_004e7842
    PUSH EDI                            ; 004e789a
        ;   Label: LAB_004e789a
    LEA EDI,[EBX + -0x2]                ; 004e789b
    MOV dword ptr [ESP + 0x4],EDI       ; 004e789e
    POP EDI                             ; 004e78a2
    MOV EAX,dword ptr [ESP]             ; 004e78a3
    ADD ESP,0x8                         ; 004e78a6
    POP ESI                             ; 004e78a9
    POP EBX                             ; 004e78aa
    RET                                 ; 004e78ab

